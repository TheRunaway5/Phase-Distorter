// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/unknown/C4/C47F87-jp.asm
bool resume_unresolved_c4_c47f87_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C47F87-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC45C1A: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C47F87-jp.asm:6 END_STACK_VARS
    case 0xC45C1C: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C47F87-jp.asm:6 END_STACK_VARS
    case 0xC45C1D: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47F87-jp.asm:6 END_STACK_VARS
    case 0xC45C1E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C47F87-jp.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC45C1E.
    case 0xC45C20: {
        Instruction step(cpu, 0xFF, 0x55AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C47F87-jp.asm:6 END_STACK_VARS
    case 0xC45C21: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:7 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC45C22: {
        Instruction step(cpu, 0xAD, 0x009B55u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:7 LDA GAME_STATE+game_state::player_controlled_party_count
    // Overlapping static entry reached from 0xC45C20.
    case 0xC45C24: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:8 AND #$00FF
    case 0xC45C25: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:8 AND #$00FF
    // Overlapping static entry reached from 0xC45C25.
    case 0xC45C27: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:9 DEC
    case 0xC45C28: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:10 CLC
    case 0xC45C29: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:11 ADC #.LOWORD(GAME_STATE)
    case 0xC45C2A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:11 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC45C2A.
    case 0xC45C2C: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:12 TAX
    case 0xC45C2D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:13 LDA a:game_state::player_controlled_party_members,X
    case 0xC45C2E: {
        Instruction step(cpu, 0xBD, 0x000099u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:14 AND #$00FF
    case 0xC45C31: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC45C31.
    case 0xC45C33: {
        Instruction step(cpu, 0x00, 0x00000Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:15 ASL
    case 0xC45C34: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:16 TAX
    case 0xC45C35: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:17 LDA CHOSEN_FOUR_PTRS,X
    case 0xC45C36: {
        Instruction step(cpu, 0xBD, 0x00514Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:18 TAX
    case 0xC45C39: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:19 LDA a:char_struct::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC45C3A: {
        Instruction step(cpu, 0xBD, 0x00000Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:20 AND #$00FF
    case 0xC45C3D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC45C3D.
    case 0xC45C3F: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:21 TAX
    case 0xC45C40: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:22 CPX #STATUS_0::UNCONSCIOUS
    case 0xC45C41: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:22 CPX #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC45C41.
    case 0xC45C43: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:23 BEQ @UNKNOWN0
    case 0xC45C44: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:24 CPX #STATUS_0::DIAMONDIZED
    case 0xC45C46: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:24 CPX #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC45C46.
    case 0xC45C48: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:25 BNE @UNKNOWN1
    case 0xC45C49: {
        Instruction step(cpu, 0xD0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:27 LDA DISABLED_TRANSITIONS
    case 0xC45C4B: {
        Instruction step(cpu, 0xAD, 0x00B68Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:28 BNE @UNKNOWN1
    case 0xC45C4E: {
        Instruction step(cpu, 0xD0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47F87-jp.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES+320, @LOCAL00
    case 0xC45C50: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00005Du : 0x00205Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47F87-jp.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES+320, @LOCAL00
    // Overlapping static entry reached from 0xC45C50.
    case 0xC45C52: {
        Instruction step(cpu, 0x20, 0x000E85u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47F87-jp.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES+320, @LOCAL00
    case 0xC45C53: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47F87-jp.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES+320, @LOCAL00
    case 0xC45C55: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E0u : 0x0000E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47F87-jp.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES+320, @LOCAL00
    // Overlapping static entry reached from 0xC45C55.
    case 0xC45C57: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47F87-jp.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES+320, @LOCAL00
    case 0xC45C58: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:30 LDX #BPP4PALETTE_SIZE * 2
    case 0xC45C5A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:30 LDX #BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC45C5A.
    case 0xC45C5C: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:31 LDA #.LOWORD(PALETTES)
    case 0xC45C5D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:31 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC45C5D.
    case 0xC45C5F: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:32 JSL MEMCPY16
    case 0xC45C60: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:33 BRA @UNKNOWN2
    case 0xC45C64: {
        Instruction step(cpu, 0x80, 0x000030u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47F87-jp.asm:35 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC45C66: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Du : 0x001F1Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C47F87-jp.asm:35 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC45C66.
    case 0xC45C68: {
        Instruction step(cpu, 0x1F, 0xA90685u, 4u, AddressMode::LongIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C47F87-jp.asm:35 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC45C69: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47F87-jp.asm:35 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC45C6B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E0u : 0x0000E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47F87-jp.asm:35 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC45C68.
    case 0xC45C6C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C47F87-jp.asm:35 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC45C6B.
    case 0xC45C6D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47F87-jp.asm:35 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC45C6E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C47F87-jp.asm:35 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC45C6C.
    case 0xC45C6F: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:36 LDA GAME_STATE+game_state::text_flavour
    case 0xC45C70: {
        Instruction step(cpu, 0xAD, 0x009C7Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:37 AND #$00FF
    case 0xC45C73: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC45C73.
    case 0xC45C75: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:38 DEC
    case 0xC45C76: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C4/C47F87-jp.asm:39 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC45C77: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C4/C47F87-jp.asm:39 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC45C79: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C4/C47F87-jp.asm:39 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC45C7A: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:40 TAX
    case 0xC45C7C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:41 LDA f:TEXT_WINDOW_PROPERTIES,X
    case 0xC45C7D: {
        Instruction step(cpu, 0xBF, 0xE01F0Eu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:42 CLC
    case 0xC45C81: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:43 ADC @VIRTUAL06
    case 0xC45C82: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:44 STA @VIRTUAL06
    case 0xC45C84: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:45 STA @LOCAL00
    case 0xC45C86: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:46 LDA @VIRTUAL06+2
    case 0xC45C88: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:47 STA @LOCAL00+2
    case 0xC45C8A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:48 LDX #BPP4PALETTE_SIZE * 2
    case 0xC45C8C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:48 LDX #BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC45C8C.
    case 0xC45C8E: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:49 LDA #.LOWORD(PALETTES)
    case 0xC45C8F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:49 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC45C8F.
    case 0xC45C91: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:50 JSL MEMCPY16
    case 0xC45C92: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:52 STZ PALETTES
    case 0xC45C96: {
        Instruction step(cpu, 0x9C, 0x000200u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:53 LDA #8
    case 0xC45C99: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:53 LDA #8
    // Overlapping static entry reached from 0xC45C99.
    case 0xC45C9B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C4/C47F87-jp.asm:54 JSL UNKNOWN_C0856B
    case 0xC45C9C: {
        Instruction step(cpu, 0x22, 0xC0856Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C47F87-jp.asm:55 END_C_FUNCTION
    case 0xC45CA0: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C47F87-jp.asm:55 END_C_FUNCTION
    case 0xC45CA1: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
