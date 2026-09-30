// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/hp_pp_window/fill_tile_buffer.asm
bool resume_text_hp_pp_window_fill_tile_buffer(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:3 BEGIN_C_FUNCTION
    case 0xC20C56: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:13 END_STACK_VARS
    case 0xC20C58: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:13 END_STACK_VARS
    case 0xC20C59: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:13 END_STACK_VARS
    case 0xC20C5A: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:13 END_STACK_VARS
    case 0xC20C5B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC20C5B.
    case 0xC20C5D: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:13 END_STACK_VARS
    case 0xC20C5E: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:13 END_STACK_VARS
    case 0xC20C5F: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:14 STX @VIRTUAL02
    case 0xC20C60: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:14 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC20C5D.
    case 0xC20C61: {
        Instruction step(cpu, 0x02, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:15 TAX
    case 0xC20C62: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:16 CPY #$3000
    case 0xC20C63: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000000u : 0x003000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:16 CPY #$3000
    // Overlapping static entry reached from 0xC20C63.
    case 0xC20C65: {
        Instruction step(cpu, 0x30, 0x0000B0u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:17 BCS @UNKNOWN0
    case 0xC20C66: {
        Instruction step(cpu, 0xB0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:17 BCS @UNKNOWN0
    // Overlapping static entry reached from 0xC20C65.
    case 0xC20C67: {
        Instruction step(cpu, 0x07, 0x0000A9u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:18 LDA #0
    case 0xC20C68: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:18 LDA #0
    // Overlapping static entry reached from 0xC20C67.
    case 0xC20C69: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:18 LDA #0
    // Overlapping static entry reached from 0xC20C68.
    case 0xC20C6A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:19 STA @LOCAL04
    case 0xC20C6B: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:20 BRA @UNKNOWN1
    case 0xC20C6D: {
        Instruction step(cpu, 0x80, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:22 TYA
    case 0xC20C6F: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:23 SEC
    case 0xC20C70: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:24 SBC #$3000
    case 0xC20C71: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000000u : 0x003000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:24 SBC #$3000
    // Overlapping static entry reached from 0xC20C71.
    case 0xC20C73: {
        Instruction step(cpu, 0x30, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:25 STA @LOCAL04
    case 0xC20C74: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:25 STA @LOCAL04
    // Overlapping static entry reached from 0xC20C73.
    case 0xC20C75: {
        Instruction step(cpu, 0x16, 0x0000A9u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    case 0xC20C76: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x003400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    // Overlapping static entry reached from 0xC20C75.
    case 0xC20C77: {
        Instruction step(cpu, 0x00, 0x000034u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    // Overlapping static entry reached from 0xC20C76.
    case 0xC20C78: {
        Instruction step(cpu, 0x34, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    case 0xC20C79: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    // Overlapping static entry reached from 0xC20C78.
    case 0xC20C7A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    case 0xC20C7B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    // Overlapping static entry reached from 0xC20C7B.
    case 0xC20C7D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    case 0xC20C7E: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:28 MOVE_INT1632 @LOCAL04, @VIRTUAL06
    case 0xC20C80: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:28 MOVE_INT1632 @LOCAL04, @VIRTUAL06
    case 0xC20C82: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:28 MOVE_INT1632 @LOCAL04, @VIRTUAL06
    case 0xC20C84: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:29 JSL DIVISION32
    case 0xC20C86: {
        Instruction step(cpu, 0x22, 0xC090E1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:30 LDA @VIRTUAL06
    case 0xC20C8A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:31 TAY
    case 0xC20C8C: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:32 LDA @VIRTUAL02
    case 0xC20C8D: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:33 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC20C8F: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:33 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC20C91: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:33 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC20C92: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:33 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC20C94: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:33 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC20C95: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:34 STA @VIRTUAL02
    case 0xC20C96: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:35 TXA
    case 0xC20C98: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:36 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20C99: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:36 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20C9B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:36 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20C9C: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:36 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20C9E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:36 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20C9F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:36 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20CA0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:37 CLC
    case 0xC20CA1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:38 ADC @VIRTUAL02
    case 0xC20CA2: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:39 CLC
    case 0xC20CA4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:40 ADC #.LOWORD(HPPP_WINDOW_BUFFER) + .SIZEOF(hp_pp_window_buffer::hp1) - (1 * 2)
    case 0xC20CA5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ABu : 0x008CABu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:40 ADC #.LOWORD(HPPP_WINDOW_BUFFER) + .SIZEOF(hp_pp_window_buffer::hp1) - (1 * 2)
    // Overlapping static entry reached from 0xC20CA5.
    case 0xC20CA7: {
        Instruction step(cpu, 0x8C, 0x00ADAAu, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:41 TAX
    case 0xC20CA8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:42 LDA HPPP_WINDOW_DIGIT_BUFFER + 2
    case 0xC20CA9: {
        Instruction step(cpu, 0xAD, 0x008CA6u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:42 LDA HPPP_WINDOW_DIGIT_BUFFER + 2
    // Overlapping static entry reached from 0xC20CA7.
    case 0xC20CAA: {
        Instruction step(cpu, 0xA6, 0x00008Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:43 AND #$00FF
    case 0xC20CAC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC20CAC.
    case 0xC20CAE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:44 STA @LOCAL03
    case 0xC20CAF: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:45 LDA HPPP_WINDOW_DIGIT_BUFFER + 1
    case 0xC20CB1: {
        Instruction step(cpu, 0xAD, 0x008CA5u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:46 AND #$00FF
    case 0xC20CB4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC20CB4.
    case 0xC20CB6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:47 STA @VIRTUAL04
    case 0xC20CB7: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:48 LDA HPPP_WINDOW_DIGIT_BUFFER
    case 0xC20CB9: {
        Instruction step(cpu, 0xAD, 0x008CA4u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:49 AND #$00FF
    case 0xC20CBC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC20CBC.
    case 0xC20CBE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:50 STA @LOCAL02
    case 0xC20CBF: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:51 LDA @LOCAL03
    case 0xC20CC1: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:52 LSR
    case 0xC20CC3: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:53 LSR
    case 0xC20CC4: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:54 ASL
    case 0xC20CC5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:55 ASL
    case 0xC20CC6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:56 ASL
    case 0xC20CC7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:57 ASL
    case 0xC20CC8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:58 STA @VIRTUAL02
    case 0xC20CC9: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:59 LDA @LOCAL03
    case 0xC20CCB: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:60 ASL
    case 0xC20CCD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:61 ASL
    case 0xC20CCE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:62 CLC
    case 0xC20CCF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:63 ADC @VIRTUAL02
    case 0xC20CD0: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:64 STY @VIRTUAL02
    case 0xC20CD2: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:65 CLC
    case 0xC20CD4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:66 ADC @VIRTUAL02
    case 0xC20CD5: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:67 CLC
    case 0xC20CD7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:68 ADC #$2600
    case 0xC20CD8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x002600u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:68 ADC #$2600
    // Overlapping static entry reached from 0xC20CD8.
    case 0xC20CDA: {
        Instruction step(cpu, 0x26, 0x000085u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:69 STA @VIRTUAL02
    case 0xC20CDB: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:69 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC20CDA.
    case 0xC20CDC: {
        Instruction step(cpu, 0x02, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:70 STA __BSS_START__ + hp_pp_window_buffer::hp1,X
    case 0xC20CDD: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:71 LDA @VIRTUAL02
    case 0xC20CE0: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:72 CLC
    case 0xC20CE2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:73 ADC #$0010
    case 0xC20CE3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:73 ADC #$0010
    // Overlapping static entry reached from 0xC20CE3.
    case 0xC20CE5: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:74 STA __BSS_START__ + hp_pp_window_buffer::hp2,X
    case 0xC20CE6: {
        Instruction step(cpu, 0x9D, 0x000006u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:75 TXA
    case 0xC20CE9: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:76 DEC
    case 0xC20CEA: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:77 DEC
    case 0xC20CEB: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:78 STA @VIRTUAL02
    case 0xC20CEC: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:79 STA @LOCAL01
    case 0xC20CEE: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:80 LDA @VIRTUAL04
    case 0xC20CF0: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:81 BNE @UNKNOWN2
    case 0xC20CF2: {
        Instruction step(cpu, 0xD0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:82 LDA @LOCAL02
    case 0xC20CF4: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:83 BNE @UNKNOWN2
    case 0xC20CF6: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:84 LDX #$0248
    case 0xC20CF8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000048u : 0x000248u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:84 LDX #$0248
    // Overlapping static entry reached from 0xC20CF8.
    case 0xC20CFA: {
        Instruction step(cpu, 0x02, 0x000080u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:85 BRA @UNKNOWN3
    case 0xC20CFB: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:87 LDX #$0200
    case 0xC20CFD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:87 LDX #$0200
    // Overlapping static entry reached from 0xC20CFD.
    case 0xC20CFF: {
        Instruction step(cpu, 0x02, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:89 LDA @LOCAL03
    case 0xC20D00: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:90 CMP #9
    case 0xC20D02: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:90 CMP #9
    // Overlapping static entry reached from 0xC20D02.
    case 0xC20D04: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:91 BNE @UNKNOWN4
    case 0xC20D05: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:92 CPY #0
    case 0xC20D07: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:92 CPY #0
    // Overlapping static entry reached from 0xC20D07.
    case 0xC20D09: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:93 BNE @UNKNOWN5
    case 0xC20D0A: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:95 LDY #0
    case 0xC20D0C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:95 LDY #0
    // Overlapping static entry reached from 0xC20D0C.
    case 0xC20D0E: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:97 LDA @VIRTUAL04
    case 0xC20D0F: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:98 LSR
    case 0xC20D11: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:99 LSR
    case 0xC20D12: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:100 ASL
    case 0xC20D13: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:101 ASL
    case 0xC20D14: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:102 ASL
    case 0xC20D15: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:103 ASL
    case 0xC20D16: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:104 STA @VIRTUAL02
    case 0xC20D17: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:105 LDA @VIRTUAL04
    case 0xC20D19: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:106 ASL
    case 0xC20D1B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:107 ASL
    case 0xC20D1C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:108 CLC
    case 0xC20D1D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:109 ADC @VIRTUAL02
    case 0xC20D1E: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:110 STY @VIRTUAL02
    case 0xC20D20: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:111 CLC
    case 0xC20D22: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:112 ADC @VIRTUAL02
    case 0xC20D23: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:113 STX @VIRTUAL02
    case 0xC20D25: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:114 CLC
    case 0xC20D27: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:115 ADC @VIRTUAL02
    case 0xC20D28: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:116 CLC
    case 0xC20D2A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:117 ADC #$2400
    case 0xC20D2B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x002400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:117 ADC #$2400
    // Overlapping static entry reached from 0xC20D2B.
    case 0xC20D2D: {
        Instruction step(cpu, 0x24, 0x0000A6u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:118 LDX @LOCAL01
    case 0xC20D2E: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:118 LDX @LOCAL01
    // Overlapping static entry reached from 0xC20D2D.
    case 0xC20D2F: {
        Instruction step(cpu, 0x10, 0x000086u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:119 STX @VIRTUAL02
    case 0xC20D30: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:119 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC20D2F.
    case 0xC20D31: {
        Instruction step(cpu, 0x02, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:120 STA __BSS_START__,X
    case 0xC20D32: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:121 CLC
    case 0xC20D35: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:122 ADC #$0010
    case 0xC20D36: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:122 ADC #$0010
    // Overlapping static entry reached from 0xC20D36.
    case 0xC20D38: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:123 LDX @VIRTUAL02
    case 0xC20D39: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:124 STA __BSS_START__ + hp_pp_window_buffer::hp2,X
    case 0xC20D3B: {
        Instruction step(cpu, 0x9D, 0x000006u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:125 LDA @VIRTUAL02
    case 0xC20D3E: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:126 DEC
    case 0xC20D40: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:127 DEC
    case 0xC20D41: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:128 STA @LOCAL00
    case 0xC20D42: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:129 LDA @LOCAL02
    case 0xC20D44: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:130 BNE @UNKNOWN6
    case 0xC20D46: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:131 LDX #$0248
    case 0xC20D48: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000048u : 0x000248u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:131 LDX #$0248
    // Overlapping static entry reached from 0xC20D48.
    case 0xC20D4A: {
        Instruction step(cpu, 0x02, 0x000080u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:132 BRA @UNKNOWN7
    case 0xC20D4B: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:134 LDX #$0200
    case 0xC20D4D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:134 LDX #$0200
    // Overlapping static entry reached from 0xC20D4D.
    case 0xC20D4F: {
        Instruction step(cpu, 0x02, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:136 LDA @VIRTUAL04
    case 0xC20D50: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:137 CMP #9
    case 0xC20D52: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:137 CMP #9
    // Overlapping static entry reached from 0xC20D52.
    case 0xC20D54: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:138 BNE @UNKNOWN8
    case 0xC20D55: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:139 CPY #0
    case 0xC20D57: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:139 CPY #0
    // Overlapping static entry reached from 0xC20D57.
    case 0xC20D59: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:140 BNE @UNKNOWN9
    case 0xC20D5A: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:142 LDY #0
    case 0xC20D5C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:142 LDY #0
    // Overlapping static entry reached from 0xC20D5C.
    case 0xC20D5E: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:144 STY @VIRTUAL04
    case 0xC20D5F: {
        Instruction step(cpu, 0x84, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:145 LDA @LOCAL02
    case 0xC20D61: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:146 LSR
    case 0xC20D63: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:147 LSR
    case 0xC20D64: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:148 ASL
    case 0xC20D65: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:149 ASL
    case 0xC20D66: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:150 ASL
    case 0xC20D67: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:151 ASL
    case 0xC20D68: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:152 STA @VIRTUAL02
    case 0xC20D69: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:153 LDA @LOCAL02
    case 0xC20D6B: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:154 ASL
    case 0xC20D6D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:155 ASL
    case 0xC20D6E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:156 CLC
    case 0xC20D6F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:157 ADC @VIRTUAL02
    case 0xC20D70: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:158 CLC
    case 0xC20D72: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:159 ADC @VIRTUAL04
    case 0xC20D73: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:160 STX @VIRTUAL02
    case 0xC20D75: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:161 CLC
    case 0xC20D77: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:162 ADC @VIRTUAL02
    case 0xC20D78: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:163 CLC
    case 0xC20D7A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:164 ADC #$2400
    case 0xC20D7B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x002400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:164 ADC #$2400
    // Overlapping static entry reached from 0xC20D7B.
    case 0xC20D7D: {
        Instruction step(cpu, 0x24, 0x0000AAu, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:165 TAX
    case 0xC20D7E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:166 STX @LOCAL02
    case 0xC20D7F: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:167 PHX
    case 0xC20D81: {
        Instruction step(cpu, 0xDA, 0x000000u, 1u, AddressMode::Implied);
        step.push_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:168 LDA @LOCAL00
    case 0xC20D82: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:169 TAX
    case 0xC20D84: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:170 PLA
    case 0xC20D85: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:171 STA __BSS_START__ + hp_pp_window_buffer::hp1,X
    case 0xC20D86: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:172 LDA @LOCAL00
    case 0xC20D89: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:173 PHA
    case 0xC20D8B: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:174 LDX @LOCAL02
    case 0xC20D8C: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:175 TXA
    case 0xC20D8E: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:176 CLC
    case 0xC20D8F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:177 ADC #$0010
    case 0xC20D90: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:177 ADC #$0010
    // Overlapping static entry reached from 0xC20D90.
    case 0xC20D92: {
        Instruction step(cpu, 0x00, 0x0000FAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:178 PLX
    case 0xC20D93: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:179 STA __BSS_START__ + hp_pp_window_buffer::hp2,X
    case 0xC20D94: {
        Instruction step(cpu, 0x9D, 0x000006u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:180 END_C_FUNCTION
    case 0xC20D97: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:180 END_C_FUNCTION
    case 0xC20D98: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
