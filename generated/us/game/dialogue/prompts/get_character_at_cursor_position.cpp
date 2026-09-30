// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/get_character_at_cursor_position.asm
bool resume_text_get_character_at_cursor_position(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_character_at_cursor_position.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4406A: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/get_character_at_cursor_position.asm:9 END_STACK_VARS
    case 0xC4406C: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/get_character_at_cursor_position.asm:9 END_STACK_VARS
    case 0xC4406D: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/get_character_at_cursor_position.asm:9 END_STACK_VARS
    case 0xC4406E: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_character_at_cursor_position.asm:9 END_STACK_VARS
    case 0xC4406F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F2u : 0x00FFF2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_character_at_cursor_position.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4406F.
    case 0xC44071: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/get_character_at_cursor_position.asm:9 END_STACK_VARS
    case 0xC44072: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/get_character_at_cursor_position.asm:9 END_STACK_VARS
    case 0xC44073: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/get_character_at_cursor_position.asm:10 STA @VIRTUAL02
    case 0xC44074: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/get_character_at_cursor_position.asm:10 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC44071.
    case 0xC44075: {
        Instruction step(cpu, 0x02, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/get_character_at_cursor_position.asm:11 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC44076: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D3u : 0x00A6D3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/get_character_at_cursor_position.asm:11 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC44076.
    case 0xC44078: {
        Instruction step(cpu, 0xA6, 0x000085u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/get_character_at_cursor_position.asm:11 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC44079: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/text/get_character_at_cursor_position.asm:11 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC44078.
    case 0xC4407A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/get_character_at_cursor_position.asm:11 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC4407B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/get_character_at_cursor_position.asm:11 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4407B.
    case 0xC4407D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/get_character_at_cursor_position.asm:11 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC4407E: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/get_character_at_cursor_position.asm:12 TYA
    case 0xC44080: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/text/get_character_at_cursor_position.asm:13 ASL
    case 0xC44081: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/get_character_at_cursor_position.asm:14 ASL
    case 0xC44082: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/get_character_at_cursor_position.asm:15 CLC
    case 0xC44083: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/get_character_at_cursor_position.asm:16 ADC @VIRTUAL0A
    case 0xC44084: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/get_character_at_cursor_position.asm:17 STA @VIRTUAL0A
    case 0xC44086: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/get_character_at_cursor_position.asm:18 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC44088: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/get_character_at_cursor_position.asm:18 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC44088.
    case 0xC4408A: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/text/get_character_at_cursor_position.asm:18 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4408B: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/text/get_character_at_cursor_position.asm:18 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4408D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/text/get_character_at_cursor_position.asm:18 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4408E: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/text/get_character_at_cursor_position.asm:18 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC44090: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/text/get_character_at_cursor_position.asm:18 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC44092: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/get_character_at_cursor_position.asm:19 TXA
    case 0xC44094: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:574 STA scratch
    // Macro caller: src/text/get_character_at_cursor_position.asm:20 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC44095: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:575 ASL
    // Macro caller: src/text/get_character_at_cursor_position.asm:20 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC44097: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/text/get_character_at_cursor_position.asm:20 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC44098: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:577 ASL
    // Macro caller: src/text/get_character_at_cursor_position.asm:20 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC4409A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/text/get_character_at_cursor_position.asm:20 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC4409B: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:579 ASL
    // Macro caller: src/text/get_character_at_cursor_position.asm:20 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC4409D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/text/get_character_at_cursor_position.asm:21 CLC
    case 0xC4409E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/get_character_at_cursor_position.asm:22 ADC @VIRTUAL02
    case 0xC4409F: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/get_character_at_cursor_position.asm:23 TAX
    case 0xC440A1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/get_character_at_cursor_position.asm:24 LDA f:NAME_ENTRY_GRID_CHARACTER_OFFSET_TABLE,X
    case 0xC440A2: {
        Instruction step(cpu, 0xBF, 0xC20912u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/get_character_at_cursor_position.asm:25 AND #$00FF
    case 0xC440A6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/get_character_at_cursor_position.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC440A6.
    case 0xC440A8: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/get_character_at_cursor_position.asm:26 CLC
    case 0xC440A9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/get_character_at_cursor_position.asm:27 ADC @VIRTUAL06
    case 0xC440AA: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/get_character_at_cursor_position.asm:28 STA @VIRTUAL06
    case 0xC440AC: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/get_character_at_cursor_position.asm:29 LDA [@VIRTUAL06]
    case 0xC440AE: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/get_character_at_cursor_position.asm:30 AND #$00FF
    case 0xC440B0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/get_character_at_cursor_position.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC440B0.
    case 0xC440B2: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/get_character_at_cursor_position.asm:31 END_C_FUNCTION
    case 0xC440B3: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/text/get_character_at_cursor_position.asm:31 END_C_FUNCTION
    case 0xC440B4: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
