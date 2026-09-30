// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/unknown/C0/C032EC-jp.asm
bool resume_unresolved_c0_c032ec_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C032EC-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC034C7: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C032EC-jp.asm:10 END_STACK_VARS
    case 0xC034C9: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C032EC-jp.asm:10 END_STACK_VARS
    case 0xC034CA: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C032EC-jp.asm:10 END_STACK_VARS
    case 0xC034CB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C032EC-jp.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC034CB.
    case 0xC034CD: {
        Instruction step(cpu, 0xFF, 0x00A05Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C032EC-jp.asm:10 END_STACK_VARS
    case 0xC034CE: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:11 LDY #0
    case 0xC034CF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:11 LDY #0
    // Overlapping static entry reached from 0xC034CF.
    case 0xC034D1: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:12 BRA @UNKNOWN1
    case 0xC034D2: {
        Instruction step(cpu, 0x80, 0x000001u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:14 INY
    case 0xC034D4: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:16 TYA
    case 0xC034D5: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:17 CLC
    case 0xC034D6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:18 ADC #.LOWORD(GAME_STATE)
    case 0xC034D7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:18 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC034D7.
    case 0xC034D9: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:19 TAX
    case 0xC034DA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:20 LDA a:game_state::party_members,X
    case 0xC034DB: {
        Instruction step(cpu, 0xBD, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:21 AND #$00FF
    case 0xC034DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC034DE.
    case 0xC034E0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:22 BEQ @UNKNOWN3
    case 0xC034E1: {
        Instruction step(cpu, 0xF0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:23 AND #$00FF
    case 0xC034E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC034E3.
    case 0xC034E5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:24 STA @VIRTUAL02
    case 0xC034E6: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:25 LDA #5
    case 0xC034E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:25 LDA #5
    // Overlapping static entry reached from 0xC034E8.
    case 0xC034EA: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:26 CLC
    case 0xC034EB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:27 SBC @VIRTUAL02
    case 0xC034EC: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C0/C032EC-jp.asm:28 BRANCHGTS @UNKNOWN0
    case 0xC034EE: {
        Instruction step(cpu, 0x70, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C0/C032EC-jp.asm:28 BRANCHGTS @UNKNOWN0
    case 0xC034F0: {
        Instruction step(cpu, 0x10, 0x0000E2u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C0/C032EC-jp.asm:28 BRANCHGTS @UNKNOWN0
    case 0xC034F2: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C0/C032EC-jp.asm:28 BRANCHGTS @UNKNOWN0
    case 0xC034F4: {
        Instruction step(cpu, 0x30, 0x0000DEu, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:30 TYA
    case 0xC034F6: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC034F7: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:32 STA GAME_STATE+game_state::player_controlled_party_count
    case 0xC034F9: {
        Instruction step(cpu, 0x8D, 0x009B55u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:33 REP #PROC_FLAGS::ACCUM8
    case 0xC034FC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:34 LDA #.LOWORD(GAME_STATE)+game_state::party_npc_1
    case 0xC034FE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EBu : 0x009AEBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:34 LDA #.LOWORD(GAME_STATE)+game_state::party_npc_1
    // Overlapping static entry reached from 0xC034FE.
    case 0xC03500: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:35 STA @VIRTUAL04
    case 0xC03501: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:36 LDX @VIRTUAL04
    case 0xC03503: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xC03505: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:38 LDA __BSS_START__,X
    case 0xC03507: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:39 STA @LOCAL04
    case 0xC0350A: {
        Instruction step(cpu, 0x85, 0x000017u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC0350C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:41 TYA
    case 0xC0350E: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:42 CLC
    case 0xC0350F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:43 ADC #.LOWORD(GAME_STATE)
    case 0xC03510: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:43 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03510.
    case 0xC03512: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:44 CLC
    case 0xC03513: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:45 ADC #game_state::party_members
    case 0xC03514: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000077u : 0x000077u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:45 ADC #game_state::party_members
    // Overlapping static entry reached from 0xC03514.
    case 0xC03516: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:46 STA @LOCAL03
    case 0xC03517: {
        Instruction step(cpu, 0x85, 0x000015u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:47 SEP #PROC_FLAGS::ACCUM8
    case 0xC03519: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:48 LDA (@LOCAL03)
    case 0xC0351B: {
        Instruction step(cpu, 0xB2, 0x000015u, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:49 STA @VIRTUAL00
    case 0xC0351D: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:50 LDA @LOCAL04
    case 0xC0351F: {
        Instruction step(cpu, 0xA5, 0x000017u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:51 CMP @VIRTUAL00
    case 0xC03521: {
        Instruction step(cpu, 0xC5, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C032EC-jp.asm:52 BEQL @UNKNOWN8
    case 0xC03523: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C032EC-jp.asm:52 BEQL @UNKNOWN8
    case 0xC03525: {
        Instruction step(cpu, 0x4C, 0x00367Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC03528: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:54 LDA #.LOWORD(GAME_STATE)+game_state::party_npc_2
    case 0xC0352A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000ECu : 0x009AECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:54 LDA #.LOWORD(GAME_STATE)+game_state::party_npc_2
    // Overlapping static entry reached from 0xC0352A.
    case 0xC0352C: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:55 STA @VIRTUAL02
    case 0xC0352D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:56 LDX @VIRTUAL02
    case 0xC0352F: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:57 SEP #PROC_FLAGS::ACCUM8
    case 0xC03531: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:58 LDA __BSS_START__,X
    case 0xC03533: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:59 STA @VIRTUAL01
    case 0xC03536: {
        Instruction step(cpu, 0x85, 0x000001u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:60 CMP @VIRTUAL00
    case 0xC03538: {
        Instruction step(cpu, 0xC5, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:61 BNE @UNKNOWN5
    case 0xC0353A: {
        Instruction step(cpu, 0xD0, 0x000045u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:62 LDA @VIRTUAL01
    case 0xC0353C: {
        Instruction step(cpu, 0xA5, 0x000001u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:63 LDX @VIRTUAL04
    case 0xC0353E: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:64 STA __BSS_START__,X
    case 0xC03540: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:65 LDX #.LOWORD(GAME_STATE)+game_state::party_npc_2_hp
    case 0xC03543: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000EFu : 0x009AEFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:65 LDX #.LOWORD(GAME_STATE)+game_state::party_npc_2_hp
    // Overlapping static entry reached from 0xC03543.
    case 0xC03545: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:66 STX @LOCAL02
    case 0xC03546: {
        Instruction step(cpu, 0x86, 0x000013u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:67 REP #PROC_FLAGS::ACCUM8
    case 0xC03548: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:68 LDA __BSS_START__,X
    case 0xC0354A: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:69 STA GAME_STATE+game_state::party_npc_1_hp
    case 0xC0354D: {
        Instruction step(cpu, 0x8D, 0x009AEDu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:70 SEP #PROC_FLAGS::ACCUM8
    case 0xC03550: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:71 LDA GAME_STATE + game_state::party_members + 1,Y
    case 0xC03552: {
        Instruction step(cpu, 0xB9, 0x009B21u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:72 LDX @VIRTUAL02
    case 0xC03555: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:73 STA __BSS_START__,X
    case 0xC03557: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:74 REP #PROC_FLAGS::ACCUM8
    case 0xC0355A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:75 AND #$00FF
    case 0xC0355C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC0355C.
    case 0xC0355E: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:76 ASL
    case 0xC0355F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:77 TAX
    case 0xC03560: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:78 INX
    case 0xC03561: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:79 LDA f:NPC_AI_TABLE,X
    case 0xC03562: {
        Instruction step(cpu, 0xBF, 0xD59DDAu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:80 AND #$00FF
    case 0xC03566: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:80 AND #$00FF
    // Overlapping static entry reached from 0xC03566.
    case 0xC03568: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:81 LDY #.SIZEOF(enemy_data)
    case 0xC03569: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:81 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC03569.
    case 0xC0356B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:82 JSL MULT168
    case 0xC0356C: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:83 CLC
    case 0xC03570: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:84 ADC #enemy_data::hp
    case 0xC03571: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:84 ADC #enemy_data::hp
    // Overlapping static entry reached from 0xC03571.
    case 0xC03573: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:85 TAX
    case 0xC03574: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:86 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC03575: {
        Instruction step(cpu, 0xBF, 0xD5A440u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:87 LDX @LOCAL02
    case 0xC03579: {
        Instruction step(cpu, 0xA6, 0x000013u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:88 STA __BSS_START__,X
    case 0xC0357B: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:89 JMP @UNKNOWN9
    case 0xC0357E: {
        Instruction step(cpu, 0x4C, 0x0036C3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:91 LDA @LOCAL04
    case 0xC03581: {
        Instruction step(cpu, 0xA5, 0x000017u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:92 CMP GAME_STATE + game_state::party_members + 1,Y
    case 0xC03583: {
        Instruction step(cpu, 0xD9, 0x009B21u, 3u, AddressMode::AbsoluteIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:93 BNE @UNKNOWN6
    case 0xC03586: {
        Instruction step(cpu, 0xD0, 0x000042u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:94 LDX @VIRTUAL02
    case 0xC03588: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:95 STA __BSS_START__,X
    case 0xC0358A: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:96 LDX #.LOWORD(GAME_STATE)+game_state::party_npc_1_hp
    case 0xC0358D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000EDu : 0x009AEDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:96 LDX #.LOWORD(GAME_STATE)+game_state::party_npc_1_hp
    // Overlapping static entry reached from 0xC0358D.
    case 0xC0358F: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:97 STX @LOCAL02
    case 0xC03590: {
        Instruction step(cpu, 0x86, 0x000013u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:98 REP #PROC_FLAGS::ACCUM8
    case 0xC03592: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:99 LDA __BSS_START__,X
    case 0xC03594: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:100 STA GAME_STATE+game_state::party_npc_2_hp
    case 0xC03597: {
        Instruction step(cpu, 0x8D, 0x009AEFu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:101 SEP #PROC_FLAGS::ACCUM8
    case 0xC0359A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:102 LDA (@LOCAL03)
    case 0xC0359C: {
        Instruction step(cpu, 0xB2, 0x000015u, 2u, AddressMode::DirectPageIndirect);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:103 LDX @VIRTUAL04
    case 0xC0359E: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:104 STA __BSS_START__,X
    case 0xC035A0: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:105 REP #PROC_FLAGS::ACCUM8
    case 0xC035A3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:106 AND #$00FF
    case 0xC035A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:106 AND #$00FF
    // Overlapping static entry reached from 0xC035A5.
    case 0xC035A7: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:107 ASL
    case 0xC035A8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:108 TAX
    case 0xC035A9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:109 INX
    case 0xC035AA: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:110 LDA f:NPC_AI_TABLE,X
    case 0xC035AB: {
        Instruction step(cpu, 0xBF, 0xD59DDAu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:111 AND #$00FF
    case 0xC035AF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:111 AND #$00FF
    // Overlapping static entry reached from 0xC035AF.
    case 0xC035B1: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:112 LDY #.SIZEOF(enemy_data)
    case 0xC035B2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:112 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC035B2.
    case 0xC035B4: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:113 JSL MULT168
    case 0xC035B5: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:114 CLC
    case 0xC035B9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:115 ADC #enemy_data::hp
    case 0xC035BA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:115 ADC #enemy_data::hp
    // Overlapping static entry reached from 0xC035BA.
    case 0xC035BC: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:116 TAX
    case 0xC035BD: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:117 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC035BE: {
        Instruction step(cpu, 0xBF, 0xD5A440u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:118 LDX @LOCAL02
    case 0xC035C2: {
        Instruction step(cpu, 0xA6, 0x000013u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:119 STA __BSS_START__,X
    case 0xC035C4: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:120 JMP @UNKNOWN9
    case 0xC035C7: {
        Instruction step(cpu, 0x4C, 0x0036C3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:122 LDA @VIRTUAL00
    case 0xC035CA: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:123 LDX @VIRTUAL04
    case 0xC035CC: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:124 STA __BSS_START__,X
    case 0xC035CE: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:125 REP #PROC_FLAGS::ACCUM8
    case 0xC035D1: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:126 TYA
    case 0xC035D3: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:127 INC
    case 0xC035D4: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:128 STA @LOCAL02
    case 0xC035D5: {
        Instruction step(cpu, 0x85, 0x000013u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C032EC-jp.asm:129 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC035D7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x00A440u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C032EC-jp.asm:129 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC035D7.
    case 0xC035D9: {
        Instruction step(cpu, 0xA4, 0x000085u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C032EC-jp.asm:129 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC035DA: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C032EC-jp.asm:129 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC035D9.
    case 0xC035DB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C032EC-jp.asm:129 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC035DC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C032EC-jp.asm:129 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC035DC.
    case 0xC035DE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C032EC-jp.asm:129 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC035DF: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C032EC-jp.asm:130 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC035E1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DAu : 0x009DDAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C0/C032EC-jp.asm:130 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC035E1.
    case 0xC035E3: {
        Instruction step(cpu, 0x9D, 0x000685u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C0/C032EC-jp.asm:130 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC035E4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C032EC-jp.asm:130 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC035E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C0/C032EC-jp.asm:130 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC035E6.
    case 0xC035E8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C0/C032EC-jp.asm:130 LOADPTR NPC_AI_TABLE, @VIRTUAL06
    case 0xC035E9: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C0/C032EC-jp.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC035EB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C0/C032EC-jp.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC035ED: {
        Instruction step(cpu, 0x85, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C0/C032EC-jp.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC035EF: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C0/C032EC-jp.asm:131 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC035F1: {
        Instruction step(cpu, 0x85, 0x000011u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:132 LDA @VIRTUAL00
    case 0xC035F3: {
        Instruction step(cpu, 0xA5, 0x000000u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:133 AND #$00FF
    case 0xC035F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:133 AND #$00FF
    // Overlapping static entry reached from 0xC035F5.
    case 0xC035F7: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:134 ASL
    case 0xC035F8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:135 INC
    case 0xC035F9: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:136 CLC
    case 0xC035FA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:137 ADC @VIRTUAL06
    case 0xC035FB: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:138 STA @VIRTUAL06
    case 0xC035FD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:139 LDA [@VIRTUAL06]
    case 0xC035FF: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:140 AND #$00FF
    case 0xC03601: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:140 AND #$00FF
    // Overlapping static entry reached from 0xC03601.
    case 0xC03603: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:141 LDY #.SIZEOF(enemy_data)
    case 0xC03604: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:141 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC03604.
    case 0xC03606: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:142 JSL MULT168
    case 0xC03607: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:143 CLC
    case 0xC0360B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:144 ADC #enemy_data::hp
    case 0xC0360C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:144 ADC #enemy_data::hp
    // Overlapping static entry reached from 0xC0360C.
    case 0xC0360E: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C0/C032EC-jp.asm:145 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC0360F: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C0/C032EC-jp.asm:145 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC03611: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C0/C032EC-jp.asm:145 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC03613: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C0/C032EC-jp.asm:145 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC03615: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:146 CLC
    case 0xC03617: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:147 ADC @VIRTUAL06
    case 0xC03618: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:148 STA @VIRTUAL06
    case 0xC0361A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:149 LDA [@VIRTUAL06]
    case 0xC0361C: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:150 STA GAME_STATE+game_state::party_npc_1_hp
    case 0xC0361E: {
        Instruction step(cpu, 0x8D, 0x009AEDu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:151 LDA @LOCAL02
    case 0xC03621: {
        Instruction step(cpu, 0xA5, 0x000013u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:152 CLC
    case 0xC03623: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:153 ADC #.LOWORD(GAME_STATE)
    case 0xC03624: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:153 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03624.
    case 0xC03626: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:154 TAX
    case 0xC03627: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:155 SEP #PROC_FLAGS::ACCUM8
    case 0xC03628: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:156 LDA a:game_state::party_members,X
    case 0xC0362A: {
        Instruction step(cpu, 0xBD, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:157 STA @LOCAL00
    case 0xC0362D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:158 STA @VIRTUAL00
    case 0xC0362F: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:159 LDX @VIRTUAL02
    case 0xC03631: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:160 LDA __BSS_START__,X
    case 0xC03633: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:161 CMP @VIRTUAL00
    case 0xC03636: {
        Instruction step(cpu, 0xC5, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C0/C032EC-jp.asm:162 BEQL @UNKNOWN9
    case 0xC03638: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C0/C032EC-jp.asm:162 BEQL @UNKNOWN9
    case 0xC0363A: {
        Instruction step(cpu, 0x4C, 0x0036C3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:163 LDA @LOCAL00
    case 0xC0363D: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:164 LDX @VIRTUAL02
    case 0xC0363F: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:165 STA __BSS_START__,X
    case 0xC03641: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:166 REP #PROC_FLAGS::ACCUM8
    case 0xC03644: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:167 AND #$00FF
    case 0xC03646: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:167 AND #$00FF
    // Overlapping static entry reached from 0xC03646.
    case 0xC03648: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:168 ASL
    case 0xC03649: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:169 INC
    case 0xC0364A: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C0/C032EC-jp.asm:170 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xC0364B: {
        Instruction step(cpu, 0xA6, 0x00000Fu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C0/C032EC-jp.asm:170 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xC0364D: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C0/C032EC-jp.asm:170 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xC0364F: {
        Instruction step(cpu, 0xA6, 0x000011u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C0/C032EC-jp.asm:170 MOVE_INTX @LOCAL01, @VIRTUAL06
    case 0xC03651: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:171 CLC
    case 0xC03653: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:172 ADC @VIRTUAL06
    case 0xC03654: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:173 STA @VIRTUAL06
    case 0xC03656: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:174 LDA [@VIRTUAL06]
    case 0xC03658: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:175 AND #$00FF
    case 0xC0365A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:175 AND #$00FF
    // Overlapping static entry reached from 0xC0365A.
    case 0xC0365C: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:176 LDY #.SIZEOF(enemy_data)
    case 0xC0365D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:176 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC0365D.
    case 0xC0365F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:177 JSL MULT168
    case 0xC03660: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:178 CLC
    case 0xC03664: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:179 ADC #enemy_data::hp
    case 0xC03665: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:179 ADC #enemy_data::hp
    // Overlapping static entry reached from 0xC03665.
    case 0xC03667: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C0/C032EC-jp.asm:180 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC03668: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C0/C032EC-jp.asm:180 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC0366A: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C0/C032EC-jp.asm:180 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC0366C: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C0/C032EC-jp.asm:180 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC0366E: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:181 CLC
    case 0xC03670: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:182 ADC @VIRTUAL06
    case 0xC03671: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:183 STA @VIRTUAL06
    case 0xC03673: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:184 LDA [@VIRTUAL06]
    case 0xC03675: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:185 STA GAME_STATE+game_state::party_npc_2_hp
    case 0xC03677: {
        Instruction step(cpu, 0x8D, 0x009AEFu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:186 BRA @UNKNOWN9
    case 0xC0367A: {
        Instruction step(cpu, 0x80, 0x000047u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:188 REP #PROC_FLAGS::ACCUM8
    case 0xC0367C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:189 TYA
    case 0xC0367E: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:190 INC
    case 0xC0367F: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:191 LDX #.LOWORD(GAME_STATE) + game_state::party_npc_2
    case 0xC03680: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000ECu : 0x009AECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:191 LDX #.LOWORD(GAME_STATE) + game_state::party_npc_2
    // Overlapping static entry reached from 0xC03680.
    case 0xC03682: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:192 STX @LOCAL02
    case 0xC03683: {
        Instruction step(cpu, 0x86, 0x000013u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:193 CLC
    case 0xC03685: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:194 ADC #.LOWORD(GAME_STATE)
    case 0xC03686: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:194 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03686.
    case 0xC03688: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:195 TAX
    case 0xC03689: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:196 SEP #PROC_FLAGS::ACCUM8
    case 0xC0368A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:197 LDA a:game_state::party_members,X
    case 0xC0368C: {
        Instruction step(cpu, 0xBD, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:198 STA @LOCAL00
    case 0xC0368F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:199 STA @VIRTUAL00
    case 0xC03691: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:200 LDX @LOCAL02
    case 0xC03693: {
        Instruction step(cpu, 0xA6, 0x000013u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:201 LDA __BSS_START__,X
    case 0xC03695: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:202 CMP @VIRTUAL00
    case 0xC03698: {
        Instruction step(cpu, 0xC5, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:203 BEQ @UNKNOWN9
    case 0xC0369A: {
        Instruction step(cpu, 0xF0, 0x000027u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:204 LDA @LOCAL00
    case 0xC0369C: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:205 STA __BSS_START__,X
    case 0xC0369E: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:206 REP #PROC_FLAGS::ACCUM8
    case 0xC036A1: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:207 AND #$00FF
    case 0xC036A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:207 AND #$00FF
    // Overlapping static entry reached from 0xC036A3.
    case 0xC036A5: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:208 ASL
    case 0xC036A6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:209 TAX
    case 0xC036A7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:210 INX
    case 0xC036A8: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:211 LDA f:NPC_AI_TABLE,X
    case 0xC036A9: {
        Instruction step(cpu, 0xBF, 0xD59DDAu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:212 AND #$00FF
    case 0xC036AD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:212 AND #$00FF
    // Overlapping static entry reached from 0xC036AD.
    case 0xC036AF: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:213 LDY #.SIZEOF(enemy_data)
    case 0xC036B0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:213 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC036B0.
    case 0xC036B2: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:214 JSL MULT168
    case 0xC036B3: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:215 CLC
    case 0xC036B7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:216 ADC #enemy_data::hp
    case 0xC036B8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:216 ADC #enemy_data::hp
    // Overlapping static entry reached from 0xC036B8.
    case 0xC036BA: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:217 TAX
    case 0xC036BB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:218 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC036BC: {
        Instruction step(cpu, 0xBF, 0xD5A440u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:219 STA GAME_STATE+game_state::party_npc_2_hp
    case 0xC036C0: {
        Instruction step(cpu, 0x8D, 0x009AEFu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C032EC-jp.asm:221 REP #PROC_FLAGS::ACCUM8
    case 0xC036C3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C032EC-jp.asm:222 END_C_FUNCTION
    case 0xC036C5: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C032EC-jp.asm:222 END_C_FUNCTION
    case 0xC036C6: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
