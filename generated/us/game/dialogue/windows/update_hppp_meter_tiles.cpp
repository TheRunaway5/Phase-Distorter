// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/update_hppp_meter_tiles.asm
bool resume_text_update_hppp_meter_tiles(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/update_hppp_meter_tiles.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC213AC: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/update_hppp_meter_tiles.asm:15 END_STACK_VARS
    case 0xC213AE: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/update_hppp_meter_tiles.asm:15 END_STACK_VARS
    case 0xC213AF: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/update_hppp_meter_tiles.asm:15 END_STACK_VARS
    case 0xC213B0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DEu : 0x00FFDEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/update_hppp_meter_tiles.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC213B0.
    case 0xC213B2: {
        Instruction step(cpu, 0xFF, 0xC9AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/update_hppp_meter_tiles.asm:15 END_STACK_VARS
    case 0xC213B3: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:16 LDA RENDER_HPPP_WINDOWS
    case 0xC213B4: {
        Instruction step(cpu, 0xAD, 0x0089C9u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:16 LDA RENDER_HPPP_WINDOWS
    // Overlapping static entry reached from 0xC213B2.
    case 0xC213B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000029u : 0x00FF29u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:17 AND #$00FF
    case 0xC213B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC213B6.
    case 0xC213B8: {
        Instruction step(cpu, 0xFF, 0x03D000u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC213B7.
    case 0xC213B9: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/update_hppp_meter_tiles.asm:18 BEQL @UNKNOWN22
    case 0xC213BA: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/update_hppp_meter_tiles.asm:18 BEQL @UNKNOWN22
    case 0xC213BC: {
        Instruction step(cpu, 0x4C, 0x001624u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:19 LDA FRAME_COUNTER
    case 0xC213BF: {
        Instruction step(cpu, 0xAD, 0x000002u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:20 AND #$00FF
    case 0xC213C2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC213C2.
    case 0xC213C4: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:21 AND #$0003
    case 0xC213C5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:21 AND #$0003
    // Overlapping static entry reached from 0xC213C5.
    case 0xC213C7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:22 STA @LOCAL09
    case 0xC213C8: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:29 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC213CA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00006Fu : 0x00986Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:29 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC213CA.
    case 0xC213CC: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:30 LDA (@LOCAL09),Y
    case 0xC213CD: {
        Instruction step(cpu, 0xB1, 0x000020u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:32 AND #$00FF
    case 0xC213CF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC213CF.
    case 0xC213D1: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/update_hppp_meter_tiles.asm:33 BEQL @UNKNOWN22
    case 0xC213D2: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/update_hppp_meter_tiles.asm:33 BEQL @UNKNOWN22
    case 0xC213D4: {
        Instruction step(cpu, 0x4C, 0x001624u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:34 AND #$00FF
    case 0xC213D7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC213D7.
    case 0xC213D9: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:35 CLC
    case 0xC213DA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:36 SBC #4
    case 0xC213DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:36 SBC #4
    // Overlapping static entry reached from 0xC213DB.
    case 0xC213DD: {
        Instruction step(cpu, 0x00, 0x000070u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:816 BVS :+
    // Macro caller: src/text/update_hppp_meter_tiles.asm:37 JUMPGTS @UNKNOWN22
    case 0xC213DE: {
        Instruction step(cpu, 0x70, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:817 BMI :++
    // Macro caller: src/text/update_hppp_meter_tiles.asm:37 JUMPGTS @UNKNOWN22
    case 0xC213E0: {
        Instruction step(cpu, 0x30, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:818 JMP dest
    // Macro caller: src/text/update_hppp_meter_tiles.asm:37 JUMPGTS @UNKNOWN22
    case 0xC213E2: {
        Instruction step(cpu, 0x4C, 0x001624u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:820 BPL :+
    // Macro caller: src/text/update_hppp_meter_tiles.asm:37 JUMPGTS @UNKNOWN22
    case 0xC213E5: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:821 JMP dest
    // Macro caller: src/text/update_hppp_meter_tiles.asm:37 JUMPGTS @UNKNOWN22
    case 0xC213E7: {
        Instruction step(cpu, 0x4C, 0x001624u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:38 LDY @LOCAL09
    case 0xC213EA: {
        Instruction step(cpu, 0xA4, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:39 SEP #PROC_FLAGS::INDEX8
    case 0xC213EC: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:40 LDA CURRENTLY_DRAWN_HPPP_WINDOWS
    case 0xC213EE: {
        Instruction step(cpu, 0xAD, 0x009647u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:41 JSL ASR8_UNKNOWN1
    case 0xC213F1: {
        Instruction step(cpu, 0x22, 0xC09251u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:42 AND #$0001
    case 0xC213F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:42 AND #$0001
    // Overlapping static entry reached from 0xC213F5.
    case 0xC213F7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/update_hppp_meter_tiles.asm:43 BEQL @UNKNOWN22
    case 0xC213F8: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/update_hppp_meter_tiles.asm:43 BEQL @UNKNOWN22
    case 0xC213FA: {
        Instruction step(cpu, 0x4C, 0x001624u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:44 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC213FD: {
        Instruction step(cpu, 0xAD, 0x0089CAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:45 CMP @LOCAL09
    case 0xC21400: {
        Instruction step(cpu, 0xC5, 0x000020u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:46 BNE @UNKNOWN5
    case 0xC21402: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:47 LDA #18
    case 0xC21404: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000012u : 0x000012u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:47 LDA #18
    // Overlapping static entry reached from 0xC21404.
    case 0xC21406: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:48 BRA @UNKNOWN6
    case 0xC21407: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:50 LDA #19
    case 0xC21409: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:50 LDA #19
    // Overlapping static entry reached from 0xC21409.
    case 0xC2140B: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:656 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:52 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC2140C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:657 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:52 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC2140D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:658 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:52 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC2140E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:659 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:52 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC2140F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:660 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:52 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC21410: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:53 CLC
    case 0xC21411: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:54 ADC #96
    case 0xC21412: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000060u : 0x000060u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:54 ADC #96
    // Overlapping static entry reached from 0xC21412.
    case 0xC21414: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:55 STA @VIRTUAL02
    case 0xC21415: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:56 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC21417: {
        Instruction step(cpu, 0xAD, 0x0098A4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:57 AND #$00FF
    case 0xC2141A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:57 AND #$00FF
    // Overlapping static entry reached from 0xC2141A.
    case 0xC2141C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:539 STA scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:58 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2141D: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:540 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:58 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2141F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:58 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC21420: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:542 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:58 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC21422: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:58 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC21423: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:59 PHA
    case 0xC21425: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:60 ASL
    case 0xC21426: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:61 PLA
    case 0xC21427: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:62 ROR
    case 0xC21428: {
        Instruction step(cpu, 0x6A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_right();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:63 STA @VIRTUAL04
    case 0xC21429: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:64 LDA #16
    case 0xC2142B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:64 LDA #16
    // Overlapping static entry reached from 0xC2142B.
    case 0xC2142D: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:65 SEC
    case 0xC2142E: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:66 SBC @VIRTUAL04
    case 0xC2142F: {
        Instruction step(cpu, 0xE5, 0x000004u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:67 CLC
    case 0xC21431: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:68 ADC @VIRTUAL02
    case 0xC21432: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:69 INC
    case 0xC21434: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:70 INC
    case 0xC21435: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:71 INC
    case 0xC21436: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:72 STA @LOCAL08
    case 0xC21437: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:73 LDA @LOCAL09
    case 0xC21439: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:539 STA scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:74 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2143B: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:540 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:74 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2143D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:74 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2143E: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:542 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:74 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC21440: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:74 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC21441: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:75 STA @VIRTUAL02
    case 0xC21443: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:76 LDA @LOCAL08
    case 0xC21445: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:77 CLC
    case 0xC21447: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:78 ADC @VIRTUAL02
    case 0xC21448: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:79 STA @LOCAL07
    case 0xC2144A: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:80 ASL
    case 0xC2144C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:81 CLC
    case 0xC2144D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:82 ADC #.LOWORD(BG2_BUFFER)
    case 0xC2144E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000FEu : 0x007DFEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:82 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC2144E.
    case 0xC21450: {
        Instruction step(cpu, 0x7D, 0x000485u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:83 STA @VIRTUAL04
    case 0xC21451: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:84 STA @LOCAL06
    case 0xC21453: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:85 LDA @LOCAL07
    case 0xC21455: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:86 CLC
    case 0xC21457: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:87 ADC #$7C00
    case 0xC21458: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x007C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:87 ADC #$7C00
    // Overlapping static entry reached from 0xC21458.
    case 0xC2145A: {
        Instruction step(cpu, 0x7C, 0x001C85u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:88 STA @LOCAL07
    case 0xC2145B: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:97 REP #PROC_FLAGS::INDEX8
    case 0xC2145D: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:98 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC2145F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00006Fu : 0x00986Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:98 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC2145F.
    case 0xC21461: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:99 LDA (@LOCAL09),Y
    case 0xC21462: {
        Instruction step(cpu, 0xB1, 0x000020u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:101 AND #$00FF
    case 0xC21464: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:101 AND #$00FF
    // Overlapping static entry reached from 0xC21464.
    case 0xC21466: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:102 DEC
    case 0xC21467: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:103 LDY #.SIZEOF(char_struct)
    case 0xC21468: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:103 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21468.
    case 0xC2146A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:104 JSL MULT168
    case 0xC2146B: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:105 CLC
    case 0xC2146F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:106 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC21470: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CEu : 0x0099CEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:106 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC21470.
    case 0xC21472: {
        Instruction step(cpu, 0x99, 0x001885u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:107 STA @LOCAL05
    case 0xC21473: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:108 LDY #char_struct::current_hp_fraction
    case 0xC21475: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000043u : 0x000043u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:108 LDY #char_struct::current_hp_fraction
    // Overlapping static entry reached from 0xC21475.
    case 0xC21477: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:109 LDA (@LOCAL05),Y
    case 0xC21478: {
        Instruction step(cpu, 0xB1, 0x000018u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:110 STA @LOCAL04
    case 0xC2147A: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:111 AND #$0001
    case 0xC2147C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:111 AND #$0001
    // Overlapping static entry reached from 0xC2147C.
    case 0xC2147E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/update_hppp_meter_tiles.asm:112 BEQL @UNKNOWN13
    case 0xC2147F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/update_hppp_meter_tiles.asm:112 BEQL @UNKNOWN13
    case 0xC21481: {
        Instruction step(cpu, 0x4C, 0x00153Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:113 LDA @LOCAL04
    case 0xC21484: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:114 TAY
    case 0xC21486: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:115 STY @LOCAL03
    case 0xC21487: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:116 LDY #char_struct::current_hp
    case 0xC21489: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000045u : 0x000045u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:116 LDY #char_struct::current_hp
    // Overlapping static entry reached from 0xC21489.
    case 0xC2148B: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:117 LDA (@LOCAL05),Y
    case 0xC2148C: {
        Instruction step(cpu, 0xB1, 0x000018u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:118 TAX
    case 0xC2148E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:119 LDA @LOCAL09
    case 0xC2148F: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:120 LDY @LOCAL03
    case 0xC21491: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:121 JSR FILL_CHARACTER_HP_TILE_BUFFER
    case 0xC21493: {
        Instruction step(cpu, 0x20, 0x000F08u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:122 LDA @LOCAL09
    case 0xC21496: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:123 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC21498: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:123 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2149A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:123 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2149B: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:123 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2149D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:123 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2149E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:123 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2149F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:124 CLC
    case 0xC214A0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:125 ADC #.LOWORD(HPPP_WINDOW_BUFFER)
    case 0xC214A1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000069u : 0x008969u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:125 ADC #.LOWORD(HPPP_WINDOW_BUFFER)
    // Overlapping static entry reached from 0xC214A1.
    case 0xC214A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000085u : 0x000285u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:126 STA @VIRTUAL02
    case 0xC214A4: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:126 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC214A3.
    case 0xC214A5: {
        Instruction step(cpu, 0x02, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:127 LDA UPLOAD_HPPP_METER_TILES
    case 0xC214A6: {
        Instruction step(cpu, 0xAD, 0x009624u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:128 AND #$00FF
    case 0xC214A9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:128 AND #$00FF
    // Overlapping static entry reached from 0xC214A9.
    case 0xC214AB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:129 BNE @UNKNOWN8
    case 0xC214AC: {
        Instruction step(cpu, 0xD0, 0x000035u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:130 LDA #.HIWORD(__BSS_START__)
    case 0xC214AE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Eu : 0x00007Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:130 LDA #.HIWORD(__BSS_START__)
    // Overlapping static entry reached from 0xC214AE.
    case 0xC214B0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:131 STA @LOCAL00
    case 0xC214B1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:132 LDA @LOCAL07
    case 0xC214B3: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:133 STA @LOCAL01
    case 0xC214B5: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:134 LDY @VIRTUAL02
    case 0xC214B7: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:135 LDX #6
    case 0xC214B9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:135 LDX #6
    // Overlapping static entry reached from 0xC214B9.
    case 0xC214BB: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:136 SEP #PROC_FLAGS::ACCUM8
    case 0xC214BC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:137 LDA #0
    case 0xC214BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:138 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC214C0: {
        Instruction step(cpu, 0x22, 0xC0862Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:138 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xC214BE.
    case 0xC214C1: {
        Instruction step(cpu, 0x2E, 0x00C086u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:140 LDA #.HIWORD(__BSS_START__)
    case 0xC214C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Eu : 0x00007Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:140 LDA #.HIWORD(__BSS_START__)
    // Overlapping static entry reached from 0xC214C4.
    case 0xC214C6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:141 STA @LOCAL00
    case 0xC214C7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:142 LDA @LOCAL07
    case 0xC214C9: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:143 CLC
    case 0xC214CB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:144 ADC #32
    case 0xC214CC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:144 ADC #32
    // Overlapping static entry reached from 0xC214CC.
    case 0xC214CE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:145 STA @LOCAL01
    case 0xC214CF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:146 LDA @VIRTUAL02
    case 0xC214D1: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:147 CLC
    case 0xC214D3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:148 ADC #6
    case 0xC214D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:148 ADC #6
    // Overlapping static entry reached from 0xC214D4.
    case 0xC214D6: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:149 TAY
    case 0xC214D7: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:150 LDX #6
    case 0xC214D8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:150 LDX #6
    // Overlapping static entry reached from 0xC214D8.
    case 0xC214DA: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:151 SEP #PROC_FLAGS::ACCUM8
    case 0xC214DB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:152 LDA #0
    case 0xC214DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:153 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC214DF: {
        Instruction step(cpu, 0x22, 0xC0862Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:153 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xC214DD.
    case 0xC214E0: {
        Instruction step(cpu, 0x2E, 0x00C086u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:156 LDY @VIRTUAL02
    case 0xC214E3: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:157 LDX #0
    case 0xC214E5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:157 LDX #0
    // Overlapping static entry reached from 0xC214E5.
    case 0xC214E7: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:158 STX @LOCAL08
    case 0xC214E8: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:159 BRA @UNKNOWN10
    case 0xC214EA: {
        Instruction step(cpu, 0x80, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:161 LDA __BSS_START__,Y
    case 0xC214EC: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:162 LDX @LOCAL06
    case 0xC214EF: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:163 STX @VIRTUAL04
    case 0xC214F1: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:164 STA __BSS_START__,X
    case 0xC214F3: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:165 INY
    case 0xC214F6: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:166 INY
    case 0xC214F7: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:167 INC @VIRTUAL04
    case 0xC214F8: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:168 INC @VIRTUAL04
    case 0xC214FA: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:169 LDA @VIRTUAL04
    case 0xC214FC: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:170 STA @LOCAL06
    case 0xC214FE: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:171 LDX @LOCAL08
    case 0xC21500: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:172 INX
    case 0xC21502: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:173 STX @LOCAL08
    case 0xC21503: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:175 CPX #3
    case 0xC21505: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:175 CPX #3
    // Overlapping static entry reached from 0xC21505.
    case 0xC21507: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:176 BNE @UNKNOWN9
    case 0xC21508: {
        Instruction step(cpu, 0xD0, 0x0000E2u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:177 LDA @LOCAL06
    case 0xC2150A: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:178 STA @VIRTUAL04
    case 0xC2150C: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:179 CLC
    case 0xC2150E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:180 ADC #58
    case 0xC2150F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00003Au : 0x00003Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:180 ADC #58
    // Overlapping static entry reached from 0xC2150F.
    case 0xC21511: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:181 STA @LOCAL08
    case 0xC21512: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:182 LDX #0
    case 0xC21514: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:182 LDX #0
    // Overlapping static entry reached from 0xC21514.
    case 0xC21516: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:183 STX @LOCAL03
    case 0xC21517: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:184 BRA @UNKNOWN12
    case 0xC21519: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:186 TAX
    case 0xC2151B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:187 LDA __BSS_START__,Y
    case 0xC2151C: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:188 STA __BSS_START__,X
    case 0xC2151F: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:189 INY
    case 0xC21522: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:190 INY
    case 0xC21523: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:191 LDA @LOCAL08
    case 0xC21524: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:192 INC
    case 0xC21526: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:193 INC
    case 0xC21527: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:194 STA @LOCAL08
    case 0xC21528: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:195 LDX @LOCAL03
    case 0xC2152A: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:196 INX
    case 0xC2152C: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:197 STX @LOCAL03
    case 0xC2152D: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:199 CPX #3
    case 0xC2152F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:199 CPX #3
    // Overlapping static entry reached from 0xC2152F.
    case 0xC21531: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:200 BNE @UNKNOWN11
    case 0xC21532: {
        Instruction step(cpu, 0xD0, 0x0000E7u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:201 CLC
    case 0xC21534: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:202 ADC #58
    case 0xC21535: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00003Au : 0x00003Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:202 ADC #58
    // Overlapping static entry reached from 0xC21535.
    case 0xC21537: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:203 STA @VIRTUAL04
    case 0xC21538: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:204 STA @LOCAL06
    case 0xC2153A: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:205 BRA @UNKNOWN14
    case 0xC2153C: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:207 LDA @VIRTUAL04
    case 0xC2153E: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:208 CLC
    case 0xC21540: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:209 ADC #128
    case 0xC21541: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:209 ADC #128
    // Overlapping static entry reached from 0xC21541.
    case 0xC21543: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:210 STA @VIRTUAL04
    case 0xC21544: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:211 STA @LOCAL06
    case 0xC21546: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:213 LDY #char_struct::current_pp_fraction
    case 0xC21548: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000049u : 0x000049u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:213 LDY #char_struct::current_pp_fraction
    // Overlapping static entry reached from 0xC21548.
    case 0xC2154A: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:214 LDA (@LOCAL05),Y
    case 0xC2154B: {
        Instruction step(cpu, 0xB1, 0x000018u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:215 STA @LOCAL04
    case 0xC2154D: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:216 AND #$0001
    case 0xC2154F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:216 AND #$0001
    // Overlapping static entry reached from 0xC2154F.
    case 0xC21551: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/update_hppp_meter_tiles.asm:217 BEQL @UNKNOWN21
    case 0xC21552: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/update_hppp_meter_tiles.asm:217 BEQL @UNKNOWN21
    case 0xC21554: {
        Instruction step(cpu, 0x4C, 0x001617u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:219 LDA @LOCAL04
    case 0xC21557: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:220 STA @LOCAL00
    case 0xC21559: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:221 LDY #char_struct::current_pp
    case 0xC2155B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Bu : 0x00004Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:221 LDY #char_struct::current_pp
    // Overlapping static entry reached from 0xC2155B.
    case 0xC2155D: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:222 LDA (@LOCAL05),Y
    case 0xC2155E: {
        Instruction step(cpu, 0xB1, 0x000018u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:223 TAY
    case 0xC21560: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:224 LDA @LOCAL05
    case 0xC21561: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:225 CLC
    case 0xC21563: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:226 ADC #char_struct::afflictions
    case 0xC21564: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:226 ADC #char_struct::afflictions
    // Overlapping static entry reached from 0xC21564.
    case 0xC21566: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:227 TAX
    case 0xC21567: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:228 LDA @LOCAL09
    case 0xC21568: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:229 JSR FILL_CHARACTER_PP_TILE_BUFFER
    case 0xC2156A: {
        Instruction step(cpu, 0x20, 0x000F26u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:230 LDA @LOCAL09
    case 0xC2156D: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:231 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2156F: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:231 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC21571: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:231 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC21572: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:231 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC21574: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:231 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC21575: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:231 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC21576: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:232 CLC
    case 0xC21577: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:233 ADC #.LOWORD(HPPP_WINDOW_BUFFER) + 12
    case 0xC21578: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000075u : 0x008975u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:233 ADC #.LOWORD(HPPP_WINDOW_BUFFER) + 12
    // Overlapping static entry reached from 0xC21578.
    case 0xC2157A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000085u : 0x000285u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:234 STA @VIRTUAL02
    case 0xC2157B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:234 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2157A.
    case 0xC2157C: {
        Instruction step(cpu, 0x02, 0x0000ADu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:235 LDA UPLOAD_HPPP_METER_TILES
    case 0xC2157D: {
        Instruction step(cpu, 0xAD, 0x009624u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:236 AND #$00FF
    case 0xC21580: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:236 AND #$00FF
    // Overlapping static entry reached from 0xC21580.
    case 0xC21582: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:237 BNE @UNKNOWN16
    case 0xC21583: {
        Instruction step(cpu, 0xD0, 0x000039u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:238 LDA #.HIWORD(__BSS_START__)
    case 0xC21585: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Eu : 0x00007Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:238 LDA #.HIWORD(__BSS_START__)
    // Overlapping static entry reached from 0xC21585.
    case 0xC21587: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:239 STA @LOCAL00
    case 0xC21588: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:240 LDA @LOCAL07
    case 0xC2158A: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:241 CLC
    case 0xC2158C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:242 ADC #64
    case 0xC2158D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:242 ADC #64
    // Overlapping static entry reached from 0xC2158D.
    case 0xC2158F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:243 STA @LOCAL01
    case 0xC21590: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:244 LDY @VIRTUAL02
    case 0xC21592: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:245 LDX #6
    case 0xC21594: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:245 LDX #6
    // Overlapping static entry reached from 0xC21594.
    case 0xC21596: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:246 SEP #PROC_FLAGS::ACCUM8
    case 0xC21597: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:247 LDA #0
    case 0xC21599: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:248 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC2159B: {
        Instruction step(cpu, 0x22, 0xC0862Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:248 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xC21599.
    case 0xC2159C: {
        Instruction step(cpu, 0x2E, 0x00C086u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:250 LDA #.HIWORD(__BSS_START__)
    case 0xC2159F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Eu : 0x00007Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:250 LDA #.HIWORD(__BSS_START__)
    // Overlapping static entry reached from 0xC2159F.
    case 0xC215A1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:251 STA @LOCAL00
    case 0xC215A2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:252 LDA @LOCAL07
    case 0xC215A4: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:253 CLC
    case 0xC215A6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:254 ADC #96
    case 0xC215A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000060u : 0x000060u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:254 ADC #96
    // Overlapping static entry reached from 0xC215A7.
    case 0xC215A9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:255 STA @LOCAL01
    case 0xC215AA: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:256 LDA @VIRTUAL02
    case 0xC215AC: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:257 CLC
    case 0xC215AE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:258 ADC #6
    case 0xC215AF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:258 ADC #6
    // Overlapping static entry reached from 0xC215AF.
    case 0xC215B1: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:259 TAY
    case 0xC215B2: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:260 LDX #6
    case 0xC215B3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:260 LDX #6
    // Overlapping static entry reached from 0xC215B3.
    case 0xC215B5: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:261 SEP #PROC_FLAGS::ACCUM8
    case 0xC215B6: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:262 LDA #0
    case 0xC215B8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:263 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC215BA: {
        Instruction step(cpu, 0x22, 0xC0862Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:263 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xC215B8.
    case 0xC215BB: {
        Instruction step(cpu, 0x2E, 0x00C086u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:266 LDA @VIRTUAL02
    case 0xC215BE: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:267 STA @LOCAL02
    case 0xC215C0: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:268 LDX #0
    case 0xC215C2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:268 LDX #0
    // Overlapping static entry reached from 0xC215C2.
    case 0xC215C4: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:269 STX @LOCAL08
    case 0xC215C5: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:270 BRA @UNKNOWN18
    case 0xC215C7: {
        Instruction step(cpu, 0x80, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:272 TAX
    case 0xC215C9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:273 LDA __BSS_START__,X
    case 0xC215CA: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:274 LDX @LOCAL06
    case 0xC215CD: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:275 STX @VIRTUAL04
    case 0xC215CF: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:276 STA __BSS_START__,X
    case 0xC215D1: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:277 LDA @LOCAL02
    case 0xC215D4: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:278 INC
    case 0xC215D6: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:279 INC
    case 0xC215D7: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:280 STA @LOCAL02
    case 0xC215D8: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:281 INC @VIRTUAL04
    case 0xC215DA: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:282 INC @VIRTUAL04
    case 0xC215DC: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:283 LDX @VIRTUAL04
    case 0xC215DE: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:284 STX @LOCAL06
    case 0xC215E0: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:285 LDX @LOCAL08
    case 0xC215E2: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:286 INX
    case 0xC215E4: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:287 STX @LOCAL08
    case 0xC215E5: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:289 CPX #3
    case 0xC215E7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:289 CPX #3
    // Overlapping static entry reached from 0xC215E7.
    case 0xC215E9: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:290 BNE @UNKNOWN17
    case 0xC215EA: {
        Instruction step(cpu, 0xD0, 0x0000DDu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:291 LDA @LOCAL06
    case 0xC215EC: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:292 STA @VIRTUAL04
    case 0xC215EE: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:293 CLC
    case 0xC215F0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:294 ADC #58
    case 0xC215F1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00003Au : 0x00003Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:294 ADC #58
    // Overlapping static entry reached from 0xC215F1.
    case 0xC215F3: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:295 TAY
    case 0xC215F4: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:296 LDX #0
    case 0xC215F5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:296 LDX #0
    // Overlapping static entry reached from 0xC215F5.
    case 0xC215F7: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:297 STX @LOCAL08
    case 0xC215F8: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:298 BRA @UNKNOWN20
    case 0xC215FA: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:300 LDA @LOCAL02
    case 0xC215FC: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:301 TAX
    case 0xC215FE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:302 LDA __BSS_START__,X
    case 0xC215FF: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:303 STA __BSS_START__,Y
    case 0xC21602: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:304 LDA @LOCAL02
    case 0xC21605: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:305 INC
    case 0xC21607: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:306 INC
    case 0xC21608: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:307 STA @LOCAL02
    case 0xC21609: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:308 INY
    case 0xC2160B: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:309 INY
    case 0xC2160C: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:310 LDX @LOCAL08
    case 0xC2160D: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:311 INX
    case 0xC2160F: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:312 STX @LOCAL08
    case 0xC21610: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:314 CPX #3
    case 0xC21612: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:314 CPX #3
    // Overlapping static entry reached from 0xC21612.
    case 0xC21614: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:315 BNE @UNKNOWN19
    case 0xC21615: {
        Instruction step(cpu, 0xD0, 0x0000E5u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:317 LDA UPLOAD_HPPP_METER_TILES
    case 0xC21617: {
        Instruction step(cpu, 0xAD, 0x009624u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:318 AND #$00FF
    case 0xC2161A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:318 AND #$00FF
    // Overlapping static entry reached from 0xC2161A.
    case 0xC2161C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:319 BEQ @UNKNOWN22
    case 0xC2161D: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:320 SEP #PROC_FLAGS::ACCUM8
    case 0xC2161F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:321 STZ UPLOAD_HPPP_METER_TILES
    case 0xC21621: {
        Instruction step(cpu, 0x9C, 0x009624u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:323 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC21624: {
        Instruction step(cpu, 0xC2, 0x000030u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/update_hppp_meter_tiles.asm:324 END_C_FUNCTION
    case 0xC21626: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:324 END_C_FUNCTION
    case 0xC21627: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
