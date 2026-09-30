// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C4/C47F87.asm
bool resume_unresolved_c4_c47f87(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47F87.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC47F87: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C47F87.asm:6 END_STACK_VARS
    case 0xC47F89: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C47F87.asm:6 END_STACK_VARS
    case 0xC47F8A: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47F87.asm:6 END_STACK_VARS
    case 0xC47F8B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47F87.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC47F8B.
    case 0xC47F8D: {
        Instruction step(cpu, 0xFF, 0xA4AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C47F87.asm:6 END_STACK_VARS
    case 0xC47F8E: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:7 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC47F8F: {
        Instruction step(cpu, 0xAD, 0x0098A4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:7 LDA GAME_STATE+game_state::player_controlled_party_count
    // Overlapping static entry reached from 0xC47F8D.
    case 0xC47F91: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:8 AND #$00FF
    case 0xC47F92: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC47F92.
    case 0xC47F94: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:9 TAX
    case 0xC47F95: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:10 DEX
    case 0xC47F96: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:11 LDA GAME_STATE+game_state::player_controlled_party_members,X
    case 0xC47F97: {
        Instruction step(cpu, 0xBD, 0x009891u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:12 AND #$00FF
    case 0xC47F9A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC47F9A.
    case 0xC47F9C: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:13 ASL
    case 0xC47F9D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:14 TAX
    case 0xC47F9E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:15 LDA CHOSEN_FOUR_PTRS,X
    case 0xC47F9F: {
        Instruction step(cpu, 0xBD, 0x004DC8u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:16 TAX
    case 0xC47FA2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:17 LDA a:char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC47FA3: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:18 AND #$00FF
    case 0xC47FA6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC47FA6.
    case 0xC47FA8: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:19 TAX
    case 0xC47FA9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:20 CPX #STATUS_0::UNCONSCIOUS
    case 0xC47FAA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:20 CPX #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC47FAA.
    case 0xC47FAC: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:21 BEQ @UNKNOWN0
    case 0xC47FAD: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:22 CPX #STATUS_0::DIAMONDIZED
    case 0xC47FAF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:22 CPX #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC47FAF.
    case 0xC47FB1: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:23 BNE @UNKNOWN1
    case 0xC47FB2: {
        Instruction step(cpu, 0xD0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:25 LDA DISABLED_TRANSITIONS
    case 0xC47FB4: {
        Instruction step(cpu, 0xAD, 0x00B4B6u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:26 BNE @UNKNOWN1
    case 0xC47FB7: {
        Instruction step(cpu, 0xD0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47F87.asm:27 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES+320, @LOCAL00
    case 0xC47FB9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x002108u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47F87.asm:27 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES+320, @LOCAL00
    // Overlapping static entry reached from 0xC47FB9.
    case 0xC47FBB: {
        Instruction step(cpu, 0x21, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47F87.asm:27 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES+320, @LOCAL00
    case 0xC47FBC: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47F87.asm:27 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES+320, @LOCAL00
    // Overlapping static entry reached from 0xC47FBB.
    case 0xC47FBD: {
        Instruction step(cpu, 0x0E, 0x00E0A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47F87.asm:27 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES+320, @LOCAL00
    case 0xC47FBE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E0u : 0x0000E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47F87.asm:27 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES+320, @LOCAL00
    // Overlapping static entry reached from 0xC47FBE.
    case 0xC47FC0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47F87.asm:27 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES+320, @LOCAL00
    case 0xC47FC1: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:28 LDX #BPP4PALETTE_SIZE * 2
    case 0xC47FC3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:28 LDX #BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC47FC3.
    case 0xC47FC5: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:29 LDA #.LOWORD(PALETTES)
    case 0xC47FC6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:29 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC47FC6.
    case 0xC47FC8: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:30 JSL MEMCPY16
    case 0xC47FC9: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:31 BRA @UNKNOWN2
    case 0xC47FCD: {
        Instruction step(cpu, 0x80, 0x000030u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47F87.asm:33 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC47FCF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x001FC8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47F87.asm:33 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC47FCF.
    case 0xC47FD1: {
        Instruction step(cpu, 0x1F, 0xA90685u, 4u, AddressMode::LongIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47F87.asm:33 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC47FD2: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47F87.asm:33 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC47FD4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E0u : 0x0000E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47F87.asm:33 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC47FD1.
    case 0xC47FD5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47F87.asm:33 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC47FD4.
    case 0xC47FD6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47F87.asm:33 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC47FD7: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47F87.asm:33 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC47FD5.
    case 0xC47FD8: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:34 LDA GAME_STATE+game_state::text_flavour
    case 0xC47FD9: {
        Instruction step(cpu, 0xAD, 0x0099CDu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:35 AND #$00FF
    case 0xC47FDC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC47FDC.
    case 0xC47FDE: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:36 DEC
    case 0xC47FDF: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C4/C47F87.asm:37 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC47FE0: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C4/C47F87.asm:37 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC47FE2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C4/C47F87.asm:37 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC47FE3: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:38 TAX
    case 0xC47FE5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:39 LDA f:TEXT_WINDOW_PROPERTIES,X
    case 0xC47FE6: {
        Instruction step(cpu, 0xBF, 0xE01FB9u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:40 CLC
    case 0xC47FEA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:41 ADC @VIRTUAL06
    case 0xC47FEB: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:42 STA @VIRTUAL06
    case 0xC47FED: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:43 STA @LOCAL00
    case 0xC47FEF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:44 LDA @VIRTUAL06+2
    case 0xC47FF1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:45 STA @LOCAL00+2
    case 0xC47FF3: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:46 LDX #BPP4PALETTE_SIZE * 2
    case 0xC47FF5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:46 LDX #BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC47FF5.
    case 0xC47FF7: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:47 LDA #.LOWORD(PALETTES)
    case 0xC47FF8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:47 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC47FF8.
    case 0xC47FFA: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:48 JSL MEMCPY16
    case 0xC47FFB: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:50 STZ PALETTES
    case 0xC47FFF: {
        Instruction step(cpu, 0x9C, 0x000200u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:51 LDA #8
    case 0xC48002: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:51 LDA #8
    // Overlapping static entry reached from 0xC48002.
    case 0xC48004: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C47F87.asm:52 JSL UNKNOWN_C0856B
    case 0xC48005: {
        Instruction step(cpu, 0x22, 0xC0856Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C47F87.asm:53 END_C_FUNCTION
    case 0xC48009: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47F87.asm:53 END_C_FUNCTION
    case 0xC4800A: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
