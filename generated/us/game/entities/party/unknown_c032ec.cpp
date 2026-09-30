// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C0/C032EC.asm
bool resume_unresolved_c0_c032ec(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C032EC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC032EC: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C032EC.asm:11 END_STACK_VARS
    case 0xC032EE: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C032EC.asm:11 END_STACK_VARS
    case 0xC032EF: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C032EC.asm:11 END_STACK_VARS
    case 0xC032F0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E7u : 0x00FFE7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C032EC.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC032F0.
    case 0xC032F2: {
        Instruction step(cpu, 0xFF, 0x00A05Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C032EC.asm:11 END_STACK_VARS
    case 0xC032F3: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:12 LDY #0
    case 0xC032F4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:12 LDY #0
    // Overlapping static entry reached from 0xC032F4.
    case 0xC032F6: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:13 BRA @UNKNOWN1
    case 0xC032F7: {
        Instruction step(cpu, 0x80, 0x000001u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:15 INY
    case 0xC032F9: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:17 LDA GAME_STATE + game_state::party_members,Y
    case 0xC032FA: {
        Instruction step(cpu, 0xB9, 0x00986Fu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:18 AND #$00FF
    case 0xC032FD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC032FD.
    case 0xC032FF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:19 BEQ @UNKNOWN3
    case 0xC03300: {
        Instruction step(cpu, 0xF0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:20 AND #$00FF
    case 0xC03302: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC03302.
    case 0xC03304: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:21 STA @VIRTUAL02
    case 0xC03305: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:22 LDA #5
    case 0xC03307: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:22 LDA #5
    // Overlapping static entry reached from 0xC03307.
    case 0xC03309: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:23 CLC
    case 0xC0330A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:24 SBC @VIRTUAL02
    case 0xC0330B: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C0/C032EC.asm:25 BRANCHGTS @UNKNOWN0
    case 0xC0330D: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C0/C032EC.asm:25 BRANCHGTS @UNKNOWN0
    case 0xC0330F: {
        Instruction step(cpu, 0x10, 0x0000E8u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C0/C032EC.asm:25 BRANCHGTS @UNKNOWN0
    case 0xC03311: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C0/C032EC.asm:25 BRANCHGTS @UNKNOWN0
    case 0xC03313: {
        Instruction step(cpu, 0x30, 0x0000E4u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:27 TYA
    case 0xC03315: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC03316: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:29 STA GAME_STATE+game_state::player_controlled_party_count
    case 0xC03318: {
        Instruction step(cpu, 0x8D, 0x0098A4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC0331B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:31 LDA #.LOWORD(GAME_STATE)+game_state::party_npc_1
    case 0xC0331D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Au : 0x00983Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:31 LDA #.LOWORD(GAME_STATE)+game_state::party_npc_1
    // Overlapping static entry reached from 0xC0331D.
    case 0xC0331F: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:32 STA @VIRTUAL04
    case 0xC03320: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:33 LDX @VIRTUAL04
    case 0xC03322: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:34 SEP #PROC_FLAGS::ACCUM8
    case 0xC03324: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:35 LDA __BSS_START__,X
    case 0xC03326: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:36 STA @VIRTUAL00
    case 0xC03329: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:37 STA @LOCAL05
    case 0xC0332B: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:38 REP #PROC_FLAGS::ACCUM8
    case 0xC0332D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:39 TYA
    case 0xC0332F: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:40 CLC
    case 0xC03330: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:41 ADC #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC03331: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00006Fu : 0x00986Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:41 ADC #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC03331.
    case 0xC03333: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:42 STA @LOCAL04
    case 0xC03334: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC03336: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:44 LDA (@LOCAL04)
    case 0xC03338: {
        Instruction step(cpu, 0xB2, 0x000016u, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:45 STA @LOCAL03
    case 0xC0333A: {
        Instruction step(cpu, 0x85, 0x000015u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:46 STA @VIRTUAL01
    case 0xC0333C: {
        Instruction step(cpu, 0x85, 0x000001u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:47 LDA @VIRTUAL00
    case 0xC0333E: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:48 CMP @VIRTUAL01
    case 0xC03340: {
        Instruction step(cpu, 0xC5, 0x000001u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C032EC.asm:49 BEQL @UNKNOWN7
    case 0xC03342: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C032EC.asm:49 BEQL @UNKNOWN7
    case 0xC03344: {
        Instruction step(cpu, 0x4C, 0x003499u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:50 REP #PROC_FLAGS::ACCUM8
    case 0xC03347: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:51 LDA #.LOWORD(GAME_STATE)+game_state::party_npc_2
    case 0xC03349: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Bu : 0x00983Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:51 LDA #.LOWORD(GAME_STATE)+game_state::party_npc_2
    // Overlapping static entry reached from 0xC03349.
    case 0xC0334B: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:52 STA @VIRTUAL02
    case 0xC0334C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:53 LDX @VIRTUAL02
    case 0xC0334E: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:54 SEP #PROC_FLAGS::ACCUM8
    case 0xC03350: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:55 LDA __BSS_START__,X
    case 0xC03352: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:56 STA @VIRTUAL01
    case 0xC03355: {
        Instruction step(cpu, 0x85, 0x000001u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:57 LDA @LOCAL03
    case 0xC03357: {
        Instruction step(cpu, 0xA5, 0x000015u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:58 STA @VIRTUAL00
    case 0xC03359: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:59 LDA @VIRTUAL01
    case 0xC0335B: {
        Instruction step(cpu, 0xA5, 0x000001u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:60 CMP @VIRTUAL00
    case 0xC0335D: {
        Instruction step(cpu, 0xC5, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:61 BNE @UNKNOWN5
    case 0xC0335F: {
        Instruction step(cpu, 0xD0, 0x000045u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:62 LDA @VIRTUAL01
    case 0xC03361: {
        Instruction step(cpu, 0xA5, 0x000001u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:63 LDX @VIRTUAL04
    case 0xC03363: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:64 STA __BSS_START__,X
    case 0xC03365: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:65 LDX #.LOWORD(GAME_STATE)+game_state::party_npc_2_hp
    case 0xC03368: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00003Eu : 0x00983Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:65 LDX #.LOWORD(GAME_STATE)+game_state::party_npc_2_hp
    // Overlapping static entry reached from 0xC03368.
    case 0xC0336A: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:66 STX @LOCAL02
    case 0xC0336B: {
        Instruction step(cpu, 0x86, 0x000013u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:67 REP #PROC_FLAGS::ACCUM8
    case 0xC0336D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:68 LDA __BSS_START__,X
    case 0xC0336F: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:69 STA GAME_STATE+game_state::party_npc_1_hp
    case 0xC03372: {
        Instruction step(cpu, 0x8D, 0x00983Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:70 SEP #PROC_FLAGS::ACCUM8
    case 0xC03375: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:71 LDA GAME_STATE + game_state::party_members + 1,Y
    case 0xC03377: {
        Instruction step(cpu, 0xB9, 0x009870u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:72 LDX @VIRTUAL02
    case 0xC0337A: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:73 STA __BSS_START__,X
    case 0xC0337C: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:74 REP #PROC_FLAGS::ACCUM8
    case 0xC0337F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:75 AND #$00FF
    case 0xC03381: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC03381.
    case 0xC03383: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:76 ASL
    case 0xC03384: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:77 TAX
    case 0xC03385: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:78 INX
    case 0xC03386: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:79 LDA f:NPC_AI_TABLE,X
    case 0xC03387: {
        Instruction step(cpu, 0xBF, 0xD58F23u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:80 AND #$00FF
    case 0xC0338B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:80 AND #$00FF
    // Overlapping static entry reached from 0xC0338B.
    case 0xC0338D: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:81 LDY #.SIZEOF(enemy_data)
    case 0xC0338E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:81 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC0338E.
    case 0xC03390: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:82 JSL MULT168
    case 0xC03391: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:83 CLC
    case 0xC03395: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:84 ADC #enemy_data::hp
    case 0xC03396: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:84 ADC #enemy_data::hp
    // Overlapping static entry reached from 0xC03396.
    case 0xC03398: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:85 TAX
    case 0xC03399: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:86 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC0339A: {
        Instruction step(cpu, 0xBF, 0xD59589u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:87 LDX @LOCAL02
    case 0xC0339E: {
        Instruction step(cpu, 0xA6, 0x000013u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:88 STA __BSS_START__,X
    case 0xC033A0: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:89 JMP @UNKNOWN8
    case 0xC033A3: {
        Instruction step(cpu, 0x4C, 0x0034D2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:91 LDA @LOCAL05
    case 0xC033A6: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:92 STA @VIRTUAL00
    case 0xC033A8: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:93 CMP GAME_STATE + game_state::party_members + 1,Y
    case 0xC033AA: {
        Instruction step(cpu, 0xD9, 0x009870u, 3u, AddressMode::AbsoluteIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:94 BNE @UNKNOWN6
    case 0xC033AD: {
        Instruction step(cpu, 0xD0, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:95 LDA @VIRTUAL00
    case 0xC033AF: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:96 LDX @VIRTUAL02
    case 0xC033B1: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:97 STA __BSS_START__,X
    case 0xC033B3: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:98 LDX #.LOWORD(GAME_STATE)+game_state::party_npc_1_hp
    case 0xC033B6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00003Cu : 0x00983Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:98 LDX #.LOWORD(GAME_STATE)+game_state::party_npc_1_hp
    // Overlapping static entry reached from 0xC033B6.
    case 0xC033B8: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:99 STX @LOCAL02
    case 0xC033B9: {
        Instruction step(cpu, 0x86, 0x000013u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:100 REP #PROC_FLAGS::ACCUM8
    case 0xC033BB: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:101 LDA __BSS_START__,X
    case 0xC033BD: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:102 STA GAME_STATE+game_state::party_npc_2_hp
    case 0xC033C0: {
        Instruction step(cpu, 0x8D, 0x00983Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:103 SEP #PROC_FLAGS::ACCUM8
    case 0xC033C3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:104 LDA (@LOCAL04)
    case 0xC033C5: {
        Instruction step(cpu, 0xB2, 0x000016u, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:105 LDX @VIRTUAL04
    case 0xC033C7: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:106 STA __BSS_START__,X
    case 0xC033C9: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:107 REP #PROC_FLAGS::ACCUM8
    case 0xC033CC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:108 AND #$00FF
    case 0xC033CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:108 AND #$00FF
    // Overlapping static entry reached from 0xC033CE.
    case 0xC033D0: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:109 ASL
    case 0xC033D1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:110 TAX
    case 0xC033D2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:111 INX
    case 0xC033D3: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:112 LDA f:NPC_AI_TABLE,X
    case 0xC033D4: {
        Instruction step(cpu, 0xBF, 0xD58F23u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:113 AND #$00FF
    case 0xC033D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:113 AND #$00FF
    // Overlapping static entry reached from 0xC033D8.
    case 0xC033DA: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:114 LDY #.SIZEOF(enemy_data)
    case 0xC033DB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:114 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC033DB.
    case 0xC033DD: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:115 JSL MULT168
    case 0xC033DE: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:116 CLC
    case 0xC033E2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:117 ADC #enemy_data::hp
    case 0xC033E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:117 ADC #enemy_data::hp
    // Overlapping static entry reached from 0xC033E3.
    case 0xC033E5: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:118 TAX
    case 0xC033E6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:119 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC033E7: {
        Instruction step(cpu, 0xBF, 0xD59589u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:120 LDX @LOCAL02
    case 0xC033EB: {
        Instruction step(cpu, 0xA6, 0x000013u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:121 STA __BSS_START__,X
    case 0xC033ED: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:122 JMP @UNKNOWN8
    case 0xC033F0: {
        Instruction step(cpu, 0x4C, 0x0034D2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:124 LDA @LOCAL03
    case 0xC033F3: {
        Instruction step(cpu, 0xA5, 0x000015u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:125 LDX @VIRTUAL04
    case 0xC033F5: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:126 STA __BSS_START__,X
    case 0xC033F7: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:127 TYX
    case 0xC033FA: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:128 INX
    case 0xC033FB: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:129 REP #PROC_FLAGS::ACCUM8
    case 0xC033FC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C032EC.asm:130 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC033FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000089u : 0x009589u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C032EC.asm:130 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC033FE.
    case 0xC03400: {
        Instruction step(cpu, 0x95, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C032EC.asm:130 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC03401: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C032EC.asm:130 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC03400.
    case 0xC03402: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C032EC.asm:130 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC03403: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C032EC.asm:130 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC03403.
    case 0xC03405: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C032EC.asm:130 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC03406: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C032EC.asm:131 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC03408: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000023u : 0x008F23u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C032EC.asm:131 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC03408.
    case 0xC0340A: {
        Instruction step(cpu, 0x8F, 0xA90685u, 4u, AddressMode::Long);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C032EC.asm:131 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC0340B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C032EC.asm:131 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC0340D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C032EC.asm:131 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0340A.
    case 0xC0340E: {
        Instruction step(cpu, 0xD5, 0x000000u, 2u, AddressMode::DirectPageIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C032EC.asm:131 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0340D.
    case 0xC0340F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C032EC.asm:131 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC03410: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C032EC.asm:132 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC03412: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C032EC.asm:132 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC03414: {
        Instruction step(cpu, 0x85, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C032EC.asm:132 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC03416: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C032EC.asm:132 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC03418: {
        Instruction step(cpu, 0x85, 0x000011u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:133 LDA @LOCAL03
    case 0xC0341A: {
        Instruction step(cpu, 0xA5, 0x000015u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:134 AND #$00FF
    case 0xC0341C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:134 AND #$00FF
    // Overlapping static entry reached from 0xC0341C.
    case 0xC0341E: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:135 ASL
    case 0xC0341F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:136 INC
    case 0xC03420: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:137 CLC
    case 0xC03421: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:138 ADC @VIRTUAL06
    case 0xC03422: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:139 STA @VIRTUAL06
    case 0xC03424: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:140 LDA [@VIRTUAL06]
    case 0xC03426: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:141 AND #$00FF
    case 0xC03428: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:141 AND #$00FF
    // Overlapping static entry reached from 0xC03428.
    case 0xC0342A: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:142 LDY #.SIZEOF(enemy_data)
    case 0xC0342B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:142 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC0342B.
    case 0xC0342D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:143 JSL MULT168
    case 0xC0342E: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:144 CLC
    case 0xC03432: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:145 ADC #enemy_data::hp
    case 0xC03433: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:145 ADC #enemy_data::hp
    // Overlapping static entry reached from 0xC03433.
    case 0xC03435: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C0/C032EC.asm:146 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC03436: {
        Instruction step(cpu, 0xA4, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C0/C032EC.asm:146 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC03438: {
        Instruction step(cpu, 0x84, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C0/C032EC.asm:146 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0343A: {
        Instruction step(cpu, 0xA4, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C0/C032EC.asm:146 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC0343C: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:147 CLC
    case 0xC0343E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:148 ADC @VIRTUAL06
    case 0xC0343F: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:149 STA @VIRTUAL06
    case 0xC03441: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:150 LDA [@VIRTUAL06]
    case 0xC03443: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:151 STA GAME_STATE+game_state::party_npc_1_hp
    case 0xC03445: {
        Instruction step(cpu, 0x8D, 0x00983Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:152 SEP #PROC_FLAGS::ACCUM8
    case 0xC03448: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:153 LDA GAME_STATE + game_state::party_members,X
    case 0xC0344A: {
        Instruction step(cpu, 0xBD, 0x00986Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:154 STA @LOCAL00
    case 0xC0344D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:155 STA @VIRTUAL00
    case 0xC0344F: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:156 LDX @VIRTUAL02
    case 0xC03451: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:157 LDA __BSS_START__,X
    case 0xC03453: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:158 CMP @VIRTUAL00
    case 0xC03456: {
        Instruction step(cpu, 0xC5, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:159 BEQ @UNKNOWN8
    case 0xC03458: {
        Instruction step(cpu, 0xF0, 0x000078u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:160 LDA @LOCAL00
    case 0xC0345A: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:161 LDX @VIRTUAL02
    case 0xC0345C: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:162 STA __BSS_START__,X
    case 0xC0345E: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:163 REP #PROC_FLAGS::ACCUM8
    case 0xC03461: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:164 AND #$00FF
    case 0xC03463: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:164 AND #$00FF
    // Overlapping static entry reached from 0xC03463.
    case 0xC03465: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:165 ASL
    case 0xC03466: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:166 INC
    case 0xC03467: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C0/C032EC.asm:167 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xC03468: {
        Instruction step(cpu, 0xA6, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C0/C032EC.asm:167 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xC0346A: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C0/C032EC.asm:167 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xC0346C: {
        Instruction step(cpu, 0xA6, 0x000011u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C0/C032EC.asm:167 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xC0346E: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:168 CLC
    case 0xC03470: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:169 ADC @VIRTUAL06
    case 0xC03471: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:170 STA @VIRTUAL06
    case 0xC03473: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:171 LDA [@VIRTUAL06]
    case 0xC03475: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:172 AND #$00FF
    case 0xC03477: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:172 AND #$00FF
    // Overlapping static entry reached from 0xC03477.
    case 0xC03479: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:173 LDY #.SIZEOF(enemy_data)
    case 0xC0347A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:173 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC0347A.
    case 0xC0347C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:174 JSL MULT168
    case 0xC0347D: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:175 CLC
    case 0xC03481: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:176 ADC #enemy_data::hp
    case 0xC03482: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:176 ADC #enemy_data::hp
    // Overlapping static entry reached from 0xC03482.
    case 0xC03484: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C0/C032EC.asm:177 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC03485: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C0/C032EC.asm:177 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC03487: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C0/C032EC.asm:177 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC03489: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C0/C032EC.asm:177 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC0348B: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:178 CLC
    case 0xC0348D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:179 ADC @VIRTUAL06
    case 0xC0348E: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:180 STA @VIRTUAL06
    case 0xC03490: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:181 LDA [@VIRTUAL06]
    case 0xC03492: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:182 STA GAME_STATE+game_state::party_npc_2_hp
    case 0xC03494: {
        Instruction step(cpu, 0x8D, 0x00983Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:183 BRA @UNKNOWN8
    case 0xC03497: {
        Instruction step(cpu, 0x80, 0x000039u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:185 INY
    case 0xC03499: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:186 LDX #.LOWORD(GAME_STATE)+game_state::party_npc_2
    case 0xC0349A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00003Bu : 0x00983Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:186 LDX #.LOWORD(GAME_STATE)+game_state::party_npc_2
    // Overlapping static entry reached from 0xC0349A.
    case 0xC0349C: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:187 LDA GAME_STATE + game_state::party_members,Y
    case 0xC0349D: {
        Instruction step(cpu, 0xB9, 0x00986Fu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:188 STA @LOCAL00
    case 0xC034A0: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:189 STA @VIRTUAL00
    case 0xC034A2: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:190 LDA __BSS_START__,X
    case 0xC034A4: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:191 CMP @VIRTUAL00
    case 0xC034A7: {
        Instruction step(cpu, 0xC5, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:192 BEQ @UNKNOWN8
    case 0xC034A9: {
        Instruction step(cpu, 0xF0, 0x000027u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:193 LDA @LOCAL00
    case 0xC034AB: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:194 STA __BSS_START__,X
    case 0xC034AD: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:195 REP #PROC_FLAGS::ACCUM8
    case 0xC034B0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:196 AND #$00FF
    case 0xC034B2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:196 AND #$00FF
    // Overlapping static entry reached from 0xC034B2.
    case 0xC034B4: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:197 ASL
    case 0xC034B5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:198 TAX
    case 0xC034B6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:199 INX
    case 0xC034B7: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:200 LDA f:NPC_AI_TABLE,X
    case 0xC034B8: {
        Instruction step(cpu, 0xBF, 0xD58F23u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:201 AND #$00FF
    case 0xC034BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:201 AND #$00FF
    // Overlapping static entry reached from 0xC034BC.
    case 0xC034BE: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:202 LDY #.SIZEOF(enemy_data)
    case 0xC034BF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:202 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC034BF.
    case 0xC034C1: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:203 JSL MULT168
    case 0xC034C2: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:204 CLC
    case 0xC034C6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:205 ADC #enemy_data::hp
    case 0xC034C7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:205 ADC #enemy_data::hp
    // Overlapping static entry reached from 0xC034C7.
    case 0xC034C9: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:206 TAX
    case 0xC034CA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:207 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC034CB: {
        Instruction step(cpu, 0xBF, 0xD59589u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:208 STA GAME_STATE+game_state::party_npc_2_hp
    case 0xC034CF: {
        Instruction step(cpu, 0x8D, 0x00983Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC.asm:210 REP #PROC_FLAGS::ACCUM8
    case 0xC034D2: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C032EC.asm:211 END_C_FUNCTION
    case 0xC034D4: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C032EC.asm:211 END_C_FUNCTION
    case 0xC034D5: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
