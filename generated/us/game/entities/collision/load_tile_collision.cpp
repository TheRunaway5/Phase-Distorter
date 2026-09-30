// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/load_tile_collision.asm
bool resume_overworld_load_tile_collision(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_tile_collision.asm:3 BEGIN_C_FUNCTION
    case 0xC0062A: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_tile_collision.asm:7 END_STACK_VARS
    case 0xC0062C: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_tile_collision.asm:7 END_STACK_VARS
    case 0xC0062D: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_tile_collision.asm:7 END_STACK_VARS
    case 0xC0062E: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_tile_collision.asm:7 END_STACK_VARS
    case 0xC0062F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_tile_collision.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0062F.
    case 0xC00631: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_tile_collision.asm:7 END_STACK_VARS
    case 0xC00632: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_tile_collision.asm:7 END_STACK_VARS
    case 0xC00633: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/load_tile_collision.asm:8 STA @LOCAL00
    case 0xC00634: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_tile_collision.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC00631.
    case 0xC00635: {
        Instruction step(cpu, 0x0E, 0x007BA9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_tile_collision.asm:9 LOADPTR MAP_DATA_TILE_COLLISION_PTR_TABLE, @VIRTUAL06
    case 0xC00636: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Bu : 0x00117Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_tile_collision.asm:9 LOADPTR MAP_DATA_TILE_COLLISION_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC00636.
    case 0xC00638: {
        Instruction step(cpu, 0x11, 0x000085u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_tile_collision.asm:9 LOADPTR MAP_DATA_TILE_COLLISION_PTR_TABLE, @VIRTUAL06
    case 0xC00639: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_tile_collision.asm:9 LOADPTR MAP_DATA_TILE_COLLISION_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC00638.
    case 0xC0063A: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_tile_collision.asm:9 LOADPTR MAP_DATA_TILE_COLLISION_PTR_TABLE, @VIRTUAL06
    case 0xC0063B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_tile_collision.asm:9 LOADPTR MAP_DATA_TILE_COLLISION_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0063A.
    case 0xC0063C: {
        Instruction step(cpu, 0xEF, 0x088500u, 4u, AddressMode::Long);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_tile_collision.asm:9 LOADPTR MAP_DATA_TILE_COLLISION_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0063B.
    case 0xC0063D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_tile_collision.asm:9 LOADPTR MAP_DATA_TILE_COLLISION_PTR_TABLE, @VIRTUAL06
    case 0xC0063E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_tile_collision.asm:10 LDA @LOCAL00
    case 0xC00640: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_tile_collision.asm:11 ASL
    case 0xC00642: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_tile_collision.asm:12 ASL
    case 0xC00643: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_tile_collision.asm:13 CLC
    case 0xC00644: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_tile_collision.asm:14 ADC @VIRTUAL06
    case 0xC00645: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_tile_collision.asm:15 STA @VIRTUAL06
    case 0xC00647: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_tile_collision.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC00649: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_tile_collision.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC00649.
    case 0xC0064B: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/load_tile_collision.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC0064C: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/load_tile_collision.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC0064E: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/load_tile_collision.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC0064F: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/load_tile_collision.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC00651: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/load_tile_collision.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC00653: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_tile_collision.asm:17 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL06
    case 0xC00655: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x00F800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_tile_collision.asm:17 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC00655.
    case 0xC00657: {
        Instruction step(cpu, 0xF8, 0x000000u, 1u, AddressMode::Implied);
        step.set_decimal();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_tile_collision.asm:17 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL06
    case 0xC00658: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_tile_collision.asm:17 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL06
    case 0xC0065A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_tile_collision.asm:17 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC0065A.
    case 0xC0065C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_tile_collision.asm:17 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL06
    case 0xC0065D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_tile_collision.asm:18 LDA #0
    case 0xC0065F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_tile_collision.asm:18 LDA #0
    // Overlapping static entry reached from 0xC0065F.
    case 0xC00661: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_tile_collision.asm:19 STA @LOCAL00
    case 0xC00662: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_tile_collision.asm:20 BRA @UNKNOWN1
    case 0xC00664: {
        Instruction step(cpu, 0x80, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/load_tile_collision.asm:22 LDA [@VIRTUAL0A]
    case 0xC00666: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_tile_collision.asm:23 STA [@VIRTUAL06]
    case 0xC00668: {
        Instruction step(cpu, 0x87, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_tile_collision.asm:24 INC @VIRTUAL0A
    case 0xC0066A: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/load_tile_collision.asm:25 INC @VIRTUAL0A
    case 0xC0066C: {
        Instruction step(cpu, 0xE6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/load_tile_collision.asm:26 INC @VIRTUAL06
    case 0xC0066E: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/load_tile_collision.asm:27 INC @VIRTUAL06
    case 0xC00670: {
        Instruction step(cpu, 0xE6, 0x000006u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/load_tile_collision.asm:28 LDA @LOCAL00
    case 0xC00672: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_tile_collision.asm:29 INC
    case 0xC00674: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/load_tile_collision.asm:30 STA @LOCAL00
    case 0xC00675: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_tile_collision.asm:32 CMP #960
    case 0xC00677: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000C0u : 0x0003C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/load_tile_collision.asm:32 CMP #960
    // Overlapping static entry reached from 0xC00677.
    case 0xC00679: {
        Instruction step(cpu, 0x03, 0x000090u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/load_tile_collision.asm:33 BCC @UNKNOWN0
    case 0xC0067A: {
        Instruction step(cpu, 0x90, 0x0000EAu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/load_tile_collision.asm:33 BCC @UNKNOWN0
    // Overlapping static entry reached from 0xC00679.
    case 0xC0067B: {
        Instruction step(cpu, 0xEA, 0x000000u, 1u, AddressMode::Implied);
        step.no_operation();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_tile_collision.asm:34 END_C_FUNCTION
    case 0xC0067C: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/load_tile_collision.asm:34 END_C_FUNCTION
    case 0xC0067D: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
