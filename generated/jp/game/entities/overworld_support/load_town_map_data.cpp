// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/load_town_map_data.asm
bool resume_overworld_load_town_map_data(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_town_map_data.asm:3 BEGIN_C_FUNCTION
    case 0xC4A823: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_town_map_data.asm:9 END_STACK_VARS
    case 0xC4A825: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_town_map_data.asm:9 END_STACK_VARS
    case 0xC4A826: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_town_map_data.asm:9 END_STACK_VARS
    case 0xC4A827: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_town_map_data.asm:9 END_STACK_VARS
    case 0xC4A828: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_town_map_data.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4A828.
    case 0xC4A82A: {
        Instruction step(cpu, 0xFF, 0xA8685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_town_map_data.asm:9 END_STACK_VARS
    case 0xC4A82B: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_town_map_data.asm:9 END_STACK_VARS
    case 0xC4A82C: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:10 TAY
    case 0xC4A82D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:11 STY @LOCAL02
    case 0xC4A82E: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:12 LDX #1
    case 0xC4A830: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:12 LDX #1
    // Overlapping static entry reached from 0xC4A830.
    case 0xC4A832: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:13 LDA #2
    case 0xC4A833: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:13 LDA #2
    // Overlapping static entry reached from 0xC4A833.
    case 0xC4A835: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:14 JSL FADE_OUT
    case 0xC4A836: {
        Instruction step(cpu, 0x22, 0xC0886Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:15 LOADPTR TOWN_MAP_GFX_POINTER_TABLE, @VIRTUAL0A
    case 0xC4A83A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E5u : 0x0030E5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:15 LOADPTR TOWN_MAP_GFX_POINTER_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4A83A.
    case 0xC4A83C: {
        Instruction step(cpu, 0x30, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:15 LOADPTR TOWN_MAP_GFX_POINTER_TABLE, @VIRTUAL0A
    case 0xC4A83D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:15 LOADPTR TOWN_MAP_GFX_POINTER_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4A83C.
    case 0xC4A83E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:15 LOADPTR TOWN_MAP_GFX_POINTER_TABLE, @VIRTUAL0A
    case 0xC4A83F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E0u : 0x0000E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:15 LOADPTR TOWN_MAP_GFX_POINTER_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4A83F.
    case 0xC4A841: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_town_map_data.asm:15 LOADPTR TOWN_MAP_GFX_POINTER_TABLE, @VIRTUAL0A
    case 0xC4A842: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:16 LDY @LOCAL02
    case 0xC4A844: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:17 TYA
    case 0xC4A846: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:18 ASL
    case 0xC4A847: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:19 ASL
    case 0xC4A848: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:20 CLC
    case 0xC4A849: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:21 ADC @VIRTUAL0A
    case 0xC4A84A: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:22 STA @VIRTUAL0A
    case 0xC4A84C: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_town_map_data.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4A84E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_town_map_data.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A84E.
    case 0xC4A850: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/load_town_map_data.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4A851: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/load_town_map_data.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4A853: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/load_town_map_data.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4A854: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/load_town_map_data.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4A856: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/load_town_map_data.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4A858: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_town_map_data.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A85A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_town_map_data.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A85C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_town_map_data.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A85E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_town_map_data.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A860: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:25 LOADPTR BUFFER, @LOCAL01
    case 0xC4A862: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:25 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC4A862.
    case 0xC4A864: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:25 LOADPTR BUFFER, @LOCAL01
    case 0xC4A865: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:25 LOADPTR BUFFER, @LOCAL01
    case 0xC4A867: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:25 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC4A867.
    case 0xC4A869: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_town_map_data.asm:25 LOADPTR BUFFER, @LOCAL01
    case 0xC4A86A: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:26 JSL DECOMP
    case 0xC4A86C: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:28 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC4A870: {
        Instruction step(cpu, 0xAD, 0x000028u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:29 AND #$00FF
    case 0xC4A873: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC4A873.
    case 0xC4A875: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:30 BNE @UNKNOWN0
    case 0xC4A876: {
        Instruction step(cpu, 0xD0, 0x0000F8u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:31 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4A878: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:31 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A878.
    case 0xC4A87A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:31 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4A87B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:31 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4A87D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:31 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A87D.
    case 0xC4A87F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_town_map_data.asm:31 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4A880: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_town_map_data.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A882: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_town_map_data.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A884: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_town_map_data.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A886: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_town_map_data.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4A888: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:33 LDX #BPP4PALETTE_SIZE * 2
    case 0xC4A88A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:33 LDX #BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC4A88A.
    case 0xC4A88C: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:34 LDA #.LOWORD(PALETTES)
    case 0xC4A88D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:34 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC4A88D.
    case 0xC4A88F: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:35 JSL MEMCPY16
    case 0xC4A890: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:36 LOADPTR TOWN_MAP_ICON_PALETTE, @LOCAL00
    case 0xC4A894: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FDu : 0x00DEFDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:36 LOADPTR TOWN_MAP_ICON_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4A894.
    case 0xC4A896: {
        Instruction step(cpu, 0xDE, 0x000E85u, 3u, AddressMode::AbsoluteIndexedX);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:36 LOADPTR TOWN_MAP_ICON_PALETTE, @LOCAL00
    case 0xC4A897: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:36 LOADPTR TOWN_MAP_ICON_PALETTE, @LOCAL00
    case 0xC4A899: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:36 LOADPTR TOWN_MAP_ICON_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4A899.
    case 0xC4A89B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_town_map_data.asm:36 LOADPTR TOWN_MAP_ICON_PALETTE, @LOCAL00
    case 0xC4A89C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:37 LDX #BPP4PALETTE_SIZE * 8
    case 0xC4A89E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:37 LDX #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4A89E.
    case 0xC4A8A0: {
        Instruction step(cpu, 0x01, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:38 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    case 0xC4A8A1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000300u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:38 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4A8A0.
    case 0xC4A8A2: {
        Instruction step(cpu, 0x00, 0x000003u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:38 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4A8A1.
    case 0xC4A8A3: {
        Instruction step(cpu, 0x03, 0x000022u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:39 JSL MEMCPY16
    case 0xC4A8A4: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:39 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4A8A3.
    case 0xC4A8A5: {
        Instruction step(cpu, 0xC3, 0x00008Eu, 2u, AddressMode::StackRelative);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:39 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4A8A5.
    case 0xC4A8A7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A0u : 0x0000A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:40 LDY #$0000
    case 0xC4A8A8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:40 LDY #$0000
    // Overlapping static entry reached from 0xC4A8A7.
    case 0xC4A8A9: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:40 LDY #$0000
    // Overlapping static entry reached from 0xC4A8A8.
    case 0xC4A8AA: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:41 LDX #$3000
    case 0xC4A8AB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x003000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:41 LDX #$3000
    // Overlapping static entry reached from 0xC4A8AB.
    case 0xC4A8AD: {
        Instruction step(cpu, 0x30, 0x000098u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:42 TYA ;BG_TILEMAP_SIZE::NORMAL
    case 0xC4A8AE: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:43 JSL SET_BG1_VRAM_LOCATION
    case 0xC4A8AF: {
        Instruction step(cpu, 0x22, 0xC08D8Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:44 LDA #3
    case 0xC4A8B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:44 LDA #3
    // Overlapping static entry reached from 0xC4A8B3.
    case 0xC4A8B5: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:45 JSL SET_OAM_SIZE
    case 0xC4A8B6: {
        Instruction step(cpu, 0x22, 0xC08D83u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:46 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A8BA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:47 LDA #$00
    case 0xC4A8BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008F00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:48 STA f:CGADSUB
    case 0xC4A8BE: {
        Instruction step(cpu, 0x8F, 0x002131u, 4u, AddressMode::Long);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:48 STA f:CGADSUB
    // Overlapping static entry reached from 0xC4A8BC.
    case 0xC4A8BF: {
        Instruction step(cpu, 0x31, 0x000021u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:48 STA f:CGADSUB
    // Overlapping static entry reached from 0xC4A8BF.
    case 0xC4A8C1: {
        Instruction step(cpu, 0x00, 0x00008Fu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:49 STA f:CGWSEL
    case 0xC4A8C2: {
        Instruction step(cpu, 0x8F, 0x002130u, 4u, AddressMode::Long);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:50 LDA #$01
    case 0xC4A8C6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:51 STA TM_MIRROR
    case 0xC4A8C8: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:51 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4A8C6.
    case 0xC4A8C9: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:51 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4A8C9.
    case 0xC4A8CA: {
        Instruction step(cpu, 0x00, 0x00009Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:52 STZ TD_MIRROR
    case 0xC4A8CB: {
        Instruction step(cpu, 0x9C, 0x00001Bu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC4A8CE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4A8D0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    // Overlapping static entry reached from 0xC4A8D0.
    case 0xC4A8D2: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4A8D3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4A8D5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    // Overlapping static entry reached from 0xC4A8D5.
    case 0xC4A8D7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4A8D8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4A8DA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x003000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    // Overlapping static entry reached from 0xC4A8DA.
    case 0xC4A8DC: {
        Instruction step(cpu, 0x30, 0x0000A2u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4A8DD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    // Overlapping static entry reached from 0xC4A8DC.
    case 0xC4A8DE: {
        Instruction step(cpu, 0x00, 0x000008u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    // Overlapping static entry reached from 0xC4A8DD.
    case 0xC4A8DF: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4A8E0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4A8E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4A8E4: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    // Overlapping static entry reached from 0xC4A8E2.
    case 0xC4A8E5: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    // Overlapping static entry reached from 0xC4A8E5.
    case 0xC4A8E7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x0040A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4A8E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000840u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    // Overlapping static entry reached from 0xC4A8E7.
    case 0xC4A8E9: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    // Overlapping static entry reached from 0xC4A8E8.
    case 0xC4A8EA: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4A8EB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4A8ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    // Overlapping static entry reached from 0xC4A8ED.
    case 0xC4A8EF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4A8F0: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4A8F2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    // Overlapping static entry reached from 0xC4A8F2.
    case 0xC4A8F4: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4A8F5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x004000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    // Overlapping static entry reached from 0xC4A8F5.
    case 0xC4A8F7: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4A8F8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1207 TYA
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4A8FA: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4A8FB: {
        Instruction step(cpu, 0x22, 0xC085B7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:58 LOADPTR TOWN_MAP_LABEL_GFX, @LOCAL00
    case 0xC4A8FF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E2u : 0x00D7E2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:58 LOADPTR TOWN_MAP_LABEL_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC4A8FF.
    case 0xC4A901: {
        Instruction step(cpu, 0xD7, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:58 LOADPTR TOWN_MAP_LABEL_GFX, @LOCAL00
    case 0xC4A902: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:58 LOADPTR TOWN_MAP_LABEL_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC4A901.
    case 0xC4A903: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:58 LOADPTR TOWN_MAP_LABEL_GFX, @LOCAL00
    case 0xC4A904: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:58 LOADPTR TOWN_MAP_LABEL_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC4A904.
    case 0xC4A906: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_town_map_data.asm:58 LOADPTR TOWN_MAP_LABEL_GFX, @LOCAL00
    case 0xC4A907: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_town_map_data.asm:59 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4A909: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_town_map_data.asm:59 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4A90B: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_town_map_data.asm:59 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4A90D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_town_map_data.asm:59 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4A90F: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:60 JSL DECOMP
    case 0xC4A911: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4A915: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4A917: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4A919: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4A91B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4A91D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x006000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4A91D.
    case 0xC4A91F: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4A920: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4A920.
    case 0xC4A922: {
        Instruction step(cpu, 0x20, 0x0020E2u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4A923: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4A925: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4A927: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4A925.
    case 0xC4A928: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4A928.
    case 0xC4A92A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x0018A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:63 LDA #24
    case 0xC4A92B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:63 LDA #24
    // Overlapping static entry reached from 0xC4A92A.
    case 0xC4A92C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:63 LDA #24
    // Overlapping static entry reached from 0xC4A92B.
    case 0xC4A92D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:64 JSL UNKNOWN_C0856B
    case 0xC4A92E: {
        Instruction step(cpu, 0x22, 0xC0856Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:65 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A932: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:66 LDA #$11
    case 0xC4A934: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000011u : 0x008D11u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:67 STA TM_MIRROR
    case 0xC4A936: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:67 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4A934.
    case 0xC4A937: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:67 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4A937.
    case 0xC4A938: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:68 REP #PROC_FLAGS::ACCUM8
    case 0xC4A939: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:69 STZ BG1_Y_POS
    case 0xC4A93B: {
        Instruction step(cpu, 0x9C, 0x000033u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:70 STZ BG1_X_POS
    case 0xC4A93E: {
        Instruction step(cpu, 0x9C, 0x000031u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:71 JSL UPDATE_SCREEN
    case 0xC4A941: {
        Instruction step(cpu, 0x22, 0xC08B17u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:72 LDX #1
    case 0xC4A945: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:72 LDX #1
    // Overlapping static entry reached from 0xC4A945.
    case 0xC4A947: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:73 LDA #2
    case 0xC4A948: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:73 LDA #2
    // Overlapping static entry reached from 0xC4A948.
    case 0xC4A94A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:74 JSL FADE_IN
    case 0xC4A94B: {
        Instruction step(cpu, 0x22, 0xC0885Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_town_map_data.asm:75 END_C_FUNCTION
    case 0xC4A94F: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/load_town_map_data.asm:75 END_C_FUNCTION
    case 0xC4A950: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
