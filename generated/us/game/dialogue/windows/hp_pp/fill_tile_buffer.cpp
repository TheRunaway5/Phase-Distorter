// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/hp_pp_window/fill_tile_buffer.asm
bool resume_text_hp_pp_window_fill_tile_buffer(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:3 BEGIN_C_FUNCTION
    case 0xC20DC5: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:13 END_STACK_VARS
    case 0xC20DC7: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:13 END_STACK_VARS
    case 0xC20DC8: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:13 END_STACK_VARS
    case 0xC20DC9: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:13 END_STACK_VARS
    case 0xC20DCA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC20DCA.
    case 0xC20DCC: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:13 END_STACK_VARS
    case 0xC20DCD: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:13 END_STACK_VARS
    case 0xC20DCE: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:14 STX @VIRTUAL02
    case 0xC20DCF: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:14 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC20DCC.
    case 0xC20DD0: {
        Instruction step(cpu, 0x02, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:15 TAX
    case 0xC20DD1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:16 CPY #$3000
    case 0xC20DD2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000000u : 0x003000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:16 CPY #$3000
    // Overlapping static entry reached from 0xC20DD2.
    case 0xC20DD4: {
        Instruction step(cpu, 0x30, 0x0000B0u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:17 BCS @UNKNOWN0
    case 0xC20DD5: {
        Instruction step(cpu, 0xB0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:17 BCS @UNKNOWN0
    // Overlapping static entry reached from 0xC20DD4.
    case 0xC20DD6: {
        Instruction step(cpu, 0x07, 0x0000A9u, 2u, AddressMode::DirectPageIndirectLong);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:18 LDA #0
    case 0xC20DD7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:18 LDA #0
    // Overlapping static entry reached from 0xC20DD6.
    case 0xC20DD8: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:18 LDA #0
    // Overlapping static entry reached from 0xC20DD7.
    case 0xC20DD9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:19 STA @LOCAL04
    case 0xC20DDA: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:20 BRA @UNKNOWN1
    case 0xC20DDC: {
        Instruction step(cpu, 0x80, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:22 TYA
    case 0xC20DDE: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:23 SEC
    case 0xC20DDF: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:24 SBC #$3000
    case 0xC20DE0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000000u : 0x003000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:24 SBC #$3000
    // Overlapping static entry reached from 0xC20DE0.
    case 0xC20DE2: {
        Instruction step(cpu, 0x30, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:25 STA @LOCAL04
    case 0xC20DE3: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:25 STA @LOCAL04
    // Overlapping static entry reached from 0xC20DE2.
    case 0xC20DE4: {
        Instruction step(cpu, 0x16, 0x0000A9u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    case 0xC20DE5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x003400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    // Overlapping static entry reached from 0xC20DE4.
    case 0xC20DE6: {
        Instruction step(cpu, 0x00, 0x000034u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    // Overlapping static entry reached from 0xC20DE5.
    case 0xC20DE7: {
        Instruction step(cpu, 0x34, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    case 0xC20DE8: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    // Overlapping static entry reached from 0xC20DE7.
    case 0xC20DE9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    case 0xC20DEA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    // Overlapping static entry reached from 0xC20DEA.
    case 0xC20DEC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    case 0xC20DED: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:28 MOVE_INT1632 @LOCAL04, @VIRTUAL06
    case 0xC20DEF: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:28 MOVE_INT1632 @LOCAL04, @VIRTUAL06
    case 0xC20DF1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:28 MOVE_INT1632 @LOCAL04, @VIRTUAL06
    case 0xC20DF3: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:29 JSL DIVISION32
    case 0xC20DF5: {
        Instruction step(cpu, 0x22, 0xC090FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:30 LDA @VIRTUAL06
    case 0xC20DF9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:31 TAY
    case 0xC20DFB: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:32 LDA @VIRTUAL02
    case 0xC20DFC: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:33 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC20DFE: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:33 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC20E00: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:33 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC20E01: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:33 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC20E03: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:33 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC20E04: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:34 STA @VIRTUAL02
    case 0xC20E05: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:35 TXA
    case 0xC20E07: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:36 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20E08: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:36 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20E0A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:36 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20E0B: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:36 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20E0D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:36 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20E0E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:36 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20E0F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:37 CLC
    case 0xC20E10: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:38 ADC @VIRTUAL02
    case 0xC20E11: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:39 CLC
    case 0xC20E13: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:40 ADC #.LOWORD(HPPP_WINDOW_BUFFER) + .SIZEOF(hp_pp_window_buffer::hp1) - (1 * 2)
    case 0xC20E14: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00006Du : 0x00896Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:40 ADC #.LOWORD(HPPP_WINDOW_BUFFER) + .SIZEOF(hp_pp_window_buffer::hp1) - (1 * 2)
    // Overlapping static entry reached from 0xC20E14.
    case 0xC20E16: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x0000AAu : 0x00ADAAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:41 TAX
    case 0xC20E17: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:42 LDA HPPP_WINDOW_DIGIT_BUFFER + 2
    case 0xC20E18: {
        Instruction step(cpu, 0xAD, 0x008968u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:42 LDA HPPP_WINDOW_DIGIT_BUFFER + 2
    // Overlapping static entry reached from 0xC20E16.
    case 0xC20E19: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:42 LDA HPPP_WINDOW_DIGIT_BUFFER + 2
    // Overlapping static entry reached from 0xC20E19.
    case 0xC20E1A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000029u : 0x00FF29u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:43 AND #$00FF
    case 0xC20E1B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC20E1A.
    case 0xC20E1C: {
        Instruction step(cpu, 0xFF, 0x148500u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC20E1B.
    case 0xC20E1D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:44 STA @LOCAL03
    case 0xC20E1E: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:45 LDA HPPP_WINDOW_DIGIT_BUFFER + 1
    case 0xC20E20: {
        Instruction step(cpu, 0xAD, 0x008967u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:46 AND #$00FF
    case 0xC20E23: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC20E23.
    case 0xC20E25: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:47 STA @VIRTUAL04
    case 0xC20E26: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:48 LDA HPPP_WINDOW_DIGIT_BUFFER
    case 0xC20E28: {
        Instruction step(cpu, 0xAD, 0x008966u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:49 AND #$00FF
    case 0xC20E2B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC20E2B.
    case 0xC20E2D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:50 STA @LOCAL02
    case 0xC20E2E: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:51 LDA @LOCAL03
    case 0xC20E30: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:52 LSR
    case 0xC20E32: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:53 LSR
    case 0xC20E33: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:54 ASL
    case 0xC20E34: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:55 ASL
    case 0xC20E35: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:56 ASL
    case 0xC20E36: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:57 ASL
    case 0xC20E37: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:58 STA @VIRTUAL02
    case 0xC20E38: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:59 LDA @LOCAL03
    case 0xC20E3A: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:60 ASL
    case 0xC20E3C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:61 ASL
    case 0xC20E3D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:62 CLC
    case 0xC20E3E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:63 ADC @VIRTUAL02
    case 0xC20E3F: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:64 STY @VIRTUAL02
    case 0xC20E41: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:65 CLC
    case 0xC20E43: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:66 ADC @VIRTUAL02
    case 0xC20E44: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:67 CLC
    case 0xC20E46: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:68 ADC #$2600
    case 0xC20E47: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x002600u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:68 ADC #$2600
    // Overlapping static entry reached from 0xC20E47.
    case 0xC20E49: {
        Instruction step(cpu, 0x26, 0x000085u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:69 STA @VIRTUAL02
    case 0xC20E4A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:69 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC20E49.
    case 0xC20E4B: {
        Instruction step(cpu, 0x02, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:70 STA __BSS_START__ + hp_pp_window_buffer::hp1,X
    case 0xC20E4C: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:71 LDA @VIRTUAL02
    case 0xC20E4F: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:72 CLC
    case 0xC20E51: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:73 ADC #$0010
    case 0xC20E52: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:73 ADC #$0010
    // Overlapping static entry reached from 0xC20E52.
    case 0xC20E54: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:74 STA __BSS_START__ + hp_pp_window_buffer::hp2,X
    case 0xC20E55: {
        Instruction step(cpu, 0x9D, 0x000006u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:75 TXA
    case 0xC20E58: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:76 DEC
    case 0xC20E59: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:77 DEC
    case 0xC20E5A: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:78 STA @VIRTUAL02
    case 0xC20E5B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:79 STA @LOCAL01
    case 0xC20E5D: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:80 LDA @VIRTUAL04
    case 0xC20E5F: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:81 BNE @UNKNOWN2
    case 0xC20E61: {
        Instruction step(cpu, 0xD0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:82 LDA @LOCAL02
    case 0xC20E63: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:83 BNE @UNKNOWN2
    case 0xC20E65: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:84 LDX #$0248
    case 0xC20E67: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000048u : 0x000248u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:84 LDX #$0248
    // Overlapping static entry reached from 0xC20E67.
    case 0xC20E69: {
        Instruction step(cpu, 0x02, 0x000080u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:85 BRA @UNKNOWN3
    case 0xC20E6A: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:87 LDX #$0200
    case 0xC20E6C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:87 LDX #$0200
    // Overlapping static entry reached from 0xC20E6C.
    case 0xC20E6E: {
        Instruction step(cpu, 0x02, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:89 LDA @LOCAL03
    case 0xC20E6F: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:90 CMP #9
    case 0xC20E71: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:90 CMP #9
    // Overlapping static entry reached from 0xC20E71.
    case 0xC20E73: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:91 BNE @UNKNOWN4
    case 0xC20E74: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:92 CPY #0
    case 0xC20E76: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:92 CPY #0
    // Overlapping static entry reached from 0xC20E76.
    case 0xC20E78: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:93 BNE @UNKNOWN5
    case 0xC20E79: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:95 LDY #0
    case 0xC20E7B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:95 LDY #0
    // Overlapping static entry reached from 0xC20E7B.
    case 0xC20E7D: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:97 LDA @VIRTUAL04
    case 0xC20E7E: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:98 LSR
    case 0xC20E80: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:99 LSR
    case 0xC20E81: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:100 ASL
    case 0xC20E82: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:101 ASL
    case 0xC20E83: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:102 ASL
    case 0xC20E84: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:103 ASL
    case 0xC20E85: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:104 STA @VIRTUAL02
    case 0xC20E86: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:105 LDA @VIRTUAL04
    case 0xC20E88: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:106 ASL
    case 0xC20E8A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:107 ASL
    case 0xC20E8B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:108 CLC
    case 0xC20E8C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:109 ADC @VIRTUAL02
    case 0xC20E8D: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:110 STY @VIRTUAL02
    case 0xC20E8F: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:111 CLC
    case 0xC20E91: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:112 ADC @VIRTUAL02
    case 0xC20E92: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:113 STX @VIRTUAL02
    case 0xC20E94: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:114 CLC
    case 0xC20E96: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:115 ADC @VIRTUAL02
    case 0xC20E97: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:116 CLC
    case 0xC20E99: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:117 ADC #$2400
    case 0xC20E9A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x002400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:117 ADC #$2400
    // Overlapping static entry reached from 0xC20E9A.
    case 0xC20E9C: {
        Instruction step(cpu, 0x24, 0x0000A6u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:118 LDX @LOCAL01
    case 0xC20E9D: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:118 LDX @LOCAL01
    // Overlapping static entry reached from 0xC20E9C.
    case 0xC20E9E: {
        Instruction step(cpu, 0x10, 0x000086u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:119 STX @VIRTUAL02
    case 0xC20E9F: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:119 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC20E9E.
    case 0xC20EA0: {
        Instruction step(cpu, 0x02, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:120 STA __BSS_START__,X
    case 0xC20EA1: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:121 CLC
    case 0xC20EA4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:122 ADC #$0010
    case 0xC20EA5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:122 ADC #$0010
    // Overlapping static entry reached from 0xC20EA5.
    case 0xC20EA7: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:123 LDX @VIRTUAL02
    case 0xC20EA8: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:124 STA __BSS_START__ + hp_pp_window_buffer::hp2,X
    case 0xC20EAA: {
        Instruction step(cpu, 0x9D, 0x000006u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:125 LDA @VIRTUAL02
    case 0xC20EAD: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:126 DEC
    case 0xC20EAF: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:127 DEC
    case 0xC20EB0: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:128 STA @LOCAL00
    case 0xC20EB1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:129 LDA @LOCAL02
    case 0xC20EB3: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:130 BNE @UNKNOWN6
    case 0xC20EB5: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:131 LDX #$0248
    case 0xC20EB7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000048u : 0x000248u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:131 LDX #$0248
    // Overlapping static entry reached from 0xC20EB7.
    case 0xC20EB9: {
        Instruction step(cpu, 0x02, 0x000080u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:132 BRA @UNKNOWN7
    case 0xC20EBA: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:134 LDX #$0200
    case 0xC20EBC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:134 LDX #$0200
    // Overlapping static entry reached from 0xC20EBC.
    case 0xC20EBE: {
        Instruction step(cpu, 0x02, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:136 LDA @VIRTUAL04
    case 0xC20EBF: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:137 CMP #9
    case 0xC20EC1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:137 CMP #9
    // Overlapping static entry reached from 0xC20EC1.
    case 0xC20EC3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:138 BNE @UNKNOWN8
    case 0xC20EC4: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:139 CPY #0
    case 0xC20EC6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:139 CPY #0
    // Overlapping static entry reached from 0xC20EC6.
    case 0xC20EC8: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:140 BNE @UNKNOWN9
    case 0xC20EC9: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:142 LDY #0
    case 0xC20ECB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:142 LDY #0
    // Overlapping static entry reached from 0xC20ECB.
    case 0xC20ECD: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:144 STY @VIRTUAL04
    case 0xC20ECE: {
        Instruction step(cpu, 0x84, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:145 LDA @LOCAL02
    case 0xC20ED0: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:146 LSR
    case 0xC20ED2: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:147 LSR
    case 0xC20ED3: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:148 ASL
    case 0xC20ED4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:149 ASL
    case 0xC20ED5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:150 ASL
    case 0xC20ED6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:151 ASL
    case 0xC20ED7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:152 STA @VIRTUAL02
    case 0xC20ED8: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:153 LDA @LOCAL02
    case 0xC20EDA: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:154 ASL
    case 0xC20EDC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:155 ASL
    case 0xC20EDD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:156 CLC
    case 0xC20EDE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:157 ADC @VIRTUAL02
    case 0xC20EDF: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:158 CLC
    case 0xC20EE1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:159 ADC @VIRTUAL04
    case 0xC20EE2: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:160 STX @VIRTUAL02
    case 0xC20EE4: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:161 CLC
    case 0xC20EE6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:162 ADC @VIRTUAL02
    case 0xC20EE7: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:163 CLC
    case 0xC20EE9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:164 ADC #$2400
    case 0xC20EEA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x002400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:164 ADC #$2400
    // Overlapping static entry reached from 0xC20EEA.
    case 0xC20EEC: {
        Instruction step(cpu, 0x24, 0x0000AAu, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:165 TAX
    case 0xC20EED: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:166 STX @LOCAL02
    case 0xC20EEE: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:167 PHX
    case 0xC20EF0: {
        Instruction step(cpu, 0xDA, 0x000000u, 1u, AddressMode::Implied);
        step.push_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:168 LDA @LOCAL00
    case 0xC20EF1: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:169 TAX
    case 0xC20EF3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:170 PLA
    case 0xC20EF4: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:171 STA __BSS_START__ + hp_pp_window_buffer::hp1,X
    case 0xC20EF5: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:172 LDA @LOCAL00
    case 0xC20EF8: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:173 PHA
    case 0xC20EFA: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:174 LDX @LOCAL02
    case 0xC20EFB: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:175 TXA
    case 0xC20EFD: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:176 CLC
    case 0xC20EFE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:177 ADC #$0010
    case 0xC20EFF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:177 ADC #$0010
    // Overlapping static entry reached from 0xC20EFF.
    case 0xC20F01: {
        Instruction step(cpu, 0x00, 0x0000FAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:178 PLX
    case 0xC20F02: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/text/hp_pp_window/fill_tile_buffer.asm:179 STA __BSS_START__ + hp_pp_window_buffer::hp2,X
    case 0xC20F03: {
        Instruction step(cpu, 0x9D, 0x000006u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:180 END_C_FUNCTION
    case 0xC20F06: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:180 END_C_FUNCTION
    case 0xC20F07: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
