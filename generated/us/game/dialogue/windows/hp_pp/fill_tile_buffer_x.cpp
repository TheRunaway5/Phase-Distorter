// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/hp_pp_window/fill_tile_buffer_x.asm
bool resume_text_hp_pp_window_fill_tile_buffer_x(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:3 BEGIN_C_FUNCTION
    case 0xC20D89: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:7 END_STACK_VARS
    case 0xC20D8B: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:7 END_STACK_VARS
    case 0xC20D8C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:7 END_STACK_VARS
    case 0xC20D8D: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:7 END_STACK_VARS
    case 0xC20D8E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC20D8E.
    case 0xC20D90: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:7 END_STACK_VARS
    case 0xC20D91: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:7 END_STACK_VARS
    case 0xC20D92: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:8 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20D93: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:8 OPTIMIZED_MULT @VIRTUAL04, 24
    // Overlapping static entry reached from 0xC20D90.
    case 0xC20D94: {
        Instruction step(cpu, 0x04, 0x00000Au, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:8 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20D95: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:8 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20D96: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:8 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20D98: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:8 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20D99: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:8 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20D9A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:9 CLC
    case 0xC20D9B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:10 ADC #.LOWORD(HPPP_WINDOW_BUFFER) + 12
    case 0xC20D9C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000075u : 0x008975u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:10 ADC #.LOWORD(HPPP_WINDOW_BUFFER) + 12
    // Overlapping static entry reached from 0xC20D9C.
    case 0xC20D9E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x0000AAu : 0x00A9AAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:11 TAX
    case 0xC20D9F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:12 LDA #0
    case 0xC20DA0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:12 LDA #0
    // Overlapping static entry reached from 0xC20D9E.
    case 0xC20DA1: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:12 LDA #0
    // Overlapping static entry reached from 0xC20DA0.
    case 0xC20DA2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:13 STA @LOCAL00
    case 0xC20DA3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:14 BRA @UNKNOWN1
    case 0xC20DA5: {
        Instruction step(cpu, 0x80, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:16 CLC
    case 0xC20DA7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:17 ADC #$264C ;tile ids for top of X
    case 0xC20DA8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Cu : 0x00264Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:17 ADC #$264C ;tile ids for top of X
    // Overlapping static entry reached from 0xC2B633.
    case 0xC20DA9: {
        Instruction step(cpu, 0x4C, 0x009D26u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:17 ADC #$264C ;tile ids for top of X
    // Overlapping static entry reached from 0xC20DA8.
    case 0xC20DAA: {
        Instruction step(cpu, 0x26, 0x00009Du, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:18 STA __BSS_START__,X
    case 0xC20DAB: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:18 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC20DAA.
    case 0xC20DAC: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:19 LDA @LOCAL00
    case 0xC20DAE: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:20 CLC
    case 0xC20DB0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:21 ADC #$265C ;tile ids for bottom of X
    case 0xC20DB1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00005Cu : 0x00265Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:21 ADC #$265C ;tile ids for bottom of X
    // Overlapping static entry reached from 0xC20DB1.
    case 0xC20DB3: {
        Instruction step(cpu, 0x26, 0x00009Du, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:22 STA __BSS_START__+6,X
    case 0xC20DB4: {
        Instruction step(cpu, 0x9D, 0x000006u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:22 STA __BSS_START__+6,X
    // Overlapping static entry reached from 0xC20DB3.
    case 0xC20DB5: {
        Instruction step(cpu, 0x06, 0x000000u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:23 LDA @LOCAL00
    case 0xC20DB7: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:24 INC
    case 0xC20DB9: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:25 STA @LOCAL00
    case 0xC20DBA: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:26 INX
    case 0xC20DBC: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:27 INX
    case 0xC20DBD: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:29 CMP #3
    case 0xC20DBE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:29 CMP #3
    // Overlapping static entry reached from 0xC20DBE.
    case 0xC20DC0: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:30 BCC @UNKNOWN0
    case 0xC20DC1: {
        Instruction step(cpu, 0x90, 0x0000E4u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:31 END_C_FUNCTION
    case 0xC20DC3: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:31 END_C_FUNCTION
    case 0xC20DC4: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
