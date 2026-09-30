// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/hp_pp_window/undraw.asm
bool resume_text_hp_pp_window_undraw(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/hp_pp_window/undraw.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC207E1: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/hp_pp_window/undraw.asm:8 END_STACK_VARS
    case 0xC207E3: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/hp_pp_window/undraw.asm:8 END_STACK_VARS
    case 0xC207E4: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/hp_pp_window/undraw.asm:8 END_STACK_VARS
    case 0xC207E5: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/undraw.asm:8 END_STACK_VARS
    case 0xC207E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/undraw.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC207E6.
    case 0xC207E8: {
        Instruction step(cpu, 0xFF, 0xAA685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/hp_pp_window/undraw.asm:8 END_STACK_VARS
    case 0xC207E9: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/hp_pp_window/undraw.asm:8 END_STACK_VARS
    case 0xC207EA: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:9 TAX
    case 0xC207EB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:10 STX @LOCAL01
    case 0xC207EC: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:11 LDA #1
    case 0xC207EE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:11 LDA #1
    // Overlapping static entry reached from 0xC207EE.
    case 0xC207F0: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:12 STA HPPP_METER_AREA_NEEDS_UPDATE
    case 0xC207F1: {
        Instruction step(cpu, 0x8D, 0x009649u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:13 SEP #PROC_FLAGS::INDEX8
    case 0xC207F4: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:14 TXY
    case 0xC207F6: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:15 JSL ASL16_ENTRY2
    case 0xC207F7: {
        Instruction step(cpu, 0x22, 0xC0923Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:16 EOR #$FFFF
    case 0xC207FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:16 EOR #$FFFF
    // Overlapping static entry reached from 0xC207FB.
    case 0xC207FD: {
        Instruction step(cpu, 0xFF, 0x96472Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:17 AND CURRENTLY_DRAWN_HPPP_WINDOWS
    case 0xC207FE: {
        Instruction step(cpu, 0x2D, 0x009647u, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:18 STA CURRENTLY_DRAWN_HPPP_WINDOWS
    case 0xC20801: {
        Instruction step(cpu, 0x8D, 0x009647u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:19 REP #PROC_FLAGS::INDEX8
    case 0xC20804: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:20 LDX @LOCAL01
    case 0xC20806: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:21 CPX BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC20808: {
        Instruction step(cpu, 0xEC, 0x0089CAu, 3u, AddressMode::Absolute);
        step.compare_x();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:22 BNE @UNKNOWN0
    case 0xC2080B: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:23 LDA #ACTIVE_HPPP_WINDOW_Y_OFFSET
    case 0xC2080D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000012u : 0x000012u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:23 LDA #ACTIVE_HPPP_WINDOW_Y_OFFSET
    // Overlapping static entry reached from 0xC2080D.
    case 0xC2080F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:24 STA @LOCAL00
    case 0xC20810: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:25 BRA @UNKNOWN1
    case 0xC20812: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:27 LDA #NORMAL_HPPP_WINDOW_Y_OFFSET
    case 0xC20814: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:27 LDA #NORMAL_HPPP_WINDOW_Y_OFFSET
    // Overlapping static entry reached from 0xC20814.
    case 0xC20816: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:28 STA @LOCAL00
    case 0xC20817: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:30 TXA
    case 0xC20819: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:539 STA scratch
    // Macro caller: src/text/hp_pp_window/undraw.asm:31 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2081A: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:540 ASL
    // Macro caller: src/text/hp_pp_window/undraw.asm:31 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2081C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/text/hp_pp_window/undraw.asm:31 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2081D: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:542 ASL
    // Macro caller: src/text/hp_pp_window/undraw.asm:31 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2081F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/text/hp_pp_window/undraw.asm:31 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC20820: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:32 PHA
    case 0xC20822: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:33 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC20823: {
        Instruction step(cpu, 0xAD, 0x0098A4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:34 AND #$00FF
    case 0xC20826: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC20826.
    case 0xC20828: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:539 STA scratch
    // Macro caller: src/text/hp_pp_window/undraw.asm:35 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC20829: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:540 ASL
    // Macro caller: src/text/hp_pp_window/undraw.asm:35 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2082B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/text/hp_pp_window/undraw.asm:35 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2082C: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:542 ASL
    // Macro caller: src/text/hp_pp_window/undraw.asm:35 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2082E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/text/hp_pp_window/undraw.asm:35 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2082F: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:36 PHA
    case 0xC20831: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:37 ASL
    case 0xC20832: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:38 PLA
    case 0xC20833: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:39 ROR
    case 0xC20834: {
        Instruction step(cpu, 0x6A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_right();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:40 STA @VIRTUAL02
    case 0xC20835: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:41 LDA #16
    case 0xC20837: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:41 LDA #16
    // Overlapping static entry reached from 0xC20837.
    case 0xC20839: {
        Instruction step(cpu, 0x00, 0x000038u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:42 SEC
    case 0xC2083A: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:43 SBC @VIRTUAL02
    case 0xC2083B: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:44 PLY
    case 0xC2083D: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:45 STY @VIRTUAL04
    case 0xC2083E: {
        Instruction step(cpu, 0x84, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:46 CLC
    case 0xC20840: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:47 ADC @VIRTUAL04
    case 0xC20841: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:48 ASL
    case 0xC20843: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:49 STA @VIRTUAL02
    case 0xC20844: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:50 LDA @LOCAL00
    case 0xC20846: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:51 ASL
    case 0xC20848: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:52 ASL
    case 0xC20849: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:53 ASL
    case 0xC2084A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:54 ASL
    case 0xC2084B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:55 ASL
    case 0xC2084C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:56 ASL
    case 0xC2084D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:57 CLC
    case 0xC2084E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:58 ADC @VIRTUAL02
    case 0xC2084F: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:59 CLC
    case 0xC20851: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:60 ADC #.LOWORD(BG2_BUFFER)
    case 0xC20852: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000FEu : 0x007DFEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:60 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC20852.
    case 0xC20854: {
        Instruction step(cpu, 0x7D, 0x00A0AAu, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:61 TAX
    case 0xC20855: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:62 LDY #HPPP_WINDOW_HEIGHT
    case 0xC20856: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:62 LDY #HPPP_WINDOW_HEIGHT
    // Overlapping static entry reached from 0xC20854.
    case 0xC20857: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:62 LDY #HPPP_WINDOW_HEIGHT
    // Overlapping static entry reached from 0xC20856.
    case 0xC20858: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:63 BRA @UNKNOWN5
    case 0xC20859: {
        Instruction step(cpu, 0x80, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:65 LDA #HPPP_WINDOW_WIDTH
    case 0xC2085B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:65 LDA #HPPP_WINDOW_WIDTH
    // Overlapping static entry reached from 0xC2085B.
    case 0xC2085D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:66 STA @LOCAL00
    case 0xC2085E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:67 BRA @UNKNOWN4
    case 0xC20860: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:69 LDA #0
    case 0xC20862: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:69 LDA #0
    // Overlapping static entry reached from 0xC20862.
    case 0xC20864: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:70 STA __BSS_START__,X
    case 0xC20865: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:71 INX
    case 0xC20868: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:72 INX
    case 0xC20869: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:73 LDA @LOCAL00
    case 0xC2086A: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:74 DEC
    case 0xC2086C: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:75 STA @LOCAL00
    case 0xC2086D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:77 BNE @UNKNOWN3
    case 0xC2086F: {
        Instruction step(cpu, 0xD0, 0x0000F1u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:78 TXA
    case 0xC20871: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:79 CLC
    case 0xC20872: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:80 ADC #64 - HPPP_WINDOW_WIDTH * 2
    case 0xC20873: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000032u : 0x000032u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:80 ADC #64 - HPPP_WINDOW_WIDTH * 2
    // Overlapping static entry reached from 0xC208C5.
    case 0xC20874: {
        Instruction step(cpu, 0x32, 0x000000u, 2u, AddressMode::DirectPageIndirect);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:80 ADC #64 - HPPP_WINDOW_WIDTH * 2
    // Overlapping static entry reached from 0xC20873.
    case 0xC20875: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:81 TAX
    case 0xC20876: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:82 DEY
    case 0xC20877: {
        Instruction step(cpu, 0x88, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_y();
        return step.finish();
    }
    // src/text/hp_pp_window/undraw.asm:84 BNE @UNKNOWN2
    case 0xC20878: {
        Instruction step(cpu, 0xD0, 0x0000E1u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/hp_pp_window/undraw.asm:85 END_C_FUNCTION
    case 0xC2087A: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/hp_pp_window/undraw.asm:85 END_C_FUNCTION
    case 0xC2087B: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
