// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/display_town_map.asm
bool resume_overworld_display_town_map(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/display_town_map.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4D681: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/display_town_map.asm:8 END_STACK_VARS
    case 0xC4D683: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/display_town_map.asm:8 END_STACK_VARS
    case 0xC4D684: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/display_town_map.asm:8 END_STACK_VARS
    case 0xC4D685: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/display_town_map.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4D685.
    case 0xC4D687: {
        Instruction step(cpu, 0xFF, 0x3CA95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/display_town_map.asm:8 END_STACK_VARS
    case 0xC4D688: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:9 LDA #60
    case 0xC4D689: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Cu : 0x00003Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:9 LDA #60
    // Overlapping static entry reached from 0xC4D689.
    case 0xC4D68B: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:10 STA TOWN_MAP_ANIMATION_FRAME
    case 0xC4D68C: {
        Instruction step(cpu, 0x8D, 0x00B4AEu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:11 LDA #20
    case 0xC4D68F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:11 LDA #20
    // Overlapping static entry reached from 0xC4D68F.
    case 0xC4D691: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:12 STA TOWN_MAP_PLAYER_ICON_ANIMATION_FRAME
    case 0xC4D692: {
        Instruction step(cpu, 0x8D, 0x00B4B0u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:13 LDA #12
    case 0xC4D695: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:13 LDA #12
    // Overlapping static entry reached from 0xC4D695.
    case 0xC4D697: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:14 STA FRAMES_UNTIL_MAP_ICON_PALETTE_UPDATE
    case 0xC4D698: {
        Instruction step(cpu, 0x8D, 0x00B4B2u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:15 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC4D69B: {
        Instruction step(cpu, 0xAE, 0x00987Bu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:16 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC4D69E: {
        Instruction step(cpu, 0xAD, 0x009877u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:17 JSR GET_TOWN_MAP_ID
    case 0xC4D6A1: {
        Instruction step(cpu, 0x20, 0x00D274u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:18 AND #$000F
    case 0xC4D6A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:18 AND #$000F
    // Overlapping static entry reached from 0xC4D6A4.
    case 0xC4D6A6: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:19 TAY
    case 0xC4D6A7: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:20 STY @LOCAL01
    case 0xC4D6A8: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/display_town_map.asm:21 BEQL @RETURN
    case 0xC4D6AA: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/display_town_map.asm:21 BEQL @RETURN
    case 0xC4D6AC: {
        Instruction step(cpu, 0x4C, 0x00D73Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:22 TYA
    case 0xC4D6AF: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:23 DEC
    case 0xC4D6B0: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:24 JSR LOAD_TOWN_MAP_DATA
    case 0xC4D6B1: {
        Instruction step(cpu, 0x20, 0x00D553u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:26 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC4D6B4: {
        Instruction step(cpu, 0x22, 0xC08756u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:27 JSL OAM_CLEAR
    case 0xC4D6B8: {
        Instruction step(cpu, 0x22, 0xC088B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:28 LDY @LOCAL01
    case 0xC4D6BC: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:29 TYA
    case 0xC4D6BE: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:30 DEC
    case 0xC4D6BF: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:31 JSR UNKNOWN_C4D43F
    case 0xC4D6C0: {
        Instruction step(cpu, 0x20, 0x00D43Fu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:32 JSL UPDATE_SCREEN
    case 0xC4D6C3: {
        Instruction step(cpu, 0x22, 0xC08B26u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:33 LDA PAD_PRESS
    case 0xC4D6C7: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:34 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC4D6CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000A0u : 0x0000A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:34 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC4D6CA.
    case 0xC4D6CC: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:35 BNE @UNKNOWN2
    case 0xC4D6CD: {
        Instruction step(cpu, 0xD0, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:36 LDA PAD_PRESS
    case 0xC4D6CF: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:37 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC4D6D2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x00A000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:37 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC4D6D2.
    case 0xC4D6D4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000D0u : 0x0010D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:38 BNE @UNKNOWN2
    case 0xC4D6D5: {
        Instruction step(cpu, 0xD0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:38 BNE @UNKNOWN2
    // Overlapping static entry reached from 0xC4D6D4.
    case 0xC4D6D6: {
        Instruction step(cpu, 0x10, 0x0000ADu, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:39 LDA PAD_PRESS
    case 0xC4D6D7: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:39 LDA PAD_PRESS
    // Overlapping static entry reached from 0xC4D6D6.
    case 0xC4D6D8: {
        Instruction step(cpu, 0x6D, 0x002900u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:40 AND #PAD::L_BUTTON
    case 0xC4D6DA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:40 AND #PAD::L_BUTTON
    // Overlapping static entry reached from 0xC4D6D8.
    case 0xC4D6DB: {
        Instruction step(cpu, 0x20, 0x00D000u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:40 AND #PAD::L_BUTTON
    // Overlapping static entry reached from 0xC4D6DA.
    case 0xC4D6DC: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:41 BNE @UNKNOWN2
    case 0xC4D6DD: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:41 BNE @UNKNOWN2
    // Overlapping static entry reached from 0xC4D6DB.
    case 0xC4D6DE: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:42 LDA PAD_PRESS
    case 0xC4D6DF: {
        Instruction step(cpu, 0xAD, 0x00006Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:43 AND #PAD::X_BUTTON
    case 0xC4D6E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:43 AND #PAD::X_BUTTON
    // Overlapping static entry reached from 0xC4D6E2.
    case 0xC4D6E4: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:44 BEQ @UNKNOWN1
    case 0xC4D6E5: {
        Instruction step(cpu, 0xF0, 0x0000CDu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:46 LDX #1
    case 0xC4D6E7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:46 LDX #1
    // Overlapping static entry reached from 0xC4D6E7.
    case 0xC4D6E9: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:47 LDA #2
    case 0xC4D6EA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:47 LDA #2
    // Overlapping static entry reached from 0xC4D6EA.
    case 0xC4D6EC: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:48 JSL FADE_OUT
    case 0xC4D6ED: {
        Instruction step(cpu, 0x22, 0xC0887Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:49 LDX #0
    case 0xC4D6F1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:49 LDX #0
    // Overlapping static entry reached from 0xC4D6F1.
    case 0xC4D6F3: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:50 STX @LOCAL00
    case 0xC4D6F4: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:51 BRA @UNKNOWN4
    case 0xC4D6F6: {
        Instruction step(cpu, 0x80, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:53 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC4D6F8: {
        Instruction step(cpu, 0x22, 0xC08756u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:54 JSL OAM_CLEAR
    case 0xC4D6FC: {
        Instruction step(cpu, 0x22, 0xC088B1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:55 LDY @LOCAL01
    case 0xC4D700: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:56 TYA
    case 0xC4D702: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:57 DEC
    case 0xC4D703: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:58 JSR UNKNOWN_C4D43F
    case 0xC4D704: {
        Instruction step(cpu, 0x20, 0x00D43Fu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:59 JSL UPDATE_SCREEN
    case 0xC4D707: {
        Instruction step(cpu, 0x22, 0xC08B26u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:60 LDX @LOCAL00
    case 0xC4D70B: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:61 INX
    case 0xC4D70D: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:62 STX @LOCAL00
    case 0xC4D70E: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:64 CPX #16
    case 0xC4D710: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:64 CPX #16
    // Overlapping static entry reached from 0xC4D710.
    case 0xC4D712: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:65 BCC @UNKNOWN3
    case 0xC4D713: {
        Instruction step(cpu, 0x90, 0x0000E3u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:66 LDA #1
    case 0xC4D715: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:66 LDA #1
    // Overlapping static entry reached from 0xC4D715.
    case 0xC4D717: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:67 STA DISABLE_MUSIC_CHANGES
    case 0xC4D718: {
        Instruction step(cpu, 0x8D, 0x005DD8u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:68 JSL RELOAD_MAP
    case 0xC4D71B: {
        Instruction step(cpu, 0x22, 0xC018F3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:69 LDA NEXT_MAP_MUSIC_TRACK
    case 0xC4D71F: {
        Instruction step(cpu, 0xAD, 0x005DD6u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:70 STA CURRENT_MAP_MUSIC_TRACK
    case 0xC4D722: {
        Instruction step(cpu, 0x8D, 0x005DD4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:71 JSL UNDRAW_FLYOVER_TEXT
    case 0xC4D725: {
        Instruction step(cpu, 0x22, 0xC4800Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:72 STZ DISABLE_MUSIC_CHANGES
    case 0xC4D729: {
        Instruction step(cpu, 0x9C, 0x005DD8u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:73 SEP #PROC_FLAGS::ACCUM8
    case 0xC4D72C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:74 LDA #$17
    case 0xC4D72E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000017u : 0x008D17u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:75 STA TM_MIRROR
    case 0xC4D730: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:75 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4D72E.
    case 0xC4D731: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:75 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4D731.
    case 0xC4D732: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:76 LDX #1
    case 0xC4D733: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:76 LDX #1
    // Overlapping static entry reached from 0xC4D733.
    case 0xC4D735: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0xC4D736: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:78 LDA #2
    case 0xC4D738: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:78 LDA #2
    // Overlapping static entry reached from 0xC4D738.
    case 0xC4D73A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:79 JSL FADE_IN
    case 0xC4D73B: {
        Instruction step(cpu, 0x22, 0xC0886Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:81 LDY @LOCAL01
    case 0xC4D73F: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/display_town_map.asm:82 TYA
    case 0xC4D741: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/display_town_map.asm:83 END_C_FUNCTION
    case 0xC4D742: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/display_town_map.asm:83 END_C_FUNCTION
    case 0xC4D743: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
