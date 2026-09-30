// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C3/C3E450.asm
bool resume_unresolved_c3_c3e450(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C3/C3E450.asm:6 BEGIN_C_FUNCTION_FAR
    case 0xC3E450: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C3/C3E450.asm:10 END_STACK_VARS
    case 0xC3E452: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C3/C3E450.asm:10 END_STACK_VARS
    case 0xC3E453: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3E450.asm:10 END_STACK_VARS
    case 0xC3E454: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C3/C3E450.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC3E454.
    case 0xC3E456: {
        Instruction step(cpu, 0xFF, 0x02AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C3/C3E450.asm:10 END_STACK_VARS
    case 0xC3E457: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:11 LDA FRAME_COUNTER
    case 0xC3E458: {
        Instruction step(cpu, 0xAD, 0x000002u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:11 LDA FRAME_COUNTER
    // Overlapping static entry reached from 0xC3E456.
    case 0xC3E45A: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:12 AND #$00FF
    case 0xC3E45B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC3E45B.
    case 0xC3E45D: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:13 AND #$0004
    case 0xC3E45E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:13 AND #$0004
    // Overlapping static entry reached from 0xC3E45E.
    case 0xC3E460: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:14 BEQ @UNKNOWN0
    case 0xC3E461: {
        Instruction step(cpu, 0xF0, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC3E463: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x001FC8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC3E463.
    case 0xC3E465: {
        Instruction step(cpu, 0x1F, 0xA90685u, 4u, AddressMode::LongIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC3E466: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC3E468: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E0u : 0x0000E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC3E465.
    case 0xC3E469: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC3E468.
    case 0xC3E46A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC3E46B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C3/C3E450.asm:15 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC3E469.
    case 0xC3E46C: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:16 LDA GAME_STATE+game_state::text_flavour
    case 0xC3E46D: {
        Instruction step(cpu, 0xAD, 0x0099CDu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:17 AND #$00FF
    case 0xC3E470: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC3E470.
    case 0xC3E472: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:18 DEC
    case 0xC3E473: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C3/C3E450.asm:19 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC3E474: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C3/C3E450.asm:19 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC3E476: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C3/C3E450.asm:19 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC3E477: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:20 TAX
    case 0xC3E479: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:21 LDA f:TEXT_WINDOW_PROPERTIES,X
    case 0xC3E47A: {
        Instruction step(cpu, 0xBF, 0xE01FB9u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:22 CLC
    case 0xC3E47E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:23 ADC #8
    case 0xC3E47F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:23 ADC #8
    // Overlapping static entry reached from 0xC3E47F.
    case 0xC3E481: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:24 CLC
    case 0xC3E482: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:25 ADC @VIRTUAL06
    case 0xC3E483: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:26 STA @VIRTUAL06
    case 0xC3E485: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:27 BRA @UNKNOWN1
    case 0xC3E487: {
        Instruction step(cpu, 0x80, 0x000024u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC3E489: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x001FC8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC3E489.
    case 0xC3E48B: {
        Instruction step(cpu, 0x1F, 0xA90685u, 4u, AddressMode::LongIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC3E48C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC3E48E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E0u : 0x0000E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC3E48B.
    case 0xC3E48F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x008500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC3E48E.
    case 0xC3E490: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    case 0xC3E491: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C3/C3E450.asm:29 LOADPTR TEXT_WINDOW_FLAVOUR_PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC3E48F.
    case 0xC3E492: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:30 LDA GAME_STATE+game_state::text_flavour
    case 0xC3E493: {
        Instruction step(cpu, 0xAD, 0x0099CDu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:31 AND #$00FF
    case 0xC3E496: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC3E496.
    case 0xC3E498: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:32 DEC
    case 0xC3E499: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C3/C3E450.asm:33 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC3E49A: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C3/C3E450.asm:33 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC3E49C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C3/C3E450.asm:33 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC3E49D: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:34 TAX
    case 0xC3E49F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:35 LDA f:TEXT_WINDOW_PROPERTIES,X
    case 0xC3E4A0: {
        Instruction step(cpu, 0xBF, 0xE01FB9u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:36 CLC
    case 0xC3E4A4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:37 ADC #40
    case 0xC3E4A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000028u : 0x000028u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:37 ADC #40
    // Overlapping static entry reached from 0xC3E4A5.
    case 0xC3E4A7: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:38 CLC
    case 0xC3E4A8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:39 ADC @VIRTUAL06
    case 0xC3E4A9: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:40 STA @VIRTUAL06
    case 0xC3E4AB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C3/C3E450.asm:42 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC3E4AD: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C3/C3E450.asm:42 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC3E4AF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C3/C3E450.asm:42 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC3E4B1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C3/C3E450.asm:42 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC3E4B3: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:43 LDX #BPP2PALETTE_SIZE
    case 0xC3E4B5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:43 LDX #BPP2PALETTE_SIZE
    // Overlapping static entry reached from 0xC3E4B5.
    case 0xC3E4B7: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:44 LDA #.LOWORD(PALETTES) + BPP2PALETTE_SIZE * 5
    case 0xC3E4B8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000028u : 0x000228u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:44 LDA #.LOWORD(PALETTES) + BPP2PALETTE_SIZE * 5
    // Overlapping static entry reached from 0xC3E4B8.
    case 0xC3E4BA: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:45 JSL MEMCPY16
    case 0xC3E4BB: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:46 SEP #PROC_FLAGS::ACCUM8
    case 0xC3E4BF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:47 LDA #PALETTE_UPLOAD::FULL
    case 0xC3E4C1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x008D18u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:48 STA PALETTE_UPLOAD_MODE
    case 0xC3E4C3: {
        Instruction step(cpu, 0x8D, 0x000030u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:48 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC3E4C1.
    case 0xC3E4C4: {
        Instruction step(cpu, 0x30, 0x000000u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/unknown/C3/C3E450.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xC3E4C6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C3/C3E450.asm:50 END_C_FUNCTION
    case 0xC3E4C8: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C3/C3E450.asm:50 END_C_FUNCTION
    case 0xC3E4C9: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
