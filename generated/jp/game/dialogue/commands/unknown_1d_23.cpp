// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/unknown_1D_23.asm
bool resume_text_ccs_unknown_1d_23(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/unknown_1D_23.asm:3 BEGIN_C_FUNCTION
    case 0xC17988: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/unknown_1D_23.asm:9 END_STACK_VARS
    case 0xC1798A: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/unknown_1D_23.asm:9 END_STACK_VARS
    case 0xC1798B: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/unknown_1D_23.asm:9 END_STACK_VARS
    case 0xC1798C: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_23.asm:9 END_STACK_VARS
    case 0xC1798D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/unknown_1D_23.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1798D.
    case 0xC1798F: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/unknown_1D_23.asm:9 END_STACK_VARS
    case 0xC17990: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/unknown_1D_23.asm:9 END_STACK_VARS
    case 0xC17991: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:10 TXA
    case 0xC17992: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:11 BEQ @UNKNOWN0
    case 0xC17993: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/unknown_1D_23.asm:12 STORE_INT1632 @VIRTUAL06
    case 0xC17995: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/unknown_1D_23.asm:12 STORE_INT1632 @VIRTUAL06
    case 0xC17997: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:13 BRA @UNKNOWN1
    case 0xC17999: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:15 JSR GET_ARGUMENT_MEMORY
    case 0xC1799B: {
        Instruction step(cpu, 0x20, 0x0005DFu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:17 LDA @VIRTUAL06
    case 0xC1799E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/ccs/unknown_1D_23.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC179A0: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/text/ccs/unknown_1D_23.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC179A2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/ccs/unknown_1D_23.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC179A3: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/text/ccs/unknown_1D_23.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC179A5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/text/ccs/unknown_1D_23.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC179A6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/text/ccs/unknown_1D_23.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC179A7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:19 CLC
    case 0xC179A8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:20 ADC #item::type
    case 0xC179A9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:20 ADC #item::type
    // Overlapping static entry reached from 0xC179A9.
    case 0xC179AB: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:21 TAX
    case 0xC179AC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:22 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC179AD: {
        Instruction step(cpu, 0xBF, 0xD57000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:23 AND #$00FF
    case 0xC179B1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC179B1.
    case 0xC179B3: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:24 AND #$000C
    case 0xC179B4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:24 AND #$000C
    // Overlapping static entry reached from 0xC179B4.
    case 0xC179B6: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:25 BEQ @UNKNOWN2
    case 0xC179B7: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:26 CMP #$04
    case 0xC179B9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:26 CMP #$04
    // Overlapping static entry reached from 0xC179B9.
    case 0xC179BB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:27 BEQ @UNKNOWN3
    case 0xC179BC: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:28 CMP #$08
    case 0xC179BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:28 CMP #$08
    // Overlapping static entry reached from 0xC179BE.
    case 0xC179C0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:29 BEQ @UNKNOWN3
    case 0xC179C1: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:30 CMP #$0C
    case 0xC179C3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:30 CMP #$0C
    // Overlapping static entry reached from 0xC179C3.
    case 0xC179C5: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:31 BEQ @UNKNOWN3
    case 0xC179C6: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:32 BRA @UNKNOWN4
    case 0xC179C8: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:34 LDA #1
    case 0xC179CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:34 LDA #1
    // Overlapping static entry reached from 0xC179CA.
    case 0xC179CC: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:35 BRA @UNKNOWN5
    case 0xC179CD: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:37 LDA #2
    case 0xC179CF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:37 LDA #2
    // Overlapping static entry reached from 0xC179CF.
    case 0xC179D1: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:38 BRA @UNKNOWN5
    case 0xC179D2: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:40 LDA #0
    case 0xC179D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:40 LDA #0
    // Overlapping static entry reached from 0xC179D4.
    case 0xC179D6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/unknown_1D_23.asm:42 STORE_INT1632 @VIRTUAL06
    case 0xC179D7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/unknown_1D_23.asm:42 STORE_INT1632 @VIRTUAL06
    case 0xC179D9: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/unknown_1D_23.asm:43 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC179DB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/unknown_1D_23.asm:43 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC179DD: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/unknown_1D_23.asm:43 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC179DF: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/unknown_1D_23.asm:43 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC179E1: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:44 JSR SET_WORKING_MEMORY
    case 0xC179E3: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:45 LDA #NULL
    case 0xC179E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/unknown_1D_23.asm:45 LDA #NULL
    // Overlapping static entry reached from 0xC179E6.
    case 0xC179E8: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/unknown_1D_23.asm:46 END_C_FUNCTION
    case 0xC179E9: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/unknown_1D_23.asm:46 END_C_FUNCTION
    case 0xC179EA: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
