// Generated from exact SPC700 assembly source sites. Do not edit.
#include "eb/spc700_audio_cpu.hpp"
#include "generated_audio_program.hpp"
namespace eb {
namespace {
// Assembly source label: start.
bool execute_audio_start_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:5 CLRP
    case 0x0500: if (cpu.read_byte(0x0500) != 0x20) return false; cpu.execute_instruction<0x20>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:6 MOV X, #UNK01CF & $FF
    case 0x0501: if (cpu.read_byte(0x0501) != 0xCD || cpu.read_byte(0x0502) != 0xCF) return false; cpu.execute_instruction<0xCD>(0x00CF, 2); return true;
    // src/spc700/main.spc700.s:7 MOV SP, X
    case 0x0503: if (cpu.read_byte(0x0503) != 0xBD) return false; cpu.execute_instruction<0xBD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:8 MOV A, #$00
    case 0x0504: if (cpu.read_byte(0x0504) != 0xE8 || cpu.read_byte(0x0505) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:9 MOV X, A
    case 0x0506: if (cpu.read_byte(0x0506) != 0x5D) return false; cpu.execute_instruction<0x5D>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0507.
bool execute_audio_unresolved_unk0507_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:11 MOV (X)+, A
    case 0x0507: if (cpu.read_byte(0x0507) != 0xAF) return false; cpu.execute_instruction<0xAF>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:12 CMP X, #$E0
    case 0x0508: if (cpu.read_byte(0x0508) != 0xC8 || cpu.read_byte(0x0509) != 0xE0) return false; cpu.execute_instruction<0xC8>(0x00E0, 2); return true;
    // src/spc700/main.spc700.s:13 BNE UNK0507
    case 0x050A: if (cpu.read_byte(0x050A) != 0xD0 || cpu.read_byte(0x050B) != 0xFB) return false; cpu.execute_instruction<0xD0>(0x00FB, 2); return true;
    // src/spc700/main.spc700.s:14 CALL UNK16A5
    case 0x050C: if (cpu.read_byte(0x050C) != 0x3F || cpu.read_byte(0x050D) != 0xA5 || cpu.read_byte(0x050E) != 0x16) return false; cpu.execute_instruction<0x3F>(0x16A5, 3); return true;
    // src/spc700/main.spc700.s:15 MOV A, #$55
    case 0x050F: if (cpu.read_byte(0x050F) != 0xE8 || cpu.read_byte(0x0510) != 0x55) return false; cpu.execute_instruction<0xE8>(0x0055, 2); return true;
    // src/spc700/main.spc700.s:16 MOV RANDOM_HI, A
    case 0x0511: if (cpu.read_byte(0x0511) != 0xC4 || cpu.read_byte(0x0512) != 0x18) return false; cpu.execute_instruction<0xC4>(0x0018, 2); return true;
    // src/spc700/main.spc700.s:17 MOV RANDOM_LO, A
    case 0x0513: if (cpu.read_byte(0x0513) != 0xC4 || cpu.read_byte(0x0514) != 0x19) return false; cpu.execute_instruction<0xC4>(0x0019, 2); return true;
    // src/spc700/main.spc700.s:18 MOV A, #$00
    case 0x0515: if (cpu.read_byte(0x0515) != 0xE8 || cpu.read_byte(0x0516) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:19 INC A
    case 0x0517: if (cpu.read_byte(0x0517) != 0xBC) return false; cpu.execute_instruction<0xBC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:20 CALL SET_ECHO_DELAY
    case 0x0518: if (cpu.read_byte(0x0518) != 0x3F || cpu.read_byte(0x0519) != 0x2C || cpu.read_byte(0x051A) != 0x0B) return false; cpu.execute_instruction<0x3F>(0x0B2C, 3); return true;
    // src/spc700/main.spc700.s:21 SET5 FLG_MIRROR
    case 0x051B: if (cpu.read_byte(0x051B) != 0xA2 || cpu.read_byte(0x051C) != 0x48) return false; cpu.execute_instruction<0xA2>(0x0048, 2); return true;
    // src/spc700/main.spc700.s:22 MOV A, #$70
    case 0x051D: if (cpu.read_byte(0x051D) != 0xE8 || cpu.read_byte(0x051E) != 0x70) return false; cpu.execute_instruction<0xE8>(0x0070, 2); return true;
    // src/spc700/main.spc700.s:23 MOV Y, #$0C
    case 0x051F: if (cpu.read_byte(0x051F) != 0x8D || cpu.read_byte(0x0520) != 0x0C) return false; cpu.execute_instruction<0x8D>(0x000C, 2); return true;
    // src/spc700/main.spc700.s:24 CALL WRITE_DSP
    case 0x0521: if (cpu.read_byte(0x0521) != 0x3F || cpu.read_byte(0x0522) != 0x49 || cpu.read_byte(0x0523) != 0x07) return false; cpu.execute_instruction<0x3F>(0x0749, 3); return true;
    // src/spc700/main.spc700.s:25 MOV Y, #$1C
    case 0x0524: if (cpu.read_byte(0x0524) != 0x8D || cpu.read_byte(0x0525) != 0x1C) return false; cpu.execute_instruction<0x8D>(0x001C, 2); return true;
    // src/spc700/main.spc700.s:26 CALL WRITE_DSP
    case 0x0526: if (cpu.read_byte(0x0526) != 0x3F || cpu.read_byte(0x0527) != 0x49 || cpu.read_byte(0x0528) != 0x07) return false; cpu.execute_instruction<0x3F>(0x0749, 3); return true;
    // src/spc700/main.spc700.s:27 MOV A, #$6C
    case 0x0529: if (cpu.read_byte(0x0529) != 0xE8 || cpu.read_byte(0x052A) != 0x6C) return false; cpu.execute_instruction<0xE8>(0x006C, 2); return true;
    // src/spc700/main.spc700.s:28 MOV Y, #$5D
    case 0x052B: if (cpu.read_byte(0x052B) != 0x8D || cpu.read_byte(0x052C) != 0x5D) return false; cpu.execute_instruction<0x8D>(0x005D, 2); return true;
    // src/spc700/main.spc700.s:29 CALL WRITE_DSP
    case 0x052D: if (cpu.read_byte(0x052D) != 0x3F || cpu.read_byte(0x052E) != 0x49 || cpu.read_byte(0x052F) != 0x07) return false; cpu.execute_instruction<0x3F>(0x0749, 3); return true;
    // src/spc700/main.spc700.s:30 MOV A, #$F0
    case 0x0530: if (cpu.read_byte(0x0530) != 0xE8 || cpu.read_byte(0x0531) != 0xF0) return false; cpu.execute_instruction<0xE8>(0x00F0, 2); return true;
    // src/spc700/main.spc700.s:31 MOV.w CONTROL, A
    case 0x0532: if (cpu.read_byte(0x0532) != 0xC5 || cpu.read_byte(0x0533) != 0xF1 || cpu.read_byte(0x0534) != 0x00) return false; cpu.execute_instruction<0xC5>(0x00F1, 3); return true;
    // src/spc700/main.spc700.s:32 MOV A, #$10
    case 0x0535: if (cpu.read_byte(0x0535) != 0xE8 || cpu.read_byte(0x0536) != 0x10) return false; cpu.execute_instruction<0xE8>(0x0010, 2); return true;
    // src/spc700/main.spc700.s:33 MOV.w T0DIV, A
    case 0x0537: if (cpu.read_byte(0x0537) != 0xC5 || cpu.read_byte(0x0538) != 0xFA || cpu.read_byte(0x0539) != 0x00) return false; cpu.execute_instruction<0xC5>(0x00FA, 3); return true;
    // src/spc700/main.spc700.s:34 MOV UNK0053, A
    case 0x053A: if (cpu.read_byte(0x053A) != 0xC4 || cpu.read_byte(0x053B) != 0x53) return false; cpu.execute_instruction<0xC4>(0x0053, 2); return true;
    // src/spc700/main.spc700.s:35 MOV A, #$01
    case 0x053C: if (cpu.read_byte(0x053C) != 0xE8 || cpu.read_byte(0x053D) != 0x01) return false; cpu.execute_instruction<0xE8>(0x0001, 2); return true;
    // src/spc700/main.spc700.s:36 MOV.w CONTROL, A
    case 0x053E: if (cpu.read_byte(0x053E) != 0xC5 || cpu.read_byte(0x053F) != 0xF1 || cpu.read_byte(0x0540) != 0x00) return false; cpu.execute_instruction<0xC5>(0x00F1, 3); return true;
    // src/spc700/main.spc700.s:37 BNE MAIN_LOOP
    case 0x0541: if (cpu.read_byte(0x0541) != 0xD0 || cpu.read_byte(0x0542) != 0x03) return false; cpu.execute_instruction<0xD0>(0x0003, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0543.
bool execute_audio_unresolved_unk0543_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:39 JMP UNK05D8
    case 0x0543: if (cpu.read_byte(0x0543) != 0x5F || cpu.read_byte(0x0544) != 0xD8 || cpu.read_byte(0x0545) != 0x05) return false; cpu.execute_instruction<0x5F>(0x05D8, 3); return true;
    default: return false;
    }
}
// Assembly source label: MAIN_LOOP.
bool execute_audio_main_loop_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:42 MOV A, FAST_FORWARD_FLAG
    case 0x0546: if (cpu.read_byte(0x0546) != 0xE4 || cpu.read_byte(0x0547) != 0x1B) return false; cpu.execute_instruction<0xE4>(0x001B, 2); return true;
    // src/spc700/main.spc700.s:43 BNE UNK0543
    case 0x0548: if (cpu.read_byte(0x0548) != 0xD0 || cpu.read_byte(0x0549) != 0xF9) return false; cpu.execute_instruction<0xD0>(0x00F9, 2); return true;
    // src/spc700/main.spc700.s:44 MOV Y, #$0A
    case 0x054A: if (cpu.read_byte(0x054A) != 0x8D || cpu.read_byte(0x054B) != 0x0A) return false; cpu.execute_instruction<0x8D>(0x000A, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK054C.
bool execute_audio_unresolved_unk054c_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:46 CMP Y, #$05
    case 0x054C: if (cpu.read_byte(0x054C) != 0xAD || cpu.read_byte(0x054D) != 0x05) return false; cpu.execute_instruction<0xAD>(0x0005, 2); return true;
    // src/spc700/main.spc700.s:47 BEQ UNK0557
    case 0x054E: if (cpu.read_byte(0x054E) != 0xF0 || cpu.read_byte(0x054F) != 0x07) return false; cpu.execute_instruction<0xF0>(0x0007, 2); return true;
    // src/spc700/main.spc700.s:48 BCS UNK055A
    case 0x0550: if (cpu.read_byte(0x0550) != 0xB0 || cpu.read_byte(0x0551) != 0x08) return false; cpu.execute_instruction<0xB0>(0x0008, 2); return true;
    // src/spc700/main.spc700.s:49 CMP ECHO_COUNTER, EDL_MIRROR
    case 0x0552: if (cpu.read_byte(0x0552) != 0x69 || cpu.read_byte(0x0553) != 0x4D || cpu.read_byte(0x0554) != 0x4C) return false; cpu.execute_instruction<0x69>(0x4C4D, 3); return true;
    // src/spc700/main.spc700.s:50 BNE UNK0568
    case 0x0555: if (cpu.read_byte(0x0555) != 0xD0 || cpu.read_byte(0x0556) != 0x11) return false; cpu.execute_instruction<0xD0>(0x0011, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0557.
bool execute_audio_unresolved_unk0557_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:52 BBS7.b ECHO_COUNTER, UNK0568
    case 0x0557: if (cpu.read_byte(0x0557) != 0xE3 || cpu.read_byte(0x0558) != 0x4C || cpu.read_byte(0x0559) != 0x0E) return false; cpu.execute_instruction<0xE3>(0x0E4C, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK055A.
bool execute_audio_unresolved_unk055a_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:54 MOV A, UNK0EA8 - 1 + Y
    case 0x055A: if (cpu.read_byte(0x055A) != 0xF6 || cpu.read_byte(0x055B) != 0xA7 || cpu.read_byte(0x055C) != 0x0E) return false; cpu.execute_instruction<0xF6>(0x0EA7, 3); return true;
    // src/spc700/main.spc700.s:55 MOV.w DSPADDR, A
    case 0x055D: if (cpu.read_byte(0x055D) != 0xC5 || cpu.read_byte(0x055E) != 0xF2 || cpu.read_byte(0x055F) != 0x00) return false; cpu.execute_instruction<0xC5>(0x00F2, 3); return true;
    // src/spc700/main.spc700.s:56 MOV A, UNK0EB2 - 1 + Y
    case 0x0560: if (cpu.read_byte(0x0560) != 0xF6 || cpu.read_byte(0x0561) != 0xB1 || cpu.read_byte(0x0562) != 0x0E) return false; cpu.execute_instruction<0xF6>(0x0EB1, 3); return true;
    // src/spc700/main.spc700.s:57 MOV X, A
    case 0x0563: if (cpu.read_byte(0x0563) != 0x5D) return false; cpu.execute_instruction<0x5D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:58 MOV A, (X)
    case 0x0564: if (cpu.read_byte(0x0564) != 0xE6) return false; cpu.execute_instruction<0xE6>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:59 MOV.w DSPDATA, A
    case 0x0565: if (cpu.read_byte(0x0565) != 0xC5 || cpu.read_byte(0x0566) != 0xF3 || cpu.read_byte(0x0567) != 0x00) return false; cpu.execute_instruction<0xC5>(0x00F3, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0568.
bool execute_audio_unresolved_unk0568_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:61 DBNZ Y, UNK054C
    case 0x0568: if (cpu.read_byte(0x0568) != 0xFE || cpu.read_byte(0x0569) != 0xE2) return false; cpu.execute_instruction<0xFE>(0x00E2, 2); return true;
    // src/spc700/main.spc700.s:62 MOV KON_MIRROR, Y
    case 0x056A: if (cpu.read_byte(0x056A) != 0xCB || cpu.read_byte(0x056B) != 0x45) return false; cpu.execute_instruction<0xCB>(0x0045, 2); return true;
    // src/spc700/main.spc700.s:63 MOV KOF_MIRROR, Y
    case 0x056C: if (cpu.read_byte(0x056C) != 0xCB || cpu.read_byte(0x056D) != 0x46) return false; cpu.execute_instruction<0xCB>(0x0046, 2); return true;
    // src/spc700/main.spc700.s:64 MOV A, RANDOM_HI
    case 0x056E: if (cpu.read_byte(0x056E) != 0xE4 || cpu.read_byte(0x056F) != 0x18) return false; cpu.execute_instruction<0xE4>(0x0018, 2); return true;
    // src/spc700/main.spc700.s:65 EOR A, RANDOM_LO
    case 0x0570: if (cpu.read_byte(0x0570) != 0x44 || cpu.read_byte(0x0571) != 0x19) return false; cpu.execute_instruction<0x44>(0x0019, 2); return true;
    // src/spc700/main.spc700.s:66 LSR A
    case 0x0572: if (cpu.read_byte(0x0572) != 0x5C) return false; cpu.execute_instruction<0x5C>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:67 LSR A
    case 0x0573: if (cpu.read_byte(0x0573) != 0x5C) return false; cpu.execute_instruction<0x5C>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:68 NOTC
    case 0x0574: if (cpu.read_byte(0x0574) != 0xED) return false; cpu.execute_instruction<0xED>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:69 ROR RANDOM_HI
    case 0x0575: if (cpu.read_byte(0x0575) != 0x6B || cpu.read_byte(0x0576) != 0x18) return false; cpu.execute_instruction<0x6B>(0x0018, 2); return true;
    // src/spc700/main.spc700.s:70 ROR RANDOM_LO
    case 0x0577: if (cpu.read_byte(0x0577) != 0x6B || cpu.read_byte(0x0578) != 0x19) return false; cpu.execute_instruction<0x6B>(0x0019, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0579.
bool execute_audio_unresolved_unk0579_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:72 MOV.w Y, T0OUT
    case 0x0579: if (cpu.read_byte(0x0579) != 0xEC || cpu.read_byte(0x057A) != 0xFD || cpu.read_byte(0x057B) != 0x00) return false; cpu.execute_instruction<0xEC>(0x00FD, 3); return true;
    // src/spc700/main.spc700.s:73 BEQ UNK0579
    case 0x057C: if (cpu.read_byte(0x057C) != 0xF0 || cpu.read_byte(0x057D) != 0xFB) return false; cpu.execute_instruction<0xF0>(0x00FB, 2); return true;
    // src/spc700/main.spc700.s:74 PUSH Y
    case 0x057E: if (cpu.read_byte(0x057E) != 0x6D) return false; cpu.execute_instruction<0x6D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:75 MOV A, #$20
    case 0x057F: if (cpu.read_byte(0x057F) != 0xE8 || cpu.read_byte(0x0580) != 0x20) return false; cpu.execute_instruction<0xE8>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:76 MUL YA
    case 0x0581: if (cpu.read_byte(0x0581) != 0xCF) return false; cpu.execute_instruction<0xCF>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:77 CLRC
    case 0x0582: if (cpu.read_byte(0x0582) != 0x60) return false; cpu.execute_instruction<0x60>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:78 ADC A, UNK0043
    case 0x0583: if (cpu.read_byte(0x0583) != 0x84 || cpu.read_byte(0x0584) != 0x43) return false; cpu.execute_instruction<0x84>(0x0043, 2); return true;
    // src/spc700/main.spc700.s:79 MOV UNK0043, A
    case 0x0585: if (cpu.read_byte(0x0585) != 0xC4 || cpu.read_byte(0x0586) != 0x43) return false; cpu.execute_instruction<0xC4>(0x0043, 2); return true;
    // src/spc700/main.spc700.s:80 BCC UNK05CD
    case 0x0587: if (cpu.read_byte(0x0587) != 0x90 || cpu.read_byte(0x0588) != 0x44) return false; cpu.execute_instruction<0x90>(0x0044, 2); return true;
    // src/spc700/main.spc700.s:81 JMP UNK0596
    case 0x0589: if (cpu.read_byte(0x0589) != 0x5F || cpu.read_byte(0x058A) != 0x96 || cpu.read_byte(0x058B) != 0x05) return false; cpu.execute_instruction<0x5F>(0x0596, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK058C.
bool execute_audio_unresolved_unk058c_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:84 MOV A, UNK04B1
    case 0x058C: if (cpu.read_byte(0x058C) != 0xE5 || cpu.read_byte(0x058D) != 0xB1 || cpu.read_byte(0x058E) != 0x04) return false; cpu.execute_instruction<0xE5>(0x04B1, 3); return true;
    // src/spc700/main.spc700.s:85 CMP A, #$AA
    case 0x058F: if (cpu.read_byte(0x058F) != 0x68 || cpu.read_byte(0x0590) != 0xAA) return false; cpu.execute_instruction<0x68>(0x00AA, 2); return true;
    // src/spc700/main.spc700.s:86 BNE UNK0596
    case 0x0591: if (cpu.read_byte(0x0591) != 0xD0 || cpu.read_byte(0x0592) != 0x03) return false; cpu.execute_instruction<0xD0>(0x0003, 2); return true;
    // src/spc700/main.spc700.s:87 CALL UNK05FC
    case 0x0593: if (cpu.read_byte(0x0593) != 0x3F || cpu.read_byte(0x0594) != 0xFC || cpu.read_byte(0x0595) != 0x05) return false; cpu.execute_instruction<0x3F>(0x05FC, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0596.
bool execute_audio_unresolved_unk0596_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:89 CALL UNK1609
    case 0x0596: if (cpu.read_byte(0x0596) != 0x3F || cpu.read_byte(0x0597) != 0x09 || cpu.read_byte(0x0598) != 0x16) return false; cpu.execute_instruction<0x3F>(0x1609, 3); return true;
    // src/spc700/main.spc700.s:90 CALL UNK2DAB
    case 0x0599: if (cpu.read_byte(0x0599) != 0x3F || cpu.read_byte(0x059A) != 0xAB || cpu.read_byte(0x059B) != 0x2D) return false; cpu.execute_instruction<0x3F>(0x2DAB, 3); return true;
    // src/spc700/main.spc700.s:91 CALL UNK2DF3
    case 0x059C: if (cpu.read_byte(0x059C) != 0x3F || cpu.read_byte(0x059D) != 0xF3 || cpu.read_byte(0x059E) != 0x2D) return false; cpu.execute_instruction<0x3F>(0x2DF3, 3); return true;
    // src/spc700/main.spc700.s:92 CALL UNK2DD5
    case 0x059F: if (cpu.read_byte(0x059F) != 0x3F || cpu.read_byte(0x05A0) != 0xD5 || cpu.read_byte(0x05A1) != 0x2D) return false; cpu.execute_instruction<0x3F>(0x2DD5, 3); return true;
    // src/spc700/main.spc700.s:93 CALL UNK11DC
    case 0x05A2: if (cpu.read_byte(0x05A2) != 0x3F || cpu.read_byte(0x05A3) != 0xDC || cpu.read_byte(0x05A4) != 0x11) return false; cpu.execute_instruction<0x3F>(0x11DC, 3); return true;
    // src/spc700/main.spc700.s:94 MOV X, #$03
    case 0x05A5: if (cpu.read_byte(0x05A5) != 0xCD || cpu.read_byte(0x05A6) != 0x03) return false; cpu.execute_instruction<0xCD>(0x0003, 2); return true;
    // src/spc700/main.spc700.s:95 CALL READ_PORT
    case 0x05A7: if (cpu.read_byte(0x05A7) != 0x3F || cpu.read_byte(0x05A8) != 0x35 || cpu.read_byte(0x05A9) != 0x06) return false; cpu.execute_instruction<0x3F>(0x0635, 3); return true;
    // src/spc700/main.spc700.s:96 MOV UNK04B3, A
    case 0x05AA: if (cpu.read_byte(0x05AA) != 0xC5 || cpu.read_byte(0x05AB) != 0xB3 || cpu.read_byte(0x05AC) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04B3, 3); return true;
    // src/spc700/main.spc700.s:97 CALL UNK2E1D
    case 0x05AD: if (cpu.read_byte(0x05AD) != 0x3F || cpu.read_byte(0x05AE) != 0x1D || cpu.read_byte(0x05AF) != 0x2E) return false; cpu.execute_instruction<0x3F>(0x2E1D, 3); return true;
    // src/spc700/main.spc700.s:98 CALL UNK11BA
    case 0x05B0: if (cpu.read_byte(0x05B0) != 0x3F || cpu.read_byte(0x05B1) != 0xBA || cpu.read_byte(0x05B2) != 0x11) return false; cpu.execute_instruction<0x3F>(0x11BA, 3); return true;
    // src/spc700/main.spc700.s:99 MOV X, #$02
    case 0x05B3: if (cpu.read_byte(0x05B3) != 0xCD || cpu.read_byte(0x05B4) != 0x02) return false; cpu.execute_instruction<0xCD>(0x0002, 2); return true;
    // src/spc700/main.spc700.s:100 CALL READ_PORT
    case 0x05B5: if (cpu.read_byte(0x05B5) != 0x3F || cpu.read_byte(0x05B6) != 0x35 || cpu.read_byte(0x05B7) != 0x06) return false; cpu.execute_instruction<0x3F>(0x0635, 3); return true;
    // src/spc700/main.spc700.s:101 MOV UNK04B2, A
    case 0x05B8: if (cpu.read_byte(0x05B8) != 0xC5 || cpu.read_byte(0x05B9) != 0xB2 || cpu.read_byte(0x05BA) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04B2, 3); return true;
    // src/spc700/main.spc700.s:102 CALL UNK1198
    case 0x05BB: if (cpu.read_byte(0x05BB) != 0x3F || cpu.read_byte(0x05BC) != 0x98 || cpu.read_byte(0x05BD) != 0x11) return false; cpu.execute_instruction<0x3F>(0x1198, 3); return true;
    // src/spc700/main.spc700.s:103 MOV X, #$01
    case 0x05BE: if (cpu.read_byte(0x05BE) != 0xCD || cpu.read_byte(0x05BF) != 0x01) return false; cpu.execute_instruction<0xCD>(0x0001, 2); return true;
    // src/spc700/main.spc700.s:104 CALL READ_PORT
    case 0x05C0: if (cpu.read_byte(0x05C0) != 0x3F || cpu.read_byte(0x05C1) != 0x35 || cpu.read_byte(0x05C2) != 0x06) return false; cpu.execute_instruction<0x3F>(0x0635, 3); return true;
    // src/spc700/main.spc700.s:105 MOV UNK04B1, A
    case 0x05C3: if (cpu.read_byte(0x05C3) != 0xC5 || cpu.read_byte(0x05C4) != 0xB1 || cpu.read_byte(0x05C5) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04B1, 3); return true;
    // src/spc700/main.spc700.s:106 CMP ECHO_COUNTER, EDL_MIRROR
    case 0x05C6: if (cpu.read_byte(0x05C6) != 0x69 || cpu.read_byte(0x05C7) != 0x4D || cpu.read_byte(0x05C8) != 0x4C) return false; cpu.execute_instruction<0x69>(0x4C4D, 3); return true;
    // src/spc700/main.spc700.s:107 BEQ UNK05CD
    case 0x05C9: if (cpu.read_byte(0x05C9) != 0xF0 || cpu.read_byte(0x05CA) != 0x02) return false; cpu.execute_instruction<0xF0>(0x0002, 2); return true;
    // src/spc700/main.spc700.s:108 INC ECHO_COUNTER
    case 0x05CB: if (cpu.read_byte(0x05CB) != 0xAB || cpu.read_byte(0x05CC) != 0x4C) return false; cpu.execute_instruction<0xAB>(0x004C, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK05CD.
bool execute_audio_unresolved_unk05cd_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:110 MOV A, UNK0053
    case 0x05CD: if (cpu.read_byte(0x05CD) != 0xE4 || cpu.read_byte(0x05CE) != 0x53) return false; cpu.execute_instruction<0xE4>(0x0053, 2); return true;
    // src/spc700/main.spc700.s:111 POP Y
    case 0x05CF: if (cpu.read_byte(0x05CF) != 0xEE) return false; cpu.execute_instruction<0xEE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:112 MUL YA
    case 0x05D0: if (cpu.read_byte(0x05D0) != 0xCF) return false; cpu.execute_instruction<0xCF>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:113 CLRC
    case 0x05D1: if (cpu.read_byte(0x05D1) != 0x60) return false; cpu.execute_instruction<0x60>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:114 ADC A, UNK0051
    case 0x05D2: if (cpu.read_byte(0x05D2) != 0x84 || cpu.read_byte(0x05D3) != 0x51) return false; cpu.execute_instruction<0x84>(0x0051, 2); return true;
    // src/spc700/main.spc700.s:115 MOV UNK0051, A
    case 0x05D4: if (cpu.read_byte(0x05D4) != 0xC4 || cpu.read_byte(0x05D5) != 0x51) return false; cpu.execute_instruction<0xC4>(0x0051, 2); return true;
    // src/spc700/main.spc700.s:116 BCC UNK05E0
    case 0x05D6: if (cpu.read_byte(0x05D6) != 0x90 || cpu.read_byte(0x05D7) != 0x08) return false; cpu.execute_instruction<0x90>(0x0008, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK05D8.
bool execute_audio_unresolved_unk05d8_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:118 CALL UNK07F9
    case 0x05D8: if (cpu.read_byte(0x05D8) != 0x3F || cpu.read_byte(0x05D9) != 0xF9 || cpu.read_byte(0x05DA) != 0x07) return false; cpu.execute_instruction<0x3F>(0x07F9, 3); return true;
    // src/spc700/main.spc700.s:119 CALL READ_PORT_0
    case 0x05DB: if (cpu.read_byte(0x05DB) != 0x3F || cpu.read_byte(0x05DC) != 0x25 || cpu.read_byte(0x05DD) != 0x06) return false; cpu.execute_instruction<0x3F>(0x0625, 3); return true;
    // src/spc700/main.spc700.s:120 BRA UNK05F9
    case 0x05DE: if (cpu.read_byte(0x05DE) != 0x2F || cpu.read_byte(0x05DF) != 0x19) return false; cpu.execute_instruction<0x2F>(0x0019, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK05E0.
bool execute_audio_unresolved_unk05e0_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:122 MOV A, CPUIO_OUT_MIRRORS
    case 0x05E0: if (cpu.read_byte(0x05E0) != 0xE4 || cpu.read_byte(0x05E1) != 0x04) return false; cpu.execute_instruction<0xE4>(0x0004, 2); return true;
    // src/spc700/main.spc700.s:123 BEQ UNK05F6
    case 0x05E2: if (cpu.read_byte(0x05E2) != 0xF0 || cpu.read_byte(0x05E3) != 0x12) return false; cpu.execute_instruction<0xF0>(0x0012, 2); return true;
    // src/spc700/main.spc700.s:124 MOV X, #$00
    case 0x05E4: if (cpu.read_byte(0x05E4) != 0xCD || cpu.read_byte(0x05E5) != 0x00) return false; cpu.execute_instruction<0xCD>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:125 MOV CURRENT_TRACK_BIT, #$01
    case 0x05E6: if (cpu.read_byte(0x05E6) != 0x8F || cpu.read_byte(0x05E7) != 0x01 || cpu.read_byte(0x05E8) != 0x47) return false; cpu.execute_instruction<0x8F>(0x4701, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK05E9.
bool execute_audio_unresolved_unk05e9_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:127 MOV A, TRACK_POINTERS+1 + X
    case 0x05E9: if (cpu.read_byte(0x05E9) != 0xF4 || cpu.read_byte(0x05EA) != 0x31) return false; cpu.execute_instruction<0xF4>(0x0031, 2); return true;
    // src/spc700/main.spc700.s:128 BEQ UNK05F0
    case 0x05EB: if (cpu.read_byte(0x05EB) != 0xF0 || cpu.read_byte(0x05EC) != 0x03) return false; cpu.execute_instruction<0xF0>(0x0003, 2); return true;
    // src/spc700/main.spc700.s:129 CALL UNK0DD0
    case 0x05ED: if (cpu.read_byte(0x05ED) != 0x3F || cpu.read_byte(0x05EE) != 0xD0 || cpu.read_byte(0x05EF) != 0x0D) return false; cpu.execute_instruction<0x3F>(0x0DD0, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK05F0.
bool execute_audio_unresolved_unk05f0_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:131 INC X
    case 0x05F0: if (cpu.read_byte(0x05F0) != 0x3D) return false; cpu.execute_instruction<0x3D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:132 INC X
    case 0x05F1: if (cpu.read_byte(0x05F1) != 0x3D) return false; cpu.execute_instruction<0x3D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:133 ASL CURRENT_TRACK_BIT
    case 0x05F2: if (cpu.read_byte(0x05F2) != 0x0B || cpu.read_byte(0x05F3) != 0x47) return false; cpu.execute_instruction<0x0B>(0x0047, 2); return true;
    // src/spc700/main.spc700.s:134 BNE UNK05E9
    case 0x05F4: if (cpu.read_byte(0x05F4) != 0xD0 || cpu.read_byte(0x05F5) != 0xF3) return false; cpu.execute_instruction<0xD0>(0x00F3, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK05F6.
bool execute_audio_unresolved_unk05f6_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:136 JMP MAIN_LOOP
    case 0x05F6: if (cpu.read_byte(0x05F6) != 0x5F || cpu.read_byte(0x05F7) != 0x46 || cpu.read_byte(0x05F8) != 0x05) return false; cpu.execute_instruction<0x5F>(0x0546, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK05F9.
bool execute_audio_unresolved_unk05f9_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:139 JMP MAIN_LOOP
    case 0x05F9: if (cpu.read_byte(0x05F9) != 0x5F || cpu.read_byte(0x05FA) != 0x46 || cpu.read_byte(0x05FB) != 0x05) return false; cpu.execute_instruction<0x5F>(0x0546, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK05FC.
bool execute_audio_unresolved_unk05fc_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:142 MOV A, #$00
    case 0x05FC: if (cpu.read_byte(0x05FC) != 0xE8 || cpu.read_byte(0x05FD) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:143 MOV Y, #$2C
    case 0x05FE: if (cpu.read_byte(0x05FE) != 0x8D || cpu.read_byte(0x05FF) != 0x2C) return false; cpu.execute_instruction<0x8D>(0x002C, 2); return true;
    // src/spc700/main.spc700.s:144 CALL WRITE_DSP
    case 0x0600: if (cpu.read_byte(0x0600) != 0x3F || cpu.read_byte(0x0601) != 0x49 || cpu.read_byte(0x0602) != 0x07) return false; cpu.execute_instruction<0x3F>(0x0749, 3); return true;
    // src/spc700/main.spc700.s:145 MOV Y, #$3C
    case 0x0603: if (cpu.read_byte(0x0603) != 0x8D || cpu.read_byte(0x0604) != 0x3C) return false; cpu.execute_instruction<0x8D>(0x003C, 2); return true;
    // src/spc700/main.spc700.s:146 CALL WRITE_DSP
    case 0x0605: if (cpu.read_byte(0x0605) != 0x3F || cpu.read_byte(0x0606) != 0x49 || cpu.read_byte(0x0607) != 0x07) return false; cpu.execute_instruction<0x3F>(0x0749, 3); return true;
    // src/spc700/main.spc700.s:147 MOV A, #$FF
    case 0x0608: if (cpu.read_byte(0x0608) != 0xE8 || cpu.read_byte(0x0609) != 0xFF) return false; cpu.execute_instruction<0xE8>(0x00FF, 2); return true;
    // src/spc700/main.spc700.s:148 MOV Y, #$5C
    case 0x060A: if (cpu.read_byte(0x060A) != 0x8D || cpu.read_byte(0x060B) != 0x5C) return false; cpu.execute_instruction<0x8D>(0x005C, 2); return true;
    // src/spc700/main.spc700.s:149 CALL WRITE_DSP
    case 0x060C: if (cpu.read_byte(0x060C) != 0x3F || cpu.read_byte(0x060D) != 0x49 || cpu.read_byte(0x060E) != 0x07) return false; cpu.execute_instruction<0x3F>(0x0749, 3); return true;
    // src/spc700/main.spc700.s:150 MOV A, #$00
    case 0x060F: if (cpu.read_byte(0x060F) != 0xE8 || cpu.read_byte(0x0610) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:151 MOV Y, #$4D
    case 0x0611: if (cpu.read_byte(0x0611) != 0x8D || cpu.read_byte(0x0612) != 0x4D) return false; cpu.execute_instruction<0x8D>(0x004D, 2); return true;
    // src/spc700/main.spc700.s:152 CALL WRITE_DSP
    case 0x0613: if (cpu.read_byte(0x0613) != 0x3F || cpu.read_byte(0x0614) != 0x49 || cpu.read_byte(0x0615) != 0x07) return false; cpu.execute_instruction<0x3F>(0x0749, 3); return true;
    // src/spc700/main.spc700.s:153 MOV A, #$20
    case 0x0616: if (cpu.read_byte(0x0616) != 0xE8 || cpu.read_byte(0x0617) != 0x20) return false; cpu.execute_instruction<0xE8>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:154 MOV Y, #$6C
    case 0x0618: if (cpu.read_byte(0x0618) != 0x8D || cpu.read_byte(0x0619) != 0x6C) return false; cpu.execute_instruction<0x8D>(0x006C, 2); return true;
    // src/spc700/main.spc700.s:155 CALL WRITE_DSP
    case 0x061A: if (cpu.read_byte(0x061A) != 0x3F || cpu.read_byte(0x061B) != 0x49 || cpu.read_byte(0x061C) != 0x07) return false; cpu.execute_instruction<0x3F>(0x0749, 3); return true;
    // src/spc700/main.spc700.s:156 MOV A, #$80
    case 0x061D: if (cpu.read_byte(0x061D) != 0xE8 || cpu.read_byte(0x061E) != 0x80) return false; cpu.execute_instruction<0xE8>(0x0080, 2); return true;
    // src/spc700/main.spc700.s:157 MOV.w CONTROL, A
    case 0x061F: if (cpu.read_byte(0x061F) != 0xC5 || cpu.read_byte(0x0620) != 0xF1 || cpu.read_byte(0x0621) != 0x00) return false; cpu.execute_instruction<0xC5>(0x00F1, 3); return true;
    // src/spc700/main.spc700.s:158 JMP $FFC0
    case 0x0622: if (cpu.read_byte(0x0622) != 0x5F || cpu.read_byte(0x0623) != 0xC0 || cpu.read_byte(0x0624) != 0xFF) return false; cpu.execute_instruction<0x5F>(0xFFC0, 3); return true;
    default: return false;
    }
}
// Assembly source label: READ_PORT_0.
bool execute_audio_read_port_0_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:161 MOV A, CPUIO_OUT_MIRRORS
    case 0x0625: if (cpu.read_byte(0x0625) != 0xE4 || cpu.read_byte(0x0626) != 0x04) return false; cpu.execute_instruction<0xE4>(0x0004, 2); return true;
    // src/spc700/main.spc700.s:162 MOV.w CPUIO0, A
    case 0x0627: if (cpu.read_byte(0x0627) != 0xC5 || cpu.read_byte(0x0628) != 0xF4 || cpu.read_byte(0x0629) != 0x00) return false; cpu.execute_instruction<0xC5>(0x00F4, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK062A.
bool execute_audio_unresolved_unk062a_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:164 MOV.w A, CPUIO0
    case 0x062A: if (cpu.read_byte(0x062A) != 0xE5 || cpu.read_byte(0x062B) != 0xF4 || cpu.read_byte(0x062C) != 0x00) return false; cpu.execute_instruction<0xE5>(0x00F4, 3); return true;
    // src/spc700/main.spc700.s:165 CMP.w A, CPUIO0
    case 0x062D: if (cpu.read_byte(0x062D) != 0x65 || cpu.read_byte(0x062E) != 0xF4 || cpu.read_byte(0x062F) != 0x00) return false; cpu.execute_instruction<0x65>(0x00F4, 3); return true;
    // src/spc700/main.spc700.s:166 BNE UNK062A
    case 0x0630: if (cpu.read_byte(0x0630) != 0xD0 || cpu.read_byte(0x0631) != 0xF8) return false; cpu.execute_instruction<0xD0>(0x00F8, 2); return true;
    // src/spc700/main.spc700.s:167 MOV CPUIO_IN_MIRRORS, A
    case 0x0632: if (cpu.read_byte(0x0632) != 0xC4 || cpu.read_byte(0x0633) != 0x00) return false; cpu.execute_instruction<0xC4>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:168 RET
    case 0x0634: if (cpu.read_byte(0x0634) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: READ_PORT.
bool execute_audio_read_port_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:171 MOV A, UNK04A4 + X
    case 0x0635: if (cpu.read_byte(0x0635) != 0xF5 || cpu.read_byte(0x0636) != 0xA4 || cpu.read_byte(0x0637) != 0x04) return false; cpu.execute_instruction<0xF5>(0x04A4, 3); return true;
    // src/spc700/main.spc700.s:172 MOV UNK0020, A
    case 0x0638: if (cpu.read_byte(0x0638) != 0xC4 || cpu.read_byte(0x0639) != 0x20) return false; cpu.execute_instruction<0xC4>(0x0020, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK063A.
bool execute_audio_unresolved_unk063a_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:174 MOV.w A, CPUIO0 + X
    case 0x063A: if (cpu.read_byte(0x063A) != 0xF5 || cpu.read_byte(0x063B) != 0xF4 || cpu.read_byte(0x063C) != 0x00) return false; cpu.execute_instruction<0xF5>(0x00F4, 3); return true;
    // src/spc700/main.spc700.s:175 CMP.w A, CPUIO0 + X
    case 0x063D: if (cpu.read_byte(0x063D) != 0x75 || cpu.read_byte(0x063E) != 0xF4 || cpu.read_byte(0x063F) != 0x00) return false; cpu.execute_instruction<0x75>(0x00F4, 3); return true;
    // src/spc700/main.spc700.s:176 BNE UNK063A
    case 0x0640: if (cpu.read_byte(0x0640) != 0xD0 || cpu.read_byte(0x0641) != 0xF8) return false; cpu.execute_instruction<0xD0>(0x00F8, 2); return true;
    // src/spc700/main.spc700.s:177 MOV CPUIO_IN_MIRRORS + X, A
    case 0x0642: if (cpu.read_byte(0x0642) != 0xD4 || cpu.read_byte(0x0643) != 0x00) return false; cpu.execute_instruction<0xD4>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:178 MOV.w CPUIO0 + X, A
    case 0x0644: if (cpu.read_byte(0x0644) != 0xD5 || cpu.read_byte(0x0645) != 0xF4 || cpu.read_byte(0x0646) != 0x00) return false; cpu.execute_instruction<0xD5>(0x00F4, 3); return true;
    // src/spc700/main.spc700.s:179 MOV UNK04A4 + X, A
    case 0x0647: if (cpu.read_byte(0x0647) != 0xD5 || cpu.read_byte(0x0648) != 0xA4 || cpu.read_byte(0x0649) != 0x04) return false; cpu.execute_instruction<0xD5>(0x04A4, 3); return true;
    // src/spc700/main.spc700.s:180 CMP A, UNK0020
    case 0x064A: if (cpu.read_byte(0x064A) != 0x64 || cpu.read_byte(0x064B) != 0x20) return false; cpu.execute_instruction<0x64>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:181 BNE UNK0650
    case 0x064C: if (cpu.read_byte(0x064C) != 0xD0 || cpu.read_byte(0x064D) != 0x02) return false; cpu.execute_instruction<0xD0>(0x0002, 2); return true;
    // src/spc700/main.spc700.s:182 MOV A, #$00
    case 0x064E: if (cpu.read_byte(0x064E) != 0xE8 || cpu.read_byte(0x064F) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0650.
bool execute_audio_unresolved_unk0650_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:184 MOV UNK04A0 + X, A
    case 0x0650: if (cpu.read_byte(0x0650) != 0xD5 || cpu.read_byte(0x0651) != 0xA0 || cpu.read_byte(0x0652) != 0x04) return false; cpu.execute_instruction<0xD5>(0x04A0, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0653.
bool execute_audio_unresolved_unk0653_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:186 RET
    case 0x0653: if (cpu.read_byte(0x0653) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: PLAY_NOTE.
bool execute_audio_play_note_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:189 CMP Y, #$CA
    case 0x0654: if (cpu.read_byte(0x0654) != 0xAD || cpu.read_byte(0x0655) != 0xCA) return false; cpu.execute_instruction<0xAD>(0x00CA, 2); return true;
    // src/spc700/main.spc700.s:190 BCC UNK065D
    case 0x0656: if (cpu.read_byte(0x0656) != 0x90 || cpu.read_byte(0x0657) != 0x05) return false; cpu.execute_instruction<0x90>(0x0005, 2); return true;
    // src/spc700/main.spc700.s:191 CALL UNK095F
    case 0x0658: if (cpu.read_byte(0x0658) != 0x3F || cpu.read_byte(0x0659) != 0x5F || cpu.read_byte(0x065A) != 0x09) return false; cpu.execute_instruction<0x3F>(0x095F, 3); return true;
    // src/spc700/main.spc700.s:192 MOV Y, #$A4
    case 0x065B: if (cpu.read_byte(0x065B) != 0x8D || cpu.read_byte(0x065C) != 0xA4) return false; cpu.execute_instruction<0x8D>(0x00A4, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK065D.
bool execute_audio_unresolved_unk065d_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:194 CMP Y, #$C8
    case 0x065D: if (cpu.read_byte(0x065D) != 0xAD || cpu.read_byte(0x065E) != 0xC8) return false; cpu.execute_instruction<0xAD>(0x00C8, 2); return true;
    // src/spc700/main.spc700.s:195 BCS UNK0653
    case 0x065F: if (cpu.read_byte(0x065F) != 0xB0 || cpu.read_byte(0x0660) != 0xF2) return false; cpu.execute_instruction<0xB0>(0x00F2, 2); return true;
    // src/spc700/main.spc700.s:196 MOV A, SFX_PLAYING_BITS
    case 0x0661: if (cpu.read_byte(0x0661) != 0xE4 || cpu.read_byte(0x0662) != 0x1A) return false; cpu.execute_instruction<0xE4>(0x001A, 2); return true;
    // src/spc700/main.spc700.s:197 AND A, CURRENT_TRACK_BIT
    case 0x0663: if (cpu.read_byte(0x0663) != 0x24 || cpu.read_byte(0x0664) != 0x47) return false; cpu.execute_instruction<0x24>(0x0047, 2); return true;
    // src/spc700/main.spc700.s:198 BNE UNK0653
    case 0x0665: if (cpu.read_byte(0x0665) != 0xD0 || cpu.read_byte(0x0666) != 0xEC) return false; cpu.execute_instruction<0xD0>(0x00EC, 2); return true;
    // src/spc700/main.spc700.s:199 MOV A, Y
    case 0x0667: if (cpu.read_byte(0x0667) != 0xDD) return false; cpu.execute_instruction<0xDD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:200 AND A, #$7F
    case 0x0668: if (cpu.read_byte(0x0668) != 0x28 || cpu.read_byte(0x0669) != 0x7F) return false; cpu.execute_instruction<0x28>(0x007F, 2); return true;
    // src/spc700/main.spc700.s:201 CLRC
    case 0x066A: if (cpu.read_byte(0x066A) != 0x60) return false; cpu.execute_instruction<0x60>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:202 ADC A, UNK0050
    case 0x066B: if (cpu.read_byte(0x066B) != 0x84 || cpu.read_byte(0x066C) != 0x50) return false; cpu.execute_instruction<0x84>(0x0050, 2); return true;
    // src/spc700/main.spc700.s:203 CLRC
    case 0x066D: if (cpu.read_byte(0x066D) != 0x60) return false; cpu.execute_instruction<0x60>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:204 ADC A, UNK02F0 + X
    case 0x066E: if (cpu.read_byte(0x066E) != 0x95 || cpu.read_byte(0x066F) != 0xF0 || cpu.read_byte(0x0670) != 0x02) return false; cpu.execute_instruction<0x95>(0x02F0, 3); return true;
    // src/spc700/main.spc700.s:205 MOV UNK0361 + X, A
    case 0x0671: if (cpu.read_byte(0x0671) != 0xD5 || cpu.read_byte(0x0672) != 0x61 || cpu.read_byte(0x0673) != 0x03) return false; cpu.execute_instruction<0xD5>(0x0361, 3); return true;
    // src/spc700/main.spc700.s:206 MOV A, UNK0381 + X
    case 0x0674: if (cpu.read_byte(0x0674) != 0xF5 || cpu.read_byte(0x0675) != 0x81 || cpu.read_byte(0x0676) != 0x03) return false; cpu.execute_instruction<0xF5>(0x0381, 3); return true;
    // src/spc700/main.spc700.s:207 MOV UNK0360 + X, A
    case 0x0677: if (cpu.read_byte(0x0677) != 0xD5 || cpu.read_byte(0x0678) != 0x60 || cpu.read_byte(0x0679) != 0x03) return false; cpu.execute_instruction<0xD5>(0x0360, 3); return true;
    // src/spc700/main.spc700.s:208 MOV A, UNK02B1 + X
    case 0x067A: if (cpu.read_byte(0x067A) != 0xF5 || cpu.read_byte(0x067B) != 0xB1 || cpu.read_byte(0x067C) != 0x02) return false; cpu.execute_instruction<0xF5>(0x02B1, 3); return true;
    // src/spc700/main.spc700.s:209 LSR A
    case 0x067D: if (cpu.read_byte(0x067D) != 0x5C) return false; cpu.execute_instruction<0x5C>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:210 MOV A, #$00
    case 0x067E: if (cpu.read_byte(0x067E) != 0xE8 || cpu.read_byte(0x067F) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:211 ROR A
    case 0x0680: if (cpu.read_byte(0x0680) != 0x7C) return false; cpu.execute_instruction<0x7C>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:212 MOV UNK02A0 + X, A
    case 0x0681: if (cpu.read_byte(0x0681) != 0xD5 || cpu.read_byte(0x0682) != 0xA0 || cpu.read_byte(0x0683) != 0x02) return false; cpu.execute_instruction<0xD5>(0x02A0, 3); return true;
    // src/spc700/main.spc700.s:213 MOV A, #$00
    case 0x0684: if (cpu.read_byte(0x0684) != 0xE8 || cpu.read_byte(0x0685) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:214 MOV UNK00B0 + X, A
    case 0x0686: if (cpu.read_byte(0x0686) != 0xD4 || cpu.read_byte(0x0687) != 0xB0) return false; cpu.execute_instruction<0xD4>(0x00B0, 2); return true;
    // src/spc700/main.spc700.s:215 MOV UNK0100 + X, A
    case 0x0688: if (cpu.read_byte(0x0688) != 0xD5 || cpu.read_byte(0x0689) != 0x00 || cpu.read_byte(0x068A) != 0x01) return false; cpu.execute_instruction<0xD5>(0x0100, 3); return true;
    // src/spc700/main.spc700.s:216 MOV UNK02D0 + X, A
    case 0x068B: if (cpu.read_byte(0x068B) != 0xD5 || cpu.read_byte(0x068C) != 0xD0 || cpu.read_byte(0x068D) != 0x02) return false; cpu.execute_instruction<0xD5>(0x02D0, 3); return true;
    // src/spc700/main.spc700.s:217 MOV UNK00C0 + X, A
    case 0x068E: if (cpu.read_byte(0x068E) != 0xD4 || cpu.read_byte(0x068F) != 0xC0) return false; cpu.execute_instruction<0xD4>(0x00C0, 2); return true;
    // src/spc700/main.spc700.s:218 OR VOLUME_CHANGE_BITS, CURRENT_TRACK_BIT
    case 0x0690: if (cpu.read_byte(0x0690) != 0x09 || cpu.read_byte(0x0691) != 0x47 || cpu.read_byte(0x0692) != 0x5E) return false; cpu.execute_instruction<0x09>(0x5E47, 3); return true;
    // src/spc700/main.spc700.s:219 OR KON_MIRROR, CURRENT_TRACK_BIT
    case 0x0693: if (cpu.read_byte(0x0693) != 0x09 || cpu.read_byte(0x0694) != 0x47 || cpu.read_byte(0x0695) != 0x45) return false; cpu.execute_instruction<0x09>(0x4547, 3); return true;
    // src/spc700/main.spc700.s:220 MOV A, UNK0280 + X
    case 0x0696: if (cpu.read_byte(0x0696) != 0xF5 || cpu.read_byte(0x0697) != 0x80 || cpu.read_byte(0x0698) != 0x02) return false; cpu.execute_instruction<0xF5>(0x0280, 3); return true;
    // src/spc700/main.spc700.s:221 MOV UNK00A0 + X, A
    case 0x0699: if (cpu.read_byte(0x0699) != 0xD4 || cpu.read_byte(0x069A) != 0xA0) return false; cpu.execute_instruction<0xD4>(0x00A0, 2); return true;
    // src/spc700/main.spc700.s:222 BEQ UNK06BB
    case 0x069B: if (cpu.read_byte(0x069B) != 0xF0 || cpu.read_byte(0x069C) != 0x1E) return false; cpu.execute_instruction<0xF0>(0x001E, 2); return true;
    // src/spc700/main.spc700.s:223 MOV A, UNK0281 + X
    case 0x069D: if (cpu.read_byte(0x069D) != 0xF5 || cpu.read_byte(0x069E) != 0x81 || cpu.read_byte(0x069F) != 0x02) return false; cpu.execute_instruction<0xF5>(0x0281, 3); return true;
    // src/spc700/main.spc700.s:224 MOV UNK00A1 + X, A
    case 0x06A0: if (cpu.read_byte(0x06A0) != 0xD4 || cpu.read_byte(0x06A1) != 0xA1) return false; cpu.execute_instruction<0xD4>(0x00A1, 2); return true;
    // src/spc700/main.spc700.s:225 MOV A, UNK0290 + X
    case 0x06A2: if (cpu.read_byte(0x06A2) != 0xF5 || cpu.read_byte(0x06A3) != 0x90 || cpu.read_byte(0x06A4) != 0x02) return false; cpu.execute_instruction<0xF5>(0x0290, 3); return true;
    // src/spc700/main.spc700.s:226 BNE UNK06B1
    case 0x06A5: if (cpu.read_byte(0x06A5) != 0xD0 || cpu.read_byte(0x06A6) != 0x0A) return false; cpu.execute_instruction<0xD0>(0x000A, 2); return true;
    // src/spc700/main.spc700.s:227 MOV A, UNK0361 + X
    case 0x06A7: if (cpu.read_byte(0x06A7) != 0xF5 || cpu.read_byte(0x06A8) != 0x61 || cpu.read_byte(0x06A9) != 0x03) return false; cpu.execute_instruction<0xF5>(0x0361, 3); return true;
    // src/spc700/main.spc700.s:228 SETC
    case 0x06AA: if (cpu.read_byte(0x06AA) != 0x80) return false; cpu.execute_instruction<0x80>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:229 SBC A, UNK0291 + X
    case 0x06AB: if (cpu.read_byte(0x06AB) != 0xB5 || cpu.read_byte(0x06AC) != 0x91 || cpu.read_byte(0x06AD) != 0x02) return false; cpu.execute_instruction<0xB5>(0x0291, 3); return true;
    // src/spc700/main.spc700.s:230 MOV UNK0361 + X, A
    case 0x06AE: if (cpu.read_byte(0x06AE) != 0xD5 || cpu.read_byte(0x06AF) != 0x61 || cpu.read_byte(0x06B0) != 0x03) return false; cpu.execute_instruction<0xD5>(0x0361, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK06B1.
bool execute_audio_unresolved_unk06b1_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:232 MOV A, UNK0291 + X
    case 0x06B1: if (cpu.read_byte(0x06B1) != 0xF5 || cpu.read_byte(0x06B2) != 0x91 || cpu.read_byte(0x06B3) != 0x02) return false; cpu.execute_instruction<0xF5>(0x0291, 3); return true;
    // src/spc700/main.spc700.s:233 CLRC
    case 0x06B4: if (cpu.read_byte(0x06B4) != 0x60) return false; cpu.execute_instruction<0x60>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:234 ADC A, UNK0361 + X
    case 0x06B5: if (cpu.read_byte(0x06B5) != 0x95 || cpu.read_byte(0x06B6) != 0x61 || cpu.read_byte(0x06B7) != 0x03) return false; cpu.execute_instruction<0x95>(0x0361, 3); return true;
    // src/spc700/main.spc700.s:235 CALL UNK0BA4
    case 0x06B8: if (cpu.read_byte(0x06B8) != 0x3F || cpu.read_byte(0x06B9) != 0xA4 || cpu.read_byte(0x06BA) != 0x0B) return false; cpu.execute_instruction<0x3F>(0x0BA4, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK06BB.
bool execute_audio_unresolved_unk06bb_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:237 CALL UNK0BBC
    case 0x06BB: if (cpu.read_byte(0x06BB) != 0x3F || cpu.read_byte(0x06BC) != 0xBC || cpu.read_byte(0x06BD) != 0x0B) return false; cpu.execute_instruction<0x3F>(0x0BBC, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK06BE.
bool execute_audio_unresolved_unk06be_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:239 MOV Y, #$00
    case 0x06BE: if (cpu.read_byte(0x06BE) != 0x8D || cpu.read_byte(0x06BF) != 0x00) return false; cpu.execute_instruction<0x8D>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:240 MOV A, UNK0011
    case 0x06C0: if (cpu.read_byte(0x06C0) != 0xE4 || cpu.read_byte(0x06C1) != 0x11) return false; cpu.execute_instruction<0xE4>(0x0011, 2); return true;
    // src/spc700/main.spc700.s:241 SETC
    case 0x06C2: if (cpu.read_byte(0x06C2) != 0x80) return false; cpu.execute_instruction<0x80>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:242 SBC A, #$34
    case 0x06C3: if (cpu.read_byte(0x06C3) != 0xA8 || cpu.read_byte(0x06C4) != 0x34) return false; cpu.execute_instruction<0xA8>(0x0034, 2); return true;
    // src/spc700/main.spc700.s:243 BCS UNK06D0
    case 0x06C5: if (cpu.read_byte(0x06C5) != 0xB0 || cpu.read_byte(0x06C6) != 0x09) return false; cpu.execute_instruction<0xB0>(0x0009, 2); return true;
    // src/spc700/main.spc700.s:244 MOV A, UNK0011
    case 0x06C7: if (cpu.read_byte(0x06C7) != 0xE4 || cpu.read_byte(0x06C8) != 0x11) return false; cpu.execute_instruction<0xE4>(0x0011, 2); return true;
    // src/spc700/main.spc700.s:245 SETC
    case 0x06C9: if (cpu.read_byte(0x06C9) != 0x80) return false; cpu.execute_instruction<0x80>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:246 SBC A, #$13
    case 0x06CA: if (cpu.read_byte(0x06CA) != 0xA8 || cpu.read_byte(0x06CB) != 0x13) return false; cpu.execute_instruction<0xA8>(0x0013, 2); return true;
    // src/spc700/main.spc700.s:247 BCS UNK06D4
    case 0x06CC: if (cpu.read_byte(0x06CC) != 0xB0 || cpu.read_byte(0x06CD) != 0x06) return false; cpu.execute_instruction<0xB0>(0x0006, 2); return true;
    // src/spc700/main.spc700.s:248 DEC Y
    case 0x06CE: if (cpu.read_byte(0x06CE) != 0xDC) return false; cpu.execute_instruction<0xDC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:249 ASL A
    case 0x06CF: if (cpu.read_byte(0x06CF) != 0x1C) return false; cpu.execute_instruction<0x1C>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK06D0.
bool execute_audio_unresolved_unk06d0_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:251 ADDW YA, UNK0010
    case 0x06D0: if (cpu.read_byte(0x06D0) != 0x7A || cpu.read_byte(0x06D1) != 0x10) return false; cpu.execute_instruction<0x7A>(0x0010, 2); return true;
    // src/spc700/main.spc700.s:252 MOVW UNK0010, YA
    case 0x06D2: if (cpu.read_byte(0x06D2) != 0xDA || cpu.read_byte(0x06D3) != 0x10) return false; cpu.execute_instruction<0xDA>(0x0010, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK06D4.
bool execute_audio_unresolved_unk06d4_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:254 PUSH X
    case 0x06D4: if (cpu.read_byte(0x06D4) != 0x4D) return false; cpu.execute_instruction<0x4D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:255 MOV A, UNK0011
    case 0x06D5: if (cpu.read_byte(0x06D5) != 0xE4 || cpu.read_byte(0x06D6) != 0x11) return false; cpu.execute_instruction<0xE4>(0x0011, 2); return true;
    // src/spc700/main.spc700.s:256 ASL A
    case 0x06D7: if (cpu.read_byte(0x06D7) != 0x1C) return false; cpu.execute_instruction<0x1C>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:257 MOV Y, #$00
    case 0x06D8: if (cpu.read_byte(0x06D8) != 0x8D || cpu.read_byte(0x06D9) != 0x00) return false; cpu.execute_instruction<0x8D>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:258 MOV X, #$18
    case 0x06DA: if (cpu.read_byte(0x06DA) != 0xCD || cpu.read_byte(0x06DB) != 0x18) return false; cpu.execute_instruction<0xCD>(0x0018, 2); return true;
    // src/spc700/main.spc700.s:259 DIV YA, X
    case 0x06DC: if (cpu.read_byte(0x06DC) != 0x9E) return false; cpu.execute_instruction<0x9E>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:260 MOV X, A
    case 0x06DD: if (cpu.read_byte(0x06DD) != 0x5D) return false; cpu.execute_instruction<0x5D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:261 MOV A, UNK0EBC + 1 + Y
    case 0x06DE: if (cpu.read_byte(0x06DE) != 0xF6 || cpu.read_byte(0x06DF) != 0xBD || cpu.read_byte(0x06E0) != 0x0E) return false; cpu.execute_instruction<0xF6>(0x0EBD, 3); return true;
    // src/spc700/main.spc700.s:262 MOV UNK0015, A
    case 0x06E1: if (cpu.read_byte(0x06E1) != 0xC4 || cpu.read_byte(0x06E2) != 0x15) return false; cpu.execute_instruction<0xC4>(0x0015, 2); return true;
    // src/spc700/main.spc700.s:263 MOV A, UNK0EBC + Y
    case 0x06E3: if (cpu.read_byte(0x06E3) != 0xF6 || cpu.read_byte(0x06E4) != 0xBC || cpu.read_byte(0x06E5) != 0x0E) return false; cpu.execute_instruction<0xF6>(0x0EBC, 3); return true;
    // src/spc700/main.spc700.s:264 MOV UNK0014, A
    case 0x06E6: if (cpu.read_byte(0x06E6) != 0xC4 || cpu.read_byte(0x06E7) != 0x14) return false; cpu.execute_instruction<0xC4>(0x0014, 2); return true;
    // src/spc700/main.spc700.s:265 MOV A, UNK0EBC + 3 + Y
    case 0x06E8: if (cpu.read_byte(0x06E8) != 0xF6 || cpu.read_byte(0x06E9) != 0xBF || cpu.read_byte(0x06EA) != 0x0E) return false; cpu.execute_instruction<0xF6>(0x0EBF, 3); return true;
    // src/spc700/main.spc700.s:266 PUSH A
    case 0x06EB: if (cpu.read_byte(0x06EB) != 0x2D) return false; cpu.execute_instruction<0x2D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:267 MOV A, UNK0EBC + 2 + Y
    case 0x06EC: if (cpu.read_byte(0x06EC) != 0xF6 || cpu.read_byte(0x06ED) != 0xBE || cpu.read_byte(0x06EE) != 0x0E) return false; cpu.execute_instruction<0xF6>(0x0EBE, 3); return true;
    // src/spc700/main.spc700.s:268 POP Y
    case 0x06EF: if (cpu.read_byte(0x06EF) != 0xEE) return false; cpu.execute_instruction<0xEE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:269 SUBW YA, UNK0014
    case 0x06F0: if (cpu.read_byte(0x06F0) != 0x9A || cpu.read_byte(0x06F1) != 0x14) return false; cpu.execute_instruction<0x9A>(0x0014, 2); return true;
    // src/spc700/main.spc700.s:270 MOV Y, UNK0010
    case 0x06F2: if (cpu.read_byte(0x06F2) != 0xEB || cpu.read_byte(0x06F3) != 0x10) return false; cpu.execute_instruction<0xEB>(0x0010, 2); return true;
    // src/spc700/main.spc700.s:271 MUL YA
    case 0x06F4: if (cpu.read_byte(0x06F4) != 0xCF) return false; cpu.execute_instruction<0xCF>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:272 MOV A, Y
    case 0x06F5: if (cpu.read_byte(0x06F5) != 0xDD) return false; cpu.execute_instruction<0xDD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:273 MOV Y, #$00
    case 0x06F6: if (cpu.read_byte(0x06F6) != 0x8D || cpu.read_byte(0x06F7) != 0x00) return false; cpu.execute_instruction<0x8D>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:274 ADDW YA, UNK0014
    case 0x06F8: if (cpu.read_byte(0x06F8) != 0x7A || cpu.read_byte(0x06F9) != 0x14) return false; cpu.execute_instruction<0x7A>(0x0014, 2); return true;
    // src/spc700/main.spc700.s:275 MOV UNK0015, Y
    case 0x06FA: if (cpu.read_byte(0x06FA) != 0xCB || cpu.read_byte(0x06FB) != 0x15) return false; cpu.execute_instruction<0xCB>(0x0015, 2); return true;
    // src/spc700/main.spc700.s:276 ASL A
    case 0x06FC: if (cpu.read_byte(0x06FC) != 0x1C) return false; cpu.execute_instruction<0x1C>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:277 ROL UNK0015
    case 0x06FD: if (cpu.read_byte(0x06FD) != 0x2B || cpu.read_byte(0x06FE) != 0x15) return false; cpu.execute_instruction<0x2B>(0x0015, 2); return true;
    // src/spc700/main.spc700.s:278 MOV UNK0014, A
    case 0x06FF: if (cpu.read_byte(0x06FF) != 0xC4 || cpu.read_byte(0x0700) != 0x14) return false; cpu.execute_instruction<0xC4>(0x0014, 2); return true;
    // src/spc700/main.spc700.s:279 BRA UNK0707
    case 0x0701: if (cpu.read_byte(0x0701) != 0x2F || cpu.read_byte(0x0702) != 0x04) return false; cpu.execute_instruction<0x2F>(0x0004, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0703.
bool execute_audio_unresolved_unk0703_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:281 LSR UNK0015
    case 0x0703: if (cpu.read_byte(0x0703) != 0x4B || cpu.read_byte(0x0704) != 0x15) return false; cpu.execute_instruction<0x4B>(0x0015, 2); return true;
    // src/spc700/main.spc700.s:282 ROR A
    case 0x0705: if (cpu.read_byte(0x0705) != 0x7C) return false; cpu.execute_instruction<0x7C>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:283 INC X
    case 0x0706: if (cpu.read_byte(0x0706) != 0x3D) return false; cpu.execute_instruction<0x3D>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0707.
bool execute_audio_unresolved_unk0707_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:285 CMP X, #$06
    case 0x0707: if (cpu.read_byte(0x0707) != 0xC8 || cpu.read_byte(0x0708) != 0x06) return false; cpu.execute_instruction<0xC8>(0x0006, 2); return true;
    // src/spc700/main.spc700.s:286 BNE UNK0703
    case 0x0709: if (cpu.read_byte(0x0709) != 0xD0 || cpu.read_byte(0x070A) != 0xF8) return false; cpu.execute_instruction<0xD0>(0x00F8, 2); return true;
    // src/spc700/main.spc700.s:287 MOV UNK0014, A
    case 0x070B: if (cpu.read_byte(0x070B) != 0xC4 || cpu.read_byte(0x070C) != 0x14) return false; cpu.execute_instruction<0xC4>(0x0014, 2); return true;
    // src/spc700/main.spc700.s:288 POP X
    case 0x070D: if (cpu.read_byte(0x070D) != 0xCE) return false; cpu.execute_instruction<0xCE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:289 MOV A, UNK0220 + X
    case 0x070E: if (cpu.read_byte(0x070E) != 0xF5 || cpu.read_byte(0x070F) != 0x20 || cpu.read_byte(0x0710) != 0x02) return false; cpu.execute_instruction<0xF5>(0x0220, 3); return true;
    // src/spc700/main.spc700.s:290 MOV Y, UNK0015
    case 0x0711: if (cpu.read_byte(0x0711) != 0xEB || cpu.read_byte(0x0712) != 0x15) return false; cpu.execute_instruction<0xEB>(0x0015, 2); return true;
    // src/spc700/main.spc700.s:291 MUL YA
    case 0x0713: if (cpu.read_byte(0x0713) != 0xCF) return false; cpu.execute_instruction<0xCF>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:292 MOVW UNK0016, YA
    case 0x0714: if (cpu.read_byte(0x0714) != 0xDA || cpu.read_byte(0x0715) != 0x16) return false; cpu.execute_instruction<0xDA>(0x0016, 2); return true;
    // src/spc700/main.spc700.s:293 MOV A, UNK0220 + X
    case 0x0716: if (cpu.read_byte(0x0716) != 0xF5 || cpu.read_byte(0x0717) != 0x20 || cpu.read_byte(0x0718) != 0x02) return false; cpu.execute_instruction<0xF5>(0x0220, 3); return true;
    // src/spc700/main.spc700.s:294 MOV Y, UNK0014
    case 0x0719: if (cpu.read_byte(0x0719) != 0xEB || cpu.read_byte(0x071A) != 0x14) return false; cpu.execute_instruction<0xEB>(0x0014, 2); return true;
    // src/spc700/main.spc700.s:295 MUL YA
    case 0x071B: if (cpu.read_byte(0x071B) != 0xCF) return false; cpu.execute_instruction<0xCF>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:296 PUSH Y
    case 0x071C: if (cpu.read_byte(0x071C) != 0x6D) return false; cpu.execute_instruction<0x6D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:297 MOV A, UNK0221 + X
    case 0x071D: if (cpu.read_byte(0x071D) != 0xF5 || cpu.read_byte(0x071E) != 0x21 || cpu.read_byte(0x071F) != 0x02) return false; cpu.execute_instruction<0xF5>(0x0221, 3); return true;
    // src/spc700/main.spc700.s:298 MOV Y, UNK0014
    case 0x0720: if (cpu.read_byte(0x0720) != 0xEB || cpu.read_byte(0x0721) != 0x14) return false; cpu.execute_instruction<0xEB>(0x0014, 2); return true;
    // src/spc700/main.spc700.s:299 MUL YA
    case 0x0722: if (cpu.read_byte(0x0722) != 0xCF) return false; cpu.execute_instruction<0xCF>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:300 ADDW YA, UNK0016
    case 0x0723: if (cpu.read_byte(0x0723) != 0x7A || cpu.read_byte(0x0724) != 0x16) return false; cpu.execute_instruction<0x7A>(0x0016, 2); return true;
    // src/spc700/main.spc700.s:301 MOVW UNK0016, YA
    case 0x0725: if (cpu.read_byte(0x0725) != 0xDA || cpu.read_byte(0x0726) != 0x16) return false; cpu.execute_instruction<0xDA>(0x0016, 2); return true;
    // src/spc700/main.spc700.s:302 MOV A, UNK0221 + X
    case 0x0727: if (cpu.read_byte(0x0727) != 0xF5 || cpu.read_byte(0x0728) != 0x21 || cpu.read_byte(0x0729) != 0x02) return false; cpu.execute_instruction<0xF5>(0x0221, 3); return true;
    // src/spc700/main.spc700.s:303 MOV Y, UNK0015
    case 0x072A: if (cpu.read_byte(0x072A) != 0xEB || cpu.read_byte(0x072B) != 0x15) return false; cpu.execute_instruction<0xEB>(0x0015, 2); return true;
    // src/spc700/main.spc700.s:304 MUL YA
    case 0x072C: if (cpu.read_byte(0x072C) != 0xCF) return false; cpu.execute_instruction<0xCF>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:305 MOV Y, A
    case 0x072D: if (cpu.read_byte(0x072D) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:306 POP A
    case 0x072E: if (cpu.read_byte(0x072E) != 0xAE) return false; cpu.execute_instruction<0xAE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:307 ADDW YA, UNK0016
    case 0x072F: if (cpu.read_byte(0x072F) != 0x7A || cpu.read_byte(0x0730) != 0x16) return false; cpu.execute_instruction<0x7A>(0x0016, 2); return true;
    // src/spc700/main.spc700.s:308 MOVW UNK0016, YA
    case 0x0731: if (cpu.read_byte(0x0731) != 0xDA || cpu.read_byte(0x0732) != 0x16) return false; cpu.execute_instruction<0xDA>(0x0016, 2); return true;
    // src/spc700/main.spc700.s:309 MOV A, X
    case 0x0733: if (cpu.read_byte(0x0733) != 0x7D) return false; cpu.execute_instruction<0x7D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:310 XCN A
    case 0x0734: if (cpu.read_byte(0x0734) != 0x9F) return false; cpu.execute_instruction<0x9F>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:311 LSR A
    case 0x0735: if (cpu.read_byte(0x0735) != 0x5C) return false; cpu.execute_instruction<0x5C>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:312 OR A, #$02
    case 0x0736: if (cpu.read_byte(0x0736) != 0x08 || cpu.read_byte(0x0737) != 0x02) return false; cpu.execute_instruction<0x08>(0x0002, 2); return true;
    // src/spc700/main.spc700.s:313 MOV Y, A
    case 0x0738: if (cpu.read_byte(0x0738) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:314 MOV A, UNK0016
    case 0x0739: if (cpu.read_byte(0x0739) != 0xE4 || cpu.read_byte(0x073A) != 0x16) return false; cpu.execute_instruction<0xE4>(0x0016, 2); return true;
    // src/spc700/main.spc700.s:315 CALL UNK0741
    case 0x073B: if (cpu.read_byte(0x073B) != 0x3F || cpu.read_byte(0x073C) != 0x41 || cpu.read_byte(0x073D) != 0x07) return false; cpu.execute_instruction<0x3F>(0x0741, 3); return true;
    // src/spc700/main.spc700.s:316 INC Y
    case 0x073E: if (cpu.read_byte(0x073E) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:317 MOV A, UNK0017
    case 0x073F: if (cpu.read_byte(0x073F) != 0xE4 || cpu.read_byte(0x0740) != 0x17) return false; cpu.execute_instruction<0xE4>(0x0017, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0741.
bool execute_audio_unresolved_unk0741_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:320 PUSH A
    case 0x0741: if (cpu.read_byte(0x0741) != 0x2D) return false; cpu.execute_instruction<0x2D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:321 MOV A, CURRENT_TRACK_BIT
    case 0x0742: if (cpu.read_byte(0x0742) != 0xE4 || cpu.read_byte(0x0743) != 0x47) return false; cpu.execute_instruction<0xE4>(0x0047, 2); return true;
    // src/spc700/main.spc700.s:322 AND A, SFX_PLAYING_BITS
    case 0x0744: if (cpu.read_byte(0x0744) != 0x24 || cpu.read_byte(0x0745) != 0x1A) return false; cpu.execute_instruction<0x24>(0x001A, 2); return true;
    // src/spc700/main.spc700.s:323 POP A
    case 0x0746: if (cpu.read_byte(0x0746) != 0xAE) return false; cpu.execute_instruction<0xAE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:324 BNE UNK074F
    case 0x0747: if (cpu.read_byte(0x0747) != 0xD0 || cpu.read_byte(0x0748) != 0x06) return false; cpu.execute_instruction<0xD0>(0x0006, 2); return true;
    default: return false;
    }
}
// Assembly source label: WRITE_DSP.
bool execute_audio_write_dsp_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:326 MOV.w DSPADDR, Y
    case 0x0749: if (cpu.read_byte(0x0749) != 0xCC || cpu.read_byte(0x074A) != 0xF2 || cpu.read_byte(0x074B) != 0x00) return false; cpu.execute_instruction<0xCC>(0x00F2, 3); return true;
    // src/spc700/main.spc700.s:327 MOV.w DSPDATA, A
    case 0x074C: if (cpu.read_byte(0x074C) != 0xC5 || cpu.read_byte(0x074D) != 0xF3 || cpu.read_byte(0x074E) != 0x00) return false; cpu.execute_instruction<0xC5>(0x00F3, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK074F.
bool execute_audio_unresolved_unk074f_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:329 RET
    case 0x074F: if (cpu.read_byte(0x074F) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0750.
bool execute_audio_unresolved_unk0750_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:332 MOV Y, #$00
    case 0x0750: if (cpu.read_byte(0x0750) != 0x8D || cpu.read_byte(0x0751) != 0x00) return false; cpu.execute_instruction<0x8D>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:333 MOV A, (PHRASE_LIST_POINTER) + Y
    case 0x0752: if (cpu.read_byte(0x0752) != 0xF7 || cpu.read_byte(0x0753) != 0x40) return false; cpu.execute_instruction<0xF7>(0x0040, 2); return true;
    // src/spc700/main.spc700.s:334 INCW PHRASE_LIST_POINTER
    case 0x0754: if (cpu.read_byte(0x0754) != 0x3A || cpu.read_byte(0x0755) != 0x40) return false; cpu.execute_instruction<0x3A>(0x0040, 2); return true;
    // src/spc700/main.spc700.s:335 PUSH A
    case 0x0756: if (cpu.read_byte(0x0756) != 0x2D) return false; cpu.execute_instruction<0x2D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:336 MOV A, (PHRASE_LIST_POINTER) + Y
    case 0x0757: if (cpu.read_byte(0x0757) != 0xF7 || cpu.read_byte(0x0758) != 0x40) return false; cpu.execute_instruction<0xF7>(0x0040, 2); return true;
    // src/spc700/main.spc700.s:337 INCW PHRASE_LIST_POINTER
    case 0x0759: if (cpu.read_byte(0x0759) != 0x3A || cpu.read_byte(0x075A) != 0x40) return false; cpu.execute_instruction<0x3A>(0x0040, 2); return true;
    // src/spc700/main.spc700.s:338 MOV Y, A
    case 0x075B: if (cpu.read_byte(0x075B) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:339 POP A
    case 0x075C: if (cpu.read_byte(0x075C) != 0xAE) return false; cpu.execute_instruction<0xAE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:340 RET
    case 0x075D: if (cpu.read_byte(0x075D) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK075E.
bool execute_audio_unresolved_unk075e_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:343 MOV A, #$FF
    case 0x075E: if (cpu.read_byte(0x075E) != 0xE8 || cpu.read_byte(0x075F) != 0xFF) return false; cpu.execute_instruction<0xE8>(0x00FF, 2); return true;
    // src/spc700/main.spc700.s:344 MOV Y, #$5C
    case 0x0760: if (cpu.read_byte(0x0760) != 0x8D || cpu.read_byte(0x0761) != 0x5C) return false; cpu.execute_instruction<0x8D>(0x005C, 2); return true;
    // src/spc700/main.spc700.s:345 CALL WRITE_DSP
    case 0x0762: if (cpu.read_byte(0x0762) != 0x3F || cpu.read_byte(0x0763) != 0x49 || cpu.read_byte(0x0764) != 0x07) return false; cpu.execute_instruction<0x3F>(0x0749, 3); return true;
    // src/spc700/main.spc700.s:346 CALL UNK141A
    case 0x0765: if (cpu.read_byte(0x0765) != 0x3F || cpu.read_byte(0x0766) != 0x1A || cpu.read_byte(0x0767) != 0x14) return false; cpu.execute_instruction<0x3F>(0x141A, 3); return true;
    // src/spc700/main.spc700.s:347 CALL UNK1453
    case 0x0768: if (cpu.read_byte(0x0768) != 0x3F || cpu.read_byte(0x0769) != 0x53 || cpu.read_byte(0x076A) != 0x14) return false; cpu.execute_instruction<0x3F>(0x1453, 3); return true;
    // src/spc700/main.spc700.s:348 CALL UNK0EE1
    case 0x076B: if (cpu.read_byte(0x076B) != 0x3F || cpu.read_byte(0x076C) != 0xE1 || cpu.read_byte(0x076D) != 0x0E) return false; cpu.execute_instruction<0x3F>(0x0EE1, 3); return true;
    // src/spc700/main.spc700.s:349 MOV A, #$00
    case 0x076E: if (cpu.read_byte(0x076E) != 0xE8 || cpu.read_byte(0x076F) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:350 MOV CPUIO_IN_OLD_VALUES, A
    case 0x0770: if (cpu.read_byte(0x0770) != 0xC4 || cpu.read_byte(0x0771) != 0x08) return false; cpu.execute_instruction<0xC4>(0x0008, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0772.
bool execute_audio_unresolved_unk0772_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:352 MOV CPUIO_OUT_MIRRORS, A
    case 0x0772: if (cpu.read_byte(0x0772) != 0xC4 || cpu.read_byte(0x0773) != 0x04) return false; cpu.execute_instruction<0xC4>(0x0004, 2); return true;
    // src/spc700/main.spc700.s:353 CLRC
    case 0x0774: if (cpu.read_byte(0x0774) != 0x60) return false; cpu.execute_instruction<0x60>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:354 ADC A, #$00
    case 0x0775: if (cpu.read_byte(0x0775) != 0x88 || cpu.read_byte(0x0776) != 0x00) return false; cpu.execute_instruction<0x88>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:355 BMI UNK079A
    case 0x0777: if (cpu.read_byte(0x0777) != 0x30 || cpu.read_byte(0x0778) != 0x21) return false; cpu.execute_instruction<0x30>(0x0021, 2); return true;
    // src/spc700/main.spc700.s:356 ASL A
    case 0x0779: if (cpu.read_byte(0x0779) != 0x1C) return false; cpu.execute_instruction<0x1C>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:357 MOV X, A
    case 0x077A: if (cpu.read_byte(0x077A) != 0x5D) return false; cpu.execute_instruction<0x5D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:358 MOV A, UNK2E4A - 2 + 1 + X
    case 0x077B: if (cpu.read_byte(0x077B) != 0xF5 || cpu.read_byte(0x077C) != 0x49 || cpu.read_byte(0x077D) != 0x2E) return false; cpu.execute_instruction<0xF5>(0x2E49, 3); return true;
    // src/spc700/main.spc700.s:359 MOV Y, A
    case 0x077E: if (cpu.read_byte(0x077E) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:360 MOV A, UNK2E4A - 2 + X
    case 0x077F: if (cpu.read_byte(0x077F) != 0xF5 || cpu.read_byte(0x0780) != 0x48 || cpu.read_byte(0x0781) != 0x2E) return false; cpu.execute_instruction<0xF5>(0x2E48, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0782.
bool execute_audio_unresolved_unk0782_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:362 MOVW PHRASE_LIST_POINTER, YA
    case 0x0782: if (cpu.read_byte(0x0782) != 0xDA || cpu.read_byte(0x0783) != 0x40) return false; cpu.execute_instruction<0xDA>(0x0040, 2); return true;
    // src/spc700/main.spc700.s:363 MOV UNK000C, #$02
    case 0x0784: if (cpu.read_byte(0x0784) != 0x8F || cpu.read_byte(0x0785) != 0x02 || cpu.read_byte(0x0786) != 0x0C) return false; cpu.execute_instruction<0x8F>(0x0C02, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0787.
bool execute_audio_unresolved_unk0787_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:365 MOV A, #$00
    case 0x0787: if (cpu.read_byte(0x0787) != 0xE8 || cpu.read_byte(0x0788) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:366 MOV UNK0491, A
    case 0x0789: if (cpu.read_byte(0x0789) != 0xC5 || cpu.read_byte(0x078A) != 0x91 || cpu.read_byte(0x078B) != 0x04) return false; cpu.execute_instruction<0xC5>(0x0491, 3); return true;
    // src/spc700/main.spc700.s:367 MOV UNK04B1, A
    case 0x078C: if (cpu.read_byte(0x078C) != 0xC5 || cpu.read_byte(0x078D) != 0xB1 || cpu.read_byte(0x078E) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04B1, 3); return true;
    // src/spc700/main.spc700.s:368 MOV UNK04B5, A
    case 0x078F: if (cpu.read_byte(0x078F) != 0xC5 || cpu.read_byte(0x0790) != 0xB5 || cpu.read_byte(0x0791) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04B5, 3); return true;
    // src/spc700/main.spc700.s:369 MOV A, SFX_PLAYING_BITS
    case 0x0792: if (cpu.read_byte(0x0792) != 0xE4 || cpu.read_byte(0x0793) != 0x1A) return false; cpu.execute_instruction<0xE4>(0x001A, 2); return true;
    // src/spc700/main.spc700.s:370 EOR A, #$FF
    case 0x0794: if (cpu.read_byte(0x0794) != 0x48 || cpu.read_byte(0x0795) != 0xFF) return false; cpu.execute_instruction<0x48>(0x00FF, 2); return true;
    // src/spc700/main.spc700.s:371 TSET1.w KOF_MIRROR
    case 0x0796: if (cpu.read_byte(0x0796) != 0x0E || cpu.read_byte(0x0797) != 0x46 || cpu.read_byte(0x0798) != 0x00) return false; cpu.execute_instruction<0x0E>(0x0046, 3); return true;
    // src/spc700/main.spc700.s:372 RET
    case 0x0799: if (cpu.read_byte(0x0799) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK079A.
bool execute_audio_unresolved_unk079a_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:375 AND A, #$7F
    case 0x079A: if (cpu.read_byte(0x079A) != 0x28 || cpu.read_byte(0x079B) != 0x7F) return false; cpu.execute_instruction<0x28>(0x007F, 2); return true;
    // src/spc700/main.spc700.s:376 INC A
    case 0x079C: if (cpu.read_byte(0x079C) != 0xBC) return false; cpu.execute_instruction<0xBC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:377 ASL A
    case 0x079D: if (cpu.read_byte(0x079D) != 0x1C) return false; cpu.execute_instruction<0x1C>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:378 MOV X, A
    case 0x079E: if (cpu.read_byte(0x079E) != 0x5D) return false; cpu.execute_instruction<0x5D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:379 MOV A, UNK2E4A + $7E * 2 + 1 + X
    case 0x079F: if (cpu.read_byte(0x079F) != 0xF5 || cpu.read_byte(0x07A0) != 0x47 || cpu.read_byte(0x07A1) != 0x2F) return false; cpu.execute_instruction<0xF5>(0x2F47, 3); return true;
    // src/spc700/main.spc700.s:380 MOV Y, A
    case 0x07A2: if (cpu.read_byte(0x07A2) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:381 MOV A, UNK2E4A + $7E * 2 + X
    case 0x07A3: if (cpu.read_byte(0x07A3) != 0xF5 || cpu.read_byte(0x07A4) != 0x46 || cpu.read_byte(0x07A5) != 0x2F) return false; cpu.execute_instruction<0xF5>(0x2F46, 3); return true;
    // src/spc700/main.spc700.s:382 JMP UNK0782
    case 0x07A6: if (cpu.read_byte(0x07A6) != 0x5F || cpu.read_byte(0x07A7) != 0x82 || cpu.read_byte(0x07A8) != 0x07) return false; cpu.execute_instruction<0x5F>(0x0782, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK07A9.
bool execute_audio_unresolved_unk07a9_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:384 MOV X, #$0E
    case 0x07A9: if (cpu.read_byte(0x07A9) != 0xCD || cpu.read_byte(0x07AA) != 0x0E) return false; cpu.execute_instruction<0xCD>(0x000E, 2); return true;
    // src/spc700/main.spc700.s:385 MOV CURRENT_TRACK_BIT, #$80
    case 0x07AB: if (cpu.read_byte(0x07AB) != 0x8F || cpu.read_byte(0x07AC) != 0x80 || cpu.read_byte(0x07AD) != 0x47) return false; cpu.execute_instruction<0x8F>(0x4780, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK07AE.
bool execute_audio_unresolved_unk07ae_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:387 MOV A, #$FF
    case 0x07AE: if (cpu.read_byte(0x07AE) != 0xE8 || cpu.read_byte(0x07AF) != 0xFF) return false; cpu.execute_instruction<0xE8>(0x00FF, 2); return true;
    // src/spc700/main.spc700.s:388 MOV UNK0301 + X, A
    case 0x07B0: if (cpu.read_byte(0x07B0) != 0xD5 || cpu.read_byte(0x07B1) != 0x01 || cpu.read_byte(0x07B2) != 0x03) return false; cpu.execute_instruction<0xD5>(0x0301, 3); return true;
    // src/spc700/main.spc700.s:389 MOV A, #$0A
    case 0x07B3: if (cpu.read_byte(0x07B3) != 0xE8 || cpu.read_byte(0x07B4) != 0x0A) return false; cpu.execute_instruction<0xE8>(0x000A, 2); return true;
    // src/spc700/main.spc700.s:390 CALL UNK09B8
    case 0x07B5: if (cpu.read_byte(0x07B5) != 0x3F || cpu.read_byte(0x07B6) != 0xB8 || cpu.read_byte(0x07B7) != 0x09) return false; cpu.execute_instruction<0x3F>(0x09B8, 3); return true;
    // src/spc700/main.spc700.s:391 MOV UNK0211 + X, A
    case 0x07B8: if (cpu.read_byte(0x07B8) != 0xD5 || cpu.read_byte(0x07B9) != 0x11 || cpu.read_byte(0x07BA) != 0x02) return false; cpu.execute_instruction<0xD5>(0x0211, 3); return true;
    // src/spc700/main.spc700.s:392 MOV UNK0381 + X, A
    case 0x07BB: if (cpu.read_byte(0x07BB) != 0xD5 || cpu.read_byte(0x07BC) != 0x81 || cpu.read_byte(0x07BD) != 0x03) return false; cpu.execute_instruction<0xD5>(0x0381, 3); return true;
    // src/spc700/main.spc700.s:393 MOV UNK02F0 + X, A
    case 0x07BE: if (cpu.read_byte(0x07BE) != 0xD5 || cpu.read_byte(0x07BF) != 0xF0 || cpu.read_byte(0x07C0) != 0x02) return false; cpu.execute_instruction<0xD5>(0x02F0, 3); return true;
    // src/spc700/main.spc700.s:394 MOV UNK0280 + X, A
    case 0x07C1: if (cpu.read_byte(0x07C1) != 0xD5 || cpu.read_byte(0x07C2) != 0x80 || cpu.read_byte(0x07C3) != 0x02) return false; cpu.execute_instruction<0xD5>(0x0280, 3); return true;
    // src/spc700/main.spc700.s:395 MOV UNK0400 + X, A
    case 0x07C4: if (cpu.read_byte(0x07C4) != 0xD5 || cpu.read_byte(0x07C5) != 0x00 || cpu.read_byte(0x07C6) != 0x04) return false; cpu.execute_instruction<0xD5>(0x0400, 3); return true;
    // src/spc700/main.spc700.s:396 MOV UNK00B1 + X, A
    case 0x07C7: if (cpu.read_byte(0x07C7) != 0xD4 || cpu.read_byte(0x07C8) != 0xB1) return false; cpu.execute_instruction<0xD4>(0x00B1, 2); return true;
    // src/spc700/main.spc700.s:397 MOV UNK00C1 + X, A
    case 0x07C9: if (cpu.read_byte(0x07C9) != 0xD4 || cpu.read_byte(0x07CA) != 0xC1) return false; cpu.execute_instruction<0xD4>(0x00C1, 2); return true;
    // src/spc700/main.spc700.s:398 DEC X
    case 0x07CB: if (cpu.read_byte(0x07CB) != 0x1D) return false; cpu.execute_instruction<0x1D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:399 DEC X
    case 0x07CC: if (cpu.read_byte(0x07CC) != 0x1D) return false; cpu.execute_instruction<0x1D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:400 LSR CURRENT_TRACK_BIT
    case 0x07CD: if (cpu.read_byte(0x07CD) != 0x4B || cpu.read_byte(0x07CE) != 0x47) return false; cpu.execute_instruction<0x4B>(0x0047, 2); return true;
    // src/spc700/main.spc700.s:401 BNE UNK07AE
    case 0x07CF: if (cpu.read_byte(0x07CF) != 0xD0 || cpu.read_byte(0x07D0) != 0xDD) return false; cpu.execute_instruction<0xD0>(0x00DD, 2); return true;
    // src/spc700/main.spc700.s:402 MOV UNK005A, A
    case 0x07D1: if (cpu.read_byte(0x07D1) != 0xC4 || cpu.read_byte(0x07D2) != 0x5A) return false; cpu.execute_instruction<0xC4>(0x005A, 2); return true;
    // src/spc700/main.spc700.s:403 MOV UNK0068, A
    case 0x07D3: if (cpu.read_byte(0x07D3) != 0xC4 || cpu.read_byte(0x07D4) != 0x68) return false; cpu.execute_instruction<0xC4>(0x0068, 2); return true;
    // src/spc700/main.spc700.s:404 MOV UNK0054, A
    case 0x07D5: if (cpu.read_byte(0x07D5) != 0xC4 || cpu.read_byte(0x07D6) != 0x54) return false; cpu.execute_instruction<0xC4>(0x0054, 2); return true;
    // src/spc700/main.spc700.s:405 MOV UNK0050, A
    case 0x07D7: if (cpu.read_byte(0x07D7) != 0xC4 || cpu.read_byte(0x07D8) != 0x50) return false; cpu.execute_instruction<0xC4>(0x0050, 2); return true;
    // src/spc700/main.spc700.s:406 MOV UNK0042, A
    case 0x07D9: if (cpu.read_byte(0x07D9) != 0xC4 || cpu.read_byte(0x07DA) != 0x42) return false; cpu.execute_instruction<0xC4>(0x0042, 2); return true;
    // src/spc700/main.spc700.s:407 MOV BASE_PERCUSSION_INSTRUMENT, A
    case 0x07DB: if (cpu.read_byte(0x07DB) != 0xC4 || cpu.read_byte(0x07DC) != 0x5F) return false; cpu.execute_instruction<0xC4>(0x005F, 2); return true;
    // src/spc700/main.spc700.s:408 MOV UNK0059, #$C0
    case 0x07DD: if (cpu.read_byte(0x07DD) != 0x8F || cpu.read_byte(0x07DE) != 0xC0 || cpu.read_byte(0x07DF) != 0x59) return false; cpu.execute_instruction<0x8F>(0x59C0, 3); return true;
    // src/spc700/main.spc700.s:409 MOV UNK0053, #$20
    case 0x07E0: if (cpu.read_byte(0x07E0) != 0x8F || cpu.read_byte(0x07E1) != 0x20 || cpu.read_byte(0x07E2) != 0x53) return false; cpu.execute_instruction<0x8F>(0x5320, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK07E3.
bool execute_audio_unresolved_unk07e3_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:411 RET
    case 0x07E3: if (cpu.read_byte(0x07E3) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK07E4.
bool execute_audio_unresolved_unk07e4_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:414 JMP UNK075E
    case 0x07E4: if (cpu.read_byte(0x07E4) != 0x5F || cpu.read_byte(0x07E5) != 0x5E || cpu.read_byte(0x07E6) != 0x07) return false; cpu.execute_instruction<0x5F>(0x075E, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK07E7.
bool execute_audio_unresolved_unk07e7_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:416 JMP UNK0772
    case 0x07E7: if (cpu.read_byte(0x07E7) != 0x5F || cpu.read_byte(0x07E8) != 0x72 || cpu.read_byte(0x07E9) != 0x07) return false; cpu.execute_instruction<0x5F>(0x0772, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK07EA.
bool execute_audio_unresolved_unk07ea_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:419 MOV A, #$00
    case 0x07EA: if (cpu.read_byte(0x07EA) != 0xE8 || cpu.read_byte(0x07EB) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:420 MOV.w CPUIO0, A
    case 0x07EC: if (cpu.read_byte(0x07EC) != 0xC5 || cpu.read_byte(0x07ED) != 0xF4 || cpu.read_byte(0x07EE) != 0x00) return false; cpu.execute_instruction<0xC5>(0x00F4, 3); return true;
    // src/spc700/main.spc700.s:421 MOV A, #$00
    case 0x07EF: if (cpu.read_byte(0x07EF) != 0xE8 || cpu.read_byte(0x07F0) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:422 JMP UNK0772
    case 0x07F1: if (cpu.read_byte(0x07F1) != 0x5F || cpu.read_byte(0x07F2) != 0x72 || cpu.read_byte(0x07F3) != 0x07) return false; cpu.execute_instruction<0x5F>(0x0772, 3); return true;
    // src/spc700/main.spc700.s:423 MOV A, CPUIO_IN_OLD_VALUES
    case 0x07F4: if (cpu.read_byte(0x07F4) != 0xE4 || cpu.read_byte(0x07F5) != 0x08) return false; cpu.execute_instruction<0xE4>(0x0008, 2); return true;
    // src/spc700/main.spc700.s:424 BMI UNK07FF
    case 0x07F6: if (cpu.read_byte(0x07F6) != 0x30 || cpu.read_byte(0x07F7) != 0x07) return false; cpu.execute_instruction<0x30>(0x0007, 2); return true;
    // src/spc700/main.spc700.s:425 RET
    case 0x07F8: if (cpu.read_byte(0x07F8) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK07F9.
bool execute_audio_unresolved_unk07f9_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:428 MOV Y, CPUIO_IN_OLD_VALUES
    case 0x07F9: if (cpu.read_byte(0x07F9) != 0xEB || cpu.read_byte(0x07FA) != 0x08) return false; cpu.execute_instruction<0xEB>(0x0008, 2); return true;
    // src/spc700/main.spc700.s:429 MOV A, CPUIO_IN_MIRRORS
    case 0x07FB: if (cpu.read_byte(0x07FB) != 0xE4 || cpu.read_byte(0x07FC) != 0x00) return false; cpu.execute_instruction<0xE4>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:430 MOV CPUIO_IN_OLD_VALUES, A
    case 0x07FD: if (cpu.read_byte(0x07FD) != 0xC4 || cpu.read_byte(0x07FE) != 0x08) return false; cpu.execute_instruction<0xC4>(0x0008, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK07FF.
bool execute_audio_unresolved_unk07ff_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:432 CMP A, #$F0
    case 0x07FF: if (cpu.read_byte(0x07FF) != 0x68 || cpu.read_byte(0x0800) != 0xF0) return false; cpu.execute_instruction<0x68>(0x00F0, 2); return true;
    // src/spc700/main.spc700.s:433 BEQ UNK0787
    case 0x0801: if (cpu.read_byte(0x0801) != 0xF0 || cpu.read_byte(0x0802) != 0x84) return false; cpu.execute_instruction<0xF0>(0x0084, 2); return true;
    // src/spc700/main.spc700.s:434 CMP A, #$F1
    case 0x0803: if (cpu.read_byte(0x0803) != 0x68 || cpu.read_byte(0x0804) != 0xF1) return false; cpu.execute_instruction<0x68>(0x00F1, 2); return true;
    // src/spc700/main.spc700.s:435 BEQ UNK080F
    case 0x0805: if (cpu.read_byte(0x0805) != 0xF0 || cpu.read_byte(0x0806) != 0x08) return false; cpu.execute_instruction<0xF0>(0x0008, 2); return true;
    // src/spc700/main.spc700.s:436 CMP A, #$FF
    case 0x0807: if (cpu.read_byte(0x0807) != 0x68 || cpu.read_byte(0x0808) != 0xFF) return false; cpu.execute_instruction<0x68>(0x00FF, 2); return true;
    // src/spc700/main.spc700.s:437 BEQ UNK07E4
    case 0x0809: if (cpu.read_byte(0x0809) != 0xF0 || cpu.read_byte(0x080A) != 0xD9) return false; cpu.execute_instruction<0xF0>(0x00D9, 2); return true;
    // src/spc700/main.spc700.s:438 CMP Y, CPUIO_IN_MIRRORS
    case 0x080B: if (cpu.read_byte(0x080B) != 0x7E || cpu.read_byte(0x080C) != 0x00) return false; cpu.execute_instruction<0x7E>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:439 BNE UNK07E7
    case 0x080D: if (cpu.read_byte(0x080D) != 0xD0 || cpu.read_byte(0x080E) != 0xD8) return false; cpu.execute_instruction<0xD0>(0x00D8, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK080F.
bool execute_audio_unresolved_unk080f_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:441 MOV A, CPUIO_OUT_MIRRORS
    case 0x080F: if (cpu.read_byte(0x080F) != 0xE4 || cpu.read_byte(0x0810) != 0x04) return false; cpu.execute_instruction<0xE4>(0x0004, 2); return true;
    // src/spc700/main.spc700.s:442 BEQ UNK07E3
    case 0x0811: if (cpu.read_byte(0x0811) != 0xF0 || cpu.read_byte(0x0812) != 0xD0) return false; cpu.execute_instruction<0xF0>(0x00D0, 2); return true;
    // src/spc700/main.spc700.s:443 MOV A, UNK000C
    case 0x0813: if (cpu.read_byte(0x0813) != 0xE4 || cpu.read_byte(0x0814) != 0x0C) return false; cpu.execute_instruction<0xE4>(0x000C, 2); return true;
    // src/spc700/main.spc700.s:444 BEQ UNK0871
    case 0x0815: if (cpu.read_byte(0x0815) != 0xF0 || cpu.read_byte(0x0816) != 0x5A) return false; cpu.execute_instruction<0xF0>(0x005A, 2); return true;
    // src/spc700/main.spc700.s:446 DBNZ.b UNK000C, UNK07A9
    case 0x0817: if (cpu.read_byte(0x0817) != 0x6E || cpu.read_byte(0x0818) != 0x0C || cpu.read_byte(0x0819) != 0x8F) return false; cpu.execute_instruction<0x6E>(0x8F0C, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK081A.
bool execute_audio_unresolved_unk081a_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:448 CALL UNK0750
    case 0x081A: if (cpu.read_byte(0x081A) != 0x3F || cpu.read_byte(0x081B) != 0x50 || cpu.read_byte(0x081C) != 0x07) return false; cpu.execute_instruction<0x3F>(0x0750, 3); return true;
    // src/spc700/main.spc700.s:449 BNE UNK0841
    case 0x081D: if (cpu.read_byte(0x081D) != 0xD0 || cpu.read_byte(0x081E) != 0x22) return false; cpu.execute_instruction<0xD0>(0x0022, 2); return true;
    // src/spc700/main.spc700.s:450 MOV Y, A
    case 0x081F: if (cpu.read_byte(0x081F) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:451 BEQ UNK07EA
    case 0x0820: if (cpu.read_byte(0x0820) != 0xF0 || cpu.read_byte(0x0821) != 0xC8) return false; cpu.execute_instruction<0xF0>(0x00C8, 2); return true;
    // src/spc700/main.spc700.s:452 CMP A, #$80
    case 0x0822: if (cpu.read_byte(0x0822) != 0x68 || cpu.read_byte(0x0823) != 0x80) return false; cpu.execute_instruction<0x68>(0x0080, 2); return true;
    // src/spc700/main.spc700.s:453 BEQ UNK082C
    case 0x0824: if (cpu.read_byte(0x0824) != 0xF0 || cpu.read_byte(0x0825) != 0x06) return false; cpu.execute_instruction<0xF0>(0x0006, 2); return true;
    // src/spc700/main.spc700.s:454 CMP A, #$81
    case 0x0826: if (cpu.read_byte(0x0826) != 0x68 || cpu.read_byte(0x0827) != 0x81) return false; cpu.execute_instruction<0x68>(0x0081, 2); return true;
    // src/spc700/main.spc700.s:455 BNE UNK0830
    case 0x0828: if (cpu.read_byte(0x0828) != 0xD0 || cpu.read_byte(0x0829) != 0x06) return false; cpu.execute_instruction<0xD0>(0x0006, 2); return true;
    // src/spc700/main.spc700.s:456 MOV A, #$00
    case 0x082A: if (cpu.read_byte(0x082A) != 0xE8 || cpu.read_byte(0x082B) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK082C.
bool execute_audio_unresolved_unk082c_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:458 MOV FAST_FORWARD_FLAG, A
    case 0x082C: if (cpu.read_byte(0x082C) != 0xC4 || cpu.read_byte(0x082D) != 0x1B) return false; cpu.execute_instruction<0xC4>(0x001B, 2); return true;
    // src/spc700/main.spc700.s:459 BRA UNK081A
    case 0x082E: if (cpu.read_byte(0x082E) != 0x2F || cpu.read_byte(0x082F) != 0xEA) return false; cpu.execute_instruction<0x2F>(0x00EA, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0830.
bool execute_audio_unresolved_unk0830_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:461 DEC UNK0042
    case 0x0830: if (cpu.read_byte(0x0830) != 0x8B || cpu.read_byte(0x0831) != 0x42) return false; cpu.execute_instruction<0x8B>(0x0042, 2); return true;
    // src/spc700/main.spc700.s:462 BPL UNK0836
    case 0x0832: if (cpu.read_byte(0x0832) != 0x10 || cpu.read_byte(0x0833) != 0x02) return false; cpu.execute_instruction<0x10>(0x0002, 2); return true;
    // src/spc700/main.spc700.s:463 MOV UNK0042, A
    case 0x0834: if (cpu.read_byte(0x0834) != 0xC4 || cpu.read_byte(0x0835) != 0x42) return false; cpu.execute_instruction<0xC4>(0x0042, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0836.
bool execute_audio_unresolved_unk0836_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:465 CALL UNK0750
    case 0x0836: if (cpu.read_byte(0x0836) != 0x3F || cpu.read_byte(0x0837) != 0x50 || cpu.read_byte(0x0838) != 0x07) return false; cpu.execute_instruction<0x3F>(0x0750, 3); return true;
    // src/spc700/main.spc700.s:466 MOV X, UNK0042
    case 0x0839: if (cpu.read_byte(0x0839) != 0xF8 || cpu.read_byte(0x083A) != 0x42) return false; cpu.execute_instruction<0xF8>(0x0042, 2); return true;
    // src/spc700/main.spc700.s:467 BEQ UNK081A
    case 0x083B: if (cpu.read_byte(0x083B) != 0xF0 || cpu.read_byte(0x083C) != 0xDD) return false; cpu.execute_instruction<0xF0>(0x00DD, 2); return true;
    // src/spc700/main.spc700.s:468 MOVW PHRASE_LIST_POINTER, YA
    case 0x083D: if (cpu.read_byte(0x083D) != 0xDA || cpu.read_byte(0x083E) != 0x40) return false; cpu.execute_instruction<0xDA>(0x0040, 2); return true;
    // src/spc700/main.spc700.s:469 BRA UNK081A
    case 0x083F: if (cpu.read_byte(0x083F) != 0x2F || cpu.read_byte(0x0840) != 0xD9) return false; cpu.execute_instruction<0x2F>(0x00D9, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0841.
bool execute_audio_unresolved_unk0841_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:472 MOVW UNK0016, YA
    case 0x0841: if (cpu.read_byte(0x0841) != 0xDA || cpu.read_byte(0x0842) != 0x16) return false; cpu.execute_instruction<0xDA>(0x0016, 2); return true;
    // src/spc700/main.spc700.s:473 MOV Y, #$0F
    case 0x0843: if (cpu.read_byte(0x0843) != 0x8D || cpu.read_byte(0x0844) != 0x0F) return false; cpu.execute_instruction<0x8D>(0x000F, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0845.
bool execute_audio_unresolved_unk0845_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:475 MOV A, (UNK0016) + Y
    case 0x0845: if (cpu.read_byte(0x0845) != 0xF7 || cpu.read_byte(0x0846) != 0x16) return false; cpu.execute_instruction<0xF7>(0x0016, 2); return true;
    // src/spc700/main.spc700.s:476 MOV TRACK_POINTERS + Y, A
    case 0x0847: if (cpu.read_byte(0x0847) != 0xD6 || cpu.read_byte(0x0848) != 0x30 || cpu.read_byte(0x0849) != 0x00) return false; cpu.execute_instruction<0xD6>(0x0030, 3); return true;
    // src/spc700/main.spc700.s:477 DEC Y
    case 0x084A: if (cpu.read_byte(0x084A) != 0xDC) return false; cpu.execute_instruction<0xDC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:478 BPL UNK0845
    case 0x084B: if (cpu.read_byte(0x084B) != 0x10 || cpu.read_byte(0x084C) != 0xF8) return false; cpu.execute_instruction<0x10>(0x00F8, 2); return true;
    // src/spc700/main.spc700.s:479 MOV X, #$00
    case 0x084D: if (cpu.read_byte(0x084D) != 0xCD || cpu.read_byte(0x084E) != 0x00) return false; cpu.execute_instruction<0xCD>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:480 MOV CURRENT_TRACK_BIT, #$01
    case 0x084F: if (cpu.read_byte(0x084F) != 0x8F || cpu.read_byte(0x0850) != 0x01 || cpu.read_byte(0x0851) != 0x47) return false; cpu.execute_instruction<0x8F>(0x4701, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0852.
bool execute_audio_unresolved_unk0852_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:482 MOV A, TRACK_POINTERS+1 + X
    case 0x0852: if (cpu.read_byte(0x0852) != 0xF4 || cpu.read_byte(0x0853) != 0x31) return false; cpu.execute_instruction<0xF4>(0x0031, 2); return true;
    // src/spc700/main.spc700.s:483 BEQ UNK0860
    case 0x0854: if (cpu.read_byte(0x0854) != 0xF0 || cpu.read_byte(0x0855) != 0x0A) return false; cpu.execute_instruction<0xF0>(0x000A, 2); return true;
    // src/spc700/main.spc700.s:484 MOV A, UNK0211 + X
    case 0x0856: if (cpu.read_byte(0x0856) != 0xF5 || cpu.read_byte(0x0857) != 0x11 || cpu.read_byte(0x0858) != 0x02) return false; cpu.execute_instruction<0xF5>(0x0211, 3); return true;
    // src/spc700/main.spc700.s:485 BNE UNK0860
    case 0x0859: if (cpu.read_byte(0x0859) != 0xD0 || cpu.read_byte(0x085A) != 0x05) return false; cpu.execute_instruction<0xD0>(0x0005, 2); return true;
    // src/spc700/main.spc700.s:486 MOV A, #$00
    case 0x085B: if (cpu.read_byte(0x085B) != 0xE8 || cpu.read_byte(0x085C) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:487 CALL UNK095F
    case 0x085D: if (cpu.read_byte(0x085D) != 0x3F || cpu.read_byte(0x085E) != 0x5F || cpu.read_byte(0x085F) != 0x09) return false; cpu.execute_instruction<0x3F>(0x095F, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0860.
bool execute_audio_unresolved_unk0860_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:489 MOV A, #$00
    case 0x0860: if (cpu.read_byte(0x0860) != 0xE8 || cpu.read_byte(0x0861) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:490 MOV UNK0080 + X, A
    case 0x0862: if (cpu.read_byte(0x0862) != 0xD4 || cpu.read_byte(0x0863) != 0x80) return false; cpu.execute_instruction<0xD4>(0x0080, 2); return true;
    // src/spc700/main.spc700.s:491 MOV UNK0090 + X, A
    case 0x0864: if (cpu.read_byte(0x0864) != 0xD4 || cpu.read_byte(0x0865) != 0x90) return false; cpu.execute_instruction<0xD4>(0x0090, 2); return true;
    // src/spc700/main.spc700.s:492 MOV UNK0091 + X, A
    case 0x0866: if (cpu.read_byte(0x0866) != 0xD4 || cpu.read_byte(0x0867) != 0x91) return false; cpu.execute_instruction<0xD4>(0x0091, 2); return true;
    // src/spc700/main.spc700.s:493 INC A
    case 0x0868: if (cpu.read_byte(0x0868) != 0xBC) return false; cpu.execute_instruction<0xBC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:494 MOV UNK0070 + X, A
    case 0x0869: if (cpu.read_byte(0x0869) != 0xD4 || cpu.read_byte(0x086A) != 0x70) return false; cpu.execute_instruction<0xD4>(0x0070, 2); return true;
    // src/spc700/main.spc700.s:495 INC X
    case 0x086B: if (cpu.read_byte(0x086B) != 0x3D) return false; cpu.execute_instruction<0x3D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:496 INC X
    case 0x086C: if (cpu.read_byte(0x086C) != 0x3D) return false; cpu.execute_instruction<0x3D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:497 ASL CURRENT_TRACK_BIT
    case 0x086D: if (cpu.read_byte(0x086D) != 0x0B || cpu.read_byte(0x086E) != 0x47) return false; cpu.execute_instruction<0x0B>(0x0047, 2); return true;
    // src/spc700/main.spc700.s:498 BNE UNK0852
    case 0x086F: if (cpu.read_byte(0x086F) != 0xD0 || cpu.read_byte(0x0870) != 0xE1) return false; cpu.execute_instruction<0xD0>(0x00E1, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0871.
bool execute_audio_unresolved_unk0871_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:500 MOV X, #$00
    case 0x0871: if (cpu.read_byte(0x0871) != 0xCD || cpu.read_byte(0x0872) != 0x00) return false; cpu.execute_instruction<0xCD>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:501 MOV VOLUME_CHANGE_BITS, X
    case 0x0873: if (cpu.read_byte(0x0873) != 0xD8 || cpu.read_byte(0x0874) != 0x5E) return false; cpu.execute_instruction<0xD8>(0x005E, 2); return true;
    // src/spc700/main.spc700.s:502 MOV CURRENT_TRACK_BIT, #$01
    case 0x0875: if (cpu.read_byte(0x0875) != 0x8F || cpu.read_byte(0x0876) != 0x01 || cpu.read_byte(0x0877) != 0x47) return false; cpu.execute_instruction<0x8F>(0x4701, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0878.
bool execute_audio_unresolved_unk0878_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:504 MOV UNK0044, X
    case 0x0878: if (cpu.read_byte(0x0878) != 0xD8 || cpu.read_byte(0x0879) != 0x44) return false; cpu.execute_instruction<0xD8>(0x0044, 2); return true;
    // src/spc700/main.spc700.s:505 MOV A, TRACK_POINTERS+1 + X
    case 0x087A: if (cpu.read_byte(0x087A) != 0xF4 || cpu.read_byte(0x087B) != 0x31) return false; cpu.execute_instruction<0xF4>(0x0031, 2); return true;
    // src/spc700/main.spc700.s:506 BEQ UNK08F0
    case 0x087C: if (cpu.read_byte(0x087C) != 0xF0 || cpu.read_byte(0x087D) != 0x72) return false; cpu.execute_instruction<0xF0>(0x0072, 2); return true;
    // src/spc700/main.spc700.s:507 DEC UNK0070 + X
    case 0x087E: if (cpu.read_byte(0x087E) != 0x9B || cpu.read_byte(0x087F) != 0x70) return false; cpu.execute_instruction<0x9B>(0x0070, 2); return true;
    // src/spc700/main.spc700.s:508 BNE UNK08E6
    case 0x0880: if (cpu.read_byte(0x0880) != 0xD0 || cpu.read_byte(0x0881) != 0x64) return false; cpu.execute_instruction<0xD0>(0x0064, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0882.
bool execute_audio_unresolved_unk0882_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:510 CALL UNK0955
    case 0x0882: if (cpu.read_byte(0x0882) != 0x3F || cpu.read_byte(0x0883) != 0x55 || cpu.read_byte(0x0884) != 0x09) return false; cpu.execute_instruction<0x3F>(0x0955, 3); return true;
    // src/spc700/main.spc700.s:511 BNE UNK089E
    case 0x0885: if (cpu.read_byte(0x0885) != 0xD0 || cpu.read_byte(0x0886) != 0x17) return false; cpu.execute_instruction<0xD0>(0x0017, 2); return true;
    // src/spc700/main.spc700.s:512 MOV A, UNK0080 + X
    case 0x0887: if (cpu.read_byte(0x0887) != 0xF4 || cpu.read_byte(0x0888) != 0x80) return false; cpu.execute_instruction<0xF4>(0x0080, 2); return true;
    // src/spc700/main.spc700.s:513 BEQ UNK081A
    case 0x0889: if (cpu.read_byte(0x0889) != 0xF0 || cpu.read_byte(0x088A) != 0x8F) return false; cpu.execute_instruction<0xF0>(0x008F, 2); return true;
    // src/spc700/main.spc700.s:514 CALL UNK0AC4
    case 0x088B: if (cpu.read_byte(0x088B) != 0x3F || cpu.read_byte(0x088C) != 0xC4 || cpu.read_byte(0x088D) != 0x0A) return false; cpu.execute_instruction<0x3F>(0x0AC4, 3); return true;
    // src/spc700/main.spc700.s:515 DEC UNK0080 + X
    case 0x088E: if (cpu.read_byte(0x088E) != 0x9B || cpu.read_byte(0x088F) != 0x80) return false; cpu.execute_instruction<0x9B>(0x0080, 2); return true;
    // src/spc700/main.spc700.s:516 BNE UNK0882
    case 0x0890: if (cpu.read_byte(0x0890) != 0xD0 || cpu.read_byte(0x0891) != 0xF0) return false; cpu.execute_instruction<0xD0>(0x00F0, 2); return true;
    // src/spc700/main.spc700.s:517 MOV A, UNK0230 + X
    case 0x0892: if (cpu.read_byte(0x0892) != 0xF5 || cpu.read_byte(0x0893) != 0x30 || cpu.read_byte(0x0894) != 0x02) return false; cpu.execute_instruction<0xF5>(0x0230, 3); return true;
    // src/spc700/main.spc700.s:518 MOV TRACK_POINTERS + X, A
    case 0x0895: if (cpu.read_byte(0x0895) != 0xD4 || cpu.read_byte(0x0896) != 0x30) return false; cpu.execute_instruction<0xD4>(0x0030, 2); return true;
    // src/spc700/main.spc700.s:519 MOV A, UNK0231 + X
    case 0x0897: if (cpu.read_byte(0x0897) != 0xF5 || cpu.read_byte(0x0898) != 0x31 || cpu.read_byte(0x0899) != 0x02) return false; cpu.execute_instruction<0xF5>(0x0231, 3); return true;
    // src/spc700/main.spc700.s:520 MOV TRACK_POINTERS+1 + X, A
    case 0x089A: if (cpu.read_byte(0x089A) != 0xD4 || cpu.read_byte(0x089B) != 0x31) return false; cpu.execute_instruction<0xD4>(0x0031, 2); return true;
    // src/spc700/main.spc700.s:521 BRA UNK0882
    case 0x089C: if (cpu.read_byte(0x089C) != 0x2F || cpu.read_byte(0x089D) != 0xE4) return false; cpu.execute_instruction<0x2F>(0x00E4, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK089E.
bool execute_audio_unresolved_unk089e_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:524 BMI UNK08C0
    case 0x089E: if (cpu.read_byte(0x089E) != 0x30 || cpu.read_byte(0x089F) != 0x20) return false; cpu.execute_instruction<0x30>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:525 MOV UNK0200 + X, A
    case 0x08A0: if (cpu.read_byte(0x08A0) != 0xD5 || cpu.read_byte(0x08A1) != 0x00 || cpu.read_byte(0x08A2) != 0x02) return false; cpu.execute_instruction<0xD5>(0x0200, 3); return true;
    // src/spc700/main.spc700.s:526 CALL UNK0955
    case 0x08A3: if (cpu.read_byte(0x08A3) != 0x3F || cpu.read_byte(0x08A4) != 0x55 || cpu.read_byte(0x08A5) != 0x09) return false; cpu.execute_instruction<0x3F>(0x0955, 3); return true;
    // src/spc700/main.spc700.s:527 BMI UNK08C0
    case 0x08A6: if (cpu.read_byte(0x08A6) != 0x30 || cpu.read_byte(0x08A7) != 0x18) return false; cpu.execute_instruction<0x30>(0x0018, 2); return true;
    // src/spc700/main.spc700.s:528 PUSH A
    case 0x08A8: if (cpu.read_byte(0x08A8) != 0x2D) return false; cpu.execute_instruction<0x2D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:529 XCN A
    case 0x08A9: if (cpu.read_byte(0x08A9) != 0x9F) return false; cpu.execute_instruction<0x9F>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:530 AND A, #$07
    case 0x08AA: if (cpu.read_byte(0x08AA) != 0x28 || cpu.read_byte(0x08AB) != 0x07) return false; cpu.execute_instruction<0x28>(0x0007, 2); return true;
    // src/spc700/main.spc700.s:531 MOV Y, A
    case 0x08AC: if (cpu.read_byte(0x08AC) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:532 MOV A, $6F80 + Y
    case 0x08AD: if (cpu.read_byte(0x08AD) != 0xF6 || cpu.read_byte(0x08AE) != 0x80 || cpu.read_byte(0x08AF) != 0x6F) return false; cpu.execute_instruction<0xF6>(0x6F80, 3); return true;
    // src/spc700/main.spc700.s:533 MOV UNK0201 + X, A
    case 0x08B0: if (cpu.read_byte(0x08B0) != 0xD5 || cpu.read_byte(0x08B1) != 0x01 || cpu.read_byte(0x08B2) != 0x02) return false; cpu.execute_instruction<0xD5>(0x0201, 3); return true;
    // src/spc700/main.spc700.s:534 POP A
    case 0x08B3: if (cpu.read_byte(0x08B3) != 0xAE) return false; cpu.execute_instruction<0xAE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:535 AND A, #$0F
    case 0x08B4: if (cpu.read_byte(0x08B4) != 0x28 || cpu.read_byte(0x08B5) != 0x0F) return false; cpu.execute_instruction<0x28>(0x000F, 2); return true;
    // src/spc700/main.spc700.s:536 MOV Y, A
    case 0x08B6: if (cpu.read_byte(0x08B6) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:537 MOV A, $6F88 + Y
    case 0x08B7: if (cpu.read_byte(0x08B7) != 0xF6 || cpu.read_byte(0x08B8) != 0x88 || cpu.read_byte(0x08B9) != 0x6F) return false; cpu.execute_instruction<0xF6>(0x6F88, 3); return true;
    // src/spc700/main.spc700.s:538 MOV UNK0210 + X, A
    case 0x08BA: if (cpu.read_byte(0x08BA) != 0xD5 || cpu.read_byte(0x08BB) != 0x10 || cpu.read_byte(0x08BC) != 0x02) return false; cpu.execute_instruction<0xD5>(0x0210, 3); return true;
    // src/spc700/main.spc700.s:539 CALL UNK0955
    case 0x08BD: if (cpu.read_byte(0x08BD) != 0x3F || cpu.read_byte(0x08BE) != 0x55 || cpu.read_byte(0x08BF) != 0x09) return false; cpu.execute_instruction<0x3F>(0x0955, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK08C0.
bool execute_audio_unresolved_unk08c0_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:541 CMP A, #$E0
    case 0x08C0: if (cpu.read_byte(0x08C0) != 0x68 || cpu.read_byte(0x08C1) != 0xE0) return false; cpu.execute_instruction<0x68>(0x00E0, 2); return true;
    // src/spc700/main.spc700.s:542 BCC UNK08C9
    case 0x08C2: if (cpu.read_byte(0x08C2) != 0x90 || cpu.read_byte(0x08C3) != 0x05) return false; cpu.execute_instruction<0x90>(0x0005, 2); return true;
    // src/spc700/main.spc700.s:543 CALL UNK0943
    case 0x08C4: if (cpu.read_byte(0x08C4) != 0x3F || cpu.read_byte(0x08C5) != 0x43 || cpu.read_byte(0x08C6) != 0x09) return false; cpu.execute_instruction<0x3F>(0x0943, 3); return true;
    // src/spc700/main.spc700.s:544 BRA UNK0882
    case 0x08C7: if (cpu.read_byte(0x08C7) != 0x2F || cpu.read_byte(0x08C8) != 0xB9) return false; cpu.execute_instruction<0x2F>(0x00B9, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK08C9.
bool execute_audio_unresolved_unk08c9_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:547 MOV A, UNK0400 + X
    case 0x08C9: if (cpu.read_byte(0x08C9) != 0xF5 || cpu.read_byte(0x08CA) != 0x00 || cpu.read_byte(0x08CB) != 0x04) return false; cpu.execute_instruction<0xF5>(0x0400, 3); return true;
    // src/spc700/main.spc700.s:548 OR A, FAST_FORWARD_FLAG
    case 0x08CC: if (cpu.read_byte(0x08CC) != 0x04 || cpu.read_byte(0x08CD) != 0x1B) return false; cpu.execute_instruction<0x04>(0x001B, 2); return true;
    // src/spc700/main.spc700.s:549 BNE UNK08D4
    case 0x08CE: if (cpu.read_byte(0x08CE) != 0xD0 || cpu.read_byte(0x08CF) != 0x04) return false; cpu.execute_instruction<0xD0>(0x0004, 2); return true;
    // src/spc700/main.spc700.s:550 MOV A, Y
    case 0x08D0: if (cpu.read_byte(0x08D0) != 0xDD) return false; cpu.execute_instruction<0xDD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:551 CALL PLAY_NOTE
    case 0x08D1: if (cpu.read_byte(0x08D1) != 0x3F || cpu.read_byte(0x08D2) != 0x54 || cpu.read_byte(0x08D3) != 0x06) return false; cpu.execute_instruction<0x3F>(0x0654, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK08D4.
bool execute_audio_unresolved_unk08d4_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:553 MOV A, UNK0200 + X
    case 0x08D4: if (cpu.read_byte(0x08D4) != 0xF5 || cpu.read_byte(0x08D5) != 0x00 || cpu.read_byte(0x08D6) != 0x02) return false; cpu.execute_instruction<0xF5>(0x0200, 3); return true;
    // src/spc700/main.spc700.s:554 MOV UNK0070 + X, A
    case 0x08D7: if (cpu.read_byte(0x08D7) != 0xD4 || cpu.read_byte(0x08D8) != 0x70) return false; cpu.execute_instruction<0xD4>(0x0070, 2); return true;
    // src/spc700/main.spc700.s:555 MOV Y, A
    case 0x08D9: if (cpu.read_byte(0x08D9) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:556 MOV A, UNK0201 + X
    case 0x08DA: if (cpu.read_byte(0x08DA) != 0xF5 || cpu.read_byte(0x08DB) != 0x01 || cpu.read_byte(0x08DC) != 0x02) return false; cpu.execute_instruction<0xF5>(0x0201, 3); return true;
    // src/spc700/main.spc700.s:557 MUL YA
    case 0x08DD: if (cpu.read_byte(0x08DD) != 0xCF) return false; cpu.execute_instruction<0xCF>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK08DE.
bool execute_audio_unresolved_unk08de_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:559 MOV A, Y
    case 0x08DE: if (cpu.read_byte(0x08DE) != 0xDD) return false; cpu.execute_instruction<0xDD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:560 BNE UNK08E2
    case 0x08DF: if (cpu.read_byte(0x08DF) != 0xD0 || cpu.read_byte(0x08E0) != 0x01) return false; cpu.execute_instruction<0xD0>(0x0001, 2); return true;
    // src/spc700/main.spc700.s:561 INC A
    case 0x08E1: if (cpu.read_byte(0x08E1) != 0xBC) return false; cpu.execute_instruction<0xBC>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK08E2.
bool execute_audio_unresolved_unk08e2_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:563 MOV UNK0071 + X, A
    case 0x08E2: if (cpu.read_byte(0x08E2) != 0xD4 || cpu.read_byte(0x08E3) != 0x71) return false; cpu.execute_instruction<0xD4>(0x0071, 2); return true;
    // src/spc700/main.spc700.s:564 BRA UNK08ED
    case 0x08E4: if (cpu.read_byte(0x08E4) != 0x2F || cpu.read_byte(0x08E5) != 0x07) return false; cpu.execute_instruction<0x2F>(0x0007, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK08E6.
bool execute_audio_unresolved_unk08e6_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:567 MOV A, FAST_FORWARD_FLAG
    case 0x08E6: if (cpu.read_byte(0x08E6) != 0xE4 || cpu.read_byte(0x08E7) != 0x1B) return false; cpu.execute_instruction<0xE4>(0x001B, 2); return true;
    // src/spc700/main.spc700.s:568 BNE UNK08F0
    case 0x08E8: if (cpu.read_byte(0x08E8) != 0xD0 || cpu.read_byte(0x08E9) != 0x06) return false; cpu.execute_instruction<0xD0>(0x0006, 2); return true;
    // src/spc700/main.spc700.s:569 CALL UNK0CF7
    case 0x08EA: if (cpu.read_byte(0x08EA) != 0x3F || cpu.read_byte(0x08EB) != 0xF7 || cpu.read_byte(0x08EC) != 0x0C) return false; cpu.execute_instruction<0x3F>(0x0CF7, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK08ED.
bool execute_audio_unresolved_unk08ed_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:571 CALL UNK0B84
    case 0x08ED: if (cpu.read_byte(0x08ED) != 0x3F || cpu.read_byte(0x08EE) != 0x84 || cpu.read_byte(0x08EF) != 0x0B) return false; cpu.execute_instruction<0x3F>(0x0B84, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK08F0.
bool execute_audio_unresolved_unk08f0_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:573 INC X
    case 0x08F0: if (cpu.read_byte(0x08F0) != 0x3D) return false; cpu.execute_instruction<0x3D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:574 INC X
    case 0x08F1: if (cpu.read_byte(0x08F1) != 0x3D) return false; cpu.execute_instruction<0x3D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:575 ASL CURRENT_TRACK_BIT
    case 0x08F2: if (cpu.read_byte(0x08F2) != 0x0B || cpu.read_byte(0x08F3) != 0x47) return false; cpu.execute_instruction<0x0B>(0x0047, 2); return true;
    // src/spc700/main.spc700.s:576 BNE UNK0878
    case 0x08F4: if (cpu.read_byte(0x08F4) != 0xD0 || cpu.read_byte(0x08F5) != 0x82) return false; cpu.execute_instruction<0xD0>(0x0082, 2); return true;
    // src/spc700/main.spc700.s:577 MOV A, UNK0054
    case 0x08F6: if (cpu.read_byte(0x08F6) != 0xE4 || cpu.read_byte(0x08F7) != 0x54) return false; cpu.execute_instruction<0xE4>(0x0054, 2); return true;
    // src/spc700/main.spc700.s:578 BEQ UNK0905
    case 0x08F8: if (cpu.read_byte(0x08F8) != 0xF0 || cpu.read_byte(0x08F9) != 0x0B) return false; cpu.execute_instruction<0xF0>(0x000B, 2); return true;
    // src/spc700/main.spc700.s:579 MOVW YA, UNK0056
    case 0x08FA: if (cpu.read_byte(0x08FA) != 0xBA || cpu.read_byte(0x08FB) != 0x56) return false; cpu.execute_instruction<0xBA>(0x0056, 2); return true;
    // src/spc700/main.spc700.s:580 ADDW YA, UNK0052
    case 0x08FC: if (cpu.read_byte(0x08FC) != 0x7A || cpu.read_byte(0x08FD) != 0x52) return false; cpu.execute_instruction<0x7A>(0x0052, 2); return true;
    // src/spc700/main.spc700.s:581 DBNZ.b UNK0054, UNK0903
    case 0x08FE: if (cpu.read_byte(0x08FE) != 0x6E || cpu.read_byte(0x08FF) != 0x54 || cpu.read_byte(0x0900) != 0x02) return false; cpu.execute_instruction<0x6E>(0x0254, 3); return true;
    // src/spc700/main.spc700.s:582 MOVW YA, UNK0054
    case 0x0901: if (cpu.read_byte(0x0901) != 0xBA || cpu.read_byte(0x0902) != 0x54) return false; cpu.execute_instruction<0xBA>(0x0054, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0903.
bool execute_audio_unresolved_unk0903_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:584 MOVW UNK0052, YA
    case 0x0903: if (cpu.read_byte(0x0903) != 0xDA || cpu.read_byte(0x0904) != 0x52) return false; cpu.execute_instruction<0xDA>(0x0052, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0905.
bool execute_audio_unresolved_unk0905_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:586 MOV A, UNK0068
    case 0x0905: if (cpu.read_byte(0x0905) != 0xE4 || cpu.read_byte(0x0906) != 0x68) return false; cpu.execute_instruction<0xE4>(0x0068, 2); return true;
    // src/spc700/main.spc700.s:587 BEQ UNK091E
    case 0x0907: if (cpu.read_byte(0x0907) != 0xF0 || cpu.read_byte(0x0908) != 0x15) return false; cpu.execute_instruction<0xF0>(0x0015, 2); return true;
    // src/spc700/main.spc700.s:588 MOVW YA, UNK0064
    case 0x0909: if (cpu.read_byte(0x0909) != 0xBA || cpu.read_byte(0x090A) != 0x64) return false; cpu.execute_instruction<0xBA>(0x0064, 2); return true;
    // src/spc700/main.spc700.s:589 ADDW YA, UNK0060
    case 0x090B: if (cpu.read_byte(0x090B) != 0x7A || cpu.read_byte(0x090C) != 0x60) return false; cpu.execute_instruction<0x7A>(0x0060, 2); return true;
    // src/spc700/main.spc700.s:590 MOVW UNK0060, YA
    case 0x090D: if (cpu.read_byte(0x090D) != 0xDA || cpu.read_byte(0x090E) != 0x60) return false; cpu.execute_instruction<0xDA>(0x0060, 2); return true;
    // src/spc700/main.spc700.s:591 MOVW YA, UNK0066
    case 0x090F: if (cpu.read_byte(0x090F) != 0xBA || cpu.read_byte(0x0910) != 0x66) return false; cpu.execute_instruction<0xBA>(0x0066, 2); return true;
    // src/spc700/main.spc700.s:592 ADDW YA, UNK0062
    case 0x0911: if (cpu.read_byte(0x0911) != 0x7A || cpu.read_byte(0x0912) != 0x62) return false; cpu.execute_instruction<0x7A>(0x0062, 2); return true;
    // src/spc700/main.spc700.s:593 DBNZ.b UNK0068, UNK091C
    case 0x0913: if (cpu.read_byte(0x0913) != 0x6E || cpu.read_byte(0x0914) != 0x68 || cpu.read_byte(0x0915) != 0x06) return false; cpu.execute_instruction<0x6E>(0x0668, 3); return true;
    // src/spc700/main.spc700.s:594 MOVW YA, UNK0068
    case 0x0916: if (cpu.read_byte(0x0916) != 0xBA || cpu.read_byte(0x0917) != 0x68) return false; cpu.execute_instruction<0xBA>(0x0068, 2); return true;
    // src/spc700/main.spc700.s:595 MOVW UNK0060, YA
    case 0x0918: if (cpu.read_byte(0x0918) != 0xDA || cpu.read_byte(0x0919) != 0x60) return false; cpu.execute_instruction<0xDA>(0x0060, 2); return true;
    // src/spc700/main.spc700.s:596 MOV Y, UNK006A
    case 0x091A: if (cpu.read_byte(0x091A) != 0xEB || cpu.read_byte(0x091B) != 0x6A) return false; cpu.execute_instruction<0xEB>(0x006A, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK091C.
bool execute_audio_unresolved_unk091c_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:598 MOVW UNK0062, YA
    case 0x091C: if (cpu.read_byte(0x091C) != 0xDA || cpu.read_byte(0x091D) != 0x62) return false; cpu.execute_instruction<0xDA>(0x0062, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK091E.
bool execute_audio_unresolved_unk091e_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:600 MOV A, UNK005A
    case 0x091E: if (cpu.read_byte(0x091E) != 0xE4 || cpu.read_byte(0x091F) != 0x5A) return false; cpu.execute_instruction<0xE4>(0x005A, 2); return true;
    // src/spc700/main.spc700.s:601 BEQ UNK0930
    case 0x0920: if (cpu.read_byte(0x0920) != 0xF0 || cpu.read_byte(0x0921) != 0x0E) return false; cpu.execute_instruction<0xF0>(0x000E, 2); return true;
    // src/spc700/main.spc700.s:602 MOVW YA, UNK005C
    case 0x0922: if (cpu.read_byte(0x0922) != 0xBA || cpu.read_byte(0x0923) != 0x5C) return false; cpu.execute_instruction<0xBA>(0x005C, 2); return true;
    // src/spc700/main.spc700.s:603 ADDW YA, UNK0058
    case 0x0924: if (cpu.read_byte(0x0924) != 0x7A || cpu.read_byte(0x0925) != 0x58) return false; cpu.execute_instruction<0x7A>(0x0058, 2); return true;
    // src/spc700/main.spc700.s:604 DBNZ.b UNK005A, UNK092B
    case 0x0926: if (cpu.read_byte(0x0926) != 0x6E || cpu.read_byte(0x0927) != 0x5A || cpu.read_byte(0x0928) != 0x02) return false; cpu.execute_instruction<0x6E>(0x025A, 3); return true;
    // src/spc700/main.spc700.s:605 MOVW YA, UNK005A
    case 0x0929: if (cpu.read_byte(0x0929) != 0xBA || cpu.read_byte(0x092A) != 0x5A) return false; cpu.execute_instruction<0xBA>(0x005A, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK092B.
bool execute_audio_unresolved_unk092b_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:607 MOVW UNK0058, YA
    case 0x092B: if (cpu.read_byte(0x092B) != 0xDA || cpu.read_byte(0x092C) != 0x58) return false; cpu.execute_instruction<0xDA>(0x0058, 2); return true;
    // src/spc700/main.spc700.s:608 MOV VOLUME_CHANGE_BITS, #$FF
    case 0x092D: if (cpu.read_byte(0x092D) != 0x8F || cpu.read_byte(0x092E) != 0xFF || cpu.read_byte(0x092F) != 0x5E) return false; cpu.execute_instruction<0x8F>(0x5EFF, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0930.
bool execute_audio_unresolved_unk0930_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:610 MOV X, #$00
    case 0x0930: if (cpu.read_byte(0x0930) != 0xCD || cpu.read_byte(0x0931) != 0x00) return false; cpu.execute_instruction<0xCD>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:611 MOV CURRENT_TRACK_BIT, #$01
    case 0x0932: if (cpu.read_byte(0x0932) != 0x8F || cpu.read_byte(0x0933) != 0x01 || cpu.read_byte(0x0934) != 0x47) return false; cpu.execute_instruction<0x8F>(0x4701, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0935.
bool execute_audio_unresolved_unk0935_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:613 MOV A, TRACK_POINTERS+1 + X
    case 0x0935: if (cpu.read_byte(0x0935) != 0xF4 || cpu.read_byte(0x0936) != 0x31) return false; cpu.execute_instruction<0xF4>(0x0031, 2); return true;
    // src/spc700/main.spc700.s:614 BEQ UNK093C
    case 0x0937: if (cpu.read_byte(0x0937) != 0xF0 || cpu.read_byte(0x0938) != 0x03) return false; cpu.execute_instruction<0xF0>(0x0003, 2); return true;
    // src/spc700/main.spc700.s:615 CALL UNK0C40
    case 0x0939: if (cpu.read_byte(0x0939) != 0x3F || cpu.read_byte(0x093A) != 0x40 || cpu.read_byte(0x093B) != 0x0C) return false; cpu.execute_instruction<0x3F>(0x0C40, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK093C.
bool execute_audio_unresolved_unk093c_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:617 INC X
    case 0x093C: if (cpu.read_byte(0x093C) != 0x3D) return false; cpu.execute_instruction<0x3D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:618 INC X
    case 0x093D: if (cpu.read_byte(0x093D) != 0x3D) return false; cpu.execute_instruction<0x3D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:619 ASL CURRENT_TRACK_BIT
    case 0x093E: if (cpu.read_byte(0x093E) != 0x0B || cpu.read_byte(0x093F) != 0x47) return false; cpu.execute_instruction<0x0B>(0x0047, 2); return true;
    // src/spc700/main.spc700.s:620 BNE UNK0935
    case 0x0940: if (cpu.read_byte(0x0940) != 0xD0 || cpu.read_byte(0x0941) != 0xF3) return false; cpu.execute_instruction<0xD0>(0x00F3, 2); return true;
    // src/spc700/main.spc700.s:621 RET
    case 0x0942: if (cpu.read_byte(0x0942) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0943.
bool execute_audio_unresolved_unk0943_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:624 ASL A
    case 0x0943: if (cpu.read_byte(0x0943) != 0x1C) return false; cpu.execute_instruction<0x1C>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:625 MOV Y, A
    case 0x0944: if (cpu.read_byte(0x0944) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:626 MOV A, UNK0BE3 - $C0 + 1 + Y
    case 0x0945: if (cpu.read_byte(0x0945) != 0xF6 || cpu.read_byte(0x0946) != 0x24 || cpu.read_byte(0x0947) != 0x0B) return false; cpu.execute_instruction<0xF6>(0x0B24, 3); return true;
    // src/spc700/main.spc700.s:627 PUSH A
    case 0x0948: if (cpu.read_byte(0x0948) != 0x2D) return false; cpu.execute_instruction<0x2D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:628 MOV A, UNK0BE3 - $C0 + Y
    case 0x0949: if (cpu.read_byte(0x0949) != 0xF6 || cpu.read_byte(0x094A) != 0x23 || cpu.read_byte(0x094B) != 0x0B) return false; cpu.execute_instruction<0xF6>(0x0B23, 3); return true;
    // src/spc700/main.spc700.s:629 PUSH A
    case 0x094C: if (cpu.read_byte(0x094C) != 0x2D) return false; cpu.execute_instruction<0x2D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:630 MOV A, Y
    case 0x094D: if (cpu.read_byte(0x094D) != 0xDD) return false; cpu.execute_instruction<0xDD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:631 LSR A
    case 0x094E: if (cpu.read_byte(0x094E) != 0x5C) return false; cpu.execute_instruction<0x5C>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:632 MOV Y, A
    case 0x094F: if (cpu.read_byte(0x094F) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:633 MOV A, UNK0BC1 + Y
    case 0x0950: if (cpu.read_byte(0x0950) != 0xF6 || cpu.read_byte(0x0951) != 0xC1 || cpu.read_byte(0x0952) != 0x0B) return false; cpu.execute_instruction<0xF6>(0x0BC1, 3); return true;
    // src/spc700/main.spc700.s:634 BEQ UNK095D
    case 0x0953: if (cpu.read_byte(0x0953) != 0xF0 || cpu.read_byte(0x0954) != 0x08) return false; cpu.execute_instruction<0xF0>(0x0008, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0955.
bool execute_audio_unresolved_unk0955_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:636 MOV A, (TRACK_POINTERS + X)
    case 0x0955: if (cpu.read_byte(0x0955) != 0xE7 || cpu.read_byte(0x0956) != 0x30) return false; cpu.execute_instruction<0xE7>(0x0030, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0957.
bool execute_audio_unresolved_unk0957_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:638 INC TRACK_POINTERS + X
    case 0x0957: if (cpu.read_byte(0x0957) != 0xBB || cpu.read_byte(0x0958) != 0x30) return false; cpu.execute_instruction<0xBB>(0x0030, 2); return true;
    // src/spc700/main.spc700.s:639 BNE UNK095D
    case 0x0959: if (cpu.read_byte(0x0959) != 0xD0 || cpu.read_byte(0x095A) != 0x02) return false; cpu.execute_instruction<0xD0>(0x0002, 2); return true;
    // src/spc700/main.spc700.s:640 INC TRACK_POINTERS+1 + X
    case 0x095B: if (cpu.read_byte(0x095B) != 0xBB || cpu.read_byte(0x095C) != 0x31) return false; cpu.execute_instruction<0xBB>(0x0031, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK095D.
bool execute_audio_unresolved_unk095d_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:642 MOV Y, A
    case 0x095D: if (cpu.read_byte(0x095D) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:643 RET
    case 0x095E: if (cpu.read_byte(0x095E) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK095F.
bool execute_audio_unresolved_unk095f_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:646 MOV UNK0211 + X, A
    case 0x095F: if (cpu.read_byte(0x095F) != 0xD5 || cpu.read_byte(0x0960) != 0x11 || cpu.read_byte(0x0961) != 0x02) return false; cpu.execute_instruction<0xD5>(0x0211, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0962.
bool execute_audio_unresolved_unk0962_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:648 MOV Y, A
    case 0x0962: if (cpu.read_byte(0x0962) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:649 BPL UNK096B
    case 0x0963: if (cpu.read_byte(0x0963) != 0x10 || cpu.read_byte(0x0964) != 0x06) return false; cpu.execute_instruction<0x10>(0x0006, 2); return true;
    // src/spc700/main.spc700.s:650 SETC
    case 0x0965: if (cpu.read_byte(0x0965) != 0x80) return false; cpu.execute_instruction<0x80>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:651 SBC A, #$CA
    case 0x0966: if (cpu.read_byte(0x0966) != 0xA8 || cpu.read_byte(0x0967) != 0xCA) return false; cpu.execute_instruction<0xA8>(0x00CA, 2); return true;
    // src/spc700/main.spc700.s:652 CLRC
    case 0x0968: if (cpu.read_byte(0x0968) != 0x60) return false; cpu.execute_instruction<0x60>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:653 ADC A, BASE_PERCUSSION_INSTRUMENT
    case 0x0969: if (cpu.read_byte(0x0969) != 0x84 || cpu.read_byte(0x096A) != 0x5F) return false; cpu.execute_instruction<0x84>(0x005F, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK096B.
bool execute_audio_unresolved_unk096b_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:655 MOV Y, #$06
    case 0x096B: if (cpu.read_byte(0x096B) != 0x8D || cpu.read_byte(0x096C) != 0x06) return false; cpu.execute_instruction<0x8D>(0x0006, 2); return true;
    // src/spc700/main.spc700.s:656 MUL YA
    case 0x096D: if (cpu.read_byte(0x096D) != 0xCF) return false; cpu.execute_instruction<0xCF>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:657 MOVW UNK0014, YA
    case 0x096E: if (cpu.read_byte(0x096E) != 0xDA || cpu.read_byte(0x096F) != 0x14) return false; cpu.execute_instruction<0xDA>(0x0014, 2); return true;
    // src/spc700/main.spc700.s:658 CLRC
    case 0x0970: if (cpu.read_byte(0x0970) != 0x60) return false; cpu.execute_instruction<0x60>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:659 ADC UNK0014, #$00
    case 0x0971: if (cpu.read_byte(0x0971) != 0x98 || cpu.read_byte(0x0972) != 0x00 || cpu.read_byte(0x0973) != 0x14) return false; cpu.execute_instruction<0x98>(0x1400, 3); return true;
    // src/spc700/main.spc700.s:660 ADC UNK0015, #$6E
    case 0x0974: if (cpu.read_byte(0x0974) != 0x98 || cpu.read_byte(0x0975) != 0x6E || cpu.read_byte(0x0976) != 0x15) return false; cpu.execute_instruction<0x98>(0x156E, 3); return true;
    // src/spc700/main.spc700.s:661 MOV A, SFX_PLAYING_BITS
    case 0x0977: if (cpu.read_byte(0x0977) != 0xE4 || cpu.read_byte(0x0978) != 0x1A) return false; cpu.execute_instruction<0xE4>(0x001A, 2); return true;
    // src/spc700/main.spc700.s:662 AND A, CURRENT_TRACK_BIT
    case 0x0979: if (cpu.read_byte(0x0979) != 0x24 || cpu.read_byte(0x097A) != 0x47) return false; cpu.execute_instruction<0x24>(0x0047, 2); return true;
    // src/spc700/main.spc700.s:663 BNE UNK09B7
    case 0x097B: if (cpu.read_byte(0x097B) != 0xD0 || cpu.read_byte(0x097C) != 0x3A) return false; cpu.execute_instruction<0xD0>(0x003A, 2); return true;
    // src/spc700/main.spc700.s:664 PUSH X
    case 0x097D: if (cpu.read_byte(0x097D) != 0x4D) return false; cpu.execute_instruction<0x4D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:665 MOV A, X
    case 0x097E: if (cpu.read_byte(0x097E) != 0x7D) return false; cpu.execute_instruction<0x7D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:666 XCN A
    case 0x097F: if (cpu.read_byte(0x097F) != 0x9F) return false; cpu.execute_instruction<0x9F>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:667 LSR A
    case 0x0980: if (cpu.read_byte(0x0980) != 0x5C) return false; cpu.execute_instruction<0x5C>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:668 OR A, #$04
    case 0x0981: if (cpu.read_byte(0x0981) != 0x08 || cpu.read_byte(0x0982) != 0x04) return false; cpu.execute_instruction<0x08>(0x0004, 2); return true;
    // src/spc700/main.spc700.s:669 MOV X, A
    case 0x0983: if (cpu.read_byte(0x0983) != 0x5D) return false; cpu.execute_instruction<0x5D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:670 MOV Y, #$00
    case 0x0984: if (cpu.read_byte(0x0984) != 0x8D || cpu.read_byte(0x0985) != 0x00) return false; cpu.execute_instruction<0x8D>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:671 MOV A, (UNK0014) + Y
    case 0x0986: if (cpu.read_byte(0x0986) != 0xF7 || cpu.read_byte(0x0987) != 0x14) return false; cpu.execute_instruction<0xF7>(0x0014, 2); return true;
    // src/spc700/main.spc700.s:672 BPL UNK0998
    case 0x0988: if (cpu.read_byte(0x0988) != 0x10 || cpu.read_byte(0x0989) != 0x0E) return false; cpu.execute_instruction<0x10>(0x000E, 2); return true;
    // src/spc700/main.spc700.s:673 AND A, #$1F
    case 0x098A: if (cpu.read_byte(0x098A) != 0x28 || cpu.read_byte(0x098B) != 0x1F) return false; cpu.execute_instruction<0x28>(0x001F, 2); return true;
    // src/spc700/main.spc700.s:674 AND FLG_MIRROR, #$20
    case 0x098C: if (cpu.read_byte(0x098C) != 0x38 || cpu.read_byte(0x098D) != 0x20 || cpu.read_byte(0x098E) != 0x48) return false; cpu.execute_instruction<0x38>(0x4820, 3); return true;
    // src/spc700/main.spc700.s:675 TSET1.w FLG_MIRROR
    case 0x098F: if (cpu.read_byte(0x098F) != 0x0E || cpu.read_byte(0x0990) != 0x48 || cpu.read_byte(0x0991) != 0x00) return false; cpu.execute_instruction<0x0E>(0x0048, 3); return true;
    // src/spc700/main.spc700.s:676 OR NON_MIRROR, CURRENT_TRACK_BIT
    case 0x0992: if (cpu.read_byte(0x0992) != 0x09 || cpu.read_byte(0x0993) != 0x47 || cpu.read_byte(0x0994) != 0x49) return false; cpu.execute_instruction<0x09>(0x4947, 3); return true;
    // src/spc700/main.spc700.s:677 MOV A, Y
    case 0x0995: if (cpu.read_byte(0x0995) != 0xDD) return false; cpu.execute_instruction<0xDD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:678 BRA UNK099F
    case 0x0996: if (cpu.read_byte(0x0996) != 0x2F || cpu.read_byte(0x0997) != 0x07) return false; cpu.execute_instruction<0x2F>(0x0007, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0998.
bool execute_audio_unresolved_unk0998_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:680 MOV A, CURRENT_TRACK_BIT
    case 0x0998: if (cpu.read_byte(0x0998) != 0xE4 || cpu.read_byte(0x0999) != 0x47) return false; cpu.execute_instruction<0xE4>(0x0047, 2); return true;
    // src/spc700/main.spc700.s:681 TCLR1.w NON_MIRROR
    case 0x099A: if (cpu.read_byte(0x099A) != 0x4E || cpu.read_byte(0x099B) != 0x49 || cpu.read_byte(0x099C) != 0x00) return false; cpu.execute_instruction<0x4E>(0x0049, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK099D.
bool execute_audio_unresolved_unk099d_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:683 MOV A, (UNK0014) + Y
    case 0x099D: if (cpu.read_byte(0x099D) != 0xF7 || cpu.read_byte(0x099E) != 0x14) return false; cpu.execute_instruction<0xF7>(0x0014, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK099F.
bool execute_audio_unresolved_unk099f_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:685 MOV.w DSPADDR, X
    case 0x099F: if (cpu.read_byte(0x099F) != 0xC9 || cpu.read_byte(0x09A0) != 0xF2 || cpu.read_byte(0x09A1) != 0x00) return false; cpu.execute_instruction<0xC9>(0x00F2, 3); return true;
    // src/spc700/main.spc700.s:686 MOV.w DSPDATA, A
    case 0x09A2: if (cpu.read_byte(0x09A2) != 0xC5 || cpu.read_byte(0x09A3) != 0xF3 || cpu.read_byte(0x09A4) != 0x00) return false; cpu.execute_instruction<0xC5>(0x00F3, 3); return true;
    // src/spc700/main.spc700.s:687 INC X
    case 0x09A5: if (cpu.read_byte(0x09A5) != 0x3D) return false; cpu.execute_instruction<0x3D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:688 INC Y
    case 0x09A6: if (cpu.read_byte(0x09A6) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:689 CMP Y, #$04
    case 0x09A7: if (cpu.read_byte(0x09A7) != 0xAD || cpu.read_byte(0x09A8) != 0x04) return false; cpu.execute_instruction<0xAD>(0x0004, 2); return true;
    // src/spc700/main.spc700.s:690 BNE UNK099D
    case 0x09A9: if (cpu.read_byte(0x09A9) != 0xD0 || cpu.read_byte(0x09AA) != 0xF2) return false; cpu.execute_instruction<0xD0>(0x00F2, 2); return true;
    // src/spc700/main.spc700.s:691 POP X
    case 0x09AB: if (cpu.read_byte(0x09AB) != 0xCE) return false; cpu.execute_instruction<0xCE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:692 MOV A, (UNK0014) + Y
    case 0x09AC: if (cpu.read_byte(0x09AC) != 0xF7 || cpu.read_byte(0x09AD) != 0x14) return false; cpu.execute_instruction<0xF7>(0x0014, 2); return true;
    // src/spc700/main.spc700.s:693 MOV UNK0221 + X, A
    case 0x09AE: if (cpu.read_byte(0x09AE) != 0xD5 || cpu.read_byte(0x09AF) != 0x21 || cpu.read_byte(0x09B0) != 0x02) return false; cpu.execute_instruction<0xD5>(0x0221, 3); return true;
    // src/spc700/main.spc700.s:694 INC Y
    case 0x09B1: if (cpu.read_byte(0x09B1) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:695 MOV A, (UNK0014) + Y
    case 0x09B2: if (cpu.read_byte(0x09B2) != 0xF7 || cpu.read_byte(0x09B3) != 0x14) return false; cpu.execute_instruction<0xF7>(0x0014, 2); return true;
    // src/spc700/main.spc700.s:696 MOV UNK0220 + X, A
    case 0x09B4: if (cpu.read_byte(0x09B4) != 0xD5 || cpu.read_byte(0x09B5) != 0x20 || cpu.read_byte(0x09B6) != 0x02) return false; cpu.execute_instruction<0xD5>(0x0220, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK09B7.
bool execute_audio_unresolved_unk09b7_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:698 RET
    case 0x09B7: if (cpu.read_byte(0x09B7) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK09B8.
bool execute_audio_unresolved_unk09b8_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:701 MOV UNK0020, A
    case 0x09B8: if (cpu.read_byte(0x09B8) != 0xC4 || cpu.read_byte(0x09B9) != 0x20) return false; cpu.execute_instruction<0xC4>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:702 MOV A, STEREO_MONO_FLAG
    case 0x09BA: if (cpu.read_byte(0x09BA) != 0xE5 || cpu.read_byte(0x09BB) != 0x31 || cpu.read_byte(0x09BC) != 0x04) return false; cpu.execute_instruction<0xE5>(0x0431, 3); return true;
    // src/spc700/main.spc700.s:703 CMP A, #$00
    case 0x09BD: if (cpu.read_byte(0x09BD) != 0x68 || cpu.read_byte(0x09BE) != 0x00) return false; cpu.execute_instruction<0x68>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:704 BEQ UNK09C6
    case 0x09BF: if (cpu.read_byte(0x09BF) != 0xF0 || cpu.read_byte(0x09C0) != 0x05) return false; cpu.execute_instruction<0xF0>(0x0005, 2); return true;
    // src/spc700/main.spc700.s:705 MOV A, #$0A
    case 0x09C1: if (cpu.read_byte(0x09C1) != 0xE8 || cpu.read_byte(0x09C2) != 0x0A) return false; cpu.execute_instruction<0xE8>(0x000A, 2); return true;
    // src/spc700/main.spc700.s:706 JMP UNK09C8
    case 0x09C3: if (cpu.read_byte(0x09C3) != 0x5F || cpu.read_byte(0x09C4) != 0xC8 || cpu.read_byte(0x09C5) != 0x09) return false; cpu.execute_instruction<0x5F>(0x09C8, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK09C6.
bool execute_audio_unresolved_unk09c6_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:708 MOV A, UNK0020
    case 0x09C6: if (cpu.read_byte(0x09C6) != 0xE4 || cpu.read_byte(0x09C7) != 0x20) return false; cpu.execute_instruction<0xE4>(0x0020, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK09C8.
bool execute_audio_unresolved_unk09c8_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:710 MOV UNK0351 + X, A
    case 0x09C8: if (cpu.read_byte(0x09C8) != 0xD5 || cpu.read_byte(0x09C9) != 0x51 || cpu.read_byte(0x09CA) != 0x03) return false; cpu.execute_instruction<0xD5>(0x0351, 3); return true;
    // src/spc700/main.spc700.s:711 AND A, #$1F
    case 0x09CB: if (cpu.read_byte(0x09CB) != 0x28 || cpu.read_byte(0x09CC) != 0x1F) return false; cpu.execute_instruction<0x28>(0x001F, 2); return true;
    // src/spc700/main.spc700.s:712 MOV UNK0331 + X, A
    case 0x09CD: if (cpu.read_byte(0x09CD) != 0xD5 || cpu.read_byte(0x09CE) != 0x31 || cpu.read_byte(0x09CF) != 0x03) return false; cpu.execute_instruction<0xD5>(0x0331, 3); return true;
    // src/spc700/main.spc700.s:713 MOV A, #$00
    case 0x09D0: if (cpu.read_byte(0x09D0) != 0xE8 || cpu.read_byte(0x09D1) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:714 MOV UNK0330 + X, A
    case 0x09D2: if (cpu.read_byte(0x09D2) != 0xD5 || cpu.read_byte(0x09D3) != 0x30 || cpu.read_byte(0x09D4) != 0x03) return false; cpu.execute_instruction<0xD5>(0x0330, 3); return true;
    // src/spc700/main.spc700.s:715 RET
    case 0x09D5: if (cpu.read_byte(0x09D5) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK09D6.
bool execute_audio_unresolved_unk09d6_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:718 MOV UNK0091 + X, A
    case 0x09D6: if (cpu.read_byte(0x09D6) != 0xD4 || cpu.read_byte(0x09D7) != 0x91) return false; cpu.execute_instruction<0xD4>(0x0091, 2); return true;
    // src/spc700/main.spc700.s:719 PUSH A
    case 0x09D8: if (cpu.read_byte(0x09D8) != 0x2D) return false; cpu.execute_instruction<0x2D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:720 CALL UNK0955
    case 0x09D9: if (cpu.read_byte(0x09D9) != 0x3F || cpu.read_byte(0x09DA) != 0x55 || cpu.read_byte(0x09DB) != 0x09) return false; cpu.execute_instruction<0x3F>(0x0955, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK09DC.
bool execute_audio_unresolved_unk09dc_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:722 MOV UNK0020, A
    case 0x09DC: if (cpu.read_byte(0x09DC) != 0xC4 || cpu.read_byte(0x09DD) != 0x20) return false; cpu.execute_instruction<0xC4>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:723 MOV A, STEREO_MONO_FLAG
    case 0x09DE: if (cpu.read_byte(0x09DE) != 0xE5 || cpu.read_byte(0x09DF) != 0x31 || cpu.read_byte(0x09E0) != 0x04) return false; cpu.execute_instruction<0xE5>(0x0431, 3); return true;
    // src/spc700/main.spc700.s:724 CMP A, #$00
    case 0x09E1: if (cpu.read_byte(0x09E1) != 0x68 || cpu.read_byte(0x09E2) != 0x00) return false; cpu.execute_instruction<0x68>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:725 BEQ UNK09E8
    case 0x09E3: if (cpu.read_byte(0x09E3) != 0xF0 || cpu.read_byte(0x09E4) != 0x03) return false; cpu.execute_instruction<0xF0>(0x0003, 2); return true;
    // src/spc700/main.spc700.s:726 MOV UNK0020, #$0A
    case 0x09E5: if (cpu.read_byte(0x09E5) != 0x8F || cpu.read_byte(0x09E6) != 0x0A || cpu.read_byte(0x09E7) != 0x20) return false; cpu.execute_instruction<0x8F>(0x200A, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK09E8.
bool execute_audio_unresolved_unk09e8_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:728 MOV A, UNK0020
    case 0x09E8: if (cpu.read_byte(0x09E8) != 0xE4 || cpu.read_byte(0x09E9) != 0x20) return false; cpu.execute_instruction<0xE4>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:729 MOV UNK0350 + X, A
    case 0x09EA: if (cpu.read_byte(0x09EA) != 0xD5 || cpu.read_byte(0x09EB) != 0x50 || cpu.read_byte(0x09EC) != 0x03) return false; cpu.execute_instruction<0xD5>(0x0350, 3); return true;
    // src/spc700/main.spc700.s:730 SETC
    case 0x09ED: if (cpu.read_byte(0x09ED) != 0x80) return false; cpu.execute_instruction<0x80>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:731 SBC A, UNK0331 + X
    case 0x09EE: if (cpu.read_byte(0x09EE) != 0xB5 || cpu.read_byte(0x09EF) != 0x31 || cpu.read_byte(0x09F0) != 0x03) return false; cpu.execute_instruction<0xB5>(0x0331, 3); return true;
    // src/spc700/main.spc700.s:732 POP X
    case 0x09F1: if (cpu.read_byte(0x09F1) != 0xCE) return false; cpu.execute_instruction<0xCE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:733 CALL UNK0BC7
    case 0x09F2: if (cpu.read_byte(0x09F2) != 0x3F || cpu.read_byte(0x09F3) != 0xC7 || cpu.read_byte(0x09F4) != 0x0B) return false; cpu.execute_instruction<0x3F>(0x0BC7, 3); return true;
    // src/spc700/main.spc700.s:734 MOV UNK0340 + X, A
    case 0x09F5: if (cpu.read_byte(0x09F5) != 0xD5 || cpu.read_byte(0x09F6) != 0x40 || cpu.read_byte(0x09F7) != 0x03) return false; cpu.execute_instruction<0xD5>(0x0340, 3); return true;
    // src/spc700/main.spc700.s:735 MOV A, Y
    case 0x09F8: if (cpu.read_byte(0x09F8) != 0xDD) return false; cpu.execute_instruction<0xDD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:736 MOV UNK0341 + X, A
    case 0x09F9: if (cpu.read_byte(0x09F9) != 0xD5 || cpu.read_byte(0x09FA) != 0x41 || cpu.read_byte(0x09FB) != 0x03) return false; cpu.execute_instruction<0xD5>(0x0341, 3); return true;
    // src/spc700/main.spc700.s:737 RET
    case 0x09FC: if (cpu.read_byte(0x09FC) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK09FD.
bool execute_audio_unresolved_unk09fd_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:740 MOV UNK02B0 + X, A
    case 0x09FD: if (cpu.read_byte(0x09FD) != 0xD5 || cpu.read_byte(0x09FE) != 0xB0 || cpu.read_byte(0x09FF) != 0x02) return false; cpu.execute_instruction<0xD5>(0x02B0, 3); return true;
    // src/spc700/main.spc700.s:741 CALL UNK0955
    case 0x0A00: if (cpu.read_byte(0x0A00) != 0x3F || cpu.read_byte(0x0A01) != 0x55 || cpu.read_byte(0x0A02) != 0x09) return false; cpu.execute_instruction<0x3F>(0x0955, 3); return true;
    // src/spc700/main.spc700.s:742 MOV UNK02A1 + X, A
    case 0x0A03: if (cpu.read_byte(0x0A03) != 0xD5 || cpu.read_byte(0x0A04) != 0xA1 || cpu.read_byte(0x0A05) != 0x02) return false; cpu.execute_instruction<0xD5>(0x02A1, 3); return true;
    // src/spc700/main.spc700.s:743 CALL UNK0955
    case 0x0A06: if (cpu.read_byte(0x0A06) != 0x3F || cpu.read_byte(0x0A07) != 0x55 || cpu.read_byte(0x0A08) != 0x09) return false; cpu.execute_instruction<0x3F>(0x0955, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0A09.
bool execute_audio_unresolved_unk0a09_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:745 MOV UNK00B1 + X, A
    case 0x0A09: if (cpu.read_byte(0x0A09) != 0xD4 || cpu.read_byte(0x0A0A) != 0xB1) return false; cpu.execute_instruction<0xD4>(0x00B1, 2); return true;
    // src/spc700/main.spc700.s:746 MOV UNK02C1 + X, A
    case 0x0A0B: if (cpu.read_byte(0x0A0B) != 0xD5 || cpu.read_byte(0x0A0C) != 0xC1 || cpu.read_byte(0x0A0D) != 0x02) return false; cpu.execute_instruction<0xD5>(0x02C1, 3); return true;
    // src/spc700/main.spc700.s:747 MOV A, #$00
    case 0x0A0E: if (cpu.read_byte(0x0A0E) != 0xE8 || cpu.read_byte(0x0A0F) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:748 MOV UNK02B1 + X, A
    case 0x0A10: if (cpu.read_byte(0x0A10) != 0xD5 || cpu.read_byte(0x0A11) != 0xB1 || cpu.read_byte(0x0A12) != 0x02) return false; cpu.execute_instruction<0xD5>(0x02B1, 3); return true;
    // src/spc700/main.spc700.s:749 RET
    case 0x0A13: if (cpu.read_byte(0x0A13) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0A14.
bool execute_audio_unresolved_unk0a14_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:752 MOV UNK02B1 + X, A
    case 0x0A14: if (cpu.read_byte(0x0A14) != 0xD5 || cpu.read_byte(0x0A15) != 0xB1 || cpu.read_byte(0x0A16) != 0x02) return false; cpu.execute_instruction<0xD5>(0x02B1, 3); return true;
    // src/spc700/main.spc700.s:753 PUSH A
    case 0x0A17: if (cpu.read_byte(0x0A17) != 0x2D) return false; cpu.execute_instruction<0x2D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:754 MOV Y, #$00
    case 0x0A18: if (cpu.read_byte(0x0A18) != 0x8D || cpu.read_byte(0x0A19) != 0x00) return false; cpu.execute_instruction<0x8D>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:755 MOV A, UNK00B1 + X
    case 0x0A1A: if (cpu.read_byte(0x0A1A) != 0xF4 || cpu.read_byte(0x0A1B) != 0xB1) return false; cpu.execute_instruction<0xF4>(0x00B1, 2); return true;
    // src/spc700/main.spc700.s:756 POP X
    case 0x0A1C: if (cpu.read_byte(0x0A1C) != 0xCE) return false; cpu.execute_instruction<0xCE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:757 DIV YA, X
    case 0x0A1D: if (cpu.read_byte(0x0A1D) != 0x9E) return false; cpu.execute_instruction<0x9E>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:758 MOV X, UNK0044
    case 0x0A1E: if (cpu.read_byte(0x0A1E) != 0xF8 || cpu.read_byte(0x0A1F) != 0x44) return false; cpu.execute_instruction<0xF8>(0x0044, 2); return true;
    // src/spc700/main.spc700.s:759 MOV UNK02C0 + X, A
    case 0x0A20: if (cpu.read_byte(0x0A20) != 0xD5 || cpu.read_byte(0x0A21) != 0xC0 || cpu.read_byte(0x0A22) != 0x02) return false; cpu.execute_instruction<0xD5>(0x02C0, 3); return true;
    // src/spc700/main.spc700.s:760 RET
    case 0x0A23: if (cpu.read_byte(0x0A23) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0A24.
bool execute_audio_unresolved_unk0a24_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:763 MOV A, #$00
    case 0x0A24: if (cpu.read_byte(0x0A24) != 0xE8 || cpu.read_byte(0x0A25) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:764 MOVW UNK0058, YA
    case 0x0A26: if (cpu.read_byte(0x0A26) != 0xDA || cpu.read_byte(0x0A27) != 0x58) return false; cpu.execute_instruction<0xDA>(0x0058, 2); return true;
    // src/spc700/main.spc700.s:765 RET
    case 0x0A28: if (cpu.read_byte(0x0A28) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0A29.
bool execute_audio_unresolved_unk0a29_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:768 MOV UNK005A, A
    case 0x0A29: if (cpu.read_byte(0x0A29) != 0xC4 || cpu.read_byte(0x0A2A) != 0x5A) return false; cpu.execute_instruction<0xC4>(0x005A, 2); return true;
    // src/spc700/main.spc700.s:769 CALL UNK0955
    case 0x0A2B: if (cpu.read_byte(0x0A2B) != 0x3F || cpu.read_byte(0x0A2C) != 0x55 || cpu.read_byte(0x0A2D) != 0x09) return false; cpu.execute_instruction<0x3F>(0x0955, 3); return true;
    // src/spc700/main.spc700.s:770 MOV UNK005B, A
    case 0x0A2E: if (cpu.read_byte(0x0A2E) != 0xC4 || cpu.read_byte(0x0A2F) != 0x5B) return false; cpu.execute_instruction<0xC4>(0x005B, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0A30.
bool execute_audio_unresolved_unk0a30_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:772 SETC
    case 0x0A30: if (cpu.read_byte(0x0A30) != 0x80) return false; cpu.execute_instruction<0x80>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:773 SBC A, UNK0059
    case 0x0A31: if (cpu.read_byte(0x0A31) != 0xA4 || cpu.read_byte(0x0A32) != 0x59) return false; cpu.execute_instruction<0xA4>(0x0059, 2); return true;
    // src/spc700/main.spc700.s:774 MOV X, UNK005A
    case 0x0A33: if (cpu.read_byte(0x0A33) != 0xF8 || cpu.read_byte(0x0A34) != 0x5A) return false; cpu.execute_instruction<0xF8>(0x005A, 2); return true;
    // src/spc700/main.spc700.s:775 CALL UNK0BC7
    case 0x0A35: if (cpu.read_byte(0x0A35) != 0x3F || cpu.read_byte(0x0A36) != 0xC7 || cpu.read_byte(0x0A37) != 0x0B) return false; cpu.execute_instruction<0x3F>(0x0BC7, 3); return true;
    // src/spc700/main.spc700.s:776 MOVW UNK005C, YA
    case 0x0A38: if (cpu.read_byte(0x0A38) != 0xDA || cpu.read_byte(0x0A39) != 0x5C) return false; cpu.execute_instruction<0xDA>(0x005C, 2); return true;
    // src/spc700/main.spc700.s:777 RET
    case 0x0A3A: if (cpu.read_byte(0x0A3A) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0A3B.
bool execute_audio_unresolved_unk0a3b_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:780 MOV A, #$00
    case 0x0A3B: if (cpu.read_byte(0x0A3B) != 0xE8 || cpu.read_byte(0x0A3C) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:781 MOVW UNK0052, YA
    case 0x0A3D: if (cpu.read_byte(0x0A3D) != 0xDA || cpu.read_byte(0x0A3E) != 0x52) return false; cpu.execute_instruction<0xDA>(0x0052, 2); return true;
    // src/spc700/main.spc700.s:782 RET
    case 0x0A3F: if (cpu.read_byte(0x0A3F) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0A40.
bool execute_audio_unresolved_unk0a40_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:785 MOV UNK0054, A
    case 0x0A40: if (cpu.read_byte(0x0A40) != 0xC4 || cpu.read_byte(0x0A41) != 0x54) return false; cpu.execute_instruction<0xC4>(0x0054, 2); return true;
    // src/spc700/main.spc700.s:786 CALL UNK0955
    case 0x0A42: if (cpu.read_byte(0x0A42) != 0x3F || cpu.read_byte(0x0A43) != 0x55 || cpu.read_byte(0x0A44) != 0x09) return false; cpu.execute_instruction<0x3F>(0x0955, 3); return true;
    // src/spc700/main.spc700.s:787 MOV UNK0055, A
    case 0x0A45: if (cpu.read_byte(0x0A45) != 0xC4 || cpu.read_byte(0x0A46) != 0x55) return false; cpu.execute_instruction<0xC4>(0x0055, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0A47.
bool execute_audio_unresolved_unk0a47_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:789 SETC
    case 0x0A47: if (cpu.read_byte(0x0A47) != 0x80) return false; cpu.execute_instruction<0x80>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:790 SBC A, UNK0053
    case 0x0A48: if (cpu.read_byte(0x0A48) != 0xA4 || cpu.read_byte(0x0A49) != 0x53) return false; cpu.execute_instruction<0xA4>(0x0053, 2); return true;
    // src/spc700/main.spc700.s:791 MOV X, UNK0054
    case 0x0A4A: if (cpu.read_byte(0x0A4A) != 0xF8 || cpu.read_byte(0x0A4B) != 0x54) return false; cpu.execute_instruction<0xF8>(0x0054, 2); return true;
    // src/spc700/main.spc700.s:792 CALL UNK0BC7
    case 0x0A4C: if (cpu.read_byte(0x0A4C) != 0x3F || cpu.read_byte(0x0A4D) != 0xC7 || cpu.read_byte(0x0A4E) != 0x0B) return false; cpu.execute_instruction<0x3F>(0x0BC7, 3); return true;
    // src/spc700/main.spc700.s:793 MOVW UNK0056, YA
    case 0x0A4F: if (cpu.read_byte(0x0A4F) != 0xDA || cpu.read_byte(0x0A50) != 0x56) return false; cpu.execute_instruction<0xDA>(0x0056, 2); return true;
    // src/spc700/main.spc700.s:794 RET
    case 0x0A51: if (cpu.read_byte(0x0A51) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0A52.
bool execute_audio_unresolved_unk0a52_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:797 MOV UNK0050, A
    case 0x0A52: if (cpu.read_byte(0x0A52) != 0xC4 || cpu.read_byte(0x0A53) != 0x50) return false; cpu.execute_instruction<0xC4>(0x0050, 2); return true;
    // src/spc700/main.spc700.s:798 RET
    case 0x0A54: if (cpu.read_byte(0x0A54) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0A55.
bool execute_audio_unresolved_unk0a55_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:801 MOV UNK02F0 + X, A
    case 0x0A55: if (cpu.read_byte(0x0A55) != 0xD5 || cpu.read_byte(0x0A56) != 0xF0 || cpu.read_byte(0x0A57) != 0x02) return false; cpu.execute_instruction<0xD5>(0x02F0, 3); return true;
    // src/spc700/main.spc700.s:802 RET
    case 0x0A58: if (cpu.read_byte(0x0A58) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0A59.
bool execute_audio_unresolved_unk0a59_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:805 MOV UNK02E0 + X, A
    case 0x0A59: if (cpu.read_byte(0x0A59) != 0xD5 || cpu.read_byte(0x0A5A) != 0xE0 || cpu.read_byte(0x0A5B) != 0x02) return false; cpu.execute_instruction<0xD5>(0x02E0, 3); return true;
    // src/spc700/main.spc700.s:806 CALL UNK0955
    case 0x0A5C: if (cpu.read_byte(0x0A5C) != 0x3F || cpu.read_byte(0x0A5D) != 0x55 || cpu.read_byte(0x0A5E) != 0x09) return false; cpu.execute_instruction<0x3F>(0x0955, 3); return true;
    // src/spc700/main.spc700.s:807 MOV UNK02D1 + X, A
    case 0x0A5F: if (cpu.read_byte(0x0A5F) != 0xD5 || cpu.read_byte(0x0A60) != 0xD1 || cpu.read_byte(0x0A61) != 0x02) return false; cpu.execute_instruction<0xD5>(0x02D1, 3); return true;
    // src/spc700/main.spc700.s:808 CALL UNK0955
    case 0x0A62: if (cpu.read_byte(0x0A62) != 0x3F || cpu.read_byte(0x0A63) != 0x55 || cpu.read_byte(0x0A64) != 0x09) return false; cpu.execute_instruction<0x3F>(0x0955, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0A65.
bool execute_audio_unresolved_unk0a65_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:810 MOV UNK00C1 + X, A
    case 0x0A65: if (cpu.read_byte(0x0A65) != 0xD4 || cpu.read_byte(0x0A66) != 0xC1) return false; cpu.execute_instruction<0xD4>(0x00C1, 2); return true;
    // src/spc700/main.spc700.s:811 RET
    case 0x0A67: if (cpu.read_byte(0x0A67) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0A68.
bool execute_audio_unresolved_unk0a68_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:814 MOV A, #$01
    case 0x0A68: if (cpu.read_byte(0x0A68) != 0xE8 || cpu.read_byte(0x0A69) != 0x01) return false; cpu.execute_instruction<0xE8>(0x0001, 2); return true;
    // src/spc700/main.spc700.s:815 BRA UNK0A6E
    case 0x0A6A: if (cpu.read_byte(0x0A6A) != 0x2F || cpu.read_byte(0x0A6B) != 0x02) return false; cpu.execute_instruction<0x2F>(0x0002, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0A6C.
bool execute_audio_unresolved_unk0a6c_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:818 MOV A, #$00
    case 0x0A6C: if (cpu.read_byte(0x0A6C) != 0xE8 || cpu.read_byte(0x0A6D) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0A6E.
bool execute_audio_unresolved_unk0a6e_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:820 MOV UNK0290 + X, A
    case 0x0A6E: if (cpu.read_byte(0x0A6E) != 0xD5 || cpu.read_byte(0x0A6F) != 0x90 || cpu.read_byte(0x0A70) != 0x02) return false; cpu.execute_instruction<0xD5>(0x0290, 3); return true;
    // src/spc700/main.spc700.s:821 MOV A, Y
    case 0x0A71: if (cpu.read_byte(0x0A71) != 0xDD) return false; cpu.execute_instruction<0xDD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:822 MOV UNK0281 + X, A
    case 0x0A72: if (cpu.read_byte(0x0A72) != 0xD5 || cpu.read_byte(0x0A73) != 0x81 || cpu.read_byte(0x0A74) != 0x02) return false; cpu.execute_instruction<0xD5>(0x0281, 3); return true;
    // src/spc700/main.spc700.s:823 CALL UNK0955
    case 0x0A75: if (cpu.read_byte(0x0A75) != 0x3F || cpu.read_byte(0x0A76) != 0x55 || cpu.read_byte(0x0A77) != 0x09) return false; cpu.execute_instruction<0x3F>(0x0955, 3); return true;
    // src/spc700/main.spc700.s:824 MOV UNK0280 + X, A
    case 0x0A78: if (cpu.read_byte(0x0A78) != 0xD5 || cpu.read_byte(0x0A79) != 0x80 || cpu.read_byte(0x0A7A) != 0x02) return false; cpu.execute_instruction<0xD5>(0x0280, 3); return true;
    // src/spc700/main.spc700.s:825 CALL UNK0955
    case 0x0A7B: if (cpu.read_byte(0x0A7B) != 0x3F || cpu.read_byte(0x0A7C) != 0x55 || cpu.read_byte(0x0A7D) != 0x09) return false; cpu.execute_instruction<0x3F>(0x0955, 3); return true;
    // src/spc700/main.spc700.s:826 MOV UNK0291 + X, A
    case 0x0A7E: if (cpu.read_byte(0x0A7E) != 0xD5 || cpu.read_byte(0x0A7F) != 0x91 || cpu.read_byte(0x0A80) != 0x02) return false; cpu.execute_instruction<0xD5>(0x0291, 3); return true;
    // src/spc700/main.spc700.s:827 RET
    case 0x0A81: if (cpu.read_byte(0x0A81) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0A82.
bool execute_audio_unresolved_unk0a82_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:830 MOV UNK0280 + X, A
    case 0x0A82: if (cpu.read_byte(0x0A82) != 0xD5 || cpu.read_byte(0x0A83) != 0x80 || cpu.read_byte(0x0A84) != 0x02) return false; cpu.execute_instruction<0xD5>(0x0280, 3); return true;
    // src/spc700/main.spc700.s:831 RET
    case 0x0A85: if (cpu.read_byte(0x0A85) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0A86.
bool execute_audio_unresolved_unk0a86_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:834 MOV UNK0301 + X, A
    case 0x0A86: if (cpu.read_byte(0x0A86) != 0xD5 || cpu.read_byte(0x0A87) != 0x01 || cpu.read_byte(0x0A88) != 0x03) return false; cpu.execute_instruction<0xD5>(0x0301, 3); return true;
    // src/spc700/main.spc700.s:835 MOV A, #$00
    case 0x0A89: if (cpu.read_byte(0x0A89) != 0xE8 || cpu.read_byte(0x0A8A) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:836 MOV UNK0300 + X, A
    case 0x0A8B: if (cpu.read_byte(0x0A8B) != 0xD5 || cpu.read_byte(0x0A8C) != 0x00 || cpu.read_byte(0x0A8D) != 0x03) return false; cpu.execute_instruction<0xD5>(0x0300, 3); return true;
    // src/spc700/main.spc700.s:837 RET
    case 0x0A8E: if (cpu.read_byte(0x0A8E) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0A8F.
bool execute_audio_unresolved_unk0a8f_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:840 MOV UNK0090 + X, A
    case 0x0A8F: if (cpu.read_byte(0x0A8F) != 0xD4 || cpu.read_byte(0x0A90) != 0x90) return false; cpu.execute_instruction<0xD4>(0x0090, 2); return true;
    // src/spc700/main.spc700.s:841 PUSH A
    case 0x0A91: if (cpu.read_byte(0x0A91) != 0x2D) return false; cpu.execute_instruction<0x2D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:842 CALL UNK0955
    case 0x0A92: if (cpu.read_byte(0x0A92) != 0x3F || cpu.read_byte(0x0A93) != 0x55 || cpu.read_byte(0x0A94) != 0x09) return false; cpu.execute_instruction<0x3F>(0x0955, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0A95.
bool execute_audio_unresolved_unk0a95_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:844 MOV UNK0320 + X, A
    case 0x0A95: if (cpu.read_byte(0x0A95) != 0xD5 || cpu.read_byte(0x0A96) != 0x20 || cpu.read_byte(0x0A97) != 0x03) return false; cpu.execute_instruction<0xD5>(0x0320, 3); return true;
    // src/spc700/main.spc700.s:845 SETC
    case 0x0A98: if (cpu.read_byte(0x0A98) != 0x80) return false; cpu.execute_instruction<0x80>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:846 SBC A, UNK0301 + X
    case 0x0A99: if (cpu.read_byte(0x0A99) != 0xB5 || cpu.read_byte(0x0A9A) != 0x01 || cpu.read_byte(0x0A9B) != 0x03) return false; cpu.execute_instruction<0xB5>(0x0301, 3); return true;
    // src/spc700/main.spc700.s:847 POP X
    case 0x0A9C: if (cpu.read_byte(0x0A9C) != 0xCE) return false; cpu.execute_instruction<0xCE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:848 CALL UNK0BC7
    case 0x0A9D: if (cpu.read_byte(0x0A9D) != 0x3F || cpu.read_byte(0x0A9E) != 0xC7 || cpu.read_byte(0x0A9F) != 0x0B) return false; cpu.execute_instruction<0x3F>(0x0BC7, 3); return true;
    // src/spc700/main.spc700.s:849 MOV UNK0310 + X, A
    case 0x0AA0: if (cpu.read_byte(0x0AA0) != 0xD5 || cpu.read_byte(0x0AA1) != 0x10 || cpu.read_byte(0x0AA2) != 0x03) return false; cpu.execute_instruction<0xD5>(0x0310, 3); return true;
    // src/spc700/main.spc700.s:850 MOV A, Y
    case 0x0AA3: if (cpu.read_byte(0x0AA3) != 0xDD) return false; cpu.execute_instruction<0xDD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:851 MOV UNK0311 + X, A
    case 0x0AA4: if (cpu.read_byte(0x0AA4) != 0xD5 || cpu.read_byte(0x0AA5) != 0x11 || cpu.read_byte(0x0AA6) != 0x03) return false; cpu.execute_instruction<0xD5>(0x0311, 3); return true;
    // src/spc700/main.spc700.s:852 RET
    case 0x0AA7: if (cpu.read_byte(0x0AA7) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0AA8.
bool execute_audio_unresolved_unk0aa8_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:855 MOV UNK0381 + X, A
    case 0x0AA8: if (cpu.read_byte(0x0AA8) != 0xD5 || cpu.read_byte(0x0AA9) != 0x81 || cpu.read_byte(0x0AAA) != 0x03) return false; cpu.execute_instruction<0xD5>(0x0381, 3); return true;
    // src/spc700/main.spc700.s:856 RET
    case 0x0AAB: if (cpu.read_byte(0x0AAB) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0AAC.
bool execute_audio_unresolved_unk0aac_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:859 MOV UNK0240 + X, A
    case 0x0AAC: if (cpu.read_byte(0x0AAC) != 0xD5 || cpu.read_byte(0x0AAD) != 0x40 || cpu.read_byte(0x0AAE) != 0x02) return false; cpu.execute_instruction<0xD5>(0x0240, 3); return true;
    // src/spc700/main.spc700.s:860 CALL UNK0955
    case 0x0AAF: if (cpu.read_byte(0x0AAF) != 0x3F || cpu.read_byte(0x0AB0) != 0x55 || cpu.read_byte(0x0AB1) != 0x09) return false; cpu.execute_instruction<0x3F>(0x0955, 3); return true;
    // src/spc700/main.spc700.s:861 MOV UNK0241 + X, A
    case 0x0AB2: if (cpu.read_byte(0x0AB2) != 0xD5 || cpu.read_byte(0x0AB3) != 0x41 || cpu.read_byte(0x0AB4) != 0x02) return false; cpu.execute_instruction<0xD5>(0x0241, 3); return true;
    // src/spc700/main.spc700.s:862 CALL UNK0955
    case 0x0AB5: if (cpu.read_byte(0x0AB5) != 0x3F || cpu.read_byte(0x0AB6) != 0x55 || cpu.read_byte(0x0AB7) != 0x09) return false; cpu.execute_instruction<0x3F>(0x0955, 3); return true;
    // src/spc700/main.spc700.s:863 MOV UNK0080 + X, A
    case 0x0AB8: if (cpu.read_byte(0x0AB8) != 0xD4 || cpu.read_byte(0x0AB9) != 0x80) return false; cpu.execute_instruction<0xD4>(0x0080, 2); return true;
    // src/spc700/main.spc700.s:864 MOV A, TRACK_POINTERS + X
    case 0x0ABA: if (cpu.read_byte(0x0ABA) != 0xF4 || cpu.read_byte(0x0ABB) != 0x30) return false; cpu.execute_instruction<0xF4>(0x0030, 2); return true;
    // src/spc700/main.spc700.s:865 MOV UNK0230 + X, A
    case 0x0ABC: if (cpu.read_byte(0x0ABC) != 0xD5 || cpu.read_byte(0x0ABD) != 0x30 || cpu.read_byte(0x0ABE) != 0x02) return false; cpu.execute_instruction<0xD5>(0x0230, 3); return true;
    // src/spc700/main.spc700.s:866 MOV A, TRACK_POINTERS+1 + X
    case 0x0ABF: if (cpu.read_byte(0x0ABF) != 0xF4 || cpu.read_byte(0x0AC0) != 0x31) return false; cpu.execute_instruction<0xF4>(0x0031, 2); return true;
    // src/spc700/main.spc700.s:867 MOV UNK0231 + X, A
    case 0x0AC1: if (cpu.read_byte(0x0AC1) != 0xD5 || cpu.read_byte(0x0AC2) != 0x31 || cpu.read_byte(0x0AC3) != 0x02) return false; cpu.execute_instruction<0xD5>(0x0231, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0AC4.
bool execute_audio_unresolved_unk0ac4_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:869 MOV A, UNK0240 + X
    case 0x0AC4: if (cpu.read_byte(0x0AC4) != 0xF5 || cpu.read_byte(0x0AC5) != 0x40 || cpu.read_byte(0x0AC6) != 0x02) return false; cpu.execute_instruction<0xF5>(0x0240, 3); return true;
    // src/spc700/main.spc700.s:870 MOV TRACK_POINTERS + X, A
    case 0x0AC7: if (cpu.read_byte(0x0AC7) != 0xD4 || cpu.read_byte(0x0AC8) != 0x30) return false; cpu.execute_instruction<0xD4>(0x0030, 2); return true;
    // src/spc700/main.spc700.s:871 MOV A, UNK0241 + X
    case 0x0AC9: if (cpu.read_byte(0x0AC9) != 0xF5 || cpu.read_byte(0x0ACA) != 0x41 || cpu.read_byte(0x0ACB) != 0x02) return false; cpu.execute_instruction<0xF5>(0x0241, 3); return true;
    // src/spc700/main.spc700.s:872 MOV TRACK_POINTERS+1 + X, A
    case 0x0ACC: if (cpu.read_byte(0x0ACC) != 0xD4 || cpu.read_byte(0x0ACD) != 0x31) return false; cpu.execute_instruction<0xD4>(0x0031, 2); return true;
    // src/spc700/main.spc700.s:873 RET
    case 0x0ACE: if (cpu.read_byte(0x0ACE) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0ACF.
bool execute_audio_unresolved_unk0acf_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:876 MOV EON_MIRROR, A
    case 0x0ACF: if (cpu.read_byte(0x0ACF) != 0xC4 || cpu.read_byte(0x0AD0) != 0x4A) return false; cpu.execute_instruction<0xC4>(0x004A, 2); return true;
    // src/spc700/main.spc700.s:877 CALL UNK0955
    case 0x0AD1: if (cpu.read_byte(0x0AD1) != 0x3F || cpu.read_byte(0x0AD2) != 0x55 || cpu.read_byte(0x0AD3) != 0x09) return false; cpu.execute_instruction<0x3F>(0x0955, 3); return true;
    // src/spc700/main.spc700.s:878 MOV A, #$00
    case 0x0AD4: if (cpu.read_byte(0x0AD4) != 0xE8 || cpu.read_byte(0x0AD5) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:879 MOVW UNK0060, YA
    case 0x0AD6: if (cpu.read_byte(0x0AD6) != 0xDA || cpu.read_byte(0x0AD7) != 0x60) return false; cpu.execute_instruction<0xDA>(0x0060, 2); return true;
    // src/spc700/main.spc700.s:880 CALL UNK0955
    case 0x0AD8: if (cpu.read_byte(0x0AD8) != 0x3F || cpu.read_byte(0x0AD9) != 0x55 || cpu.read_byte(0x0ADA) != 0x09) return false; cpu.execute_instruction<0x3F>(0x0955, 3); return true;
    // src/spc700/main.spc700.s:881 MOV A, #$00
    case 0x0ADB: if (cpu.read_byte(0x0ADB) != 0xE8 || cpu.read_byte(0x0ADC) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:882 MOVW UNK0062, YA
    case 0x0ADD: if (cpu.read_byte(0x0ADD) != 0xDA || cpu.read_byte(0x0ADE) != 0x62) return false; cpu.execute_instruction<0xDA>(0x0062, 2); return true;
    // src/spc700/main.spc700.s:883 CLR5 FLG_MIRROR
    case 0x0ADF: if (cpu.read_byte(0x0ADF) != 0xB2 || cpu.read_byte(0x0AE0) != 0x48) return false; cpu.execute_instruction<0xB2>(0x0048, 2); return true;
    // src/spc700/main.spc700.s:884 RET
    case 0x0AE1: if (cpu.read_byte(0x0AE1) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0AE2.
bool execute_audio_unresolved_unk0ae2_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:887 MOV UNK0068, A
    case 0x0AE2: if (cpu.read_byte(0x0AE2) != 0xC4 || cpu.read_byte(0x0AE3) != 0x68) return false; cpu.execute_instruction<0xC4>(0x0068, 2); return true;
    // src/spc700/main.spc700.s:888 CALL UNK0955
    case 0x0AE4: if (cpu.read_byte(0x0AE4) != 0x3F || cpu.read_byte(0x0AE5) != 0x55 || cpu.read_byte(0x0AE6) != 0x09) return false; cpu.execute_instruction<0x3F>(0x0955, 3); return true;
    // src/spc700/main.spc700.s:889 MOV UNK0069, A
    case 0x0AE7: if (cpu.read_byte(0x0AE7) != 0xC4 || cpu.read_byte(0x0AE8) != 0x69) return false; cpu.execute_instruction<0xC4>(0x0069, 2); return true;
    // src/spc700/main.spc700.s:890 SETC
    case 0x0AE9: if (cpu.read_byte(0x0AE9) != 0x80) return false; cpu.execute_instruction<0x80>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:891 SBC A, EVOLL_MIRROR
    case 0x0AEA: if (cpu.read_byte(0x0AEA) != 0xA4 || cpu.read_byte(0x0AEB) != 0x61) return false; cpu.execute_instruction<0xA4>(0x0061, 2); return true;
    // src/spc700/main.spc700.s:892 MOV X, UNK0068
    case 0x0AEC: if (cpu.read_byte(0x0AEC) != 0xF8 || cpu.read_byte(0x0AED) != 0x68) return false; cpu.execute_instruction<0xF8>(0x0068, 2); return true;
    // src/spc700/main.spc700.s:893 CALL UNK0BC7
    case 0x0AEE: if (cpu.read_byte(0x0AEE) != 0x3F || cpu.read_byte(0x0AEF) != 0xC7 || cpu.read_byte(0x0AF0) != 0x0B) return false; cpu.execute_instruction<0x3F>(0x0BC7, 3); return true;
    // src/spc700/main.spc700.s:894 MOVW UNK0064, YA
    case 0x0AF1: if (cpu.read_byte(0x0AF1) != 0xDA || cpu.read_byte(0x0AF2) != 0x64) return false; cpu.execute_instruction<0xDA>(0x0064, 2); return true;
    // src/spc700/main.spc700.s:895 CALL UNK0955
    case 0x0AF3: if (cpu.read_byte(0x0AF3) != 0x3F || cpu.read_byte(0x0AF4) != 0x55 || cpu.read_byte(0x0AF5) != 0x09) return false; cpu.execute_instruction<0x3F>(0x0955, 3); return true;
    // src/spc700/main.spc700.s:896 MOV UNK006A, A
    case 0x0AF6: if (cpu.read_byte(0x0AF6) != 0xC4 || cpu.read_byte(0x0AF7) != 0x6A) return false; cpu.execute_instruction<0xC4>(0x006A, 2); return true;
    // src/spc700/main.spc700.s:897 SETC
    case 0x0AF8: if (cpu.read_byte(0x0AF8) != 0x80) return false; cpu.execute_instruction<0x80>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:898 SBC A, EVOLR_MIRROR
    case 0x0AF9: if (cpu.read_byte(0x0AF9) != 0xA4 || cpu.read_byte(0x0AFA) != 0x63) return false; cpu.execute_instruction<0xA4>(0x0063, 2); return true;
    // src/spc700/main.spc700.s:899 MOV X, UNK0068
    case 0x0AFB: if (cpu.read_byte(0x0AFB) != 0xF8 || cpu.read_byte(0x0AFC) != 0x68) return false; cpu.execute_instruction<0xF8>(0x0068, 2); return true;
    // src/spc700/main.spc700.s:900 CALL UNK0BC7
    case 0x0AFD: if (cpu.read_byte(0x0AFD) != 0x3F || cpu.read_byte(0x0AFE) != 0xC7 || cpu.read_byte(0x0AFF) != 0x0B) return false; cpu.execute_instruction<0x3F>(0x0BC7, 3); return true;
    // src/spc700/main.spc700.s:901 MOVW UNK0066, YA
    case 0x0B00: if (cpu.read_byte(0x0B00) != 0xDA || cpu.read_byte(0x0B01) != 0x66) return false; cpu.execute_instruction<0xDA>(0x0066, 2); return true;
    // src/spc700/main.spc700.s:902 RET
    case 0x0B02: if (cpu.read_byte(0x0B02) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0B03.
bool execute_audio_unresolved_unk0b03_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:905 MOVW UNK0060, YA
    case 0x0B03: if (cpu.read_byte(0x0B03) != 0xDA || cpu.read_byte(0x0B04) != 0x60) return false; cpu.execute_instruction<0xDA>(0x0060, 2); return true;
    // src/spc700/main.spc700.s:906 MOVW UNK0062, YA
    case 0x0B05: if (cpu.read_byte(0x0B05) != 0xDA || cpu.read_byte(0x0B06) != 0x62) return false; cpu.execute_instruction<0xDA>(0x0062, 2); return true;
    // src/spc700/main.spc700.s:907 SET5 FLG_MIRROR
    case 0x0B07: if (cpu.read_byte(0x0B07) != 0xA2 || cpu.read_byte(0x0B08) != 0x48) return false; cpu.execute_instruction<0xA2>(0x0048, 2); return true;
    // src/spc700/main.spc700.s:908 RET
    case 0x0B09: if (cpu.read_byte(0x0B09) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0B0A.
bool execute_audio_unresolved_unk0b0a_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:911 CALL SET_ECHO_DELAY
    case 0x0B0A: if (cpu.read_byte(0x0B0A) != 0x3F || cpu.read_byte(0x0B0B) != 0x2C || cpu.read_byte(0x0B0C) != 0x0B) return false; cpu.execute_instruction<0x3F>(0x0B2C, 3); return true;
    // src/spc700/main.spc700.s:912 CALL UNK0955
    case 0x0B0D: if (cpu.read_byte(0x0B0D) != 0x3F || cpu.read_byte(0x0B0E) != 0x55 || cpu.read_byte(0x0B0F) != 0x09) return false; cpu.execute_instruction<0x3F>(0x0955, 3); return true;
    // src/spc700/main.spc700.s:913 MOV EFB_MIRROR, A
    case 0x0B10: if (cpu.read_byte(0x0B10) != 0xC4 || cpu.read_byte(0x0B11) != 0x4E) return false; cpu.execute_instruction<0xC4>(0x004E, 2); return true;
    // src/spc700/main.spc700.s:914 CALL UNK0955
    case 0x0B12: if (cpu.read_byte(0x0B12) != 0x3F || cpu.read_byte(0x0B13) != 0x55 || cpu.read_byte(0x0B14) != 0x09) return false; cpu.execute_instruction<0x3F>(0x0955, 3); return true;
    // src/spc700/main.spc700.s:915 MOV Y, #$08
    case 0x0B15: if (cpu.read_byte(0x0B15) != 0x8D || cpu.read_byte(0x0B16) != 0x08) return false; cpu.execute_instruction<0x8D>(0x0008, 2); return true;
    // src/spc700/main.spc700.s:916 MUL YA
    case 0x0B17: if (cpu.read_byte(0x0B17) != 0xCF) return false; cpu.execute_instruction<0xCF>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:917 MOV X, A
    case 0x0B18: if (cpu.read_byte(0x0B18) != 0x5D) return false; cpu.execute_instruction<0x5D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:918 MOV Y, #$0F
    case 0x0B19: if (cpu.read_byte(0x0B19) != 0x8D || cpu.read_byte(0x0B1A) != 0x0F) return false; cpu.execute_instruction<0x8D>(0x000F, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0B1B.
bool execute_audio_unresolved_unk0b1b_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:920 MOV A, UNK0E88 + X
    case 0x0B1B: if (cpu.read_byte(0x0B1B) != 0xF5 || cpu.read_byte(0x0B1C) != 0x88 || cpu.read_byte(0x0B1D) != 0x0E) return false; cpu.execute_instruction<0xF5>(0x0E88, 3); return true;
    // src/spc700/main.spc700.s:921 CALL WRITE_DSP
    case 0x0B1E: if (cpu.read_byte(0x0B1E) != 0x3F || cpu.read_byte(0x0B1F) != 0x49 || cpu.read_byte(0x0B20) != 0x07) return false; cpu.execute_instruction<0x3F>(0x0749, 3); return true;
    // src/spc700/main.spc700.s:922 INC X
    case 0x0B21: if (cpu.read_byte(0x0B21) != 0x3D) return false; cpu.execute_instruction<0x3D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:923 MOV A, Y
    case 0x0B22: if (cpu.read_byte(0x0B22) != 0xDD) return false; cpu.execute_instruction<0xDD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:924 CLRC
    case 0x0B23: if (cpu.read_byte(0x0B23) != 0x60) return false; cpu.execute_instruction<0x60>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:925 ADC A, #$10
    case 0x0B24: if (cpu.read_byte(0x0B24) != 0x88 || cpu.read_byte(0x0B25) != 0x10) return false; cpu.execute_instruction<0x88>(0x0010, 2); return true;
    // src/spc700/main.spc700.s:926 MOV Y, A
    case 0x0B26: if (cpu.read_byte(0x0B26) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:927 BPL UNK0B1B
    case 0x0B27: if (cpu.read_byte(0x0B27) != 0x10 || cpu.read_byte(0x0B28) != 0xF2) return false; cpu.execute_instruction<0x10>(0x00F2, 2); return true;
    // src/spc700/main.spc700.s:928 MOV X, UNK0044
    case 0x0B29: if (cpu.read_byte(0x0B29) != 0xF8 || cpu.read_byte(0x0B2A) != 0x44) return false; cpu.execute_instruction<0xF8>(0x0044, 2); return true;
    // src/spc700/main.spc700.s:929 RET
    case 0x0B2B: if (cpu.read_byte(0x0B2B) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: SET_ECHO_DELAY.
bool execute_audio_set_echo_delay_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:932 MOV EDL_MIRROR, A
    case 0x0B2C: if (cpu.read_byte(0x0B2C) != 0xC4 || cpu.read_byte(0x0B2D) != 0x4D) return false; cpu.execute_instruction<0xC4>(0x004D, 2); return true;
    // src/spc700/main.spc700.s:933 MOV Y, #$7D
    case 0x0B2E: if (cpu.read_byte(0x0B2E) != 0x8D || cpu.read_byte(0x0B2F) != 0x7D) return false; cpu.execute_instruction<0x8D>(0x007D, 2); return true;
    // src/spc700/main.spc700.s:934 MOV.w DSPADDR, Y
    case 0x0B30: if (cpu.read_byte(0x0B30) != 0xCC || cpu.read_byte(0x0B31) != 0xF2 || cpu.read_byte(0x0B32) != 0x00) return false; cpu.execute_instruction<0xCC>(0x00F2, 3); return true;
    // src/spc700/main.spc700.s:935 MOV.w A, DSPDATA
    case 0x0B33: if (cpu.read_byte(0x0B33) != 0xE5 || cpu.read_byte(0x0B34) != 0xF3 || cpu.read_byte(0x0B35) != 0x00) return false; cpu.execute_instruction<0xE5>(0x00F3, 3); return true;
    // src/spc700/main.spc700.s:936 CMP A, EDL_MIRROR
    case 0x0B36: if (cpu.read_byte(0x0B36) != 0x64 || cpu.read_byte(0x0B37) != 0x4D) return false; cpu.execute_instruction<0x64>(0x004D, 2); return true;
    // src/spc700/main.spc700.s:937 BEQ UNK0B65
    case 0x0B38: if (cpu.read_byte(0x0B38) != 0xF0 || cpu.read_byte(0x0B39) != 0x2B) return false; cpu.execute_instruction<0xF0>(0x002B, 2); return true;
    // src/spc700/main.spc700.s:938 AND A, #$0F
    case 0x0B3A: if (cpu.read_byte(0x0B3A) != 0x28 || cpu.read_byte(0x0B3B) != 0x0F) return false; cpu.execute_instruction<0x28>(0x000F, 2); return true;
    // src/spc700/main.spc700.s:939 EOR A, #$FF
    case 0x0B3C: if (cpu.read_byte(0x0B3C) != 0x48 || cpu.read_byte(0x0B3D) != 0xFF) return false; cpu.execute_instruction<0x48>(0x00FF, 2); return true;
    // src/spc700/main.spc700.s:940 BBC7 $4C, UNK0B44
    case 0x0B3E: if (cpu.read_byte(0x0B3E) != 0xF3 || cpu.read_byte(0x0B3F) != 0x4C || cpu.read_byte(0x0B40) != 0x03) return false; cpu.execute_instruction<0xF3>(0x034C, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0B41.
bool execute_audio_unresolved_unk0b41_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:942 CLRC
    case 0x0B41: if (cpu.read_byte(0x0B41) != 0x60) return false; cpu.execute_instruction<0x60>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:943 ADC A, ECHO_COUNTER
    case 0x0B42: if (cpu.read_byte(0x0B42) != 0x84 || cpu.read_byte(0x0B43) != 0x4C) return false; cpu.execute_instruction<0x84>(0x004C, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0B44.
bool execute_audio_unresolved_unk0b44_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:945 MOV ECHO_COUNTER, A
    case 0x0B44: if (cpu.read_byte(0x0B44) != 0xC4 || cpu.read_byte(0x0B45) != 0x4C) return false; cpu.execute_instruction<0xC4>(0x004C, 2); return true;
    // src/spc700/main.spc700.s:946 MOV Y, #$04
    case 0x0B46: if (cpu.read_byte(0x0B46) != 0x8D || cpu.read_byte(0x0B47) != 0x04) return false; cpu.execute_instruction<0x8D>(0x0004, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0B48.
bool execute_audio_unresolved_unk0b48_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:948 MOV A, UNK0EA8 - 1 + Y
    case 0x0B48: if (cpu.read_byte(0x0B48) != 0xF6 || cpu.read_byte(0x0B49) != 0xA7 || cpu.read_byte(0x0B4A) != 0x0E) return false; cpu.execute_instruction<0xF6>(0x0EA7, 3); return true;
    // src/spc700/main.spc700.s:949 MOV.w DSPADDR, A
    case 0x0B4B: if (cpu.read_byte(0x0B4B) != 0xC5 || cpu.read_byte(0x0B4C) != 0xF2 || cpu.read_byte(0x0B4D) != 0x00) return false; cpu.execute_instruction<0xC5>(0x00F2, 3); return true;
    // src/spc700/main.spc700.s:950 MOV A, #$00
    case 0x0B4E: if (cpu.read_byte(0x0B4E) != 0xE8 || cpu.read_byte(0x0B4F) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:951 MOV.w DSPDATA, A
    case 0x0B50: if (cpu.read_byte(0x0B50) != 0xC5 || cpu.read_byte(0x0B51) != 0xF3 || cpu.read_byte(0x0B52) != 0x00) return false; cpu.execute_instruction<0xC5>(0x00F3, 3); return true;
    // src/spc700/main.spc700.s:952 DBNZ Y, UNK0B48
    case 0x0B53: if (cpu.read_byte(0x0B53) != 0xFE || cpu.read_byte(0x0B54) != 0xF3) return false; cpu.execute_instruction<0xFE>(0x00F3, 2); return true;
    // src/spc700/main.spc700.s:953 MOV A, FLG_MIRROR
    case 0x0B55: if (cpu.read_byte(0x0B55) != 0xE4 || cpu.read_byte(0x0B56) != 0x48) return false; cpu.execute_instruction<0xE4>(0x0048, 2); return true;
    // src/spc700/main.spc700.s:954 OR A, #$20
    case 0x0B57: if (cpu.read_byte(0x0B57) != 0x08 || cpu.read_byte(0x0B58) != 0x20) return false; cpu.execute_instruction<0x08>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:955 MOV Y, #$6C
    case 0x0B59: if (cpu.read_byte(0x0B59) != 0x8D || cpu.read_byte(0x0B5A) != 0x6C) return false; cpu.execute_instruction<0x8D>(0x006C, 2); return true;
    // src/spc700/main.spc700.s:956 CALL WRITE_DSP
    case 0x0B5B: if (cpu.read_byte(0x0B5B) != 0x3F || cpu.read_byte(0x0B5C) != 0x49 || cpu.read_byte(0x0B5D) != 0x07) return false; cpu.execute_instruction<0x3F>(0x0749, 3); return true;
    // src/spc700/main.spc700.s:957 MOV A, EDL_MIRROR
    case 0x0B5E: if (cpu.read_byte(0x0B5E) != 0xE4 || cpu.read_byte(0x0B5F) != 0x4D) return false; cpu.execute_instruction<0xE4>(0x004D, 2); return true;
    // src/spc700/main.spc700.s:958 MOV Y, #$7D
    case 0x0B60: if (cpu.read_byte(0x0B60) != 0x8D || cpu.read_byte(0x0B61) != 0x7D) return false; cpu.execute_instruction<0x8D>(0x007D, 2); return true;
    // src/spc700/main.spc700.s:959 CALL WRITE_DSP
    case 0x0B62: if (cpu.read_byte(0x0B62) != 0x3F || cpu.read_byte(0x0B63) != 0x49 || cpu.read_byte(0x0B64) != 0x07) return false; cpu.execute_instruction<0x3F>(0x0749, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0B65.
bool execute_audio_unresolved_unk0b65_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:961 ASL A
    case 0x0B65: if (cpu.read_byte(0x0B65) != 0x1C) return false; cpu.execute_instruction<0x1C>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:962 ASL A
    case 0x0B66: if (cpu.read_byte(0x0B66) != 0x1C) return false; cpu.execute_instruction<0x1C>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:963 ASL A
    case 0x0B67: if (cpu.read_byte(0x0B67) != 0x1C) return false; cpu.execute_instruction<0x1C>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:964 EOR A, #$FF
    case 0x0B68: if (cpu.read_byte(0x0B68) != 0x48 || cpu.read_byte(0x0B69) != 0xFF) return false; cpu.execute_instruction<0x48>(0x00FF, 2); return true;
    // src/spc700/main.spc700.s:965 SETC
    case 0x0B6A: if (cpu.read_byte(0x0B6A) != 0x80) return false; cpu.execute_instruction<0x80>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:966 ADC A, #$FF
    case 0x0B6B: if (cpu.read_byte(0x0B6B) != 0x88 || cpu.read_byte(0x0B6C) != 0xFF) return false; cpu.execute_instruction<0x88>(0x00FF, 2); return true;
    // src/spc700/main.spc700.s:967 MOV Y, #$6D
    case 0x0B6D: if (cpu.read_byte(0x0B6D) != 0x8D || cpu.read_byte(0x0B6E) != 0x6D) return false; cpu.execute_instruction<0x8D>(0x006D, 2); return true;
    // src/spc700/main.spc700.s:968 JMP WRITE_DSP
    case 0x0B6F: if (cpu.read_byte(0x0B6F) != 0x5F || cpu.read_byte(0x0B70) != 0x49 || cpu.read_byte(0x0B71) != 0x07) return false; cpu.execute_instruction<0x5F>(0x0749, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0B72.
bool execute_audio_unresolved_unk0b72_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:971 MOV BASE_PERCUSSION_INSTRUMENT, A
    case 0x0B72: if (cpu.read_byte(0x0B72) != 0xC4 || cpu.read_byte(0x0B73) != 0x5F) return false; cpu.execute_instruction<0xC4>(0x005F, 2); return true;
    // src/spc700/main.spc700.s:972 RET
    case 0x0B74: if (cpu.read_byte(0x0B74) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0B75.
bool execute_audio_unresolved_unk0b75_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:975 CALL UNK0957
    case 0x0B75: if (cpu.read_byte(0x0B75) != 0x3F || cpu.read_byte(0x0B76) != 0x57 || cpu.read_byte(0x0B77) != 0x09) return false; cpu.execute_instruction<0x3F>(0x0957, 3); return true;
    // src/spc700/main.spc700.s:976 RET
    case 0x0B78: if (cpu.read_byte(0x0B78) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0B79.
bool execute_audio_unresolved_unk0b79_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:979 INC A
    case 0x0B79: if (cpu.read_byte(0x0B79) != 0xBC) return false; cpu.execute_instruction<0xBC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:980 MOV UNK0400 + X, A
    case 0x0B7A: if (cpu.read_byte(0x0B7A) != 0xD5 || cpu.read_byte(0x0B7B) != 0x00 || cpu.read_byte(0x0B7C) != 0x04) return false; cpu.execute_instruction<0xD5>(0x0400, 3); return true;
    // src/spc700/main.spc700.s:981 RET
    case 0x0B7D: if (cpu.read_byte(0x0B7D) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0B7E.
bool execute_audio_unresolved_unk0b7e_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:984 INC A
    case 0x0B7E: if (cpu.read_byte(0x0B7E) != 0xBC) return false; cpu.execute_instruction<0xBC>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0B7F.
bool execute_audio_unresolved_unk0b7f_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:986 MOV FAST_FORWARD_FLAG, A
    case 0x0B7F: if (cpu.read_byte(0x0B7F) != 0xC4 || cpu.read_byte(0x0B80) != 0x1B) return false; cpu.execute_instruction<0xC4>(0x001B, 2); return true;
    // src/spc700/main.spc700.s:987 JMP UNK0787
    case 0x0B81: if (cpu.read_byte(0x0B81) != 0x5F || cpu.read_byte(0x0B82) != 0x87 || cpu.read_byte(0x0B83) != 0x07) return false; cpu.execute_instruction<0x5F>(0x0787, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0B84.
bool execute_audio_unresolved_unk0b84_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:989 MOV A, UNK00A0 + X
    case 0x0B84: if (cpu.read_byte(0x0B84) != 0xF4 || cpu.read_byte(0x0B85) != 0xA0) return false; cpu.execute_instruction<0xF4>(0x00A0, 2); return true;
    // src/spc700/main.spc700.s:990 BNE UNK0BBB
    case 0x0B86: if (cpu.read_byte(0x0B86) != 0xD0 || cpu.read_byte(0x0B87) != 0x33) return false; cpu.execute_instruction<0xD0>(0x0033, 2); return true;
    // src/spc700/main.spc700.s:991 MOV A, (TRACK_POINTERS + X)
    case 0x0B88: if (cpu.read_byte(0x0B88) != 0xE7 || cpu.read_byte(0x0B89) != 0x30) return false; cpu.execute_instruction<0xE7>(0x0030, 2); return true;
    // src/spc700/main.spc700.s:992 CMP A, #$F9
    case 0x0B8A: if (cpu.read_byte(0x0B8A) != 0x68 || cpu.read_byte(0x0B8B) != 0xF9) return false; cpu.execute_instruction<0x68>(0x00F9, 2); return true;
    // src/spc700/main.spc700.s:993 BNE UNK0BBB
    case 0x0B8C: if (cpu.read_byte(0x0B8C) != 0xD0 || cpu.read_byte(0x0B8D) != 0x2D) return false; cpu.execute_instruction<0xD0>(0x002D, 2); return true;
    // src/spc700/main.spc700.s:994 CALL UNK0957
    case 0x0B8E: if (cpu.read_byte(0x0B8E) != 0x3F || cpu.read_byte(0x0B8F) != 0x57 || cpu.read_byte(0x0B90) != 0x09) return false; cpu.execute_instruction<0x3F>(0x0957, 3); return true;
    // src/spc700/main.spc700.s:995 CALL UNK0955
    case 0x0B91: if (cpu.read_byte(0x0B91) != 0x3F || cpu.read_byte(0x0B92) != 0x55 || cpu.read_byte(0x0B93) != 0x09) return false; cpu.execute_instruction<0x3F>(0x0955, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0B94.
bool execute_audio_unresolved_unk0b94_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:997 MOV UNK00A1 + X, A
    case 0x0B94: if (cpu.read_byte(0x0B94) != 0xD4 || cpu.read_byte(0x0B95) != 0xA1) return false; cpu.execute_instruction<0xD4>(0x00A1, 2); return true;
    // src/spc700/main.spc700.s:998 CALL UNK0955
    case 0x0B96: if (cpu.read_byte(0x0B96) != 0x3F || cpu.read_byte(0x0B97) != 0x55 || cpu.read_byte(0x0B98) != 0x09) return false; cpu.execute_instruction<0x3F>(0x0955, 3); return true;
    // src/spc700/main.spc700.s:999 MOV UNK00A0 + X, A
    case 0x0B99: if (cpu.read_byte(0x0B99) != 0xD4 || cpu.read_byte(0x0B9A) != 0xA0) return false; cpu.execute_instruction<0xD4>(0x00A0, 2); return true;
    // src/spc700/main.spc700.s:1000 CALL UNK0955
    case 0x0B9B: if (cpu.read_byte(0x0B9B) != 0x3F || cpu.read_byte(0x0B9C) != 0x55 || cpu.read_byte(0x0B9D) != 0x09) return false; cpu.execute_instruction<0x3F>(0x0955, 3); return true;
    // src/spc700/main.spc700.s:1001 CLRC
    case 0x0B9E: if (cpu.read_byte(0x0B9E) != 0x60) return false; cpu.execute_instruction<0x60>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1002 ADC A, UNK0050
    case 0x0B9F: if (cpu.read_byte(0x0B9F) != 0x84 || cpu.read_byte(0x0BA0) != 0x50) return false; cpu.execute_instruction<0x84>(0x0050, 2); return true;
    // src/spc700/main.spc700.s:1003 ADC A, UNK02F0 + X
    case 0x0BA1: if (cpu.read_byte(0x0BA1) != 0x95 || cpu.read_byte(0x0BA2) != 0xF0 || cpu.read_byte(0x0BA3) != 0x02) return false; cpu.execute_instruction<0x95>(0x02F0, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0BA4.
bool execute_audio_unresolved_unk0ba4_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1005 AND A, #$7F
    case 0x0BA4: if (cpu.read_byte(0x0BA4) != 0x28 || cpu.read_byte(0x0BA5) != 0x7F) return false; cpu.execute_instruction<0x28>(0x007F, 2); return true;
    // src/spc700/main.spc700.s:1006 MOV UNK0380 + X, A
    case 0x0BA6: if (cpu.read_byte(0x0BA6) != 0xD5 || cpu.read_byte(0x0BA7) != 0x80 || cpu.read_byte(0x0BA8) != 0x03) return false; cpu.execute_instruction<0xD5>(0x0380, 3); return true;
    // src/spc700/main.spc700.s:1007 SETC
    case 0x0BA9: if (cpu.read_byte(0x0BA9) != 0x80) return false; cpu.execute_instruction<0x80>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1008 SBC A, UNK0361 + X
    case 0x0BAA: if (cpu.read_byte(0x0BAA) != 0xB5 || cpu.read_byte(0x0BAB) != 0x61 || cpu.read_byte(0x0BAC) != 0x03) return false; cpu.execute_instruction<0xB5>(0x0361, 3); return true;
    // src/spc700/main.spc700.s:1009 MOV Y, UNK00A0 + X
    case 0x0BAD: if (cpu.read_byte(0x0BAD) != 0xFB || cpu.read_byte(0x0BAE) != 0xA0) return false; cpu.execute_instruction<0xFB>(0x00A0, 2); return true;
    // src/spc700/main.spc700.s:1010 PUSH Y
    case 0x0BAF: if (cpu.read_byte(0x0BAF) != 0x6D) return false; cpu.execute_instruction<0x6D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1011 POP X
    case 0x0BB0: if (cpu.read_byte(0x0BB0) != 0xCE) return false; cpu.execute_instruction<0xCE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1012 CALL UNK0BC7
    case 0x0BB1: if (cpu.read_byte(0x0BB1) != 0x3F || cpu.read_byte(0x0BB2) != 0xC7 || cpu.read_byte(0x0BB3) != 0x0B) return false; cpu.execute_instruction<0x3F>(0x0BC7, 3); return true;
    // src/spc700/main.spc700.s:1013 MOV UNK0370 + X, A
    case 0x0BB4: if (cpu.read_byte(0x0BB4) != 0xD5 || cpu.read_byte(0x0BB5) != 0x70 || cpu.read_byte(0x0BB6) != 0x03) return false; cpu.execute_instruction<0xD5>(0x0370, 3); return true;
    // src/spc700/main.spc700.s:1014 MOV A, Y
    case 0x0BB7: if (cpu.read_byte(0x0BB7) != 0xDD) return false; cpu.execute_instruction<0xDD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1015 MOV UNK0371 + X, A
    case 0x0BB8: if (cpu.read_byte(0x0BB8) != 0xD5 || cpu.read_byte(0x0BB9) != 0x71 || cpu.read_byte(0x0BBA) != 0x03) return false; cpu.execute_instruction<0xD5>(0x0371, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0BBB.
bool execute_audio_unresolved_unk0bbb_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1017 RET
    case 0x0BBB: if (cpu.read_byte(0x0BBB) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0BBC.
bool execute_audio_unresolved_unk0bbc_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1020 MOV A, UNK0361 + X
    case 0x0BBC: if (cpu.read_byte(0x0BBC) != 0xF5 || cpu.read_byte(0x0BBD) != 0x61 || cpu.read_byte(0x0BBE) != 0x03) return false; cpu.execute_instruction<0xF5>(0x0361, 3); return true;
    // src/spc700/main.spc700.s:1021 MOV UNK0011, A
    case 0x0BBF: if (cpu.read_byte(0x0BBF) != 0xC4 || cpu.read_byte(0x0BC0) != 0x11) return false; cpu.execute_instruction<0xC4>(0x0011, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0BC1.
bool execute_audio_unresolved_unk0bc1_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1023 MOV A, UNK0360 + X
    case 0x0BC1: if (cpu.read_byte(0x0BC1) != 0xF5 || cpu.read_byte(0x0BC2) != 0x60 || cpu.read_byte(0x0BC3) != 0x03) return false; cpu.execute_instruction<0xF5>(0x0360, 3); return true;
    // src/spc700/main.spc700.s:1024 MOV UNK0010, A
    case 0x0BC4: if (cpu.read_byte(0x0BC4) != 0xC4 || cpu.read_byte(0x0BC5) != 0x10) return false; cpu.execute_instruction<0xC4>(0x0010, 2); return true;
    // src/spc700/main.spc700.s:1025 RET
    case 0x0BC6: if (cpu.read_byte(0x0BC6) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0BC7.
bool execute_audio_unresolved_unk0bc7_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1028 NOTC
    case 0x0BC7: if (cpu.read_byte(0x0BC7) != 0xED) return false; cpu.execute_instruction<0xED>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1029 ROR UNK0012
    case 0x0BC8: if (cpu.read_byte(0x0BC8) != 0x6B || cpu.read_byte(0x0BC9) != 0x12) return false; cpu.execute_instruction<0x6B>(0x0012, 2); return true;
    // src/spc700/main.spc700.s:1030 BPL UNK0BCF
    case 0x0BCA: if (cpu.read_byte(0x0BCA) != 0x10 || cpu.read_byte(0x0BCB) != 0x03) return false; cpu.execute_instruction<0x10>(0x0003, 2); return true;
    // src/spc700/main.spc700.s:1031 EOR A, #$FF
    case 0x0BCC: if (cpu.read_byte(0x0BCC) != 0x48 || cpu.read_byte(0x0BCD) != 0xFF) return false; cpu.execute_instruction<0x48>(0x00FF, 2); return true;
    // src/spc700/main.spc700.s:1032 INC A
    case 0x0BCE: if (cpu.read_byte(0x0BCE) != 0xBC) return false; cpu.execute_instruction<0xBC>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0BCF.
bool execute_audio_unresolved_unk0bcf_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1034 MOV Y, #$00
    case 0x0BCF: if (cpu.read_byte(0x0BCF) != 0x8D || cpu.read_byte(0x0BD0) != 0x00) return false; cpu.execute_instruction<0x8D>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:1035 DIV YA, X
    case 0x0BD1: if (cpu.read_byte(0x0BD1) != 0x9E) return false; cpu.execute_instruction<0x9E>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1036 PUSH A
    case 0x0BD2: if (cpu.read_byte(0x0BD2) != 0x2D) return false; cpu.execute_instruction<0x2D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1037 MOV A, #$00
    case 0x0BD3: if (cpu.read_byte(0x0BD3) != 0xE8 || cpu.read_byte(0x0BD4) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:1038 DIV YA, X
    case 0x0BD5: if (cpu.read_byte(0x0BD5) != 0x9E) return false; cpu.execute_instruction<0x9E>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1039 POP Y
    case 0x0BD6: if (cpu.read_byte(0x0BD6) != 0xEE) return false; cpu.execute_instruction<0xEE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1040 MOV X, UNK0044
    case 0x0BD7: if (cpu.read_byte(0x0BD7) != 0xF8 || cpu.read_byte(0x0BD8) != 0x44) return false; cpu.execute_instruction<0xF8>(0x0044, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0BD9.
bool execute_audio_unresolved_unk0bd9_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1042 BBC7 $12, UNK0BE2
    case 0x0BD9: if (cpu.read_byte(0x0BD9) != 0xF3 || cpu.read_byte(0x0BDA) != 0x12 || cpu.read_byte(0x0BDB) != 0x06) return false; cpu.execute_instruction<0xF3>(0x0612, 3); return true;
    // src/spc700/main.spc700.s:1043 MOVW UNK0014, YA
    case 0x0BDC: if (cpu.read_byte(0x0BDC) != 0xDA || cpu.read_byte(0x0BDD) != 0x14) return false; cpu.execute_instruction<0xDA>(0x0014, 2); return true;
    // src/spc700/main.spc700.s:1044 MOVW YA, ZERO
    case 0x0BDE: if (cpu.read_byte(0x0BDE) != 0xBA || cpu.read_byte(0x0BDF) != 0x0E) return false; cpu.execute_instruction<0xBA>(0x000E, 2); return true;
    // src/spc700/main.spc700.s:1045 SUBW YA, UNK0014
    case 0x0BE0: if (cpu.read_byte(0x0BE0) != 0x9A || cpu.read_byte(0x0BE1) != 0x14) return false; cpu.execute_instruction<0x9A>(0x0014, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0BE2.
bool execute_audio_unresolved_unk0be2_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1047 RET
    case 0x0BE2: if (cpu.read_byte(0x0BE2) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0C40.
bool execute_audio_unresolved_unk0c40_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1092 MOV A, UNK0090 + X
    case 0x0C40: if (cpu.read_byte(0x0C40) != 0xF4 || cpu.read_byte(0x0C41) != 0x90) return false; cpu.execute_instruction<0xF4>(0x0090, 2); return true;
    // src/spc700/main.spc700.s:1093 BEQ UNK0C4D
    case 0x0C42: if (cpu.read_byte(0x0C42) != 0xF0 || cpu.read_byte(0x0C43) != 0x09) return false; cpu.execute_instruction<0xF0>(0x0009, 2); return true;
    // src/spc700/main.spc700.s:1094 MOV A, #$00
    case 0x0C44: if (cpu.read_byte(0x0C44) != 0xE8 || cpu.read_byte(0x0C45) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:1095 MOV Y, #$03
    case 0x0C46: if (cpu.read_byte(0x0C46) != 0x8D || cpu.read_byte(0x0C47) != 0x03) return false; cpu.execute_instruction<0x8D>(0x0003, 2); return true;
    // src/spc700/main.spc700.s:1096 DEC UNK0090 + X
    case 0x0C48: if (cpu.read_byte(0x0C48) != 0x9B || cpu.read_byte(0x0C49) != 0x90) return false; cpu.execute_instruction<0x9B>(0x0090, 2); return true;
    // src/spc700/main.spc700.s:1097 CALL UNK0CD3
    case 0x0C4A: if (cpu.read_byte(0x0C4A) != 0x3F || cpu.read_byte(0x0C4B) != 0xD3 || cpu.read_byte(0x0C4C) != 0x0C) return false; cpu.execute_instruction<0x3F>(0x0CD3, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0C4D.
bool execute_audio_unresolved_unk0c4d_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1099 MOV Y, UNK00C1 + X
    case 0x0C4D: if (cpu.read_byte(0x0C4D) != 0xFB || cpu.read_byte(0x0C4E) != 0xC1) return false; cpu.execute_instruction<0xFB>(0x00C1, 2); return true;
    // src/spc700/main.spc700.s:1100 BEQ UNK0C74
    case 0x0C4F: if (cpu.read_byte(0x0C4F) != 0xF0 || cpu.read_byte(0x0C50) != 0x23) return false; cpu.execute_instruction<0xF0>(0x0023, 2); return true;
    // src/spc700/main.spc700.s:1101 MOV A, UNK02E0 + X
    case 0x0C51: if (cpu.read_byte(0x0C51) != 0xF5 || cpu.read_byte(0x0C52) != 0xE0 || cpu.read_byte(0x0C53) != 0x02) return false; cpu.execute_instruction<0xF5>(0x02E0, 3); return true;
    // src/spc700/main.spc700.s:1102 CBNE $C0 + X, UNK0C72
    case 0x0C54: if (cpu.read_byte(0x0C54) != 0xDE || cpu.read_byte(0x0C55) != 0xC0 || cpu.read_byte(0x0C56) != 0x1B) return false; cpu.execute_instruction<0xDE>(0x1BC0, 3); return true;
    // src/spc700/main.spc700.s:1103 OR VOLUME_CHANGE_BITS, CURRENT_TRACK_BIT
    case 0x0C57: if (cpu.read_byte(0x0C57) != 0x09 || cpu.read_byte(0x0C58) != 0x47 || cpu.read_byte(0x0C59) != 0x5E) return false; cpu.execute_instruction<0x09>(0x5E47, 3); return true;
    // src/spc700/main.spc700.s:1104 MOV A, UNK02D0 + X
    case 0x0C5A: if (cpu.read_byte(0x0C5A) != 0xF5 || cpu.read_byte(0x0C5B) != 0xD0 || cpu.read_byte(0x0C5C) != 0x02) return false; cpu.execute_instruction<0xF5>(0x02D0, 3); return true;
    // src/spc700/main.spc700.s:1105 BPL UNK0C66
    case 0x0C5D: if (cpu.read_byte(0x0C5D) != 0x10 || cpu.read_byte(0x0C5E) != 0x07) return false; cpu.execute_instruction<0x10>(0x0007, 2); return true;
    // src/spc700/main.spc700.s:1106 INC Y
    case 0x0C5F: if (cpu.read_byte(0x0C5F) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1107 BNE UNK0C66
    case 0x0C60: if (cpu.read_byte(0x0C60) != 0xD0 || cpu.read_byte(0x0C61) != 0x04) return false; cpu.execute_instruction<0xD0>(0x0004, 2); return true;
    // src/spc700/main.spc700.s:1108 MOV A, #$80
    case 0x0C62: if (cpu.read_byte(0x0C62) != 0xE8 || cpu.read_byte(0x0C63) != 0x80) return false; cpu.execute_instruction<0xE8>(0x0080, 2); return true;
    // src/spc700/main.spc700.s:1109 BRA UNK0C6A
    case 0x0C64: if (cpu.read_byte(0x0C64) != 0x2F || cpu.read_byte(0x0C65) != 0x04) return false; cpu.execute_instruction<0x2F>(0x0004, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0C66.
bool execute_audio_unresolved_unk0c66_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1111 CLRC
    case 0x0C66: if (cpu.read_byte(0x0C66) != 0x60) return false; cpu.execute_instruction<0x60>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1112 ADC A, UNK02D1 + X
    case 0x0C67: if (cpu.read_byte(0x0C67) != 0x95 || cpu.read_byte(0x0C68) != 0xD1 || cpu.read_byte(0x0C69) != 0x02) return false; cpu.execute_instruction<0x95>(0x02D1, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0C6A.
bool execute_audio_unresolved_unk0c6a_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1114 MOV UNK02D0 + X, A
    case 0x0C6A: if (cpu.read_byte(0x0C6A) != 0xD5 || cpu.read_byte(0x0C6B) != 0xD0 || cpu.read_byte(0x0C6C) != 0x02) return false; cpu.execute_instruction<0xD5>(0x02D0, 3); return true;
    // src/spc700/main.spc700.s:1115 CALL UNK0E56
    case 0x0C6D: if (cpu.read_byte(0x0C6D) != 0x3F || cpu.read_byte(0x0C6E) != 0x56 || cpu.read_byte(0x0C6F) != 0x0E) return false; cpu.execute_instruction<0x3F>(0x0E56, 3); return true;
    // src/spc700/main.spc700.s:1116 BRA UNK0C79
    case 0x0C70: if (cpu.read_byte(0x0C70) != 0x2F || cpu.read_byte(0x0C71) != 0x07) return false; cpu.execute_instruction<0x2F>(0x0007, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0C72.
bool execute_audio_unresolved_unk0c72_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1118 INC UNK00C0 + X
    case 0x0C72: if (cpu.read_byte(0x0C72) != 0xBB || cpu.read_byte(0x0C73) != 0xC0) return false; cpu.execute_instruction<0xBB>(0x00C0, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0C74.
bool execute_audio_unresolved_unk0c74_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1120 MOV A, #$FF
    case 0x0C74: if (cpu.read_byte(0x0C74) != 0xE8 || cpu.read_byte(0x0C75) != 0xFF) return false; cpu.execute_instruction<0xE8>(0x00FF, 2); return true;
    // src/spc700/main.spc700.s:1121 CALL UNK0E61
    case 0x0C76: if (cpu.read_byte(0x0C76) != 0x3F || cpu.read_byte(0x0C77) != 0x61 || cpu.read_byte(0x0C78) != 0x0E) return false; cpu.execute_instruction<0x3F>(0x0E61, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0C79.
bool execute_audio_unresolved_unk0c79_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1123 MOV A, UNK0091 + X
    case 0x0C79: if (cpu.read_byte(0x0C79) != 0xF4 || cpu.read_byte(0x0C7A) != 0x91) return false; cpu.execute_instruction<0xF4>(0x0091, 2); return true;
    // src/spc700/main.spc700.s:1124 BEQ UNK0C86
    case 0x0C7B: if (cpu.read_byte(0x0C7B) != 0xF0 || cpu.read_byte(0x0C7C) != 0x09) return false; cpu.execute_instruction<0xF0>(0x0009, 2); return true;
    // src/spc700/main.spc700.s:1125 MOV A, #$30
    case 0x0C7D: if (cpu.read_byte(0x0C7D) != 0xE8 || cpu.read_byte(0x0C7E) != 0x30) return false; cpu.execute_instruction<0xE8>(0x0030, 2); return true;
    // src/spc700/main.spc700.s:1126 MOV Y, #$03
    case 0x0C7F: if (cpu.read_byte(0x0C7F) != 0x8D || cpu.read_byte(0x0C80) != 0x03) return false; cpu.execute_instruction<0x8D>(0x0003, 2); return true;
    // src/spc700/main.spc700.s:1127 DEC UNK0091 + X
    case 0x0C81: if (cpu.read_byte(0x0C81) != 0x9B || cpu.read_byte(0x0C82) != 0x91) return false; cpu.execute_instruction<0x9B>(0x0091, 2); return true;
    // src/spc700/main.spc700.s:1128 CALL UNK0CD3
    case 0x0C83: if (cpu.read_byte(0x0C83) != 0x3F || cpu.read_byte(0x0C84) != 0xD3 || cpu.read_byte(0x0C85) != 0x0C) return false; cpu.execute_instruction<0x3F>(0x0CD3, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0C86.
bool execute_audio_unresolved_unk0c86_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1130 MOV A, CURRENT_TRACK_BIT
    case 0x0C86: if (cpu.read_byte(0x0C86) != 0xE4 || cpu.read_byte(0x0C87) != 0x47) return false; cpu.execute_instruction<0xE4>(0x0047, 2); return true;
    // src/spc700/main.spc700.s:1131 AND A, VOLUME_CHANGE_BITS
    case 0x0C88: if (cpu.read_byte(0x0C88) != 0x24 || cpu.read_byte(0x0C89) != 0x5E) return false; cpu.execute_instruction<0x24>(0x005E, 2); return true;
    // src/spc700/main.spc700.s:1132 BEQ UNK0CD2
    case 0x0C8A: if (cpu.read_byte(0x0C8A) != 0xF0 || cpu.read_byte(0x0C8B) != 0x46) return false; cpu.execute_instruction<0xF0>(0x0046, 2); return true;
    // src/spc700/main.spc700.s:1133 MOV A, UNK0331 + X
    case 0x0C8C: if (cpu.read_byte(0x0C8C) != 0xF5 || cpu.read_byte(0x0C8D) != 0x31 || cpu.read_byte(0x0C8E) != 0x03) return false; cpu.execute_instruction<0xF5>(0x0331, 3); return true;
    // src/spc700/main.spc700.s:1134 MOV Y, A
    case 0x0C8F: if (cpu.read_byte(0x0C8F) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1135 MOV A, UNK0330 + X
    case 0x0C90: if (cpu.read_byte(0x0C90) != 0xF5 || cpu.read_byte(0x0C91) != 0x30 || cpu.read_byte(0x0C92) != 0x03) return false; cpu.execute_instruction<0xF5>(0x0330, 3); return true;
    // src/spc700/main.spc700.s:1136 MOVW UNK0010, YA
    case 0x0C93: if (cpu.read_byte(0x0C93) != 0xDA || cpu.read_byte(0x0C94) != 0x10) return false; cpu.execute_instruction<0xDA>(0x0010, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0C95.
bool execute_audio_unresolved_unk0c95_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1138 MOV A, X
    case 0x0C95: if (cpu.read_byte(0x0C95) != 0x7D) return false; cpu.execute_instruction<0x7D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1139 XCN A
    case 0x0C96: if (cpu.read_byte(0x0C96) != 0x9F) return false; cpu.execute_instruction<0x9F>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1140 LSR A
    case 0x0C97: if (cpu.read_byte(0x0C97) != 0x5C) return false; cpu.execute_instruction<0x5C>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1141 MOV UNK0012, A
    case 0x0C98: if (cpu.read_byte(0x0C98) != 0xC4 || cpu.read_byte(0x0C99) != 0x12) return false; cpu.execute_instruction<0xC4>(0x0012, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0C9A.
bool execute_audio_unresolved_unk0c9a_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1143 MOV Y, UNK0011
    case 0x0C9A: if (cpu.read_byte(0x0C9A) != 0xEB || cpu.read_byte(0x0C9B) != 0x11) return false; cpu.execute_instruction<0xEB>(0x0011, 2); return true;
    // src/spc700/main.spc700.s:1144 MOV A, UNK0E73 + 1 + Y
    case 0x0C9C: if (cpu.read_byte(0x0C9C) != 0xF6 || cpu.read_byte(0x0C9D) != 0x74 || cpu.read_byte(0x0C9E) != 0x0E) return false; cpu.execute_instruction<0xF6>(0x0E74, 3); return true;
    // src/spc700/main.spc700.s:1145 SETC
    case 0x0C9F: if (cpu.read_byte(0x0C9F) != 0x80) return false; cpu.execute_instruction<0x80>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1146 SBC A, UNK0E73 + Y
    case 0x0CA0: if (cpu.read_byte(0x0CA0) != 0xB6 || cpu.read_byte(0x0CA1) != 0x73 || cpu.read_byte(0x0CA2) != 0x0E) return false; cpu.execute_instruction<0xB6>(0x0E73, 3); return true;
    // src/spc700/main.spc700.s:1147 MOV Y, UNK0010
    case 0x0CA3: if (cpu.read_byte(0x0CA3) != 0xEB || cpu.read_byte(0x0CA4) != 0x10) return false; cpu.execute_instruction<0xEB>(0x0010, 2); return true;
    // src/spc700/main.spc700.s:1148 MUL YA
    case 0x0CA5: if (cpu.read_byte(0x0CA5) != 0xCF) return false; cpu.execute_instruction<0xCF>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1149 MOV A, Y
    case 0x0CA6: if (cpu.read_byte(0x0CA6) != 0xDD) return false; cpu.execute_instruction<0xDD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1150 MOV Y, UNK0011
    case 0x0CA7: if (cpu.read_byte(0x0CA7) != 0xEB || cpu.read_byte(0x0CA8) != 0x11) return false; cpu.execute_instruction<0xEB>(0x0011, 2); return true;
    // src/spc700/main.spc700.s:1151 CLRC
    case 0x0CA9: if (cpu.read_byte(0x0CA9) != 0x60) return false; cpu.execute_instruction<0x60>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1152 ADC A, UNK0E73 + Y
    case 0x0CAA: if (cpu.read_byte(0x0CAA) != 0x96 || cpu.read_byte(0x0CAB) != 0x73 || cpu.read_byte(0x0CAC) != 0x0E) return false; cpu.execute_instruction<0x96>(0x0E73, 3); return true;
    // src/spc700/main.spc700.s:1153 MOV Y, A
    case 0x0CAD: if (cpu.read_byte(0x0CAD) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1154 MOV A, UNK0321 + X
    case 0x0CAE: if (cpu.read_byte(0x0CAE) != 0xF5 || cpu.read_byte(0x0CAF) != 0x21 || cpu.read_byte(0x0CB0) != 0x03) return false; cpu.execute_instruction<0xF5>(0x0321, 3); return true;
    // src/spc700/main.spc700.s:1155 MUL YA
    case 0x0CB1: if (cpu.read_byte(0x0CB1) != 0xCF) return false; cpu.execute_instruction<0xCF>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1156 MOV A, UNK0351 + X
    case 0x0CB2: if (cpu.read_byte(0x0CB2) != 0xF5 || cpu.read_byte(0x0CB3) != 0x51 || cpu.read_byte(0x0CB4) != 0x03) return false; cpu.execute_instruction<0xF5>(0x0351, 3); return true;
    // src/spc700/main.spc700.s:1157 ASL A
    case 0x0CB5: if (cpu.read_byte(0x0CB5) != 0x1C) return false; cpu.execute_instruction<0x1C>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1158 BBC0 $12, UNK0CBA
    case 0x0CB6: if (cpu.read_byte(0x0CB6) != 0x13 || cpu.read_byte(0x0CB7) != 0x12 || cpu.read_byte(0x0CB8) != 0x01) return false; cpu.execute_instruction<0x13>(0x0112, 3); return true;
    // src/spc700/main.spc700.s:1159 ASL A
    case 0x0CB9: if (cpu.read_byte(0x0CB9) != 0x1C) return false; cpu.execute_instruction<0x1C>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0CBA.
bool execute_audio_unresolved_unk0cba_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1161 MOV A, Y
    case 0x0CBA: if (cpu.read_byte(0x0CBA) != 0xDD) return false; cpu.execute_instruction<0xDD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1162 BCC UNK0CC0
    case 0x0CBB: if (cpu.read_byte(0x0CBB) != 0x90 || cpu.read_byte(0x0CBC) != 0x03) return false; cpu.execute_instruction<0x90>(0x0003, 2); return true;
    // src/spc700/main.spc700.s:1163 EOR A, #$FF
    case 0x0CBD: if (cpu.read_byte(0x0CBD) != 0x48 || cpu.read_byte(0x0CBE) != 0xFF) return false; cpu.execute_instruction<0x48>(0x00FF, 2); return true;
    // src/spc700/main.spc700.s:1164 INC A
    case 0x0CBF: if (cpu.read_byte(0x0CBF) != 0xBC) return false; cpu.execute_instruction<0xBC>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0CC0.
bool execute_audio_unresolved_unk0cc0_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1166 MOV Y, UNK0012
    case 0x0CC0: if (cpu.read_byte(0x0CC0) != 0xEB || cpu.read_byte(0x0CC1) != 0x12) return false; cpu.execute_instruction<0xEB>(0x0012, 2); return true;
    // src/spc700/main.spc700.s:1167 CALL UNK0741
    case 0x0CC2: if (cpu.read_byte(0x0CC2) != 0x3F || cpu.read_byte(0x0CC3) != 0x41 || cpu.read_byte(0x0CC4) != 0x07) return false; cpu.execute_instruction<0x3F>(0x0741, 3); return true;
    // src/spc700/main.spc700.s:1168 MOV Y, #$14
    case 0x0CC5: if (cpu.read_byte(0x0CC5) != 0x8D || cpu.read_byte(0x0CC6) != 0x14) return false; cpu.execute_instruction<0x8D>(0x0014, 2); return true;
    // src/spc700/main.spc700.s:1169 MOV A, #$00
    case 0x0CC7: if (cpu.read_byte(0x0CC7) != 0xE8 || cpu.read_byte(0x0CC8) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:1170 SUBW YA, UNK0010
    case 0x0CC9: if (cpu.read_byte(0x0CC9) != 0x9A || cpu.read_byte(0x0CCA) != 0x10) return false; cpu.execute_instruction<0x9A>(0x0010, 2); return true;
    // src/spc700/main.spc700.s:1171 MOVW UNK0010, YA
    case 0x0CCB: if (cpu.read_byte(0x0CCB) != 0xDA || cpu.read_byte(0x0CCC) != 0x10) return false; cpu.execute_instruction<0xDA>(0x0010, 2); return true;
    // src/spc700/main.spc700.s:1172 INC UNK0012
    case 0x0CCD: if (cpu.read_byte(0x0CCD) != 0xAB || cpu.read_byte(0x0CCE) != 0x12) return false; cpu.execute_instruction<0xAB>(0x0012, 2); return true;
    // src/spc700/main.spc700.s:1173 BBC1 $12, UNK0C9A
    case 0x0CCF: if (cpu.read_byte(0x0CCF) != 0x33 || cpu.read_byte(0x0CD0) != 0x12 || cpu.read_byte(0x0CD1) != 0xC8) return false; cpu.execute_instruction<0x33>(0xC812, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0CD2.
bool execute_audio_unresolved_unk0cd2_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1175 RET
    case 0x0CD2: if (cpu.read_byte(0x0CD2) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0CD3.
bool execute_audio_unresolved_unk0cd3_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1178 OR VOLUME_CHANGE_BITS, CURRENT_TRACK_BIT
    case 0x0CD3: if (cpu.read_byte(0x0CD3) != 0x09 || cpu.read_byte(0x0CD4) != 0x47 || cpu.read_byte(0x0CD5) != 0x5E) return false; cpu.execute_instruction<0x09>(0x5E47, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0CD6.
bool execute_audio_unresolved_unk0cd6_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1180 MOVW UNK0014, YA
    case 0x0CD6: if (cpu.read_byte(0x0CD6) != 0xDA || cpu.read_byte(0x0CD7) != 0x14) return false; cpu.execute_instruction<0xDA>(0x0014, 2); return true;
    // src/spc700/main.spc700.s:1181 MOVW UNK0016, YA
    case 0x0CD8: if (cpu.read_byte(0x0CD8) != 0xDA || cpu.read_byte(0x0CD9) != 0x16) return false; cpu.execute_instruction<0xDA>(0x0016, 2); return true;
    // src/spc700/main.spc700.s:1182 PUSH X
    case 0x0CDA: if (cpu.read_byte(0x0CDA) != 0x4D) return false; cpu.execute_instruction<0x4D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1183 POP Y
    case 0x0CDB: if (cpu.read_byte(0x0CDB) != 0xEE) return false; cpu.execute_instruction<0xEE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1184 CLRC
    case 0x0CDC: if (cpu.read_byte(0x0CDC) != 0x60) return false; cpu.execute_instruction<0x60>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1185 BNE UNK0CE9
    case 0x0CDD: if (cpu.read_byte(0x0CDD) != 0xD0 || cpu.read_byte(0x0CDE) != 0x0A) return false; cpu.execute_instruction<0xD0>(0x000A, 2); return true;
    // src/spc700/main.spc700.s:1186 ADC UNK0016, #$1F
    case 0x0CDF: if (cpu.read_byte(0x0CDF) != 0x98 || cpu.read_byte(0x0CE0) != 0x1F || cpu.read_byte(0x0CE1) != 0x16) return false; cpu.execute_instruction<0x98>(0x161F, 3); return true;
    // src/spc700/main.spc700.s:1187 MOV A, #$00
    case 0x0CE2: if (cpu.read_byte(0x0CE2) != 0xE8 || cpu.read_byte(0x0CE3) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:1188 MOV (UNK0014) + Y, A
    case 0x0CE4: if (cpu.read_byte(0x0CE4) != 0xD7 || cpu.read_byte(0x0CE5) != 0x14) return false; cpu.execute_instruction<0xD7>(0x0014, 2); return true;
    // src/spc700/main.spc700.s:1189 INC Y
    case 0x0CE6: if (cpu.read_byte(0x0CE6) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1190 BRA UNK0CF2
    case 0x0CE7: if (cpu.read_byte(0x0CE7) != 0x2F || cpu.read_byte(0x0CE8) != 0x09) return false; cpu.execute_instruction<0x2F>(0x0009, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0CE9.
bool execute_audio_unresolved_unk0ce9_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1192 ADC UNK0016, #$10
    case 0x0CE9: if (cpu.read_byte(0x0CE9) != 0x98 || cpu.read_byte(0x0CEA) != 0x10 || cpu.read_byte(0x0CEB) != 0x16) return false; cpu.execute_instruction<0x98>(0x1610, 3); return true;
    // src/spc700/main.spc700.s:1193 CALL UNK0CF0
    case 0x0CEC: if (cpu.read_byte(0x0CEC) != 0x3F || cpu.read_byte(0x0CED) != 0xF0 || cpu.read_byte(0x0CEE) != 0x0C) return false; cpu.execute_instruction<0x3F>(0x0CF0, 3); return true;
    // src/spc700/main.spc700.s:1194 INC Y
    case 0x0CEF: if (cpu.read_byte(0x0CEF) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0CF0.
bool execute_audio_unresolved_unk0cf0_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1196 MOV A, (UNK0014) + Y
    case 0x0CF0: if (cpu.read_byte(0x0CF0) != 0xF7 || cpu.read_byte(0x0CF1) != 0x14) return false; cpu.execute_instruction<0xF7>(0x0014, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0CF2.
bool execute_audio_unresolved_unk0cf2_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1198 ADC A, (UNK0016) + Y
    case 0x0CF2: if (cpu.read_byte(0x0CF2) != 0x97 || cpu.read_byte(0x0CF3) != 0x16) return false; cpu.execute_instruction<0x97>(0x0016, 2); return true;
    // src/spc700/main.spc700.s:1199 MOV (UNK0014) + Y, A
    case 0x0CF4: if (cpu.read_byte(0x0CF4) != 0xD7 || cpu.read_byte(0x0CF5) != 0x14) return false; cpu.execute_instruction<0xD7>(0x0014, 2); return true;
    // src/spc700/main.spc700.s:1200 RET
    case 0x0CF6: if (cpu.read_byte(0x0CF6) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0CF7.
bool execute_audio_unresolved_unk0cf7_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1203 MOV A, UNK0071 + X
    case 0x0CF7: if (cpu.read_byte(0x0CF7) != 0xF4 || cpu.read_byte(0x0CF8) != 0x71) return false; cpu.execute_instruction<0xF4>(0x0071, 2); return true;
    // src/spc700/main.spc700.s:1204 BEQ UNK0D60
    case 0x0CF9: if (cpu.read_byte(0x0CF9) != 0xF0 || cpu.read_byte(0x0CFA) != 0x65) return false; cpu.execute_instruction<0xF0>(0x0065, 2); return true;
    // src/spc700/main.spc700.s:1205 DEC UNK0071 + X
    case 0x0CFB: if (cpu.read_byte(0x0CFB) != 0x9B || cpu.read_byte(0x0CFC) != 0x71) return false; cpu.execute_instruction<0x9B>(0x0071, 2); return true;
    // src/spc700/main.spc700.s:1206 BEQ UNK0D04
    case 0x0CFD: if (cpu.read_byte(0x0CFD) != 0xF0 || cpu.read_byte(0x0CFE) != 0x05) return false; cpu.execute_instruction<0xF0>(0x0005, 2); return true;
    // src/spc700/main.spc700.s:1207 MOV A, #$02
    case 0x0CFF: if (cpu.read_byte(0x0CFF) != 0xE8 || cpu.read_byte(0x0D00) != 0x02) return false; cpu.execute_instruction<0xE8>(0x0002, 2); return true;
    // src/spc700/main.spc700.s:1208 CBNE $70 + X, UNK0D60
    case 0x0D01: if (cpu.read_byte(0x0D01) != 0xDE || cpu.read_byte(0x0D02) != 0x70 || cpu.read_byte(0x0D03) != 0x5C) return false; cpu.execute_instruction<0xDE>(0x5C70, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0D04.
bool execute_audio_unresolved_unk0d04_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1210 MOV A, UNK0080 + X
    case 0x0D04: if (cpu.read_byte(0x0D04) != 0xF4 || cpu.read_byte(0x0D05) != 0x80) return false; cpu.execute_instruction<0xF4>(0x0080, 2); return true;
    // src/spc700/main.spc700.s:1211 MOV UNK0017, A
    case 0x0D06: if (cpu.read_byte(0x0D06) != 0xC4 || cpu.read_byte(0x0D07) != 0x17) return false; cpu.execute_instruction<0xC4>(0x0017, 2); return true;
    // src/spc700/main.spc700.s:1212 MOV A, TRACK_POINTERS + X
    case 0x0D08: if (cpu.read_byte(0x0D08) != 0xF4 || cpu.read_byte(0x0D09) != 0x30) return false; cpu.execute_instruction<0xF4>(0x0030, 2); return true;
    // src/spc700/main.spc700.s:1213 MOV Y, TRACK_POINTERS+1 + X
    case 0x0D0A: if (cpu.read_byte(0x0D0A) != 0xFB || cpu.read_byte(0x0D0B) != 0x31) return false; cpu.execute_instruction<0xFB>(0x0031, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0D0C.
bool execute_audio_unresolved_unk0d0c_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1215 MOVW UNK0014, YA
    case 0x0D0C: if (cpu.read_byte(0x0D0C) != 0xDA || cpu.read_byte(0x0D0D) != 0x14) return false; cpu.execute_instruction<0xDA>(0x0014, 2); return true;
    // src/spc700/main.spc700.s:1216 MOV Y, #$00
    case 0x0D0E: if (cpu.read_byte(0x0D0E) != 0x8D || cpu.read_byte(0x0D0F) != 0x00) return false; cpu.execute_instruction<0x8D>(0x0000, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0D10.
bool execute_audio_unresolved_unk0d10_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1218 MOV A, (UNK0014) + Y
    case 0x0D10: if (cpu.read_byte(0x0D10) != 0xF7 || cpu.read_byte(0x0D11) != 0x14) return false; cpu.execute_instruction<0xF7>(0x0014, 2); return true;
    // src/spc700/main.spc700.s:1219 BEQ UNK0D32
    case 0x0D12: if (cpu.read_byte(0x0D12) != 0xF0 || cpu.read_byte(0x0D13) != 0x1E) return false; cpu.execute_instruction<0xF0>(0x001E, 2); return true;
    // src/spc700/main.spc700.s:1220 BMI UNK0D1D
    case 0x0D14: if (cpu.read_byte(0x0D14) != 0x30 || cpu.read_byte(0x0D15) != 0x07) return false; cpu.execute_instruction<0x30>(0x0007, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0D16.
bool execute_audio_unresolved_unk0d16_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1222 INC Y
    case 0x0D16: if (cpu.read_byte(0x0D16) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1223 BMI UNK0D59
    case 0x0D17: if (cpu.read_byte(0x0D17) != 0x30 || cpu.read_byte(0x0D18) != 0x40) return false; cpu.execute_instruction<0x30>(0x0040, 2); return true;
    // src/spc700/main.spc700.s:1224 MOV A, (UNK0014) + Y
    case 0x0D19: if (cpu.read_byte(0x0D19) != 0xF7 || cpu.read_byte(0x0D1A) != 0x14) return false; cpu.execute_instruction<0xF7>(0x0014, 2); return true;
    // src/spc700/main.spc700.s:1225 BPL UNK0D16
    case 0x0D1B: if (cpu.read_byte(0x0D1B) != 0x10 || cpu.read_byte(0x0D1C) != 0xF9) return false; cpu.execute_instruction<0x10>(0x00F9, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0D1D.
bool execute_audio_unresolved_unk0d1d_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1227 CMP A, #$C8
    case 0x0D1D: if (cpu.read_byte(0x0D1D) != 0x68 || cpu.read_byte(0x0D1E) != 0xC8) return false; cpu.execute_instruction<0x68>(0x00C8, 2); return true;
    // src/spc700/main.spc700.s:1228 BEQ UNK0D60
    case 0x0D1F: if (cpu.read_byte(0x0D1F) != 0xF0 || cpu.read_byte(0x0D20) != 0x3F) return false; cpu.execute_instruction<0xF0>(0x003F, 2); return true;
    // src/spc700/main.spc700.s:1229 CMP A, #$EF
    case 0x0D21: if (cpu.read_byte(0x0D21) != 0x68 || cpu.read_byte(0x0D22) != 0xEF) return false; cpu.execute_instruction<0x68>(0x00EF, 2); return true;
    // src/spc700/main.spc700.s:1230 BEQ UNK0D4E
    case 0x0D23: if (cpu.read_byte(0x0D23) != 0xF0 || cpu.read_byte(0x0D24) != 0x29) return false; cpu.execute_instruction<0xF0>(0x0029, 2); return true;
    // src/spc700/main.spc700.s:1231 CMP A, #$E0
    case 0x0D25: if (cpu.read_byte(0x0D25) != 0x68 || cpu.read_byte(0x0D26) != 0xE0) return false; cpu.execute_instruction<0x68>(0x00E0, 2); return true;
    // src/spc700/main.spc700.s:1232 BCC UNK0D59
    case 0x0D27: if (cpu.read_byte(0x0D27) != 0x90 || cpu.read_byte(0x0D28) != 0x30) return false; cpu.execute_instruction<0x90>(0x0030, 2); return true;
    // src/spc700/main.spc700.s:1233 PUSH Y
    case 0x0D29: if (cpu.read_byte(0x0D29) != 0x6D) return false; cpu.execute_instruction<0x6D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1234 MOV Y, A
    case 0x0D2A: if (cpu.read_byte(0x0D2A) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1235 POP A
    case 0x0D2B: if (cpu.read_byte(0x0D2B) != 0xAE) return false; cpu.execute_instruction<0xAE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1236 ADC A, UNK0B41 + Y
    case 0x0D2C: if (cpu.read_byte(0x0D2C) != 0x96 || cpu.read_byte(0x0D2D) != 0x41 || cpu.read_byte(0x0D2E) != 0x0B) return false; cpu.execute_instruction<0x96>(0x0B41, 3); return true;
    // src/spc700/main.spc700.s:1237 MOV Y, A
    case 0x0D2F: if (cpu.read_byte(0x0D2F) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1238 BRA UNK0D10
    case 0x0D30: if (cpu.read_byte(0x0D30) != 0x2F || cpu.read_byte(0x0D31) != 0xDE) return false; cpu.execute_instruction<0x2F>(0x00DE, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0D32.
bool execute_audio_unresolved_unk0d32_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1240 MOV A, UNK0017
    case 0x0D32: if (cpu.read_byte(0x0D32) != 0xE4 || cpu.read_byte(0x0D33) != 0x17) return false; cpu.execute_instruction<0xE4>(0x0017, 2); return true;
    // src/spc700/main.spc700.s:1241 BEQ UNK0D59
    case 0x0D34: if (cpu.read_byte(0x0D34) != 0xF0 || cpu.read_byte(0x0D35) != 0x23) return false; cpu.execute_instruction<0xF0>(0x0023, 2); return true;
    // src/spc700/main.spc700.s:1242 DEC UNK0017
    case 0x0D36: if (cpu.read_byte(0x0D36) != 0x8B || cpu.read_byte(0x0D37) != 0x17) return false; cpu.execute_instruction<0x8B>(0x0017, 2); return true;
    // src/spc700/main.spc700.s:1243 BNE UNK0D44
    case 0x0D38: if (cpu.read_byte(0x0D38) != 0xD0 || cpu.read_byte(0x0D39) != 0x0A) return false; cpu.execute_instruction<0xD0>(0x000A, 2); return true;
    // src/spc700/main.spc700.s:1244 MOV A, UNK0231 + X
    case 0x0D3A: if (cpu.read_byte(0x0D3A) != 0xF5 || cpu.read_byte(0x0D3B) != 0x31 || cpu.read_byte(0x0D3C) != 0x02) return false; cpu.execute_instruction<0xF5>(0x0231, 3); return true;
    // src/spc700/main.spc700.s:1245 PUSH A
    case 0x0D3D: if (cpu.read_byte(0x0D3D) != 0x2D) return false; cpu.execute_instruction<0x2D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1246 MOV A, UNK0230 + X
    case 0x0D3E: if (cpu.read_byte(0x0D3E) != 0xF5 || cpu.read_byte(0x0D3F) != 0x30 || cpu.read_byte(0x0D40) != 0x02) return false; cpu.execute_instruction<0xF5>(0x0230, 3); return true;
    // src/spc700/main.spc700.s:1247 POP Y
    case 0x0D41: if (cpu.read_byte(0x0D41) != 0xEE) return false; cpu.execute_instruction<0xEE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1248 BRA UNK0D0C
    case 0x0D42: if (cpu.read_byte(0x0D42) != 0x2F || cpu.read_byte(0x0D43) != 0xC8) return false; cpu.execute_instruction<0x2F>(0x00C8, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0D44.
bool execute_audio_unresolved_unk0d44_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1250 MOV A, UNK0241 + X
    case 0x0D44: if (cpu.read_byte(0x0D44) != 0xF5 || cpu.read_byte(0x0D45) != 0x41 || cpu.read_byte(0x0D46) != 0x02) return false; cpu.execute_instruction<0xF5>(0x0241, 3); return true;
    // src/spc700/main.spc700.s:1251 PUSH A
    case 0x0D47: if (cpu.read_byte(0x0D47) != 0x2D) return false; cpu.execute_instruction<0x2D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1252 MOV A, UNK0240 + X
    case 0x0D48: if (cpu.read_byte(0x0D48) != 0xF5 || cpu.read_byte(0x0D49) != 0x40 || cpu.read_byte(0x0D4A) != 0x02) return false; cpu.execute_instruction<0xF5>(0x0240, 3); return true;
    // src/spc700/main.spc700.s:1253 POP Y
    case 0x0D4B: if (cpu.read_byte(0x0D4B) != 0xEE) return false; cpu.execute_instruction<0xEE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1254 BRA UNK0D0C
    case 0x0D4C: if (cpu.read_byte(0x0D4C) != 0x2F || cpu.read_byte(0x0D4D) != 0xBE) return false; cpu.execute_instruction<0x2F>(0x00BE, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0D4E.
bool execute_audio_unresolved_unk0d4e_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1256 INC Y
    case 0x0D4E: if (cpu.read_byte(0x0D4E) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1257 MOV A, (UNK0014) + Y
    case 0x0D4F: if (cpu.read_byte(0x0D4F) != 0xF7 || cpu.read_byte(0x0D50) != 0x14) return false; cpu.execute_instruction<0xF7>(0x0014, 2); return true;
    // src/spc700/main.spc700.s:1258 PUSH A
    case 0x0D51: if (cpu.read_byte(0x0D51) != 0x2D) return false; cpu.execute_instruction<0x2D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1259 INC Y
    case 0x0D52: if (cpu.read_byte(0x0D52) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1260 MOV A, (UNK0014) + Y
    case 0x0D53: if (cpu.read_byte(0x0D53) != 0xF7 || cpu.read_byte(0x0D54) != 0x14) return false; cpu.execute_instruction<0xF7>(0x0014, 2); return true;
    // src/spc700/main.spc700.s:1261 MOV Y, A
    case 0x0D55: if (cpu.read_byte(0x0D55) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1262 POP A
    case 0x0D56: if (cpu.read_byte(0x0D56) != 0xAE) return false; cpu.execute_instruction<0xAE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1263 BRA UNK0D0C
    case 0x0D57: if (cpu.read_byte(0x0D57) != 0x2F || cpu.read_byte(0x0D58) != 0xB3) return false; cpu.execute_instruction<0x2F>(0x00B3, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0D59.
bool execute_audio_unresolved_unk0d59_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1265 MOV A, CURRENT_TRACK_BIT
    case 0x0D59: if (cpu.read_byte(0x0D59) != 0xE4 || cpu.read_byte(0x0D5A) != 0x47) return false; cpu.execute_instruction<0xE4>(0x0047, 2); return true;
    // src/spc700/main.spc700.s:1266 MOV Y, #$5C
    case 0x0D5B: if (cpu.read_byte(0x0D5B) != 0x8D || cpu.read_byte(0x0D5C) != 0x5C) return false; cpu.execute_instruction<0x8D>(0x005C, 2); return true;
    // src/spc700/main.spc700.s:1267 CALL UNK0741
    case 0x0D5D: if (cpu.read_byte(0x0D5D) != 0x3F || cpu.read_byte(0x0D5E) != 0x41 || cpu.read_byte(0x0D5F) != 0x07) return false; cpu.execute_instruction<0x3F>(0x0741, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0D60.
bool execute_audio_unresolved_unk0d60_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1269 CLR7 UNK0013
    case 0x0D60: if (cpu.read_byte(0x0D60) != 0xF2 || cpu.read_byte(0x0D61) != 0x13) return false; cpu.execute_instruction<0xF2>(0x0013, 2); return true;
    // src/spc700/main.spc700.s:1270 MOV A, UNK00A0 + X
    case 0x0D62: if (cpu.read_byte(0x0D62) != 0xF4 || cpu.read_byte(0x0D63) != 0xA0) return false; cpu.execute_instruction<0xF4>(0x00A0, 2); return true;
    // src/spc700/main.spc700.s:1271 BEQ UNK0D79
    case 0x0D64: if (cpu.read_byte(0x0D64) != 0xF0 || cpu.read_byte(0x0D65) != 0x13) return false; cpu.execute_instruction<0xF0>(0x0013, 2); return true;
    // src/spc700/main.spc700.s:1272 MOV A, UNK00A1 + X
    case 0x0D66: if (cpu.read_byte(0x0D66) != 0xF4 || cpu.read_byte(0x0D67) != 0xA1) return false; cpu.execute_instruction<0xF4>(0x00A1, 2); return true;
    // src/spc700/main.spc700.s:1273 BEQ UNK0D6E
    case 0x0D68: if (cpu.read_byte(0x0D68) != 0xF0 || cpu.read_byte(0x0D69) != 0x04) return false; cpu.execute_instruction<0xF0>(0x0004, 2); return true;
    // src/spc700/main.spc700.s:1274 DEC UNK00A1 + X
    case 0x0D6A: if (cpu.read_byte(0x0D6A) != 0x9B || cpu.read_byte(0x0D6B) != 0xA1) return false; cpu.execute_instruction<0x9B>(0x00A1, 2); return true;
    // src/spc700/main.spc700.s:1275 BRA UNK0D79
    case 0x0D6C: if (cpu.read_byte(0x0D6C) != 0x2F || cpu.read_byte(0x0D6D) != 0x0B) return false; cpu.execute_instruction<0x2F>(0x000B, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0D6E.
bool execute_audio_unresolved_unk0d6e_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1277 SET7 UNK0013
    case 0x0D6E: if (cpu.read_byte(0x0D6E) != 0xE2 || cpu.read_byte(0x0D6F) != 0x13) return false; cpu.execute_instruction<0xE2>(0x0013, 2); return true;
    // src/spc700/main.spc700.s:1278 MOV A, #$60
    case 0x0D70: if (cpu.read_byte(0x0D70) != 0xE8 || cpu.read_byte(0x0D71) != 0x60) return false; cpu.execute_instruction<0xE8>(0x0060, 2); return true;
    // src/spc700/main.spc700.s:1279 MOV Y, #$03
    case 0x0D72: if (cpu.read_byte(0x0D72) != 0x8D || cpu.read_byte(0x0D73) != 0x03) return false; cpu.execute_instruction<0x8D>(0x0003, 2); return true;
    // src/spc700/main.spc700.s:1280 DEC UNK00A0 + X
    case 0x0D74: if (cpu.read_byte(0x0D74) != 0x9B || cpu.read_byte(0x0D75) != 0xA0) return false; cpu.execute_instruction<0x9B>(0x00A0, 2); return true;
    // src/spc700/main.spc700.s:1281 CALL UNK0CD6
    case 0x0D76: if (cpu.read_byte(0x0D76) != 0x3F || cpu.read_byte(0x0D77) != 0xD6 || cpu.read_byte(0x0D78) != 0x0C) return false; cpu.execute_instruction<0x3F>(0x0CD6, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0D79.
bool execute_audio_unresolved_unk0d79_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1283 CALL UNK0BBC
    case 0x0D79: if (cpu.read_byte(0x0D79) != 0x3F || cpu.read_byte(0x0D7A) != 0xBC || cpu.read_byte(0x0D7B) != 0x0B) return false; cpu.execute_instruction<0x3F>(0x0BBC, 3); return true;
    // src/spc700/main.spc700.s:1284 MOV A, UNK00B1 + X
    case 0x0D7C: if (cpu.read_byte(0x0D7C) != 0xF4 || cpu.read_byte(0x0D7D) != 0xB1) return false; cpu.execute_instruction<0xF4>(0x00B1, 2); return true;
    // src/spc700/main.spc700.s:1285 BEQ UNK0DCC
    case 0x0D7E: if (cpu.read_byte(0x0D7E) != 0xF0 || cpu.read_byte(0x0D7F) != 0x4C) return false; cpu.execute_instruction<0xF0>(0x004C, 2); return true;
    // src/spc700/main.spc700.s:1286 MOV A, UNK02B0 + X
    case 0x0D80: if (cpu.read_byte(0x0D80) != 0xF5 || cpu.read_byte(0x0D81) != 0xB0 || cpu.read_byte(0x0D82) != 0x02) return false; cpu.execute_instruction<0xF5>(0x02B0, 3); return true;
    // src/spc700/main.spc700.s:1287 CBNE $B0 + X, UNK0DCA
    case 0x0D83: if (cpu.read_byte(0x0D83) != 0xDE || cpu.read_byte(0x0D84) != 0xB0 || cpu.read_byte(0x0D85) != 0x44) return false; cpu.execute_instruction<0xDE>(0x44B0, 3); return true;
    // src/spc700/main.spc700.s:1288 MOV A, UNK0100 + X
    case 0x0D86: if (cpu.read_byte(0x0D86) != 0xF5 || cpu.read_byte(0x0D87) != 0x00 || cpu.read_byte(0x0D88) != 0x01) return false; cpu.execute_instruction<0xF5>(0x0100, 3); return true;
    // src/spc700/main.spc700.s:1289 CMP A, UNK02B1 + X
    case 0x0D89: if (cpu.read_byte(0x0D89) != 0x75 || cpu.read_byte(0x0D8A) != 0xB1 || cpu.read_byte(0x0D8B) != 0x02) return false; cpu.execute_instruction<0x75>(0x02B1, 3); return true;
    // src/spc700/main.spc700.s:1290 BNE UNK0D93
    case 0x0D8C: if (cpu.read_byte(0x0D8C) != 0xD0 || cpu.read_byte(0x0D8D) != 0x05) return false; cpu.execute_instruction<0xD0>(0x0005, 2); return true;
    // src/spc700/main.spc700.s:1291 MOV A, UNK02C1 + X
    case 0x0D8E: if (cpu.read_byte(0x0D8E) != 0xF5 || cpu.read_byte(0x0D8F) != 0xC1 || cpu.read_byte(0x0D90) != 0x02) return false; cpu.execute_instruction<0xF5>(0x02C1, 3); return true;
    // src/spc700/main.spc700.s:1292 BRA UNK0DA0
    case 0x0D91: if (cpu.read_byte(0x0D91) != 0x2F || cpu.read_byte(0x0D92) != 0x0D) return false; cpu.execute_instruction<0x2F>(0x000D, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0D93.
bool execute_audio_unresolved_unk0d93_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1294 SETP
    case 0x0D93: if (cpu.read_byte(0x0D93) != 0x40) return false; cpu.execute_instruction<0x40>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1295 INC CPUIO_IN_MIRRORS + X
    case 0x0D94: if (cpu.read_byte(0x0D94) != 0xBB || cpu.read_byte(0x0D95) != 0x00) return false; cpu.execute_instruction<0xBB>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:1296 CLRP
    case 0x0D96: if (cpu.read_byte(0x0D96) != 0x20) return false; cpu.execute_instruction<0x20>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1297 MOV Y, A
    case 0x0D97: if (cpu.read_byte(0x0D97) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1298 BEQ UNK0D9C
    case 0x0D98: if (cpu.read_byte(0x0D98) != 0xF0 || cpu.read_byte(0x0D99) != 0x02) return false; cpu.execute_instruction<0xF0>(0x0002, 2); return true;
    // src/spc700/main.spc700.s:1299 MOV A, UNK00B1 + X
    case 0x0D9A: if (cpu.read_byte(0x0D9A) != 0xF4 || cpu.read_byte(0x0D9B) != 0xB1) return false; cpu.execute_instruction<0xF4>(0x00B1, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0D9C.
bool execute_audio_unresolved_unk0d9c_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1301 CLRC
    case 0x0D9C: if (cpu.read_byte(0x0D9C) != 0x60) return false; cpu.execute_instruction<0x60>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1302 ADC A, UNK02C0 + X
    case 0x0D9D: if (cpu.read_byte(0x0D9D) != 0x95 || cpu.read_byte(0x0D9E) != 0xC0 || cpu.read_byte(0x0D9F) != 0x02) return false; cpu.execute_instruction<0x95>(0x02C0, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0DA0.
bool execute_audio_unresolved_unk0da0_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1304 MOV UNK00B1 + X, A
    case 0x0DA0: if (cpu.read_byte(0x0DA0) != 0xD4 || cpu.read_byte(0x0DA1) != 0xB1) return false; cpu.execute_instruction<0xD4>(0x00B1, 2); return true;
    // src/spc700/main.spc700.s:1305 MOV A, UNK02A0 + X
    case 0x0DA2: if (cpu.read_byte(0x0DA2) != 0xF5 || cpu.read_byte(0x0DA3) != 0xA0 || cpu.read_byte(0x0DA4) != 0x02) return false; cpu.execute_instruction<0xF5>(0x02A0, 3); return true;
    // src/spc700/main.spc700.s:1306 CLRC
    case 0x0DA5: if (cpu.read_byte(0x0DA5) != 0x60) return false; cpu.execute_instruction<0x60>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1307 ADC A, UNK02A1 + X
    case 0x0DA6: if (cpu.read_byte(0x0DA6) != 0x95 || cpu.read_byte(0x0DA7) != 0xA1 || cpu.read_byte(0x0DA8) != 0x02) return false; cpu.execute_instruction<0x95>(0x02A1, 3); return true;
    // src/spc700/main.spc700.s:1308 MOV UNK02A0 + X, A
    case 0x0DA9: if (cpu.read_byte(0x0DA9) != 0xD5 || cpu.read_byte(0x0DAA) != 0xA0 || cpu.read_byte(0x0DAB) != 0x02) return false; cpu.execute_instruction<0xD5>(0x02A0, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0DAC.
bool execute_audio_unresolved_unk0dac_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1310 MOV UNK0012, A
    case 0x0DAC: if (cpu.read_byte(0x0DAC) != 0xC4 || cpu.read_byte(0x0DAD) != 0x12) return false; cpu.execute_instruction<0xC4>(0x0012, 2); return true;
    // src/spc700/main.spc700.s:1311 ASL A
    case 0x0DAE: if (cpu.read_byte(0x0DAE) != 0x1C) return false; cpu.execute_instruction<0x1C>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1312 ASL A
    case 0x0DAF: if (cpu.read_byte(0x0DAF) != 0x1C) return false; cpu.execute_instruction<0x1C>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1313 BCC UNK0DB4
    case 0x0DB0: if (cpu.read_byte(0x0DB0) != 0x90 || cpu.read_byte(0x0DB1) != 0x02) return false; cpu.execute_instruction<0x90>(0x0002, 2); return true;
    // src/spc700/main.spc700.s:1314 EOR A, #$FF
    case 0x0DB2: if (cpu.read_byte(0x0DB2) != 0x48 || cpu.read_byte(0x0DB3) != 0xFF) return false; cpu.execute_instruction<0x48>(0x00FF, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0DB4.
bool execute_audio_unresolved_unk0db4_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1316 MOV Y, A
    case 0x0DB4: if (cpu.read_byte(0x0DB4) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1317 MOV A, UNK00B1 + X
    case 0x0DB5: if (cpu.read_byte(0x0DB5) != 0xF4 || cpu.read_byte(0x0DB6) != 0xB1) return false; cpu.execute_instruction<0xF4>(0x00B1, 2); return true;
    // src/spc700/main.spc700.s:1318 CMP A, #$F1
    case 0x0DB7: if (cpu.read_byte(0x0DB7) != 0x68 || cpu.read_byte(0x0DB8) != 0xF1) return false; cpu.execute_instruction<0x68>(0x00F1, 2); return true;
    // src/spc700/main.spc700.s:1319 BCC UNK0DC0
    case 0x0DB9: if (cpu.read_byte(0x0DB9) != 0x90 || cpu.read_byte(0x0DBA) != 0x05) return false; cpu.execute_instruction<0x90>(0x0005, 2); return true;
    // src/spc700/main.spc700.s:1320 AND A, #$0F
    case 0x0DBB: if (cpu.read_byte(0x0DBB) != 0x28 || cpu.read_byte(0x0DBC) != 0x0F) return false; cpu.execute_instruction<0x28>(0x000F, 2); return true;
    // src/spc700/main.spc700.s:1321 MUL YA
    case 0x0DBD: if (cpu.read_byte(0x0DBD) != 0xCF) return false; cpu.execute_instruction<0xCF>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1322 BRA UNK0DC4
    case 0x0DBE: if (cpu.read_byte(0x0DBE) != 0x2F || cpu.read_byte(0x0DBF) != 0x04) return false; cpu.execute_instruction<0x2F>(0x0004, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0DC0.
bool execute_audio_unresolved_unk0dc0_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1325 MUL YA
    case 0x0DC0: if (cpu.read_byte(0x0DC0) != 0xCF) return false; cpu.execute_instruction<0xCF>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1326 MOV A, Y
    case 0x0DC1: if (cpu.read_byte(0x0DC1) != 0xDD) return false; cpu.execute_instruction<0xDD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1327 MOV Y, #$00
    case 0x0DC2: if (cpu.read_byte(0x0DC2) != 0x8D || cpu.read_byte(0x0DC3) != 0x00) return false; cpu.execute_instruction<0x8D>(0x0000, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0DC4.
bool execute_audio_unresolved_unk0dc4_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1329 CALL UNK0E41
    case 0x0DC4: if (cpu.read_byte(0x0DC4) != 0x3F || cpu.read_byte(0x0DC5) != 0x41 || cpu.read_byte(0x0DC6) != 0x0E) return false; cpu.execute_instruction<0x3F>(0x0E41, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0DC7.
bool execute_audio_unresolved_unk0dc7_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1331 JMP UNK06BE
    case 0x0DC7: if (cpu.read_byte(0x0DC7) != 0x5F || cpu.read_byte(0x0DC8) != 0xBE || cpu.read_byte(0x0DC9) != 0x06) return false; cpu.execute_instruction<0x5F>(0x06BE, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0DCA.
bool execute_audio_unresolved_unk0dca_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1334 INC UNK00B0 + X
    case 0x0DCA: if (cpu.read_byte(0x0DCA) != 0xBB || cpu.read_byte(0x0DCB) != 0xB0) return false; cpu.execute_instruction<0xBB>(0x00B0, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0DCC.
bool execute_audio_unresolved_unk0dcc_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1336 BBS7 $13, UNK0DC7
    case 0x0DCC: if (cpu.read_byte(0x0DCC) != 0xE3 || cpu.read_byte(0x0DCD) != 0x13 || cpu.read_byte(0x0DCE) != 0xF8) return false; cpu.execute_instruction<0xE3>(0xF813, 3); return true;
    // src/spc700/main.spc700.s:1337 RET
    case 0x0DCF: if (cpu.read_byte(0x0DCF) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0DD0.
bool execute_audio_unresolved_unk0dd0_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1340 CLR7 UNK0013
    case 0x0DD0: if (cpu.read_byte(0x0DD0) != 0xF2 || cpu.read_byte(0x0DD1) != 0x13) return false; cpu.execute_instruction<0xF2>(0x0013, 2); return true;
    // src/spc700/main.spc700.s:1341 MOV A, UNK00C1 + X
    case 0x0DD2: if (cpu.read_byte(0x0DD2) != 0xF4 || cpu.read_byte(0x0DD3) != 0xC1) return false; cpu.execute_instruction<0xF4>(0x00C1, 2); return true;
    // src/spc700/main.spc700.s:1342 BEQ UNK0DDF
    case 0x0DD4: if (cpu.read_byte(0x0DD4) != 0xF0 || cpu.read_byte(0x0DD5) != 0x09) return false; cpu.execute_instruction<0xF0>(0x0009, 2); return true;
    // src/spc700/main.spc700.s:1343 MOV A, UNK02E0 + X
    case 0x0DD6: if (cpu.read_byte(0x0DD6) != 0xF5 || cpu.read_byte(0x0DD7) != 0xE0 || cpu.read_byte(0x0DD8) != 0x02) return false; cpu.execute_instruction<0xF5>(0x02E0, 3); return true;
    // src/spc700/main.spc700.s:1344 CBNE $C0 + X, UNK0DDF
    case 0x0DD9: if (cpu.read_byte(0x0DD9) != 0xDE || cpu.read_byte(0x0DDA) != 0xC0 || cpu.read_byte(0x0DDB) != 0x03) return false; cpu.execute_instruction<0xDE>(0x03C0, 3); return true;
    // src/spc700/main.spc700.s:1345 CALL UNK0E49
    case 0x0DDC: if (cpu.read_byte(0x0DDC) != 0x3F || cpu.read_byte(0x0DDD) != 0x49 || cpu.read_byte(0x0DDE) != 0x0E) return false; cpu.execute_instruction<0x3F>(0x0E49, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0DDF.
bool execute_audio_unresolved_unk0ddf_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1347 MOV A, UNK0331 + X
    case 0x0DDF: if (cpu.read_byte(0x0DDF) != 0xF5 || cpu.read_byte(0x0DE0) != 0x31 || cpu.read_byte(0x0DE1) != 0x03) return false; cpu.execute_instruction<0xF5>(0x0331, 3); return true;
    // src/spc700/main.spc700.s:1348 MOV Y, A
    case 0x0DE2: if (cpu.read_byte(0x0DE2) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1349 MOV A, UNK0330 + X
    case 0x0DE3: if (cpu.read_byte(0x0DE3) != 0xF5 || cpu.read_byte(0x0DE4) != 0x30 || cpu.read_byte(0x0DE5) != 0x03) return false; cpu.execute_instruction<0xF5>(0x0330, 3); return true;
    // src/spc700/main.spc700.s:1350 MOVW UNK0010, YA
    case 0x0DE6: if (cpu.read_byte(0x0DE6) != 0xDA || cpu.read_byte(0x0DE7) != 0x10) return false; cpu.execute_instruction<0xDA>(0x0010, 2); return true;
    // src/spc700/main.spc700.s:1351 MOV A, UNK0091 + X
    case 0x0DE8: if (cpu.read_byte(0x0DE8) != 0xF4 || cpu.read_byte(0x0DE9) != 0x91) return false; cpu.execute_instruction<0xF4>(0x0091, 2); return true;
    // src/spc700/main.spc700.s:1352 BEQ UNK0DF6
    case 0x0DEA: if (cpu.read_byte(0x0DEA) != 0xF0 || cpu.read_byte(0x0DEB) != 0x0A) return false; cpu.execute_instruction<0xF0>(0x000A, 2); return true;
    // src/spc700/main.spc700.s:1353 MOV A, UNK0341 + X
    case 0x0DEC: if (cpu.read_byte(0x0DEC) != 0xF5 || cpu.read_byte(0x0DED) != 0x41 || cpu.read_byte(0x0DEE) != 0x03) return false; cpu.execute_instruction<0xF5>(0x0341, 3); return true;
    // src/spc700/main.spc700.s:1354 MOV Y, A
    case 0x0DEF: if (cpu.read_byte(0x0DEF) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1355 MOV A, UNK0340 + X
    case 0x0DF0: if (cpu.read_byte(0x0DF0) != 0xF5 || cpu.read_byte(0x0DF1) != 0x40 || cpu.read_byte(0x0DF2) != 0x03) return false; cpu.execute_instruction<0xF5>(0x0340, 3); return true;
    // src/spc700/main.spc700.s:1356 CALL UNK0E2B
    case 0x0DF3: if (cpu.read_byte(0x0DF3) != 0x3F || cpu.read_byte(0x0DF4) != 0x2B || cpu.read_byte(0x0DF5) != 0x0E) return false; cpu.execute_instruction<0x3F>(0x0E2B, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0DF6.
bool execute_audio_unresolved_unk0df6_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1358 BBC7 $13, UNK0DFC
    case 0x0DF6: if (cpu.read_byte(0x0DF6) != 0xF3 || cpu.read_byte(0x0DF7) != 0x13 || cpu.read_byte(0x0DF8) != 0x03) return false; cpu.execute_instruction<0xF3>(0x0313, 3); return true;
    // src/spc700/main.spc700.s:1359 CALL UNK0C95
    case 0x0DF9: if (cpu.read_byte(0x0DF9) != 0x3F || cpu.read_byte(0x0DFA) != 0x95 || cpu.read_byte(0x0DFB) != 0x0C) return false; cpu.execute_instruction<0x3F>(0x0C95, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0DFC.
bool execute_audio_unresolved_unk0dfc_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1361 CLR7 UNK0013
    case 0x0DFC: if (cpu.read_byte(0x0DFC) != 0xF2 || cpu.read_byte(0x0DFD) != 0x13) return false; cpu.execute_instruction<0xF2>(0x0013, 2); return true;
    // src/spc700/main.spc700.s:1362 CALL UNK0BBC
    case 0x0DFE: if (cpu.read_byte(0x0DFE) != 0x3F || cpu.read_byte(0x0DFF) != 0xBC || cpu.read_byte(0x0E00) != 0x0B) return false; cpu.execute_instruction<0x3F>(0x0BBC, 3); return true;
    // src/spc700/main.spc700.s:1363 MOV A, UNK00A0 + X
    case 0x0E01: if (cpu.read_byte(0x0E01) != 0xF4 || cpu.read_byte(0x0E02) != 0xA0) return false; cpu.execute_instruction<0xF4>(0x00A0, 2); return true;
    // src/spc700/main.spc700.s:1364 BEQ UNK0E13
    case 0x0E03: if (cpu.read_byte(0x0E03) != 0xF0 || cpu.read_byte(0x0E04) != 0x0E) return false; cpu.execute_instruction<0xF0>(0x000E, 2); return true;
    // src/spc700/main.spc700.s:1365 MOV A, UNK00A1 + X
    case 0x0E05: if (cpu.read_byte(0x0E05) != 0xF4 || cpu.read_byte(0x0E06) != 0xA1) return false; cpu.execute_instruction<0xF4>(0x00A1, 2); return true;
    // src/spc700/main.spc700.s:1366 BNE UNK0E13
    case 0x0E07: if (cpu.read_byte(0x0E07) != 0xD0 || cpu.read_byte(0x0E08) != 0x0A) return false; cpu.execute_instruction<0xD0>(0x000A, 2); return true;
    // src/spc700/main.spc700.s:1367 MOV A, UNK0371 + X
    case 0x0E09: if (cpu.read_byte(0x0E09) != 0xF5 || cpu.read_byte(0x0E0A) != 0x71 || cpu.read_byte(0x0E0B) != 0x03) return false; cpu.execute_instruction<0xF5>(0x0371, 3); return true;
    // src/spc700/main.spc700.s:1368 MOV Y, A
    case 0x0E0C: if (cpu.read_byte(0x0E0C) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1369 MOV A, UNK0370 + X
    case 0x0E0D: if (cpu.read_byte(0x0E0D) != 0xF5 || cpu.read_byte(0x0E0E) != 0x70 || cpu.read_byte(0x0E0F) != 0x03) return false; cpu.execute_instruction<0xF5>(0x0370, 3); return true;
    // src/spc700/main.spc700.s:1370 CALL UNK0E2B
    case 0x0E10: if (cpu.read_byte(0x0E10) != 0x3F || cpu.read_byte(0x0E11) != 0x2B || cpu.read_byte(0x0E12) != 0x0E) return false; cpu.execute_instruction<0x3F>(0x0E2B, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0E13.
bool execute_audio_unresolved_unk0e13_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1372 MOV A, UNK00B1 + X
    case 0x0E13: if (cpu.read_byte(0x0E13) != 0xF4 || cpu.read_byte(0x0E14) != 0xB1) return false; cpu.execute_instruction<0xF4>(0x00B1, 2); return true;
    // src/spc700/main.spc700.s:1373 BEQ UNK0DCC
    case 0x0E15: if (cpu.read_byte(0x0E15) != 0xF0 || cpu.read_byte(0x0E16) != 0xB5) return false; cpu.execute_instruction<0xF0>(0x00B5, 2); return true;
    // src/spc700/main.spc700.s:1374 MOV A, UNK02B0 + X
    case 0x0E17: if (cpu.read_byte(0x0E17) != 0xF5 || cpu.read_byte(0x0E18) != 0xB0 || cpu.read_byte(0x0E19) != 0x02) return false; cpu.execute_instruction<0xF5>(0x02B0, 3); return true;
    // src/spc700/main.spc700.s:1375 CBNE $B0 + X, UNK0DCC
    case 0x0E1A: if (cpu.read_byte(0x0E1A) != 0xDE || cpu.read_byte(0x0E1B) != 0xB0 || cpu.read_byte(0x0E1C) != 0xAF) return false; cpu.execute_instruction<0xDE>(0xAFB0, 3); return true;
    // src/spc700/main.spc700.s:1376 MOV Y, UNK0051
    case 0x0E1D: if (cpu.read_byte(0x0E1D) != 0xEB || cpu.read_byte(0x0E1E) != 0x51) return false; cpu.execute_instruction<0xEB>(0x0051, 2); return true;
    // src/spc700/main.spc700.s:1377 MOV A, UNK02A1 + X
    case 0x0E1F: if (cpu.read_byte(0x0E1F) != 0xF5 || cpu.read_byte(0x0E20) != 0xA1 || cpu.read_byte(0x0E21) != 0x02) return false; cpu.execute_instruction<0xF5>(0x02A1, 3); return true;
    // src/spc700/main.spc700.s:1378 MUL YA
    case 0x0E22: if (cpu.read_byte(0x0E22) != 0xCF) return false; cpu.execute_instruction<0xCF>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1379 MOV A, Y
    case 0x0E23: if (cpu.read_byte(0x0E23) != 0xDD) return false; cpu.execute_instruction<0xDD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1380 CLRC
    case 0x0E24: if (cpu.read_byte(0x0E24) != 0x60) return false; cpu.execute_instruction<0x60>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1381 ADC A, UNK02A0 + X
    case 0x0E25: if (cpu.read_byte(0x0E25) != 0x95 || cpu.read_byte(0x0E26) != 0xA0 || cpu.read_byte(0x0E27) != 0x02) return false; cpu.execute_instruction<0x95>(0x02A0, 3); return true;
    // src/spc700/main.spc700.s:1382 JMP UNK0DAC
    case 0x0E28: if (cpu.read_byte(0x0E28) != 0x5F || cpu.read_byte(0x0E29) != 0xAC || cpu.read_byte(0x0E2A) != 0x0D) return false; cpu.execute_instruction<0x5F>(0x0DAC, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0E2B.
bool execute_audio_unresolved_unk0e2b_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1385 SET7 UNK0013
    case 0x0E2B: if (cpu.read_byte(0x0E2B) != 0xE2 || cpu.read_byte(0x0E2C) != 0x13) return false; cpu.execute_instruction<0xE2>(0x0013, 2); return true;
    // src/spc700/main.spc700.s:1386 MOV UNK0012, Y
    case 0x0E2D: if (cpu.read_byte(0x0E2D) != 0xCB || cpu.read_byte(0x0E2E) != 0x12) return false; cpu.execute_instruction<0xCB>(0x0012, 2); return true;
    // src/spc700/main.spc700.s:1387 CALL UNK0BD9
    case 0x0E2F: if (cpu.read_byte(0x0E2F) != 0x3F || cpu.read_byte(0x0E30) != 0xD9 || cpu.read_byte(0x0E31) != 0x0B) return false; cpu.execute_instruction<0x3F>(0x0BD9, 3); return true;
    // src/spc700/main.spc700.s:1388 PUSH Y
    case 0x0E32: if (cpu.read_byte(0x0E32) != 0x6D) return false; cpu.execute_instruction<0x6D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1389 MOV Y, UNK0051
    case 0x0E33: if (cpu.read_byte(0x0E33) != 0xEB || cpu.read_byte(0x0E34) != 0x51) return false; cpu.execute_instruction<0xEB>(0x0051, 2); return true;
    // src/spc700/main.spc700.s:1390 MUL YA
    case 0x0E35: if (cpu.read_byte(0x0E35) != 0xCF) return false; cpu.execute_instruction<0xCF>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1391 MOV UNK0014, Y
    case 0x0E36: if (cpu.read_byte(0x0E36) != 0xCB || cpu.read_byte(0x0E37) != 0x14) return false; cpu.execute_instruction<0xCB>(0x0014, 2); return true;
    // src/spc700/main.spc700.s:1392 MOV UNK0015, #$00
    case 0x0E38: if (cpu.read_byte(0x0E38) != 0x8F || cpu.read_byte(0x0E39) != 0x00 || cpu.read_byte(0x0E3A) != 0x15) return false; cpu.execute_instruction<0x8F>(0x1500, 3); return true;
    // src/spc700/main.spc700.s:1393 MOV Y, UNK0051
    case 0x0E3B: if (cpu.read_byte(0x0E3B) != 0xEB || cpu.read_byte(0x0E3C) != 0x51) return false; cpu.execute_instruction<0xEB>(0x0051, 2); return true;
    // src/spc700/main.spc700.s:1394 POP A
    case 0x0E3D: if (cpu.read_byte(0x0E3D) != 0xAE) return false; cpu.execute_instruction<0xAE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1395 MUL YA
    case 0x0E3E: if (cpu.read_byte(0x0E3E) != 0xCF) return false; cpu.execute_instruction<0xCF>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1396 ADDW YA, UNK0014
    case 0x0E3F: if (cpu.read_byte(0x0E3F) != 0x7A || cpu.read_byte(0x0E40) != 0x14) return false; cpu.execute_instruction<0x7A>(0x0014, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0E41.
bool execute_audio_unresolved_unk0e41_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1398 CALL UNK0BD9
    case 0x0E41: if (cpu.read_byte(0x0E41) != 0x3F || cpu.read_byte(0x0E42) != 0xD9 || cpu.read_byte(0x0E43) != 0x0B) return false; cpu.execute_instruction<0x3F>(0x0BD9, 3); return true;
    // src/spc700/main.spc700.s:1399 ADDW YA, UNK0010
    case 0x0E44: if (cpu.read_byte(0x0E44) != 0x7A || cpu.read_byte(0x0E45) != 0x10) return false; cpu.execute_instruction<0x7A>(0x0010, 2); return true;
    // src/spc700/main.spc700.s:1400 MOVW UNK0010, YA
    case 0x0E46: if (cpu.read_byte(0x0E46) != 0xDA || cpu.read_byte(0x0E47) != 0x10) return false; cpu.execute_instruction<0xDA>(0x0010, 2); return true;
    // src/spc700/main.spc700.s:1401 RET
    case 0x0E48: if (cpu.read_byte(0x0E48) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0E49.
bool execute_audio_unresolved_unk0e49_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1404 SET7 UNK0013
    case 0x0E49: if (cpu.read_byte(0x0E49) != 0xE2 || cpu.read_byte(0x0E4A) != 0x13) return false; cpu.execute_instruction<0xE2>(0x0013, 2); return true;
    // src/spc700/main.spc700.s:1405 MOV Y, UNK0051
    case 0x0E4B: if (cpu.read_byte(0x0E4B) != 0xEB || cpu.read_byte(0x0E4C) != 0x51) return false; cpu.execute_instruction<0xEB>(0x0051, 2); return true;
    // src/spc700/main.spc700.s:1406 MOV A, UNK02D1 + X
    case 0x0E4D: if (cpu.read_byte(0x0E4D) != 0xF5 || cpu.read_byte(0x0E4E) != 0xD1 || cpu.read_byte(0x0E4F) != 0x02) return false; cpu.execute_instruction<0xF5>(0x02D1, 3); return true;
    // src/spc700/main.spc700.s:1407 MUL YA
    case 0x0E50: if (cpu.read_byte(0x0E50) != 0xCF) return false; cpu.execute_instruction<0xCF>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1408 MOV A, Y
    case 0x0E51: if (cpu.read_byte(0x0E51) != 0xDD) return false; cpu.execute_instruction<0xDD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1409 CLRC
    case 0x0E52: if (cpu.read_byte(0x0E52) != 0x60) return false; cpu.execute_instruction<0x60>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1410 ADC A, UNK02D0 + X
    case 0x0E53: if (cpu.read_byte(0x0E53) != 0x95 || cpu.read_byte(0x0E54) != 0xD0 || cpu.read_byte(0x0E55) != 0x02) return false; cpu.execute_instruction<0x95>(0x02D0, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0E56.
bool execute_audio_unresolved_unk0e56_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1412 ASL A
    case 0x0E56: if (cpu.read_byte(0x0E56) != 0x1C) return false; cpu.execute_instruction<0x1C>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1413 BCC UNK0E5B
    case 0x0E57: if (cpu.read_byte(0x0E57) != 0x90 || cpu.read_byte(0x0E58) != 0x02) return false; cpu.execute_instruction<0x90>(0x0002, 2); return true;
    // src/spc700/main.spc700.s:1414 EOR A, #$FF
    case 0x0E59: if (cpu.read_byte(0x0E59) != 0x48 || cpu.read_byte(0x0E5A) != 0xFF) return false; cpu.execute_instruction<0x48>(0x00FF, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0E5B.
bool execute_audio_unresolved_unk0e5b_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1416 MOV Y, UNK00C1 + X
    case 0x0E5B: if (cpu.read_byte(0x0E5B) != 0xFB || cpu.read_byte(0x0E5C) != 0xC1) return false; cpu.execute_instruction<0xFB>(0x00C1, 2); return true;
    // src/spc700/main.spc700.s:1417 MUL YA
    case 0x0E5D: if (cpu.read_byte(0x0E5D) != 0xCF) return false; cpu.execute_instruction<0xCF>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1418 MOV A, Y
    case 0x0E5E: if (cpu.read_byte(0x0E5E) != 0xDD) return false; cpu.execute_instruction<0xDD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1419 EOR A, #$FF
    case 0x0E5F: if (cpu.read_byte(0x0E5F) != 0x48 || cpu.read_byte(0x0E60) != 0xFF) return false; cpu.execute_instruction<0x48>(0x00FF, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0E61.
bool execute_audio_unresolved_unk0e61_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1421 MOV Y, UNK0059
    case 0x0E61: if (cpu.read_byte(0x0E61) != 0xEB || cpu.read_byte(0x0E62) != 0x59) return false; cpu.execute_instruction<0xEB>(0x0059, 2); return true;
    // src/spc700/main.spc700.s:1422 MUL YA
    case 0x0E63: if (cpu.read_byte(0x0E63) != 0xCF) return false; cpu.execute_instruction<0xCF>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1423 MOV A, UNK0210 + X
    case 0x0E64: if (cpu.read_byte(0x0E64) != 0xF5 || cpu.read_byte(0x0E65) != 0x10 || cpu.read_byte(0x0E66) != 0x02) return false; cpu.execute_instruction<0xF5>(0x0210, 3); return true;
    // src/spc700/main.spc700.s:1424 MUL YA
    case 0x0E67: if (cpu.read_byte(0x0E67) != 0xCF) return false; cpu.execute_instruction<0xCF>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1425 MOV A, UNK0301 + X
    case 0x0E68: if (cpu.read_byte(0x0E68) != 0xF5 || cpu.read_byte(0x0E69) != 0x01 || cpu.read_byte(0x0E6A) != 0x03) return false; cpu.execute_instruction<0xF5>(0x0301, 3); return true;
    // src/spc700/main.spc700.s:1426 MUL YA
    case 0x0E6B: if (cpu.read_byte(0x0E6B) != 0xCF) return false; cpu.execute_instruction<0xCF>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1427 MOV A, Y
    case 0x0E6C: if (cpu.read_byte(0x0E6C) != 0xDD) return false; cpu.execute_instruction<0xDD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1428 MUL YA
    case 0x0E6D: if (cpu.read_byte(0x0E6D) != 0xCF) return false; cpu.execute_instruction<0xCF>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1429 MOV A, Y
    case 0x0E6E: if (cpu.read_byte(0x0E6E) != 0xDD) return false; cpu.execute_instruction<0xDD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1430 MOV UNK0321 + X, A
    case 0x0E6F: if (cpu.read_byte(0x0E6F) != 0xD5 || cpu.read_byte(0x0E70) != 0x21 || cpu.read_byte(0x0E71) != 0x03) return false; cpu.execute_instruction<0xD5>(0x0321, 3); return true;
    // src/spc700/main.spc700.s:1431 RET
    case 0x0E72: if (cpu.read_byte(0x0E72) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0EE1.
bool execute_audio_unresolved_unk0ee1_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1482 MOV A, #$AA
    case 0x0EE1: if (cpu.read_byte(0x0EE1) != 0xE8 || cpu.read_byte(0x0EE2) != 0xAA) return false; cpu.execute_instruction<0xE8>(0x00AA, 2); return true;
    // src/spc700/main.spc700.s:1483 MOV.w CPUIO0, A
    case 0x0EE3: if (cpu.read_byte(0x0EE3) != 0xC5 || cpu.read_byte(0x0EE4) != 0xF4 || cpu.read_byte(0x0EE5) != 0x00) return false; cpu.execute_instruction<0xC5>(0x00F4, 3); return true;
    // src/spc700/main.spc700.s:1484 MOV A, #$BB
    case 0x0EE6: if (cpu.read_byte(0x0EE6) != 0xE8 || cpu.read_byte(0x0EE7) != 0xBB) return false; cpu.execute_instruction<0xE8>(0x00BB, 2); return true;
    // src/spc700/main.spc700.s:1485 MOV.w CPUIO1, A
    case 0x0EE8: if (cpu.read_byte(0x0EE8) != 0xC5 || cpu.read_byte(0x0EE9) != 0xF5 || cpu.read_byte(0x0EEA) != 0x00) return false; cpu.execute_instruction<0xC5>(0x00F5, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0EEB.
bool execute_audio_unresolved_unk0eeb_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1487 MOV.w A, CPUIO0
    case 0x0EEB: if (cpu.read_byte(0x0EEB) != 0xE5 || cpu.read_byte(0x0EEC) != 0xF4 || cpu.read_byte(0x0EED) != 0x00) return false; cpu.execute_instruction<0xE5>(0x00F4, 3); return true;
    // src/spc700/main.spc700.s:1488 CMP A, #$CC
    case 0x0EEE: if (cpu.read_byte(0x0EEE) != 0x68 || cpu.read_byte(0x0EEF) != 0xCC) return false; cpu.execute_instruction<0x68>(0x00CC, 2); return true;
    // src/spc700/main.spc700.s:1489 BNE UNK0EEB
    case 0x0EF0: if (cpu.read_byte(0x0EF0) != 0xD0 || cpu.read_byte(0x0EF1) != 0xF9) return false; cpu.execute_instruction<0xD0>(0x00F9, 2); return true;
    // src/spc700/main.spc700.s:1490 BRA UNK0F14
    case 0x0EF2: if (cpu.read_byte(0x0EF2) != 0x2F || cpu.read_byte(0x0EF3) != 0x20) return false; cpu.execute_instruction<0x2F>(0x0020, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0EF4.
bool execute_audio_unresolved_unk0ef4_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1492 MOV.w Y, CPUIO0
    case 0x0EF4: if (cpu.read_byte(0x0EF4) != 0xEC || cpu.read_byte(0x0EF5) != 0xF4 || cpu.read_byte(0x0EF6) != 0x00) return false; cpu.execute_instruction<0xEC>(0x00F4, 3); return true;
    // src/spc700/main.spc700.s:1493 BNE UNK0EF4
    case 0x0EF7: if (cpu.read_byte(0x0EF7) != 0xD0 || cpu.read_byte(0x0EF8) != 0xFB) return false; cpu.execute_instruction<0xD0>(0x00FB, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0EF9.
bool execute_audio_unresolved_unk0ef9_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1495 CMP.w Y, CPUIO0
    case 0x0EF9: if (cpu.read_byte(0x0EF9) != 0x5E || cpu.read_byte(0x0EFA) != 0xF4 || cpu.read_byte(0x0EFB) != 0x00) return false; cpu.execute_instruction<0x5E>(0x00F4, 3); return true;
    // src/spc700/main.spc700.s:1496 BNE UNK0F0D
    case 0x0EFC: if (cpu.read_byte(0x0EFC) != 0xD0 || cpu.read_byte(0x0EFD) != 0x0F) return false; cpu.execute_instruction<0xD0>(0x000F, 2); return true;
    // src/spc700/main.spc700.s:1497 MOV.w A, CPUIO1
    case 0x0EFE: if (cpu.read_byte(0x0EFE) != 0xE5 || cpu.read_byte(0x0EFF) != 0xF5 || cpu.read_byte(0x0F00) != 0x00) return false; cpu.execute_instruction<0xE5>(0x00F5, 3); return true;
    // src/spc700/main.spc700.s:1498 MOV.w CPUIO0, Y
    case 0x0F01: if (cpu.read_byte(0x0F01) != 0xCC || cpu.read_byte(0x0F02) != 0xF4 || cpu.read_byte(0x0F03) != 0x00) return false; cpu.execute_instruction<0xCC>(0x00F4, 3); return true;
    // src/spc700/main.spc700.s:1499 MOV (UNK0014) + Y, A
    case 0x0F04: if (cpu.read_byte(0x0F04) != 0xD7 || cpu.read_byte(0x0F05) != 0x14) return false; cpu.execute_instruction<0xD7>(0x0014, 2); return true;
    // src/spc700/main.spc700.s:1500 INC Y
    case 0x0F06: if (cpu.read_byte(0x0F06) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1501 BNE UNK0EF9
    case 0x0F07: if (cpu.read_byte(0x0F07) != 0xD0 || cpu.read_byte(0x0F08) != 0xF0) return false; cpu.execute_instruction<0xD0>(0x00F0, 2); return true;
    // src/spc700/main.spc700.s:1502 INC UNK0015
    case 0x0F09: if (cpu.read_byte(0x0F09) != 0xAB || cpu.read_byte(0x0F0A) != 0x15) return false; cpu.execute_instruction<0xAB>(0x0015, 2); return true;
    // src/spc700/main.spc700.s:1503 BRA UNK0EF9
    case 0x0F0B: if (cpu.read_byte(0x0F0B) != 0x2F || cpu.read_byte(0x0F0C) != 0xEC) return false; cpu.execute_instruction<0x2F>(0x00EC, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0F0D.
bool execute_audio_unresolved_unk0f0d_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1505 BPL UNK0EF9
    case 0x0F0D: if (cpu.read_byte(0x0F0D) != 0x10 || cpu.read_byte(0x0F0E) != 0xEA) return false; cpu.execute_instruction<0x10>(0x00EA, 2); return true;
    // src/spc700/main.spc700.s:1506 CMP.w Y, CPUIO0
    case 0x0F0F: if (cpu.read_byte(0x0F0F) != 0x5E || cpu.read_byte(0x0F10) != 0xF4 || cpu.read_byte(0x0F11) != 0x00) return false; cpu.execute_instruction<0x5E>(0x00F4, 3); return true;
    // src/spc700/main.spc700.s:1507 BPL UNK0EF9
    case 0x0F12: if (cpu.read_byte(0x0F12) != 0x10 || cpu.read_byte(0x0F13) != 0xE5) return false; cpu.execute_instruction<0x10>(0x00E5, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0F14.
bool execute_audio_unresolved_unk0f14_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1509 MOV.w A, CPUIO2
    case 0x0F14: if (cpu.read_byte(0x0F14) != 0xE5 || cpu.read_byte(0x0F15) != 0xF6 || cpu.read_byte(0x0F16) != 0x00) return false; cpu.execute_instruction<0xE5>(0x00F6, 3); return true;
    // src/spc700/main.spc700.s:1510 MOV.w Y, CPUIO3
    case 0x0F17: if (cpu.read_byte(0x0F17) != 0xEC || cpu.read_byte(0x0F18) != 0xF7 || cpu.read_byte(0x0F19) != 0x00) return false; cpu.execute_instruction<0xEC>(0x00F7, 3); return true;
    // src/spc700/main.spc700.s:1511 MOVW UNK0014, YA
    case 0x0F1A: if (cpu.read_byte(0x0F1A) != 0xDA || cpu.read_byte(0x0F1B) != 0x14) return false; cpu.execute_instruction<0xDA>(0x0014, 2); return true;
    // src/spc700/main.spc700.s:1512 MOV.w Y, CPUIO0
    case 0x0F1C: if (cpu.read_byte(0x0F1C) != 0xEC || cpu.read_byte(0x0F1D) != 0xF4 || cpu.read_byte(0x0F1E) != 0x00) return false; cpu.execute_instruction<0xEC>(0x00F4, 3); return true;
    // src/spc700/main.spc700.s:1513 MOV.w A, CPUIO1
    case 0x0F1F: if (cpu.read_byte(0x0F1F) != 0xE5 || cpu.read_byte(0x0F20) != 0xF5 || cpu.read_byte(0x0F21) != 0x00) return false; cpu.execute_instruction<0xE5>(0x00F5, 3); return true;
    // src/spc700/main.spc700.s:1514 MOV.w CPUIO0, Y
    case 0x0F22: if (cpu.read_byte(0x0F22) != 0xCC || cpu.read_byte(0x0F23) != 0xF4 || cpu.read_byte(0x0F24) != 0x00) return false; cpu.execute_instruction<0xCC>(0x00F4, 3); return true;
    // src/spc700/main.spc700.s:1515 BNE UNK0EF4
    case 0x0F25: if (cpu.read_byte(0x0F25) != 0xD0 || cpu.read_byte(0x0F26) != 0xCD) return false; cpu.execute_instruction<0xD0>(0x00CD, 2); return true;
    // src/spc700/main.spc700.s:1516 MOV X, #$31
    case 0x0F27: if (cpu.read_byte(0x0F27) != 0xCD || cpu.read_byte(0x0F28) != 0x31) return false; cpu.execute_instruction<0xCD>(0x0031, 2); return true;
    // src/spc700/main.spc700.s:1517 MOV.w CONTROL, X
    case 0x0F29: if (cpu.read_byte(0x0F29) != 0xC9 || cpu.read_byte(0x0F2A) != 0xF1 || cpu.read_byte(0x0F2B) != 0x00) return false; cpu.execute_instruction<0xC9>(0x00F1, 3); return true;
    // src/spc700/main.spc700.s:1518 RET
    case 0x0F2C: if (cpu.read_byte(0x0F2C) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1520 MOVW UNK0020, YA
    case 0x0F2D: if (cpu.read_byte(0x0F2D) != 0xDA || cpu.read_byte(0x0F2E) != 0x20) return false; cpu.execute_instruction<0xDA>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1521 MOV Y, #$00
    case 0x0F2F: if (cpu.read_byte(0x0F2F) != 0x8D || cpu.read_byte(0x0F30) != 0x00) return false; cpu.execute_instruction<0x8D>(0x0000, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0F31.
bool execute_audio_unresolved_unk0f31_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1523 MOV A, (UNK0020) + Y
    case 0x0F31: if (cpu.read_byte(0x0F31) != 0xF7 || cpu.read_byte(0x0F32) != 0x20) return false; cpu.execute_instruction<0xF7>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1524 MOV UNK04D8 + Y, A
    case 0x0F33: if (cpu.read_byte(0x0F33) != 0xD6 || cpu.read_byte(0x0F34) != 0xD8 || cpu.read_byte(0x0F35) != 0x04) return false; cpu.execute_instruction<0xD6>(0x04D8, 3); return true;
    // src/spc700/main.spc700.s:1525 INC Y
    case 0x0F36: if (cpu.read_byte(0x0F36) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1526 CMP Y, #$07
    case 0x0F37: if (cpu.read_byte(0x0F37) != 0xAD || cpu.read_byte(0x0F38) != 0x07) return false; cpu.execute_instruction<0xAD>(0x0007, 2); return true;
    // src/spc700/main.spc700.s:1527 BNE UNK0F31
    case 0x0F39: if (cpu.read_byte(0x0F39) != 0xD0 || cpu.read_byte(0x0F3A) != 0xF6) return false; cpu.execute_instruction<0xD0>(0x00F6, 2); return true;
    // src/spc700/main.spc700.s:1528 RET
    case 0x0F3B: if (cpu.read_byte(0x0F3B) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0F3C.
bool execute_audio_unresolved_unk0f3c_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1531 MOVW UNK0020, YA
    case 0x0F3C: if (cpu.read_byte(0x0F3C) != 0xDA || cpu.read_byte(0x0F3D) != 0x20) return false; cpu.execute_instruction<0xDA>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1532 MOV Y, #$00
    case 0x0F3E: if (cpu.read_byte(0x0F3E) != 0x8D || cpu.read_byte(0x0F3F) != 0x00) return false; cpu.execute_instruction<0x8D>(0x0000, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK0F40.
bool execute_audio_unresolved_unk0f40_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1534 MOV A, (UNK0020) + Y
    case 0x0F40: if (cpu.read_byte(0x0F40) != 0xF7 || cpu.read_byte(0x0F41) != 0x20) return false; cpu.execute_instruction<0xF7>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1535 MOV UNK04DA + Y, A
    case 0x0F42: if (cpu.read_byte(0x0F42) != 0xD6 || cpu.read_byte(0x0F43) != 0xDA || cpu.read_byte(0x0F44) != 0x04) return false; cpu.execute_instruction<0xD6>(0x04DA, 3); return true;
    // src/spc700/main.spc700.s:1536 INC Y
    case 0x0F45: if (cpu.read_byte(0x0F45) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1537 CMP Y, #$03
    case 0x0F46: if (cpu.read_byte(0x0F46) != 0xAD || cpu.read_byte(0x0F47) != 0x03) return false; cpu.execute_instruction<0xAD>(0x0003, 2); return true;
    // src/spc700/main.spc700.s:1538 BNE UNK0F40
    case 0x0F48: if (cpu.read_byte(0x0F48) != 0xD0 || cpu.read_byte(0x0F49) != 0xF6) return false; cpu.execute_instruction<0xD0>(0x00F6, 2); return true;
    // src/spc700/main.spc700.s:1539 RET
    case 0x0F4A: if (cpu.read_byte(0x0F4A) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0F4B.
bool execute_audio_unresolved_unk0f4b_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1542 CALL UNK0F56
    case 0x0F4B: if (cpu.read_byte(0x0F4B) != 0x3F || cpu.read_byte(0x0F4C) != 0x56 || cpu.read_byte(0x0F4D) != 0x0F) return false; cpu.execute_instruction<0x3F>(0x0F56, 3); return true;
    // src/spc700/main.spc700.s:1543 MOV X, UNK002E
    case 0x0F4E: if (cpu.read_byte(0x0F4E) != 0xF8 || cpu.read_byte(0x0F4F) != 0x2E) return false; cpu.execute_instruction<0xF8>(0x002E, 2); return true;
    // src/spc700/main.spc700.s:1544 MOV A, #$01
    case 0x0F50: if (cpu.read_byte(0x0F50) != 0xE8 || cpu.read_byte(0x0F51) != 0x01) return false; cpu.execute_instruction<0xE8>(0x0001, 2); return true;
    // src/spc700/main.spc700.s:1545 CALL UNK1394
    case 0x0F52: if (cpu.read_byte(0x0F52) != 0x3F || cpu.read_byte(0x0F53) != 0x94 || cpu.read_byte(0x0F54) != 0x13) return false; cpu.execute_instruction<0x3F>(0x1394, 3); return true;
    // src/spc700/main.spc700.s:1546 RET
    case 0x0F55: if (cpu.read_byte(0x0F55) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0F56.
bool execute_audio_unresolved_unk0f56_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1549 CALL UNK0F3C
    case 0x0F56: if (cpu.read_byte(0x0F56) != 0x3F || cpu.read_byte(0x0F57) != 0x3C || cpu.read_byte(0x0F58) != 0x0F) return false; cpu.execute_instruction<0x3F>(0x0F3C, 3); return true;
    // src/spc700/main.spc700.s:1550 MOV A, (UNK0020) + Y
    case 0x0F59: if (cpu.read_byte(0x0F59) != 0xF7 || cpu.read_byte(0x0F5A) != 0x20) return false; cpu.execute_instruction<0xF7>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1551 MOV UNK04DE, A
    case 0x0F5B: if (cpu.read_byte(0x0F5B) != 0xC5 || cpu.read_byte(0x0F5C) != 0xDE || cpu.read_byte(0x0F5D) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04DE, 3); return true;
    // src/spc700/main.spc700.s:1552 MOV X, UNK002F
    case 0x0F5E: if (cpu.read_byte(0x0F5E) != 0xF8 || cpu.read_byte(0x0F5F) != 0x2F) return false; cpu.execute_instruction<0xF8>(0x002F, 2); return true;
    // src/spc700/main.spc700.s:1553 MOV A, UNK0020
    case 0x0F60: if (cpu.read_byte(0x0F60) != 0xE4 || cpu.read_byte(0x0F61) != 0x20) return false; cpu.execute_instruction<0xE4>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1554 MOV UNK0480 + X, A
    case 0x0F62: if (cpu.read_byte(0x0F62) != 0xD5 || cpu.read_byte(0x0F63) != 0x80 || cpu.read_byte(0x0F64) != 0x04) return false; cpu.execute_instruction<0xD5>(0x0480, 3); return true;
    // src/spc700/main.spc700.s:1555 MOV A, UNK0021
    case 0x0F65: if (cpu.read_byte(0x0F65) != 0xE4 || cpu.read_byte(0x0F66) != 0x21) return false; cpu.execute_instruction<0xE4>(0x0021, 2); return true;
    // src/spc700/main.spc700.s:1556 INC X
    case 0x0F67: if (cpu.read_byte(0x0F67) != 0x3D) return false; cpu.execute_instruction<0x3D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1557 MOV UNK0480 + X, A
    case 0x0F68: if (cpu.read_byte(0x0F68) != 0xD5 || cpu.read_byte(0x0F69) != 0x80 || cpu.read_byte(0x0F6A) != 0x04) return false; cpu.execute_instruction<0xD5>(0x0480, 3); return true;
    // src/spc700/main.spc700.s:1558 MOV X, UNK002E
    case 0x0F6B: if (cpu.read_byte(0x0F6B) != 0xF8 || cpu.read_byte(0x0F6C) != 0x2E) return false; cpu.execute_instruction<0xF8>(0x002E, 2); return true;
    // src/spc700/main.spc700.s:1559 MOV A, #$00
    case 0x0F6D: if (cpu.read_byte(0x0F6D) != 0xE8 || cpu.read_byte(0x0F6E) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:1560 MOV UNK04C8 + X, A
    case 0x0F6F: if (cpu.read_byte(0x0F6F) != 0xD5 || cpu.read_byte(0x0F70) != 0xC8 || cpu.read_byte(0x0F71) != 0x04) return false; cpu.execute_instruction<0xD5>(0x04C8, 3); return true;
    // src/spc700/main.spc700.s:1561 MOV Y, #$04
    case 0x0F72: if (cpu.read_byte(0x0F72) != 0x8D || cpu.read_byte(0x0F73) != 0x04) return false; cpu.execute_instruction<0x8D>(0x0004, 2); return true;
    // src/spc700/main.spc700.s:1562 MOV A, (UNK0020) + Y
    case 0x0F74: if (cpu.read_byte(0x0F74) != 0xF7 || cpu.read_byte(0x0F75) != 0x20) return false; cpu.execute_instruction<0xF7>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1563 MOV UNK0022, A
    case 0x0F76: if (cpu.read_byte(0x0F76) != 0xC4 || cpu.read_byte(0x0F77) != 0x22) return false; cpu.execute_instruction<0xC4>(0x0022, 2); return true;
    // src/spc700/main.spc700.s:1564 INC Y
    case 0x0F78: if (cpu.read_byte(0x0F78) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1565 MOV A, (UNK0020) + Y
    case 0x0F79: if (cpu.read_byte(0x0F79) != 0xF7 || cpu.read_byte(0x0F7A) != 0x20) return false; cpu.execute_instruction<0xF7>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1566 MOV UNK04DD, A
    case 0x0F7B: if (cpu.read_byte(0x0F7B) != 0xC5 || cpu.read_byte(0x0F7C) != 0xDD || cpu.read_byte(0x0F7D) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04DD, 3); return true;
    // src/spc700/main.spc700.s:1567 CMP A, #$C9
    case 0x0F7E: if (cpu.read_byte(0x0F7E) != 0x68 || cpu.read_byte(0x0F7F) != 0xC9) return false; cpu.execute_instruction<0x68>(0x00C9, 2); return true;
    // src/spc700/main.spc700.s:1568 BNE UNK0F85
    case 0x0F80: if (cpu.read_byte(0x0F80) != 0xD0 || cpu.read_byte(0x0F81) != 0x03) return false; cpu.execute_instruction<0xD0>(0x0003, 2); return true;
    // src/spc700/main.spc700.s:1569 MOV UNK04C8 + X, A
    case 0x0F82: if (cpu.read_byte(0x0F82) != 0xD5 || cpu.read_byte(0x0F83) != 0xC8 || cpu.read_byte(0x0F84) != 0x04) return false; cpu.execute_instruction<0xD5>(0x04C8, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0F85.
bool execute_audio_unresolved_unk0f85_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1571 CALL UNK0FA1
    case 0x0F85: if (cpu.read_byte(0x0F85) != 0x3F || cpu.read_byte(0x0F86) != 0xA1 || cpu.read_byte(0x0F87) != 0x0F) return false; cpu.execute_instruction<0x3F>(0x0FA1, 3); return true;
    // src/spc700/main.spc700.s:1572 MOV A, #$D8
    case 0x0F88: if (cpu.read_byte(0x0F88) != 0xE8 || cpu.read_byte(0x0F89) != 0xD8) return false; cpu.execute_instruction<0xE8>(0x00D8, 2); return true;
    // src/spc700/main.spc700.s:1573 MOV Y, #$04
    case 0x0F8A: if (cpu.read_byte(0x0F8A) != 0x8D || cpu.read_byte(0x0F8B) != 0x04) return false; cpu.execute_instruction<0x8D>(0x0004, 2); return true;
    // src/spc700/main.spc700.s:1574 JMP UNK14FC
    case 0x0F8C: if (cpu.read_byte(0x0F8C) != 0x5F || cpu.read_byte(0x0F8D) != 0xFC || cpu.read_byte(0x0F8E) != 0x14) return false; cpu.execute_instruction<0x5F>(0x14FC, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0F8F.
bool execute_audio_unresolved_unk0f8f_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1577 MOV A, KOF_MIRROR
    case 0x0F8F: if (cpu.read_byte(0x0F8F) != 0xE4 || cpu.read_byte(0x0F90) != 0x46) return false; cpu.execute_instruction<0xE4>(0x0046, 2); return true;
    // src/spc700/main.spc700.s:1578 OR A, UNK04D7
    case 0x0F91: if (cpu.read_byte(0x0F91) != 0x05 || cpu.read_byte(0x0F92) != 0xD7 || cpu.read_byte(0x0F93) != 0x04) return false; cpu.execute_instruction<0x05>(0x04D7, 3); return true;
    // src/spc700/main.spc700.s:1579 MOV KOF_MIRROR, A
    case 0x0F94: if (cpu.read_byte(0x0F94) != 0xC4 || cpu.read_byte(0x0F95) != 0x46) return false; cpu.execute_instruction<0xC4>(0x0046, 2); return true;
    // src/spc700/main.spc700.s:1580 MOV A, #$04
    case 0x0F96: if (cpu.read_byte(0x0F96) != 0xE8 || cpu.read_byte(0x0F97) != 0x04) return false; cpu.execute_instruction<0xE8>(0x0004, 2); return true;
    // src/spc700/main.spc700.s:1581 MOV UNK04D8, A
    case 0x0F98: if (cpu.read_byte(0x0F98) != 0xC5 || cpu.read_byte(0x0F99) != 0xD8 || cpu.read_byte(0x0F9A) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04D8, 3); return true;
    // src/spc700/main.spc700.s:1582 MOV A, #$02
    case 0x0F9B: if (cpu.read_byte(0x0F9B) != 0xE8 || cpu.read_byte(0x0F9C) != 0x02) return false; cpu.execute_instruction<0xE8>(0x0002, 2); return true;
    // src/spc700/main.spc700.s:1583 MOV UNK04D9, A
    case 0x0F9D: if (cpu.read_byte(0x0F9D) != 0xC5 || cpu.read_byte(0x0F9E) != 0xD9 || cpu.read_byte(0x0F9F) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04D9, 3); return true;
    // src/spc700/main.spc700.s:1584 RET
    case 0x0FA0: if (cpu.read_byte(0x0FA0) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0FA1.
bool execute_audio_unresolved_unk0fa1_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1587 MOV A, UNK0022
    case 0x0FA1: if (cpu.read_byte(0x0FA1) != 0xE4 || cpu.read_byte(0x0FA2) != 0x22) return false; cpu.execute_instruction<0xE4>(0x0022, 2); return true;
    // src/spc700/main.spc700.s:1588 CMP A, #$7F
    case 0x0FA3: if (cpu.read_byte(0x0FA3) != 0x68 || cpu.read_byte(0x0FA4) != 0x7F) return false; cpu.execute_instruction<0x68>(0x007F, 2); return true;
    // src/spc700/main.spc700.s:1589 BEQ UNK0F8F
    case 0x0FA5: if (cpu.read_byte(0x0FA5) != 0xF0 || cpu.read_byte(0x0FA6) != 0xE8) return false; cpu.execute_instruction<0xF0>(0x00E8, 2); return true;
    // src/spc700/main.spc700.s:1590 DEC A
    case 0x0FA7: if (cpu.read_byte(0x0FA7) != 0x9C) return false; cpu.execute_instruction<0x9C>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1591 MOV Y, A
    case 0x0FA8: if (cpu.read_byte(0x0FA8) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1592 MOV A, UNK1068 + Y
    case 0x0FA9: if (cpu.read_byte(0x0FA9) != 0xF6 || cpu.read_byte(0x0FAA) != 0x68 || cpu.read_byte(0x0FAB) != 0x10) return false; cpu.execute_instruction<0xF6>(0x1068, 3); return true;
    // src/spc700/main.spc700.s:1593 MOV UNK04D8, A
    case 0x0FAC: if (cpu.read_byte(0x0FAC) != 0xC5 || cpu.read_byte(0x0FAD) != 0xD8 || cpu.read_byte(0x0FAE) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04D8, 3); return true;
    // src/spc700/main.spc700.s:1594 INC Y
    case 0x0FAF: if (cpu.read_byte(0x0FAF) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1595 MOV A, UNK1068 + Y
    case 0x0FB0: if (cpu.read_byte(0x0FB0) != 0xF6 || cpu.read_byte(0x0FB1) != 0x68 || cpu.read_byte(0x0FB2) != 0x10) return false; cpu.execute_instruction<0xF6>(0x1068, 3); return true;
    // src/spc700/main.spc700.s:1596 MOV UNK04D9, A
    case 0x0FB3: if (cpu.read_byte(0x0FB3) != 0xC5 || cpu.read_byte(0x0FB4) != 0xD9 || cpu.read_byte(0x0FB5) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04D9, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0FB6.
bool execute_audio_unresolved_unk0fb6_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1598 RET
    case 0x0FB6: if (cpu.read_byte(0x0FB6) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK0FB7.
bool execute_audio_unresolved_unk0fb7_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1601 CALL UNK13A0
    case 0x0FB7: if (cpu.read_byte(0x0FB7) != 0x3F || cpu.read_byte(0x0FB8) != 0xA0 || cpu.read_byte(0x0FB9) != 0x13) return false; cpu.execute_instruction<0x3F>(0x13A0, 3); return true;
    // src/spc700/main.spc700.s:1602 BNE UNK0FB6
    case 0x0FBA: if (cpu.read_byte(0x0FBA) != 0xD0 || cpu.read_byte(0x0FBB) != 0xFA) return false; cpu.execute_instruction<0xD0>(0x00FA, 2); return true;
    // src/spc700/main.spc700.s:1603 MOV A, UNK002A
    case 0x0FBC: if (cpu.read_byte(0x0FBC) != 0xE4 || cpu.read_byte(0x0FBD) != 0x2A) return false; cpu.execute_instruction<0xE4>(0x002A, 2); return true;
    // src/spc700/main.spc700.s:1604 INC A
    case 0x0FBE: if (cpu.read_byte(0x0FBE) != 0xBC) return false; cpu.execute_instruction<0xBC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1605 INC A
    case 0x0FBF: if (cpu.read_byte(0x0FBF) != 0xBC) return false; cpu.execute_instruction<0xBC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1606 MOV Y, UNK002B
    case 0x0FC0: if (cpu.read_byte(0x0FC0) != 0xEB || cpu.read_byte(0x0FC1) != 0x2B) return false; cpu.execute_instruction<0xEB>(0x002B, 2); return true;
    // src/spc700/main.spc700.s:1607 CALL UNK0F3C
    case 0x0FC2: if (cpu.read_byte(0x0FC2) != 0x3F || cpu.read_byte(0x0FC3) != 0x3C || cpu.read_byte(0x0FC4) != 0x0F) return false; cpu.execute_instruction<0x3F>(0x0F3C, 3); return true;
    // src/spc700/main.spc700.s:1608 INC Y
    case 0x0FC5: if (cpu.read_byte(0x0FC5) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1609 MOV A, (UNK0020) + Y
    case 0x0FC6: if (cpu.read_byte(0x0FC6) != 0xF7 || cpu.read_byte(0x0FC7) != 0x20) return false; cpu.execute_instruction<0xF7>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1610 MOV UNK04DE, A
    case 0x0FC8: if (cpu.read_byte(0x0FC8) != 0xC5 || cpu.read_byte(0x0FC9) != 0xDE || cpu.read_byte(0x0FCA) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04DE, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK0FCB.
bool execute_audio_unresolved_unk0fcb_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1612 MOV A, UNK00D0 + X
    case 0x0FCB: if (cpu.read_byte(0x0FCB) != 0xF4 || cpu.read_byte(0x0FCC) != 0xD0) return false; cpu.execute_instruction<0xF4>(0x00D0, 2); return true;
    // src/spc700/main.spc700.s:1613 CLRC
    case 0x0FCD: if (cpu.read_byte(0x0FCD) != 0x60) return false; cpu.execute_instruction<0x60>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1614 ADC A, #$06
    case 0x0FCE: if (cpu.read_byte(0x0FCE) != 0x88 || cpu.read_byte(0x0FCF) != 0x06) return false; cpu.execute_instruction<0x88>(0x0006, 2); return true;
    // src/spc700/main.spc700.s:1615 MOV Y, A
    case 0x0FD0: if (cpu.read_byte(0x0FD0) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1616 INC UNK00D0 + X
    case 0x0FD1: if (cpu.read_byte(0x0FD1) != 0xBB || cpu.read_byte(0x0FD2) != 0xD0) return false; cpu.execute_instruction<0xBB>(0x00D0, 2); return true;
    // src/spc700/main.spc700.s:1617 MOV X, UNK002F
    case 0x0FD3: if (cpu.read_byte(0x0FD3) != 0xF8 || cpu.read_byte(0x0FD4) != 0x2F) return false; cpu.execute_instruction<0xF8>(0x002F, 2); return true;
    // src/spc700/main.spc700.s:1618 MOV A, UNK0480 + X
    case 0x0FD5: if (cpu.read_byte(0x0FD5) != 0xF5 || cpu.read_byte(0x0FD6) != 0x80 || cpu.read_byte(0x0FD7) != 0x04) return false; cpu.execute_instruction<0xF5>(0x0480, 3); return true;
    // src/spc700/main.spc700.s:1619 MOV UNK0020, A
    case 0x0FD8: if (cpu.read_byte(0x0FD8) != 0xC4 || cpu.read_byte(0x0FD9) != 0x20) return false; cpu.execute_instruction<0xC4>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1620 INC X
    case 0x0FDA: if (cpu.read_byte(0x0FDA) != 0x3D) return false; cpu.execute_instruction<0x3D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1621 MOV A, UNK0480 + X
    case 0x0FDB: if (cpu.read_byte(0x0FDB) != 0xF5 || cpu.read_byte(0x0FDC) != 0x80 || cpu.read_byte(0x0FDD) != 0x04) return false; cpu.execute_instruction<0xF5>(0x0480, 3); return true;
    // src/spc700/main.spc700.s:1622 MOV UNK0021, A
    case 0x0FDE: if (cpu.read_byte(0x0FDE) != 0xC4 || cpu.read_byte(0x0FDF) != 0x21) return false; cpu.execute_instruction<0xC4>(0x0021, 2); return true;
    // src/spc700/main.spc700.s:1623 MOV A, (UNK0020) + Y
    case 0x0FE0: if (cpu.read_byte(0x0FE0) != 0xF7 || cpu.read_byte(0x0FE1) != 0x20) return false; cpu.execute_instruction<0xF7>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1624 MOV UNK0022, A
    case 0x0FE2: if (cpu.read_byte(0x0FE2) != 0xC4 || cpu.read_byte(0x0FE3) != 0x22) return false; cpu.execute_instruction<0xC4>(0x0022, 2); return true;
    // src/spc700/main.spc700.s:1625 BEQ UNK100B
    case 0x0FE4: if (cpu.read_byte(0x0FE4) != 0xF0 || cpu.read_byte(0x0FE5) != 0x25) return false; cpu.execute_instruction<0xF0>(0x0025, 2); return true;
    // src/spc700/main.spc700.s:1626 MOV X, UNK002E
    case 0x0FE6: if (cpu.read_byte(0x0FE6) != 0xF8 || cpu.read_byte(0x0FE7) != 0x2E) return false; cpu.execute_instruction<0xF8>(0x002E, 2); return true;
    // src/spc700/main.spc700.s:1627 AND A, #$80
    case 0x0FE8: if (cpu.read_byte(0x0FE8) != 0x28 || cpu.read_byte(0x0FE9) != 0x80) return false; cpu.execute_instruction<0x28>(0x0080, 2); return true;
    // src/spc700/main.spc700.s:1628 BEQ UNK100E
    case 0x0FEA: if (cpu.read_byte(0x0FEA) != 0xF0 || cpu.read_byte(0x0FEB) != 0x22) return false; cpu.execute_instruction<0xF0>(0x0022, 2); return true;
    // src/spc700/main.spc700.s:1629 MOV A, UNK0022
    case 0x0FEC: if (cpu.read_byte(0x0FEC) != 0xE4 || cpu.read_byte(0x0FED) != 0x22) return false; cpu.execute_instruction<0xE4>(0x0022, 2); return true;
    // src/spc700/main.spc700.s:1630 CMP A, #$E0
    case 0x0FEE: if (cpu.read_byte(0x0FEE) != 0x68 || cpu.read_byte(0x0FEF) != 0xE0) return false; cpu.execute_instruction<0x68>(0x00E0, 2); return true;
    // src/spc700/main.spc700.s:1631 BEQ UNK1020
    case 0x0FF0: if (cpu.read_byte(0x0FF0) != 0xF0 || cpu.read_byte(0x0FF1) != 0x2E) return false; cpu.execute_instruction<0xF0>(0x002E, 2); return true;
    // src/spc700/main.spc700.s:1632 CMP A, #$C9
    case 0x0FF2: if (cpu.read_byte(0x0FF2) != 0x68 || cpu.read_byte(0x0FF3) != 0xC9) return false; cpu.execute_instruction<0x68>(0x00C9, 2); return true;
    // src/spc700/main.spc700.s:1633 BEQ UNK1064
    case 0x0FF4: if (cpu.read_byte(0x0FF4) != 0xF0 || cpu.read_byte(0x0FF5) != 0x6E) return false; cpu.execute_instruction<0xF0>(0x006E, 2); return true;
    // src/spc700/main.spc700.s:1634 CMP A, #$E1
    case 0x0FF6: if (cpu.read_byte(0x0FF6) != 0x68 || cpu.read_byte(0x0FF7) != 0xE1) return false; cpu.execute_instruction<0x68>(0x00E1, 2); return true;
    // src/spc700/main.spc700.s:1635 BEQ UNK102C
    case 0x0FF8: if (cpu.read_byte(0x0FF8) != 0xF0 || cpu.read_byte(0x0FF9) != 0x32) return false; cpu.execute_instruction<0xF0>(0x0032, 2); return true;
    // src/spc700/main.spc700.s:1636 CMP A, #$ED
    case 0x0FFA: if (cpu.read_byte(0x0FFA) != 0x68 || cpu.read_byte(0x0FFB) != 0xED) return false; cpu.execute_instruction<0x68>(0x00ED, 2); return true;
    // src/spc700/main.spc700.s:1637 BEQ UNK1058
    case 0x0FFC: if (cpu.read_byte(0x0FFC) != 0xF0 || cpu.read_byte(0x0FFD) != 0x5A) return false; cpu.execute_instruction<0xF0>(0x005A, 2); return true;
    // src/spc700/main.spc700.s:1638 MOV Y, UNK0022
    case 0x0FFE: if (cpu.read_byte(0x0FFE) != 0xEB || cpu.read_byte(0x0FFF) != 0x22) return false; cpu.execute_instruction<0xEB>(0x0022, 2); return true;
    // src/spc700/main.spc700.s:1639 MOV A, #$00
    case 0x1000: if (cpu.read_byte(0x1000) != 0xE8 || cpu.read_byte(0x1001) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:1640 MOV UNK04C8 + X, A
    case 0x1002: if (cpu.read_byte(0x1002) != 0xD5 || cpu.read_byte(0x1003) != 0xC8 || cpu.read_byte(0x1004) != 0x04) return false; cpu.execute_instruction<0xD5>(0x04C8, 3); return true;
    // src/spc700/main.spc700.s:1641 MOV A, UNK04DE
    case 0x1005: if (cpu.read_byte(0x1005) != 0xE5 || cpu.read_byte(0x1006) != 0xDE || cpu.read_byte(0x1007) != 0x04) return false; cpu.execute_instruction<0xE5>(0x04DE, 3); return true;
    // src/spc700/main.spc700.s:1642 JMP UNK10E7
    case 0x1008: if (cpu.read_byte(0x1008) != 0x5F || cpu.read_byte(0x1009) != 0xE7 || cpu.read_byte(0x100A) != 0x10) return false; cpu.execute_instruction<0x5F>(0x10E7, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK100B.
bool execute_audio_unresolved_unk100b_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1645 JMP UNK1491
    case 0x100B: if (cpu.read_byte(0x100B) != 0x5F || cpu.read_byte(0x100C) != 0x91 || cpu.read_byte(0x100D) != 0x14) return false; cpu.execute_instruction<0x5F>(0x1491, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK100E.
bool execute_audio_unresolved_unk100e_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1648 CALL UNK0FA1
    case 0x100E: if (cpu.read_byte(0x100E) != 0x3F || cpu.read_byte(0x100F) != 0xA1 || cpu.read_byte(0x1010) != 0x0F) return false; cpu.execute_instruction<0x3F>(0x0FA1, 3); return true;
    // src/spc700/main.spc700.s:1649 MOV A, UNK04D8
    case 0x1011: if (cpu.read_byte(0x1011) != 0xE5 || cpu.read_byte(0x1012) != 0xD8 || cpu.read_byte(0x1013) != 0x04) return false; cpu.execute_instruction<0xE5>(0x04D8, 3); return true;
    // src/spc700/main.spc700.s:1650 MOV UNK04BC + X, A
    case 0x1014: if (cpu.read_byte(0x1014) != 0xD5 || cpu.read_byte(0x1015) != 0xBC || cpu.read_byte(0x1016) != 0x04) return false; cpu.execute_instruction<0xD5>(0x04BC, 3); return true;
    // src/spc700/main.spc700.s:1651 MOV A, UNK04D9
    case 0x1017: if (cpu.read_byte(0x1017) != 0xE5 || cpu.read_byte(0x1018) != 0xD9 || cpu.read_byte(0x1019) != 0x04) return false; cpu.execute_instruction<0xE5>(0x04D9, 3); return true;
    // src/spc700/main.spc700.s:1652 MOV UNK04C0 + X, A
    case 0x101A: if (cpu.read_byte(0x101A) != 0xD5 || cpu.read_byte(0x101B) != 0xC0 || cpu.read_byte(0x101C) != 0x04) return false; cpu.execute_instruction<0xD5>(0x04C0, 3); return true;
    // src/spc700/main.spc700.s:1653 JMP UNK0FCB
    case 0x101D: if (cpu.read_byte(0x101D) != 0x5F || cpu.read_byte(0x101E) != 0xCB || cpu.read_byte(0x101F) != 0x0F) return false; cpu.execute_instruction<0x5F>(0x0FCB, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK1020.
bool execute_audio_unresolved_unk1020_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1656 INC Y
    case 0x1020: if (cpu.read_byte(0x1020) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1657 MOV A, (UNK0020) + Y
    case 0x1021: if (cpu.read_byte(0x1021) != 0xF7 || cpu.read_byte(0x1022) != 0x20) return false; cpu.execute_instruction<0xF7>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1658 CALL UNK1130
    case 0x1023: if (cpu.read_byte(0x1023) != 0x3F || cpu.read_byte(0x1024) != 0x30 || cpu.read_byte(0x1025) != 0x11) return false; cpu.execute_instruction<0x3F>(0x1130, 3); return true;
    // src/spc700/main.spc700.s:1659 MOV X, UNK002E
    case 0x1026: if (cpu.read_byte(0x1026) != 0xF8 || cpu.read_byte(0x1027) != 0x2E) return false; cpu.execute_instruction<0xF8>(0x002E, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK1028.
bool execute_audio_unresolved_unk1028_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1661 INC UNK00D0 + X
    case 0x1028: if (cpu.read_byte(0x1028) != 0xBB || cpu.read_byte(0x1029) != 0xD0) return false; cpu.execute_instruction<0xBB>(0x00D0, 2); return true;
    // src/spc700/main.spc700.s:1662 BNE UNK0FCB
    case 0x102A: if (cpu.read_byte(0x102A) != 0xD0 || cpu.read_byte(0x102B) != 0x9F) return false; cpu.execute_instruction<0xD0>(0x009F, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK102C.
bool execute_audio_unresolved_unk102c_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1664 INC Y
    case 0x102C: if (cpu.read_byte(0x102C) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1665 MOV A, (UNK0020) + Y
    case 0x102D: if (cpu.read_byte(0x102D) != 0xF7 || cpu.read_byte(0x102E) != 0x20) return false; cpu.execute_instruction<0xF7>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1666 MOV UNK0023, A
    case 0x102F: if (cpu.read_byte(0x102F) != 0xC4 || cpu.read_byte(0x1030) != 0x23) return false; cpu.execute_instruction<0xC4>(0x0023, 2); return true;
    // src/spc700/main.spc700.s:1667 MOV A, UNK04DB
    case 0x1031: if (cpu.read_byte(0x1031) != 0xE5 || cpu.read_byte(0x1032) != 0xDB || cpu.read_byte(0x1033) != 0x04) return false; cpu.execute_instruction<0xE5>(0x04DB, 3); return true;
    // src/spc700/main.spc700.s:1668 MOV UNK0022, A
    case 0x1034: if (cpu.read_byte(0x1034) != 0xC4 || cpu.read_byte(0x1035) != 0x22) return false; cpu.execute_instruction<0xC4>(0x0022, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK1036.
bool execute_audio_unresolved_unk1036_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1670 MOV A, UNK04DF
    case 0x1036: if (cpu.read_byte(0x1036) != 0xE5 || cpu.read_byte(0x1037) != 0xDF || cpu.read_byte(0x1038) != 0x04) return false; cpu.execute_instruction<0xE5>(0x04DF, 3); return true;
    // src/spc700/main.spc700.s:1671 MOV X, A
    case 0x1039: if (cpu.read_byte(0x1039) != 0x5D) return false; cpu.execute_instruction<0x5D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1672 CALL UNK10B6
    case 0x103A: if (cpu.read_byte(0x103A) != 0x3F || cpu.read_byte(0x103B) != 0xB6 || cpu.read_byte(0x103C) != 0x10) return false; cpu.execute_instruction<0x3F>(0x10B6, 3); return true;
    // src/spc700/main.spc700.s:1673 MOV Y, UNK002E
    case 0x103D: if (cpu.read_byte(0x103D) != 0xEB || cpu.read_byte(0x103E) != 0x2E) return false; cpu.execute_instruction<0xEB>(0x002E, 2); return true;
    // src/spc700/main.spc700.s:1674 MOV A, #$08
    case 0x103F: if (cpu.read_byte(0x103F) != 0xE8 || cpu.read_byte(0x1040) != 0x08) return false; cpu.execute_instruction<0xE8>(0x0008, 2); return true;
    // src/spc700/main.spc700.s:1675 MUL YA
    case 0x1041: if (cpu.read_byte(0x1041) != 0xCF) return false; cpu.execute_instruction<0xCF>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1676 MOV X, A
    case 0x1042: if (cpu.read_byte(0x1042) != 0x5D) return false; cpu.execute_instruction<0x5D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1677 MOV A, UNK0023
    case 0x1043: if (cpu.read_byte(0x1043) != 0xE4 || cpu.read_byte(0x1044) != 0x23) return false; cpu.execute_instruction<0xE4>(0x0023, 2); return true;
    // src/spc700/main.spc700.s:1678 MOV UNK0464 + X, A
    case 0x1045: if (cpu.read_byte(0x1045) != 0xD5 || cpu.read_byte(0x1046) != 0x64 || cpu.read_byte(0x1047) != 0x04) return false; cpu.execute_instruction<0xD5>(0x0464, 3); return true;
    // src/spc700/main.spc700.s:1679 MOV UNK04DC, A
    case 0x1048: if (cpu.read_byte(0x1048) != 0xC5 || cpu.read_byte(0x1049) != 0xDC || cpu.read_byte(0x104A) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04DC, 3); return true;
    // src/spc700/main.spc700.s:1680 MOV A, UNK0022
    case 0x104B: if (cpu.read_byte(0x104B) != 0xE4 || cpu.read_byte(0x104C) != 0x22) return false; cpu.execute_instruction<0xE4>(0x0022, 2); return true;
    // src/spc700/main.spc700.s:1681 MOV UNK0463 + X, A
    case 0x104D: if (cpu.read_byte(0x104D) != 0xD5 || cpu.read_byte(0x104E) != 0x63 || cpu.read_byte(0x104F) != 0x04) return false; cpu.execute_instruction<0xD5>(0x0463, 3); return true;
    // src/spc700/main.spc700.s:1682 MOV UNK04DB, A
    case 0x1050: if (cpu.read_byte(0x1050) != 0xC5 || cpu.read_byte(0x1051) != 0xDB || cpu.read_byte(0x1052) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04DB, 3); return true;
    // src/spc700/main.spc700.s:1683 MOV X, UNK002E
    case 0x1053: if (cpu.read_byte(0x1053) != 0xF8 || cpu.read_byte(0x1054) != 0x2E) return false; cpu.execute_instruction<0xF8>(0x002E, 2); return true;
    // src/spc700/main.spc700.s:1684 JMP UNK1028
    case 0x1055: if (cpu.read_byte(0x1055) != 0x5F || cpu.read_byte(0x1056) != 0x28 || cpu.read_byte(0x1057) != 0x10) return false; cpu.execute_instruction<0x5F>(0x1028, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK1058.
bool execute_audio_unresolved_unk1058_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1687 INC Y
    case 0x1058: if (cpu.read_byte(0x1058) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1688 MOV A, (UNK0020) + Y
    case 0x1059: if (cpu.read_byte(0x1059) != 0xF7 || cpu.read_byte(0x105A) != 0x20) return false; cpu.execute_instruction<0xF7>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1689 MOV UNK0022, A
    case 0x105B: if (cpu.read_byte(0x105B) != 0xC4 || cpu.read_byte(0x105C) != 0x22) return false; cpu.execute_instruction<0xC4>(0x0022, 2); return true;
    // src/spc700/main.spc700.s:1690 MOV A, UNK04DC
    case 0x105D: if (cpu.read_byte(0x105D) != 0xE5 || cpu.read_byte(0x105E) != 0xDC || cpu.read_byte(0x105F) != 0x04) return false; cpu.execute_instruction<0xE5>(0x04DC, 3); return true;
    // src/spc700/main.spc700.s:1691 MOV UNK0023, A
    case 0x1060: if (cpu.read_byte(0x1060) != 0xC4 || cpu.read_byte(0x1061) != 0x23) return false; cpu.execute_instruction<0xC4>(0x0023, 2); return true;
    // src/spc700/main.spc700.s:1692 BNE UNK1036
    case 0x1062: if (cpu.read_byte(0x1062) != 0xD0 || cpu.read_byte(0x1063) != 0xD2) return false; cpu.execute_instruction<0xD0>(0x00D2, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK1064.
bool execute_audio_unresolved_unk1064_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1694 MOV UNK04C8 + X, A
    case 0x1064: if (cpu.read_byte(0x1064) != 0xD5 || cpu.read_byte(0x1065) != 0xC8 || cpu.read_byte(0x1066) != 0x04) return false; cpu.execute_instruction<0xD5>(0x04C8, 3); return true;
    // src/spc700/main.spc700.s:1695 RET
    case 0x1067: if (cpu.read_byte(0x1067) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK10B6.
bool execute_audio_unresolved_unk10b6_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1710 MOV A, UNK0022
    case 0x10B6: if (cpu.read_byte(0x10B6) != 0xE4 || cpu.read_byte(0x10B7) != 0x22) return false; cpu.execute_instruction<0xE4>(0x0022, 2); return true;
    // src/spc700/main.spc700.s:1711 MOV UNK0321 + X, A
    case 0x10B8: if (cpu.read_byte(0x10B8) != 0xD5 || cpu.read_byte(0x10B9) != 0x21 || cpu.read_byte(0x10BA) != 0x03) return false; cpu.execute_instruction<0xD5>(0x0321, 3); return true;
    // src/spc700/main.spc700.s:1712 MOV A, UNK0023
    case 0x10BB: if (cpu.read_byte(0x10BB) != 0xE4 || cpu.read_byte(0x10BC) != 0x23) return false; cpu.execute_instruction<0xE4>(0x0023, 2); return true;
    // src/spc700/main.spc700.s:1713 AND A, #$C0
    case 0x10BD: if (cpu.read_byte(0x10BD) != 0x28 || cpu.read_byte(0x10BE) != 0xC0) return false; cpu.execute_instruction<0x28>(0x00C0, 2); return true;
    // src/spc700/main.spc700.s:1714 MOV UNK0351 + X, A
    case 0x10BF: if (cpu.read_byte(0x10BF) != 0xD5 || cpu.read_byte(0x10C0) != 0x51 || cpu.read_byte(0x10C1) != 0x03) return false; cpu.execute_instruction<0xD5>(0x0351, 3); return true;
    // src/spc700/main.spc700.s:1715 MOV A, UNK0023
    case 0x10C2: if (cpu.read_byte(0x10C2) != 0xE4 || cpu.read_byte(0x10C3) != 0x23) return false; cpu.execute_instruction<0xE4>(0x0023, 2); return true;
    // src/spc700/main.spc700.s:1716 AND A, #$3F
    case 0x10C4: if (cpu.read_byte(0x10C4) != 0x28 || cpu.read_byte(0x10C5) != 0x3F) return false; cpu.execute_instruction<0x28>(0x003F, 2); return true;
    // src/spc700/main.spc700.s:1717 MOV UNK0433, A
    case 0x10C6: if (cpu.read_byte(0x10C6) != 0xC5 || cpu.read_byte(0x10C7) != 0x33 || cpu.read_byte(0x10C8) != 0x04) return false; cpu.execute_instruction<0xC5>(0x0433, 3); return true;
    // src/spc700/main.spc700.s:1718 MOV A, STEREO_MONO_FLAG
    case 0x10C9: if (cpu.read_byte(0x10C9) != 0xE5 || cpu.read_byte(0x10CA) != 0x31 || cpu.read_byte(0x10CB) != 0x04) return false; cpu.execute_instruction<0xE5>(0x0431, 3); return true;
    // src/spc700/main.spc700.s:1719 CMP A, #$00
    case 0x10CC: if (cpu.read_byte(0x10CC) != 0x68 || cpu.read_byte(0x10CD) != 0x00) return false; cpu.execute_instruction<0x68>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:1720 BEQ UNK10D5
    case 0x10CE: if (cpu.read_byte(0x10CE) != 0xF0 || cpu.read_byte(0x10CF) != 0x05) return false; cpu.execute_instruction<0xF0>(0x0005, 2); return true;
    // src/spc700/main.spc700.s:1721 MOV A, #$0A
    case 0x10D0: if (cpu.read_byte(0x10D0) != 0xE8 || cpu.read_byte(0x10D1) != 0x0A) return false; cpu.execute_instruction<0xE8>(0x000A, 2); return true;
    // src/spc700/main.spc700.s:1722 MOV UNK0433, A
    case 0x10D2: if (cpu.read_byte(0x10D2) != 0xC5 || cpu.read_byte(0x10D3) != 0x33 || cpu.read_byte(0x10D4) != 0x04) return false; cpu.execute_instruction<0xC5>(0x0433, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK10D5.
bool execute_audio_unresolved_unk10d5_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1724 MOV A, UNK0433
    case 0x10D5: if (cpu.read_byte(0x10D5) != 0xE5 || cpu.read_byte(0x10D6) != 0x33 || cpu.read_byte(0x10D7) != 0x04) return false; cpu.execute_instruction<0xE5>(0x0433, 3); return true;
    // src/spc700/main.spc700.s:1725 MOV UNK0011, A
    case 0x10D8: if (cpu.read_byte(0x10D8) != 0xC4 || cpu.read_byte(0x10D9) != 0x11) return false; cpu.execute_instruction<0xC4>(0x0011, 2); return true;
    // src/spc700/main.spc700.s:1726 MOV UNK0010, #$00
    case 0x10DA: if (cpu.read_byte(0x10DA) != 0x8F || cpu.read_byte(0x10DB) != 0x00 || cpu.read_byte(0x10DC) != 0x10) return false; cpu.execute_instruction<0x8F>(0x1000, 3); return true;
    // src/spc700/main.spc700.s:1727 MOV A, CURRENT_TRACK_BIT
    case 0x10DD: if (cpu.read_byte(0x10DD) != 0xE4 || cpu.read_byte(0x10DE) != 0x47) return false; cpu.execute_instruction<0xE4>(0x0047, 2); return true;
    // src/spc700/main.spc700.s:1728 AND A, UNK04D6
    case 0x10DF: if (cpu.read_byte(0x10DF) != 0x25 || cpu.read_byte(0x10E0) != 0xD6 || cpu.read_byte(0x10E1) != 0x04) return false; cpu.execute_instruction<0x25>(0x04D6, 3); return true;
    // src/spc700/main.spc700.s:1729 MOV CURRENT_TRACK_BIT, A
    case 0x10E2: if (cpu.read_byte(0x10E2) != 0xC4 || cpu.read_byte(0x10E3) != 0x47) return false; cpu.execute_instruction<0xC4>(0x0047, 2); return true;
    // src/spc700/main.spc700.s:1730 JMP UNK0C95
    case 0x10E4: if (cpu.read_byte(0x10E4) != 0x5F || cpu.read_byte(0x10E5) != 0x95 || cpu.read_byte(0x10E6) != 0x0C) return false; cpu.execute_instruction<0x5F>(0x0C95, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK10E7.
bool execute_audio_unresolved_unk10e7_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1733 PUSH X
    case 0x10E7: if (cpu.read_byte(0x10E7) != 0x4D) return false; cpu.execute_instruction<0x4D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1734 PUSH A
    case 0x10E8: if (cpu.read_byte(0x10E8) != 0x2D) return false; cpu.execute_instruction<0x2D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1735 MOV A, CURRENT_TRACK_BIT
    case 0x10E9: if (cpu.read_byte(0x10E9) != 0xE4 || cpu.read_byte(0x10EA) != 0x47) return false; cpu.execute_instruction<0xE4>(0x0047, 2); return true;
    // src/spc700/main.spc700.s:1736 AND A, UNK04D6
    case 0x10EB: if (cpu.read_byte(0x10EB) != 0x25 || cpu.read_byte(0x10EC) != 0xD6 || cpu.read_byte(0x10ED) != 0x04) return false; cpu.execute_instruction<0x25>(0x04D6, 3); return true;
    // src/spc700/main.spc700.s:1737 MOV CURRENT_TRACK_BIT, A
    case 0x10EE: if (cpu.read_byte(0x10EE) != 0xC4 || cpu.read_byte(0x10EF) != 0x47) return false; cpu.execute_instruction<0xC4>(0x0047, 2); return true;
    // src/spc700/main.spc700.s:1738 MOV A, UNK04DF
    case 0x10F0: if (cpu.read_byte(0x10F0) != 0xE5 || cpu.read_byte(0x10F1) != 0xDF || cpu.read_byte(0x10F2) != 0x04) return false; cpu.execute_instruction<0xE5>(0x04DF, 3); return true;
    // src/spc700/main.spc700.s:1739 MOV X, A
    case 0x10F3: if (cpu.read_byte(0x10F3) != 0x5D) return false; cpu.execute_instruction<0x5D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1740 POP A
    case 0x10F4: if (cpu.read_byte(0x10F4) != 0xAE) return false; cpu.execute_instruction<0xAE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1741 MOVW UNK0010, YA
    case 0x10F5: if (cpu.read_byte(0x10F5) != 0xDA || cpu.read_byte(0x10F6) != 0x10) return false; cpu.execute_instruction<0xDA>(0x0010, 2); return true;
    // src/spc700/main.spc700.s:1742 CALL UNK06D4
    case 0x10F7: if (cpu.read_byte(0x10F7) != 0x3F || cpu.read_byte(0x10F8) != 0xD4 || cpu.read_byte(0x10F9) != 0x06) return false; cpu.execute_instruction<0x3F>(0x06D4, 3); return true;
    // src/spc700/main.spc700.s:1743 POP X
    case 0x10FA: if (cpu.read_byte(0x10FA) != 0xCE) return false; cpu.execute_instruction<0xCE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1744 RET
    case 0x10FB: if (cpu.read_byte(0x10FB) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK10FC.
bool execute_audio_unresolved_unk10fc_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1747 MOV X, UNK002F
    case 0x10FC: if (cpu.read_byte(0x10FC) != 0xF8 || cpu.read_byte(0x10FD) != 0x2F) return false; cpu.execute_instruction<0xF8>(0x002F, 2); return true;
    // src/spc700/main.spc700.s:1748 MOV UNK0458 + X, A
    case 0x10FE: if (cpu.read_byte(0x10FE) != 0xD5 || cpu.read_byte(0x10FF) != 0x58 || cpu.read_byte(0x1100) != 0x04) return false; cpu.execute_instruction<0xD5>(0x0458, 3); return true;
    // src/spc700/main.spc700.s:1749 MOV A, Y
    case 0x1101: if (cpu.read_byte(0x1101) != 0xDD) return false; cpu.execute_instruction<0xDD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1750 MOV UNK0459 + X, A
    case 0x1102: if (cpu.read_byte(0x1102) != 0xD5 || cpu.read_byte(0x1103) != 0x59 || cpu.read_byte(0x1104) != 0x04) return false; cpu.execute_instruction<0xD5>(0x0459, 3); return true;
    // src/spc700/main.spc700.s:1751 MOV X, UNK002E
    case 0x1105: if (cpu.read_byte(0x1105) != 0xF8 || cpu.read_byte(0x1106) != 0x2E) return false; cpu.execute_instruction<0xF8>(0x002E, 2); return true;
    // src/spc700/main.spc700.s:1752 MOV A, #$01
    case 0x1107: if (cpu.read_byte(0x1107) != 0xE8 || cpu.read_byte(0x1108) != 0x01) return false; cpu.execute_instruction<0xE8>(0x0001, 2); return true;
    // src/spc700/main.spc700.s:1753 MOV UNK0454 + X, A
    case 0x1109: if (cpu.read_byte(0x1109) != 0xD5 || cpu.read_byte(0x110A) != 0x54 || cpu.read_byte(0x110B) != 0x04) return false; cpu.execute_instruction<0xD5>(0x0454, 3); return true;
    // src/spc700/main.spc700.s:1754 RET
    case 0x110C: if (cpu.read_byte(0x110C) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK110D.
bool execute_audio_unresolved_unk110d_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1757 PUSH Y
    case 0x110D: if (cpu.read_byte(0x110D) != 0x6D) return false; cpu.execute_instruction<0x6D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1758 PUSH A
    case 0x110E: if (cpu.read_byte(0x110E) != 0x2D) return false; cpu.execute_instruction<0x2D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1759 MOV A, UNK04D5
    case 0x110F: if (cpu.read_byte(0x110F) != 0xE5 || cpu.read_byte(0x1110) != 0xD5 || cpu.read_byte(0x1111) != 0x04) return false; cpu.execute_instruction<0xE5>(0x04D5, 3); return true;
    // src/spc700/main.spc700.s:1760 CLRC
    case 0x1112: if (cpu.read_byte(0x1112) != 0x60) return false; cpu.execute_instruction<0x60>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1761 ADC A, #$05
    case 0x1113: if (cpu.read_byte(0x1113) != 0x88 || cpu.read_byte(0x1114) != 0x05) return false; cpu.execute_instruction<0x88>(0x0005, 2); return true;
    // src/spc700/main.spc700.s:1762 MOV Y, A
    case 0x1115: if (cpu.read_byte(0x1115) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1763 MOV UNK0020, A
    case 0x1116: if (cpu.read_byte(0x1116) != 0xC4 || cpu.read_byte(0x1117) != 0x20) return false; cpu.execute_instruction<0xC4>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1764 POP A
    case 0x1118: if (cpu.read_byte(0x1118) != 0xAE) return false; cpu.execute_instruction<0xAE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1765 CALL WRITE_DSP
    case 0x1119: if (cpu.read_byte(0x1119) != 0x3F || cpu.read_byte(0x111A) != 0x49 || cpu.read_byte(0x111B) != 0x07) return false; cpu.execute_instruction<0x3F>(0x0749, 3); return true;
    // src/spc700/main.spc700.s:1766 POP Y
    case 0x111C: if (cpu.read_byte(0x111C) != 0xEE) return false; cpu.execute_instruction<0xEE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1767 MOV A, Y
    case 0x111D: if (cpu.read_byte(0x111D) != 0xDD) return false; cpu.execute_instruction<0xDD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1768 MOV Y, UNK0020
    case 0x111E: if (cpu.read_byte(0x111E) != 0xEB || cpu.read_byte(0x111F) != 0x20) return false; cpu.execute_instruction<0xEB>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1769 INC Y
    case 0x1120: if (cpu.read_byte(0x1120) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1770 JMP WRITE_DSP
    case 0x1121: if (cpu.read_byte(0x1121) != 0x5F || cpu.read_byte(0x1122) != 0x49 || cpu.read_byte(0x1123) != 0x07) return false; cpu.execute_instruction<0x5F>(0x0749, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK1124.
bool execute_audio_unresolved_unk1124_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1773 PUSH A
    case 0x1124: if (cpu.read_byte(0x1124) != 0x2D) return false; cpu.execute_instruction<0x2D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1774 MOV A, UNK04D5
    case 0x1125: if (cpu.read_byte(0x1125) != 0xE5 || cpu.read_byte(0x1126) != 0xD5 || cpu.read_byte(0x1127) != 0x04) return false; cpu.execute_instruction<0xE5>(0x04D5, 3); return true;
    // src/spc700/main.spc700.s:1775 CLRC
    case 0x1128: if (cpu.read_byte(0x1128) != 0x60) return false; cpu.execute_instruction<0x60>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1776 ADC A, #$07
    case 0x1129: if (cpu.read_byte(0x1129) != 0x88 || cpu.read_byte(0x112A) != 0x07) return false; cpu.execute_instruction<0x88>(0x0007, 2); return true;
    // src/spc700/main.spc700.s:1777 MOV Y, A
    case 0x112B: if (cpu.read_byte(0x112B) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1778 POP A
    case 0x112C: if (cpu.read_byte(0x112C) != 0xAE) return false; cpu.execute_instruction<0xAE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1779 JMP WRITE_DSP
    case 0x112D: if (cpu.read_byte(0x112D) != 0x5F || cpu.read_byte(0x112E) != 0x49 || cpu.read_byte(0x112F) != 0x07) return false; cpu.execute_instruction<0x5F>(0x0749, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK1130.
bool execute_audio_unresolved_unk1130_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1782 PUSH A
    case 0x1130: if (cpu.read_byte(0x1130) != 0x2D) return false; cpu.execute_instruction<0x2D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1783 MOV A, NON_MIRROR
    case 0x1131: if (cpu.read_byte(0x1131) != 0xE4 || cpu.read_byte(0x1132) != 0x49) return false; cpu.execute_instruction<0xE4>(0x0049, 2); return true;
    // src/spc700/main.spc700.s:1784 AND A, UNK04D6
    case 0x1133: if (cpu.read_byte(0x1133) != 0x25 || cpu.read_byte(0x1134) != 0xD6 || cpu.read_byte(0x1135) != 0x04) return false; cpu.execute_instruction<0x25>(0x04D6, 3); return true;
    // src/spc700/main.spc700.s:1785 MOV NON_MIRROR, A
    case 0x1136: if (cpu.read_byte(0x1136) != 0xC4 || cpu.read_byte(0x1137) != 0x49) return false; cpu.execute_instruction<0xC4>(0x0049, 2); return true;
    // src/spc700/main.spc700.s:1786 MOV A, UNK04DF
    case 0x1138: if (cpu.read_byte(0x1138) != 0xE5 || cpu.read_byte(0x1139) != 0xDF || cpu.read_byte(0x113A) != 0x04) return false; cpu.execute_instruction<0xE5>(0x04DF, 3); return true;
    // src/spc700/main.spc700.s:1787 MOV X, A
    case 0x113B: if (cpu.read_byte(0x113B) != 0x5D) return false; cpu.execute_instruction<0x5D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1788 POP A
    case 0x113C: if (cpu.read_byte(0x113C) != 0xAE) return false; cpu.execute_instruction<0xAE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1789 MOV CURRENT_TRACK_BIT, #$00
    case 0x113D: if (cpu.read_byte(0x113D) != 0x8F || cpu.read_byte(0x113E) != 0x00 || cpu.read_byte(0x113F) != 0x47) return false; cpu.execute_instruction<0x8F>(0x4700, 3); return true;
    // src/spc700/main.spc700.s:1790 CALL UNK0962
    case 0x1140: if (cpu.read_byte(0x1140) != 0x3F || cpu.read_byte(0x1141) != 0x62 || cpu.read_byte(0x1142) != 0x09) return false; cpu.execute_instruction<0x3F>(0x0962, 3); return true;
    // src/spc700/main.spc700.s:1791 RET
    case 0x1143: if (cpu.read_byte(0x1143) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK1144.
bool execute_audio_unresolved_unk1144_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1794 PUSH A
    case 0x1144: if (cpu.read_byte(0x1144) != 0x2D) return false; cpu.execute_instruction<0x2D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1795 MOV A, UNK04D5
    case 0x1145: if (cpu.read_byte(0x1145) != 0xE5 || cpu.read_byte(0x1146) != 0xD5 || cpu.read_byte(0x1147) != 0x04) return false; cpu.execute_instruction<0xE5>(0x04D5, 3); return true;
    // src/spc700/main.spc700.s:1796 MOV Y, A
    case 0x1148: if (cpu.read_byte(0x1148) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1797 POP A
    case 0x1149: if (cpu.read_byte(0x1149) != 0xAE) return false; cpu.execute_instruction<0xAE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1798 CALL WRITE_DSP
    case 0x114A: if (cpu.read_byte(0x114A) != 0x3F || cpu.read_byte(0x114B) != 0x49 || cpu.read_byte(0x114C) != 0x07) return false; cpu.execute_instruction<0x3F>(0x0749, 3); return true;
    // src/spc700/main.spc700.s:1799 INC Y
    case 0x114D: if (cpu.read_byte(0x114D) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1800 CALL WRITE_DSP
    case 0x114E: if (cpu.read_byte(0x114E) != 0x3F || cpu.read_byte(0x114F) != 0x49 || cpu.read_byte(0x1150) != 0x07) return false; cpu.execute_instruction<0x3F>(0x0749, 3); return true;
    // src/spc700/main.spc700.s:1801 RET
    case 0x1151: if (cpu.read_byte(0x1151) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK1152.
bool execute_audio_unresolved_unk1152_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1804 MOV X, #$00
    case 0x1152: if (cpu.read_byte(0x1152) != 0xCD || cpu.read_byte(0x1153) != 0x00) return false; cpu.execute_instruction<0xCD>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:1805 DECW UNK0020
    case 0x1154: if (cpu.read_byte(0x1154) != 0x1A || cpu.read_byte(0x1155) != 0x20) return false; cpu.execute_instruction<0x1A>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1806 DECW UNK0020
    case 0x1156: if (cpu.read_byte(0x1156) != 0x1A || cpu.read_byte(0x1157) != 0x20) return false; cpu.execute_instruction<0x1A>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1807 MOV A, (UNK0020 + X)
    case 0x1158: if (cpu.read_byte(0x1158) != 0xE7 || cpu.read_byte(0x1159) != 0x20) return false; cpu.execute_instruction<0xE7>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1808 MOV UNK17C5 + 1, A
    case 0x115A: if (cpu.read_byte(0x115A) != 0xC5 || cpu.read_byte(0x115B) != 0xC6 || cpu.read_byte(0x115C) != 0x17) return false; cpu.execute_instruction<0xC5>(0x17C6, 3); return true;
    // src/spc700/main.spc700.s:1809 DECW UNK0020
    case 0x115D: if (cpu.read_byte(0x115D) != 0x1A || cpu.read_byte(0x115E) != 0x20) return false; cpu.execute_instruction<0x1A>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1810 MOV A, (UNK0020 + X)
    case 0x115F: if (cpu.read_byte(0x115F) != 0xE7 || cpu.read_byte(0x1160) != 0x20) return false; cpu.execute_instruction<0xE7>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1811 MOV UNK17C5, A
    case 0x1161: if (cpu.read_byte(0x1161) != 0xC5 || cpu.read_byte(0x1162) != 0xC5 || cpu.read_byte(0x1163) != 0x17) return false; cpu.execute_instruction<0xC5>(0x17C5, 3); return true;
    // src/spc700/main.spc700.s:1812 MOV A, #$01
    case 0x1164: if (cpu.read_byte(0x1164) != 0xE8 || cpu.read_byte(0x1165) != 0x01) return false; cpu.execute_instruction<0xE8>(0x0001, 2); return true;
    // src/spc700/main.spc700.s:1813 MOV UNK04B2, A
    case 0x1166: if (cpu.read_byte(0x1166) != 0xC5 || cpu.read_byte(0x1167) != 0xB2 || cpu.read_byte(0x1168) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04B2, 3); return true;
    // src/spc700/main.spc700.s:1814 INCW UNK0020
    case 0x1169: if (cpu.read_byte(0x1169) != 0x3A || cpu.read_byte(0x116A) != 0x20) return false; cpu.execute_instruction<0x3A>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1815 INCW UNK0020
    case 0x116B: if (cpu.read_byte(0x116B) != 0x3A || cpu.read_byte(0x116C) != 0x20) return false; cpu.execute_instruction<0x3A>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1816 INCW UNK0020
    case 0x116D: if (cpu.read_byte(0x116D) != 0x3A || cpu.read_byte(0x116E) != 0x20) return false; cpu.execute_instruction<0x3A>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1817 RET
    case 0x116F: if (cpu.read_byte(0x116F) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK1170.
bool execute_audio_unresolved_unk1170_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1820 CALL UNK1152
    case 0x1170: if (cpu.read_byte(0x1170) != 0x3F || cpu.read_byte(0x1171) != 0x52 || cpu.read_byte(0x1172) != 0x11) return false; cpu.execute_instruction<0x3F>(0x1152, 3); return true;
    // src/spc700/main.spc700.s:1821 JMP UNK1278
    case 0x1173: if (cpu.read_byte(0x1173) != 0x5F || cpu.read_byte(0x1174) != 0x78 || cpu.read_byte(0x1175) != 0x12) return false; cpu.execute_instruction<0x5F>(0x1278, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK1176.
bool execute_audio_unresolved_unk1176_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1824 CALL UNK1152
    case 0x1176: if (cpu.read_byte(0x1176) != 0x3F || cpu.read_byte(0x1177) != 0x52 || cpu.read_byte(0x1178) != 0x11) return false; cpu.execute_instruction<0x3F>(0x1152, 3); return true;
    // src/spc700/main.spc700.s:1825 JMP UNK1270
    case 0x1179: if (cpu.read_byte(0x1179) != 0x5F || cpu.read_byte(0x117A) != 0x70 || cpu.read_byte(0x117B) != 0x12) return false; cpu.execute_instruction<0x5F>(0x1270, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK1184.
bool execute_audio_unresolved_unk1184_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1831 MOV UNK002A, #$60
    case 0x1184: if (cpu.read_byte(0x1184) != 0x8F || cpu.read_byte(0x1185) != 0x60 || cpu.read_byte(0x1186) != 0x2A) return false; cpu.execute_instruction<0x8F>(0x2A60, 3); return true;
    // src/spc700/main.spc700.s:1832 MOV UNK002B, #$04
    case 0x1187: if (cpu.read_byte(0x1187) != 0x8F || cpu.read_byte(0x1188) != 0x04 || cpu.read_byte(0x1189) != 0x2B) return false; cpu.execute_instruction<0x8F>(0x2B04, 3); return true;
    // src/spc700/main.spc700.s:1833 MOV X, #$00
    case 0x118A: if (cpu.read_byte(0x118A) != 0xCD || cpu.read_byte(0x118B) != 0x00) return false; cpu.execute_instruction<0xCD>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:1834 MOV A, #$EF
    case 0x118C: if (cpu.read_byte(0x118C) != 0xE8 || cpu.read_byte(0x118D) != 0xEF) return false; cpu.execute_instruction<0xE8>(0x00EF, 2); return true;
    // src/spc700/main.spc700.s:1835 MOV Y, #$10
    case 0x118E: if (cpu.read_byte(0x118E) != 0x8D || cpu.read_byte(0x118F) != 0x10) return false; cpu.execute_instruction<0x8D>(0x0010, 2); return true;
    // src/spc700/main.spc700.s:1836 MOV UNK0020, #$08
    case 0x1190: if (cpu.read_byte(0x1190) != 0x8F || cpu.read_byte(0x1191) != 0x08 || cpu.read_byte(0x1192) != 0x20) return false; cpu.execute_instruction<0x8F>(0x2008, 3); return true;
    // src/spc700/main.spc700.s:1837 MOV UNK0021, #$40
    case 0x1193: if (cpu.read_byte(0x1193) != 0x8F || cpu.read_byte(0x1194) != 0x40 || cpu.read_byte(0x1195) != 0x21) return false; cpu.execute_instruction<0x8F>(0x2140, 3); return true;
    // src/spc700/main.spc700.s:1838 BNE UNK1207
    case 0x1196: if (cpu.read_byte(0x1196) != 0xD0 || cpu.read_byte(0x1197) != 0x6F) return false; cpu.execute_instruction<0xD0>(0x006F, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK1198.
bool execute_audio_unresolved_unk1198_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1840 MOV A, UNK04B1
    case 0x1198: if (cpu.read_byte(0x1198) != 0xE5 || cpu.read_byte(0x1199) != 0xB1 || cpu.read_byte(0x119A) != 0x04) return false; cpu.execute_instruction<0xE5>(0x04B1, 3); return true;
    // src/spc700/main.spc700.s:1841 AND A, #$7F
    case 0x119B: if (cpu.read_byte(0x119B) != 0x28 || cpu.read_byte(0x119C) != 0x7F) return false; cpu.execute_instruction<0x28>(0x007F, 2); return true;
    // src/spc700/main.spc700.s:1842 MOV UNK04B1, A
    case 0x119D: if (cpu.read_byte(0x119D) != 0xC5 || cpu.read_byte(0x119E) != 0xB1 || cpu.read_byte(0x119F) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04B1, 3); return true;
    // src/spc700/main.spc700.s:1843 MOV UNK0024, #UNK17D5 & $FF
    case 0x11A0: if (cpu.read_byte(0x11A0) != 0x8F || cpu.read_byte(0x11A1) != 0xD5 || cpu.read_byte(0x11A2) != 0x24) return false; cpu.execute_instruction<0x8F>(0x24D5, 3); return true;
    // src/spc700/main.spc700.s:1844 MOV UNK0025, #UNK17D5 >> 8
    case 0x11A3: if (cpu.read_byte(0x11A3) != 0x8F || cpu.read_byte(0x11A4) != 0x17 || cpu.read_byte(0x11A5) != 0x25) return false; cpu.execute_instruction<0x8F>(0x2517, 3); return true;
    // src/spc700/main.spc700.s:1845 MOV UNK002A, #$68
    case 0x11A6: if (cpu.read_byte(0x11A6) != 0x8F || cpu.read_byte(0x11A7) != 0x68 || cpu.read_byte(0x11A8) != 0x2A) return false; cpu.execute_instruction<0x8F>(0x2A68, 3); return true;
    // src/spc700/main.spc700.s:1846 MOV UNK002B, #$04
    case 0x11A9: if (cpu.read_byte(0x11A9) != 0x8F || cpu.read_byte(0x11AA) != 0x04 || cpu.read_byte(0x11AB) != 0x2B) return false; cpu.execute_instruction<0x8F>(0x2B04, 3); return true;
    // src/spc700/main.spc700.s:1847 MOV X, #$01
    case 0x11AC: if (cpu.read_byte(0x11AC) != 0xCD || cpu.read_byte(0x11AD) != 0x01) return false; cpu.execute_instruction<0xCD>(0x0001, 2); return true;
    // src/spc700/main.spc700.s:1848 MOV A, #$DF
    case 0x11AE: if (cpu.read_byte(0x11AE) != 0xE8 || cpu.read_byte(0x11AF) != 0xDF) return false; cpu.execute_instruction<0xE8>(0x00DF, 2); return true;
    // src/spc700/main.spc700.s:1849 MOV Y, #$20
    case 0x11B0: if (cpu.read_byte(0x11B0) != 0x8D || cpu.read_byte(0x11B1) != 0x20) return false; cpu.execute_instruction<0x8D>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1850 MOV UNK0020, #$0A
    case 0x11B2: if (cpu.read_byte(0x11B2) != 0x8F || cpu.read_byte(0x11B3) != 0x0A || cpu.read_byte(0x11B4) != 0x20) return false; cpu.execute_instruction<0x8F>(0x200A, 3); return true;
    // src/spc700/main.spc700.s:1851 MOV UNK0021, #$50
    case 0x11B5: if (cpu.read_byte(0x11B5) != 0x8F || cpu.read_byte(0x11B6) != 0x50 || cpu.read_byte(0x11B7) != 0x21) return false; cpu.execute_instruction<0x8F>(0x2150, 3); return true;
    // src/spc700/main.spc700.s:1852 BNE UNK1207
    case 0x11B8: if (cpu.read_byte(0x11B8) != 0xD0 || cpu.read_byte(0x11B9) != 0x4D) return false; cpu.execute_instruction<0xD0>(0x004D, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK11BA.
bool execute_audio_unresolved_unk11ba_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1854 MOV A, UNK04B2
    case 0x11BA: if (cpu.read_byte(0x11BA) != 0xE5 || cpu.read_byte(0x11BB) != 0xB2 || cpu.read_byte(0x11BC) != 0x04) return false; cpu.execute_instruction<0xE5>(0x04B2, 3); return true;
    // src/spc700/main.spc700.s:1855 AND A, #$7F
    case 0x11BD: if (cpu.read_byte(0x11BD) != 0x28 || cpu.read_byte(0x11BE) != 0x7F) return false; cpu.execute_instruction<0x28>(0x007F, 2); return true;
    // src/spc700/main.spc700.s:1856 MOV UNK04B2, A
    case 0x11BF: if (cpu.read_byte(0x11BF) != 0xC5 || cpu.read_byte(0x11C0) != 0xB2 || cpu.read_byte(0x11C1) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04B2, 3); return true;
    // src/spc700/main.spc700.s:1857 MOV UNK0024, #UNK17C5 & $FF
    case 0x11C2: if (cpu.read_byte(0x11C2) != 0x8F || cpu.read_byte(0x11C3) != 0xC5 || cpu.read_byte(0x11C4) != 0x24) return false; cpu.execute_instruction<0x8F>(0x24C5, 3); return true;
    // src/spc700/main.spc700.s:1858 MOV UNK0025, #UNK17C5 >> 8
    case 0x11C5: if (cpu.read_byte(0x11C5) != 0x8F || cpu.read_byte(0x11C6) != 0x17 || cpu.read_byte(0x11C7) != 0x25) return false; cpu.execute_instruction<0x8F>(0x2517, 3); return true;
    // src/spc700/main.spc700.s:1859 MOV UNK002A, #$70
    case 0x11C8: if (cpu.read_byte(0x11C8) != 0x8F || cpu.read_byte(0x11C9) != 0x70 || cpu.read_byte(0x11CA) != 0x2A) return false; cpu.execute_instruction<0x8F>(0x2A70, 3); return true;
    // src/spc700/main.spc700.s:1860 MOV UNK002B, #$04
    case 0x11CB: if (cpu.read_byte(0x11CB) != 0x8F || cpu.read_byte(0x11CC) != 0x04 || cpu.read_byte(0x11CD) != 0x2B) return false; cpu.execute_instruction<0x8F>(0x2B04, 3); return true;
    // src/spc700/main.spc700.s:1861 MOV X, #$02
    case 0x11CE: if (cpu.read_byte(0x11CE) != 0xCD || cpu.read_byte(0x11CF) != 0x02) return false; cpu.execute_instruction<0xCD>(0x0002, 2); return true;
    // src/spc700/main.spc700.s:1862 MOV A, #$BF
    case 0x11D0: if (cpu.read_byte(0x11D0) != 0xE8 || cpu.read_byte(0x11D1) != 0xBF) return false; cpu.execute_instruction<0xE8>(0x00BF, 2); return true;
    // src/spc700/main.spc700.s:1863 MOV Y, #$40
    case 0x11D2: if (cpu.read_byte(0x11D2) != 0x8D || cpu.read_byte(0x11D3) != 0x40) return false; cpu.execute_instruction<0x8D>(0x0040, 2); return true;
    // src/spc700/main.spc700.s:1864 MOV UNK0020, #$0C
    case 0x11D4: if (cpu.read_byte(0x11D4) != 0x8F || cpu.read_byte(0x11D5) != 0x0C || cpu.read_byte(0x11D6) != 0x20) return false; cpu.execute_instruction<0x8F>(0x200C, 3); return true;
    // src/spc700/main.spc700.s:1865 MOV UNK0021, #$60
    case 0x11D7: if (cpu.read_byte(0x11D7) != 0x8F || cpu.read_byte(0x11D8) != 0x60 || cpu.read_byte(0x11D9) != 0x21) return false; cpu.execute_instruction<0x8F>(0x2160, 3); return true;
    // src/spc700/main.spc700.s:1866 BNE UNK1207
    case 0x11DA: if (cpu.read_byte(0x11DA) != 0xD0 || cpu.read_byte(0x11DB) != 0x2B) return false; cpu.execute_instruction<0xD0>(0x002B, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK11DC.
bool execute_audio_unresolved_unk11dc_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1868 MOV A, UNK04B3
    case 0x11DC: if (cpu.read_byte(0x11DC) != 0xE5 || cpu.read_byte(0x11DD) != 0xB3 || cpu.read_byte(0x11DE) != 0x04) return false; cpu.execute_instruction<0xE5>(0x04B3, 3); return true;
    // src/spc700/main.spc700.s:1869 AND A, #$7F
    case 0x11DF: if (cpu.read_byte(0x11DF) != 0x28 || cpu.read_byte(0x11E0) != 0x7F) return false; cpu.execute_instruction<0x28>(0x007F, 2); return true;
    // src/spc700/main.spc700.s:1870 MOV UNK04B3, A
    case 0x11E1: if (cpu.read_byte(0x11E1) != 0xC5 || cpu.read_byte(0x11E2) != 0xB3 || cpu.read_byte(0x11E3) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04B3, 3); return true;
    // src/spc700/main.spc700.s:1871 MOV UNK0024, #UNK16C7 & $FF
    case 0x11E4: if (cpu.read_byte(0x11E4) != 0x8F || cpu.read_byte(0x11E5) != 0xC7 || cpu.read_byte(0x11E6) != 0x24) return false; cpu.execute_instruction<0x8F>(0x24C7, 3); return true;
    // src/spc700/main.spc700.s:1872 MOV UNK0025, #UNK16C7 >> 8
    case 0x11E7: if (cpu.read_byte(0x11E7) != 0x8F || cpu.read_byte(0x11E8) != 0x16 || cpu.read_byte(0x11E9) != 0x25) return false; cpu.execute_instruction<0x8F>(0x2516, 3); return true;
    // src/spc700/main.spc700.s:1873 MOV A, RANDOM_LO
    case 0x11EA: if (cpu.read_byte(0x11EA) != 0xE4 || cpu.read_byte(0x11EB) != 0x19) return false; cpu.execute_instruction<0xE4>(0x0019, 2); return true;
    // src/spc700/main.spc700.s:1874 MOV FX18E9 + 6, A
    case 0x11EC: if (cpu.read_byte(0x11EC) != 0xC5 || cpu.read_byte(0x11ED) != 0xEF || cpu.read_byte(0x11EE) != 0x18) return false; cpu.execute_instruction<0xC5>(0x18EF, 3); return true;
    // src/spc700/main.spc700.s:1875 MOV FX18F1 + 6, A
    case 0x11EF: if (cpu.read_byte(0x11EF) != 0xC5 || cpu.read_byte(0x11F0) != 0xF7 || cpu.read_byte(0x11F1) != 0x18) return false; cpu.execute_instruction<0xC5>(0x18F7, 3); return true;
    // src/spc700/main.spc700.s:1876 MOV FX18F9 + 6, A
    case 0x11F2: if (cpu.read_byte(0x11F2) != 0xC5 || cpu.read_byte(0x11F3) != 0xFF || cpu.read_byte(0x11F4) != 0x18) return false; cpu.execute_instruction<0xC5>(0x18FF, 3); return true;
    // src/spc700/main.spc700.s:1877 MOV UNK002A, #$78
    case 0x11F5: if (cpu.read_byte(0x11F5) != 0x8F || cpu.read_byte(0x11F6) != 0x78 || cpu.read_byte(0x11F7) != 0x2A) return false; cpu.execute_instruction<0x8F>(0x2A78, 3); return true;
    // src/spc700/main.spc700.s:1878 MOV UNK002B, #$04
    case 0x11F8: if (cpu.read_byte(0x11F8) != 0x8F || cpu.read_byte(0x11F9) != 0x04 || cpu.read_byte(0x11FA) != 0x2B) return false; cpu.execute_instruction<0x8F>(0x2B04, 3); return true;
    // src/spc700/main.spc700.s:1879 MOV X, #$03
    case 0x11FB: if (cpu.read_byte(0x11FB) != 0xCD || cpu.read_byte(0x11FC) != 0x03) return false; cpu.execute_instruction<0xCD>(0x0003, 2); return true;
    // src/spc700/main.spc700.s:1880 MOV A, #$7F
    case 0x11FD: if (cpu.read_byte(0x11FD) != 0xE8 || cpu.read_byte(0x11FE) != 0x7F) return false; cpu.execute_instruction<0xE8>(0x007F, 2); return true;
    // src/spc700/main.spc700.s:1881 MOV Y, #$80
    case 0x11FF: if (cpu.read_byte(0x11FF) != 0x8D || cpu.read_byte(0x1200) != 0x80) return false; cpu.execute_instruction<0x8D>(0x0080, 2); return true;
    // src/spc700/main.spc700.s:1882 MOV UNK0020, #$0E
    case 0x1201: if (cpu.read_byte(0x1201) != 0x8F || cpu.read_byte(0x1202) != 0x0E || cpu.read_byte(0x1203) != 0x20) return false; cpu.execute_instruction<0x8F>(0x200E, 3); return true;
    // src/spc700/main.spc700.s:1883 MOV UNK0021, #$70
    case 0x1204: if (cpu.read_byte(0x1204) != 0x8F || cpu.read_byte(0x1205) != 0x70 || cpu.read_byte(0x1206) != 0x21) return false; cpu.execute_instruction<0x8F>(0x2170, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK1207.
bool execute_audio_unresolved_unk1207_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1885 MOV UNK04D6, A
    case 0x1207: if (cpu.read_byte(0x1207) != 0xC5 || cpu.read_byte(0x1208) != 0xD6 || cpu.read_byte(0x1209) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04D6, 3); return true;
    // src/spc700/main.spc700.s:1886 MOV UNK04D7, Y
    case 0x120A: if (cpu.read_byte(0x120A) != 0xCC || cpu.read_byte(0x120B) != 0xD7 || cpu.read_byte(0x120C) != 0x04) return false; cpu.execute_instruction<0xCC>(0x04D7, 3); return true;
    // src/spc700/main.spc700.s:1887 MOV A, UNK0020
    case 0x120D: if (cpu.read_byte(0x120D) != 0xE4 || cpu.read_byte(0x120E) != 0x20) return false; cpu.execute_instruction<0xE4>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1888 MOV UNK04DF, A
    case 0x120F: if (cpu.read_byte(0x120F) != 0xC5 || cpu.read_byte(0x1210) != 0xDF || cpu.read_byte(0x1211) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04DF, 3); return true;
    // src/spc700/main.spc700.s:1889 MOV A, UNK0021
    case 0x1212: if (cpu.read_byte(0x1212) != 0xE4 || cpu.read_byte(0x1213) != 0x21) return false; cpu.execute_instruction<0xE4>(0x0021, 2); return true;
    // src/spc700/main.spc700.s:1890 MOV UNK04D5, A
    case 0x1214: if (cpu.read_byte(0x1214) != 0xC5 || cpu.read_byte(0x1215) != 0xD5 || cpu.read_byte(0x1216) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04D5, 3); return true;
    // src/spc700/main.spc700.s:1891 MOV A, X
    case 0x1217: if (cpu.read_byte(0x1217) != 0x7D) return false; cpu.execute_instruction<0x7D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1892 MOV UNK002E, A
    case 0x1218: if (cpu.read_byte(0x1218) != 0xC4 || cpu.read_byte(0x1219) != 0x2E) return false; cpu.execute_instruction<0xC4>(0x002E, 2); return true;
    // src/spc700/main.spc700.s:1893 ASL A
    case 0x121A: if (cpu.read_byte(0x121A) != 0x1C) return false; cpu.execute_instruction<0x1C>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1894 MOV UNK002F, A
    case 0x121B: if (cpu.read_byte(0x121B) != 0xC4 || cpu.read_byte(0x121C) != 0x2F) return false; cpu.execute_instruction<0xC4>(0x002F, 2); return true;
    // src/spc700/main.spc700.s:1895 MOV A, UNK04B0 + X
    case 0x121D: if (cpu.read_byte(0x121D) != 0xF5 || cpu.read_byte(0x121E) != 0xB0 || cpu.read_byte(0x121F) != 0x04) return false; cpu.execute_instruction<0xF5>(0x04B0, 3); return true;
    // src/spc700/main.spc700.s:1896 MOV UNK0020, A
    case 0x1220: if (cpu.read_byte(0x1220) != 0xC4 || cpu.read_byte(0x1221) != 0x20) return false; cpu.execute_instruction<0xC4>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1897 MOV UNK002D, A
    case 0x1222: if (cpu.read_byte(0x1222) != 0xC4 || cpu.read_byte(0x1223) != 0x2D) return false; cpu.execute_instruction<0xC4>(0x002D, 2); return true;
    // src/spc700/main.spc700.s:1898 BEQ UNK126D
    case 0x1224: if (cpu.read_byte(0x1224) != 0xF0 || cpu.read_byte(0x1225) != 0x47) return false; cpu.execute_instruction<0xF0>(0x0047, 2); return true;
    // src/spc700/main.spc700.s:1899 CMP A, UNK04D0 + X
    case 0x1226: if (cpu.read_byte(0x1226) != 0x75 || cpu.read_byte(0x1227) != 0xD0 || cpu.read_byte(0x1228) != 0x04) return false; cpu.execute_instruction<0x75>(0x04D0, 3); return true;
    // src/spc700/main.spc700.s:1900 BCS UNK126D
    case 0x1229: if (cpu.read_byte(0x1229) != 0xB0 || cpu.read_byte(0x122A) != 0x42) return false; cpu.execute_instruction<0xB0>(0x0042, 2); return true;
    // src/spc700/main.spc700.s:1901 AND A, #$07
    case 0x122B: if (cpu.read_byte(0x122B) != 0x28 || cpu.read_byte(0x122C) != 0x07) return false; cpu.execute_instruction<0x28>(0x0007, 2); return true;
    // src/spc700/main.spc700.s:1902 MOV Y, A
    case 0x122D: if (cpu.read_byte(0x122D) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1903 MOV A, UNK117C + Y
    case 0x122E: if (cpu.read_byte(0x122E) != 0xF6 || cpu.read_byte(0x122F) != 0x7C || cpu.read_byte(0x1230) != 0x11) return false; cpu.execute_instruction<0xF6>(0x117C, 3); return true;
    // src/spc700/main.spc700.s:1904 DEC UNK0020
    case 0x1231: if (cpu.read_byte(0x1231) != 0x8B || cpu.read_byte(0x1232) != 0x20) return false; cpu.execute_instruction<0x8B>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1905 AND UNK0020, #$F8
    case 0x1233: if (cpu.read_byte(0x1233) != 0x38 || cpu.read_byte(0x1234) != 0xF8 || cpu.read_byte(0x1235) != 0x20) return false; cpu.execute_instruction<0x38>(0x20F8, 3); return true;
    // src/spc700/main.spc700.s:1906 ASL UNK0020
    case 0x1236: if (cpu.read_byte(0x1236) != 0x0B || cpu.read_byte(0x1237) != 0x20) return false; cpu.execute_instruction<0x0B>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1907 OR A, UNK0020
    case 0x1238: if (cpu.read_byte(0x1238) != 0x04 || cpu.read_byte(0x1239) != 0x20) return false; cpu.execute_instruction<0x04>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1908 MOV X, A
    case 0x123A: if (cpu.read_byte(0x123A) != 0x5D) return false; cpu.execute_instruction<0x5D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1909 MOV A, UNK002E
    case 0x123B: if (cpu.read_byte(0x123B) != 0xE4 || cpu.read_byte(0x123C) != 0x2E) return false; cpu.execute_instruction<0xE4>(0x002E, 2); return true;
    // src/spc700/main.spc700.s:1910 MOV A, X
    case 0x123D: if (cpu.read_byte(0x123D) != 0x7D) return false; cpu.execute_instruction<0x7D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1911 MOV Y, A
    case 0x123E: if (cpu.read_byte(0x123E) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1912 MOV A, (UNK0024) + Y
    case 0x123F: if (cpu.read_byte(0x123F) != 0xF7 || cpu.read_byte(0x1240) != 0x24) return false; cpu.execute_instruction<0xF7>(0x0024, 2); return true;
    // src/spc700/main.spc700.s:1913 MOV UNK0020, A
    case 0x1241: if (cpu.read_byte(0x1241) != 0xC4 || cpu.read_byte(0x1242) != 0x20) return false; cpu.execute_instruction<0xC4>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1914 INCW UNK0024
    case 0x1243: if (cpu.read_byte(0x1243) != 0x3A || cpu.read_byte(0x1244) != 0x24) return false; cpu.execute_instruction<0x3A>(0x0024, 2); return true;
    // src/spc700/main.spc700.s:1915 MOV A, (UNK0024) + Y
    case 0x1245: if (cpu.read_byte(0x1245) != 0xF7 || cpu.read_byte(0x1246) != 0x24) return false; cpu.execute_instruction<0xF7>(0x0024, 2); return true;
    // src/spc700/main.spc700.s:1916 MOV UNK0021, A
    case 0x1247: if (cpu.read_byte(0x1247) != 0xC4 || cpu.read_byte(0x1248) != 0x21) return false; cpu.execute_instruction<0xC4>(0x0021, 2); return true;
    // src/spc700/main.spc700.s:1917 PUSH X
    case 0x1249: if (cpu.read_byte(0x1249) != 0x4D) return false; cpu.execute_instruction<0x4D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1918 DECW UNK0020
    case 0x124A: if (cpu.read_byte(0x124A) != 0x1A || cpu.read_byte(0x124B) != 0x20) return false; cpu.execute_instruction<0x1A>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1919 MOV X, #$00
    case 0x124C: if (cpu.read_byte(0x124C) != 0xCD || cpu.read_byte(0x124D) != 0x00) return false; cpu.execute_instruction<0xCD>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:1920 MOV A, (UNK0020 + X)
    case 0x124E: if (cpu.read_byte(0x124E) != 0xE7 || cpu.read_byte(0x124F) != 0x20) return false; cpu.execute_instruction<0xE7>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1921 MOV X, UNK002E
    case 0x1250: if (cpu.read_byte(0x1250) != 0xF8 || cpu.read_byte(0x1251) != 0x2E) return false; cpu.execute_instruction<0xF8>(0x002E, 2); return true;
    // src/spc700/main.spc700.s:1922 MOV UNK048C + X, A
    case 0x1252: if (cpu.read_byte(0x1252) != 0xD5 || cpu.read_byte(0x1253) != 0x8C || cpu.read_byte(0x1254) != 0x04) return false; cpu.execute_instruction<0xD5>(0x048C, 3); return true;
    // src/spc700/main.spc700.s:1923 INCW UNK0020
    case 0x1255: if (cpu.read_byte(0x1255) != 0x3A || cpu.read_byte(0x1256) != 0x20) return false; cpu.execute_instruction<0x3A>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1924 MOV X, A
    case 0x1257: if (cpu.read_byte(0x1257) != 0x5D) return false; cpu.execute_instruction<0x5D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1925 JMP (UNK125B + X)
    case 0x1258: if (cpu.read_byte(0x1258) != 0x1F || cpu.read_byte(0x1259) != 0x5B || cpu.read_byte(0x125A) != 0x12) return false; cpu.execute_instruction<0x1F>(0x125B, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK126D.
bool execute_audio_unresolved_unk126d_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1939 JMP UNK131A
    case 0x126D: if (cpu.read_byte(0x126D) != 0x5F || cpu.read_byte(0x126E) != 0x1A || cpu.read_byte(0x126F) != 0x13) return false; cpu.execute_instruction<0x5F>(0x131A, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK1270.
bool execute_audio_unresolved_unk1270_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1942 POP X
    case 0x1270: if (cpu.read_byte(0x1270) != 0xCE) return false; cpu.execute_instruction<0xCE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1943 MOV A, UNK0020
    case 0x1271: if (cpu.read_byte(0x1271) != 0xE4 || cpu.read_byte(0x1272) != 0x20) return false; cpu.execute_instruction<0xE4>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1944 MOV Y, UNK0021
    case 0x1273: if (cpu.read_byte(0x1273) != 0xEB || cpu.read_byte(0x1274) != 0x21) return false; cpu.execute_instruction<0xEB>(0x0021, 2); return true;
    // src/spc700/main.spc700.s:1945 JMP UNK0F56
    case 0x1275: if (cpu.read_byte(0x1275) != 0x5F || cpu.read_byte(0x1276) != 0x56 || cpu.read_byte(0x1277) != 0x0F) return false; cpu.execute_instruction<0x5F>(0x0F56, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK1278.
bool execute_audio_unresolved_unk1278_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1948 POP X
    case 0x1278: if (cpu.read_byte(0x1278) != 0xCE) return false; cpu.execute_instruction<0xCE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1949 MOV A, UNK0020
    case 0x1279: if (cpu.read_byte(0x1279) != 0xE4 || cpu.read_byte(0x127A) != 0x20) return false; cpu.execute_instruction<0xE4>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1950 MOV Y, UNK0021
    case 0x127B: if (cpu.read_byte(0x127B) != 0xEB || cpu.read_byte(0x127C) != 0x21) return false; cpu.execute_instruction<0xEB>(0x0021, 2); return true;
    // src/spc700/main.spc700.s:1951 JMP UNK0F4B
    case 0x127D: if (cpu.read_byte(0x127D) != 0x5F || cpu.read_byte(0x127E) != 0x4B || cpu.read_byte(0x127F) != 0x0F) return false; cpu.execute_instruction<0x5F>(0x0F4B, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK1280.
bool execute_audio_unresolved_unk1280_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1954 POP X
    case 0x1280: if (cpu.read_byte(0x1280) != 0xCE) return false; cpu.execute_instruction<0xCE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1955 MOV A, UNK0020
    case 0x1281: if (cpu.read_byte(0x1281) != 0xE4 || cpu.read_byte(0x1282) != 0x20) return false; cpu.execute_instruction<0xE4>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1956 MOV Y, UNK0021
    case 0x1283: if (cpu.read_byte(0x1283) != 0xEB || cpu.read_byte(0x1284) != 0x21) return false; cpu.execute_instruction<0xEB>(0x0021, 2); return true;
    // src/spc700/main.spc700.s:1957 JMP UNK14DF
    case 0x1285: if (cpu.read_byte(0x1285) != 0x5F || cpu.read_byte(0x1286) != 0xDF || cpu.read_byte(0x1287) != 0x14) return false; cpu.execute_instruction<0x5F>(0x14DF, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK1288.
bool execute_audio_unresolved_unk1288_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1960 POP X
    case 0x1288: if (cpu.read_byte(0x1288) != 0xCE) return false; cpu.execute_instruction<0xCE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1961 MOV X, #$00
    case 0x1289: if (cpu.read_byte(0x1289) != 0xCD || cpu.read_byte(0x128A) != 0x00) return false; cpu.execute_instruction<0xCD>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:1962 DECW UNK0020
    case 0x128B: if (cpu.read_byte(0x128B) != 0x1A || cpu.read_byte(0x128C) != 0x20) return false; cpu.execute_instruction<0x1A>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1963 DECW UNK0020
    case 0x128D: if (cpu.read_byte(0x128D) != 0x1A || cpu.read_byte(0x128E) != 0x20) return false; cpu.execute_instruction<0x1A>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1964 MOV A, (UNK0020 + X)
    case 0x128F: if (cpu.read_byte(0x128F) != 0xE7 || cpu.read_byte(0x1290) != 0x20) return false; cpu.execute_instruction<0xE7>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1965 MOV UNK0027, A
    case 0x1291: if (cpu.read_byte(0x1291) != 0xC4 || cpu.read_byte(0x1292) != 0x27) return false; cpu.execute_instruction<0xC4>(0x0027, 2); return true;
    // src/spc700/main.spc700.s:1966 DECW UNK0020
    case 0x1293: if (cpu.read_byte(0x1293) != 0x1A || cpu.read_byte(0x1294) != 0x20) return false; cpu.execute_instruction<0x1A>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1967 MOV A, (UNK0020 + X)
    case 0x1295: if (cpu.read_byte(0x1295) != 0xE7 || cpu.read_byte(0x1296) != 0x20) return false; cpu.execute_instruction<0xE7>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1968 MOV UNK0026, A
    case 0x1297: if (cpu.read_byte(0x1297) != 0xC4 || cpu.read_byte(0x1298) != 0x26) return false; cpu.execute_instruction<0xC4>(0x0026, 2); return true;
    // src/spc700/main.spc700.s:1969 DECW UNK0020
    case 0x1299: if (cpu.read_byte(0x1299) != 0x1A || cpu.read_byte(0x129A) != 0x20) return false; cpu.execute_instruction<0x1A>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1970 MOV A, (UNK0020 + X)
    case 0x129B: if (cpu.read_byte(0x129B) != 0xE7 || cpu.read_byte(0x129C) != 0x20) return false; cpu.execute_instruction<0xE7>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1971 MOV UNK0029, A
    case 0x129D: if (cpu.read_byte(0x129D) != 0xC4 || cpu.read_byte(0x129E) != 0x29) return false; cpu.execute_instruction<0xC4>(0x0029, 2); return true;
    // src/spc700/main.spc700.s:1972 DECW UNK0020
    case 0x129F: if (cpu.read_byte(0x129F) != 0x1A || cpu.read_byte(0x12A0) != 0x20) return false; cpu.execute_instruction<0x1A>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1973 MOV A, (UNK0020 + X)
    case 0x12A1: if (cpu.read_byte(0x12A1) != 0xE7 || cpu.read_byte(0x12A2) != 0x20) return false; cpu.execute_instruction<0xE7>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1974 MOV UNK0028, A
    case 0x12A3: if (cpu.read_byte(0x12A3) != 0xC4 || cpu.read_byte(0x12A4) != 0x28) return false; cpu.execute_instruction<0xC4>(0x0028, 2); return true;
    // src/spc700/main.spc700.s:1975 INCW UNK0020
    case 0x12A5: if (cpu.read_byte(0x12A5) != 0x3A || cpu.read_byte(0x12A6) != 0x20) return false; cpu.execute_instruction<0x3A>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1976 INCW UNK0020
    case 0x12A7: if (cpu.read_byte(0x12A7) != 0x3A || cpu.read_byte(0x12A8) != 0x20) return false; cpu.execute_instruction<0x3A>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1977 INCW UNK0020
    case 0x12A9: if (cpu.read_byte(0x12A9) != 0x3A || cpu.read_byte(0x12AA) != 0x20) return false; cpu.execute_instruction<0x3A>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1978 INCW UNK0020
    case 0x12AB: if (cpu.read_byte(0x12AB) != 0x3A || cpu.read_byte(0x12AC) != 0x20) return false; cpu.execute_instruction<0x3A>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1979 INCW UNK0020
    case 0x12AD: if (cpu.read_byte(0x12AD) != 0x3A || cpu.read_byte(0x12AE) != 0x20) return false; cpu.execute_instruction<0x3A>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1980 MOV Y, #$05
    case 0x12AF: if (cpu.read_byte(0x12AF) != 0x8D || cpu.read_byte(0x12B0) != 0x05) return false; cpu.execute_instruction<0x8D>(0x0005, 2); return true;
    // src/spc700/main.spc700.s:1981 MOV A, (UNK0020) + Y
    case 0x12B1: if (cpu.read_byte(0x12B1) != 0xF7 || cpu.read_byte(0x12B2) != 0x20) return false; cpu.execute_instruction<0xF7>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1982 MOV X, A
    case 0x12B3: if (cpu.read_byte(0x12B3) != 0x5D) return false; cpu.execute_instruction<0x5D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1983 INC Y
    case 0x12B4: if (cpu.read_byte(0x12B4) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:1984 MOV A, (UNK0020) + Y
    case 0x12B5: if (cpu.read_byte(0x12B5) != 0xF7 || cpu.read_byte(0x12B6) != 0x20) return false; cpu.execute_instruction<0xF7>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1985 MOV UNK002C, A
    case 0x12B7: if (cpu.read_byte(0x12B7) != 0xC4 || cpu.read_byte(0x12B8) != 0x2C) return false; cpu.execute_instruction<0xC4>(0x002C, 2); return true;
    // src/spc700/main.spc700.s:1986 MOV A, UNK0020
    case 0x12B9: if (cpu.read_byte(0x12B9) != 0xE4 || cpu.read_byte(0x12BA) != 0x20) return false; cpu.execute_instruction<0xE4>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1987 MOV Y, UNK0021
    case 0x12BB: if (cpu.read_byte(0x12BB) != 0xEB || cpu.read_byte(0x12BC) != 0x21) return false; cpu.execute_instruction<0xEB>(0x0021, 2); return true;
    // src/spc700/main.spc700.s:1988 CALL UNK14EE
    case 0x12BD: if (cpu.read_byte(0x12BD) != 0x3F || cpu.read_byte(0x12BE) != 0xEE || cpu.read_byte(0x12BF) != 0x14) return false; cpu.execute_instruction<0x3F>(0x14EE, 3); return true;
    // src/spc700/main.spc700.s:1989 MOV A, #$00
    case 0x12C0: if (cpu.read_byte(0x12C0) != 0xE8 || cpu.read_byte(0x12C1) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:1990 MOV Y, #$00
    case 0x12C2: if (cpu.read_byte(0x12C2) != 0x8D || cpu.read_byte(0x12C3) != 0x00) return false; cpu.execute_instruction<0x8D>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:1991 JMP UNK10FC
    case 0x12C4: if (cpu.read_byte(0x12C4) != 0x5F || cpu.read_byte(0x12C5) != 0xFC || cpu.read_byte(0x12C6) != 0x10) return false; cpu.execute_instruction<0x5F>(0x10FC, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK12C7.
bool execute_audio_unresolved_unk12c7_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:1994 MOV X, #$00
    case 0x12C7: if (cpu.read_byte(0x12C7) != 0xCD || cpu.read_byte(0x12C8) != 0x00) return false; cpu.execute_instruction<0xCD>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:1995 DECW UNK0020
    case 0x12C9: if (cpu.read_byte(0x12C9) != 0x1A || cpu.read_byte(0x12CA) != 0x20) return false; cpu.execute_instruction<0x1A>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1996 DECW UNK0020
    case 0x12CB: if (cpu.read_byte(0x12CB) != 0x1A || cpu.read_byte(0x12CC) != 0x20) return false; cpu.execute_instruction<0x1A>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1997 MOV A, (UNK0020 + X)
    case 0x12CD: if (cpu.read_byte(0x12CD) != 0xE7 || cpu.read_byte(0x12CE) != 0x20) return false; cpu.execute_instruction<0xE7>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:1998 MOV UNK0023, A
    case 0x12CF: if (cpu.read_byte(0x12CF) != 0xC4 || cpu.read_byte(0x12D0) != 0x23) return false; cpu.execute_instruction<0xC4>(0x0023, 2); return true;
    // src/spc700/main.spc700.s:1999 DECW UNK0020
    case 0x12D1: if (cpu.read_byte(0x12D1) != 0x1A || cpu.read_byte(0x12D2) != 0x20) return false; cpu.execute_instruction<0x1A>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:2000 MOV A, (UNK0020 + X)
    case 0x12D3: if (cpu.read_byte(0x12D3) != 0xE7 || cpu.read_byte(0x12D4) != 0x20) return false; cpu.execute_instruction<0xE7>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:2001 MOV UNK0022, A
    case 0x12D5: if (cpu.read_byte(0x12D5) != 0xC4 || cpu.read_byte(0x12D6) != 0x22) return false; cpu.execute_instruction<0xC4>(0x0022, 2); return true;
    // src/spc700/main.spc700.s:2002 POP X
    case 0x12D7: if (cpu.read_byte(0x12D7) != 0xCE) return false; cpu.execute_instruction<0xCE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2003 MOV A, UNK002E
    case 0x12D8: if (cpu.read_byte(0x12D8) != 0xE4 || cpu.read_byte(0x12D9) != 0x2E) return false; cpu.execute_instruction<0xE4>(0x002E, 2); return true;
    // src/spc700/main.spc700.s:2004 CMP A, #$03
    case 0x12DA: if (cpu.read_byte(0x12DA) != 0x68 || cpu.read_byte(0x12DB) != 0x03) return false; cpu.execute_instruction<0x68>(0x0003, 2); return true;
    // src/spc700/main.spc700.s:2005 BEQ UNK12F3
    case 0x12DC: if (cpu.read_byte(0x12DC) != 0xF0 || cpu.read_byte(0x12DD) != 0x15) return false; cpu.execute_instruction<0xF0>(0x0015, 2); return true;
    // src/spc700/main.spc700.s:2006 CMP A, #$02
    case 0x12DE: if (cpu.read_byte(0x12DE) != 0x68 || cpu.read_byte(0x12DF) != 0x02) return false; cpu.execute_instruction<0x68>(0x0002, 2); return true;
    // src/spc700/main.spc700.s:2007 BEQ UNK1300
    case 0x12E0: if (cpu.read_byte(0x12E0) != 0xF0 || cpu.read_byte(0x12E1) != 0x1E) return false; cpu.execute_instruction<0xF0>(0x001E, 2); return true;
    // src/spc700/main.spc700.s:2008 CMP A, #$01
    case 0x12E2: if (cpu.read_byte(0x12E2) != 0x68 || cpu.read_byte(0x12E3) != 0x01) return false; cpu.execute_instruction<0x68>(0x0001, 2); return true;
    // src/spc700/main.spc700.s:2009 BEQ UNK130D
    case 0x12E4: if (cpu.read_byte(0x12E4) != 0xF0 || cpu.read_byte(0x12E5) != 0x27) return false; cpu.execute_instruction<0xF0>(0x0027, 2); return true;
    // src/spc700/main.spc700.s:2010 MOV A, UNK0022
    case 0x12E6: if (cpu.read_byte(0x12E6) != 0xE4 || cpu.read_byte(0x12E7) != 0x22) return false; cpu.execute_instruction<0xE4>(0x0022, 2); return true;
    // src/spc700/main.spc700.s:2011 MOV UNK0440, A
    case 0x12E8: if (cpu.read_byte(0x12E8) != 0xC5 || cpu.read_byte(0x12E9) != 0x40 || cpu.read_byte(0x12EA) != 0x04) return false; cpu.execute_instruction<0xC5>(0x0440, 3); return true;
    // src/spc700/main.spc700.s:2012 MOV A, UNK0023
    case 0x12EB: if (cpu.read_byte(0x12EB) != 0xE4 || cpu.read_byte(0x12EC) != 0x23) return false; cpu.execute_instruction<0xE4>(0x0023, 2); return true;
    // src/spc700/main.spc700.s:2013 MOV UNK0441, A
    case 0x12ED: if (cpu.read_byte(0x12ED) != 0xC5 || cpu.read_byte(0x12EE) != 0x41 || cpu.read_byte(0x12EF) != 0x04) return false; cpu.execute_instruction<0xC5>(0x0441, 3); return true;
    // src/spc700/main.spc700.s:2014 JMP (UNK180D + X)
    case 0x12F0: if (cpu.read_byte(0x12F0) != 0x1F || cpu.read_byte(0x12F1) != 0x0D || cpu.read_byte(0x12F2) != 0x18) return false; cpu.execute_instruction<0x1F>(0x180D, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK12F3.
bool execute_audio_unresolved_unk12f3_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2017 MOV A, UNK0022
    case 0x12F3: if (cpu.read_byte(0x12F3) != 0xE4 || cpu.read_byte(0x12F4) != 0x22) return false; cpu.execute_instruction<0xE4>(0x0022, 2); return true;
    // src/spc700/main.spc700.s:2018 MOV UNK0446, A
    case 0x12F5: if (cpu.read_byte(0x12F5) != 0xC5 || cpu.read_byte(0x12F6) != 0x46 || cpu.read_byte(0x12F7) != 0x04) return false; cpu.execute_instruction<0xC5>(0x0446, 3); return true;
    // src/spc700/main.spc700.s:2019 MOV A, UNK0023
    case 0x12F8: if (cpu.read_byte(0x12F8) != 0xE4 || cpu.read_byte(0x12F9) != 0x23) return false; cpu.execute_instruction<0xE4>(0x0023, 2); return true;
    // src/spc700/main.spc700.s:2020 MOV UNK0447, A
    case 0x12FA: if (cpu.read_byte(0x12FA) != 0xC5 || cpu.read_byte(0x12FB) != 0x47 || cpu.read_byte(0x12FC) != 0x04) return false; cpu.execute_instruction<0xC5>(0x0447, 3); return true;
    // src/spc700/main.spc700.s:2021 JMP (UNK16C7 + X)
    case 0x12FD: if (cpu.read_byte(0x12FD) != 0x1F || cpu.read_byte(0x12FE) != 0xC7 || cpu.read_byte(0x12FF) != 0x16) return false; cpu.execute_instruction<0x1F>(0x16C7, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK1300.
bool execute_audio_unresolved_unk1300_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2024 MOV A, UNK0022
    case 0x1300: if (cpu.read_byte(0x1300) != 0xE4 || cpu.read_byte(0x1301) != 0x22) return false; cpu.execute_instruction<0xE4>(0x0022, 2); return true;
    // src/spc700/main.spc700.s:2025 MOV UNK0444, A
    case 0x1302: if (cpu.read_byte(0x1302) != 0xC5 || cpu.read_byte(0x1303) != 0x44 || cpu.read_byte(0x1304) != 0x04) return false; cpu.execute_instruction<0xC5>(0x0444, 3); return true;
    // src/spc700/main.spc700.s:2026 MOV A, UNK0023
    case 0x1305: if (cpu.read_byte(0x1305) != 0xE4 || cpu.read_byte(0x1306) != 0x23) return false; cpu.execute_instruction<0xE4>(0x0023, 2); return true;
    // src/spc700/main.spc700.s:2027 MOV UNK0445, A
    case 0x1307: if (cpu.read_byte(0x1307) != 0xC5 || cpu.read_byte(0x1308) != 0x45 || cpu.read_byte(0x1309) != 0x04) return false; cpu.execute_instruction<0xC5>(0x0445, 3); return true;
    // src/spc700/main.spc700.s:2028 JMP (UNK17C5 + X)
    case 0x130A: if (cpu.read_byte(0x130A) != 0x1F || cpu.read_byte(0x130B) != 0xC5 || cpu.read_byte(0x130C) != 0x17) return false; cpu.execute_instruction<0x1F>(0x17C5, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK130D.
bool execute_audio_unresolved_unk130d_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2031 MOV A, UNK0022
    case 0x130D: if (cpu.read_byte(0x130D) != 0xE4 || cpu.read_byte(0x130E) != 0x22) return false; cpu.execute_instruction<0xE4>(0x0022, 2); return true;
    // src/spc700/main.spc700.s:2032 MOV UNK0442, A
    case 0x130F: if (cpu.read_byte(0x130F) != 0xC5 || cpu.read_byte(0x1310) != 0x42 || cpu.read_byte(0x1311) != 0x04) return false; cpu.execute_instruction<0xC5>(0x0442, 3); return true;
    // src/spc700/main.spc700.s:2033 MOV A, UNK0023
    case 0x1312: if (cpu.read_byte(0x1312) != 0xE4 || cpu.read_byte(0x1313) != 0x23) return false; cpu.execute_instruction<0xE4>(0x0023, 2); return true;
    // src/spc700/main.spc700.s:2034 MOV UNK0443, A
    case 0x1314: if (cpu.read_byte(0x1314) != 0xC5 || cpu.read_byte(0x1315) != 0x43 || cpu.read_byte(0x1316) != 0x04) return false; cpu.execute_instruction<0xC5>(0x0443, 3); return true;
    // src/spc700/main.spc700.s:2035 JMP (UNK17D5 + X)
    case 0x1317: if (cpu.read_byte(0x1317) != 0x1F || cpu.read_byte(0x1318) != 0xD5 || cpu.read_byte(0x1319) != 0x17) return false; cpu.execute_instruction<0x1F>(0x17D5, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK131A.
bool execute_audio_unresolved_unk131a_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2038 MOV A, UNK04B4 + X
    case 0x131A: if (cpu.read_byte(0x131A) != 0xF5 || cpu.read_byte(0x131B) != 0xB4 || cpu.read_byte(0x131C) != 0x04) return false; cpu.execute_instruction<0xF5>(0x04B4, 3); return true;
    // src/spc700/main.spc700.s:2039 MOV UNK0020, A
    case 0x131D: if (cpu.read_byte(0x131D) != 0xC4 || cpu.read_byte(0x131E) != 0x20) return false; cpu.execute_instruction<0xC4>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:2040 BEQ UNK132D
    case 0x131F: if (cpu.read_byte(0x131F) != 0xF0 || cpu.read_byte(0x1320) != 0x0C) return false; cpu.execute_instruction<0xF0>(0x000C, 2); return true;
    // src/spc700/main.spc700.s:2041 CMP A, UNK04D0 + X
    case 0x1321: if (cpu.read_byte(0x1321) != 0x75 || cpu.read_byte(0x1322) != 0xD0 || cpu.read_byte(0x1323) != 0x04) return false; cpu.execute_instruction<0x75>(0x04D0, 3); return true;
    // src/spc700/main.spc700.s:2042 BCS UNK132D
    case 0x1324: if (cpu.read_byte(0x1324) != 0xB0 || cpu.read_byte(0x1325) != 0x07) return false; cpu.execute_instruction<0xB0>(0x0007, 2); return true;
    // src/spc700/main.spc700.s:2043 MOV A, UNK048C + X
    case 0x1326: if (cpu.read_byte(0x1326) != 0xF5 || cpu.read_byte(0x1327) != 0x8C || cpu.read_byte(0x1328) != 0x04) return false; cpu.execute_instruction<0xF5>(0x048C, 3); return true;
    // src/spc700/main.spc700.s:2044 MOV X, A
    case 0x1329: if (cpu.read_byte(0x1329) != 0x5D) return false; cpu.execute_instruction<0x5D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2045 JMP (UNK132E + X)
    case 0x132A: if (cpu.read_byte(0x132A) != 0x1F || cpu.read_byte(0x132B) != 0x2E || cpu.read_byte(0x132C) != 0x13) return false; cpu.execute_instruction<0x1F>(0x132E, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK132D.
bool execute_audio_unresolved_unk132d_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2047 RET
    case 0x132D: if (cpu.read_byte(0x132D) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK1340.
bool execute_audio_unresolved_unk1340_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2061 JMP UNK134E
    case 0x1340: if (cpu.read_byte(0x1340) != 0x5F || cpu.read_byte(0x1341) != 0x4E || cpu.read_byte(0x1342) != 0x13) return false; cpu.execute_instruction<0x5F>(0x134E, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK1343.
bool execute_audio_unresolved_unk1343_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2064 MOV X, UNK002F
    case 0x1343: if (cpu.read_byte(0x1343) != 0xF8 || cpu.read_byte(0x1344) != 0x2F) return false; cpu.execute_instruction<0xF8>(0x002F, 2); return true;
    // src/spc700/main.spc700.s:2065 JMP (UNK0440 + X)
    case 0x1345: if (cpu.read_byte(0x1345) != 0x1F || cpu.read_byte(0x1346) != 0x40 || cpu.read_byte(0x1347) != 0x04) return false; cpu.execute_instruction<0x1F>(0x0440, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK1348.
bool execute_audio_unresolved_unk1348_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2067 JMP UNK148B
    case 0x1348: if (cpu.read_byte(0x1348) != 0x5F || cpu.read_byte(0x1349) != 0x8B || cpu.read_byte(0x134A) != 0x14) return false; cpu.execute_instruction<0x5F>(0x148B, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK134B.
bool execute_audio_unresolved_unk134b_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2069 JMP UNK0FB7
    case 0x134B: if (cpu.read_byte(0x134B) != 0x5F || cpu.read_byte(0x134C) != 0xB7 || cpu.read_byte(0x134D) != 0x0F) return false; cpu.execute_instruction<0x5F>(0x0FB7, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK134E.
bool execute_audio_unresolved_unk134e_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2072 CALL UNK13A0
    case 0x134E: if (cpu.read_byte(0x134E) != 0x3F || cpu.read_byte(0x134F) != 0xA0 || cpu.read_byte(0x1350) != 0x13) return false; cpu.execute_instruction<0x3F>(0x13A0, 3); return true;
    // src/spc700/main.spc700.s:2073 BEQ UNK1391
    case 0x1351: if (cpu.read_byte(0x1351) != 0xF0 || cpu.read_byte(0x1352) != 0x3E) return false; cpu.execute_instruction<0xF0>(0x003E, 2); return true;
    // src/spc700/main.spc700.s:2074 INC UNK00D4 + X
    case 0x1353: if (cpu.read_byte(0x1353) != 0xBB || cpu.read_byte(0x1354) != 0xD4) return false; cpu.execute_instruction<0xBB>(0x00D4, 2); return true;
    // src/spc700/main.spc700.s:2075 MOV A, UNK00D4 + X
    case 0x1355: if (cpu.read_byte(0x1355) != 0xF4 || cpu.read_byte(0x1356) != 0xD4) return false; cpu.execute_instruction<0xF4>(0x00D4, 2); return true;
    // src/spc700/main.spc700.s:2076 CMP A, UNK002C
    case 0x1357: if (cpu.read_byte(0x1357) != 0x64 || cpu.read_byte(0x1358) != 0x2C) return false; cpu.execute_instruction<0x64>(0x002C, 2); return true;
    // src/spc700/main.spc700.s:2077 BNE UNK1384
    case 0x1359: if (cpu.read_byte(0x1359) != 0xD0 || cpu.read_byte(0x135A) != 0x29) return false; cpu.execute_instruction<0xD0>(0x0029, 2); return true;
    // src/spc700/main.spc700.s:2078 MOV A, #$00
    case 0x135B: if (cpu.read_byte(0x135B) != 0xE8 || cpu.read_byte(0x135C) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:2079 MOV UNK00D4 + X, A
    case 0x135D: if (cpu.read_byte(0x135D) != 0xD4 || cpu.read_byte(0x135E) != 0xD4) return false; cpu.execute_instruction<0xD4>(0x00D4, 2); return true;
    // src/spc700/main.spc700.s:2080 MOV A, UNK00D0 + X
    case 0x135F: if (cpu.read_byte(0x135F) != 0xF4 || cpu.read_byte(0x1360) != 0xD0) return false; cpu.execute_instruction<0xF4>(0x00D0, 2); return true;
    // src/spc700/main.spc700.s:2081 MOV Y, A
    case 0x1361: if (cpu.read_byte(0x1361) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2082 INC UNK00D0 + X
    case 0x1362: if (cpu.read_byte(0x1362) != 0xBB || cpu.read_byte(0x1363) != 0xD0) return false; cpu.execute_instruction<0xBB>(0x00D0, 2); return true;
    // src/spc700/main.spc700.s:2083 MOV A, (UNK0026) + Y
    case 0x1364: if (cpu.read_byte(0x1364) != 0xF7 || cpu.read_byte(0x1365) != 0x26) return false; cpu.execute_instruction<0xF7>(0x0026, 2); return true;
    // src/spc700/main.spc700.s:2084 CMP A, #$00
    case 0x1366: if (cpu.read_byte(0x1366) != 0x68 || cpu.read_byte(0x1367) != 0x00) return false; cpu.execute_instruction<0x68>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:2085 BEQ UNK1391
    case 0x1368: if (cpu.read_byte(0x1368) != 0xF0 || cpu.read_byte(0x1369) != 0x27) return false; cpu.execute_instruction<0xF0>(0x0027, 2); return true;
    // src/spc700/main.spc700.s:2086 CMP A, #$7F
    case 0x136A: if (cpu.read_byte(0x136A) != 0x68 || cpu.read_byte(0x136B) != 0x7F) return false; cpu.execute_instruction<0x68>(0x007F, 2); return true;
    // src/spc700/main.spc700.s:2087 BEQ UNK1385
    case 0x136C: if (cpu.read_byte(0x136C) != 0xF0 || cpu.read_byte(0x136D) != 0x17) return false; cpu.execute_instruction<0xF0>(0x0017, 2); return true;
    // src/spc700/main.spc700.s:2088 PUSH Y
    case 0x136E: if (cpu.read_byte(0x136E) != 0x6D) return false; cpu.execute_instruction<0x6D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2089 CALL UNK1124
    case 0x136F: if (cpu.read_byte(0x136F) != 0x3F || cpu.read_byte(0x1370) != 0x24 || cpu.read_byte(0x1371) != 0x11) return false; cpu.execute_instruction<0x3F>(0x1124, 3); return true;
    // src/spc700/main.spc700.s:2090 POP Y
    case 0x1372: if (cpu.read_byte(0x1372) != 0xEE) return false; cpu.execute_instruction<0xEE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2091 MOV A, UNK0029
    case 0x1373: if (cpu.read_byte(0x1373) != 0xE4 || cpu.read_byte(0x1374) != 0x29) return false; cpu.execute_instruction<0xE4>(0x0029, 2); return true;
    // src/spc700/main.spc700.s:2092 BEQ UNK1384
    case 0x1375: if (cpu.read_byte(0x1375) != 0xF0 || cpu.read_byte(0x1376) != 0x0D) return false; cpu.execute_instruction<0xF0>(0x000D, 2); return true;
    // src/spc700/main.spc700.s:2093 MOV A, (UNK0028) + Y
    case 0x1377: if (cpu.read_byte(0x1377) != 0xF7 || cpu.read_byte(0x1378) != 0x28) return false; cpu.execute_instruction<0xF7>(0x0028, 2); return true;
    // src/spc700/main.spc700.s:2094 AND A, #$1F
    case 0x1379: if (cpu.read_byte(0x1379) != 0x28 || cpu.read_byte(0x137A) != 0x1F) return false; cpu.execute_instruction<0x28>(0x001F, 2); return true;
    // src/spc700/main.spc700.s:2095 MOV FLG_MIRROR, A
    case 0x137B: if (cpu.read_byte(0x137B) != 0xC4 || cpu.read_byte(0x137C) != 0x48) return false; cpu.execute_instruction<0xC4>(0x0048, 2); return true;
    // src/spc700/main.spc700.s:2096 MOV A, NON_MIRROR
    case 0x137D: if (cpu.read_byte(0x137D) != 0xE4 || cpu.read_byte(0x137E) != 0x49) return false; cpu.execute_instruction<0xE4>(0x0049, 2); return true;
    // src/spc700/main.spc700.s:2097 OR A, UNK04D7
    case 0x137F: if (cpu.read_byte(0x137F) != 0x05 || cpu.read_byte(0x1380) != 0xD7 || cpu.read_byte(0x1381) != 0x04) return false; cpu.execute_instruction<0x05>(0x04D7, 3); return true;
    // src/spc700/main.spc700.s:2098 MOV NON_MIRROR, A
    case 0x1382: if (cpu.read_byte(0x1382) != 0xC4 || cpu.read_byte(0x1383) != 0x49) return false; cpu.execute_instruction<0xC4>(0x0049, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK1384.
bool execute_audio_unresolved_unk1384_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2100 RET
    case 0x1384: if (cpu.read_byte(0x1384) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK1385.
bool execute_audio_unresolved_unk1385_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2103 MOV A, KOF_MIRROR
    case 0x1385: if (cpu.read_byte(0x1385) != 0xE4 || cpu.read_byte(0x1386) != 0x46) return false; cpu.execute_instruction<0xE4>(0x0046, 2); return true;
    // src/spc700/main.spc700.s:2104 OR A, UNK04D7
    case 0x1387: if (cpu.read_byte(0x1387) != 0x05 || cpu.read_byte(0x1388) != 0xD7 || cpu.read_byte(0x1389) != 0x04) return false; cpu.execute_instruction<0x05>(0x04D7, 3); return true;
    // src/spc700/main.spc700.s:2105 MOV KOF_MIRROR, A
    case 0x138A: if (cpu.read_byte(0x138A) != 0xC4 || cpu.read_byte(0x138B) != 0x46) return false; cpu.execute_instruction<0xC4>(0x0046, 2); return true;
    // src/spc700/main.spc700.s:2106 MOV A, #$00
    case 0x138C: if (cpu.read_byte(0x138C) != 0xE8 || cpu.read_byte(0x138D) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:2107 JMP UNK1144
    case 0x138E: if (cpu.read_byte(0x138E) != 0x5F || cpu.read_byte(0x138F) != 0x44 || cpu.read_byte(0x1390) != 0x11) return false; cpu.execute_instruction<0x5F>(0x1144, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK1391.
bool execute_audio_unresolved_unk1391_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2109 JMP UNK1491
    case 0x1391: if (cpu.read_byte(0x1391) != 0x5F || cpu.read_byte(0x1392) != 0x91 || cpu.read_byte(0x1393) != 0x14) return false; cpu.execute_instruction<0x5F>(0x1491, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK1394.
bool execute_audio_unresolved_unk1394_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2111 MOV UNK049C + X, A
    case 0x1394: if (cpu.read_byte(0x1394) != 0xD5 || cpu.read_byte(0x1395) != 0x9C || cpu.read_byte(0x1396) != 0x04) return false; cpu.execute_instruction<0xD5>(0x049C, 3); return true;
    // src/spc700/main.spc700.s:2112 RET
    case 0x1397: if (cpu.read_byte(0x1397) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2114 MOV UNK04BC + X, A
    case 0x1398: if (cpu.read_byte(0x1398) != 0xD5 || cpu.read_byte(0x1399) != 0xBC || cpu.read_byte(0x139A) != 0x04) return false; cpu.execute_instruction<0xD5>(0x04BC, 3); return true;
    // src/spc700/main.spc700.s:2115 MOV A, Y
    case 0x139B: if (cpu.read_byte(0x139B) != 0xDD) return false; cpu.execute_instruction<0xDD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2116 MOV UNK04C0 + X, A
    case 0x139C: if (cpu.read_byte(0x139C) != 0xD5 || cpu.read_byte(0x139D) != 0xC0 || cpu.read_byte(0x139E) != 0x04) return false; cpu.execute_instruction<0xD5>(0x04C0, 3); return true;
    // src/spc700/main.spc700.s:2117 RET
    case 0x139F: if (cpu.read_byte(0x139F) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK13A0.
bool execute_audio_unresolved_unk13a0_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2120 MOV X, UNK002E
    case 0x13A0: if (cpu.read_byte(0x13A0) != 0xF8 || cpu.read_byte(0x13A1) != 0x2E) return false; cpu.execute_instruction<0xF8>(0x002E, 2); return true;
    // src/spc700/main.spc700.s:2121 MOV A, UNK04B8 + X
    case 0x13A2: if (cpu.read_byte(0x13A2) != 0xF5 || cpu.read_byte(0x13A3) != 0xB8 || cpu.read_byte(0x13A4) != 0x04) return false; cpu.execute_instruction<0xF5>(0x04B8, 3); return true;
    // src/spc700/main.spc700.s:2122 INC A
    case 0x13A5: if (cpu.read_byte(0x13A5) != 0xBC) return false; cpu.execute_instruction<0xBC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2123 MOV UNK04B8 + X, A
    case 0x13A6: if (cpu.read_byte(0x13A6) != 0xD5 || cpu.read_byte(0x13A7) != 0xB8 || cpu.read_byte(0x13A8) != 0x04) return false; cpu.execute_instruction<0xD5>(0x04B8, 3); return true;
    // src/spc700/main.spc700.s:2124 CMP A, #$01
    case 0x13A9: if (cpu.read_byte(0x13A9) != 0x68 || cpu.read_byte(0x13AA) != 0x01) return false; cpu.execute_instruction<0x68>(0x0001, 2); return true;
    // src/spc700/main.spc700.s:2125 BEQ UNK13DF
    case 0x13AB: if (cpu.read_byte(0x13AB) != 0xF0 || cpu.read_byte(0x13AC) != 0x32) return false; cpu.execute_instruction<0xF0>(0x0032, 2); return true;
    // src/spc700/main.spc700.s:2126 CMP A, UNK04BC + X
    case 0x13AD: if (cpu.read_byte(0x13AD) != 0x75 || cpu.read_byte(0x13AE) != 0xBC || cpu.read_byte(0x13AF) != 0x04) return false; cpu.execute_instruction<0x75>(0x04BC, 3); return true;
    // src/spc700/main.spc700.s:2127 BEQ UNK13C7
    case 0x13B0: if (cpu.read_byte(0x13B0) != 0xF0 || cpu.read_byte(0x13B1) != 0x15) return false; cpu.execute_instruction<0xF0>(0x0015, 2); return true;
    // src/spc700/main.spc700.s:2128 CMP A, UNK04C0 + X
    case 0x13B2: if (cpu.read_byte(0x13B2) != 0x75 || cpu.read_byte(0x13B3) != 0xC0 || cpu.read_byte(0x13B4) != 0x04) return false; cpu.execute_instruction<0x75>(0x04C0, 3); return true;
    // src/spc700/main.spc700.s:2129 BNE UNK13D4
    case 0x13B5: if (cpu.read_byte(0x13B5) != 0xD0 || cpu.read_byte(0x13B6) != 0x1D) return false; cpu.execute_instruction<0xD0>(0x001D, 2); return true;
    // src/spc700/main.spc700.s:2130 MOV A, UNK049C + X
    case 0x13B7: if (cpu.read_byte(0x13B7) != 0xF5 || cpu.read_byte(0x13B8) != 0x9C || cpu.read_byte(0x13B9) != 0x04) return false; cpu.execute_instruction<0xF5>(0x049C, 3); return true;
    // src/spc700/main.spc700.s:2131 AND A, #$01
    case 0x13BA: if (cpu.read_byte(0x13BA) != 0x28 || cpu.read_byte(0x13BB) != 0x01) return false; cpu.execute_instruction<0x28>(0x0001, 2); return true;
    // src/spc700/main.spc700.s:2132 BNE UNK13D4
    case 0x13BC: if (cpu.read_byte(0x13BC) != 0xD0 || cpu.read_byte(0x13BD) != 0x16) return false; cpu.execute_instruction<0xD0>(0x0016, 2); return true;
    // src/spc700/main.spc700.s:2133 MOV A, KOF_MIRROR
    case 0x13BE: if (cpu.read_byte(0x13BE) != 0xE4 || cpu.read_byte(0x13BF) != 0x46) return false; cpu.execute_instruction<0xE4>(0x0046, 2); return true;
    // src/spc700/main.spc700.s:2134 OR A, UNK04D7
    case 0x13C0: if (cpu.read_byte(0x13C0) != 0x05 || cpu.read_byte(0x13C1) != 0xD7 || cpu.read_byte(0x13C2) != 0x04) return false; cpu.execute_instruction<0x05>(0x04D7, 3); return true;
    // src/spc700/main.spc700.s:2135 MOV KOF_MIRROR, A
    case 0x13C3: if (cpu.read_byte(0x13C3) != 0xC4 || cpu.read_byte(0x13C4) != 0x46) return false; cpu.execute_instruction<0xC4>(0x0046, 2); return true;
    // src/spc700/main.spc700.s:2136 BNE UNK13D4
    case 0x13C5: if (cpu.read_byte(0x13C5) != 0xD0 || cpu.read_byte(0x13C6) != 0x0D) return false; cpu.execute_instruction<0xD0>(0x000D, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK13C7.
bool execute_audio_unresolved_unk13c7_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2138 CMP A, #$FF
    case 0x13C7: if (cpu.read_byte(0x13C7) != 0x68 || cpu.read_byte(0x13C8) != 0xFF) return false; cpu.execute_instruction<0x68>(0x00FF, 2); return true;
    // src/spc700/main.spc700.s:2139 BNE UNK13CF
    case 0x13C9: if (cpu.read_byte(0x13C9) != 0xD0 || cpu.read_byte(0x13CA) != 0x04) return false; cpu.execute_instruction<0xD0>(0x0004, 2); return true;
    // src/spc700/main.spc700.s:2140 MOV A, #$FE
    case 0x13CB: if (cpu.read_byte(0x13CB) != 0xE8 || cpu.read_byte(0x13CC) != 0xFE) return false; cpu.execute_instruction<0xE8>(0x00FE, 2); return true;
    // src/spc700/main.spc700.s:2141 BNE UNK13D1
    case 0x13CD: if (cpu.read_byte(0x13CD) != 0xD0 || cpu.read_byte(0x13CE) != 0x02) return false; cpu.execute_instruction<0xD0>(0x0002, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK13CF.
bool execute_audio_unresolved_unk13cf_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2143 MOV A, #$00
    case 0x13CF: if (cpu.read_byte(0x13CF) != 0xE8 || cpu.read_byte(0x13D0) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK13D1.
bool execute_audio_unresolved_unk13d1_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2145 MOV UNK04B8 + X, A
    case 0x13D1: if (cpu.read_byte(0x13D1) != 0xD5 || cpu.read_byte(0x13D2) != 0xB8 || cpu.read_byte(0x13D3) != 0x04) return false; cpu.execute_instruction<0xD5>(0x04B8, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK13D4.
bool execute_audio_unresolved_unk13d4_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2147 MOV A, UNK04B8 + X
    case 0x13D4: if (cpu.read_byte(0x13D4) != 0xF5 || cpu.read_byte(0x13D5) != 0xB8 || cpu.read_byte(0x13D6) != 0x04) return false; cpu.execute_instruction<0xF5>(0x04B8, 3); return true;
    // src/spc700/main.spc700.s:2148 RET
    case 0x13D7: if (cpu.read_byte(0x13D7) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK13D8.
bool execute_audio_unresolved_unk13d8_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2151 MOV A, #$81
    case 0x13D8: if (cpu.read_byte(0x13D8) != 0xE8 || cpu.read_byte(0x13D9) != 0x81) return false; cpu.execute_instruction<0xE8>(0x0081, 2); return true;
    // src/spc700/main.spc700.s:2152 MOV UNK049C + X, A
    case 0x13DA: if (cpu.read_byte(0x13DA) != 0xD5 || cpu.read_byte(0x13DB) != 0x9C || cpu.read_byte(0x13DC) != 0x04) return false; cpu.execute_instruction<0xD5>(0x049C, 3); return true;
    // src/spc700/main.spc700.s:2153 BNE UNK13EA
    case 0x13DD: if (cpu.read_byte(0x13DD) != 0xD0 || cpu.read_byte(0x13DE) != 0x0B) return false; cpu.execute_instruction<0xD0>(0x000B, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK13DF.
bool execute_audio_unresolved_unk13df_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2155 MOV A, UNK049C + X
    case 0x13DF: if (cpu.read_byte(0x13DF) != 0xF5 || cpu.read_byte(0x13E0) != 0x9C || cpu.read_byte(0x13E1) != 0x04) return false; cpu.execute_instruction<0xF5>(0x049C, 3); return true;
    // src/spc700/main.spc700.s:2156 CMP A, #$01
    case 0x13E2: if (cpu.read_byte(0x13E2) != 0x68 || cpu.read_byte(0x13E3) != 0x01) return false; cpu.execute_instruction<0x68>(0x0001, 2); return true;
    // src/spc700/main.spc700.s:2157 BEQ UNK13D8
    case 0x13E4: if (cpu.read_byte(0x13E4) != 0xF0 || cpu.read_byte(0x13E5) != 0xF2) return false; cpu.execute_instruction<0xF0>(0x00F2, 2); return true;
    // src/spc700/main.spc700.s:2158 CMP A, #$81
    case 0x13E6: if (cpu.read_byte(0x13E6) != 0x68 || cpu.read_byte(0x13E7) != 0x81) return false; cpu.execute_instruction<0x68>(0x0081, 2); return true;
    // src/spc700/main.spc700.s:2159 BEQ UNK13D4
    case 0x13E8: if (cpu.read_byte(0x13E8) != 0xF0 || cpu.read_byte(0x13E9) != 0xEA) return false; cpu.execute_instruction<0xF0>(0x00EA, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK13EA.
bool execute_audio_unresolved_unk13ea_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2161 MOV A, UNK0450 + X
    case 0x13EA: if (cpu.read_byte(0x13EA) != 0xF5 || cpu.read_byte(0x13EB) != 0x50 || cpu.read_byte(0x13EC) != 0x04) return false; cpu.execute_instruction<0xF5>(0x0450, 3); return true;
    // src/spc700/main.spc700.s:2162 BNE UNK1409
    case 0x13ED: if (cpu.read_byte(0x13ED) != 0xD0 || cpu.read_byte(0x13EE) != 0x1A) return false; cpu.execute_instruction<0xD0>(0x001A, 2); return true;
    // src/spc700/main.spc700.s:2163 INC A
    case 0x13EF: if (cpu.read_byte(0x13EF) != 0xBC) return false; cpu.execute_instruction<0xBC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2164 MOV UNK0450 + X, A
    case 0x13F0: if (cpu.read_byte(0x13F0) != 0xD5 || cpu.read_byte(0x13F1) != 0x50 || cpu.read_byte(0x13F2) != 0x04) return false; cpu.execute_instruction<0xD5>(0x0450, 3); return true;
    // src/spc700/main.spc700.s:2165 CALL UNK1557
    case 0x13F3: if (cpu.read_byte(0x13F3) != 0x3F || cpu.read_byte(0x13F4) != 0x57 || cpu.read_byte(0x13F5) != 0x15) return false; cpu.execute_instruction<0x3F>(0x1557, 3); return true;
    // src/spc700/main.spc700.s:2166 MOV X, UNK002E
    case 0x13F6: if (cpu.read_byte(0x13F6) != 0xF8 || cpu.read_byte(0x13F7) != 0x2E) return false; cpu.execute_instruction<0xF8>(0x002E, 2); return true;
    // src/spc700/main.spc700.s:2167 MOV A, UNK0454 + X
    case 0x13F8: if (cpu.read_byte(0x13F8) != 0xF5 || cpu.read_byte(0x13F9) != 0x54 || cpu.read_byte(0x13FA) != 0x04) return false; cpu.execute_instruction<0xF5>(0x0454, 3); return true;
    // src/spc700/main.spc700.s:2168 BEQ UNK1409
    case 0x13FB: if (cpu.read_byte(0x13FB) != 0xF0 || cpu.read_byte(0x13FC) != 0x0C) return false; cpu.execute_instruction<0xF0>(0x000C, 2); return true;
    // src/spc700/main.spc700.s:2169 MOV X, UNK002F
    case 0x13FD: if (cpu.read_byte(0x13FD) != 0xF8 || cpu.read_byte(0x13FE) != 0x2F) return false; cpu.execute_instruction<0xF8>(0x002F, 2); return true;
    // src/spc700/main.spc700.s:2170 MOV A, UNK0459 + X
    case 0x13FF: if (cpu.read_byte(0x13FF) != 0xF5 || cpu.read_byte(0x1400) != 0x59 || cpu.read_byte(0x1401) != 0x04) return false; cpu.execute_instruction<0xF5>(0x0459, 3); return true;
    // src/spc700/main.spc700.s:2171 MOV Y, A
    case 0x1402: if (cpu.read_byte(0x1402) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2172 MOV A, UNK0458 + X
    case 0x1403: if (cpu.read_byte(0x1403) != 0xF5 || cpu.read_byte(0x1404) != 0x58 || cpu.read_byte(0x1405) != 0x04) return false; cpu.execute_instruction<0xF5>(0x0458, 3); return true;
    // src/spc700/main.spc700.s:2173 CALL UNK110D
    case 0x1406: if (cpu.read_byte(0x1406) != 0x3F || cpu.read_byte(0x1407) != 0x0D || cpu.read_byte(0x1408) != 0x11) return false; cpu.execute_instruction<0x3F>(0x110D, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK1409.
bool execute_audio_unresolved_unk1409_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2175 MOV X, UNK002E
    case 0x1409: if (cpu.read_byte(0x1409) != 0xF8 || cpu.read_byte(0x140A) != 0x2E) return false; cpu.execute_instruction<0xF8>(0x002E, 2); return true;
    // src/spc700/main.spc700.s:2176 MOV A, UNK04C8 + X
    case 0x140B: if (cpu.read_byte(0x140B) != 0xF5 || cpu.read_byte(0x140C) != 0xC8 || cpu.read_byte(0x140D) != 0x04) return false; cpu.execute_instruction<0xF5>(0x04C8, 3); return true;
    // src/spc700/main.spc700.s:2177 BNE UNK13D4
    case 0x140E: if (cpu.read_byte(0x140E) != 0xD0 || cpu.read_byte(0x140F) != 0xC4) return false; cpu.execute_instruction<0xD0>(0x00C4, 2); return true;
    // src/spc700/main.spc700.s:2178 MOV A, KON_MIRROR
    case 0x1410: if (cpu.read_byte(0x1410) != 0xE4 || cpu.read_byte(0x1411) != 0x45) return false; cpu.execute_instruction<0xE4>(0x0045, 2); return true;
    // src/spc700/main.spc700.s:2179 OR A, UNK04D7
    case 0x1412: if (cpu.read_byte(0x1412) != 0x05 || cpu.read_byte(0x1413) != 0xD7 || cpu.read_byte(0x1414) != 0x04) return false; cpu.execute_instruction<0x05>(0x04D7, 3); return true;
    // src/spc700/main.spc700.s:2180 MOV KON_MIRROR, A
    case 0x1415: if (cpu.read_byte(0x1415) != 0xC4 || cpu.read_byte(0x1416) != 0x45) return false; cpu.execute_instruction<0xC4>(0x0045, 2); return true;
    // src/spc700/main.spc700.s:2181 JMP UNK13D4
    case 0x1417: if (cpu.read_byte(0x1417) != 0x5F || cpu.read_byte(0x1418) != 0xD4 || cpu.read_byte(0x1419) != 0x13) return false; cpu.execute_instruction<0x5F>(0x13D4, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK141A.
bool execute_audio_unresolved_unk141a_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2184 CALL UNK1438
    case 0x141A: if (cpu.read_byte(0x141A) != 0x3F || cpu.read_byte(0x141B) != 0x38 || cpu.read_byte(0x141C) != 0x14) return false; cpu.execute_instruction<0x3F>(0x1438, 3); return true;
    // src/spc700/main.spc700.s:2185 MOV A, #$00
    case 0x141D: if (cpu.read_byte(0x141D) != 0xE8 || cpu.read_byte(0x141E) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:2186 MOV UNK0491, A
    case 0x141F: if (cpu.read_byte(0x141F) != 0xC5 || cpu.read_byte(0x1420) != 0x91 || cpu.read_byte(0x1421) != 0x04) return false; cpu.execute_instruction<0xC5>(0x0491, 3); return true;
    // src/spc700/main.spc700.s:2187 MOV UNK0438, A
    case 0x1422: if (cpu.read_byte(0x1422) != 0xC5 || cpu.read_byte(0x1423) != 0x38 || cpu.read_byte(0x1424) != 0x04) return false; cpu.execute_instruction<0xC5>(0x0438, 3); return true;
    // src/spc700/main.spc700.s:2188 MOV UNK0439, A
    case 0x1425: if (cpu.read_byte(0x1425) != 0xC5 || cpu.read_byte(0x1426) != 0x39 || cpu.read_byte(0x1427) != 0x04) return false; cpu.execute_instruction<0xC5>(0x0439, 3); return true;
    // src/spc700/main.spc700.s:2189 MOV UNK043A, A
    case 0x1428: if (cpu.read_byte(0x1428) != 0xC5 || cpu.read_byte(0x1429) != 0x3A || cpu.read_byte(0x142A) != 0x04) return false; cpu.execute_instruction<0xC5>(0x043A, 3); return true;
    // src/spc700/main.spc700.s:2190 MOV UNK04C8, A
    case 0x142B: if (cpu.read_byte(0x142B) != 0xC5 || cpu.read_byte(0x142C) != 0xC8 || cpu.read_byte(0x142D) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04C8, 3); return true;
    // src/spc700/main.spc700.s:2191 MOV UNK04C9, A
    case 0x142E: if (cpu.read_byte(0x142E) != 0xC5 || cpu.read_byte(0x142F) != 0xC9 || cpu.read_byte(0x1430) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04C9, 3); return true;
    // src/spc700/main.spc700.s:2192 MOV UNK04CA, A
    case 0x1431: if (cpu.read_byte(0x1431) != 0xC5 || cpu.read_byte(0x1432) != 0xCA || cpu.read_byte(0x1433) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04CA, 3); return true;
    // src/spc700/main.spc700.s:2193 MOV UNK04CB, A
    case 0x1434: if (cpu.read_byte(0x1434) != 0xC5 || cpu.read_byte(0x1435) != 0xCB || cpu.read_byte(0x1436) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04CB, 3); return true;
    // src/spc700/main.spc700.s:2194 RET
    case 0x1437: if (cpu.read_byte(0x1437) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK1438.
bool execute_audio_unresolved_unk1438_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2197 MOV A, #$00
    case 0x1438: if (cpu.read_byte(0x1438) != 0xE8 || cpu.read_byte(0x1439) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:2198 MOV UNK04B4, A
    case 0x143A: if (cpu.read_byte(0x143A) != 0xC5 || cpu.read_byte(0x143B) != 0xB4 || cpu.read_byte(0x143C) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04B4, 3); return true;
    // src/spc700/main.spc700.s:2199 MOV UNK04B5, A
    case 0x143D: if (cpu.read_byte(0x143D) != 0xC5 || cpu.read_byte(0x143E) != 0xB5 || cpu.read_byte(0x143F) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04B5, 3); return true;
    // src/spc700/main.spc700.s:2200 MOV UNK04B6, A
    case 0x1440: if (cpu.read_byte(0x1440) != 0xC5 || cpu.read_byte(0x1441) != 0xB6 || cpu.read_byte(0x1442) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04B6, 3); return true;
    // src/spc700/main.spc700.s:2201 MOV UNK04B7, A
    case 0x1443: if (cpu.read_byte(0x1443) != 0xC5 || cpu.read_byte(0x1444) != 0xB7 || cpu.read_byte(0x1445) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04B7, 3); return true;
    // src/spc700/main.spc700.s:2202 MOV UNK04B0, A
    case 0x1446: if (cpu.read_byte(0x1446) != 0xC5 || cpu.read_byte(0x1447) != 0xB0 || cpu.read_byte(0x1448) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04B0, 3); return true;
    // src/spc700/main.spc700.s:2203 MOV UNK04B1, A
    case 0x1449: if (cpu.read_byte(0x1449) != 0xC5 || cpu.read_byte(0x144A) != 0xB1 || cpu.read_byte(0x144B) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04B1, 3); return true;
    // src/spc700/main.spc700.s:2204 MOV UNK04B2, A
    case 0x144C: if (cpu.read_byte(0x144C) != 0xC5 || cpu.read_byte(0x144D) != 0xB2 || cpu.read_byte(0x144E) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04B2, 3); return true;
    // src/spc700/main.spc700.s:2205 MOV UNK04B3, A
    case 0x144F: if (cpu.read_byte(0x144F) != 0xC5 || cpu.read_byte(0x1450) != 0xB3 || cpu.read_byte(0x1451) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04B3, 3); return true;
    // src/spc700/main.spc700.s:2206 RET
    case 0x1452: if (cpu.read_byte(0x1452) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK1453.
bool execute_audio_unresolved_unk1453_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2209 CALL UNK145D
    case 0x1453: if (cpu.read_byte(0x1453) != 0x3F || cpu.read_byte(0x1454) != 0x5D || cpu.read_byte(0x1455) != 0x14) return false; cpu.execute_instruction<0x3F>(0x145D, 3); return true;
    // src/spc700/main.spc700.s:2210 CALL UNK146B
    case 0x1456: if (cpu.read_byte(0x1456) != 0x3F || cpu.read_byte(0x1457) != 0x6B || cpu.read_byte(0x1458) != 0x14) return false; cpu.execute_instruction<0x3F>(0x146B, 3); return true;
    // src/spc700/main.spc700.s:2211 CALL UNK1479
    case 0x1459: if (cpu.read_byte(0x1459) != 0x3F || cpu.read_byte(0x145A) != 0x79 || cpu.read_byte(0x145B) != 0x14) return false; cpu.execute_instruction<0x3F>(0x1479, 3); return true;
    // src/spc700/main.spc700.s:2212 RET
    case 0x145C: if (cpu.read_byte(0x145C) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK145D.
bool execute_audio_unresolved_unk145d_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2215 CLR5 SFX_PLAYING_BITS
    case 0x145D: if (cpu.read_byte(0x145D) != 0xB2 || cpu.read_byte(0x145E) != 0x1A) return false; cpu.execute_instruction<0xB2>(0x001A, 2); return true;
    // src/spc700/main.spc700.s:2216 SET5 KOF_MIRROR
    case 0x145F: if (cpu.read_byte(0x145F) != 0xA2 || cpu.read_byte(0x1460) != 0x46) return false; cpu.execute_instruction<0xA2>(0x0046, 2); return true;
    // src/spc700/main.spc700.s:2217 SET5 CURRENT_TRACK_BIT
    case 0x1461: if (cpu.read_byte(0x1461) != 0xA2 || cpu.read_byte(0x1462) != 0x47) return false; cpu.execute_instruction<0xA2>(0x0047, 2); return true;
    // src/spc700/main.spc700.s:2218 SET5 VOLUME_CHANGE_BITS
    case 0x1463: if (cpu.read_byte(0x1463) != 0xA2 || cpu.read_byte(0x1464) != 0x5E) return false; cpu.execute_instruction<0xA2>(0x005E, 2); return true;
    // src/spc700/main.spc700.s:2219 MOV A, #$00
    case 0x1465: if (cpu.read_byte(0x1465) != 0xE8 || cpu.read_byte(0x1466) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:2220 MOV UNK04B5, A
    case 0x1467: if (cpu.read_byte(0x1467) != 0xC5 || cpu.read_byte(0x1468) != 0xB5 || cpu.read_byte(0x1469) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04B5, 3); return true;
    // src/spc700/main.spc700.s:2221 RET
    case 0x146A: if (cpu.read_byte(0x146A) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK146B.
bool execute_audio_unresolved_unk146b_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2224 CLR6 SFX_PLAYING_BITS
    case 0x146B: if (cpu.read_byte(0x146B) != 0xD2 || cpu.read_byte(0x146C) != 0x1A) return false; cpu.execute_instruction<0xD2>(0x001A, 2); return true;
    // src/spc700/main.spc700.s:2225 SET6 KOF_MIRROR
    case 0x146D: if (cpu.read_byte(0x146D) != 0xC2 || cpu.read_byte(0x146E) != 0x46) return false; cpu.execute_instruction<0xC2>(0x0046, 2); return true;
    // src/spc700/main.spc700.s:2226 SET6 CURRENT_TRACK_BIT
    case 0x146F: if (cpu.read_byte(0x146F) != 0xC2 || cpu.read_byte(0x1470) != 0x47) return false; cpu.execute_instruction<0xC2>(0x0047, 2); return true;
    // src/spc700/main.spc700.s:2227 SET6 VOLUME_CHANGE_BITS
    case 0x1471: if (cpu.read_byte(0x1471) != 0xC2 || cpu.read_byte(0x1472) != 0x5E) return false; cpu.execute_instruction<0xC2>(0x005E, 2); return true;
    // src/spc700/main.spc700.s:2228 MOV A, #$00
    case 0x1473: if (cpu.read_byte(0x1473) != 0xE8 || cpu.read_byte(0x1474) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:2229 MOV UNK04B6, A
    case 0x1475: if (cpu.read_byte(0x1475) != 0xC5 || cpu.read_byte(0x1476) != 0xB6 || cpu.read_byte(0x1477) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04B6, 3); return true;
    // src/spc700/main.spc700.s:2230 RET
    case 0x1478: if (cpu.read_byte(0x1478) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK1479.
bool execute_audio_unresolved_unk1479_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2233 CLR7 SFX_PLAYING_BITS
    case 0x1479: if (cpu.read_byte(0x1479) != 0xF2 || cpu.read_byte(0x147A) != 0x1A) return false; cpu.execute_instruction<0xF2>(0x001A, 2); return true;
    // src/spc700/main.spc700.s:2234 SET7 KOF_MIRROR
    case 0x147B: if (cpu.read_byte(0x147B) != 0xE2 || cpu.read_byte(0x147C) != 0x46) return false; cpu.execute_instruction<0xE2>(0x0046, 2); return true;
    // src/spc700/main.spc700.s:2235 SET7 CURRENT_TRACK_BIT
    case 0x147D: if (cpu.read_byte(0x147D) != 0xE2 || cpu.read_byte(0x147E) != 0x47) return false; cpu.execute_instruction<0xE2>(0x0047, 2); return true;
    // src/spc700/main.spc700.s:2236 SET7 VOLUME_CHANGE_BITS
    case 0x147F: if (cpu.read_byte(0x147F) != 0xE2 || cpu.read_byte(0x1480) != 0x5E) return false; cpu.execute_instruction<0xE2>(0x005E, 2); return true;
    // src/spc700/main.spc700.s:2237 MOV A, #$00
    case 0x1481: if (cpu.read_byte(0x1481) != 0xE8 || cpu.read_byte(0x1482) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:2238 MOV UNK04B7, A
    case 0x1483: if (cpu.read_byte(0x1483) != 0xC5 || cpu.read_byte(0x1484) != 0xB7 || cpu.read_byte(0x1485) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04B7, 3); return true;
    // src/spc700/main.spc700.s:2239 RET
    case 0x1486: if (cpu.read_byte(0x1486) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: FX148A.
bool execute_audio_fx148a_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2244 RET
    case 0x148A: if (cpu.read_byte(0x148A) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK148B.
bool execute_audio_unresolved_unk148b_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2247 CALL UNK13A0
    case 0x148B: if (cpu.read_byte(0x148B) != 0x3F || cpu.read_byte(0x148C) != 0xA0 || cpu.read_byte(0x148D) != 0x13) return false; cpu.execute_instruction<0x3F>(0x13A0, 3); return true;
    // src/spc700/main.spc700.s:2248 BEQ UNK1491
    case 0x148E: if (cpu.read_byte(0x148E) != 0xF0 || cpu.read_byte(0x148F) != 0x01) return false; cpu.execute_instruction<0xF0>(0x0001, 2); return true;
    // src/spc700/main.spc700.s:2249 RET
    case 0x1490: if (cpu.read_byte(0x1490) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK1491.
bool execute_audio_unresolved_unk1491_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2252 MOV A, UNK04DF
    case 0x1491: if (cpu.read_byte(0x1491) != 0xE5 || cpu.read_byte(0x1492) != 0xDF || cpu.read_byte(0x1493) != 0x04) return false; cpu.execute_instruction<0xE5>(0x04DF, 3); return true;
    // src/spc700/main.spc700.s:2253 MOV X, A
    case 0x1494: if (cpu.read_byte(0x1494) != 0x5D) return false; cpu.execute_instruction<0x5D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2254 MOV A, SFX_PLAYING_BITS
    case 0x1495: if (cpu.read_byte(0x1495) != 0xE4 || cpu.read_byte(0x1496) != 0x1A) return false; cpu.execute_instruction<0xE4>(0x001A, 2); return true;
    // src/spc700/main.spc700.s:2255 AND A, UNK04D6
    case 0x1497: if (cpu.read_byte(0x1497) != 0x25 || cpu.read_byte(0x1498) != 0xD6 || cpu.read_byte(0x1499) != 0x04) return false; cpu.execute_instruction<0x25>(0x04D6, 3); return true;
    // src/spc700/main.spc700.s:2256 MOV SFX_PLAYING_BITS, A
    case 0x149A: if (cpu.read_byte(0x149A) != 0xC4 || cpu.read_byte(0x149B) != 0x1A) return false; cpu.execute_instruction<0xC4>(0x001A, 2); return true;
    // src/spc700/main.spc700.s:2257 MOV A, CURRENT_TRACK_BIT
    case 0x149C: if (cpu.read_byte(0x149C) != 0xE4 || cpu.read_byte(0x149D) != 0x47) return false; cpu.execute_instruction<0xE4>(0x0047, 2); return true;
    // src/spc700/main.spc700.s:2258 OR A, UNK04D7
    case 0x149E: if (cpu.read_byte(0x149E) != 0x05 || cpu.read_byte(0x149F) != 0xD7 || cpu.read_byte(0x14A0) != 0x04) return false; cpu.execute_instruction<0x05>(0x04D7, 3); return true;
    // src/spc700/main.spc700.s:2259 MOV CURRENT_TRACK_BIT, A
    case 0x14A1: if (cpu.read_byte(0x14A1) != 0xC4 || cpu.read_byte(0x14A2) != 0x47) return false; cpu.execute_instruction<0xC4>(0x0047, 2); return true;
    // src/spc700/main.spc700.s:2260 MOV A, VOLUME_CHANGE_BITS
    case 0x14A3: if (cpu.read_byte(0x14A3) != 0xE4 || cpu.read_byte(0x14A4) != 0x5E) return false; cpu.execute_instruction<0xE4>(0x005E, 2); return true;
    // src/spc700/main.spc700.s:2261 OR A, UNK04D7
    case 0x14A5: if (cpu.read_byte(0x14A5) != 0x05 || cpu.read_byte(0x14A6) != 0xD7 || cpu.read_byte(0x14A7) != 0x04) return false; cpu.execute_instruction<0x05>(0x04D7, 3); return true;
    // src/spc700/main.spc700.s:2262 MOV VOLUME_CHANGE_BITS, A
    case 0x14A8: if (cpu.read_byte(0x14A8) != 0xC4 || cpu.read_byte(0x14A9) != 0x5E) return false; cpu.execute_instruction<0xC4>(0x005E, 2); return true;
    // src/spc700/main.spc700.s:2263 MOV A, UNK04E0 + X
    case 0x14AA: if (cpu.read_byte(0x14AA) != 0xF5 || cpu.read_byte(0x14AB) != 0xE0 || cpu.read_byte(0x14AC) != 0x04) return false; cpu.execute_instruction<0xF5>(0x04E0, 3); return true;
    // src/spc700/main.spc700.s:2264 MOV UNK0321 + X, A
    case 0x14AD: if (cpu.read_byte(0x14AD) != 0xD5 || cpu.read_byte(0x14AE) != 0x21 || cpu.read_byte(0x14AF) != 0x03) return false; cpu.execute_instruction<0xD5>(0x0321, 3); return true;
    // src/spc700/main.spc700.s:2265 MOV A, UNK04F0 + X
    case 0x14B0: if (cpu.read_byte(0x14B0) != 0xF5 || cpu.read_byte(0x14B1) != 0xF0 || cpu.read_byte(0x14B2) != 0x04) return false; cpu.execute_instruction<0xF5>(0x04F0, 3); return true;
    // src/spc700/main.spc700.s:2266 MOV UNK0351 + X, A
    case 0x14B3: if (cpu.read_byte(0x14B3) != 0xD5 || cpu.read_byte(0x14B4) != 0x51 || cpu.read_byte(0x14B5) != 0x03) return false; cpu.execute_instruction<0xD5>(0x0351, 3); return true;
    // src/spc700/main.spc700.s:2267 CALL UNK0C86
    case 0x14B6: if (cpu.read_byte(0x14B6) != 0x3F || cpu.read_byte(0x14B7) != 0x86 || cpu.read_byte(0x14B8) != 0x0C) return false; cpu.execute_instruction<0x3F>(0x0C86, 3); return true;
    // src/spc700/main.spc700.s:2268 MOV A, UNK04DF
    case 0x14B9: if (cpu.read_byte(0x14B9) != 0xE5 || cpu.read_byte(0x14BA) != 0xDF || cpu.read_byte(0x14BB) != 0x04) return false; cpu.execute_instruction<0xE5>(0x04DF, 3); return true;
    // src/spc700/main.spc700.s:2269 MOV X, A
    case 0x14BC: if (cpu.read_byte(0x14BC) != 0x5D) return false; cpu.execute_instruction<0x5D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2270 MOV A, SFX_PLAYING_BITS
    case 0x14BD: if (cpu.read_byte(0x14BD) != 0xE4 || cpu.read_byte(0x14BE) != 0x1A) return false; cpu.execute_instruction<0xE4>(0x001A, 2); return true;
    // src/spc700/main.spc700.s:2271 AND A, UNK04D6
    case 0x14BF: if (cpu.read_byte(0x14BF) != 0x25 || cpu.read_byte(0x14C0) != 0xD6 || cpu.read_byte(0x14C1) != 0x04) return false; cpu.execute_instruction<0x25>(0x04D6, 3); return true;
    // src/spc700/main.spc700.s:2272 MOV SFX_PLAYING_BITS, A
    case 0x14C2: if (cpu.read_byte(0x14C2) != 0xC4 || cpu.read_byte(0x14C3) != 0x1A) return false; cpu.execute_instruction<0xC4>(0x001A, 2); return true;
    // src/spc700/main.spc700.s:2273 MOV A, UNK0211 + X
    case 0x14C4: if (cpu.read_byte(0x14C4) != 0xF5 || cpu.read_byte(0x14C5) != 0x11 || cpu.read_byte(0x14C6) != 0x02) return false; cpu.execute_instruction<0xF5>(0x0211, 3); return true;
    // src/spc700/main.spc700.s:2274 CALL UNK0962
    case 0x14C7: if (cpu.read_byte(0x14C7) != 0x3F || cpu.read_byte(0x14C8) != 0x62 || cpu.read_byte(0x14C9) != 0x09) return false; cpu.execute_instruction<0x3F>(0x0962, 3); return true;
    // src/spc700/main.spc700.s:2275 MOV X, UNK002E
    case 0x14CA: if (cpu.read_byte(0x14CA) != 0xF8 || cpu.read_byte(0x14CB) != 0x2E) return false; cpu.execute_instruction<0xF8>(0x002E, 2); return true;
    // src/spc700/main.spc700.s:2276 MOV A, #$00
    case 0x14CC: if (cpu.read_byte(0x14CC) != 0xE8 || cpu.read_byte(0x14CD) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:2277 MOV UNK04B4 + X, A
    case 0x14CE: if (cpu.read_byte(0x14CE) != 0xD5 || cpu.read_byte(0x14CF) != 0xB4 || cpu.read_byte(0x14D0) != 0x04) return false; cpu.execute_instruction<0xD5>(0x04B4, 3); return true;
    // src/spc700/main.spc700.s:2278 MOV UNK04C8 + X, A
    case 0x14D1: if (cpu.read_byte(0x14D1) != 0xD5 || cpu.read_byte(0x14D2) != 0xC8 || cpu.read_byte(0x14D3) != 0x04) return false; cpu.execute_instruction<0xD5>(0x04C8, 3); return true;
    // src/spc700/main.spc700.s:2279 MOV UNK048C + X, A
    case 0x14D4: if (cpu.read_byte(0x14D4) != 0xD5 || cpu.read_byte(0x14D5) != 0x8C || cpu.read_byte(0x14D6) != 0x04) return false; cpu.execute_instruction<0xD5>(0x048C, 3); return true;
    // src/spc700/main.spc700.s:2280 MOV A, KOF_MIRROR
    case 0x14D7: if (cpu.read_byte(0x14D7) != 0xE4 || cpu.read_byte(0x14D8) != 0x46) return false; cpu.execute_instruction<0xE4>(0x0046, 2); return true;
    // src/spc700/main.spc700.s:2281 OR A, UNK04D7
    case 0x14D9: if (cpu.read_byte(0x14D9) != 0x05 || cpu.read_byte(0x14DA) != 0xD7 || cpu.read_byte(0x14DB) != 0x04) return false; cpu.execute_instruction<0x05>(0x04D7, 3); return true;
    // src/spc700/main.spc700.s:2282 MOV KOF_MIRROR, A
    case 0x14DC: if (cpu.read_byte(0x14DC) != 0xC4 || cpu.read_byte(0x14DD) != 0x46) return false; cpu.execute_instruction<0xC4>(0x0046, 2); return true;
    // src/spc700/main.spc700.s:2283 RET
    case 0x14DE: if (cpu.read_byte(0x14DE) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK14DF.
bool execute_audio_unresolved_unk14df_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2286 MOVW UNK0022, YA
    case 0x14DF: if (cpu.read_byte(0x14DF) != 0xDA || cpu.read_byte(0x14E0) != 0x22) return false; cpu.execute_instruction<0xDA>(0x0022, 2); return true;
    // src/spc700/main.spc700.s:2287 MOV A, #$00
    case 0x14E1: if (cpu.read_byte(0x14E1) != 0xE8 || cpu.read_byte(0x14E2) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:2288 MOV X, UNK002E
    case 0x14E3: if (cpu.read_byte(0x14E3) != 0xF8 || cpu.read_byte(0x14E4) != 0x2E) return false; cpu.execute_instruction<0xF8>(0x002E, 2); return true;
    // src/spc700/main.spc700.s:2289 MOV UNK04CC + X, A
    case 0x14E5: if (cpu.read_byte(0x14E5) != 0xD5 || cpu.read_byte(0x14E6) != 0xCC || cpu.read_byte(0x14E7) != 0x04) return false; cpu.execute_instruction<0xD5>(0x04CC, 3); return true;
    // src/spc700/main.spc700.s:2290 MOV UNK04C8 + X, A
    case 0x14E8: if (cpu.read_byte(0x14E8) != 0xD5 || cpu.read_byte(0x14E9) != 0xC8 || cpu.read_byte(0x14EA) != 0x04) return false; cpu.execute_instruction<0xD5>(0x04C8, 3); return true;
    // src/spc700/main.spc700.s:2291 JMP UNK1505
    case 0x14EB: if (cpu.read_byte(0x14EB) != 0x5F || cpu.read_byte(0x14EC) != 0x05 || cpu.read_byte(0x14ED) != 0x15) return false; cpu.execute_instruction<0x5F>(0x1505, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK14EE.
bool execute_audio_unresolved_unk14ee_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2294 MOVW UNK0022, YA
    case 0x14EE: if (cpu.read_byte(0x14EE) != 0xDA || cpu.read_byte(0x14EF) != 0x22) return false; cpu.execute_instruction<0xDA>(0x0022, 2); return true;
    // src/spc700/main.spc700.s:2295 MOV UNK0024, X
    case 0x14F0: if (cpu.read_byte(0x14F0) != 0xD8 || cpu.read_byte(0x14F1) != 0x24) return false; cpu.execute_instruction<0xD8>(0x0024, 2); return true;
    // src/spc700/main.spc700.s:2296 MOV A, FLG_MIRROR
    case 0x14F2: if (cpu.read_byte(0x14F2) != 0xE4 || cpu.read_byte(0x14F3) != 0x48) return false; cpu.execute_instruction<0xE4>(0x0048, 2); return true;
    // src/spc700/main.spc700.s:2297 AND A, #$E0
    case 0x14F4: if (cpu.read_byte(0x14F4) != 0x28 || cpu.read_byte(0x14F5) != 0xE0) return false; cpu.execute_instruction<0x28>(0x00E0, 2); return true;
    // src/spc700/main.spc700.s:2298 OR A, UNK0024
    case 0x14F6: if (cpu.read_byte(0x14F6) != 0x04 || cpu.read_byte(0x14F7) != 0x24) return false; cpu.execute_instruction<0x04>(0x0024, 2); return true;
    // src/spc700/main.spc700.s:2299 MOV FLG_MIRROR, A
    case 0x14F8: if (cpu.read_byte(0x14F8) != 0xC4 || cpu.read_byte(0x14F9) != 0x48) return false; cpu.execute_instruction<0xC4>(0x0048, 2); return true;
    // src/spc700/main.spc700.s:2300 BNE UNK1500
    case 0x14FA: if (cpu.read_byte(0x14FA) != 0xD0 || cpu.read_byte(0x14FB) != 0x04) return false; cpu.execute_instruction<0xD0>(0x0004, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK14FC.
bool execute_audio_unresolved_unk14fc_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2302 MOVW UNK0022, YA
    case 0x14FC: if (cpu.read_byte(0x14FC) != 0xDA || cpu.read_byte(0x14FD) != 0x22) return false; cpu.execute_instruction<0xDA>(0x0022, 2); return true;
    // src/spc700/main.spc700.s:2303 MOV A, #$00
    case 0x14FE: if (cpu.read_byte(0x14FE) != 0xE8 || cpu.read_byte(0x14FF) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK1500.
bool execute_audio_unresolved_unk1500_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2305 MOV X, UNK002E
    case 0x1500: if (cpu.read_byte(0x1500) != 0xF8 || cpu.read_byte(0x1501) != 0x2E) return false; cpu.execute_instruction<0xF8>(0x002E, 2); return true;
    // src/spc700/main.spc700.s:2306 MOV UNK04CC + X, A
    case 0x1502: if (cpu.read_byte(0x1502) != 0xD5 || cpu.read_byte(0x1503) != 0xCC || cpu.read_byte(0x1504) != 0x04) return false; cpu.execute_instruction<0xD5>(0x04CC, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK1505.
bool execute_audio_unresolved_unk1505_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2308 CALL UNK1547
    case 0x1505: if (cpu.read_byte(0x1505) != 0x3F || cpu.read_byte(0x1506) != 0x47 || cpu.read_byte(0x1507) != 0x15) return false; cpu.execute_instruction<0x3F>(0x1547, 3); return true;
    // src/spc700/main.spc700.s:2309 MOV UNK0020, UNK002A
    case 0x1508: if (cpu.read_byte(0x1508) != 0xFA || cpu.read_byte(0x1509) != 0x2A || cpu.read_byte(0x150A) != 0x20) return false; cpu.execute_instruction<0xFA>(0x202A, 3); return true;
    // src/spc700/main.spc700.s:2310 MOV UNK0021, UNK002B
    case 0x150B: if (cpu.read_byte(0x150B) != 0xFA || cpu.read_byte(0x150C) != 0x2B || cpu.read_byte(0x150D) != 0x21) return false; cpu.execute_instruction<0xFA>(0x212B, 3); return true;
    // src/spc700/main.spc700.s:2311 MOV Y, #$00
    case 0x150E: if (cpu.read_byte(0x150E) != 0x8D || cpu.read_byte(0x150F) != 0x00) return false; cpu.execute_instruction<0x8D>(0x0000, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK1510.
bool execute_audio_unresolved_unk1510_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2313 MOV A, (UNK0022) + Y
    case 0x1510: if (cpu.read_byte(0x1510) != 0xF7 || cpu.read_byte(0x1511) != 0x22) return false; cpu.execute_instruction<0xF7>(0x0022, 2); return true;
    // src/spc700/main.spc700.s:2314 MOV (UNK0020) + Y, A
    case 0x1512: if (cpu.read_byte(0x1512) != 0xD7 || cpu.read_byte(0x1513) != 0x20) return false; cpu.execute_instruction<0xD7>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:2315 INC Y
    case 0x1514: if (cpu.read_byte(0x1514) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2316 CMP Y, #$07
    case 0x1515: if (cpu.read_byte(0x1515) != 0xAD || cpu.read_byte(0x1516) != 0x07) return false; cpu.execute_instruction<0xAD>(0x0007, 2); return true;
    // src/spc700/main.spc700.s:2317 BNE UNK1510
    case 0x1517: if (cpu.read_byte(0x1517) != 0xD0 || cpu.read_byte(0x1518) != 0xF7) return false; cpu.execute_instruction<0xD0>(0x00F7, 2); return true;
    // src/spc700/main.spc700.s:2318 MOV A, SFX_PLAYING_BITS
    case 0x1519: if (cpu.read_byte(0x1519) != 0xE4 || cpu.read_byte(0x151A) != 0x1A) return false; cpu.execute_instruction<0xE4>(0x001A, 2); return true;
    // src/spc700/main.spc700.s:2319 OR A, UNK04D7
    case 0x151B: if (cpu.read_byte(0x151B) != 0x05 || cpu.read_byte(0x151C) != 0xD7 || cpu.read_byte(0x151D) != 0x04) return false; cpu.execute_instruction<0x05>(0x04D7, 3); return true;
    // src/spc700/main.spc700.s:2320 MOV SFX_PLAYING_BITS, A
    case 0x151E: if (cpu.read_byte(0x151E) != 0xC4 || cpu.read_byte(0x151F) != 0x1A) return false; cpu.execute_instruction<0xC4>(0x001A, 2); return true;
    // src/spc700/main.spc700.s:2321 MOV A, KOF_MIRROR
    case 0x1520: if (cpu.read_byte(0x1520) != 0xE4 || cpu.read_byte(0x1521) != 0x46) return false; cpu.execute_instruction<0xE4>(0x0046, 2); return true;
    // src/spc700/main.spc700.s:2322 OR A, UNK04D7
    case 0x1522: if (cpu.read_byte(0x1522) != 0x05 || cpu.read_byte(0x1523) != 0xD7 || cpu.read_byte(0x1524) != 0x04) return false; cpu.execute_instruction<0x05>(0x04D7, 3); return true;
    // src/spc700/main.spc700.s:2323 MOV KOF_MIRROR, A
    case 0x1525: if (cpu.read_byte(0x1525) != 0xC4 || cpu.read_byte(0x1526) != 0x46) return false; cpu.execute_instruction<0xC4>(0x0046, 2); return true;
    // src/spc700/main.spc700.s:2324 MOV A, UNK04D7
    case 0x1527: if (cpu.read_byte(0x1527) != 0xE5 || cpu.read_byte(0x1528) != 0xD7 || cpu.read_byte(0x1529) != 0x04) return false; cpu.execute_instruction<0xE5>(0x04D7, 3); return true;
    // src/spc700/main.spc700.s:2325 MOV A, #$00
    case 0x152A: if (cpu.read_byte(0x152A) != 0xE8 || cpu.read_byte(0x152B) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:2326 MOV UNK04B8 + X, A
    case 0x152C: if (cpu.read_byte(0x152C) != 0xD5 || cpu.read_byte(0x152D) != 0xB8 || cpu.read_byte(0x152E) != 0x04) return false; cpu.execute_instruction<0xD5>(0x04B8, 3); return true;
    // src/spc700/main.spc700.s:2327 MOV UNK00D0 + X, A
    case 0x152F: if (cpu.read_byte(0x152F) != 0xD4 || cpu.read_byte(0x1530) != 0xD0) return false; cpu.execute_instruction<0xD4>(0x00D0, 2); return true;
    // src/spc700/main.spc700.s:2328 MOV UNK00D4 + X, A
    case 0x1531: if (cpu.read_byte(0x1531) != 0xD4 || cpu.read_byte(0x1532) != 0xD4) return false; cpu.execute_instruction<0xD4>(0x00D4, 2); return true;
    // src/spc700/main.spc700.s:2329 MOV UNK00D8 + X, A
    case 0x1533: if (cpu.read_byte(0x1533) != 0xD4 || cpu.read_byte(0x1534) != 0xD8) return false; cpu.execute_instruction<0xD4>(0x00D8, 2); return true;
    // src/spc700/main.spc700.s:2330 MOV UNK049C + X, A
    case 0x1535: if (cpu.read_byte(0x1535) != 0xD5 || cpu.read_byte(0x1536) != 0x9C || cpu.read_byte(0x1537) != 0x04) return false; cpu.execute_instruction<0xD5>(0x049C, 3); return true;
    // src/spc700/main.spc700.s:2331 MOV UNK04B0 + X, A
    case 0x1538: if (cpu.read_byte(0x1538) != 0xD5 || cpu.read_byte(0x1539) != 0xB0 || cpu.read_byte(0x153A) != 0x04) return false; cpu.execute_instruction<0xD5>(0x04B0, 3); return true;
    // src/spc700/main.spc700.s:2332 MOV UNK0450 + X, A
    case 0x153B: if (cpu.read_byte(0x153B) != 0xD5 || cpu.read_byte(0x153C) != 0x50 || cpu.read_byte(0x153D) != 0x04) return false; cpu.execute_instruction<0xD5>(0x0450, 3); return true;
    // src/spc700/main.spc700.s:2333 MOV UNK0454 + X, A
    case 0x153E: if (cpu.read_byte(0x153E) != 0xD5 || cpu.read_byte(0x153F) != 0x54 || cpu.read_byte(0x1540) != 0x04) return false; cpu.execute_instruction<0xD5>(0x0454, 3); return true;
    // src/spc700/main.spc700.s:2334 MOV A, UNK002D
    case 0x1541: if (cpu.read_byte(0x1541) != 0xE4 || cpu.read_byte(0x1542) != 0x2D) return false; cpu.execute_instruction<0xE4>(0x002D, 2); return true;
    // src/spc700/main.spc700.s:2335 MOV UNK04B4 + X, A
    case 0x1543: if (cpu.read_byte(0x1543) != 0xD5 || cpu.read_byte(0x1544) != 0xB4 || cpu.read_byte(0x1545) != 0x04) return false; cpu.execute_instruction<0xD5>(0x04B4, 3); return true;
    // src/spc700/main.spc700.s:2336 RET
    case 0x1546: if (cpu.read_byte(0x1546) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK1547.
bool execute_audio_unresolved_unk1547_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2339 MOV Y, #$00
    case 0x1547: if (cpu.read_byte(0x1547) != 0x8D || cpu.read_byte(0x1548) != 0x00) return false; cpu.execute_instruction<0x8D>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:2340 MOV A, (UNK0022) + Y
    case 0x1549: if (cpu.read_byte(0x1549) != 0xF7 || cpu.read_byte(0x154A) != 0x22) return false; cpu.execute_instruction<0xF7>(0x0022, 2); return true;
    // src/spc700/main.spc700.s:2341 MOV UNK04BC + X, A
    case 0x154B: if (cpu.read_byte(0x154B) != 0xD5 || cpu.read_byte(0x154C) != 0xBC || cpu.read_byte(0x154D) != 0x04) return false; cpu.execute_instruction<0xD5>(0x04BC, 3); return true;
    // src/spc700/main.spc700.s:2342 INC Y
    case 0x154E: if (cpu.read_byte(0x154E) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2343 MOV A, (UNK0022) + Y
    case 0x154F: if (cpu.read_byte(0x154F) != 0xF7 || cpu.read_byte(0x1550) != 0x22) return false; cpu.execute_instruction<0xF7>(0x0022, 2); return true;
    // src/spc700/main.spc700.s:2344 MOV UNK0021, A
    case 0x1551: if (cpu.read_byte(0x1551) != 0xC4 || cpu.read_byte(0x1552) != 0x21) return false; cpu.execute_instruction<0xC4>(0x0021, 2); return true;
    // src/spc700/main.spc700.s:2345 MOV UNK04C0 + X, A
    case 0x1553: if (cpu.read_byte(0x1553) != 0xD5 || cpu.read_byte(0x1554) != 0xC0 || cpu.read_byte(0x1555) != 0x04) return false; cpu.execute_instruction<0xD5>(0x04C0, 3); return true;
    // src/spc700/main.spc700.s:2346 RET
    case 0x1556: if (cpu.read_byte(0x1556) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK1557.
bool execute_audio_unresolved_unk1557_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2349 MOV A, UNK002A
    case 0x1557: if (cpu.read_byte(0x1557) != 0xE4 || cpu.read_byte(0x1558) != 0x2A) return false; cpu.execute_instruction<0xE4>(0x002A, 2); return true;
    // src/spc700/main.spc700.s:2350 INC A
    case 0x1559: if (cpu.read_byte(0x1559) != 0xBC) return false; cpu.execute_instruction<0xBC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2351 INC A
    case 0x155A: if (cpu.read_byte(0x155A) != 0xBC) return false; cpu.execute_instruction<0xBC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2352 MOV Y, UNK002B
    case 0x155B: if (cpu.read_byte(0x155B) != 0xEB || cpu.read_byte(0x155C) != 0x2B) return false; cpu.execute_instruction<0xEB>(0x002B, 2); return true;
    // src/spc700/main.spc700.s:2353 MOVW UNK0022, YA
    case 0x155D: if (cpu.read_byte(0x155D) != 0xDA || cpu.read_byte(0x155E) != 0x22) return false; cpu.execute_instruction<0xDA>(0x0022, 2); return true;
    // src/spc700/main.spc700.s:2354 MOV Y, #$00
    case 0x155F: if (cpu.read_byte(0x155F) != 0x8D || cpu.read_byte(0x1560) != 0x00) return false; cpu.execute_instruction<0x8D>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:2355 MOV A, UNK04CC + X
    case 0x1561: if (cpu.read_byte(0x1561) != 0xF5 || cpu.read_byte(0x1562) != 0xCC || cpu.read_byte(0x1563) != 0x04) return false; cpu.execute_instruction<0xF5>(0x04CC, 3); return true;
    // src/spc700/main.spc700.s:2356 BEQ UNK156F
    case 0x1564: if (cpu.read_byte(0x1564) != 0xF0 || cpu.read_byte(0x1565) != 0x09) return false; cpu.execute_instruction<0xF0>(0x0009, 2); return true;
    // src/spc700/main.spc700.s:2357 MOV A, NON_MIRROR
    case 0x1566: if (cpu.read_byte(0x1566) != 0xE4 || cpu.read_byte(0x1567) != 0x49) return false; cpu.execute_instruction<0xE4>(0x0049, 2); return true;
    // src/spc700/main.spc700.s:2358 OR A, UNK04D7
    case 0x1568: if (cpu.read_byte(0x1568) != 0x05 || cpu.read_byte(0x1569) != 0xD7 || cpu.read_byte(0x156A) != 0x04) return false; cpu.execute_instruction<0x05>(0x04D7, 3); return true;
    // src/spc700/main.spc700.s:2359 MOV NON_MIRROR, A
    case 0x156B: if (cpu.read_byte(0x156B) != 0xC4 || cpu.read_byte(0x156C) != 0x49) return false; cpu.execute_instruction<0xC4>(0x0049, 2); return true;
    // src/spc700/main.spc700.s:2360 BNE UNK1576
    case 0x156D: if (cpu.read_byte(0x156D) != 0xD0 || cpu.read_byte(0x156E) != 0x07) return false; cpu.execute_instruction<0xD0>(0x0007, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK156F.
bool execute_audio_unresolved_unk156f_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2362 MOV A, NON_MIRROR
    case 0x156F: if (cpu.read_byte(0x156F) != 0xE4 || cpu.read_byte(0x1570) != 0x49) return false; cpu.execute_instruction<0xE4>(0x0049, 2); return true;
    // src/spc700/main.spc700.s:2363 AND A, UNK04D6
    case 0x1571: if (cpu.read_byte(0x1571) != 0x25 || cpu.read_byte(0x1572) != 0xD6 || cpu.read_byte(0x1573) != 0x04) return false; cpu.execute_instruction<0x25>(0x04D6, 3); return true;
    // src/spc700/main.spc700.s:2364 MOV NON_MIRROR, A
    case 0x1574: if (cpu.read_byte(0x1574) != 0xC4 || cpu.read_byte(0x1575) != 0x49) return false; cpu.execute_instruction<0xC4>(0x0049, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK1576.
bool execute_audio_unresolved_unk1576_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2366 MOV X, UNK04DF
    case 0x1576: if (cpu.read_byte(0x1576) != 0xE9 || cpu.read_byte(0x1577) != 0xDF || cpu.read_byte(0x1578) != 0x04) return false; cpu.execute_instruction<0xE9>(0x04DF, 3); return true;
    // src/spc700/main.spc700.s:2367 MOV A, UNK0321 + X
    case 0x1579: if (cpu.read_byte(0x1579) != 0xF5 || cpu.read_byte(0x157A) != 0x21 || cpu.read_byte(0x157B) != 0x03) return false; cpu.execute_instruction<0xF5>(0x0321, 3); return true;
    // src/spc700/main.spc700.s:2368 MOV UNK04E0 + X, A
    case 0x157C: if (cpu.read_byte(0x157C) != 0xD5 || cpu.read_byte(0x157D) != 0xE0 || cpu.read_byte(0x157E) != 0x04) return false; cpu.execute_instruction<0xD5>(0x04E0, 3); return true;
    // src/spc700/main.spc700.s:2369 MOV A, UNK0351 + X
    case 0x157F: if (cpu.read_byte(0x157F) != 0xF5 || cpu.read_byte(0x1580) != 0x51 || cpu.read_byte(0x1581) != 0x03) return false; cpu.execute_instruction<0xF5>(0x0351, 3); return true;
    // src/spc700/main.spc700.s:2370 MOV UNK04F0 + X, A
    case 0x1582: if (cpu.read_byte(0x1582) != 0xD5 || cpu.read_byte(0x1583) != 0xF0 || cpu.read_byte(0x1584) != 0x04) return false; cpu.execute_instruction<0xD5>(0x04F0, 3); return true;
    // src/spc700/main.spc700.s:2371 MOV CURRENT_TRACK_BIT, #$00
    case 0x1585: if (cpu.read_byte(0x1585) != 0x8F || cpu.read_byte(0x1586) != 0x00 || cpu.read_byte(0x1587) != 0x47) return false; cpu.execute_instruction<0x8F>(0x4700, 3); return true;
    // src/spc700/main.spc700.s:2372 MOV A, (UNK0022) + Y
    case 0x1588: if (cpu.read_byte(0x1588) != 0xF7 || cpu.read_byte(0x1589) != 0x22) return false; cpu.execute_instruction<0xF7>(0x0022, 2); return true;
    // src/spc700/main.spc700.s:2373 PUSH Y
    case 0x158A: if (cpu.read_byte(0x158A) != 0x6D) return false; cpu.execute_instruction<0x6D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2374 CALL UNK0962
    case 0x158B: if (cpu.read_byte(0x158B) != 0x3F || cpu.read_byte(0x158C) != 0x62 || cpu.read_byte(0x158D) != 0x09) return false; cpu.execute_instruction<0x3F>(0x0962, 3); return true;
    // src/spc700/main.spc700.s:2375 POP Y
    case 0x158E: if (cpu.read_byte(0x158E) != 0xEE) return false; cpu.execute_instruction<0xEE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2376 INC Y
    case 0x158F: if (cpu.read_byte(0x158F) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2377 MOV A, (UNK0022) + Y
    case 0x1590: if (cpu.read_byte(0x1590) != 0xF7 || cpu.read_byte(0x1591) != 0x22) return false; cpu.execute_instruction<0xF7>(0x0022, 2); return true;
    // src/spc700/main.spc700.s:2378 INC Y
    case 0x1592: if (cpu.read_byte(0x1592) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2379 MOV UNK0321 + X, A
    case 0x1593: if (cpu.read_byte(0x1593) != 0xD5 || cpu.read_byte(0x1594) != 0x21 || cpu.read_byte(0x1595) != 0x03) return false; cpu.execute_instruction<0xD5>(0x0321, 3); return true;
    // src/spc700/main.spc700.s:2380 MOV A, (UNK0022) + Y
    case 0x1596: if (cpu.read_byte(0x1596) != 0xF7 || cpu.read_byte(0x1597) != 0x22) return false; cpu.execute_instruction<0xF7>(0x0022, 2); return true;
    // src/spc700/main.spc700.s:2381 AND A, #$C0
    case 0x1598: if (cpu.read_byte(0x1598) != 0x28 || cpu.read_byte(0x1599) != 0xC0) return false; cpu.execute_instruction<0x28>(0x00C0, 2); return true;
    // src/spc700/main.spc700.s:2382 MOV UNK0351 + X, A
    case 0x159A: if (cpu.read_byte(0x159A) != 0xD5 || cpu.read_byte(0x159B) != 0x51 || cpu.read_byte(0x159C) != 0x03) return false; cpu.execute_instruction<0xD5>(0x0351, 3); return true;
    // src/spc700/main.spc700.s:2383 MOV A, (UNK0022) + Y
    case 0x159D: if (cpu.read_byte(0x159D) != 0xF7 || cpu.read_byte(0x159E) != 0x22) return false; cpu.execute_instruction<0xF7>(0x0022, 2); return true;
    // src/spc700/main.spc700.s:2384 INC Y
    case 0x159F: if (cpu.read_byte(0x159F) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2385 AND A, #$3F
    case 0x15A0: if (cpu.read_byte(0x15A0) != 0x28 || cpu.read_byte(0x15A1) != 0x3F) return false; cpu.execute_instruction<0x28>(0x003F, 2); return true;
    // src/spc700/main.spc700.s:2386 MOV UNK0433, A
    case 0x15A2: if (cpu.read_byte(0x15A2) != 0xC5 || cpu.read_byte(0x15A3) != 0x33 || cpu.read_byte(0x15A4) != 0x04) return false; cpu.execute_instruction<0xC5>(0x0433, 3); return true;
    // src/spc700/main.spc700.s:2387 MOV A, STEREO_MONO_FLAG
    case 0x15A5: if (cpu.read_byte(0x15A5) != 0xE5 || cpu.read_byte(0x15A6) != 0x31 || cpu.read_byte(0x15A7) != 0x04) return false; cpu.execute_instruction<0xE5>(0x0431, 3); return true;
    // src/spc700/main.spc700.s:2388 CMP A, #$00
    case 0x15A8: if (cpu.read_byte(0x15A8) != 0x68 || cpu.read_byte(0x15A9) != 0x00) return false; cpu.execute_instruction<0x68>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:2389 BEQ UNK15B1
    case 0x15AA: if (cpu.read_byte(0x15AA) != 0xF0 || cpu.read_byte(0x15AB) != 0x05) return false; cpu.execute_instruction<0xF0>(0x0005, 2); return true;
    // src/spc700/main.spc700.s:2390 MOV A, #$0A
    case 0x15AC: if (cpu.read_byte(0x15AC) != 0xE8 || cpu.read_byte(0x15AD) != 0x0A) return false; cpu.execute_instruction<0xE8>(0x000A, 2); return true;
    // src/spc700/main.spc700.s:2391 MOV UNK0433, A
    case 0x15AE: if (cpu.read_byte(0x15AE) != 0xC5 || cpu.read_byte(0x15AF) != 0x33 || cpu.read_byte(0x15B0) != 0x04) return false; cpu.execute_instruction<0xC5>(0x0433, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK15B1.
bool execute_audio_unresolved_unk15b1_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2393 MOV A, UNK0433
    case 0x15B1: if (cpu.read_byte(0x15B1) != 0xE5 || cpu.read_byte(0x15B2) != 0x33 || cpu.read_byte(0x15B3) != 0x04) return false; cpu.execute_instruction<0xE5>(0x0433, 3); return true;
    // src/spc700/main.spc700.s:2394 MOV UNK0011, A
    case 0x15B4: if (cpu.read_byte(0x15B4) != 0xC4 || cpu.read_byte(0x15B5) != 0x11) return false; cpu.execute_instruction<0xC4>(0x0011, 2); return true;
    // src/spc700/main.spc700.s:2395 MOV UNK0010, #$00
    case 0x15B6: if (cpu.read_byte(0x15B6) != 0x8F || cpu.read_byte(0x15B7) != 0x00 || cpu.read_byte(0x15B8) != 0x10) return false; cpu.execute_instruction<0x8F>(0x1000, 3); return true;
    // src/spc700/main.spc700.s:2396 MOV A, CURRENT_TRACK_BIT
    case 0x15B9: if (cpu.read_byte(0x15B9) != 0xE4 || cpu.read_byte(0x15BA) != 0x47) return false; cpu.execute_instruction<0xE4>(0x0047, 2); return true;
    // src/spc700/main.spc700.s:2397 AND A, UNK04D6
    case 0x15BB: if (cpu.read_byte(0x15BB) != 0x25 || cpu.read_byte(0x15BC) != 0xD6 || cpu.read_byte(0x15BD) != 0x04) return false; cpu.execute_instruction<0x25>(0x04D6, 3); return true;
    // src/spc700/main.spc700.s:2398 MOV CURRENT_TRACK_BIT, A
    case 0x15BE: if (cpu.read_byte(0x15BE) != 0xC4 || cpu.read_byte(0x15BF) != 0x47) return false; cpu.execute_instruction<0xC4>(0x0047, 2); return true;
    // src/spc700/main.spc700.s:2399 PUSH Y
    case 0x15C0: if (cpu.read_byte(0x15C0) != 0x6D) return false; cpu.execute_instruction<0x6D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2400 CALL UNK0C95
    case 0x15C1: if (cpu.read_byte(0x15C1) != 0x3F || cpu.read_byte(0x15C2) != 0x95 || cpu.read_byte(0x15C3) != 0x0C) return false; cpu.execute_instruction<0x3F>(0x0C95, 3); return true;
    // src/spc700/main.spc700.s:2401 POP Y
    case 0x15C4: if (cpu.read_byte(0x15C4) != 0xEE) return false; cpu.execute_instruction<0xEE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2402 MOV A, (UNK0022) + Y
    case 0x15C5: if (cpu.read_byte(0x15C5) != 0xF7 || cpu.read_byte(0x15C6) != 0x22) return false; cpu.execute_instruction<0xF7>(0x0022, 2); return true;
    // src/spc700/main.spc700.s:2403 INC Y
    case 0x15C7: if (cpu.read_byte(0x15C7) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2404 MOV UNK0011, A
    case 0x15C8: if (cpu.read_byte(0x15C8) != 0xC4 || cpu.read_byte(0x15C9) != 0x11) return false; cpu.execute_instruction<0xC4>(0x0011, 2); return true;
    // src/spc700/main.spc700.s:2405 MOV A, (UNK0022) + Y
    case 0x15CA: if (cpu.read_byte(0x15CA) != 0xF7 || cpu.read_byte(0x15CB) != 0x22) return false; cpu.execute_instruction<0xF7>(0x0022, 2); return true;
    // src/spc700/main.spc700.s:2406 MOV UNK0010, A
    case 0x15CC: if (cpu.read_byte(0x15CC) != 0xC4 || cpu.read_byte(0x15CD) != 0x10) return false; cpu.execute_instruction<0xC4>(0x0010, 2); return true;
    // src/spc700/main.spc700.s:2407 MOV A, CURRENT_TRACK_BIT
    case 0x15CE: if (cpu.read_byte(0x15CE) != 0xE4 || cpu.read_byte(0x15CF) != 0x47) return false; cpu.execute_instruction<0xE4>(0x0047, 2); return true;
    // src/spc700/main.spc700.s:2408 AND A, UNK04D6
    case 0x15D0: if (cpu.read_byte(0x15D0) != 0x25 || cpu.read_byte(0x15D1) != 0xD6 || cpu.read_byte(0x15D2) != 0x04) return false; cpu.execute_instruction<0x25>(0x04D6, 3); return true;
    // src/spc700/main.spc700.s:2409 MOV CURRENT_TRACK_BIT, A
    case 0x15D3: if (cpu.read_byte(0x15D3) != 0xC4 || cpu.read_byte(0x15D4) != 0x47) return false; cpu.execute_instruction<0xC4>(0x0047, 2); return true;
    // src/spc700/main.spc700.s:2410 JMP UNK06D4
    case 0x15D5: if (cpu.read_byte(0x15D5) != 0x5F || cpu.read_byte(0x15D6) != 0xD4 || cpu.read_byte(0x15D7) != 0x06) return false; cpu.execute_instruction<0x5F>(0x06D4, 3); return true;
    default: return false;
    }
}
// Assembly source label: FX15DB.
bool execute_audio_fx15db_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2415 MOV A, #$00
    case 0x15DB: if (cpu.read_byte(0x15DB) != 0xE8 || cpu.read_byte(0x15DC) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:2416 MOV UNK04B5, A
    case 0x15DD: if (cpu.read_byte(0x15DD) != 0xC5 || cpu.read_byte(0x15DE) != 0xB5 || cpu.read_byte(0x15DF) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04B5, 3); return true;
    // src/spc700/main.spc700.s:2417 MOV UNK0491, A
    case 0x15E0: if (cpu.read_byte(0x15E0) != 0xC5 || cpu.read_byte(0x15E1) != 0x91 || cpu.read_byte(0x15E2) != 0x04) return false; cpu.execute_instruction<0xC5>(0x0491, 3); return true;
    // src/spc700/main.spc700.s:2418 RET
    case 0x15E3: if (cpu.read_byte(0x15E3) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: FX15E7.
bool execute_audio_fx15e7_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2423 MOV A, #$02
    case 0x15E7: if (cpu.read_byte(0x15E7) != 0xE8 || cpu.read_byte(0x15E8) != 0x02) return false; cpu.execute_instruction<0xE8>(0x0002, 2); return true;
    // src/spc700/main.spc700.s:2424 MOV UNK0492, A
    case 0x15E9: if (cpu.read_byte(0x15E9) != 0xC5 || cpu.read_byte(0x15EA) != 0x92 || cpu.read_byte(0x15EB) != 0x04) return false; cpu.execute_instruction<0xC5>(0x0492, 3); return true;
    // src/spc700/main.spc700.s:2425 MOV A, #$70
    case 0x15EC: if (cpu.read_byte(0x15EC) != 0xE8 || cpu.read_byte(0x15ED) != 0x70) return false; cpu.execute_instruction<0xE8>(0x0070, 2); return true;
    // src/spc700/main.spc700.s:2426 MOV UNK0491, A
    case 0x15EE: if (cpu.read_byte(0x15EE) != 0xC5 || cpu.read_byte(0x15EF) != 0x91 || cpu.read_byte(0x15F0) != 0x04) return false; cpu.execute_instruction<0xC5>(0x0491, 3); return true;
    // src/spc700/main.spc700.s:2427 BNE UNK1600
    case 0x15F1: if (cpu.read_byte(0x15F1) != 0xD0 || cpu.read_byte(0x15F2) != 0x0D) return false; cpu.execute_instruction<0xD0>(0x000D, 2); return true;
    default: return false;
    }
}
// Assembly source label: FX15F6.
bool execute_audio_fx15f6_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2432 MOV A, #$01
    case 0x15F6: if (cpu.read_byte(0x15F6) != 0xE8 || cpu.read_byte(0x15F7) != 0x01) return false; cpu.execute_instruction<0xE8>(0x0001, 2); return true;
    // src/spc700/main.spc700.s:2433 MOV UNK0492, A
    case 0x15F8: if (cpu.read_byte(0x15F8) != 0xC5 || cpu.read_byte(0x15F9) != 0x92 || cpu.read_byte(0x15FA) != 0x04) return false; cpu.execute_instruction<0xC5>(0x0492, 3); return true;
    // src/spc700/main.spc700.s:2434 MOV A, #$18
    case 0x15FB: if (cpu.read_byte(0x15FB) != 0xE8 || cpu.read_byte(0x15FC) != 0x18) return false; cpu.execute_instruction<0xE8>(0x0018, 2); return true;
    // src/spc700/main.spc700.s:2435 MOV UNK0491, A
    case 0x15FD: if (cpu.read_byte(0x15FD) != 0xC5 || cpu.read_byte(0x15FE) != 0x91 || cpu.read_byte(0x15FF) != 0x04) return false; cpu.execute_instruction<0xC5>(0x0491, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK1600.
bool execute_audio_unresolved_unk1600_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2437 MOV UNK005A, A
    case 0x1600: if (cpu.read_byte(0x1600) != 0xC4 || cpu.read_byte(0x1601) != 0x5A) return false; cpu.execute_instruction<0xC4>(0x005A, 2); return true;
    // src/spc700/main.spc700.s:2438 MOV A, #$10
    case 0x1602: if (cpu.read_byte(0x1602) != 0xE8 || cpu.read_byte(0x1603) != 0x10) return false; cpu.execute_instruction<0xE8>(0x0010, 2); return true;
    // src/spc700/main.spc700.s:2439 MOV UNK005B, A
    case 0x1604: if (cpu.read_byte(0x1604) != 0xC4 || cpu.read_byte(0x1605) != 0x5B) return false; cpu.execute_instruction<0xC4>(0x005B, 2); return true;
    // src/spc700/main.spc700.s:2440 JMP UNK0A30
    case 0x1606: if (cpu.read_byte(0x1606) != 0x5F || cpu.read_byte(0x1607) != 0x30 || cpu.read_byte(0x1608) != 0x0A) return false; cpu.execute_instruction<0x5F>(0x0A30, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK1609.
bool execute_audio_unresolved_unk1609_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2443 MOV A, UNK0491
    case 0x1609: if (cpu.read_byte(0x1609) != 0xE5 || cpu.read_byte(0x160A) != 0x91 || cpu.read_byte(0x160B) != 0x04) return false; cpu.execute_instruction<0xE5>(0x0491, 3); return true;
    // src/spc700/main.spc700.s:2444 CMP A, #$00
    case 0x160C: if (cpu.read_byte(0x160C) != 0x68 || cpu.read_byte(0x160D) != 0x00) return false; cpu.execute_instruction<0x68>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:2445 BEQ UNK1627
    case 0x160E: if (cpu.read_byte(0x160E) != 0xF0 || cpu.read_byte(0x160F) != 0x17) return false; cpu.execute_instruction<0xF0>(0x0017, 2); return true;
    // src/spc700/main.spc700.s:2446 CMP A, #$FF
    case 0x1610: if (cpu.read_byte(0x1610) != 0x68 || cpu.read_byte(0x1611) != 0xFF) return false; cpu.execute_instruction<0x68>(0x00FF, 2); return true;
    // src/spc700/main.spc700.s:2447 BEQ UNK1628
    case 0x1612: if (cpu.read_byte(0x1612) != 0xF0 || cpu.read_byte(0x1613) != 0x14) return false; cpu.execute_instruction<0xF0>(0x0014, 2); return true;
    // src/spc700/main.spc700.s:2448 DEC A
    case 0x1614: if (cpu.read_byte(0x1614) != 0x9C) return false; cpu.execute_instruction<0x9C>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2449 MOV UNK0491, A
    case 0x1615: if (cpu.read_byte(0x1615) != 0xC5 || cpu.read_byte(0x1616) != 0x91 || cpu.read_byte(0x1617) != 0x04) return false; cpu.execute_instruction<0xC5>(0x0491, 3); return true;
    // src/spc700/main.spc700.s:2450 CMP A, #$00
    case 0x1618: if (cpu.read_byte(0x1618) != 0x68 || cpu.read_byte(0x1619) != 0x00) return false; cpu.execute_instruction<0x68>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:2451 BNE UNK1627
    case 0x161A: if (cpu.read_byte(0x161A) != 0xD0 || cpu.read_byte(0x161B) != 0x0B) return false; cpu.execute_instruction<0xD0>(0x000B, 2); return true;
    // src/spc700/main.spc700.s:2452 MOV A, #$31
    case 0x161C: if (cpu.read_byte(0x161C) != 0xE8 || cpu.read_byte(0x161D) != 0x31) return false; cpu.execute_instruction<0xE8>(0x0031, 2); return true;
    // src/spc700/main.spc700.s:2453 MOV.w CONTROL, A
    case 0x161E: if (cpu.read_byte(0x161E) != 0xC5 || cpu.read_byte(0x161F) != 0xF1 || cpu.read_byte(0x1620) != 0x00) return false; cpu.execute_instruction<0xC5>(0x00F1, 3); return true;
    // src/spc700/main.spc700.s:2454 CALL UNK1438
    case 0x1621: if (cpu.read_byte(0x1621) != 0x3F || cpu.read_byte(0x1622) != 0x38 || cpu.read_byte(0x1623) != 0x14) return false; cpu.execute_instruction<0x3F>(0x1438, 3); return true;
    // src/spc700/main.spc700.s:2455 CALL UNK1453
    case 0x1624: if (cpu.read_byte(0x1624) != 0x3F || cpu.read_byte(0x1625) != 0x53 || cpu.read_byte(0x1626) != 0x14) return false; cpu.execute_instruction<0x3F>(0x1453, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK1627.
bool execute_audio_unresolved_unk1627_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2457 RET
    case 0x1627: if (cpu.read_byte(0x1627) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK1628.
bool execute_audio_unresolved_unk1628_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2460 MOV A, #$00
    case 0x1628: if (cpu.read_byte(0x1628) != 0xE8 || cpu.read_byte(0x1629) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:2461 MOV UNK0491, A
    case 0x162A: if (cpu.read_byte(0x162A) != 0xC5 || cpu.read_byte(0x162B) != 0x91 || cpu.read_byte(0x162C) != 0x04) return false; cpu.execute_instruction<0xC5>(0x0491, 3); return true;
    // src/spc700/main.spc700.s:2462 RET
    case 0x162D: if (cpu.read_byte(0x162D) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK162E.
bool execute_audio_unresolved_unk162e_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2465 MOV Y, A
    case 0x162E: if (cpu.read_byte(0x162E) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2466 JMP UNK0A24
    case 0x162F: if (cpu.read_byte(0x162F) != 0x5F || cpu.read_byte(0x1630) != 0x24 || cpu.read_byte(0x1631) != 0x0A) return false; cpu.execute_instruction<0x5F>(0x0A24, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK1632.
bool execute_audio_unresolved_unk1632_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2468 MOV Y, A
    case 0x1632: if (cpu.read_byte(0x1632) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2469 MOV A, UNK0053
    case 0x1633: if (cpu.read_byte(0x1633) != 0xE4 || cpu.read_byte(0x1634) != 0x53) return false; cpu.execute_instruction<0xE4>(0x0053, 2); return true;
    // src/spc700/main.spc700.s:2470 MOV UNK0493, A
    case 0x1635: if (cpu.read_byte(0x1635) != 0xC5 || cpu.read_byte(0x1636) != 0x93 || cpu.read_byte(0x1637) != 0x04) return false; cpu.execute_instruction<0xC5>(0x0493, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK1638.
bool execute_audio_unresolved_unk1638_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2472 JMP UNK0A3B
    case 0x1638: if (cpu.read_byte(0x1638) != 0x5F || cpu.read_byte(0x1639) != 0x3B || cpu.read_byte(0x163A) != 0x0A) return false; cpu.execute_instruction<0x5F>(0x0A3B, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK163B.
bool execute_audio_unresolved_unk163b_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2474 MOV A, UNK0493
    case 0x163B: if (cpu.read_byte(0x163B) != 0xE5 || cpu.read_byte(0x163C) != 0x93 || cpu.read_byte(0x163D) != 0x04) return false; cpu.execute_instruction<0xE5>(0x0493, 3); return true;
    // src/spc700/main.spc700.s:2475 MOV Y, A
    case 0x163E: if (cpu.read_byte(0x163E) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2476 BNE UNK1638
    case 0x163F: if (cpu.read_byte(0x163F) != 0xD0 || cpu.read_byte(0x1640) != 0xF7) return false; cpu.execute_instruction<0xD0>(0x00F7, 2); return true;
    // src/spc700/main.spc700.s:2477 MOV UNK0054, A
    case 0x1641: if (cpu.read_byte(0x1641) != 0xC4 || cpu.read_byte(0x1642) != 0x54) return false; cpu.execute_instruction<0xC4>(0x0054, 2); return true;
    // src/spc700/main.spc700.s:2478 MOV A, UNK0020
    case 0x1643: if (cpu.read_byte(0x1643) != 0xE4 || cpu.read_byte(0x1644) != 0x20) return false; cpu.execute_instruction<0xE4>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:2479 MOV UNK0055, A
    case 0x1645: if (cpu.read_byte(0x1645) != 0xC4 || cpu.read_byte(0x1646) != 0x55) return false; cpu.execute_instruction<0xC4>(0x0055, 2); return true;
    // src/spc700/main.spc700.s:2480 JMP UNK0A47
    case 0x1647: if (cpu.read_byte(0x1647) != 0x5F || cpu.read_byte(0x1648) != 0x47 || cpu.read_byte(0x1649) != 0x0A) return false; cpu.execute_instruction<0x5F>(0x0A47, 3); return true;
    // src/spc700/main.spc700.s:2481 MOV UNK02B0 + X, A
    case 0x164A: if (cpu.read_byte(0x164A) != 0xD5 || cpu.read_byte(0x164B) != 0xB0 || cpu.read_byte(0x164C) != 0x02) return false; cpu.execute_instruction<0xD5>(0x02B0, 3); return true;
    // src/spc700/main.spc700.s:2482 MOV A, UNK0020
    case 0x164D: if (cpu.read_byte(0x164D) != 0xE4 || cpu.read_byte(0x164E) != 0x20) return false; cpu.execute_instruction<0xE4>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:2483 MOV UNK02A1 + X, A
    case 0x164F: if (cpu.read_byte(0x164F) != 0xD5 || cpu.read_byte(0x1650) != 0xA1 || cpu.read_byte(0x1651) != 0x02) return false; cpu.execute_instruction<0xD5>(0x02A1, 3); return true;
    // src/spc700/main.spc700.s:2484 MOV A, UNK0021
    case 0x1652: if (cpu.read_byte(0x1652) != 0xE4 || cpu.read_byte(0x1653) != 0x21) return false; cpu.execute_instruction<0xE4>(0x0021, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK1654.
bool execute_audio_unresolved_unk1654_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2486 MOV UNK00B1 + X, A
    case 0x1654: if (cpu.read_byte(0x1654) != 0xD4 || cpu.read_byte(0x1655) != 0xB1) return false; cpu.execute_instruction<0xD4>(0x00B1, 2); return true;
    // src/spc700/main.spc700.s:2487 MOV UNK02C1 + X, A
    case 0x1656: if (cpu.read_byte(0x1656) != 0xD5 || cpu.read_byte(0x1657) != 0xC1 || cpu.read_byte(0x1658) != 0x02) return false; cpu.execute_instruction<0xD5>(0x02C1, 3); return true;
    // src/spc700/main.spc700.s:2488 MOV A, #$00
    case 0x1659: if (cpu.read_byte(0x1659) != 0xE8 || cpu.read_byte(0x165A) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:2489 MOV UNK02B1 + X, A
    case 0x165B: if (cpu.read_byte(0x165B) != 0xD5 || cpu.read_byte(0x165C) != 0xB1 || cpu.read_byte(0x165D) != 0x02) return false; cpu.execute_instruction<0xD5>(0x02B1, 3); return true;
    // src/spc700/main.spc700.s:2490 RET
    case 0x165E: if (cpu.read_byte(0x165E) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2492 MOV A, #$00
    case 0x165F: if (cpu.read_byte(0x165F) != 0xE8 || cpu.read_byte(0x1660) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:2493 BEQ UNK1654
    case 0x1661: if (cpu.read_byte(0x1661) != 0xF0 || cpu.read_byte(0x1662) != 0xF1) return false; cpu.execute_instruction<0xF0>(0x00F1, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK1663.
bool execute_audio_unresolved_unk1663_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2495 MOV UNK0050, A
    case 0x1663: if (cpu.read_byte(0x1663) != 0xC4 || cpu.read_byte(0x1664) != 0x50) return false; cpu.execute_instruction<0xC4>(0x0050, 2); return true;
    // src/spc700/main.spc700.s:2496 RET
    case 0x1665: if (cpu.read_byte(0x1665) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2498 MOV UNK02F0 + X, A
    case 0x1666: if (cpu.read_byte(0x1666) != 0xD5 || cpu.read_byte(0x1667) != 0xF0 || cpu.read_byte(0x1668) != 0x02) return false; cpu.execute_instruction<0xD5>(0x02F0, 3); return true;
    // src/spc700/main.spc700.s:2499 RET
    case 0x1669: if (cpu.read_byte(0x1669) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK166A.
bool execute_audio_unresolved_unk166a_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2502 CALL UNK0A86
    case 0x166A: if (cpu.read_byte(0x166A) != 0x3F || cpu.read_byte(0x166B) != 0x86 || cpu.read_byte(0x166C) != 0x0A) return false; cpu.execute_instruction<0x3F>(0x0A86, 3); return true;
    // src/spc700/main.spc700.s:2503 RET
    case 0x166D: if (cpu.read_byte(0x166D) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK166E.
bool execute_audio_unresolved_unk166e_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2506 MOV UNK0044, X
    case 0x166E: if (cpu.read_byte(0x166E) != 0xD8 || cpu.read_byte(0x166F) != 0x44) return false; cpu.execute_instruction<0xD8>(0x0044, 2); return true;
    // src/spc700/main.spc700.s:2507 MOV UNK0090 + X, A
    case 0x1670: if (cpu.read_byte(0x1670) != 0xD4 || cpu.read_byte(0x1671) != 0x90) return false; cpu.execute_instruction<0xD4>(0x0090, 2); return true;
    // src/spc700/main.spc700.s:2508 PUSH A
    case 0x1672: if (cpu.read_byte(0x1672) != 0x2D) return false; cpu.execute_instruction<0x2D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2509 MOV A, UNK0020
    case 0x1673: if (cpu.read_byte(0x1673) != 0xE4 || cpu.read_byte(0x1674) != 0x20) return false; cpu.execute_instruction<0xE4>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:2510 JMP UNK0A95
    case 0x1675: if (cpu.read_byte(0x1675) != 0x5F || cpu.read_byte(0x1676) != 0x95 || cpu.read_byte(0x1677) != 0x0A) return false; cpu.execute_instruction<0x5F>(0x0A95, 3); return true;
    // src/spc700/main.spc700.s:2511 PUSH A
    case 0x1678: if (cpu.read_byte(0x1678) != 0x2D) return false; cpu.execute_instruction<0x2D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2512 MOV A, #$01
    case 0x1679: if (cpu.read_byte(0x1679) != 0xE8 || cpu.read_byte(0x167A) != 0x01) return false; cpu.execute_instruction<0xE8>(0x0001, 2); return true;
    // src/spc700/main.spc700.s:2513 BRA UNK1680
    case 0x167B: if (cpu.read_byte(0x167B) != 0x2F || cpu.read_byte(0x167C) != 0x03) return false; cpu.execute_instruction<0x2F>(0x0003, 2); return true;
    // src/spc700/main.spc700.s:2514 PUSH A
    case 0x167D: if (cpu.read_byte(0x167D) != 0x2D) return false; cpu.execute_instruction<0x2D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2515 MOV A, #$00
    case 0x167E: if (cpu.read_byte(0x167E) != 0xE8 || cpu.read_byte(0x167F) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK1680.
bool execute_audio_unresolved_unk1680_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2517 MOV UNK0290 + X, A
    case 0x1680: if (cpu.read_byte(0x1680) != 0xD5 || cpu.read_byte(0x1681) != 0x90 || cpu.read_byte(0x1682) != 0x02) return false; cpu.execute_instruction<0xD5>(0x0290, 3); return true;
    // src/spc700/main.spc700.s:2518 POP A
    case 0x1683: if (cpu.read_byte(0x1683) != 0xAE) return false; cpu.execute_instruction<0xAE>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2519 MOV UNK0281 + X, A
    case 0x1684: if (cpu.read_byte(0x1684) != 0xD5 || cpu.read_byte(0x1685) != 0x81 || cpu.read_byte(0x1686) != 0x02) return false; cpu.execute_instruction<0xD5>(0x0281, 3); return true;
    // src/spc700/main.spc700.s:2520 MOV A, UNK0020
    case 0x1687: if (cpu.read_byte(0x1687) != 0xE4 || cpu.read_byte(0x1688) != 0x20) return false; cpu.execute_instruction<0xE4>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:2521 MOV UNK0280 + X, A
    case 0x1689: if (cpu.read_byte(0x1689) != 0xD5 || cpu.read_byte(0x168A) != 0x80 || cpu.read_byte(0x168B) != 0x02) return false; cpu.execute_instruction<0xD5>(0x0280, 3); return true;
    // src/spc700/main.spc700.s:2522 MOV A, UNK0021
    case 0x168C: if (cpu.read_byte(0x168C) != 0xE4 || cpu.read_byte(0x168D) != 0x21) return false; cpu.execute_instruction<0xE4>(0x0021, 2); return true;
    // src/spc700/main.spc700.s:2523 MOV UNK0291 + X, A
    case 0x168E: if (cpu.read_byte(0x168E) != 0xD5 || cpu.read_byte(0x168F) != 0x91 || cpu.read_byte(0x1690) != 0x02) return false; cpu.execute_instruction<0xD5>(0x0291, 3); return true;
    // src/spc700/main.spc700.s:2524 RET
    case 0x1691: if (cpu.read_byte(0x1691) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2526 MOV A, #$00
    case 0x1692: if (cpu.read_byte(0x1692) != 0xE8 || cpu.read_byte(0x1693) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:2527 MOV UNK0280 + X, A
    case 0x1694: if (cpu.read_byte(0x1694) != 0xD5 || cpu.read_byte(0x1695) != 0x80 || cpu.read_byte(0x1696) != 0x02) return false; cpu.execute_instruction<0xD5>(0x0280, 3); return true;
    // src/spc700/main.spc700.s:2528 RET
    case 0x1697: if (cpu.read_byte(0x1697) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2530 JMP UNK09C8
    case 0x1698: if (cpu.read_byte(0x1698) != 0x5F || cpu.read_byte(0x1699) != 0xC8 || cpu.read_byte(0x169A) != 0x09) return false; cpu.execute_instruction<0x5F>(0x09C8, 3); return true;
    // src/spc700/main.spc700.s:2531 MOV UNK0044, X
    case 0x169B: if (cpu.read_byte(0x169B) != 0xD8 || cpu.read_byte(0x169C) != 0x44) return false; cpu.execute_instruction<0xD8>(0x0044, 2); return true;
    // src/spc700/main.spc700.s:2532 MOV UNK0091 + X, A
    case 0x169D: if (cpu.read_byte(0x169D) != 0xD4 || cpu.read_byte(0x169E) != 0x91) return false; cpu.execute_instruction<0xD4>(0x0091, 2); return true;
    // src/spc700/main.spc700.s:2533 PUSH A
    case 0x169F: if (cpu.read_byte(0x169F) != 0x2D) return false; cpu.execute_instruction<0x2D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2534 MOV A, UNK0020
    case 0x16A0: if (cpu.read_byte(0x16A0) != 0xE4 || cpu.read_byte(0x16A1) != 0x20) return false; cpu.execute_instruction<0xE4>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:2535 JMP UNK09DC
    case 0x16A2: if (cpu.read_byte(0x16A2) != 0x5F || cpu.read_byte(0x16A3) != 0xDC || cpu.read_byte(0x16A4) != 0x09) return false; cpu.execute_instruction<0x5F>(0x09DC, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK16A5.
bool execute_audio_unresolved_unk16a5_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2538 MOV X, #$20
    case 0x16A5: if (cpu.read_byte(0x16A5) != 0xCD || cpu.read_byte(0x16A6) != 0x20) return false; cpu.execute_instruction<0xCD>(0x0020, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK16A7.
bool execute_audio_unresolved_unk16a7_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2540 MOV UNK0400 + X, A
    case 0x16A7: if (cpu.read_byte(0x16A7) != 0xD5 || cpu.read_byte(0x16A8) != 0x00 || cpu.read_byte(0x16A9) != 0x04) return false; cpu.execute_instruction<0xD5>(0x0400, 3); return true;
    // src/spc700/main.spc700.s:2541 INC X
    case 0x16AA: if (cpu.read_byte(0x16AA) != 0x3D) return false; cpu.execute_instruction<0x3D>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2542 CMP X, #$00
    case 0x16AB: if (cpu.read_byte(0x16AB) != 0xC8 || cpu.read_byte(0x16AC) != 0x00) return false; cpu.execute_instruction<0xC8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:2543 BNE UNK16A7
    case 0x16AD: if (cpu.read_byte(0x16AD) != 0xD0 || cpu.read_byte(0x16AE) != 0xF8) return false; cpu.execute_instruction<0xD0>(0x00F8, 2); return true;
    // src/spc700/main.spc700.s:2544 MOV Y, A
    case 0x16AF: if (cpu.read_byte(0x16AF) != 0xFD) return false; cpu.execute_instruction<0xFD>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2545 MOV UNK0024, #$00
    case 0x16B0: if (cpu.read_byte(0x16B0) != 0x8F || cpu.read_byte(0x16B1) != 0x00 || cpu.read_byte(0x16B2) != 0x24) return false; cpu.execute_instruction<0x8F>(0x2400, 3); return true;
    // src/spc700/main.spc700.s:2546 MOV UNK0025, #$E8
    case 0x16B3: if (cpu.read_byte(0x16B3) != 0x8F || cpu.read_byte(0x16B4) != 0xE8 || cpu.read_byte(0x16B5) != 0x25) return false; cpu.execute_instruction<0x8F>(0x25E8, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK16B6.
bool execute_audio_unresolved_unk16b6_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2548 MOV (UNK0024) + Y, A
    case 0x16B6: if (cpu.read_byte(0x16B6) != 0xD7 || cpu.read_byte(0x16B7) != 0x24) return false; cpu.execute_instruction<0xD7>(0x0024, 2); return true;
    // src/spc700/main.spc700.s:2549 INC Y
    case 0x16B8: if (cpu.read_byte(0x16B8) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    // src/spc700/main.spc700.s:2550 CMP Y, #$00
    case 0x16B9: if (cpu.read_byte(0x16B9) != 0xAD || cpu.read_byte(0x16BA) != 0x00) return false; cpu.execute_instruction<0xAD>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:2551 BNE UNK16B6
    case 0x16BB: if (cpu.read_byte(0x16BB) != 0xD0 || cpu.read_byte(0x16BC) != 0xF9) return false; cpu.execute_instruction<0xD0>(0x00F9, 2); return true;
    // src/spc700/main.spc700.s:2552 INC UNK0025
    case 0x16BD: if (cpu.read_byte(0x16BD) != 0xAB || cpu.read_byte(0x16BE) != 0x25) return false; cpu.execute_instruction<0xAB>(0x0025, 2); return true;
    // src/spc700/main.spc700.s:2553 CMP UNK0025, #$FF
    case 0x16BF: if (cpu.read_byte(0x16BF) != 0x78 || cpu.read_byte(0x16C0) != 0xFF || cpu.read_byte(0x16C1) != 0x25) return false; cpu.execute_instruction<0x78>(0x25FF, 3); return true;
    // src/spc700/main.spc700.s:2554 BNE UNK16B6
    case 0x16C2: if (cpu.read_byte(0x16C2) != 0xD0 || cpu.read_byte(0x16C3) != 0xF2) return false; cpu.execute_instruction<0xD0>(0x00F2, 2); return true;
    // src/spc700/main.spc700.s:2555 JMP UNK2FC8
    case 0x16C4: if (cpu.read_byte(0x16C4) != 0x5F || cpu.read_byte(0x16C5) != 0xC8 || cpu.read_byte(0x16C6) != 0x2F) return false; cpu.execute_instruction<0x5F>(0x2FC8, 3); return true;
    default: return false;
    }
}
// Assembly source label: FX1810.
bool execute_audio_fx1810_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:69 JMP UNK1491
    case 0x1810: if (cpu.read_byte(0x1810) != 0x5F || cpu.read_byte(0x1811) != 0x91 || cpu.read_byte(0x1812) != 0x14) return false; cpu.execute_instruction<0x5F>(0x1491, 3); return true;
    default: return false;
    }
}
// Assembly source label: FX1814.
bool execute_audio_fx1814_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:76 MOV A, #$D8
    case 0x181B: if (cpu.read_byte(0x181B) != 0xE8 || cpu.read_byte(0x181C) != 0xD8) return false; cpu.execute_instruction<0xE8>(0x00D8, 2); return true;
    // src/spc700/sfx.spc700.s:77 MOV Y, #$04
    case 0x181D: if (cpu.read_byte(0x181D) != 0x8D || cpu.read_byte(0x181E) != 0x04) return false; cpu.execute_instruction<0x8D>(0x0004, 2); return true;
    // src/spc700/sfx.spc700.s:78 JMP UNK14DF
    case 0x181F: if (cpu.read_byte(0x181F) != 0x5F || cpu.read_byte(0x1820) != 0xDF || cpu.read_byte(0x1821) != 0x14) return false; cpu.execute_instruction<0x5F>(0x14DF, 3); return true;
    default: return false;
    }
}
// Assembly source label: FX2501.
bool execute_audio_fx2501_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:2733 MOV A, #$0A
    case 0x2501: if (cpu.read_byte(0x2501) != 0xE8 || cpu.read_byte(0x2502) != 0x0A) return false; cpu.execute_instruction<0xE8>(0x000A, 2); return true;
    // src/spc700/sfx.spc700.s:2734 MOV Y, #$25
    case 0x2503: if (cpu.read_byte(0x2503) != 0x8D || cpu.read_byte(0x2504) != 0x25) return false; cpu.execute_instruction<0x8D>(0x0025, 2); return true;
    // src/spc700/sfx.spc700.s:2735 MOV X, #$1F
    case 0x2505: if (cpu.read_byte(0x2505) != 0xCD || cpu.read_byte(0x2506) != 0x1F) return false; cpu.execute_instruction<0xCD>(0x001F, 2); return true;
    // src/spc700/sfx.spc700.s:2736 JMP UNK14EE
    case 0x2507: if (cpu.read_byte(0x2507) != 0x5F || cpu.read_byte(0x2508) != 0xEE || cpu.read_byte(0x2509) != 0x14) return false; cpu.execute_instruction<0x5F>(0x14EE, 3); return true;
    default: return false;
    }
}
// Assembly source label: FX2C92.
bool execute_audio_fx2c92_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:4246 MOV A, #$64
    case 0x2C92: if (cpu.read_byte(0x2C92) != 0xE8 || cpu.read_byte(0x2C93) != 0x64) return false; cpu.execute_instruction<0xE8>(0x0064, 2); return true;
    // src/spc700/sfx.spc700.s:4247 JMP UNK162E
    case 0x2C94: if (cpu.read_byte(0x2C94) != 0x5F || cpu.read_byte(0x2C95) != 0x2E || cpu.read_byte(0x2C96) != 0x16) return false; cpu.execute_instruction<0x5F>(0x162E, 3); return true;
    default: return false;
    }
}
// Assembly source label: FX2C9A.
bool execute_audio_fx2c9a_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:4252 MOV A, #$F0
    case 0x2C9A: if (cpu.read_byte(0x2C9A) != 0xE8 || cpu.read_byte(0x2C9B) != 0xF0) return false; cpu.execute_instruction<0xE8>(0x00F0, 2); return true;
    // src/spc700/sfx.spc700.s:4253 JMP UNK162E
    case 0x2C9C: if (cpu.read_byte(0x2C9C) != 0x5F || cpu.read_byte(0x2C9D) != 0x2E || cpu.read_byte(0x2C9E) != 0x16) return false; cpu.execute_instruction<0x5F>(0x162E, 3); return true;
    default: return false;
    }
}
// Assembly source label: FX2CA2.
bool execute_audio_fx2ca2_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:4258 MOV A, #$10
    case 0x2CA2: if (cpu.read_byte(0x2CA2) != 0xE8 || cpu.read_byte(0x2CA3) != 0x10) return false; cpu.execute_instruction<0xE8>(0x0010, 2); return true;
    // src/spc700/sfx.spc700.s:4259 JMP UNK1663
    case 0x2CA4: if (cpu.read_byte(0x2CA4) != 0x5F || cpu.read_byte(0x2CA5) != 0x63 || cpu.read_byte(0x2CA6) != 0x16) return false; cpu.execute_instruction<0x5F>(0x1663, 3); return true;
    default: return false;
    }
}
// Assembly source label: FX2CAA.
bool execute_audio_fx2caa_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:4264 MOV A, #$00
    case 0x2CAA: if (cpu.read_byte(0x2CAA) != 0xE8 || cpu.read_byte(0x2CAB) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/sfx.spc700.s:4265 JMP UNK1663
    case 0x2CAC: if (cpu.read_byte(0x2CAC) != 0x5F || cpu.read_byte(0x2CAD) != 0x63 || cpu.read_byte(0x2CAE) != 0x16) return false; cpu.execute_instruction<0x5F>(0x1663, 3); return true;
    default: return false;
    }
}
// Assembly source label: FX2CDA.
bool execute_audio_fx2cda_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:4272 MOV UNK0022, #$AF
    case 0x2CDA: if (cpu.read_byte(0x2CDA) != 0x8F || cpu.read_byte(0x2CDB) != 0xAF || cpu.read_byte(0x2CDC) != 0x22) return false; cpu.execute_instruction<0x8F>(0x22AF, 3); return true;
    // src/spc700/sfx.spc700.s:4273 MOV UNK0023, #$2C
    case 0x2CDD: if (cpu.read_byte(0x2CDD) != 0x8F || cpu.read_byte(0x2CDE) != 0x2C || cpu.read_byte(0x2CDF) != 0x23) return false; cpu.execute_instruction<0x8F>(0x232C, 3); return true;
    // src/spc700/sfx.spc700.s:4274 JMP UNK2D37
    case 0x2CE0: if (cpu.read_byte(0x2CE0) != 0x5F || cpu.read_byte(0x2CE1) != 0x37 || cpu.read_byte(0x2CE2) != 0x2D) return false; cpu.execute_instruction<0x5F>(0x2D37, 3); return true;
    default: return false;
    }
}
// Assembly source label: FX2CE6.
bool execute_audio_fx2ce6_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:4279 MOV UNK0022, #$B4
    case 0x2CE6: if (cpu.read_byte(0x2CE6) != 0x8F || cpu.read_byte(0x2CE7) != 0xB4 || cpu.read_byte(0x2CE8) != 0x22) return false; cpu.execute_instruction<0x8F>(0x22B4, 3); return true;
    // src/spc700/sfx.spc700.s:4280 MOV UNK0023, #$2C
    case 0x2CE9: if (cpu.read_byte(0x2CE9) != 0x8F || cpu.read_byte(0x2CEA) != 0x2C || cpu.read_byte(0x2CEB) != 0x23) return false; cpu.execute_instruction<0x8F>(0x232C, 3); return true;
    // src/spc700/sfx.spc700.s:4281 JMP UNK2D37
    case 0x2CEC: if (cpu.read_byte(0x2CEC) != 0x5F || cpu.read_byte(0x2CED) != 0x37 || cpu.read_byte(0x2CEE) != 0x2D) return false; cpu.execute_instruction<0x5F>(0x2D37, 3); return true;
    default: return false;
    }
}
// Assembly source label: FX2CF2.
bool execute_audio_fx2cf2_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:4286 MOV UNK0022, #$B9
    case 0x2CF2: if (cpu.read_byte(0x2CF2) != 0x8F || cpu.read_byte(0x2CF3) != 0xB9 || cpu.read_byte(0x2CF4) != 0x22) return false; cpu.execute_instruction<0x8F>(0x22B9, 3); return true;
    // src/spc700/sfx.spc700.s:4287 MOV UNK0023, #$2C
    case 0x2CF5: if (cpu.read_byte(0x2CF5) != 0x8F || cpu.read_byte(0x2CF6) != 0x2C || cpu.read_byte(0x2CF7) != 0x23) return false; cpu.execute_instruction<0x8F>(0x232C, 3); return true;
    // src/spc700/sfx.spc700.s:4288 JMP UNK2D37
    case 0x2CF8: if (cpu.read_byte(0x2CF8) != 0x5F || cpu.read_byte(0x2CF9) != 0x37 || cpu.read_byte(0x2CFA) != 0x2D) return false; cpu.execute_instruction<0x5F>(0x2D37, 3); return true;
    default: return false;
    }
}
// Assembly source label: FX2CFE.
bool execute_audio_fx2cfe_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:4293 MOV UNK0022, #$BE
    case 0x2CFE: if (cpu.read_byte(0x2CFE) != 0x8F || cpu.read_byte(0x2CFF) != 0xBE || cpu.read_byte(0x2D00) != 0x22) return false; cpu.execute_instruction<0x8F>(0x22BE, 3); return true;
    // src/spc700/sfx.spc700.s:4294 MOV UNK0023, #$2C
    case 0x2D01: if (cpu.read_byte(0x2D01) != 0x8F || cpu.read_byte(0x2D02) != 0x2C || cpu.read_byte(0x2D03) != 0x23) return false; cpu.execute_instruction<0x8F>(0x232C, 3); return true;
    // src/spc700/sfx.spc700.s:4295 JMP UNK2D37
    case 0x2D04: if (cpu.read_byte(0x2D04) != 0x5F || cpu.read_byte(0x2D05) != 0x37 || cpu.read_byte(0x2D06) != 0x2D) return false; cpu.execute_instruction<0x5F>(0x2D37, 3); return true;
    default: return false;
    }
}
// Assembly source label: FX2D0A.
bool execute_audio_fx2d0a_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:4300 MOV UNK0022, #$C3
    case 0x2D0A: if (cpu.read_byte(0x2D0A) != 0x8F || cpu.read_byte(0x2D0B) != 0xC3 || cpu.read_byte(0x2D0C) != 0x22) return false; cpu.execute_instruction<0x8F>(0x22C3, 3); return true;
    // src/spc700/sfx.spc700.s:4301 MOV UNK0023, #$2C
    case 0x2D0D: if (cpu.read_byte(0x2D0D) != 0x8F || cpu.read_byte(0x2D0E) != 0x2C || cpu.read_byte(0x2D0F) != 0x23) return false; cpu.execute_instruction<0x8F>(0x232C, 3); return true;
    // src/spc700/sfx.spc700.s:4302 JMP UNK2D37
    case 0x2D10: if (cpu.read_byte(0x2D10) != 0x5F || cpu.read_byte(0x2D11) != 0x37 || cpu.read_byte(0x2D12) != 0x2D) return false; cpu.execute_instruction<0x5F>(0x2D37, 3); return true;
    default: return false;
    }
}
// Assembly source label: FX2D16.
bool execute_audio_fx2d16_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:4307 MOV UNK0022, #$C3
    case 0x2D16: if (cpu.read_byte(0x2D16) != 0x8F || cpu.read_byte(0x2D17) != 0xC3 || cpu.read_byte(0x2D18) != 0x22) return false; cpu.execute_instruction<0x8F>(0x22C3, 3); return true;
    // src/spc700/sfx.spc700.s:4308 MOV UNK0023, #$2C
    case 0x2D19: if (cpu.read_byte(0x2D19) != 0x8F || cpu.read_byte(0x2D1A) != 0x2C || cpu.read_byte(0x2D1B) != 0x23) return false; cpu.execute_instruction<0x8F>(0x232C, 3); return true;
    // src/spc700/sfx.spc700.s:4309 JMP UNK2D37
    case 0x2D1C: if (cpu.read_byte(0x2D1C) != 0x5F || cpu.read_byte(0x2D1D) != 0x37 || cpu.read_byte(0x2D1E) != 0x2D) return false; cpu.execute_instruction<0x5F>(0x2D37, 3); return true;
    default: return false;
    }
}
// Assembly source label: FX2D22.
bool execute_audio_fx2d22_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:4314 MOV UNK0022, #$CD
    case 0x2D22: if (cpu.read_byte(0x2D22) != 0x8F || cpu.read_byte(0x2D23) != 0xCD || cpu.read_byte(0x2D24) != 0x22) return false; cpu.execute_instruction<0x8F>(0x22CD, 3); return true;
    // src/spc700/sfx.spc700.s:4315 MOV UNK0023, #$2C
    case 0x2D25: if (cpu.read_byte(0x2D25) != 0x8F || cpu.read_byte(0x2D26) != 0x2C || cpu.read_byte(0x2D27) != 0x23) return false; cpu.execute_instruction<0x8F>(0x232C, 3); return true;
    // src/spc700/sfx.spc700.s:4316 JMP UNK2D37
    case 0x2D28: if (cpu.read_byte(0x2D28) != 0x5F || cpu.read_byte(0x2D29) != 0x37 || cpu.read_byte(0x2D2A) != 0x2D) return false; cpu.execute_instruction<0x5F>(0x2D37, 3); return true;
    default: return false;
    }
}
// Assembly source label: FX2D2E.
bool execute_audio_fx2d2e_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:4321 MOV UNK0022, #$D2
    case 0x2D2E: if (cpu.read_byte(0x2D2E) != 0x8F || cpu.read_byte(0x2D2F) != 0xD2 || cpu.read_byte(0x2D30) != 0x22) return false; cpu.execute_instruction<0x8F>(0x22D2, 3); return true;
    // src/spc700/sfx.spc700.s:4322 MOV UNK0023, #$2C
    case 0x2D31: if (cpu.read_byte(0x2D31) != 0x8F || cpu.read_byte(0x2D32) != 0x2C || cpu.read_byte(0x2D33) != 0x23) return false; cpu.execute_instruction<0x8F>(0x232C, 3); return true;
    // src/spc700/sfx.spc700.s:4323 JMP UNK2D37
    case 0x2D34: if (cpu.read_byte(0x2D34) != 0x5F || cpu.read_byte(0x2D35) != 0x37 || cpu.read_byte(0x2D36) != 0x2D) return false; cpu.execute_instruction<0x5F>(0x2D37, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK2D37.
bool execute_audio_unresolved_unk2d37_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:4326 MOV Y, #$00
    case 0x2D37: if (cpu.read_byte(0x2D37) != 0x8D || cpu.read_byte(0x2D38) != 0x00) return false; cpu.execute_instruction<0x8D>(0x0000, 2); return true;
    // src/spc700/sfx.spc700.s:4327 MOV X, #$02
    case 0x2D39: if (cpu.read_byte(0x2D39) != 0xCD || cpu.read_byte(0x2D3A) != 0x02) return false; cpu.execute_instruction<0xCD>(0x0002, 2); return true;
    // src/spc700/sfx.spc700.s:4328 MOV A, (UNK0022) + Y
    case 0x2D3B: if (cpu.read_byte(0x2D3B) != 0xF7 || cpu.read_byte(0x2D3C) != 0x22) return false; cpu.execute_instruction<0xF7>(0x0022, 2); return true;
    // src/spc700/sfx.spc700.s:4329 MOV UNK0020, A
    case 0x2D3D: if (cpu.read_byte(0x2D3D) != 0xC4 || cpu.read_byte(0x2D3E) != 0x20) return false; cpu.execute_instruction<0xC4>(0x0020, 2); return true;
    // src/spc700/sfx.spc700.s:4330 MOV A, #$14
    case 0x2D3F: if (cpu.read_byte(0x2D3F) != 0xE8 || cpu.read_byte(0x2D40) != 0x14) return false; cpu.execute_instruction<0xE8>(0x0014, 2); return true;
    // src/spc700/sfx.spc700.s:4331 PUSH Y
    case 0x2D41: if (cpu.read_byte(0x2D41) != 0x6D) return false; cpu.execute_instruction<0x6D>(0x0000, 1); return true;
    // src/spc700/sfx.spc700.s:4332 CALL UNK166E
    case 0x2D42: if (cpu.read_byte(0x2D42) != 0x3F || cpu.read_byte(0x2D43) != 0x6E || cpu.read_byte(0x2D44) != 0x16) return false; cpu.execute_instruction<0x3F>(0x166E, 3); return true;
    // src/spc700/sfx.spc700.s:4333 POP Y
    case 0x2D45: if (cpu.read_byte(0x2D45) != 0xEE) return false; cpu.execute_instruction<0xEE>(0x0000, 1); return true;
    // src/spc700/sfx.spc700.s:4334 INC Y
    case 0x2D46: if (cpu.read_byte(0x2D46) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    // src/spc700/sfx.spc700.s:4335 MOV X, #$04
    case 0x2D47: if (cpu.read_byte(0x2D47) != 0xCD || cpu.read_byte(0x2D48) != 0x04) return false; cpu.execute_instruction<0xCD>(0x0004, 2); return true;
    // src/spc700/sfx.spc700.s:4336 MOV A, (UNK0022) + Y
    case 0x2D49: if (cpu.read_byte(0x2D49) != 0xF7 || cpu.read_byte(0x2D4A) != 0x22) return false; cpu.execute_instruction<0xF7>(0x0022, 2); return true;
    // src/spc700/sfx.spc700.s:4337 MOV UNK0020, A
    case 0x2D4B: if (cpu.read_byte(0x2D4B) != 0xC4 || cpu.read_byte(0x2D4C) != 0x20) return false; cpu.execute_instruction<0xC4>(0x0020, 2); return true;
    // src/spc700/sfx.spc700.s:4338 MOV A, #$14
    case 0x2D4D: if (cpu.read_byte(0x2D4D) != 0xE8 || cpu.read_byte(0x2D4E) != 0x14) return false; cpu.execute_instruction<0xE8>(0x0014, 2); return true;
    // src/spc700/sfx.spc700.s:4339 PUSH Y
    case 0x2D4F: if (cpu.read_byte(0x2D4F) != 0x6D) return false; cpu.execute_instruction<0x6D>(0x0000, 1); return true;
    // src/spc700/sfx.spc700.s:4340 CALL UNK166E
    case 0x2D50: if (cpu.read_byte(0x2D50) != 0x3F || cpu.read_byte(0x2D51) != 0x6E || cpu.read_byte(0x2D52) != 0x16) return false; cpu.execute_instruction<0x3F>(0x166E, 3); return true;
    // src/spc700/sfx.spc700.s:4341 POP Y
    case 0x2D53: if (cpu.read_byte(0x2D53) != 0xEE) return false; cpu.execute_instruction<0xEE>(0x0000, 1); return true;
    // src/spc700/sfx.spc700.s:4342 INC Y
    case 0x2D54: if (cpu.read_byte(0x2D54) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    // src/spc700/sfx.spc700.s:4343 MOV X, #$06
    case 0x2D55: if (cpu.read_byte(0x2D55) != 0xCD || cpu.read_byte(0x2D56) != 0x06) return false; cpu.execute_instruction<0xCD>(0x0006, 2); return true;
    // src/spc700/sfx.spc700.s:4344 MOV A, (UNK0022) + Y
    case 0x2D57: if (cpu.read_byte(0x2D57) != 0xF7 || cpu.read_byte(0x2D58) != 0x22) return false; cpu.execute_instruction<0xF7>(0x0022, 2); return true;
    // src/spc700/sfx.spc700.s:4345 MOV UNK0020, A
    case 0x2D59: if (cpu.read_byte(0x2D59) != 0xC4 || cpu.read_byte(0x2D5A) != 0x20) return false; cpu.execute_instruction<0xC4>(0x0020, 2); return true;
    // src/spc700/sfx.spc700.s:4346 MOV A, #$14
    case 0x2D5B: if (cpu.read_byte(0x2D5B) != 0xE8 || cpu.read_byte(0x2D5C) != 0x14) return false; cpu.execute_instruction<0xE8>(0x0014, 2); return true;
    // src/spc700/sfx.spc700.s:4347 PUSH Y
    case 0x2D5D: if (cpu.read_byte(0x2D5D) != 0x6D) return false; cpu.execute_instruction<0x6D>(0x0000, 1); return true;
    // src/spc700/sfx.spc700.s:4348 CALL UNK166E
    case 0x2D5E: if (cpu.read_byte(0x2D5E) != 0x3F || cpu.read_byte(0x2D5F) != 0x6E || cpu.read_byte(0x2D60) != 0x16) return false; cpu.execute_instruction<0x3F>(0x166E, 3); return true;
    // src/spc700/sfx.spc700.s:4349 POP Y
    case 0x2D61: if (cpu.read_byte(0x2D61) != 0xEE) return false; cpu.execute_instruction<0xEE>(0x0000, 1); return true;
    // src/spc700/sfx.spc700.s:4350 INC Y
    case 0x2D62: if (cpu.read_byte(0x2D62) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    // src/spc700/sfx.spc700.s:4351 MOV X, #$08
    case 0x2D63: if (cpu.read_byte(0x2D63) != 0xCD || cpu.read_byte(0x2D64) != 0x08) return false; cpu.execute_instruction<0xCD>(0x0008, 2); return true;
    // src/spc700/sfx.spc700.s:4352 MOV A, (UNK0022) + Y
    case 0x2D65: if (cpu.read_byte(0x2D65) != 0xF7 || cpu.read_byte(0x2D66) != 0x22) return false; cpu.execute_instruction<0xF7>(0x0022, 2); return true;
    // src/spc700/sfx.spc700.s:4353 MOV UNK0020, A
    case 0x2D67: if (cpu.read_byte(0x2D67) != 0xC4 || cpu.read_byte(0x2D68) != 0x20) return false; cpu.execute_instruction<0xC4>(0x0020, 2); return true;
    // src/spc700/sfx.spc700.s:4354 MOV A, #$14
    case 0x2D69: if (cpu.read_byte(0x2D69) != 0xE8 || cpu.read_byte(0x2D6A) != 0x14) return false; cpu.execute_instruction<0xE8>(0x0014, 2); return true;
    // src/spc700/sfx.spc700.s:4355 PUSH Y
    case 0x2D6B: if (cpu.read_byte(0x2D6B) != 0x6D) return false; cpu.execute_instruction<0x6D>(0x0000, 1); return true;
    // src/spc700/sfx.spc700.s:4356 CALL UNK166E
    case 0x2D6C: if (cpu.read_byte(0x2D6C) != 0x3F || cpu.read_byte(0x2D6D) != 0x6E || cpu.read_byte(0x2D6E) != 0x16) return false; cpu.execute_instruction<0x3F>(0x166E, 3); return true;
    // src/spc700/sfx.spc700.s:4357 POP Y
    case 0x2D6F: if (cpu.read_byte(0x2D6F) != 0xEE) return false; cpu.execute_instruction<0xEE>(0x0000, 1); return true;
    // src/spc700/sfx.spc700.s:4358 INC Y
    case 0x2D70: if (cpu.read_byte(0x2D70) != 0xFC) return false; cpu.execute_instruction<0xFC>(0x0000, 1); return true;
    // src/spc700/sfx.spc700.s:4359 MOV X, #$0A
    case 0x2D71: if (cpu.read_byte(0x2D71) != 0xCD || cpu.read_byte(0x2D72) != 0x0A) return false; cpu.execute_instruction<0xCD>(0x000A, 2); return true;
    // src/spc700/sfx.spc700.s:4360 MOV A, (UNK0022) + Y
    case 0x2D73: if (cpu.read_byte(0x2D73) != 0xF7 || cpu.read_byte(0x2D74) != 0x22) return false; cpu.execute_instruction<0xF7>(0x0022, 2); return true;
    // src/spc700/sfx.spc700.s:4361 MOV UNK0020, A
    case 0x2D75: if (cpu.read_byte(0x2D75) != 0xC4 || cpu.read_byte(0x2D76) != 0x20) return false; cpu.execute_instruction<0xC4>(0x0020, 2); return true;
    // src/spc700/sfx.spc700.s:4362 MOV A, #$14
    case 0x2D77: if (cpu.read_byte(0x2D77) != 0xE8 || cpu.read_byte(0x2D78) != 0x14) return false; cpu.execute_instruction<0xE8>(0x0014, 2); return true;
    // src/spc700/sfx.spc700.s:4363 PUSH Y
    case 0x2D79: if (cpu.read_byte(0x2D79) != 0x6D) return false; cpu.execute_instruction<0x6D>(0x0000, 1); return true;
    // src/spc700/sfx.spc700.s:4364 CALL UNK166E
    case 0x2D7A: if (cpu.read_byte(0x2D7A) != 0x3F || cpu.read_byte(0x2D7B) != 0x6E || cpu.read_byte(0x2D7C) != 0x16) return false; cpu.execute_instruction<0x3F>(0x166E, 3); return true;
    // src/spc700/sfx.spc700.s:4365 POP Y
    case 0x2D7D: if (cpu.read_byte(0x2D7D) != 0xEE) return false; cpu.execute_instruction<0xEE>(0x0000, 1); return true;
    // src/spc700/sfx.spc700.s:4366 RET
    case 0x2D7E: if (cpu.read_byte(0x2D7E) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: FX2D82.
bool execute_audio_fx2d82_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:4371 MOV X, #$0E
    case 0x2D82: if (cpu.read_byte(0x2D82) != 0xCD || cpu.read_byte(0x2D83) != 0x0E) return false; cpu.execute_instruction<0xCD>(0x000E, 2); return true;
    // src/spc700/sfx.spc700.s:4372 MOV A, #$5A
    case 0x2D84: if (cpu.read_byte(0x2D84) != 0xE8 || cpu.read_byte(0x2D85) != 0x5A) return false; cpu.execute_instruction<0xE8>(0x005A, 2); return true;
    // src/spc700/sfx.spc700.s:4373 CALL UNK166A
    case 0x2D86: if (cpu.read_byte(0x2D86) != 0x3F || cpu.read_byte(0x2D87) != 0x6A || cpu.read_byte(0x2D88) != 0x16) return false; cpu.execute_instruction<0x3F>(0x166A, 3); return true;
    // src/spc700/sfx.spc700.s:4374 RET
    case 0x2D89: if (cpu.read_byte(0x2D89) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: FX2D8D.
bool execute_audio_fx2d8d_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:4379 MOV X, #$0E
    case 0x2D8D: if (cpu.read_byte(0x2D8D) != 0xCD || cpu.read_byte(0x2D8E) != 0x0E) return false; cpu.execute_instruction<0xCD>(0x000E, 2); return true;
    // src/spc700/sfx.spc700.s:4380 MOV A, #$FA
    case 0x2D8F: if (cpu.read_byte(0x2D8F) != 0xE8 || cpu.read_byte(0x2D90) != 0xFA) return false; cpu.execute_instruction<0xE8>(0x00FA, 2); return true;
    // src/spc700/sfx.spc700.s:4381 CALL UNK166A
    case 0x2D91: if (cpu.read_byte(0x2D91) != 0x3F || cpu.read_byte(0x2D92) != 0x6A || cpu.read_byte(0x2D93) != 0x16) return false; cpu.execute_instruction<0x3F>(0x166A, 3); return true;
    // src/spc700/sfx.spc700.s:4382 RET
    case 0x2D94: if (cpu.read_byte(0x2D94) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: FX2D98.
bool execute_audio_fx2d98_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:4387 MOV X, #$0E
    case 0x2D98: if (cpu.read_byte(0x2D98) != 0xCD || cpu.read_byte(0x2D99) != 0x0E) return false; cpu.execute_instruction<0xCD>(0x000E, 2); return true;
    // src/spc700/sfx.spc700.s:4388 MOV A, #$28
    case 0x2D9A: if (cpu.read_byte(0x2D9A) != 0xE8 || cpu.read_byte(0x2D9B) != 0x28) return false; cpu.execute_instruction<0xE8>(0x0028, 2); return true;
    // src/spc700/sfx.spc700.s:4389 CALL UNK166A
    case 0x2D9C: if (cpu.read_byte(0x2D9C) != 0x3F || cpu.read_byte(0x2D9D) != 0x6A || cpu.read_byte(0x2D9E) != 0x16) return false; cpu.execute_instruction<0x3F>(0x166A, 3); return true;
    // src/spc700/sfx.spc700.s:4390 RET
    case 0x2D9F: if (cpu.read_byte(0x2D9F) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: FX2DA3.
bool execute_audio_fx2da3_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:4395 MOV X, #$0E
    case 0x2DA3: if (cpu.read_byte(0x2DA3) != 0xCD || cpu.read_byte(0x2DA4) != 0x0E) return false; cpu.execute_instruction<0xCD>(0x000E, 2); return true;
    // src/spc700/sfx.spc700.s:4396 MOV A, #$00
    case 0x2DA5: if (cpu.read_byte(0x2DA5) != 0xE8 || cpu.read_byte(0x2DA6) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/sfx.spc700.s:4397 CALL UNK166A
    case 0x2DA7: if (cpu.read_byte(0x2DA7) != 0x3F || cpu.read_byte(0x2DA8) != 0x6A || cpu.read_byte(0x2DA9) != 0x16) return false; cpu.execute_instruction<0x3F>(0x166A, 3); return true;
    // src/spc700/sfx.spc700.s:4398 RET
    case 0x2DAA: if (cpu.read_byte(0x2DAA) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK2DAB.
bool execute_audio_unresolved_unk2dab_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:4401 MOV A, UNK0438
    case 0x2DAB: if (cpu.read_byte(0x2DAB) != 0xE5 || cpu.read_byte(0x2DAC) != 0x38 || cpu.read_byte(0x2DAD) != 0x04) return false; cpu.execute_instruction<0xE5>(0x0438, 3); return true;
    // src/spc700/sfx.spc700.s:4402 CMP A, #$00
    case 0x2DAE: if (cpu.read_byte(0x2DAE) != 0x68 || cpu.read_byte(0x2DAF) != 0x00) return false; cpu.execute_instruction<0x68>(0x0000, 2); return true;
    // src/spc700/sfx.spc700.s:4403 BNE UNK2DB3
    case 0x2DB0: if (cpu.read_byte(0x2DB0) != 0xD0 || cpu.read_byte(0x2DB1) != 0x01) return false; cpu.execute_instruction<0xD0>(0x0001, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK2DB2.
bool execute_audio_unresolved_unk2db2_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:4405 RET
    case 0x2DB2: if (cpu.read_byte(0x2DB2) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK2DB3.
bool execute_audio_unresolved_unk2db3_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:4407 DEC A
    case 0x2DB3: if (cpu.read_byte(0x2DB3) != 0x9C) return false; cpu.execute_instruction<0x9C>(0x0000, 1); return true;
    // src/spc700/sfx.spc700.s:4408 MOV UNK0438, A
    case 0x2DB4: if (cpu.read_byte(0x2DB4) != 0xC5 || cpu.read_byte(0x2DB5) != 0x38 || cpu.read_byte(0x2DB6) != 0x04) return false; cpu.execute_instruction<0xC5>(0x0438, 3); return true;
    // src/spc700/sfx.spc700.s:4409 CMP A, #$00
    case 0x2DB7: if (cpu.read_byte(0x2DB7) != 0x68 || cpu.read_byte(0x2DB8) != 0x00) return false; cpu.execute_instruction<0x68>(0x0000, 2); return true;
    // src/spc700/sfx.spc700.s:4410 BNE UNK2DB2
    case 0x2DB9: if (cpu.read_byte(0x2DB9) != 0xD0 || cpu.read_byte(0x2DBA) != 0xF7) return false; cpu.execute_instruction<0xD0>(0x00F7, 2); return true;
    // src/spc700/sfx.spc700.s:4411 MOV A, #$00
    case 0x2DBB: if (cpu.read_byte(0x2DBB) != 0xE8 || cpu.read_byte(0x2DBC) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/sfx.spc700.s:4412 CALL UNK1663
    case 0x2DBD: if (cpu.read_byte(0x2DBD) != 0x3F || cpu.read_byte(0x2DBE) != 0x63 || cpu.read_byte(0x2DBF) != 0x16) return false; cpu.execute_instruction<0x3F>(0x1663, 3); return true;
    // src/spc700/sfx.spc700.s:4413 JMP UNK163B
    case 0x2DC0: if (cpu.read_byte(0x2DC0) != 0x5F || cpu.read_byte(0x2DC1) != 0x3B || cpu.read_byte(0x2DC2) != 0x16) return false; cpu.execute_instruction<0x5F>(0x163B, 3); return true;
    default: return false;
    }
}
// Assembly source label: FX2DC6.
bool execute_audio_fx2dc6_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:4418 MOV A, #$70
    case 0x2DC6: if (cpu.read_byte(0x2DC6) != 0xE8 || cpu.read_byte(0x2DC7) != 0x70) return false; cpu.execute_instruction<0xE8>(0x0070, 2); return true;
    // src/spc700/sfx.spc700.s:4419 MOV UNK0438, A
    case 0x2DC8: if (cpu.read_byte(0x2DC8) != 0xC5 || cpu.read_byte(0x2DC9) != 0x38 || cpu.read_byte(0x2DCA) != 0x04) return false; cpu.execute_instruction<0xC5>(0x0438, 3); return true;
    // src/spc700/sfx.spc700.s:4420 MOV A, #$0E
    case 0x2DCB: if (cpu.read_byte(0x2DCB) != 0xE8 || cpu.read_byte(0x2DCC) != 0x0E) return false; cpu.execute_instruction<0xE8>(0x000E, 2); return true;
    // src/spc700/sfx.spc700.s:4421 CALL UNK1663
    case 0x2DCD: if (cpu.read_byte(0x2DCD) != 0x3F || cpu.read_byte(0x2DCE) != 0x63 || cpu.read_byte(0x2DCF) != 0x16) return false; cpu.execute_instruction<0x3F>(0x1663, 3); return true;
    // src/spc700/sfx.spc700.s:4422 MOV A, #$C8
    case 0x2DD0: if (cpu.read_byte(0x2DD0) != 0xE8 || cpu.read_byte(0x2DD1) != 0xC8) return false; cpu.execute_instruction<0xE8>(0x00C8, 2); return true;
    // src/spc700/sfx.spc700.s:4423 JMP UNK1632
    case 0x2DD2: if (cpu.read_byte(0x2DD2) != 0x5F || cpu.read_byte(0x2DD3) != 0x32 || cpu.read_byte(0x2DD4) != 0x16) return false; cpu.execute_instruction<0x5F>(0x1632, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK2DD5.
bool execute_audio_unresolved_unk2dd5_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:4426 MOV A, UNK043A
    case 0x2DD5: if (cpu.read_byte(0x2DD5) != 0xE5 || cpu.read_byte(0x2DD6) != 0x3A || cpu.read_byte(0x2DD7) != 0x04) return false; cpu.execute_instruction<0xE5>(0x043A, 3); return true;
    // src/spc700/sfx.spc700.s:4427 CMP A, #$00
    case 0x2DD8: if (cpu.read_byte(0x2DD8) != 0x68 || cpu.read_byte(0x2DD9) != 0x00) return false; cpu.execute_instruction<0x68>(0x0000, 2); return true;
    // src/spc700/sfx.spc700.s:4428 BNE UNK2DDD
    case 0x2DDA: if (cpu.read_byte(0x2DDA) != 0xD0 || cpu.read_byte(0x2DDB) != 0x01) return false; cpu.execute_instruction<0xD0>(0x0001, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK2DDC.
bool execute_audio_unresolved_unk2ddc_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:4430 RET
    case 0x2DDC: if (cpu.read_byte(0x2DDC) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK2DDD.
bool execute_audio_unresolved_unk2ddd_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:4432 DEC A
    case 0x2DDD: if (cpu.read_byte(0x2DDD) != 0x9C) return false; cpu.execute_instruction<0x9C>(0x0000, 1); return true;
    // src/spc700/sfx.spc700.s:4433 MOV UNK043A, A
    case 0x2DDE: if (cpu.read_byte(0x2DDE) != 0xC5 || cpu.read_byte(0x2DDF) != 0x3A || cpu.read_byte(0x2DE0) != 0x04) return false; cpu.execute_instruction<0xC5>(0x043A, 3); return true;
    // src/spc700/sfx.spc700.s:4434 CMP A, #$00
    case 0x2DE1: if (cpu.read_byte(0x2DE1) != 0x68 || cpu.read_byte(0x2DE2) != 0x00) return false; cpu.execute_instruction<0x68>(0x0000, 2); return true;
    // src/spc700/sfx.spc700.s:4435 BNE UNK2DDC
    case 0x2DE3: if (cpu.read_byte(0x2DE3) != 0xD0 || cpu.read_byte(0x2DE4) != 0xF7) return false; cpu.execute_instruction<0xD0>(0x00F7, 2); return true;
    // src/spc700/sfx.spc700.s:4436 MOV A, #$A0
    case 0x2DE5: if (cpu.read_byte(0x2DE5) != 0xE8 || cpu.read_byte(0x2DE6) != 0xA0) return false; cpu.execute_instruction<0xE8>(0x00A0, 2); return true;
    // src/spc700/sfx.spc700.s:4437 JMP UNK162E
    case 0x2DE7: if (cpu.read_byte(0x2DE7) != 0x5F || cpu.read_byte(0x2DE8) != 0x2E || cpu.read_byte(0x2DE9) != 0x16) return false; cpu.execute_instruction<0x5F>(0x162E, 3); return true;
    default: return false;
    }
}
// Assembly source label: FX2DED.
bool execute_audio_fx2ded_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:4442 MOV A, #$28
    case 0x2DED: if (cpu.read_byte(0x2DED) != 0xE8 || cpu.read_byte(0x2DEE) != 0x28) return false; cpu.execute_instruction<0xE8>(0x0028, 2); return true;
    // src/spc700/sfx.spc700.s:4443 MOV UNK043A, A
    case 0x2DEF: if (cpu.read_byte(0x2DEF) != 0xC5 || cpu.read_byte(0x2DF0) != 0x3A || cpu.read_byte(0x2DF1) != 0x04) return false; cpu.execute_instruction<0xC5>(0x043A, 3); return true;
    // src/spc700/sfx.spc700.s:4444 RET
    case 0x2DF2: if (cpu.read_byte(0x2DF2) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK2DF3.
bool execute_audio_unresolved_unk2df3_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:4447 MOV A, UNK0439
    case 0x2DF3: if (cpu.read_byte(0x2DF3) != 0xE5 || cpu.read_byte(0x2DF4) != 0x39 || cpu.read_byte(0x2DF5) != 0x04) return false; cpu.execute_instruction<0xE5>(0x0439, 3); return true;
    // src/spc700/sfx.spc700.s:4448 CMP A, #$00
    case 0x2DF6: if (cpu.read_byte(0x2DF6) != 0x68 || cpu.read_byte(0x2DF7) != 0x00) return false; cpu.execute_instruction<0x68>(0x0000, 2); return true;
    // src/spc700/sfx.spc700.s:4449 BNE UNK2DF8
    case 0x2DF8: if (cpu.read_byte(0x2DF8) != 0xD0 || cpu.read_byte(0x2DF9) != 0x01) return false; cpu.execute_instruction<0xD0>(0x0001, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK2DF7.
bool execute_audio_unresolved_unk2df7_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:4451 RET
    case 0x2DFA: if (cpu.read_byte(0x2DFA) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK2DF8.
bool execute_audio_unresolved_unk2df8_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:4453 DEC A
    case 0x2DFB: if (cpu.read_byte(0x2DFB) != 0x9C) return false; cpu.execute_instruction<0x9C>(0x0000, 1); return true;
    // src/spc700/sfx.spc700.s:4454 MOV UNK0439, A
    case 0x2DFC: if (cpu.read_byte(0x2DFC) != 0xC5 || cpu.read_byte(0x2DFD) != 0x39 || cpu.read_byte(0x2DFE) != 0x04) return false; cpu.execute_instruction<0xC5>(0x0439, 3); return true;
    // src/spc700/sfx.spc700.s:4455 CMP A, #$00
    case 0x2DFF: if (cpu.read_byte(0x2DFF) != 0x68 || cpu.read_byte(0x2E00) != 0x00) return false; cpu.execute_instruction<0x68>(0x0000, 2); return true;
    // src/spc700/sfx.spc700.s:4456 BNE UNK2DF7
    case 0x2E01: if (cpu.read_byte(0x2E01) != 0xD0 || cpu.read_byte(0x2E02) != 0xF7) return false; cpu.execute_instruction<0xD0>(0x00F7, 2); return true;
    // src/spc700/sfx.spc700.s:4457 MOV A, #$F0
    case 0x2E03: if (cpu.read_byte(0x2E03) != 0xE8 || cpu.read_byte(0x2E04) != 0xF0) return false; cpu.execute_instruction<0xE8>(0x00F0, 2); return true;
    // src/spc700/sfx.spc700.s:4458 JMP UNK162E
    case 0x2E05: if (cpu.read_byte(0x2E05) != 0x5F || cpu.read_byte(0x2E06) != 0x2E || cpu.read_byte(0x2E07) != 0x16) return false; cpu.execute_instruction<0x5F>(0x162E, 3); return true;
    default: return false;
    }
}
// Assembly source label: FX2E0B.
bool execute_audio_fx2e0b_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/sfx.spc700.s:4463 MOV A, #$69
    case 0x2E0B: if (cpu.read_byte(0x2E0B) != 0xE8 || cpu.read_byte(0x2E0C) != 0x69) return false; cpu.execute_instruction<0xE8>(0x0069, 2); return true;
    // src/spc700/sfx.spc700.s:4464 MOV UNK0439, A
    case 0x2E0D: if (cpu.read_byte(0x2E0D) != 0xC5 || cpu.read_byte(0x2E0E) != 0x39 || cpu.read_byte(0x2E0F) != 0x04) return false; cpu.execute_instruction<0xC5>(0x0439, 3); return true;
    // src/spc700/sfx.spc700.s:4465 RET
    case 0x2E10: if (cpu.read_byte(0x2E10) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK180D.
bool execute_audio_unresolved_unk180d_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2727 DB $E4, $04, $68, $1C, $D0, $05, $E8, $02, $3F, $72, $07, $6F
    case 0x2E11: if (cpu.read_byte(0x2E11) != 0xE4 || cpu.read_byte(0x2E12) != 0x04) return false; cpu.execute_instruction<0xE4>(0x0004, 2); return true;
    // src/spc700/main.spc700.s:2727 DB $E4, $04, $68, $1C, $D0, $05, $E8, $02, $3F, $72, $07, $6F
    case 0x2E13: if (cpu.read_byte(0x2E13) != 0x68 || cpu.read_byte(0x2E14) != 0x1C) return false; cpu.execute_instruction<0x68>(0x001C, 2); return true;
    // src/spc700/main.spc700.s:2727 DB $E4, $04, $68, $1C, $D0, $05, $E8, $02, $3F, $72, $07, $6F
    case 0x2E15: if (cpu.read_byte(0x2E15) != 0xD0 || cpu.read_byte(0x2E16) != 0x05) return false; cpu.execute_instruction<0xD0>(0x0005, 2); return true;
    // src/spc700/main.spc700.s:2727 DB $E4, $04, $68, $1C, $D0, $05, $E8, $02, $3F, $72, $07, $6F
    case 0x2E17: if (cpu.read_byte(0x2E17) != 0xE8 || cpu.read_byte(0x2E18) != 0x02) return false; cpu.execute_instruction<0xE8>(0x0002, 2); return true;
    // src/spc700/main.spc700.s:2727 DB $E4, $04, $68, $1C, $D0, $05, $E8, $02, $3F, $72, $07, $6F
    case 0x2E19: if (cpu.read_byte(0x2E19) != 0x3F || cpu.read_byte(0x2E1A) != 0x72 || cpu.read_byte(0x2E1B) != 0x07) return false; cpu.execute_instruction<0x3F>(0x0772, 3); return true;
    // src/spc700/main.spc700.s:2727 DB $E4, $04, $68, $1C, $D0, $05, $E8, $02, $3F, $72, $07, $6F
    case 0x2E1C: if (cpu.read_byte(0x2E1C) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK2E1D.
bool execute_audio_unresolved_unk2e1d_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2729 AND A, #$7F
    case 0x2E1D: if (cpu.read_byte(0x2E1D) != 0x28 || cpu.read_byte(0x2E1E) != 0x7F) return false; cpu.execute_instruction<0x28>(0x007F, 2); return true;
    // src/spc700/main.spc700.s:2730 MOV UNK0020, A
    case 0x2E1F: if (cpu.read_byte(0x2E1F) != 0xC4 || cpu.read_byte(0x2E20) != 0x20) return false; cpu.execute_instruction<0xC4>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:2731 CMP A, #$08
    case 0x2E21: if (cpu.read_byte(0x2E21) != 0x68 || cpu.read_byte(0x2E22) != 0x08) return false; cpu.execute_instruction<0x68>(0x0008, 2); return true;
    // src/spc700/main.spc700.s:2732 BCC UNK2E38
    case 0x2E23: if (cpu.read_byte(0x2E23) != 0x90 || cpu.read_byte(0x2E24) != 0x13) return false; cpu.execute_instruction<0x90>(0x0013, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK2E25.
bool execute_audio_unresolved_unk2e25_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2734 MOV A, UNK0020
    case 0x2E25: if (cpu.read_byte(0x2E25) != 0xE4 || cpu.read_byte(0x2E26) != 0x20) return false; cpu.execute_instruction<0xE4>(0x0020, 2); return true;
    // src/spc700/main.spc700.s:2735 CMP A, #$07
    case 0x2E27: if (cpu.read_byte(0x2E27) != 0x68 || cpu.read_byte(0x2E28) != 0x07) return false; cpu.execute_instruction<0x68>(0x0007, 2); return true;
    // src/spc700/main.spc700.s:2736 BNE UNK2E37
    case 0x2E29: if (cpu.read_byte(0x2E29) != 0xD0 || cpu.read_byte(0x2E2A) != 0x0C) return false; cpu.execute_instruction<0xD0>(0x000C, 2); return true;
    // src/spc700/main.spc700.s:2737 MOV A, UNK04B7
    case 0x2E2B: if (cpu.read_byte(0x2E2B) != 0xE5 || cpu.read_byte(0x2E2C) != 0xB7 || cpu.read_byte(0x2E2D) != 0x04) return false; cpu.execute_instruction<0xE5>(0x04B7, 3); return true;
    // src/spc700/main.spc700.s:2738 CMP A, #$07
    case 0x2E2E: if (cpu.read_byte(0x2E2E) != 0x68 || cpu.read_byte(0x2E2F) != 0x07) return false; cpu.execute_instruction<0x68>(0x0007, 2); return true;
    // src/spc700/main.spc700.s:2739 BNE UNK2E37
    case 0x2E30: if (cpu.read_byte(0x2E30) != 0xD0 || cpu.read_byte(0x2E31) != 0x05) return false; cpu.execute_instruction<0xD0>(0x0005, 2); return true;
    // src/spc700/main.spc700.s:2740 MOV A, #$00
    case 0x2E32: if (cpu.read_byte(0x2E32) != 0xE8 || cpu.read_byte(0x2E33) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:2741 MOV UNK04B3, A
    case 0x2E34: if (cpu.read_byte(0x2E34) != 0xC5 || cpu.read_byte(0x2E35) != 0xB3 || cpu.read_byte(0x2E36) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04B3, 3); return true;
    default: return false;
    }
}
// Assembly source label: UNK2E37.
bool execute_audio_unresolved_unk2e37_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2743 RET
    case 0x2E37: if (cpu.read_byte(0x2E37) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
// Assembly source label: UNK2E38.
bool execute_audio_unresolved_unk2e38_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2745 MOV A, UNK04B7
    case 0x2E38: if (cpu.read_byte(0x2E38) != 0xE5 || cpu.read_byte(0x2E39) != 0xB7 || cpu.read_byte(0x2E3A) != 0x04) return false; cpu.execute_instruction<0xE5>(0x04B7, 3); return true;
    // src/spc700/main.spc700.s:2746 CMP A, #$00
    case 0x2E3B: if (cpu.read_byte(0x2E3B) != 0x68 || cpu.read_byte(0x2E3C) != 0x00) return false; cpu.execute_instruction<0x68>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:2747 BEQ UNK2E25
    case 0x2E3D: if (cpu.read_byte(0x2E3D) != 0xF0 || cpu.read_byte(0x2E3E) != 0xE6) return false; cpu.execute_instruction<0xF0>(0x00E6, 2); return true;
    // src/spc700/main.spc700.s:2748 CMP A, #$08
    case 0x2E3F: if (cpu.read_byte(0x2E3F) != 0x68 || cpu.read_byte(0x2E40) != 0x08) return false; cpu.execute_instruction<0x68>(0x0008, 2); return true;
    // src/spc700/main.spc700.s:2749 BCC UNK2E25
    case 0x2E41: if (cpu.read_byte(0x2E41) != 0x90 || cpu.read_byte(0x2E42) != 0xE2) return false; cpu.execute_instruction<0x90>(0x00E2, 2); return true;
    // src/spc700/main.spc700.s:2750 MOV A, #$00
    case 0x2E43: if (cpu.read_byte(0x2E43) != 0xE8 || cpu.read_byte(0x2E44) != 0x00) return false; cpu.execute_instruction<0xE8>(0x0000, 2); return true;
    // src/spc700/main.spc700.s:2751 MOV UNK04B3, A
    case 0x2E45: if (cpu.read_byte(0x2E45) != 0xC5 || cpu.read_byte(0x2E46) != 0xB3 || cpu.read_byte(0x2E47) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04B3, 3); return true;
    // src/spc700/main.spc700.s:2752 BEQ UNK2E25
    case 0x2E48: if (cpu.read_byte(0x2E48) != 0xF0 || cpu.read_byte(0x2E49) != 0xDB) return false; cpu.execute_instruction<0xF0>(0x00DB, 2); return true;
    default: return false;
    }
}
// Assembly source label: UNK2FC8.
bool execute_audio_unresolved_unk2fc8_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    // src/spc700/main.spc700.s:2948 MOV A, #$80
    case 0x2FC8: if (cpu.read_byte(0x2FC8) != 0xE8 || cpu.read_byte(0x2FC9) != 0x80) return false; cpu.execute_instruction<0xE8>(0x0080, 2); return true;
    // src/spc700/main.spc700.s:2949 MOV UNK04D3, A
    case 0x2FCA: if (cpu.read_byte(0x2FCA) != 0xC5 || cpu.read_byte(0x2FCB) != 0xD3 || cpu.read_byte(0x2FCC) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04D3, 3); return true;
    // src/spc700/main.spc700.s:2950 MOV A, #$09
    case 0x2FCD: if (cpu.read_byte(0x2FCD) != 0xE8 || cpu.read_byte(0x2FCE) != 0x09) return false; cpu.execute_instruction<0xE8>(0x0009, 2); return true;
    // src/spc700/main.spc700.s:2951 MOV UNK04D2, A
    case 0x2FCF: if (cpu.read_byte(0x2FCF) != 0xC5 || cpu.read_byte(0x2FD0) != 0xD2 || cpu.read_byte(0x2FD1) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04D2, 3); return true;
    // src/spc700/main.spc700.s:2952 MOV A, #$1D
    case 0x2FD2: if (cpu.read_byte(0x2FD2) != 0xE8 || cpu.read_byte(0x2FD3) != 0x1D) return false; cpu.execute_instruction<0xE8>(0x001D, 2); return true;
    // src/spc700/main.spc700.s:2953 MOV UNK04D1, A
    case 0x2FD4: if (cpu.read_byte(0x2FD4) != 0xC5 || cpu.read_byte(0x2FD5) != 0xD1 || cpu.read_byte(0x2FD6) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04D1, 3); return true;
    // src/spc700/main.spc700.s:2954 MOV A, #$C0
    case 0x2FD7: if (cpu.read_byte(0x2FD7) != 0xE8 || cpu.read_byte(0x2FD8) != 0xC0) return false; cpu.execute_instruction<0xE8>(0x00C0, 2); return true;
    // src/spc700/main.spc700.s:2955 MOV UNK04D4, A
    case 0x2FD9: if (cpu.read_byte(0x2FD9) != 0xC5 || cpu.read_byte(0x2FDA) != 0xD4 || cpu.read_byte(0x2FDB) != 0x04) return false; cpu.execute_instruction<0xC5>(0x04D4, 3); return true;
    // src/spc700/main.spc700.s:2956 RET
    case 0x2FDC: if (cpu.read_byte(0x2FDC) != 0x6F) return false; cpu.execute_instruction<0x6F>(0x0000, 1); return true;
    default: return false;
    }
}
}
bool execute_translated_audio_instruction(Spc700AudioCpu& cpu) {
    switch (cpu.program_counter) {
    case 0x0500:
    case 0x0501:
    case 0x0503:
    case 0x0504:
    case 0x0506:
        return execute_audio_start_instruction(cpu);
    case 0x0507:
    case 0x0508:
    case 0x050A:
    case 0x050C:
    case 0x050F:
    case 0x0511:
    case 0x0513:
    case 0x0515:
    case 0x0517:
    case 0x0518:
    case 0x051B:
    case 0x051D:
    case 0x051F:
    case 0x0521:
    case 0x0524:
    case 0x0526:
    case 0x0529:
    case 0x052B:
    case 0x052D:
    case 0x0530:
    case 0x0532:
    case 0x0535:
    case 0x0537:
    case 0x053A:
    case 0x053C:
    case 0x053E:
    case 0x0541:
        return execute_audio_unresolved_unk0507_instruction(cpu);
    case 0x0543:
        return execute_audio_unresolved_unk0543_instruction(cpu);
    case 0x0546:
    case 0x0548:
    case 0x054A:
        return execute_audio_main_loop_instruction(cpu);
    case 0x054C:
    case 0x054E:
    case 0x0550:
    case 0x0552:
    case 0x0555:
        return execute_audio_unresolved_unk054c_instruction(cpu);
    case 0x0557:
        return execute_audio_unresolved_unk0557_instruction(cpu);
    case 0x055A:
    case 0x055D:
    case 0x0560:
    case 0x0563:
    case 0x0564:
    case 0x0565:
        return execute_audio_unresolved_unk055a_instruction(cpu);
    case 0x0568:
    case 0x056A:
    case 0x056C:
    case 0x056E:
    case 0x0570:
    case 0x0572:
    case 0x0573:
    case 0x0574:
    case 0x0575:
    case 0x0577:
        return execute_audio_unresolved_unk0568_instruction(cpu);
    case 0x0579:
    case 0x057C:
    case 0x057E:
    case 0x057F:
    case 0x0581:
    case 0x0582:
    case 0x0583:
    case 0x0585:
    case 0x0587:
    case 0x0589:
        return execute_audio_unresolved_unk0579_instruction(cpu);
    case 0x058C:
    case 0x058F:
    case 0x0591:
    case 0x0593:
        return execute_audio_unresolved_unk058c_instruction(cpu);
    case 0x0596:
    case 0x0599:
    case 0x059C:
    case 0x059F:
    case 0x05A2:
    case 0x05A5:
    case 0x05A7:
    case 0x05AA:
    case 0x05AD:
    case 0x05B0:
    case 0x05B3:
    case 0x05B5:
    case 0x05B8:
    case 0x05BB:
    case 0x05BE:
    case 0x05C0:
    case 0x05C3:
    case 0x05C6:
    case 0x05C9:
    case 0x05CB:
        return execute_audio_unresolved_unk0596_instruction(cpu);
    case 0x05CD:
    case 0x05CF:
    case 0x05D0:
    case 0x05D1:
    case 0x05D2:
    case 0x05D4:
    case 0x05D6:
        return execute_audio_unresolved_unk05cd_instruction(cpu);
    case 0x05D8:
    case 0x05DB:
    case 0x05DE:
        return execute_audio_unresolved_unk05d8_instruction(cpu);
    case 0x05E0:
    case 0x05E2:
    case 0x05E4:
    case 0x05E6:
        return execute_audio_unresolved_unk05e0_instruction(cpu);
    case 0x05E9:
    case 0x05EB:
    case 0x05ED:
        return execute_audio_unresolved_unk05e9_instruction(cpu);
    case 0x05F0:
    case 0x05F1:
    case 0x05F2:
    case 0x05F4:
        return execute_audio_unresolved_unk05f0_instruction(cpu);
    case 0x05F6:
        return execute_audio_unresolved_unk05f6_instruction(cpu);
    case 0x05F9:
        return execute_audio_unresolved_unk05f9_instruction(cpu);
    case 0x05FC:
    case 0x05FE:
    case 0x0600:
    case 0x0603:
    case 0x0605:
    case 0x0608:
    case 0x060A:
    case 0x060C:
    case 0x060F:
    case 0x0611:
    case 0x0613:
    case 0x0616:
    case 0x0618:
    case 0x061A:
    case 0x061D:
    case 0x061F:
    case 0x0622:
        return execute_audio_unresolved_unk05fc_instruction(cpu);
    case 0x0625:
    case 0x0627:
        return execute_audio_read_port_0_instruction(cpu);
    case 0x062A:
    case 0x062D:
    case 0x0630:
    case 0x0632:
    case 0x0634:
        return execute_audio_unresolved_unk062a_instruction(cpu);
    case 0x0635:
    case 0x0638:
        return execute_audio_read_port_instruction(cpu);
    case 0x063A:
    case 0x063D:
    case 0x0640:
    case 0x0642:
    case 0x0644:
    case 0x0647:
    case 0x064A:
    case 0x064C:
    case 0x064E:
        return execute_audio_unresolved_unk063a_instruction(cpu);
    case 0x0650:
        return execute_audio_unresolved_unk0650_instruction(cpu);
    case 0x0653:
        return execute_audio_unresolved_unk0653_instruction(cpu);
    case 0x0654:
    case 0x0656:
    case 0x0658:
    case 0x065B:
        return execute_audio_play_note_instruction(cpu);
    case 0x065D:
    case 0x065F:
    case 0x0661:
    case 0x0663:
    case 0x0665:
    case 0x0667:
    case 0x0668:
    case 0x066A:
    case 0x066B:
    case 0x066D:
    case 0x066E:
    case 0x0671:
    case 0x0674:
    case 0x0677:
    case 0x067A:
    case 0x067D:
    case 0x067E:
    case 0x0680:
    case 0x0681:
    case 0x0684:
    case 0x0686:
    case 0x0688:
    case 0x068B:
    case 0x068E:
    case 0x0690:
    case 0x0693:
    case 0x0696:
    case 0x0699:
    case 0x069B:
    case 0x069D:
    case 0x06A0:
    case 0x06A2:
    case 0x06A5:
    case 0x06A7:
    case 0x06AA:
    case 0x06AB:
    case 0x06AE:
        return execute_audio_unresolved_unk065d_instruction(cpu);
    case 0x06B1:
    case 0x06B4:
    case 0x06B5:
    case 0x06B8:
        return execute_audio_unresolved_unk06b1_instruction(cpu);
    case 0x06BB:
        return execute_audio_unresolved_unk06bb_instruction(cpu);
    case 0x06BE:
    case 0x06C0:
    case 0x06C2:
    case 0x06C3:
    case 0x06C5:
    case 0x06C7:
    case 0x06C9:
    case 0x06CA:
    case 0x06CC:
    case 0x06CE:
    case 0x06CF:
        return execute_audio_unresolved_unk06be_instruction(cpu);
    case 0x06D0:
    case 0x06D2:
        return execute_audio_unresolved_unk06d0_instruction(cpu);
    case 0x06D4:
    case 0x06D5:
    case 0x06D7:
    case 0x06D8:
    case 0x06DA:
    case 0x06DC:
    case 0x06DD:
    case 0x06DE:
    case 0x06E1:
    case 0x06E3:
    case 0x06E6:
    case 0x06E8:
    case 0x06EB:
    case 0x06EC:
    case 0x06EF:
    case 0x06F0:
    case 0x06F2:
    case 0x06F4:
    case 0x06F5:
    case 0x06F6:
    case 0x06F8:
    case 0x06FA:
    case 0x06FC:
    case 0x06FD:
    case 0x06FF:
    case 0x0701:
        return execute_audio_unresolved_unk06d4_instruction(cpu);
    case 0x0703:
    case 0x0705:
    case 0x0706:
        return execute_audio_unresolved_unk0703_instruction(cpu);
    case 0x0707:
    case 0x0709:
    case 0x070B:
    case 0x070D:
    case 0x070E:
    case 0x0711:
    case 0x0713:
    case 0x0714:
    case 0x0716:
    case 0x0719:
    case 0x071B:
    case 0x071C:
    case 0x071D:
    case 0x0720:
    case 0x0722:
    case 0x0723:
    case 0x0725:
    case 0x0727:
    case 0x072A:
    case 0x072C:
    case 0x072D:
    case 0x072E:
    case 0x072F:
    case 0x0731:
    case 0x0733:
    case 0x0734:
    case 0x0735:
    case 0x0736:
    case 0x0738:
    case 0x0739:
    case 0x073B:
    case 0x073E:
    case 0x073F:
        return execute_audio_unresolved_unk0707_instruction(cpu);
    case 0x0741:
    case 0x0742:
    case 0x0744:
    case 0x0746:
    case 0x0747:
        return execute_audio_unresolved_unk0741_instruction(cpu);
    case 0x0749:
    case 0x074C:
        return execute_audio_write_dsp_instruction(cpu);
    case 0x074F:
        return execute_audio_unresolved_unk074f_instruction(cpu);
    case 0x0750:
    case 0x0752:
    case 0x0754:
    case 0x0756:
    case 0x0757:
    case 0x0759:
    case 0x075B:
    case 0x075C:
    case 0x075D:
        return execute_audio_unresolved_unk0750_instruction(cpu);
    case 0x075E:
    case 0x0760:
    case 0x0762:
    case 0x0765:
    case 0x0768:
    case 0x076B:
    case 0x076E:
    case 0x0770:
        return execute_audio_unresolved_unk075e_instruction(cpu);
    case 0x0772:
    case 0x0774:
    case 0x0775:
    case 0x0777:
    case 0x0779:
    case 0x077A:
    case 0x077B:
    case 0x077E:
    case 0x077F:
        return execute_audio_unresolved_unk0772_instruction(cpu);
    case 0x0782:
    case 0x0784:
        return execute_audio_unresolved_unk0782_instruction(cpu);
    case 0x0787:
    case 0x0789:
    case 0x078C:
    case 0x078F:
    case 0x0792:
    case 0x0794:
    case 0x0796:
    case 0x0799:
        return execute_audio_unresolved_unk0787_instruction(cpu);
    case 0x079A:
    case 0x079C:
    case 0x079D:
    case 0x079E:
    case 0x079F:
    case 0x07A2:
    case 0x07A3:
    case 0x07A6:
        return execute_audio_unresolved_unk079a_instruction(cpu);
    case 0x07A9:
    case 0x07AB:
        return execute_audio_unresolved_unk07a9_instruction(cpu);
    case 0x07AE:
    case 0x07B0:
    case 0x07B3:
    case 0x07B5:
    case 0x07B8:
    case 0x07BB:
    case 0x07BE:
    case 0x07C1:
    case 0x07C4:
    case 0x07C7:
    case 0x07C9:
    case 0x07CB:
    case 0x07CC:
    case 0x07CD:
    case 0x07CF:
    case 0x07D1:
    case 0x07D3:
    case 0x07D5:
    case 0x07D7:
    case 0x07D9:
    case 0x07DB:
    case 0x07DD:
    case 0x07E0:
        return execute_audio_unresolved_unk07ae_instruction(cpu);
    case 0x07E3:
        return execute_audio_unresolved_unk07e3_instruction(cpu);
    case 0x07E4:
        return execute_audio_unresolved_unk07e4_instruction(cpu);
    case 0x07E7:
        return execute_audio_unresolved_unk07e7_instruction(cpu);
    case 0x07EA:
    case 0x07EC:
    case 0x07EF:
    case 0x07F1:
    case 0x07F4:
    case 0x07F6:
    case 0x07F8:
        return execute_audio_unresolved_unk07ea_instruction(cpu);
    case 0x07F9:
    case 0x07FB:
    case 0x07FD:
        return execute_audio_unresolved_unk07f9_instruction(cpu);
    case 0x07FF:
    case 0x0801:
    case 0x0803:
    case 0x0805:
    case 0x0807:
    case 0x0809:
    case 0x080B:
    case 0x080D:
        return execute_audio_unresolved_unk07ff_instruction(cpu);
    case 0x080F:
    case 0x0811:
    case 0x0813:
    case 0x0815:
    case 0x0817:
        return execute_audio_unresolved_unk080f_instruction(cpu);
    case 0x081A:
    case 0x081D:
    case 0x081F:
    case 0x0820:
    case 0x0822:
    case 0x0824:
    case 0x0826:
    case 0x0828:
    case 0x082A:
        return execute_audio_unresolved_unk081a_instruction(cpu);
    case 0x082C:
    case 0x082E:
        return execute_audio_unresolved_unk082c_instruction(cpu);
    case 0x0830:
    case 0x0832:
    case 0x0834:
        return execute_audio_unresolved_unk0830_instruction(cpu);
    case 0x0836:
    case 0x0839:
    case 0x083B:
    case 0x083D:
    case 0x083F:
        return execute_audio_unresolved_unk0836_instruction(cpu);
    case 0x0841:
    case 0x0843:
        return execute_audio_unresolved_unk0841_instruction(cpu);
    case 0x0845:
    case 0x0847:
    case 0x084A:
    case 0x084B:
    case 0x084D:
    case 0x084F:
        return execute_audio_unresolved_unk0845_instruction(cpu);
    case 0x0852:
    case 0x0854:
    case 0x0856:
    case 0x0859:
    case 0x085B:
    case 0x085D:
        return execute_audio_unresolved_unk0852_instruction(cpu);
    case 0x0860:
    case 0x0862:
    case 0x0864:
    case 0x0866:
    case 0x0868:
    case 0x0869:
    case 0x086B:
    case 0x086C:
    case 0x086D:
    case 0x086F:
        return execute_audio_unresolved_unk0860_instruction(cpu);
    case 0x0871:
    case 0x0873:
    case 0x0875:
        return execute_audio_unresolved_unk0871_instruction(cpu);
    case 0x0878:
    case 0x087A:
    case 0x087C:
    case 0x087E:
    case 0x0880:
        return execute_audio_unresolved_unk0878_instruction(cpu);
    case 0x0882:
    case 0x0885:
    case 0x0887:
    case 0x0889:
    case 0x088B:
    case 0x088E:
    case 0x0890:
    case 0x0892:
    case 0x0895:
    case 0x0897:
    case 0x089A:
    case 0x089C:
        return execute_audio_unresolved_unk0882_instruction(cpu);
    case 0x089E:
    case 0x08A0:
    case 0x08A3:
    case 0x08A6:
    case 0x08A8:
    case 0x08A9:
    case 0x08AA:
    case 0x08AC:
    case 0x08AD:
    case 0x08B0:
    case 0x08B3:
    case 0x08B4:
    case 0x08B6:
    case 0x08B7:
    case 0x08BA:
    case 0x08BD:
        return execute_audio_unresolved_unk089e_instruction(cpu);
    case 0x08C0:
    case 0x08C2:
    case 0x08C4:
    case 0x08C7:
        return execute_audio_unresolved_unk08c0_instruction(cpu);
    case 0x08C9:
    case 0x08CC:
    case 0x08CE:
    case 0x08D0:
    case 0x08D1:
        return execute_audio_unresolved_unk08c9_instruction(cpu);
    case 0x08D4:
    case 0x08D7:
    case 0x08D9:
    case 0x08DA:
    case 0x08DD:
        return execute_audio_unresolved_unk08d4_instruction(cpu);
    case 0x08DE:
    case 0x08DF:
    case 0x08E1:
        return execute_audio_unresolved_unk08de_instruction(cpu);
    case 0x08E2:
    case 0x08E4:
        return execute_audio_unresolved_unk08e2_instruction(cpu);
    case 0x08E6:
    case 0x08E8:
    case 0x08EA:
        return execute_audio_unresolved_unk08e6_instruction(cpu);
    case 0x08ED:
        return execute_audio_unresolved_unk08ed_instruction(cpu);
    case 0x08F0:
    case 0x08F1:
    case 0x08F2:
    case 0x08F4:
    case 0x08F6:
    case 0x08F8:
    case 0x08FA:
    case 0x08FC:
    case 0x08FE:
    case 0x0901:
        return execute_audio_unresolved_unk08f0_instruction(cpu);
    case 0x0903:
        return execute_audio_unresolved_unk0903_instruction(cpu);
    case 0x0905:
    case 0x0907:
    case 0x0909:
    case 0x090B:
    case 0x090D:
    case 0x090F:
    case 0x0911:
    case 0x0913:
    case 0x0916:
    case 0x0918:
    case 0x091A:
        return execute_audio_unresolved_unk0905_instruction(cpu);
    case 0x091C:
        return execute_audio_unresolved_unk091c_instruction(cpu);
    case 0x091E:
    case 0x0920:
    case 0x0922:
    case 0x0924:
    case 0x0926:
    case 0x0929:
        return execute_audio_unresolved_unk091e_instruction(cpu);
    case 0x092B:
    case 0x092D:
        return execute_audio_unresolved_unk092b_instruction(cpu);
    case 0x0930:
    case 0x0932:
        return execute_audio_unresolved_unk0930_instruction(cpu);
    case 0x0935:
    case 0x0937:
    case 0x0939:
        return execute_audio_unresolved_unk0935_instruction(cpu);
    case 0x093C:
    case 0x093D:
    case 0x093E:
    case 0x0940:
    case 0x0942:
        return execute_audio_unresolved_unk093c_instruction(cpu);
    case 0x0943:
    case 0x0944:
    case 0x0945:
    case 0x0948:
    case 0x0949:
    case 0x094C:
    case 0x094D:
    case 0x094E:
    case 0x094F:
    case 0x0950:
    case 0x0953:
        return execute_audio_unresolved_unk0943_instruction(cpu);
    case 0x0955:
        return execute_audio_unresolved_unk0955_instruction(cpu);
    case 0x0957:
    case 0x0959:
    case 0x095B:
        return execute_audio_unresolved_unk0957_instruction(cpu);
    case 0x095D:
    case 0x095E:
        return execute_audio_unresolved_unk095d_instruction(cpu);
    case 0x095F:
        return execute_audio_unresolved_unk095f_instruction(cpu);
    case 0x0962:
    case 0x0963:
    case 0x0965:
    case 0x0966:
    case 0x0968:
    case 0x0969:
        return execute_audio_unresolved_unk0962_instruction(cpu);
    case 0x096B:
    case 0x096D:
    case 0x096E:
    case 0x0970:
    case 0x0971:
    case 0x0974:
    case 0x0977:
    case 0x0979:
    case 0x097B:
    case 0x097D:
    case 0x097E:
    case 0x097F:
    case 0x0980:
    case 0x0981:
    case 0x0983:
    case 0x0984:
    case 0x0986:
    case 0x0988:
    case 0x098A:
    case 0x098C:
    case 0x098F:
    case 0x0992:
    case 0x0995:
    case 0x0996:
        return execute_audio_unresolved_unk096b_instruction(cpu);
    case 0x0998:
    case 0x099A:
        return execute_audio_unresolved_unk0998_instruction(cpu);
    case 0x099D:
        return execute_audio_unresolved_unk099d_instruction(cpu);
    case 0x099F:
    case 0x09A2:
    case 0x09A5:
    case 0x09A6:
    case 0x09A7:
    case 0x09A9:
    case 0x09AB:
    case 0x09AC:
    case 0x09AE:
    case 0x09B1:
    case 0x09B2:
    case 0x09B4:
        return execute_audio_unresolved_unk099f_instruction(cpu);
    case 0x09B7:
        return execute_audio_unresolved_unk09b7_instruction(cpu);
    case 0x09B8:
    case 0x09BA:
    case 0x09BD:
    case 0x09BF:
    case 0x09C1:
    case 0x09C3:
        return execute_audio_unresolved_unk09b8_instruction(cpu);
    case 0x09C6:
        return execute_audio_unresolved_unk09c6_instruction(cpu);
    case 0x09C8:
    case 0x09CB:
    case 0x09CD:
    case 0x09D0:
    case 0x09D2:
    case 0x09D5:
        return execute_audio_unresolved_unk09c8_instruction(cpu);
    case 0x09D6:
    case 0x09D8:
    case 0x09D9:
        return execute_audio_unresolved_unk09d6_instruction(cpu);
    case 0x09DC:
    case 0x09DE:
    case 0x09E1:
    case 0x09E3:
    case 0x09E5:
        return execute_audio_unresolved_unk09dc_instruction(cpu);
    case 0x09E8:
    case 0x09EA:
    case 0x09ED:
    case 0x09EE:
    case 0x09F1:
    case 0x09F2:
    case 0x09F5:
    case 0x09F8:
    case 0x09F9:
    case 0x09FC:
        return execute_audio_unresolved_unk09e8_instruction(cpu);
    case 0x09FD:
    case 0x0A00:
    case 0x0A03:
    case 0x0A06:
        return execute_audio_unresolved_unk09fd_instruction(cpu);
    case 0x0A09:
    case 0x0A0B:
    case 0x0A0E:
    case 0x0A10:
    case 0x0A13:
        return execute_audio_unresolved_unk0a09_instruction(cpu);
    case 0x0A14:
    case 0x0A17:
    case 0x0A18:
    case 0x0A1A:
    case 0x0A1C:
    case 0x0A1D:
    case 0x0A1E:
    case 0x0A20:
    case 0x0A23:
        return execute_audio_unresolved_unk0a14_instruction(cpu);
    case 0x0A24:
    case 0x0A26:
    case 0x0A28:
        return execute_audio_unresolved_unk0a24_instruction(cpu);
    case 0x0A29:
    case 0x0A2B:
    case 0x0A2E:
        return execute_audio_unresolved_unk0a29_instruction(cpu);
    case 0x0A30:
    case 0x0A31:
    case 0x0A33:
    case 0x0A35:
    case 0x0A38:
    case 0x0A3A:
        return execute_audio_unresolved_unk0a30_instruction(cpu);
    case 0x0A3B:
    case 0x0A3D:
    case 0x0A3F:
        return execute_audio_unresolved_unk0a3b_instruction(cpu);
    case 0x0A40:
    case 0x0A42:
    case 0x0A45:
        return execute_audio_unresolved_unk0a40_instruction(cpu);
    case 0x0A47:
    case 0x0A48:
    case 0x0A4A:
    case 0x0A4C:
    case 0x0A4F:
    case 0x0A51:
        return execute_audio_unresolved_unk0a47_instruction(cpu);
    case 0x0A52:
    case 0x0A54:
        return execute_audio_unresolved_unk0a52_instruction(cpu);
    case 0x0A55:
    case 0x0A58:
        return execute_audio_unresolved_unk0a55_instruction(cpu);
    case 0x0A59:
    case 0x0A5C:
    case 0x0A5F:
    case 0x0A62:
        return execute_audio_unresolved_unk0a59_instruction(cpu);
    case 0x0A65:
    case 0x0A67:
        return execute_audio_unresolved_unk0a65_instruction(cpu);
    case 0x0A68:
    case 0x0A6A:
        return execute_audio_unresolved_unk0a68_instruction(cpu);
    case 0x0A6C:
        return execute_audio_unresolved_unk0a6c_instruction(cpu);
    case 0x0A6E:
    case 0x0A71:
    case 0x0A72:
    case 0x0A75:
    case 0x0A78:
    case 0x0A7B:
    case 0x0A7E:
    case 0x0A81:
        return execute_audio_unresolved_unk0a6e_instruction(cpu);
    case 0x0A82:
    case 0x0A85:
        return execute_audio_unresolved_unk0a82_instruction(cpu);
    case 0x0A86:
    case 0x0A89:
    case 0x0A8B:
    case 0x0A8E:
        return execute_audio_unresolved_unk0a86_instruction(cpu);
    case 0x0A8F:
    case 0x0A91:
    case 0x0A92:
        return execute_audio_unresolved_unk0a8f_instruction(cpu);
    case 0x0A95:
    case 0x0A98:
    case 0x0A99:
    case 0x0A9C:
    case 0x0A9D:
    case 0x0AA0:
    case 0x0AA3:
    case 0x0AA4:
    case 0x0AA7:
        return execute_audio_unresolved_unk0a95_instruction(cpu);
    case 0x0AA8:
    case 0x0AAB:
        return execute_audio_unresolved_unk0aa8_instruction(cpu);
    case 0x0AAC:
    case 0x0AAF:
    case 0x0AB2:
    case 0x0AB5:
    case 0x0AB8:
    case 0x0ABA:
    case 0x0ABC:
    case 0x0ABF:
    case 0x0AC1:
        return execute_audio_unresolved_unk0aac_instruction(cpu);
    case 0x0AC4:
    case 0x0AC7:
    case 0x0AC9:
    case 0x0ACC:
    case 0x0ACE:
        return execute_audio_unresolved_unk0ac4_instruction(cpu);
    case 0x0ACF:
    case 0x0AD1:
    case 0x0AD4:
    case 0x0AD6:
    case 0x0AD8:
    case 0x0ADB:
    case 0x0ADD:
    case 0x0ADF:
    case 0x0AE1:
        return execute_audio_unresolved_unk0acf_instruction(cpu);
    case 0x0AE2:
    case 0x0AE4:
    case 0x0AE7:
    case 0x0AE9:
    case 0x0AEA:
    case 0x0AEC:
    case 0x0AEE:
    case 0x0AF1:
    case 0x0AF3:
    case 0x0AF6:
    case 0x0AF8:
    case 0x0AF9:
    case 0x0AFB:
    case 0x0AFD:
    case 0x0B00:
    case 0x0B02:
        return execute_audio_unresolved_unk0ae2_instruction(cpu);
    case 0x0B03:
    case 0x0B05:
    case 0x0B07:
    case 0x0B09:
        return execute_audio_unresolved_unk0b03_instruction(cpu);
    case 0x0B0A:
    case 0x0B0D:
    case 0x0B10:
    case 0x0B12:
    case 0x0B15:
    case 0x0B17:
    case 0x0B18:
    case 0x0B19:
        return execute_audio_unresolved_unk0b0a_instruction(cpu);
    case 0x0B1B:
    case 0x0B1E:
    case 0x0B21:
    case 0x0B22:
    case 0x0B23:
    case 0x0B24:
    case 0x0B26:
    case 0x0B27:
    case 0x0B29:
    case 0x0B2B:
        return execute_audio_unresolved_unk0b1b_instruction(cpu);
    case 0x0B2C:
    case 0x0B2E:
    case 0x0B30:
    case 0x0B33:
    case 0x0B36:
    case 0x0B38:
    case 0x0B3A:
    case 0x0B3C:
    case 0x0B3E:
        return execute_audio_set_echo_delay_instruction(cpu);
    case 0x0B41:
    case 0x0B42:
        return execute_audio_unresolved_unk0b41_instruction(cpu);
    case 0x0B44:
    case 0x0B46:
        return execute_audio_unresolved_unk0b44_instruction(cpu);
    case 0x0B48:
    case 0x0B4B:
    case 0x0B4E:
    case 0x0B50:
    case 0x0B53:
    case 0x0B55:
    case 0x0B57:
    case 0x0B59:
    case 0x0B5B:
    case 0x0B5E:
    case 0x0B60:
    case 0x0B62:
        return execute_audio_unresolved_unk0b48_instruction(cpu);
    case 0x0B65:
    case 0x0B66:
    case 0x0B67:
    case 0x0B68:
    case 0x0B6A:
    case 0x0B6B:
    case 0x0B6D:
    case 0x0B6F:
        return execute_audio_unresolved_unk0b65_instruction(cpu);
    case 0x0B72:
    case 0x0B74:
        return execute_audio_unresolved_unk0b72_instruction(cpu);
    case 0x0B75:
    case 0x0B78:
        return execute_audio_unresolved_unk0b75_instruction(cpu);
    case 0x0B79:
    case 0x0B7A:
    case 0x0B7D:
        return execute_audio_unresolved_unk0b79_instruction(cpu);
    case 0x0B7E:
        return execute_audio_unresolved_unk0b7e_instruction(cpu);
    case 0x0B7F:
    case 0x0B81:
        return execute_audio_unresolved_unk0b7f_instruction(cpu);
    case 0x0B84:
    case 0x0B86:
    case 0x0B88:
    case 0x0B8A:
    case 0x0B8C:
    case 0x0B8E:
    case 0x0B91:
        return execute_audio_unresolved_unk0b84_instruction(cpu);
    case 0x0B94:
    case 0x0B96:
    case 0x0B99:
    case 0x0B9B:
    case 0x0B9E:
    case 0x0B9F:
    case 0x0BA1:
        return execute_audio_unresolved_unk0b94_instruction(cpu);
    case 0x0BA4:
    case 0x0BA6:
    case 0x0BA9:
    case 0x0BAA:
    case 0x0BAD:
    case 0x0BAF:
    case 0x0BB0:
    case 0x0BB1:
    case 0x0BB4:
    case 0x0BB7:
    case 0x0BB8:
        return execute_audio_unresolved_unk0ba4_instruction(cpu);
    case 0x0BBB:
        return execute_audio_unresolved_unk0bbb_instruction(cpu);
    case 0x0BBC:
    case 0x0BBF:
        return execute_audio_unresolved_unk0bbc_instruction(cpu);
    case 0x0BC1:
    case 0x0BC4:
    case 0x0BC6:
        return execute_audio_unresolved_unk0bc1_instruction(cpu);
    case 0x0BC7:
    case 0x0BC8:
    case 0x0BCA:
    case 0x0BCC:
    case 0x0BCE:
        return execute_audio_unresolved_unk0bc7_instruction(cpu);
    case 0x0BCF:
    case 0x0BD1:
    case 0x0BD2:
    case 0x0BD3:
    case 0x0BD5:
    case 0x0BD6:
    case 0x0BD7:
        return execute_audio_unresolved_unk0bcf_instruction(cpu);
    case 0x0BD9:
    case 0x0BDC:
    case 0x0BDE:
    case 0x0BE0:
        return execute_audio_unresolved_unk0bd9_instruction(cpu);
    case 0x0BE2:
        return execute_audio_unresolved_unk0be2_instruction(cpu);
    case 0x0C40:
    case 0x0C42:
    case 0x0C44:
    case 0x0C46:
    case 0x0C48:
    case 0x0C4A:
        return execute_audio_unresolved_unk0c40_instruction(cpu);
    case 0x0C4D:
    case 0x0C4F:
    case 0x0C51:
    case 0x0C54:
    case 0x0C57:
    case 0x0C5A:
    case 0x0C5D:
    case 0x0C5F:
    case 0x0C60:
    case 0x0C62:
    case 0x0C64:
        return execute_audio_unresolved_unk0c4d_instruction(cpu);
    case 0x0C66:
    case 0x0C67:
        return execute_audio_unresolved_unk0c66_instruction(cpu);
    case 0x0C6A:
    case 0x0C6D:
    case 0x0C70:
        return execute_audio_unresolved_unk0c6a_instruction(cpu);
    case 0x0C72:
        return execute_audio_unresolved_unk0c72_instruction(cpu);
    case 0x0C74:
    case 0x0C76:
        return execute_audio_unresolved_unk0c74_instruction(cpu);
    case 0x0C79:
    case 0x0C7B:
    case 0x0C7D:
    case 0x0C7F:
    case 0x0C81:
    case 0x0C83:
        return execute_audio_unresolved_unk0c79_instruction(cpu);
    case 0x0C86:
    case 0x0C88:
    case 0x0C8A:
    case 0x0C8C:
    case 0x0C8F:
    case 0x0C90:
    case 0x0C93:
        return execute_audio_unresolved_unk0c86_instruction(cpu);
    case 0x0C95:
    case 0x0C96:
    case 0x0C97:
    case 0x0C98:
        return execute_audio_unresolved_unk0c95_instruction(cpu);
    case 0x0C9A:
    case 0x0C9C:
    case 0x0C9F:
    case 0x0CA0:
    case 0x0CA3:
    case 0x0CA5:
    case 0x0CA6:
    case 0x0CA7:
    case 0x0CA9:
    case 0x0CAA:
    case 0x0CAD:
    case 0x0CAE:
    case 0x0CB1:
    case 0x0CB2:
    case 0x0CB5:
    case 0x0CB6:
    case 0x0CB9:
        return execute_audio_unresolved_unk0c9a_instruction(cpu);
    case 0x0CBA:
    case 0x0CBB:
    case 0x0CBD:
    case 0x0CBF:
        return execute_audio_unresolved_unk0cba_instruction(cpu);
    case 0x0CC0:
    case 0x0CC2:
    case 0x0CC5:
    case 0x0CC7:
    case 0x0CC9:
    case 0x0CCB:
    case 0x0CCD:
    case 0x0CCF:
        return execute_audio_unresolved_unk0cc0_instruction(cpu);
    case 0x0CD2:
        return execute_audio_unresolved_unk0cd2_instruction(cpu);
    case 0x0CD3:
        return execute_audio_unresolved_unk0cd3_instruction(cpu);
    case 0x0CD6:
    case 0x0CD8:
    case 0x0CDA:
    case 0x0CDB:
    case 0x0CDC:
    case 0x0CDD:
    case 0x0CDF:
    case 0x0CE2:
    case 0x0CE4:
    case 0x0CE6:
    case 0x0CE7:
        return execute_audio_unresolved_unk0cd6_instruction(cpu);
    case 0x0CE9:
    case 0x0CEC:
    case 0x0CEF:
        return execute_audio_unresolved_unk0ce9_instruction(cpu);
    case 0x0CF0:
        return execute_audio_unresolved_unk0cf0_instruction(cpu);
    case 0x0CF2:
    case 0x0CF4:
    case 0x0CF6:
        return execute_audio_unresolved_unk0cf2_instruction(cpu);
    case 0x0CF7:
    case 0x0CF9:
    case 0x0CFB:
    case 0x0CFD:
    case 0x0CFF:
    case 0x0D01:
        return execute_audio_unresolved_unk0cf7_instruction(cpu);
    case 0x0D04:
    case 0x0D06:
    case 0x0D08:
    case 0x0D0A:
        return execute_audio_unresolved_unk0d04_instruction(cpu);
    case 0x0D0C:
    case 0x0D0E:
        return execute_audio_unresolved_unk0d0c_instruction(cpu);
    case 0x0D10:
    case 0x0D12:
    case 0x0D14:
        return execute_audio_unresolved_unk0d10_instruction(cpu);
    case 0x0D16:
    case 0x0D17:
    case 0x0D19:
    case 0x0D1B:
        return execute_audio_unresolved_unk0d16_instruction(cpu);
    case 0x0D1D:
    case 0x0D1F:
    case 0x0D21:
    case 0x0D23:
    case 0x0D25:
    case 0x0D27:
    case 0x0D29:
    case 0x0D2A:
    case 0x0D2B:
    case 0x0D2C:
    case 0x0D2F:
    case 0x0D30:
        return execute_audio_unresolved_unk0d1d_instruction(cpu);
    case 0x0D32:
    case 0x0D34:
    case 0x0D36:
    case 0x0D38:
    case 0x0D3A:
    case 0x0D3D:
    case 0x0D3E:
    case 0x0D41:
    case 0x0D42:
        return execute_audio_unresolved_unk0d32_instruction(cpu);
    case 0x0D44:
    case 0x0D47:
    case 0x0D48:
    case 0x0D4B:
    case 0x0D4C:
        return execute_audio_unresolved_unk0d44_instruction(cpu);
    case 0x0D4E:
    case 0x0D4F:
    case 0x0D51:
    case 0x0D52:
    case 0x0D53:
    case 0x0D55:
    case 0x0D56:
    case 0x0D57:
        return execute_audio_unresolved_unk0d4e_instruction(cpu);
    case 0x0D59:
    case 0x0D5B:
    case 0x0D5D:
        return execute_audio_unresolved_unk0d59_instruction(cpu);
    case 0x0D60:
    case 0x0D62:
    case 0x0D64:
    case 0x0D66:
    case 0x0D68:
    case 0x0D6A:
    case 0x0D6C:
        return execute_audio_unresolved_unk0d60_instruction(cpu);
    case 0x0D6E:
    case 0x0D70:
    case 0x0D72:
    case 0x0D74:
    case 0x0D76:
        return execute_audio_unresolved_unk0d6e_instruction(cpu);
    case 0x0D79:
    case 0x0D7C:
    case 0x0D7E:
    case 0x0D80:
    case 0x0D83:
    case 0x0D86:
    case 0x0D89:
    case 0x0D8C:
    case 0x0D8E:
    case 0x0D91:
        return execute_audio_unresolved_unk0d79_instruction(cpu);
    case 0x0D93:
    case 0x0D94:
    case 0x0D96:
    case 0x0D97:
    case 0x0D98:
    case 0x0D9A:
        return execute_audio_unresolved_unk0d93_instruction(cpu);
    case 0x0D9C:
    case 0x0D9D:
        return execute_audio_unresolved_unk0d9c_instruction(cpu);
    case 0x0DA0:
    case 0x0DA2:
    case 0x0DA5:
    case 0x0DA6:
    case 0x0DA9:
        return execute_audio_unresolved_unk0da0_instruction(cpu);
    case 0x0DAC:
    case 0x0DAE:
    case 0x0DAF:
    case 0x0DB0:
    case 0x0DB2:
        return execute_audio_unresolved_unk0dac_instruction(cpu);
    case 0x0DB4:
    case 0x0DB5:
    case 0x0DB7:
    case 0x0DB9:
    case 0x0DBB:
    case 0x0DBD:
    case 0x0DBE:
        return execute_audio_unresolved_unk0db4_instruction(cpu);
    case 0x0DC0:
    case 0x0DC1:
    case 0x0DC2:
        return execute_audio_unresolved_unk0dc0_instruction(cpu);
    case 0x0DC4:
        return execute_audio_unresolved_unk0dc4_instruction(cpu);
    case 0x0DC7:
        return execute_audio_unresolved_unk0dc7_instruction(cpu);
    case 0x0DCA:
        return execute_audio_unresolved_unk0dca_instruction(cpu);
    case 0x0DCC:
    case 0x0DCF:
        return execute_audio_unresolved_unk0dcc_instruction(cpu);
    case 0x0DD0:
    case 0x0DD2:
    case 0x0DD4:
    case 0x0DD6:
    case 0x0DD9:
    case 0x0DDC:
        return execute_audio_unresolved_unk0dd0_instruction(cpu);
    case 0x0DDF:
    case 0x0DE2:
    case 0x0DE3:
    case 0x0DE6:
    case 0x0DE8:
    case 0x0DEA:
    case 0x0DEC:
    case 0x0DEF:
    case 0x0DF0:
    case 0x0DF3:
        return execute_audio_unresolved_unk0ddf_instruction(cpu);
    case 0x0DF6:
    case 0x0DF9:
        return execute_audio_unresolved_unk0df6_instruction(cpu);
    case 0x0DFC:
    case 0x0DFE:
    case 0x0E01:
    case 0x0E03:
    case 0x0E05:
    case 0x0E07:
    case 0x0E09:
    case 0x0E0C:
    case 0x0E0D:
    case 0x0E10:
        return execute_audio_unresolved_unk0dfc_instruction(cpu);
    case 0x0E13:
    case 0x0E15:
    case 0x0E17:
    case 0x0E1A:
    case 0x0E1D:
    case 0x0E1F:
    case 0x0E22:
    case 0x0E23:
    case 0x0E24:
    case 0x0E25:
    case 0x0E28:
        return execute_audio_unresolved_unk0e13_instruction(cpu);
    case 0x0E2B:
    case 0x0E2D:
    case 0x0E2F:
    case 0x0E32:
    case 0x0E33:
    case 0x0E35:
    case 0x0E36:
    case 0x0E38:
    case 0x0E3B:
    case 0x0E3D:
    case 0x0E3E:
    case 0x0E3F:
        return execute_audio_unresolved_unk0e2b_instruction(cpu);
    case 0x0E41:
    case 0x0E44:
    case 0x0E46:
    case 0x0E48:
        return execute_audio_unresolved_unk0e41_instruction(cpu);
    case 0x0E49:
    case 0x0E4B:
    case 0x0E4D:
    case 0x0E50:
    case 0x0E51:
    case 0x0E52:
    case 0x0E53:
        return execute_audio_unresolved_unk0e49_instruction(cpu);
    case 0x0E56:
    case 0x0E57:
    case 0x0E59:
        return execute_audio_unresolved_unk0e56_instruction(cpu);
    case 0x0E5B:
    case 0x0E5D:
    case 0x0E5E:
    case 0x0E5F:
        return execute_audio_unresolved_unk0e5b_instruction(cpu);
    case 0x0E61:
    case 0x0E63:
    case 0x0E64:
    case 0x0E67:
    case 0x0E68:
    case 0x0E6B:
    case 0x0E6C:
    case 0x0E6D:
    case 0x0E6E:
    case 0x0E6F:
    case 0x0E72:
        return execute_audio_unresolved_unk0e61_instruction(cpu);
    case 0x0EE1:
    case 0x0EE3:
    case 0x0EE6:
    case 0x0EE8:
        return execute_audio_unresolved_unk0ee1_instruction(cpu);
    case 0x0EEB:
    case 0x0EEE:
    case 0x0EF0:
    case 0x0EF2:
        return execute_audio_unresolved_unk0eeb_instruction(cpu);
    case 0x0EF4:
    case 0x0EF7:
        return execute_audio_unresolved_unk0ef4_instruction(cpu);
    case 0x0EF9:
    case 0x0EFC:
    case 0x0EFE:
    case 0x0F01:
    case 0x0F04:
    case 0x0F06:
    case 0x0F07:
    case 0x0F09:
    case 0x0F0B:
        return execute_audio_unresolved_unk0ef9_instruction(cpu);
    case 0x0F0D:
    case 0x0F0F:
    case 0x0F12:
        return execute_audio_unresolved_unk0f0d_instruction(cpu);
    case 0x0F14:
    case 0x0F17:
    case 0x0F1A:
    case 0x0F1C:
    case 0x0F1F:
    case 0x0F22:
    case 0x0F25:
    case 0x0F27:
    case 0x0F29:
    case 0x0F2C:
    case 0x0F2D:
    case 0x0F2F:
        return execute_audio_unresolved_unk0f14_instruction(cpu);
    case 0x0F31:
    case 0x0F33:
    case 0x0F36:
    case 0x0F37:
    case 0x0F39:
    case 0x0F3B:
        return execute_audio_unresolved_unk0f31_instruction(cpu);
    case 0x0F3C:
    case 0x0F3E:
        return execute_audio_unresolved_unk0f3c_instruction(cpu);
    case 0x0F40:
    case 0x0F42:
    case 0x0F45:
    case 0x0F46:
    case 0x0F48:
    case 0x0F4A:
        return execute_audio_unresolved_unk0f40_instruction(cpu);
    case 0x0F4B:
    case 0x0F4E:
    case 0x0F50:
    case 0x0F52:
    case 0x0F55:
        return execute_audio_unresolved_unk0f4b_instruction(cpu);
    case 0x0F56:
    case 0x0F59:
    case 0x0F5B:
    case 0x0F5E:
    case 0x0F60:
    case 0x0F62:
    case 0x0F65:
    case 0x0F67:
    case 0x0F68:
    case 0x0F6B:
    case 0x0F6D:
    case 0x0F6F:
    case 0x0F72:
    case 0x0F74:
    case 0x0F76:
    case 0x0F78:
    case 0x0F79:
    case 0x0F7B:
    case 0x0F7E:
    case 0x0F80:
    case 0x0F82:
        return execute_audio_unresolved_unk0f56_instruction(cpu);
    case 0x0F85:
    case 0x0F88:
    case 0x0F8A:
    case 0x0F8C:
        return execute_audio_unresolved_unk0f85_instruction(cpu);
    case 0x0F8F:
    case 0x0F91:
    case 0x0F94:
    case 0x0F96:
    case 0x0F98:
    case 0x0F9B:
    case 0x0F9D:
    case 0x0FA0:
        return execute_audio_unresolved_unk0f8f_instruction(cpu);
    case 0x0FA1:
    case 0x0FA3:
    case 0x0FA5:
    case 0x0FA7:
    case 0x0FA8:
    case 0x0FA9:
    case 0x0FAC:
    case 0x0FAF:
    case 0x0FB0:
    case 0x0FB3:
        return execute_audio_unresolved_unk0fa1_instruction(cpu);
    case 0x0FB6:
        return execute_audio_unresolved_unk0fb6_instruction(cpu);
    case 0x0FB7:
    case 0x0FBA:
    case 0x0FBC:
    case 0x0FBE:
    case 0x0FBF:
    case 0x0FC0:
    case 0x0FC2:
    case 0x0FC5:
    case 0x0FC6:
    case 0x0FC8:
        return execute_audio_unresolved_unk0fb7_instruction(cpu);
    case 0x0FCB:
    case 0x0FCD:
    case 0x0FCE:
    case 0x0FD0:
    case 0x0FD1:
    case 0x0FD3:
    case 0x0FD5:
    case 0x0FD8:
    case 0x0FDA:
    case 0x0FDB:
    case 0x0FDE:
    case 0x0FE0:
    case 0x0FE2:
    case 0x0FE4:
    case 0x0FE6:
    case 0x0FE8:
    case 0x0FEA:
    case 0x0FEC:
    case 0x0FEE:
    case 0x0FF0:
    case 0x0FF2:
    case 0x0FF4:
    case 0x0FF6:
    case 0x0FF8:
    case 0x0FFA:
    case 0x0FFC:
    case 0x0FFE:
    case 0x1000:
    case 0x1002:
    case 0x1005:
    case 0x1008:
        return execute_audio_unresolved_unk0fcb_instruction(cpu);
    case 0x100B:
        return execute_audio_unresolved_unk100b_instruction(cpu);
    case 0x100E:
    case 0x1011:
    case 0x1014:
    case 0x1017:
    case 0x101A:
    case 0x101D:
        return execute_audio_unresolved_unk100e_instruction(cpu);
    case 0x1020:
    case 0x1021:
    case 0x1023:
    case 0x1026:
        return execute_audio_unresolved_unk1020_instruction(cpu);
    case 0x1028:
    case 0x102A:
        return execute_audio_unresolved_unk1028_instruction(cpu);
    case 0x102C:
    case 0x102D:
    case 0x102F:
    case 0x1031:
    case 0x1034:
        return execute_audio_unresolved_unk102c_instruction(cpu);
    case 0x1036:
    case 0x1039:
    case 0x103A:
    case 0x103D:
    case 0x103F:
    case 0x1041:
    case 0x1042:
    case 0x1043:
    case 0x1045:
    case 0x1048:
    case 0x104B:
    case 0x104D:
    case 0x1050:
    case 0x1053:
    case 0x1055:
        return execute_audio_unresolved_unk1036_instruction(cpu);
    case 0x1058:
    case 0x1059:
    case 0x105B:
    case 0x105D:
    case 0x1060:
    case 0x1062:
        return execute_audio_unresolved_unk1058_instruction(cpu);
    case 0x1064:
    case 0x1067:
        return execute_audio_unresolved_unk1064_instruction(cpu);
    case 0x10B6:
    case 0x10B8:
    case 0x10BB:
    case 0x10BD:
    case 0x10BF:
    case 0x10C2:
    case 0x10C4:
    case 0x10C6:
    case 0x10C9:
    case 0x10CC:
    case 0x10CE:
    case 0x10D0:
    case 0x10D2:
        return execute_audio_unresolved_unk10b6_instruction(cpu);
    case 0x10D5:
    case 0x10D8:
    case 0x10DA:
    case 0x10DD:
    case 0x10DF:
    case 0x10E2:
    case 0x10E4:
        return execute_audio_unresolved_unk10d5_instruction(cpu);
    case 0x10E7:
    case 0x10E8:
    case 0x10E9:
    case 0x10EB:
    case 0x10EE:
    case 0x10F0:
    case 0x10F3:
    case 0x10F4:
    case 0x10F5:
    case 0x10F7:
    case 0x10FA:
    case 0x10FB:
        return execute_audio_unresolved_unk10e7_instruction(cpu);
    case 0x10FC:
    case 0x10FE:
    case 0x1101:
    case 0x1102:
    case 0x1105:
    case 0x1107:
    case 0x1109:
    case 0x110C:
        return execute_audio_unresolved_unk10fc_instruction(cpu);
    case 0x110D:
    case 0x110E:
    case 0x110F:
    case 0x1112:
    case 0x1113:
    case 0x1115:
    case 0x1116:
    case 0x1118:
    case 0x1119:
    case 0x111C:
    case 0x111D:
    case 0x111E:
    case 0x1120:
    case 0x1121:
        return execute_audio_unresolved_unk110d_instruction(cpu);
    case 0x1124:
    case 0x1125:
    case 0x1128:
    case 0x1129:
    case 0x112B:
    case 0x112C:
    case 0x112D:
        return execute_audio_unresolved_unk1124_instruction(cpu);
    case 0x1130:
    case 0x1131:
    case 0x1133:
    case 0x1136:
    case 0x1138:
    case 0x113B:
    case 0x113C:
    case 0x113D:
    case 0x1140:
    case 0x1143:
        return execute_audio_unresolved_unk1130_instruction(cpu);
    case 0x1144:
    case 0x1145:
    case 0x1148:
    case 0x1149:
    case 0x114A:
    case 0x114D:
    case 0x114E:
    case 0x1151:
        return execute_audio_unresolved_unk1144_instruction(cpu);
    case 0x1152:
    case 0x1154:
    case 0x1156:
    case 0x1158:
    case 0x115A:
    case 0x115D:
    case 0x115F:
    case 0x1161:
    case 0x1164:
    case 0x1166:
    case 0x1169:
    case 0x116B:
    case 0x116D:
    case 0x116F:
        return execute_audio_unresolved_unk1152_instruction(cpu);
    case 0x1170:
    case 0x1173:
        return execute_audio_unresolved_unk1170_instruction(cpu);
    case 0x1176:
    case 0x1179:
        return execute_audio_unresolved_unk1176_instruction(cpu);
    case 0x1184:
    case 0x1187:
    case 0x118A:
    case 0x118C:
    case 0x118E:
    case 0x1190:
    case 0x1193:
    case 0x1196:
        return execute_audio_unresolved_unk1184_instruction(cpu);
    case 0x1198:
    case 0x119B:
    case 0x119D:
    case 0x11A0:
    case 0x11A3:
    case 0x11A6:
    case 0x11A9:
    case 0x11AC:
    case 0x11AE:
    case 0x11B0:
    case 0x11B2:
    case 0x11B5:
    case 0x11B8:
        return execute_audio_unresolved_unk1198_instruction(cpu);
    case 0x11BA:
    case 0x11BD:
    case 0x11BF:
    case 0x11C2:
    case 0x11C5:
    case 0x11C8:
    case 0x11CB:
    case 0x11CE:
    case 0x11D0:
    case 0x11D2:
    case 0x11D4:
    case 0x11D7:
    case 0x11DA:
        return execute_audio_unresolved_unk11ba_instruction(cpu);
    case 0x11DC:
    case 0x11DF:
    case 0x11E1:
    case 0x11E4:
    case 0x11E7:
    case 0x11EA:
    case 0x11EC:
    case 0x11EF:
    case 0x11F2:
    case 0x11F5:
    case 0x11F8:
    case 0x11FB:
    case 0x11FD:
    case 0x11FF:
    case 0x1201:
    case 0x1204:
        return execute_audio_unresolved_unk11dc_instruction(cpu);
    case 0x1207:
    case 0x120A:
    case 0x120D:
    case 0x120F:
    case 0x1212:
    case 0x1214:
    case 0x1217:
    case 0x1218:
    case 0x121A:
    case 0x121B:
    case 0x121D:
    case 0x1220:
    case 0x1222:
    case 0x1224:
    case 0x1226:
    case 0x1229:
    case 0x122B:
    case 0x122D:
    case 0x122E:
    case 0x1231:
    case 0x1233:
    case 0x1236:
    case 0x1238:
    case 0x123A:
    case 0x123B:
    case 0x123D:
    case 0x123E:
    case 0x123F:
    case 0x1241:
    case 0x1243:
    case 0x1245:
    case 0x1247:
    case 0x1249:
    case 0x124A:
    case 0x124C:
    case 0x124E:
    case 0x1250:
    case 0x1252:
    case 0x1255:
    case 0x1257:
    case 0x1258:
        return execute_audio_unresolved_unk1207_instruction(cpu);
    case 0x126D:
        return execute_audio_unresolved_unk126d_instruction(cpu);
    case 0x1270:
    case 0x1271:
    case 0x1273:
    case 0x1275:
        return execute_audio_unresolved_unk1270_instruction(cpu);
    case 0x1278:
    case 0x1279:
    case 0x127B:
    case 0x127D:
        return execute_audio_unresolved_unk1278_instruction(cpu);
    case 0x1280:
    case 0x1281:
    case 0x1283:
    case 0x1285:
        return execute_audio_unresolved_unk1280_instruction(cpu);
    case 0x1288:
    case 0x1289:
    case 0x128B:
    case 0x128D:
    case 0x128F:
    case 0x1291:
    case 0x1293:
    case 0x1295:
    case 0x1297:
    case 0x1299:
    case 0x129B:
    case 0x129D:
    case 0x129F:
    case 0x12A1:
    case 0x12A3:
    case 0x12A5:
    case 0x12A7:
    case 0x12A9:
    case 0x12AB:
    case 0x12AD:
    case 0x12AF:
    case 0x12B1:
    case 0x12B3:
    case 0x12B4:
    case 0x12B5:
    case 0x12B7:
    case 0x12B9:
    case 0x12BB:
    case 0x12BD:
    case 0x12C0:
    case 0x12C2:
    case 0x12C4:
        return execute_audio_unresolved_unk1288_instruction(cpu);
    case 0x12C7:
    case 0x12C9:
    case 0x12CB:
    case 0x12CD:
    case 0x12CF:
    case 0x12D1:
    case 0x12D3:
    case 0x12D5:
    case 0x12D7:
    case 0x12D8:
    case 0x12DA:
    case 0x12DC:
    case 0x12DE:
    case 0x12E0:
    case 0x12E2:
    case 0x12E4:
    case 0x12E6:
    case 0x12E8:
    case 0x12EB:
    case 0x12ED:
    case 0x12F0:
        return execute_audio_unresolved_unk12c7_instruction(cpu);
    case 0x12F3:
    case 0x12F5:
    case 0x12F8:
    case 0x12FA:
    case 0x12FD:
        return execute_audio_unresolved_unk12f3_instruction(cpu);
    case 0x1300:
    case 0x1302:
    case 0x1305:
    case 0x1307:
    case 0x130A:
        return execute_audio_unresolved_unk1300_instruction(cpu);
    case 0x130D:
    case 0x130F:
    case 0x1312:
    case 0x1314:
    case 0x1317:
        return execute_audio_unresolved_unk130d_instruction(cpu);
    case 0x131A:
    case 0x131D:
    case 0x131F:
    case 0x1321:
    case 0x1324:
    case 0x1326:
    case 0x1329:
    case 0x132A:
        return execute_audio_unresolved_unk131a_instruction(cpu);
    case 0x132D:
        return execute_audio_unresolved_unk132d_instruction(cpu);
    case 0x1340:
        return execute_audio_unresolved_unk1340_instruction(cpu);
    case 0x1343:
    case 0x1345:
        return execute_audio_unresolved_unk1343_instruction(cpu);
    case 0x1348:
        return execute_audio_unresolved_unk1348_instruction(cpu);
    case 0x134B:
        return execute_audio_unresolved_unk134b_instruction(cpu);
    case 0x134E:
    case 0x1351:
    case 0x1353:
    case 0x1355:
    case 0x1357:
    case 0x1359:
    case 0x135B:
    case 0x135D:
    case 0x135F:
    case 0x1361:
    case 0x1362:
    case 0x1364:
    case 0x1366:
    case 0x1368:
    case 0x136A:
    case 0x136C:
    case 0x136E:
    case 0x136F:
    case 0x1372:
    case 0x1373:
    case 0x1375:
    case 0x1377:
    case 0x1379:
    case 0x137B:
    case 0x137D:
    case 0x137F:
    case 0x1382:
        return execute_audio_unresolved_unk134e_instruction(cpu);
    case 0x1384:
        return execute_audio_unresolved_unk1384_instruction(cpu);
    case 0x1385:
    case 0x1387:
    case 0x138A:
    case 0x138C:
    case 0x138E:
        return execute_audio_unresolved_unk1385_instruction(cpu);
    case 0x1391:
        return execute_audio_unresolved_unk1391_instruction(cpu);
    case 0x1394:
    case 0x1397:
    case 0x1398:
    case 0x139B:
    case 0x139C:
    case 0x139F:
        return execute_audio_unresolved_unk1394_instruction(cpu);
    case 0x13A0:
    case 0x13A2:
    case 0x13A5:
    case 0x13A6:
    case 0x13A9:
    case 0x13AB:
    case 0x13AD:
    case 0x13B0:
    case 0x13B2:
    case 0x13B5:
    case 0x13B7:
    case 0x13BA:
    case 0x13BC:
    case 0x13BE:
    case 0x13C0:
    case 0x13C3:
    case 0x13C5:
        return execute_audio_unresolved_unk13a0_instruction(cpu);
    case 0x13C7:
    case 0x13C9:
    case 0x13CB:
    case 0x13CD:
        return execute_audio_unresolved_unk13c7_instruction(cpu);
    case 0x13CF:
        return execute_audio_unresolved_unk13cf_instruction(cpu);
    case 0x13D1:
        return execute_audio_unresolved_unk13d1_instruction(cpu);
    case 0x13D4:
    case 0x13D7:
        return execute_audio_unresolved_unk13d4_instruction(cpu);
    case 0x13D8:
    case 0x13DA:
    case 0x13DD:
        return execute_audio_unresolved_unk13d8_instruction(cpu);
    case 0x13DF:
    case 0x13E2:
    case 0x13E4:
    case 0x13E6:
    case 0x13E8:
        return execute_audio_unresolved_unk13df_instruction(cpu);
    case 0x13EA:
    case 0x13ED:
    case 0x13EF:
    case 0x13F0:
    case 0x13F3:
    case 0x13F6:
    case 0x13F8:
    case 0x13FB:
    case 0x13FD:
    case 0x13FF:
    case 0x1402:
    case 0x1403:
    case 0x1406:
        return execute_audio_unresolved_unk13ea_instruction(cpu);
    case 0x1409:
    case 0x140B:
    case 0x140E:
    case 0x1410:
    case 0x1412:
    case 0x1415:
    case 0x1417:
        return execute_audio_unresolved_unk1409_instruction(cpu);
    case 0x141A:
    case 0x141D:
    case 0x141F:
    case 0x1422:
    case 0x1425:
    case 0x1428:
    case 0x142B:
    case 0x142E:
    case 0x1431:
    case 0x1434:
    case 0x1437:
        return execute_audio_unresolved_unk141a_instruction(cpu);
    case 0x1438:
    case 0x143A:
    case 0x143D:
    case 0x1440:
    case 0x1443:
    case 0x1446:
    case 0x1449:
    case 0x144C:
    case 0x144F:
    case 0x1452:
        return execute_audio_unresolved_unk1438_instruction(cpu);
    case 0x1453:
    case 0x1456:
    case 0x1459:
    case 0x145C:
        return execute_audio_unresolved_unk1453_instruction(cpu);
    case 0x145D:
    case 0x145F:
    case 0x1461:
    case 0x1463:
    case 0x1465:
    case 0x1467:
    case 0x146A:
        return execute_audio_unresolved_unk145d_instruction(cpu);
    case 0x146B:
    case 0x146D:
    case 0x146F:
    case 0x1471:
    case 0x1473:
    case 0x1475:
    case 0x1478:
        return execute_audio_unresolved_unk146b_instruction(cpu);
    case 0x1479:
    case 0x147B:
    case 0x147D:
    case 0x147F:
    case 0x1481:
    case 0x1483:
    case 0x1486:
        return execute_audio_unresolved_unk1479_instruction(cpu);
    case 0x148A:
        return execute_audio_fx148a_instruction(cpu);
    case 0x148B:
    case 0x148E:
    case 0x1490:
        return execute_audio_unresolved_unk148b_instruction(cpu);
    case 0x1491:
    case 0x1494:
    case 0x1495:
    case 0x1497:
    case 0x149A:
    case 0x149C:
    case 0x149E:
    case 0x14A1:
    case 0x14A3:
    case 0x14A5:
    case 0x14A8:
    case 0x14AA:
    case 0x14AD:
    case 0x14B0:
    case 0x14B3:
    case 0x14B6:
    case 0x14B9:
    case 0x14BC:
    case 0x14BD:
    case 0x14BF:
    case 0x14C2:
    case 0x14C4:
    case 0x14C7:
    case 0x14CA:
    case 0x14CC:
    case 0x14CE:
    case 0x14D1:
    case 0x14D4:
    case 0x14D7:
    case 0x14D9:
    case 0x14DC:
    case 0x14DE:
        return execute_audio_unresolved_unk1491_instruction(cpu);
    case 0x14DF:
    case 0x14E1:
    case 0x14E3:
    case 0x14E5:
    case 0x14E8:
    case 0x14EB:
        return execute_audio_unresolved_unk14df_instruction(cpu);
    case 0x14EE:
    case 0x14F0:
    case 0x14F2:
    case 0x14F4:
    case 0x14F6:
    case 0x14F8:
    case 0x14FA:
        return execute_audio_unresolved_unk14ee_instruction(cpu);
    case 0x14FC:
    case 0x14FE:
        return execute_audio_unresolved_unk14fc_instruction(cpu);
    case 0x1500:
    case 0x1502:
        return execute_audio_unresolved_unk1500_instruction(cpu);
    case 0x1505:
    case 0x1508:
    case 0x150B:
    case 0x150E:
        return execute_audio_unresolved_unk1505_instruction(cpu);
    case 0x1510:
    case 0x1512:
    case 0x1514:
    case 0x1515:
    case 0x1517:
    case 0x1519:
    case 0x151B:
    case 0x151E:
    case 0x1520:
    case 0x1522:
    case 0x1525:
    case 0x1527:
    case 0x152A:
    case 0x152C:
    case 0x152F:
    case 0x1531:
    case 0x1533:
    case 0x1535:
    case 0x1538:
    case 0x153B:
    case 0x153E:
    case 0x1541:
    case 0x1543:
    case 0x1546:
        return execute_audio_unresolved_unk1510_instruction(cpu);
    case 0x1547:
    case 0x1549:
    case 0x154B:
    case 0x154E:
    case 0x154F:
    case 0x1551:
    case 0x1553:
    case 0x1556:
        return execute_audio_unresolved_unk1547_instruction(cpu);
    case 0x1557:
    case 0x1559:
    case 0x155A:
    case 0x155B:
    case 0x155D:
    case 0x155F:
    case 0x1561:
    case 0x1564:
    case 0x1566:
    case 0x1568:
    case 0x156B:
    case 0x156D:
        return execute_audio_unresolved_unk1557_instruction(cpu);
    case 0x156F:
    case 0x1571:
    case 0x1574:
        return execute_audio_unresolved_unk156f_instruction(cpu);
    case 0x1576:
    case 0x1579:
    case 0x157C:
    case 0x157F:
    case 0x1582:
    case 0x1585:
    case 0x1588:
    case 0x158A:
    case 0x158B:
    case 0x158E:
    case 0x158F:
    case 0x1590:
    case 0x1592:
    case 0x1593:
    case 0x1596:
    case 0x1598:
    case 0x159A:
    case 0x159D:
    case 0x159F:
    case 0x15A0:
    case 0x15A2:
    case 0x15A5:
    case 0x15A8:
    case 0x15AA:
    case 0x15AC:
    case 0x15AE:
        return execute_audio_unresolved_unk1576_instruction(cpu);
    case 0x15B1:
    case 0x15B4:
    case 0x15B6:
    case 0x15B9:
    case 0x15BB:
    case 0x15BE:
    case 0x15C0:
    case 0x15C1:
    case 0x15C4:
    case 0x15C5:
    case 0x15C7:
    case 0x15C8:
    case 0x15CA:
    case 0x15CC:
    case 0x15CE:
    case 0x15D0:
    case 0x15D3:
    case 0x15D5:
        return execute_audio_unresolved_unk15b1_instruction(cpu);
    case 0x15DB:
    case 0x15DD:
    case 0x15E0:
    case 0x15E3:
        return execute_audio_fx15db_instruction(cpu);
    case 0x15E7:
    case 0x15E9:
    case 0x15EC:
    case 0x15EE:
    case 0x15F1:
        return execute_audio_fx15e7_instruction(cpu);
    case 0x15F6:
    case 0x15F8:
    case 0x15FB:
    case 0x15FD:
        return execute_audio_fx15f6_instruction(cpu);
    case 0x1600:
    case 0x1602:
    case 0x1604:
    case 0x1606:
        return execute_audio_unresolved_unk1600_instruction(cpu);
    case 0x1609:
    case 0x160C:
    case 0x160E:
    case 0x1610:
    case 0x1612:
    case 0x1614:
    case 0x1615:
    case 0x1618:
    case 0x161A:
    case 0x161C:
    case 0x161E:
    case 0x1621:
    case 0x1624:
        return execute_audio_unresolved_unk1609_instruction(cpu);
    case 0x1627:
        return execute_audio_unresolved_unk1627_instruction(cpu);
    case 0x1628:
    case 0x162A:
    case 0x162D:
        return execute_audio_unresolved_unk1628_instruction(cpu);
    case 0x162E:
    case 0x162F:
        return execute_audio_unresolved_unk162e_instruction(cpu);
    case 0x1632:
    case 0x1633:
    case 0x1635:
        return execute_audio_unresolved_unk1632_instruction(cpu);
    case 0x1638:
        return execute_audio_unresolved_unk1638_instruction(cpu);
    case 0x163B:
    case 0x163E:
    case 0x163F:
    case 0x1641:
    case 0x1643:
    case 0x1645:
    case 0x1647:
    case 0x164A:
    case 0x164D:
    case 0x164F:
    case 0x1652:
        return execute_audio_unresolved_unk163b_instruction(cpu);
    case 0x1654:
    case 0x1656:
    case 0x1659:
    case 0x165B:
    case 0x165E:
    case 0x165F:
    case 0x1661:
        return execute_audio_unresolved_unk1654_instruction(cpu);
    case 0x1663:
    case 0x1665:
    case 0x1666:
    case 0x1669:
        return execute_audio_unresolved_unk1663_instruction(cpu);
    case 0x166A:
    case 0x166D:
        return execute_audio_unresolved_unk166a_instruction(cpu);
    case 0x166E:
    case 0x1670:
    case 0x1672:
    case 0x1673:
    case 0x1675:
    case 0x1678:
    case 0x1679:
    case 0x167B:
    case 0x167D:
    case 0x167E:
        return execute_audio_unresolved_unk166e_instruction(cpu);
    case 0x1680:
    case 0x1683:
    case 0x1684:
    case 0x1687:
    case 0x1689:
    case 0x168C:
    case 0x168E:
    case 0x1691:
    case 0x1692:
    case 0x1694:
    case 0x1697:
    case 0x1698:
    case 0x169B:
    case 0x169D:
    case 0x169F:
    case 0x16A0:
    case 0x16A2:
        return execute_audio_unresolved_unk1680_instruction(cpu);
    case 0x16A5:
        return execute_audio_unresolved_unk16a5_instruction(cpu);
    case 0x16A7:
    case 0x16AA:
    case 0x16AB:
    case 0x16AD:
    case 0x16AF:
    case 0x16B0:
    case 0x16B3:
        return execute_audio_unresolved_unk16a7_instruction(cpu);
    case 0x16B6:
    case 0x16B8:
    case 0x16B9:
    case 0x16BB:
    case 0x16BD:
    case 0x16BF:
    case 0x16C2:
    case 0x16C4:
        return execute_audio_unresolved_unk16b6_instruction(cpu);
    case 0x1810:
        return execute_audio_fx1810_instruction(cpu);
    case 0x181B:
    case 0x181D:
    case 0x181F:
        return execute_audio_fx1814_instruction(cpu);
    case 0x2501:
    case 0x2503:
    case 0x2505:
    case 0x2507:
        return execute_audio_fx2501_instruction(cpu);
    case 0x2C92:
    case 0x2C94:
        return execute_audio_fx2c92_instruction(cpu);
    case 0x2C9A:
    case 0x2C9C:
        return execute_audio_fx2c9a_instruction(cpu);
    case 0x2CA2:
    case 0x2CA4:
        return execute_audio_fx2ca2_instruction(cpu);
    case 0x2CAA:
    case 0x2CAC:
        return execute_audio_fx2caa_instruction(cpu);
    case 0x2CDA:
    case 0x2CDD:
    case 0x2CE0:
        return execute_audio_fx2cda_instruction(cpu);
    case 0x2CE6:
    case 0x2CE9:
    case 0x2CEC:
        return execute_audio_fx2ce6_instruction(cpu);
    case 0x2CF2:
    case 0x2CF5:
    case 0x2CF8:
        return execute_audio_fx2cf2_instruction(cpu);
    case 0x2CFE:
    case 0x2D01:
    case 0x2D04:
        return execute_audio_fx2cfe_instruction(cpu);
    case 0x2D0A:
    case 0x2D0D:
    case 0x2D10:
        return execute_audio_fx2d0a_instruction(cpu);
    case 0x2D16:
    case 0x2D19:
    case 0x2D1C:
        return execute_audio_fx2d16_instruction(cpu);
    case 0x2D22:
    case 0x2D25:
    case 0x2D28:
        return execute_audio_fx2d22_instruction(cpu);
    case 0x2D2E:
    case 0x2D31:
    case 0x2D34:
        return execute_audio_fx2d2e_instruction(cpu);
    case 0x2D37:
    case 0x2D39:
    case 0x2D3B:
    case 0x2D3D:
    case 0x2D3F:
    case 0x2D41:
    case 0x2D42:
    case 0x2D45:
    case 0x2D46:
    case 0x2D47:
    case 0x2D49:
    case 0x2D4B:
    case 0x2D4D:
    case 0x2D4F:
    case 0x2D50:
    case 0x2D53:
    case 0x2D54:
    case 0x2D55:
    case 0x2D57:
    case 0x2D59:
    case 0x2D5B:
    case 0x2D5D:
    case 0x2D5E:
    case 0x2D61:
    case 0x2D62:
    case 0x2D63:
    case 0x2D65:
    case 0x2D67:
    case 0x2D69:
    case 0x2D6B:
    case 0x2D6C:
    case 0x2D6F:
    case 0x2D70:
    case 0x2D71:
    case 0x2D73:
    case 0x2D75:
    case 0x2D77:
    case 0x2D79:
    case 0x2D7A:
    case 0x2D7D:
    case 0x2D7E:
        return execute_audio_unresolved_unk2d37_instruction(cpu);
    case 0x2D82:
    case 0x2D84:
    case 0x2D86:
    case 0x2D89:
        return execute_audio_fx2d82_instruction(cpu);
    case 0x2D8D:
    case 0x2D8F:
    case 0x2D91:
    case 0x2D94:
        return execute_audio_fx2d8d_instruction(cpu);
    case 0x2D98:
    case 0x2D9A:
    case 0x2D9C:
    case 0x2D9F:
        return execute_audio_fx2d98_instruction(cpu);
    case 0x2DA3:
    case 0x2DA5:
    case 0x2DA7:
    case 0x2DAA:
        return execute_audio_fx2da3_instruction(cpu);
    case 0x2DAB:
    case 0x2DAE:
    case 0x2DB0:
        return execute_audio_unresolved_unk2dab_instruction(cpu);
    case 0x2DB2:
        return execute_audio_unresolved_unk2db2_instruction(cpu);
    case 0x2DB3:
    case 0x2DB4:
    case 0x2DB7:
    case 0x2DB9:
    case 0x2DBB:
    case 0x2DBD:
    case 0x2DC0:
        return execute_audio_unresolved_unk2db3_instruction(cpu);
    case 0x2DC6:
    case 0x2DC8:
    case 0x2DCB:
    case 0x2DCD:
    case 0x2DD0:
    case 0x2DD2:
        return execute_audio_fx2dc6_instruction(cpu);
    case 0x2DD5:
    case 0x2DD8:
    case 0x2DDA:
        return execute_audio_unresolved_unk2dd5_instruction(cpu);
    case 0x2DDC:
        return execute_audio_unresolved_unk2ddc_instruction(cpu);
    case 0x2DDD:
    case 0x2DDE:
    case 0x2DE1:
    case 0x2DE3:
    case 0x2DE5:
    case 0x2DE7:
        return execute_audio_unresolved_unk2ddd_instruction(cpu);
    case 0x2DED:
    case 0x2DEF:
    case 0x2DF2:
        return execute_audio_fx2ded_instruction(cpu);
    case 0x2DF3:
    case 0x2DF6:
    case 0x2DF8:
        return execute_audio_unresolved_unk2df3_instruction(cpu);
    case 0x2DFA:
        return execute_audio_unresolved_unk2df7_instruction(cpu);
    case 0x2DFB:
    case 0x2DFC:
    case 0x2DFF:
    case 0x2E01:
    case 0x2E03:
    case 0x2E05:
        return execute_audio_unresolved_unk2df8_instruction(cpu);
    case 0x2E0B:
    case 0x2E0D:
    case 0x2E10:
        return execute_audio_fx2e0b_instruction(cpu);
    case 0x2E11:
    case 0x2E13:
    case 0x2E15:
    case 0x2E17:
    case 0x2E19:
    case 0x2E1C:
        return execute_audio_unresolved_unk180d_instruction(cpu);
    case 0x2E1D:
    case 0x2E1F:
    case 0x2E21:
    case 0x2E23:
        return execute_audio_unresolved_unk2e1d_instruction(cpu);
    case 0x2E25:
    case 0x2E27:
    case 0x2E29:
    case 0x2E2B:
    case 0x2E2E:
    case 0x2E30:
    case 0x2E32:
    case 0x2E34:
        return execute_audio_unresolved_unk2e25_instruction(cpu);
    case 0x2E37:
        return execute_audio_unresolved_unk2e37_instruction(cpu);
    case 0x2E38:
    case 0x2E3B:
    case 0x2E3D:
    case 0x2E3F:
    case 0x2E41:
    case 0x2E43:
    case 0x2E45:
    case 0x2E48:
        return execute_audio_unresolved_unk2e38_instruction(cpu);
    case 0x2FC8:
    case 0x2FCA:
    case 0x2FCD:
    case 0x2FCF:
    case 0x2FD2:
    case 0x2FD4:
    case 0x2FD7:
    case 0x2FD9:
    case 0x2FDC:
        return execute_audio_unresolved_unk2fc8_instruction(cpu);
    default: return false;
    }
}
} // namespace eb
