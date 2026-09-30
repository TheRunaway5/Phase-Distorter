// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/load_town_map_data.asm
bool resume_overworld_load_town_map_data(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_town_map_data.asm:3 BEGIN_C_FUNCTION
    case 0xC4D553: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_town_map_data.asm:9 END_STACK_VARS
    case 0xC4D555: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_town_map_data.asm:9 END_STACK_VARS
    case 0xC4D556: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_town_map_data.asm:9 END_STACK_VARS
    case 0xC4D557: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_town_map_data.asm:9 END_STACK_VARS
    case 0xC4D558: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_town_map_data.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4D558.
    case 0xC4D55A: {
        Instruction step(cpu, 0xFF, 0xA8685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_town_map_data.asm:9 END_STACK_VARS
    case 0xC4D55B: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_town_map_data.asm:9 END_STACK_VARS
    case 0xC4D55C: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:10 TAY
    case 0xC4D55D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:11 STY @LOCAL02
    case 0xC4D55E: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:12 LDX #1
    case 0xC4D560: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:12 LDX #1
    // Overlapping static entry reached from 0xC4D560.
    case 0xC4D562: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:13 LDA #2
    case 0xC4D563: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:13 LDA #2
    // Overlapping static entry reached from 0xC4D563.
    case 0xC4D565: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:14 JSL FADE_OUT
    case 0xC4D566: {
        Instruction step(cpu, 0x22, 0xC0887Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:15 LOADPTR TOWN_MAP_GFX_POINTER_TABLE, @VIRTUAL0A
    case 0xC4D56A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000090u : 0x002190u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:15 LOADPTR TOWN_MAP_GFX_POINTER_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4D56A.
    case 0xC4D56C: {
        Instruction step(cpu, 0x21, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:15 LOADPTR TOWN_MAP_GFX_POINTER_TABLE, @VIRTUAL0A
    case 0xC4D56D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:15 LOADPTR TOWN_MAP_GFX_POINTER_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4D56C.
    case 0xC4D56E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:15 LOADPTR TOWN_MAP_GFX_POINTER_TABLE, @VIRTUAL0A
    case 0xC4D56F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E0u : 0x0000E0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:15 LOADPTR TOWN_MAP_GFX_POINTER_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4D56F.
    case 0xC4D571: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_town_map_data.asm:15 LOADPTR TOWN_MAP_GFX_POINTER_TABLE, @VIRTUAL0A
    case 0xC4D572: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:16 LDY @LOCAL02
    case 0xC4D574: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:17 TYA
    case 0xC4D576: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:18 ASL
    case 0xC4D577: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:19 ASL
    case 0xC4D578: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:20 CLC
    case 0xC4D579: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:21 ADC @VIRTUAL0A
    case 0xC4D57A: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:22 STA @VIRTUAL0A
    case 0xC4D57C: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_town_map_data.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D57E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_town_map_data.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC4D57E.
    case 0xC4D580: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/load_town_map_data.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D581: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/load_town_map_data.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D583: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/load_town_map_data.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D584: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/load_town_map_data.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D586: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/load_town_map_data.asm:23 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D588: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_town_map_data.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4D58A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_town_map_data.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4D58C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_town_map_data.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4D58E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_town_map_data.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4D590: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:25 LOADPTR BUFFER, @LOCAL01
    case 0xC4D592: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:25 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC4D592.
    case 0xC4D594: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:25 LOADPTR BUFFER, @LOCAL01
    case 0xC4D595: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:25 LOADPTR BUFFER, @LOCAL01
    case 0xC4D597: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:25 LOADPTR BUFFER, @LOCAL01
    // Overlapping static entry reached from 0xC4D597.
    case 0xC4D599: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_town_map_data.asm:25 LOADPTR BUFFER, @LOCAL01
    case 0xC4D59A: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:26 JSL DECOMP
    case 0xC4D59C: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:28 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC4D5A0: {
        Instruction step(cpu, 0xAD, 0x000028u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:29 AND #$00FF
    case 0xC4D5A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC4D5A3.
    case 0xC4D5A5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:30 BNE @UNKNOWN0
    case 0xC4D5A6: {
        Instruction step(cpu, 0xD0, 0x0000F8u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:31 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4D5A8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:31 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4D5A8.
    case 0xC4D5AA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:31 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4D5AB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:31 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4D5AD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:31 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4D5AD.
    case 0xC4D5AF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_town_map_data.asm:31 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4D5B0: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_town_map_data.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4D5B2: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_town_map_data.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4D5B4: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_town_map_data.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4D5B6: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_town_map_data.asm:32 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4D5B8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:33 LDX #BPP4PALETTE_SIZE * 2
    case 0xC4D5BA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:33 LDX #BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC4D5BA.
    case 0xC4D5BC: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:34 LDA #.LOWORD(PALETTES)
    case 0xC4D5BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:34 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC4D5BD.
    case 0xC4D5BF: {
        Instruction step(cpu, 0x02, 0x000022u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:35 JSL MEMCPY16
    case 0xC4D5C0: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:36 LOADPTR TOWN_MAP_ICON_PALETTE, @LOCAL00
    case 0xC4D5C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x00F1C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:36 LOADPTR TOWN_MAP_ICON_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4D5C4.
    case 0xC4D5C6: {
        Instruction step(cpu, 0xF1, 0x000085u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:36 LOADPTR TOWN_MAP_ICON_PALETTE, @LOCAL00
    case 0xC4D5C7: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:36 LOADPTR TOWN_MAP_ICON_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4D5C6.
    case 0xC4D5C8: {
        Instruction step(cpu, 0x0E, 0x00E1A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:36 LOADPTR TOWN_MAP_ICON_PALETTE, @LOCAL00
    case 0xC4D5C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:36 LOADPTR TOWN_MAP_ICON_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4D5C9.
    case 0xC4D5CB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_town_map_data.asm:36 LOADPTR TOWN_MAP_ICON_PALETTE, @LOCAL00
    case 0xC4D5CC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:37 LDX #BPP4PALETTE_SIZE * 8
    case 0xC4D5CE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:37 LDX #BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4D5CE.
    case 0xC4D5D0: {
        Instruction step(cpu, 0x01, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:38 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    case 0xC4D5D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000300u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:38 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4D5D0.
    case 0xC4D5D2: {
        Instruction step(cpu, 0x00, 0x000003u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:38 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4D5D1.
    case 0xC4D5D3: {
        Instruction step(cpu, 0x03, 0x000022u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:39 JSL MEMCPY16
    case 0xC4D5D4: {
        Instruction step(cpu, 0x22, 0xC08ED2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:39 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4D5D3.
    case 0xC4D5D5: {
        Instruction step(cpu, 0xD2, 0x00008Eu, 2u, AddressMode::DirectPageIndirect);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:39 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4D5D5.
    case 0xC4D5D7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A0u : 0x0000A0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:40 LDY #$0000
    case 0xC4D5D8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:40 LDY #$0000
    // Overlapping static entry reached from 0xC4D5D7.
    case 0xC4D5D9: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:40 LDY #$0000
    // Overlapping static entry reached from 0xC4D5D8.
    case 0xC4D5DA: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:41 LDX #$3000
    case 0xC4D5DB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x003000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:41 LDX #$3000
    // Overlapping static entry reached from 0xC4D5DB.
    case 0xC4D5DD: {
        Instruction step(cpu, 0x30, 0x000098u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:42 TYA ;BG_TILEMAP_SIZE::NORMAL
    case 0xC4D5DE: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:43 JSL SET_BG1_VRAM_LOCATION
    case 0xC4D5DF: {
        Instruction step(cpu, 0x22, 0xC08D9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:44 LDA #3
    case 0xC4D5E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:44 LDA #3
    // Overlapping static entry reached from 0xC4D5E3.
    case 0xC4D5E5: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:45 JSL SET_OAM_SIZE
    case 0xC4D5E6: {
        Instruction step(cpu, 0x22, 0xC08D92u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:46 SEP #PROC_FLAGS::ACCUM8
    case 0xC4D5EA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:47 LDA #$00
    case 0xC4D5EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008F00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:48 STA f:CGADSUB
    case 0xC4D5EE: {
        Instruction step(cpu, 0x8F, 0x002131u, 4u, AddressMode::Long);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:48 STA f:CGADSUB
    // Overlapping static entry reached from 0xC4D5EC.
    case 0xC4D5EF: {
        Instruction step(cpu, 0x31, 0x000021u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:48 STA f:CGADSUB
    // Overlapping static entry reached from 0xC4D5EF.
    case 0xC4D5F1: {
        Instruction step(cpu, 0x00, 0x00008Fu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:49 STA f:CGWSEL
    case 0xC4D5F2: {
        Instruction step(cpu, 0x8F, 0x002130u, 4u, AddressMode::Long);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:50 LDA #$01
    case 0xC4D5F6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:51 STA TM_MIRROR
    case 0xC4D5F8: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:51 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4D5F6.
    case 0xC4D5F9: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:51 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4D5F9.
    case 0xC4D5FA: {
        Instruction step(cpu, 0x00, 0x00009Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:52 STZ TD_MIRROR
    case 0xC4D5FB: {
        Instruction step(cpu, 0x9C, 0x00001Bu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC4D5FE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4D600: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    // Overlapping static entry reached from 0xC4D600.
    case 0xC4D602: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4D603: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4D605: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    // Overlapping static entry reached from 0xC4D605.
    case 0xC4D607: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4D608: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4D60A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x003000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    // Overlapping static entry reached from 0xC4D60A.
    case 0xC4D60C: {
        Instruction step(cpu, 0x30, 0x0000A2u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4D60D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    // Overlapping static entry reached from 0xC4D60C.
    case 0xC4D60E: {
        Instruction step(cpu, 0x00, 0x000008u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    // Overlapping static entry reached from 0xC4D60D.
    case 0xC4D60F: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4D610: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4D612: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    case 0xC4D614: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    // Overlapping static entry reached from 0xC4D612.
    case 0xC4D615: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/load_town_map_data.asm:54 COPY_TO_VRAM1 BUFFER + $40, $3000, $800, 0
    // Overlapping static entry reached from 0xC4D615.
    case 0xC4D617: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x0040A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4D618: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000840u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    // Overlapping static entry reached from 0xC4D617.
    case 0xC4D619: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    // Overlapping static entry reached from 0xC4D618.
    case 0xC4D61A: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4D61B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4D61D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    // Overlapping static entry reached from 0xC4D61D.
    case 0xC4D61F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4D620: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4D622: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1199 LDY #dest
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    // Overlapping static entry reached from 0xC4D622.
    case 0xC4D624: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4D625: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x004000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1203 LDX #size
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    // Overlapping static entry reached from 0xC4D625.
    case 0xC4D627: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // include/macros.asm:1205 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4D628: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1207 TYA
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4D62A: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:1211 JSL TRANSFER_TO_VRAM
    // Macro caller: src/overworld/load_town_map_data.asm:56 COPY_TO_VRAM3 BUFFER + $840, $0000, $4000, 0
    case 0xC4D62B: {
        Instruction step(cpu, 0x22, 0xC085B7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:58 LOADPTR TOWN_MAP_LABEL_GFX, @LOCAL00
    case 0xC4D62F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000050u : 0x00EA50u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:58 LOADPTR TOWN_MAP_LABEL_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC4D62F.
    case 0xC4D631: {
        Instruction step(cpu, 0xEA, 0x000000u, 1u, AddressMode::Implied);
        step.no_operation();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_town_map_data.asm:58 LOADPTR TOWN_MAP_LABEL_GFX, @LOCAL00
    case 0xC4D632: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:58 LOADPTR TOWN_MAP_LABEL_GFX, @LOCAL00
    case 0xC4D634: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_town_map_data.asm:58 LOADPTR TOWN_MAP_LABEL_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC4D634.
    case 0xC4D636: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_town_map_data.asm:58 LOADPTR TOWN_MAP_LABEL_GFX, @LOCAL00
    case 0xC4D637: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_town_map_data.asm:59 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4D639: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_town_map_data.asm:59 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4D63B: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_town_map_data.asm:59 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4D63D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_town_map_data.asm:59 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4D63F: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:60 JSL DECOMP
    case 0xC4D641: {
        Instruction step(cpu, 0x22, 0xC41A9Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4D645: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4D647: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4D649: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4D64B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4D64D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x006000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4D64D.
    case 0xC4D64F: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4D650: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x002400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4D650.
    case 0xC4D652: {
        Instruction step(cpu, 0x24, 0x0000E2u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4D653: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4D652.
    case 0xC4D654: {
        Instruction step(cpu, 0x20, 0x0000A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4D655: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x002200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    case 0xC4D657: {
        Instruction step(cpu, 0x22, 0xC08616u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4D655.
    case 0xC4D658: {
        Instruction step(cpu, 0x16, 0x000086u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/load_town_map_data.asm:61 COPY_TO_VRAM1P @VIRTUAL06, $6000, TOWN_MAP_LABEL_GFX_SIZE, 0
    // Overlapping static entry reached from 0xC4D658.
    case 0xC4D65A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x0018A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:63 LDA #24
    case 0xC4D65B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:63 LDA #24
    // Overlapping static entry reached from 0xC4D65A.
    case 0xC4D65C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:63 LDA #24
    // Overlapping static entry reached from 0xC4D65B.
    case 0xC4D65D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:64 JSL UNKNOWN_C0856B
    case 0xC4D65E: {
        Instruction step(cpu, 0x22, 0xC0856Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:65 SEP #PROC_FLAGS::ACCUM8
    case 0xC4D662: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:66 LDA #$11
    case 0xC4D664: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000011u : 0x008D11u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:67 STA TM_MIRROR
    case 0xC4D666: {
        Instruction step(cpu, 0x8D, 0x00001Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:67 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4D664.
    case 0xC4D667: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:67 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4D667.
    case 0xC4D668: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:68 REP #PROC_FLAGS::ACCUM8
    case 0xC4D669: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:69 STZ BG1_Y_POS
    case 0xC4D66B: {
        Instruction step(cpu, 0x9C, 0x000033u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:70 STZ BG1_X_POS
    case 0xC4D66E: {
        Instruction step(cpu, 0x9C, 0x000031u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:71 JSL UPDATE_SCREEN
    case 0xC4D671: {
        Instruction step(cpu, 0x22, 0xC08B26u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:72 LDX #1
    case 0xC4D675: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:72 LDX #1
    // Overlapping static entry reached from 0xC4D675.
    case 0xC4D677: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:73 LDA #2
    case 0xC4D678: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:73 LDA #2
    // Overlapping static entry reached from 0xC4D678.
    case 0xC4D67A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_town_map_data.asm:74 JSL FADE_IN
    case 0xC4D67B: {
        Instruction step(cpu, 0x22, 0xC0886Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_town_map_data.asm:75 END_C_FUNCTION
    case 0xC4D67F: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/load_town_map_data.asm:75 END_C_FUNCTION
    case 0xC4D680: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
