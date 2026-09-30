// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/replace_block.asm
bool resume_overworld_replace_block(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/replace_block.asm:3 BEGIN_C_FUNCTION
    case 0xC0067E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/replace_block.asm:8 END_STACK_VARS
    case 0xC00680: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/replace_block.asm:8 END_STACK_VARS
    case 0xC00681: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/replace_block.asm:8 END_STACK_VARS
    case 0xC00682: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/replace_block.asm:8 END_STACK_VARS
    case 0xC00683: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/replace_block.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC00683.
    case 0xC00685: {
        Instruction step(cpu, 0xFF, 0x9B685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/replace_block.asm:8 END_STACK_VARS
    case 0xC00686: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/replace_block.asm:8 END_STACK_VARS
    case 0xC00687: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/replace_block.asm:9 TXY
    case 0xC00688: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/overworld/replace_block.asm:10 STA @LOCAL00
    case 0xC00689: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/replace_block.asm:11 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC0068B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/replace_block.asm:11 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC0068B.
    case 0xC0068D: {
        Instruction step(cpu, 0x80, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/replace_block.asm:11 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC0068E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/replace_block.asm:11 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC00690: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/replace_block.asm:11 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC00690.
    case 0xC00692: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/replace_block.asm:11 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC00693: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/replace_block.asm:12 LDA @LOCAL00
    case 0xC00695: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:656 ASL
    // Macro caller: src/overworld/replace_block.asm:13 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00697: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:657 ASL
    // Macro caller: src/overworld/replace_block.asm:13 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00698: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:658 ASL
    // Macro caller: src/overworld/replace_block.asm:13 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00699: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:659 ASL
    // Macro caller: src/overworld/replace_block.asm:13 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC0069A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:660 ASL
    // Macro caller: src/overworld/replace_block.asm:13 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC0069B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/replace_block.asm:14 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC0069C: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/replace_block.asm:14 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC0069E: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/replace_block.asm:14 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC006A0: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/replace_block.asm:14 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC006A2: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/replace_block.asm:15 CLC
    case 0xC006A4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/replace_block.asm:16 ADC @VIRTUAL0A
    case 0xC006A5: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/replace_block.asm:17 STA @VIRTUAL0A
    case 0xC006A7: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/replace_block.asm:17 STA @VIRTUAL0A
    // Overlapping static entry reached from 0xC006FD.
    case 0xC006A8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/replace_block.asm:18 TYA
    case 0xC006A9: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:656 ASL
    // Macro caller: src/overworld/replace_block.asm:19 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC006AA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:657 ASL
    // Macro caller: src/overworld/replace_block.asm:19 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC006AB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:658 ASL
    // Macro caller: src/overworld/replace_block.asm:19 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC006AC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:659 ASL
    // Macro caller: src/overworld/replace_block.asm:19 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC006AD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:660 ASL
    // Macro caller: src/overworld/replace_block.asm:19 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC006AE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/replace_block.asm:20 CLC
    case 0xC006AF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/replace_block.asm:21 ADC @VIRTUAL06
    case 0xC006B0: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/replace_block.asm:22 STA @VIRTUAL06
    case 0xC006B2: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/replace_block.asm:23 LDX #0
    case 0xC006B4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/replace_block.asm:23 LDX #0
    // Overlapping static entry reached from 0xC006B4.
    case 0xC006B6: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/replace_block.asm:24 BRA @UNKNOWN1
    case 0xC006B7: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/replace_block.asm:26 LDA [@VIRTUAL06]
    case 0xC006B9: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/replace_block.asm:27 STA [@VIRTUAL0A]
    case 0xC006BB: {
        Instruction step(cpu, 0x87, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/replace_block.asm:28 INC @VIRTUAL06
    case 0xC006BD: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/replace_block.asm:29 INC @VIRTUAL06
    case 0xC006BF: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/replace_block.asm:30 INC @VIRTUAL0A
    case 0xC006C1: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/replace_block.asm:31 INC @VIRTUAL0A
    case 0xC006C3: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/replace_block.asm:32 INX
    case 0xC006C5: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/replace_block.asm:34 CPX #16
    case 0xC006C6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/replace_block.asm:34 CPX #16
    // Overlapping static entry reached from 0xC006C6.
    case 0xC006C8: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/replace_block.asm:35 BCC @UNKNOWN0
    case 0xC006C9: {
        Instruction step(cpu, 0x90, 0x0000EEu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/replace_block.asm:36 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL0A
    case 0xC006CB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x00F800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/replace_block.asm:36 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC006CB.
    case 0xC006CD: {
        Instruction step(cpu, 0xF8, 0x000000u, 1u, AddressMode::Implied);
        step.set_decimal();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/replace_block.asm:36 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL0A
    case 0xC006CE: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/replace_block.asm:36 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL0A
    case 0xC006D0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/replace_block.asm:36 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC006D0.
    case 0xC006D2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/replace_block.asm:36 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL0A
    case 0xC006D3: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/replace_block.asm:37 LDA @LOCAL00
    case 0xC006D5: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/replace_block.asm:38 ASL
    case 0xC006D7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/replace_block.asm:39 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC006D8: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/replace_block.asm:39 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC006DA: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/replace_block.asm:39 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC006DC: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/replace_block.asm:39 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC006DE: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/replace_block.asm:40 CLC
    case 0xC006E0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/replace_block.asm:41 ADC @VIRTUAL06
    case 0xC006E1: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/replace_block.asm:42 STA @VIRTUAL06
    case 0xC006E3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/replace_block.asm:43 TYA
    case 0xC006E5: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/replace_block.asm:44 ASL
    case 0xC006E6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/replace_block.asm:45 CLC
    case 0xC006E7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/replace_block.asm:46 ADC @VIRTUAL0A
    case 0xC006E8: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/replace_block.asm:47 STA @VIRTUAL0A
    case 0xC006EA: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/replace_block.asm:48 LDA [@VIRTUAL0A]
    case 0xC006EC: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/replace_block.asm:49 STA [@VIRTUAL06]
    case 0xC006EE: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/replace_block.asm:50 END_C_FUNCTION
    case 0xC006F0: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/replace_block.asm:50 END_C_FUNCTION
    case 0xC006F1: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
