// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/load_map_palette.asm
bool resume_overworld_load_map_palette(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_map_palette.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC007C6: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_map_palette.asm:12 END_STACK_VARS
    case 0xC007C8: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/load_map_palette.asm:12 END_STACK_VARS
    case 0xC007C9: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_map_palette.asm:12 END_STACK_VARS
    case 0xC007CA: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_palette.asm:12 END_STACK_VARS
    case 0xC007CB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E0u : 0x00FFE0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_map_palette.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC007CB.
    case 0xC007CD: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_map_palette.asm:12 END_STACK_VARS
    case 0xC007CE: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/load_map_palette.asm:12 END_STACK_VARS
    case 0xC007CF: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:13 STA @LOCAL05
    case 0xC007D0: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:13 STA @LOCAL05
    // Overlapping static entry reached from 0xC007CD.
    case 0xC007D1: {
        Instruction step(cpu, 0x1E, 0x0040A0u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:14 LDY #3 * 192
    case 0xC007D2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000040u : 0x000240u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:14 LDY #3 * 192
    // Overlapping static entry reached from 0xC007D2.
    case 0xC007D4: {
        Instruction step(cpu, 0x02, 0x000084u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:15 STY @LOCAL04
    case 0xC007D5: {
        Instruction step(cpu, 0x84, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:16 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC007D7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FDu : 0x0062FDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:16 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC007D7.
    case 0xC007D9: {
        Instruction step(cpu, 0x62, 0x000685u, 3u, AddressMode::Relative16);
        step.push_effective_relative();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_palette.asm:16 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC007DA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:16 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC007DC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EFu : 0x0000EFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:16 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC007DC.
    case 0xC007DE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_palette.asm:16 LOADPTR MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC007DF: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:17 LDA @LOCAL05
    case 0xC007E1: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:18 ASL
    case 0xC007E3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:19 ASL
    case 0xC007E4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:20 CLC
    case 0xC007E5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:21 ADC @VIRTUAL06
    case 0xC007E6: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:22 STA @VIRTUAL06
    case 0xC007E8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_map_palette.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC007EA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/load_map_palette.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC007EA.
    case 0xC007EC: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/load_map_palette.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC007ED: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/load_map_palette.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC007EF: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/load_map_palette.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC007F0: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/load_map_palette.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC007F2: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/load_map_palette.asm:23 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC007F4: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:24 TXA
    case 0xC007F6: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:25 LDY #BPP4PALETTE_SIZE * 6
    case 0xC007F7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000C0u : 0x0000C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:25 LDY #BPP4PALETTE_SIZE * 6
    // Overlapping static entry reached from 0xC007F7.
    case 0xC007F9: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:26 JSL MULT168
    case 0xC007FA: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:27 CLC
    case 0xC007FE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:28 ADC @VIRTUAL06
    case 0xC007FF: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:29 STA @VIRTUAL06
    case 0xC00801: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:30 STA @LOCAL02
    case 0xC00803: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:31 LDA @VIRTUAL06+2
    case 0xC00805: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:32 STA @LOCAL02+2
    case 0xC00807: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:33 LDA PHOTOGRAPH_MAP_LOADING_MODE
    case 0xC00809: {
        Instruction step(cpu, 0xAD, 0x00B6B8u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:34 BNE @UNKNOWN4
    case 0xC0080C: {
        Instruction step(cpu, 0xD0, 0x000065u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_map_palette.asm:36 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC0080E: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_map_palette.asm:36 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC00810: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_map_palette.asm:36 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC00812: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_map_palette.asm:36 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC00814: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_map_palette.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC00816: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_map_palette.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC00818: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_map_palette.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0081A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_map_palette.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC0081C: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:38 LDX #BPP4PALETTE_SIZE * 6
    case 0xC0081E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000C0u : 0x0000C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:38 LDX #BPP4PALETTE_SIZE * 6
    // Overlapping static entry reached from 0xC0081E.
    case 0xC00820: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:39 LDY @LOCAL04
    case 0xC00821: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:40 TYA
    case 0xC00823: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:41 JSL MEMCPY16
    case 0xC00824: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:42 LDY @LOCAL04
    case 0xC00828: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:43 LDA __BSS_START__,Y
    case 0xC0082A: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/load_map_palette.asm:44 BEQL @UNKNOWN5
    case 0xC0082D: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/load_map_palette.asm:44 BEQL @UNKNOWN5
    case 0xC0082F: {
        Instruction step(cpu, 0x4C, 0x0008D1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:45 AND #$7FFF
    case 0xC00832: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x007FFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:45 AND #$7FFF
    // Overlapping static entry reached from 0xC00832.
    case 0xC00834: {
        Instruction step(cpu, 0x7F, 0x14D022u, 4u, AddressMode::LongIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:46 JSL GET_EVENT_FLAG
    case 0xC00835: {
        Instruction step(cpu, 0x22, 0xC214D0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:46 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC00834.
    case 0xC00838: {
        Instruction step(cpu, 0xC2, 0x000085u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:47 STA @LOCAL03
    case 0xC00839: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:47 STA @LOCAL03
    // Overlapping static entry reached from 0xC00838.
    case 0xC0083A: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:48 LDX #0
    case 0xC0083B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:48 LDX #0
    // Overlapping static entry reached from 0xC0083B.
    case 0xC0083D: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:49 LDY @LOCAL04
    case 0xC0083E: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:50 LDA __BSS_START__,Y
    case 0xC00840: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:51 CMP #EVENT_FLAG_UNSET
    case 0xC00843: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:51 CMP #EVENT_FLAG_UNSET
    // Overlapping static entry reached from 0xC00843.
    case 0xC00845: {
        Instruction step(cpu, 0x80, 0x000090u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/load_map_palette.asm:52 BLTEQ @UNKNOWN2
    case 0xC00846: {
        Instruction step(cpu, 0x90, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/load_map_palette.asm:52 BLTEQ @UNKNOWN2
    case 0xC00848: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:53 LDX #1
    case 0xC0084A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:53 LDX #1
    // Overlapping static entry reached from 0xC0084A.
    case 0xC0084C: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:55 STX @VIRTUAL02
    case 0xC0084D: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:56 LDA @LOCAL03
    case 0xC0084F: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:57 CMP @VIRTUAL02
    case 0xC00851: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/load_map_palette.asm:58 BNEL @UNKNOWN5
    case 0xC00853: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/load_map_palette.asm:58 BNEL @UNKNOWN5
    case 0xC00855: {
        Instruction step(cpu, 0x4C, 0x0008D1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_map_palette.asm:59 MOVE_INT f:MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC00858: {
        Instruction step(cpu, 0xAF, 0xEF62FDu, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_map_palette.asm:59 MOVE_INT f:MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC0085C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_map_palette.asm:59 MOVE_INT f:MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC0085E: {
        Instruction step(cpu, 0xAF, 0xEF62FFu, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_map_palette.asm:59 MOVE_INT f:MAP_PALETTE_PTR_TABLE, @VIRTUAL06
    case 0xC00862: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_map_palette.asm:60 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC00864: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_map_palette.asm:60 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC00866: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_map_palette.asm:60 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC00868: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_map_palette.asm:60 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC0086A: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:61 LDA __BSS_START__ + BPP4PALETTE_SIZE * 1,Y
    case 0xC0086C: {
        Instruction step(cpu, 0xB9, 0x000020u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:62 STA @LOCAL02
    case 0xC0086F: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:63 BRA @UNKNOWN0
    case 0xC00871: {
        Instruction step(cpu, 0x80, 0x00009Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:65 LOADPTR BUFFER, @VIRTUAL06
    case 0xC00873: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:65 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC00873.
    case 0xC00875: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_palette.asm:65 LOADPTR BUFFER, @VIRTUAL06
    case 0xC00876: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:65 LOADPTR BUFFER, @VIRTUAL06
    case 0xC00878: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00007Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:65 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC00878.
    case 0xC0087A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_palette.asm:65 LOADPTR BUFFER, @VIRTUAL06
    case 0xC0087B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:66 LOADPTR COMPRESSED_PALETTE_UNKNOWN, @LOCAL00
    case 0xC0087D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A1u : 0x002BA1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:66 LOADPTR COMPRESSED_PALETTE_UNKNOWN, @LOCAL00
    // Overlapping static entry reached from 0xC0087D.
    case 0xC0087F: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_map_palette.asm:66 LOADPTR COMPRESSED_PALETTE_UNKNOWN, @LOCAL00
    case 0xC00880: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:66 LOADPTR COMPRESSED_PALETTE_UNKNOWN, @LOCAL00
    case 0xC00882: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x0000E1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_map_palette.asm:66 LOADPTR COMPRESSED_PALETTE_UNKNOWN, @LOCAL00
    // Overlapping static entry reached from 0xC00882.
    case 0xC00884: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_map_palette.asm:66 LOADPTR COMPRESSED_PALETTE_UNKNOWN, @LOCAL00
    case 0xC00885: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_map_palette.asm:67 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC00887: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_map_palette.asm:67 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC00889: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_map_palette.asm:67 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0088B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_map_palette.asm:67 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0088D: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:68 JSL DECOMP
    case 0xC0088F: {
        Instruction step(cpu, 0x22, 0xC419EAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_map_palette.asm:69 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC00893: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_map_palette.asm:69 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC00895: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_map_palette.asm:69 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC00897: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_map_palette.asm:69 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC00899: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:70 LDA CUR_PHOTO_DISPLAY
    case 0xC0089B: {
        Instruction step(cpu, 0xAD, 0x00B6BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:71 LDY #.SIZEOF(photographer_config_entry)
    case 0xC0089E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00003Eu : 0x00003Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:71 LDY #.SIZEOF(photographer_config_entry)
    // Overlapping static entry reached from 0xC0089E.
    case 0xC008A0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:72 JSL MULT168
    case 0xC008A1: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:73 CLC
    case 0xC008A5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:74 ADC #photographer_config_entry::credits_map_palettes_offset
    case 0xC008A6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:74 ADC #photographer_config_entry::credits_map_palettes_offset
    // Overlapping static entry reached from 0xC008A6.
    case 0xC008A8: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:75 TAX
    case 0xC008A9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:76 LDA f:PHOTOGRAPHER_CFG_TABLE,X
    case 0xC008AA: {
        Instruction step(cpu, 0xBF, 0xE123E1u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/load_map_palette.asm:77 STORE_INT1632 @VIRTUAL06
    case 0xC008AE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/load_map_palette.asm:77 STORE_INT1632 @VIRTUAL06
    case 0xC008B0: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:78 CLC
    case 0xC008B2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/load_map_palette.asm:79 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC008B3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/load_map_palette.asm:79 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC008B5: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/load_map_palette.asm:79 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC008B7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/load_map_palette.asm:79 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC008B9: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/load_map_palette.asm:79 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC008BB: {
        Instruction step(cpu, 0x65, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/load_map_palette.asm:79 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC008BD: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/load_map_palette.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC008BF: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/load_map_palette.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC008C1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/load_map_palette.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC008C3: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/load_map_palette.asm:80 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC008C5: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:81 LDX #BPP4PALETTE_SIZE * 6
    case 0xC008C7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000C0u : 0x0000C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:81 LDX #BPP4PALETTE_SIZE * 6
    // Overlapping static entry reached from 0xC008C7.
    case 0xC008C9: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:82 LDY @LOCAL04
    case 0xC008CA: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:83 TYA
    case 0xC008CC: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_map_palette.asm:84 JSL MEMCPY16
    case 0xC008CD: {
        Instruction step(cpu, 0x22, 0xC08EC3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_map_palette.asm:86 END_C_FUNCTION
    case 0xC008D1: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/load_map_palette.asm:86 END_C_FUNCTION
    case 0xC008D2: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
