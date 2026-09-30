// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/update_hppp_meter_tiles.asm
bool resume_text_update_hppp_meter_tiles(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/update_hppp_meter_tiles.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2124C: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/update_hppp_meter_tiles.asm:15 END_STACK_VARS
    case 0xC2124E: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/update_hppp_meter_tiles.asm:15 END_STACK_VARS
    case 0xC2124F: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/update_hppp_meter_tiles.asm:15 END_STACK_VARS
    case 0xC21250: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DEu : 0x00FFDEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/update_hppp_meter_tiles.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC21250.
    case 0xC21252: {
        Instruction step(cpu, 0xFF, 0x07AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/update_hppp_meter_tiles.asm:15 END_STACK_VARS
    case 0xC21253: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:16 LDA RENDER_HPPP_WINDOWS
    case 0xC21254: {
        Instruction step(cpu, 0xAD, 0x008D07u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:16 LDA RENDER_HPPP_WINDOWS
    // Overlapping static entry reached from 0xC21252.
    case 0xC21256: {
        Instruction step(cpu, 0x8D, 0x00FF29u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:17 AND #$00FF
    case 0xC21257: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC21257.
    case 0xC21259: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/update_hppp_meter_tiles.asm:18 BEQL @UNKNOWN22
    case 0xC2125A: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/update_hppp_meter_tiles.asm:18 BEQL @UNKNOWN22
    case 0xC2125C: {
        Instruction step(cpu, 0x4C, 0x0014CCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:19 LDA FRAME_COUNTER
    case 0xC2125F: {
        Instruction step(cpu, 0xAD, 0x000002u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:20 AND #$00FF
    case 0xC21262: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC21262.
    case 0xC21264: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:21 AND #$0003
    case 0xC21265: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:21 AND #$0003
    // Overlapping static entry reached from 0xC21265.
    case 0xC21267: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:22 STA @LOCAL09
    case 0xC21268: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:24 CLC
    case 0xC2126A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:25 ADC #.LOWORD(GAME_STATE)
    case 0xC2126B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:25 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC2126B.
    case 0xC2126D: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:26 TAX
    case 0xC2126E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:27 LDA a:game_state::party_members,X
    case 0xC2126F: {
        Instruction step(cpu, 0xBD, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:32 AND #$00FF
    case 0xC21272: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC21272.
    case 0xC21274: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/update_hppp_meter_tiles.asm:33 BEQL @UNKNOWN22
    case 0xC21275: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/update_hppp_meter_tiles.asm:33 BEQL @UNKNOWN22
    case 0xC21277: {
        Instruction step(cpu, 0x4C, 0x0014CCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:34 AND #$00FF
    case 0xC2127A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC2127A.
    case 0xC2127C: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:35 CLC
    case 0xC2127D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:36 SBC #4
    case 0xC2127E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:36 SBC #4
    // Overlapping static entry reached from 0xC2127E.
    case 0xC21280: {
        Instruction step(cpu, 0x00, 0x000070u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:816 BVS :+
    // Macro caller: src/text/update_hppp_meter_tiles.asm:37 JUMPGTS @UNKNOWN22
    case 0xC21281: {
        Instruction step(cpu, 0x70, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:817 BMI :++
    // Macro caller: src/text/update_hppp_meter_tiles.asm:37 JUMPGTS @UNKNOWN22
    case 0xC21283: {
        Instruction step(cpu, 0x30, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:818 JMP dest
    // Macro caller: src/text/update_hppp_meter_tiles.asm:37 JUMPGTS @UNKNOWN22
    case 0xC21285: {
        Instruction step(cpu, 0x4C, 0x0014CCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:820 BPL :+
    // Macro caller: src/text/update_hppp_meter_tiles.asm:37 JUMPGTS @UNKNOWN22
    case 0xC21288: {
        Instruction step(cpu, 0x10, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:821 JMP dest
    // Macro caller: src/text/update_hppp_meter_tiles.asm:37 JUMPGTS @UNKNOWN22
    case 0xC2128A: {
        Instruction step(cpu, 0x4C, 0x0014CCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:38 LDY @LOCAL09
    case 0xC2128D: {
        Instruction step(cpu, 0xA4, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:39 SEP #PROC_FLAGS::INDEX8
    case 0xC2128F: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:40 LDA CURRENTLY_DRAWN_HPPP_WINDOWS
    case 0xC21291: {
        Instruction step(cpu, 0xAD, 0x00993Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:41 JSL ASR8_UNKNOWN1
    case 0xC21294: {
        Instruction step(cpu, 0x22, 0xC09233u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:42 AND #$0001
    case 0xC21298: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:42 AND #$0001
    // Overlapping static entry reached from 0xC21298.
    case 0xC2129A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/update_hppp_meter_tiles.asm:43 BEQL @UNKNOWN22
    case 0xC2129B: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/update_hppp_meter_tiles.asm:43 BEQL @UNKNOWN22
    case 0xC2129D: {
        Instruction step(cpu, 0x4C, 0x0014CCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:44 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC212A0: {
        Instruction step(cpu, 0xAD, 0x008D08u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:45 CMP @LOCAL09
    case 0xC212A3: {
        Instruction step(cpu, 0xC5, 0x000020u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:46 BNE @UNKNOWN5
    case 0xC212A5: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:47 LDA #18
    case 0xC212A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000012u : 0x000012u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:47 LDA #18
    // Overlapping static entry reached from 0xC212A7.
    case 0xC212A9: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:48 BRA @UNKNOWN6
    case 0xC212AA: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:50 LDA #19
    case 0xC212AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:50 LDA #19
    // Overlapping static entry reached from 0xC212AC.
    case 0xC212AE: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:656 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:52 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC212AF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:657 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:52 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC212B0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:658 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:52 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC212B1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:659 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:52 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC212B2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:660 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:52 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC212B3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:53 CLC
    case 0xC212B4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:54 ADC #96
    case 0xC212B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000060u : 0x000060u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:54 ADC #96
    // Overlapping static entry reached from 0xC212B5.
    case 0xC212B7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:55 STA @VIRTUAL02
    case 0xC212B8: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:56 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC212BA: {
        Instruction step(cpu, 0xAD, 0x009B55u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:57 AND #$00FF
    case 0xC212BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:57 AND #$00FF
    // Overlapping static entry reached from 0xC212BD.
    case 0xC212BF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:539 STA scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:58 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC212C0: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:540 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:58 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC212C2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:58 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC212C3: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:542 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:58 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC212C5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:58 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC212C6: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:59 PHA
    case 0xC212C8: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:60 ASL
    case 0xC212C9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:61 PLA
    case 0xC212CA: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:62 ROR
    case 0xC212CB: {
        Instruction step(cpu, 0x6A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_right();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:63 STA @VIRTUAL04
    case 0xC212CC: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:64 LDA #16
    case 0xC212CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:64 LDA #16
    // Overlapping static entry reached from 0xC212CE.
    case 0xC212D0: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:65 SEC
    case 0xC212D1: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:66 SBC @VIRTUAL04
    case 0xC212D2: {
        Instruction step(cpu, 0xE5, 0x000004u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:67 CLC
    case 0xC212D4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:68 ADC @VIRTUAL02
    case 0xC212D5: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:69 INC
    case 0xC212D7: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:70 INC
    case 0xC212D8: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:71 INC
    case 0xC212D9: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:72 STA @LOCAL08
    case 0xC212DA: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:73 LDA @LOCAL09
    case 0xC212DC: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:539 STA scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:74 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC212DE: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:540 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:74 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC212E0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:74 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC212E1: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:542 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:74 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC212E3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:74 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC212E4: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:75 STA @VIRTUAL02
    case 0xC212E6: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:76 LDA @LOCAL08
    case 0xC212E8: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:77 CLC
    case 0xC212EA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:78 ADC @VIRTUAL02
    case 0xC212EB: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:79 STA @LOCAL07
    case 0xC212ED: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:80 ASL
    case 0xC212EF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:81 CLC
    case 0xC212F0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:82 ADC #.LOWORD(BG2_BUFFER)
    case 0xC212F1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000076u : 0x008176u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:82 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC212F1.
    case 0xC212F3: {
        Instruction step(cpu, 0x81, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:83 STA @VIRTUAL04
    case 0xC212F4: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:83 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC212F3.
    case 0xC212F5: {
        Instruction step(cpu, 0x04, 0x000085u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:84 STA @LOCAL06
    case 0xC212F6: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:84 STA @LOCAL06
    // Overlapping static entry reached from 0xC212F5.
    case 0xC212F7: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:85 LDA @LOCAL07
    case 0xC212F8: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:86 CLC
    case 0xC212FA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:87 ADC #$7C00
    case 0xC212FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x007C00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:87 ADC #$7C00
    // Overlapping static entry reached from 0xC212FB.
    case 0xC212FD: {
        Instruction step(cpu, 0x7C, 0x001C85u, 3u, AddressMode::AbsoluteIndexedIndirectX);
        step.jump();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:88 STA @LOCAL07
    case 0xC212FE: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:90 LDA @LOCAL09
    case 0xC21300: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:91 CLC
    case 0xC21302: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:92 ADC #.LOWORD(GAME_STATE)
    case 0xC21303: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:92 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC21303.
    case 0xC21305: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:93 REP #PROC_FLAGS::INDEX8
    case 0xC21306: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:94 TAX
    case 0xC21308: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:95 LDA a:game_state::party_members,X
    case 0xC21309: {
        Instruction step(cpu, 0xBD, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:101 AND #$00FF
    case 0xC2130C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:101 AND #$00FF
    // Overlapping static entry reached from 0xC2130C.
    case 0xC2130E: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:102 DEC
    case 0xC2130F: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:103 LDY #.SIZEOF(char_struct)
    case 0xC21310: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:103 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21310.
    case 0xC21312: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:104 JSL MULT168
    case 0xC21313: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:105 CLC
    case 0xC21317: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:106 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC21318: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Fu : 0x009C7Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:106 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC21318.
    case 0xC2131A: {
        Instruction step(cpu, 0x9C, 0x001885u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:107 STA @LOCAL05
    case 0xC2131B: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:108 LDY #char_struct::current_hp_fraction
    case 0xC2131D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000042u : 0x000042u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:108 LDY #char_struct::current_hp_fraction
    // Overlapping static entry reached from 0xC2131D.
    case 0xC2131F: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:109 LDA (@LOCAL05),Y
    case 0xC21320: {
        Instruction step(cpu, 0xB1, 0x000018u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:110 STA @LOCAL04
    case 0xC21322: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:111 AND #$0001
    case 0xC21324: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:111 AND #$0001
    // Overlapping static entry reached from 0xC21324.
    case 0xC21326: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/update_hppp_meter_tiles.asm:112 BEQL @UNKNOWN13
    case 0xC21327: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/update_hppp_meter_tiles.asm:112 BEQL @UNKNOWN13
    case 0xC21329: {
        Instruction step(cpu, 0x4C, 0x0013E6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:113 LDA @LOCAL04
    case 0xC2132C: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:114 TAY
    case 0xC2132E: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:115 STY @LOCAL03
    case 0xC2132F: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:116 LDY #char_struct::current_hp
    case 0xC21331: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000044u : 0x000044u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:116 LDY #char_struct::current_hp
    // Overlapping static entry reached from 0xC21331.
    case 0xC21333: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:117 LDA (@LOCAL05),Y
    case 0xC21334: {
        Instruction step(cpu, 0xB1, 0x000018u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:118 TAX
    case 0xC21336: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:119 LDA @LOCAL09
    case 0xC21337: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:120 LDY @LOCAL03
    case 0xC21339: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:121 JSR FILL_CHARACTER_HP_TILE_BUFFER
    case 0xC2133B: {
        Instruction step(cpu, 0x20, 0x000D99u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:122 LDA @LOCAL09
    case 0xC2133E: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:123 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC21340: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:123 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC21342: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:123 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC21343: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:123 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC21345: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:123 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC21346: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:123 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC21347: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:124 CLC
    case 0xC21348: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:125 ADC #.LOWORD(HPPP_WINDOW_BUFFER)
    case 0xC21349: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A7u : 0x008CA7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:125 ADC #.LOWORD(HPPP_WINDOW_BUFFER)
    // Overlapping static entry reached from 0xC21349.
    case 0xC2134B: {
        Instruction step(cpu, 0x8C, 0x000285u, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:126 STA @VIRTUAL02
    case 0xC2134C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:127 LDA UPLOAD_HPPP_METER_TILES
    case 0xC2134E: {
        Instruction step(cpu, 0xAD, 0x00991Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:128 AND #$00FF
    case 0xC21351: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:128 AND #$00FF
    // Overlapping static entry reached from 0xC21351.
    case 0xC21353: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:129 BNE @UNKNOWN8
    case 0xC21354: {
        Instruction step(cpu, 0xD0, 0x000035u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:130 LDA #.HIWORD(__BSS_START__)
    case 0xC21356: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Eu : 0x00007Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:130 LDA #.HIWORD(__BSS_START__)
    // Overlapping static entry reached from 0xC21356.
    case 0xC21358: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:131 STA @LOCAL00
    case 0xC21359: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:132 LDA @LOCAL07
    case 0xC2135B: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:133 STA @LOCAL01
    case 0xC2135D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:134 LDY @VIRTUAL02
    case 0xC2135F: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:135 LDX #6
    case 0xC21361: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:135 LDX #6
    // Overlapping static entry reached from 0xC21361.
    case 0xC21363: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:136 SEP #PROC_FLAGS::ACCUM8
    case 0xC21364: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:137 LDA #0
    case 0xC21366: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:138 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC21368: {
        Instruction step(cpu, 0x22, 0xC0862Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:138 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xC21366.
    case 0xC21369: {
        Instruction step(cpu, 0x2E, 0x00C086u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:140 LDA #.HIWORD(__BSS_START__)
    case 0xC2136C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Eu : 0x00007Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:140 LDA #.HIWORD(__BSS_START__)
    // Overlapping static entry reached from 0xC2136C.
    case 0xC2136E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:141 STA @LOCAL00
    case 0xC2136F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:142 LDA @LOCAL07
    case 0xC21371: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:143 CLC
    case 0xC21373: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:144 ADC #32
    case 0xC21374: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:144 ADC #32
    // Overlapping static entry reached from 0xC21374.
    case 0xC21376: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:145 STA @LOCAL01
    case 0xC21377: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:146 LDA @VIRTUAL02
    case 0xC21379: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:147 CLC
    case 0xC2137B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:148 ADC #6
    case 0xC2137C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:148 ADC #6
    // Overlapping static entry reached from 0xC2137C.
    case 0xC2137E: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:149 TAY
    case 0xC2137F: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:150 LDX #6
    case 0xC21380: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:150 LDX #6
    // Overlapping static entry reached from 0xC21380.
    case 0xC21382: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:151 SEP #PROC_FLAGS::ACCUM8
    case 0xC21383: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:152 LDA #0
    case 0xC21385: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:153 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC21387: {
        Instruction step(cpu, 0x22, 0xC0862Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:153 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xC21385.
    case 0xC21388: {
        Instruction step(cpu, 0x2E, 0x00C086u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:156 LDY @VIRTUAL02
    case 0xC2138B: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:157 LDX #0
    case 0xC2138D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:157 LDX #0
    // Overlapping static entry reached from 0xC2138D.
    case 0xC2138F: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:158 STX @LOCAL08
    case 0xC21390: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:159 BRA @UNKNOWN10
    case 0xC21392: {
        Instruction step(cpu, 0x80, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:161 LDA __BSS_START__,Y
    case 0xC21394: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:162 LDX @LOCAL06
    case 0xC21397: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:163 STX @VIRTUAL04
    case 0xC21399: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:164 STA __BSS_START__,X
    case 0xC2139B: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:165 INY
    case 0xC2139E: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:166 INY
    case 0xC2139F: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:167 INC @VIRTUAL04
    case 0xC213A0: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:168 INC @VIRTUAL04
    case 0xC213A2: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:169 LDA @VIRTUAL04
    case 0xC213A4: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:170 STA @LOCAL06
    case 0xC213A6: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:171 LDX @LOCAL08
    case 0xC213A8: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:172 INX
    case 0xC213AA: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:173 STX @LOCAL08
    case 0xC213AB: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:175 CPX #3
    case 0xC213AD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:175 CPX #3
    // Overlapping static entry reached from 0xC213AD.
    case 0xC213AF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:176 BNE @UNKNOWN9
    case 0xC213B0: {
        Instruction step(cpu, 0xD0, 0x0000E2u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:177 LDA @LOCAL06
    case 0xC213B2: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:178 STA @VIRTUAL04
    case 0xC213B4: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:179 CLC
    case 0xC213B6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:180 ADC #58
    case 0xC213B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00003Au : 0x00003Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:180 ADC #58
    // Overlapping static entry reached from 0xC213B7.
    case 0xC213B9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:181 STA @LOCAL08
    case 0xC213BA: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:182 LDX #0
    case 0xC213BC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:182 LDX #0
    // Overlapping static entry reached from 0xC213BC.
    case 0xC213BE: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:183 STX @LOCAL03
    case 0xC213BF: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:184 BRA @UNKNOWN12
    case 0xC213C1: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:186 TAX
    case 0xC213C3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:187 LDA __BSS_START__,Y
    case 0xC213C4: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:188 STA __BSS_START__,X
    case 0xC213C7: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:189 INY
    case 0xC213CA: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:190 INY
    case 0xC213CB: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:191 LDA @LOCAL08
    case 0xC213CC: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:192 INC
    case 0xC213CE: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:193 INC
    case 0xC213CF: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:194 STA @LOCAL08
    case 0xC213D0: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:195 LDX @LOCAL03
    case 0xC213D2: {
        Instruction step(cpu, 0xA6, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:196 INX
    case 0xC213D4: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:197 STX @LOCAL03
    case 0xC213D5: {
        Instruction step(cpu, 0x86, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:199 CPX #3
    case 0xC213D7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:199 CPX #3
    // Overlapping static entry reached from 0xC213D7.
    case 0xC213D9: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:200 BNE @UNKNOWN11
    case 0xC213DA: {
        Instruction step(cpu, 0xD0, 0x0000E7u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:201 CLC
    case 0xC213DC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:202 ADC #58
    case 0xC213DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00003Au : 0x00003Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:202 ADC #58
    // Overlapping static entry reached from 0xC213DD.
    case 0xC213DF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:203 STA @VIRTUAL04
    case 0xC213E0: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:204 STA @LOCAL06
    case 0xC213E2: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:205 BRA @UNKNOWN14
    case 0xC213E4: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:207 LDA @VIRTUAL04
    case 0xC213E6: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:208 CLC
    case 0xC213E8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:209 ADC #128
    case 0xC213E9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:209 ADC #128
    // Overlapping static entry reached from 0xC213E9.
    case 0xC213EB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:210 STA @VIRTUAL04
    case 0xC213EC: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:211 STA @LOCAL06
    case 0xC213EE: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:213 LDY #char_struct::current_pp_fraction
    case 0xC213F0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000048u : 0x000048u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:213 LDY #char_struct::current_pp_fraction
    // Overlapping static entry reached from 0xC213F0.
    case 0xC213F2: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:214 LDA (@LOCAL05),Y
    case 0xC213F3: {
        Instruction step(cpu, 0xB1, 0x000018u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:215 STA @LOCAL04
    case 0xC213F5: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:216 AND #$0001
    case 0xC213F7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:216 AND #$0001
    // Overlapping static entry reached from 0xC213F7.
    case 0xC213F9: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/update_hppp_meter_tiles.asm:217 BEQL @UNKNOWN21
    case 0xC213FA: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/update_hppp_meter_tiles.asm:217 BEQL @UNKNOWN21
    case 0xC213FC: {
        Instruction step(cpu, 0x4C, 0x0014BFu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:219 LDA @LOCAL04
    case 0xC213FF: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:220 STA @LOCAL00
    case 0xC21401: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:221 LDY #char_struct::current_pp
    case 0xC21403: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Au : 0x00004Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:221 LDY #char_struct::current_pp
    // Overlapping static entry reached from 0xC21403.
    case 0xC21405: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:222 LDA (@LOCAL05),Y
    case 0xC21406: {
        Instruction step(cpu, 0xB1, 0x000018u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:223 TAY
    case 0xC21408: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:224 LDA @LOCAL05
    case 0xC21409: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:225 CLC
    case 0xC2140B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:226 ADC #char_struct::afflictions
    case 0xC2140C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:226 ADC #char_struct::afflictions
    // Overlapping static entry reached from 0xC2140C.
    case 0xC2140E: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:227 TAX
    case 0xC2140F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:228 LDA @LOCAL09
    case 0xC21410: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:229 JSR FILL_CHARACTER_PP_TILE_BUFFER
    case 0xC21412: {
        Instruction step(cpu, 0x20, 0x000DB7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:230 LDA @LOCAL09
    case 0xC21415: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:231 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC21417: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:231 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC21419: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:231 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2141A: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:231 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2141C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:231 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2141D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:231 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2141E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:232 CLC
    case 0xC2141F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:233 ADC #.LOWORD(HPPP_WINDOW_BUFFER) + 12
    case 0xC21420: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000B3u : 0x008CB3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:233 ADC #.LOWORD(HPPP_WINDOW_BUFFER) + 12
    // Overlapping static entry reached from 0xC21420.
    case 0xC21422: {
        Instruction step(cpu, 0x8C, 0x000285u, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:234 STA @VIRTUAL02
    case 0xC21423: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:235 LDA UPLOAD_HPPP_METER_TILES
    case 0xC21425: {
        Instruction step(cpu, 0xAD, 0x00991Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:236 AND #$00FF
    case 0xC21428: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:236 AND #$00FF
    // Overlapping static entry reached from 0xC21428.
    case 0xC2142A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:237 BNE @UNKNOWN16
    case 0xC2142B: {
        Instruction step(cpu, 0xD0, 0x000039u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:238 LDA #.HIWORD(__BSS_START__)
    case 0xC2142D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Eu : 0x00007Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:238 LDA #.HIWORD(__BSS_START__)
    // Overlapping static entry reached from 0xC2142D.
    case 0xC2142F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:239 STA @LOCAL00
    case 0xC21430: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:240 LDA @LOCAL07
    case 0xC21432: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:241 CLC
    case 0xC21434: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:242 ADC #64
    case 0xC21435: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:242 ADC #64
    // Overlapping static entry reached from 0xC21435.
    case 0xC21437: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:243 STA @LOCAL01
    case 0xC21438: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:244 LDY @VIRTUAL02
    case 0xC2143A: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:245 LDX #6
    case 0xC2143C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:245 LDX #6
    // Overlapping static entry reached from 0xC2143C.
    case 0xC2143E: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:246 SEP #PROC_FLAGS::ACCUM8
    case 0xC2143F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:247 LDA #0
    case 0xC21441: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:248 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC21443: {
        Instruction step(cpu, 0x22, 0xC0862Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:248 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xC21441.
    case 0xC21444: {
        Instruction step(cpu, 0x2E, 0x00C086u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:250 LDA #.HIWORD(__BSS_START__)
    case 0xC21447: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Eu : 0x00007Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:250 LDA #.HIWORD(__BSS_START__)
    // Overlapping static entry reached from 0xC21447.
    case 0xC21449: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:251 STA @LOCAL00
    case 0xC2144A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:252 LDA @LOCAL07
    case 0xC2144C: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:253 CLC
    case 0xC2144E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:254 ADC #96
    case 0xC2144F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000060u : 0x000060u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:254 ADC #96
    // Overlapping static entry reached from 0xC2144F.
    case 0xC21451: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:255 STA @LOCAL01
    case 0xC21452: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:256 LDA @VIRTUAL02
    case 0xC21454: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:257 CLC
    case 0xC21456: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:258 ADC #6
    case 0xC21457: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:258 ADC #6
    // Overlapping static entry reached from 0xC21457.
    case 0xC21459: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:259 TAY
    case 0xC2145A: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:260 LDX #6
    case 0xC2145B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:260 LDX #6
    // Overlapping static entry reached from 0xC2145B.
    case 0xC2145D: {
        Instruction step(cpu, 0x00, 0x0000E2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:261 SEP #PROC_FLAGS::ACCUM8
    case 0xC2145E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:262 LDA #0
    case 0xC21460: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:263 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC21462: {
        Instruction step(cpu, 0x22, 0xC0862Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:263 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xC21460.
    case 0xC21463: {
        Instruction step(cpu, 0x2E, 0x00C086u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:266 LDA @VIRTUAL02
    case 0xC21466: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:267 STA @LOCAL02
    case 0xC21468: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:268 LDX #0
    case 0xC2146A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:268 LDX #0
    // Overlapping static entry reached from 0xC2146A.
    case 0xC2146C: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:269 STX @LOCAL08
    case 0xC2146D: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:270 BRA @UNKNOWN18
    case 0xC2146F: {
        Instruction step(cpu, 0x80, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:272 TAX
    case 0xC21471: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:273 LDA __BSS_START__,X
    case 0xC21472: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:274 LDX @LOCAL06
    case 0xC21475: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:275 STX @VIRTUAL04
    case 0xC21477: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:276 STA __BSS_START__,X
    case 0xC21479: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:277 LDA @LOCAL02
    case 0xC2147C: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:278 INC
    case 0xC2147E: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:279 INC
    case 0xC2147F: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:280 STA @LOCAL02
    case 0xC21480: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:281 INC @VIRTUAL04
    case 0xC21482: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:282 INC @VIRTUAL04
    case 0xC21484: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:283 LDX @VIRTUAL04
    case 0xC21486: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:284 STX @LOCAL06
    case 0xC21488: {
        Instruction step(cpu, 0x86, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:285 LDX @LOCAL08
    case 0xC2148A: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:286 INX
    case 0xC2148C: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:287 STX @LOCAL08
    case 0xC2148D: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:289 CPX #3
    case 0xC2148F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:289 CPX #3
    // Overlapping static entry reached from 0xC2148F.
    case 0xC21491: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:290 BNE @UNKNOWN17
    case 0xC21492: {
        Instruction step(cpu, 0xD0, 0x0000DDu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:291 LDA @LOCAL06
    case 0xC21494: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:292 STA @VIRTUAL04
    case 0xC21496: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:293 CLC
    case 0xC21498: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:294 ADC #58
    case 0xC21499: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00003Au : 0x00003Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:294 ADC #58
    // Overlapping static entry reached from 0xC21499.
    case 0xC2149B: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:295 TAY
    case 0xC2149C: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:296 LDX #0
    case 0xC2149D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:296 LDX #0
    // Overlapping static entry reached from 0xC2149D.
    case 0xC2149F: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:297 STX @LOCAL08
    case 0xC214A0: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:298 BRA @UNKNOWN20
    case 0xC214A2: {
        Instruction step(cpu, 0x80, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:300 LDA @LOCAL02
    case 0xC214A4: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:301 TAX
    case 0xC214A6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:302 LDA __BSS_START__,X
    case 0xC214A7: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:303 STA __BSS_START__,Y
    case 0xC214AA: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:304 LDA @LOCAL02
    case 0xC214AD: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:305 INC
    case 0xC214AF: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:306 INC
    case 0xC214B0: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:307 STA @LOCAL02
    case 0xC214B1: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:308 INY
    case 0xC214B3: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:309 INY
    case 0xC214B4: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:310 LDX @LOCAL08
    case 0xC214B5: {
        Instruction step(cpu, 0xA6, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:311 INX
    case 0xC214B7: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:312 STX @LOCAL08
    case 0xC214B8: {
        Instruction step(cpu, 0x86, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:314 CPX #3
    case 0xC214BA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:314 CPX #3
    // Overlapping static entry reached from 0xC214BA.
    case 0xC214BC: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:315 BNE @UNKNOWN19
    case 0xC214BD: {
        Instruction step(cpu, 0xD0, 0x0000E5u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:317 LDA UPLOAD_HPPP_METER_TILES
    case 0xC214BF: {
        Instruction step(cpu, 0xAD, 0x00991Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:318 AND #$00FF
    case 0xC214C2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:318 AND #$00FF
    // Overlapping static entry reached from 0xC214C2.
    case 0xC214C4: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:319 BEQ @UNKNOWN22
    case 0xC214C5: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:320 SEP #PROC_FLAGS::ACCUM8
    case 0xC214C7: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:321 STZ UPLOAD_HPPP_METER_TILES
    case 0xC214C9: {
        Instruction step(cpu, 0x9C, 0x00991Cu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/text/update_hppp_meter_tiles.asm:323 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC214CC: {
        Instruction step(cpu, 0xC2, 0x000030u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/update_hppp_meter_tiles.asm:324 END_C_FUNCTION
    case 0xC214CE: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:324 END_C_FUNCTION
    case 0xC214CF: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
