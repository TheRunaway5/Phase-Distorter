// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/door_transition.asm
bool resume_overworld_door_transition(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/door_transition.asm:3 BEGIN_C_FUNCTION
    case 0xC06BFF: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/door_transition.asm:10 END_STACK_VARS
    case 0xC06C01: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/door_transition.asm:10 END_STACK_VARS
    case 0xC06C02: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/door_transition.asm:10 END_STACK_VARS
    case 0xC06C03: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E6u : 0x00FFE6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/door_transition.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC06C03.
    case 0xC06C05: {
        Instruction step(cpu, 0xFF, 0x28A55Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/door_transition.asm:10 END_STACK_VARS
    case 0xC06C06: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/door_transition.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC06C07: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/door_transition.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC06C09: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/door_transition.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC06C0B: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/door_transition.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC06C0D: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/door_transition.asm:12 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC06C0F: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/door_transition.asm:12 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC06C11: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/door_transition.asm:12 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC06C13: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/door_transition.asm:12 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC06C15: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/door_transition.asm:13 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC06C17: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/door_transition.asm:13 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC06C19: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/door_transition.asm:13 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC06C1B: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/door_transition.asm:13 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC06C1D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/door_transition.asm:14 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC06C1F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/door_transition.asm:14 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC06C1F.
    case 0xC06C21: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/door_transition.asm:14 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC06C22: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/door_transition.asm:14 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC06C24: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/door_transition.asm:14 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC06C25: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/door_transition.asm:14 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC06C27: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/door_transition.asm:14 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC06C29: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/door_transition.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC06C2B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/door_transition.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC06C2B.
    case 0xC06C2D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/door_transition.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC06C2E: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/door_transition.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC06C30: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/door_transition.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC06C30.
    case 0xC06C32: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/door_transition.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC06C33: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/door_transition.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC06C35: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/door_transition.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC06C37: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/door_transition.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC06C39: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/door_transition.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC06C3B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/door_transition.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC06C3D: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:17 BEQ @UNKNOWN1
    case 0xC06C3F: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/door_transition.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00 ;door_data::text
    case 0xC06C41: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/door_transition.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00 ;door_data::text
    case 0xC06C43: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/door_transition.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00 ;door_data::text
    case 0xC06C45: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/door_transition.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00 ;door_data::text
    case 0xC06C47: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:19 JSL UNKNOWN_C10004
    case 0xC06C49: {
        Instruction step(cpu, 0x22, 0xC10004u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:21 STZ LADDER_STAIRS_TILE_Y
    case 0xC06C4D: {
        Instruction step(cpu, 0x9C, 0x005DAAu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:22 STZ LADDER_STAIRS_TILE_X
    case 0xC06C50: {
        Instruction step(cpu, 0x9C, 0x005DA8u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:23 LDA #door_data::event_flag
    case 0xC06C53: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:23 LDA #door_data::event_flag
    // Overlapping static entry reached from 0xC06C53.
    case 0xC06C55: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/door_transition.asm:24 MOVE_INTX @LOCAL03, @VIRTUAL0A
    case 0xC06C56: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/door_transition.asm:24 MOVE_INTX @LOCAL03, @VIRTUAL0A
    case 0xC06C58: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/door_transition.asm:24 MOVE_INTX @LOCAL03, @VIRTUAL0A
    case 0xC06C5A: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/door_transition.asm:24 MOVE_INTX @LOCAL03, @VIRTUAL0A
    case 0xC06C5C: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/door_transition.asm:25 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06C5E: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/door_transition.asm:25 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06C60: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/door_transition.asm:25 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06C62: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/door_transition.asm:25 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06C64: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:26 CLC
    case 0xC06C66: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/door_transition.asm:27 ADC @VIRTUAL06
    case 0xC06C67: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/door_transition.asm:28 STA @VIRTUAL06
    case 0xC06C69: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:29 LDA [@VIRTUAL06]
    case 0xC06C6B: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:30 BEQ @UNKNOWN3
    case 0xC06C6D: {
        Instruction step(cpu, 0xF0, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:31 AND #$7FFF
    case 0xC06C6F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x007FFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:31 AND #$7FFF
    // Overlapping static entry reached from 0xC06C6F.
    case 0xC06C71: {
        Instruction step(cpu, 0x7F, 0x162822u, 4u, AddressMode::LongIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/door_transition.asm:32 JSL GET_EVENT_FLAG
    case 0xC06C72: {
        Instruction step(cpu, 0x22, 0xC21628u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:32 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC06C71.
    case 0xC06C75: {
        Instruction step(cpu, 0xC2, 0x000085u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/door_transition.asm:33 STA @LOCAL02
    case 0xC06C76: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:33 STA @LOCAL02
    // Overlapping static entry reached from 0xC06C75.
    case 0xC06C77: {
        Instruction step(cpu, 0x14, 0x0000A2u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/overworld/door_transition.asm:34 LDX #0
    case 0xC06C78: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:34 LDX #0
    // Overlapping static entry reached from 0xC06C77.
    case 0xC06C79: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:34 LDX #0
    // Overlapping static entry reached from 0xC06C78.
    case 0xC06C7A: {
        Instruction step(cpu, 0x00, 0x0000A7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:35 LDA [@VIRTUAL06]
    case 0xC06C7B: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:36 CMP #EVENT_FLAG_UNSET
    case 0xC06C7D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:36 CMP #EVENT_FLAG_UNSET
    // Overlapping static entry reached from 0xC06C7D.
    case 0xC06C7F: {
        Instruction step(cpu, 0x80, 0x000090u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/door_transition.asm:37 BLTEQ @UNKNOWN2
    case 0xC06C80: {
        Instruction step(cpu, 0x90, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/door_transition.asm:37 BLTEQ @UNKNOWN2
    case 0xC06C82: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:38 LDX #1
    case 0xC06C84: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:38 LDX #1
    // Overlapping static entry reached from 0xC06C84.
    case 0xC06C86: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:40 STX @VIRTUAL02
    case 0xC06C87: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:41 LDA @LOCAL02
    case 0xC06C89: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:42 CMP @VIRTUAL02
    case 0xC06C8B: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:43 BEQ @UNKNOWN3
    case 0xC06C8D: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:44 STZ USING_DOOR
    case 0xC06C8F: {
        Instruction step(cpu, 0x9C, 0x005DC2u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:45 JMP @UNKNOWN15
    case 0xC06C92: {
        Instruction step(cpu, 0x4C, 0x006E00u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/door_transition.asm:47 LDY #1
    case 0xC06C95: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/door_transition.asm:47 LDY #1
    // Overlapping static entry reached from 0xC06C95.
    case 0xC06C97: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:48 STY @LOCAL01
    case 0xC06C98: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/door_transition.asm:49 BRA @UNKNOWN5
    case 0xC06C9A: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/door_transition.asm:51 LDX #0
    case 0xC06C9C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:51 LDX #0
    // Overlapping static entry reached from 0xC06C9C.
    case 0xC06C9E: {
        Instruction step(cpu, 0x00, 0x000098u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:52 TYA
    case 0xC06C9F: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:53 JSL SET_EVENT_FLAG
    case 0xC06CA0: {
        Instruction step(cpu, 0x22, 0xC2165Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:54 LDY @LOCAL01
    case 0xC06CA4: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/door_transition.asm:55 INY
    case 0xC06CA6: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/door_transition.asm:56 STY @LOCAL01
    case 0xC06CA7: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/door_transition.asm:58 CPY #10
    case 0xC06CA9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/door_transition.asm:58 CPY #10
    // Overlapping static entry reached from 0xC06CA9.
    case 0xC06CAB: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/door_transition.asm:59 BLTEQ @UNKNOWN4
    case 0xC06CAC: {
        Instruction step(cpu, 0x90, 0x0000EEu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/door_transition.asm:59 BLTEQ @UNKNOWN4
    case 0xC06CAE: {
        Instruction step(cpu, 0xF0, 0x0000ECu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:60 JSL UNKNOWN_C06B3D
    case 0xC06CB0: {
        Instruction step(cpu, 0x22, 0xC06B3Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:61 JSL UNKNOWN_C07C5B
    case 0xC06CB4: {
        Instruction step(cpu, 0x22, 0xC07C5Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:62 LDA #$FFFF
    case 0xC06CB8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:62 LDA #$FFFF
    // Overlapping static entry reached from 0xC06CB8.
    case 0xC06CBA: {
        Instruction step(cpu, 0xFF, 0xB4A88Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/door_transition.asm:63 STA ENTITY_FADE_ENTITY
    case 0xC06CBB: {
        Instruction step(cpu, 0x8D, 0x00B4A8u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:64 STZ PLAYER_INTANGIBILITY_FRAMES
    case 0xC06CBE: {
        Instruction step(cpu, 0x9C, 0x005D58u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:65 LDA #door_data::unknown10
    case 0xC06CC1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:65 LDA #door_data::unknown10
    // Overlapping static entry reached from 0xC06CC1.
    case 0xC06CC3: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/door_transition.asm:66 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06CC4: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/door_transition.asm:66 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06CC6: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/door_transition.asm:66 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06CC8: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/door_transition.asm:66 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06CCA: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:67 CLC
    case 0xC06CCC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/door_transition.asm:68 ADC @VIRTUAL06
    case 0xC06CCD: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/door_transition.asm:69 STA @VIRTUAL06
    case 0xC06CCF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:70 LDX #1
    case 0xC06CD1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:70 LDX #1
    // Overlapping static entry reached from 0xC06CD1.
    case 0xC06CD3: {
        Instruction step(cpu, 0x00, 0x0000A7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:71 LDA [@VIRTUAL06]
    case 0xC06CD4: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:72 AND #$00FF
    case 0xC06CD6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:72 AND #$00FF
    // Overlapping static entry reached from 0xC06CD6.
    case 0xC06CD8: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:73 JSL GET_SCREEN_TRANSITION_SOUND_EFFECT
    case 0xC06CD9: {
        Instruction step(cpu, 0x22, 0xC068AFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:74 JSL PLAY_SOUND
    case 0xC06CDD: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:75 LDA DISABLED_TRANSITIONS
    case 0xC06CE1: {
        Instruction step(cpu, 0xAD, 0x00B4B6u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:76 BEQ @UNKNOWN6
    case 0xC06CE4: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:77 LDX #1
    case 0xC06CE6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:77 LDX #1
    // Overlapping static entry reached from 0xC06CE6.
    case 0xC06CE8: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:78 TXA
    case 0xC06CE9: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:79 JSL FADE_OUT
    case 0xC06CEA: {
        Instruction step(cpu, 0x22, 0xC0887Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:80 BRA @UNKNOWN7
    case 0xC06CEE: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/door_transition.asm:82 LDX #1
    case 0xC06CF0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:82 LDX #1
    // Overlapping static entry reached from 0xC06CF0.
    case 0xC06CF2: {
        Instruction step(cpu, 0x00, 0x0000A7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:83 LDA [@VIRTUAL06]
    case 0xC06CF3: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:84 AND #$00FF
    case 0xC06CF5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:84 AND #$00FF
    // Overlapping static entry reached from 0xC06CF5.
    case 0xC06CF7: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:85 JSL SCREEN_TRANSITION
    case 0xC06CF8: {
        Instruction step(cpu, 0x22, 0xC06662u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:87 LDY #door_data::unknown8
    case 0xC06CFC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/door_transition.asm:87 LDY #door_data::unknown8
    // Overlapping static entry reached from 0xC06CFC.
    case 0xC06CFE: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:88 LDA [@VIRTUAL0A],Y
    case 0xC06CFF: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:89 ASL
    case 0xC06D01: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/door_transition.asm:90 ASL
    case 0xC06D02: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/door_transition.asm:91 ASL
    case 0xC06D03: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/door_transition.asm:92 STA @VIRTUAL02
    case 0xC06D04: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:93 LDY #door_data::unknown6
    case 0xC06D06: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/door_transition.asm:93 LDY #door_data::unknown6
    // Overlapping static entry reached from 0xC06D06.
    case 0xC06D08: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:94 LDA [@VIRTUAL0A],Y
    case 0xC06D09: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:95 STA @LOCAL02
    case 0xC06D0B: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:96 AND #$3FFF
    case 0xC06D0D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x003FFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:96 AND #$3FFF
    // Overlapping static entry reached from 0xC06D0D.
    case 0xC06D0F: {
        Instruction step(cpu, 0x3F, 0x0A0A0Au, 4u, AddressMode::LongIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:97 ASL
    case 0xC06D10: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/door_transition.asm:98 ASL
    case 0xC06D11: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/door_transition.asm:99 ASL
    case 0xC06D12: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/door_transition.asm:100 STA @VIRTUAL04
    case 0xC06D13: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:101 SEP #PROC_FLAGS::ACCUM8
    case 0xC06D15: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/door_transition.asm:102 LDA #14
    case 0xC06D17: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00E20Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:103 SEP #PROC_FLAGS::INDEX8
    case 0xC06D19: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/door_transition.asm:103 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC06D17.
    case 0xC06D1A: {
        Instruction step(cpu, 0x10, 0x0000A8u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/door_transition.asm:104 TAY
    case 0xC06D1B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/door_transition.asm:105 REP #PROC_FLAGS::ACCUM8
    case 0xC06D1C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/door_transition.asm:106 LDA @LOCAL02
    case 0xC06D1E: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:107 JSL ASR8_UNKNOWN1
    case 0xC06D20: {
        Instruction step(cpu, 0x22, 0xC09251u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:108 ASL
    case 0xC06D24: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/door_transition.asm:109 REP #PROC_FLAGS::INDEX8
    case 0xC06D25: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/door_transition.asm:110 TAX
    case 0xC06D27: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:111 LDA f:UNKNOWN_C3E1D8,X
    case 0xC06D28: {
        Instruction step(cpu, 0xBF, 0xC3E1D8u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:112 CMP #2
    case 0xC06D2C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:112 CMP #2
    // Overlapping static entry reached from 0xC06D2C.
    case 0xC06D2E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:113 BEQ @UNKNOWN8
    case 0xC06D2F: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:114 LDA @VIRTUAL02
    case 0xC06D31: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:115 CLC
    case 0xC06D33: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/door_transition.asm:116 ADC #8
    case 0xC06D34: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/door_transition.asm:116 ADC #8
    // Overlapping static entry reached from 0xC06D34.
    case 0xC06D36: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:117 STA @VIRTUAL02
    case 0xC06D37: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:119 LDA DEBUG
    case 0xC06D39: {
        Instruction step(cpu, 0xAD, 0x00436Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:120 BEQ @UNKNOWN10
    case 0xC06D3C: {
        Instruction step(cpu, 0xF0, 0x000027u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:121 LDA DEBUG_MODE_NUMBER
    case 0xC06D3E: {
        Instruction step(cpu, 0xAD, 0x00B559u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:122 CMP #6
    case 0xC06D41: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:122 CMP #6
    // Overlapping static entry reached from 0xC06D41.
    case 0xC06D43: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:123 BEQ @UNKNOWN9
    case 0xC06D44: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:124 LDX @VIRTUAL04
    case 0xC06D46: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:125 LDA @VIRTUAL02
    case 0xC06D48: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:126 JSL UNKNOWN_C068F4
    case 0xC06D4A: {
        Instruction step(cpu, 0x22, 0xC068F4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:128 LDA REPLAY_MODE_ACTIVE
    case 0xC06D4E: {
        Instruction step(cpu, 0xAD, 0x00B567u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:129 BNE @UNKNOWN11
    case 0xC06D51: {
        Instruction step(cpu, 0xD0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:130 SEP #PROC_FLAGS::ACCUM8
    case 0xC06D53: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/door_transition.asm:131 LDY #door_data::unknown10
    case 0xC06D55: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/door_transition.asm:131 LDY #door_data::unknown10
    // Overlapping static entry reached from 0xC06D55.
    case 0xC06D57: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:132 LDA [@VIRTUAL0A],Y
    case 0xC06D58: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:133 REP #PROC_FLAGS::ACCUM8
    case 0xC06D5A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/door_transition.asm:134 AND #$00FF
    case 0xC06D5C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:134 AND #$00FF
    // Overlapping static entry reached from 0xC06D5C.
    case 0xC06D5E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:135 JSL UNKNOWN_EFE895
    case 0xC06D5F: {
        Instruction step(cpu, 0x22, 0xEFE895u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:136 BRA @UNKNOWN11
    case 0xC06D63: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/door_transition.asm:138 LDX @VIRTUAL04
    case 0xC06D65: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:139 LDA @VIRTUAL02
    case 0xC06D67: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:140 JSL UNKNOWN_C068F4
    case 0xC06D69: {
        Instruction step(cpu, 0x22, 0xC068F4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:142 LDX @VIRTUAL04
    case 0xC06D6D: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:143 LDA @VIRTUAL02
    case 0xC06D6F: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:144 JSL LOAD_MAP_AT_POSITION
    case 0xC06D71: {
        Instruction step(cpu, 0x22, 0xC013F6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:145 STZ PLAYER_HAS_MOVED_SINCE_MAP_LOAD
    case 0xC06D75: {
        Instruction step(cpu, 0x9C, 0x002890u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:146 STZ GAME_STATE+game_state::walking_style
    case 0xC06D78: {
        Instruction step(cpu, 0x9C, 0x009883u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:147 SEP #PROC_FLAGS::ACCUM8
    case 0xC06D7B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/door_transition.asm:148 LDA #14
    case 0xC06D7D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00480Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:149 PHA
    case 0xC06D7F: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:150 REP #PROC_FLAGS::ACCUM8
    case 0xC06D80: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/door_transition.asm:151 LDY #door_data::unknown6
    case 0xC06D82: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/door_transition.asm:151 LDY #door_data::unknown6
    // Overlapping static entry reached from 0xC06D82.
    case 0xC06D84: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:152 LDA [@VIRTUAL0A],Y
    case 0xC06D85: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:153 SEP #PROC_FLAGS::INDEX8
    case 0xC06D87: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/door_transition.asm:154 PLY
    case 0xC06D89: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/overworld/door_transition.asm:155 JSL ASR8_UNKNOWN1
    case 0xC06D8A: {
        Instruction step(cpu, 0x22, 0xC09251u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:156 ASL
    case 0xC06D8E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/door_transition.asm:157 REP #PROC_FLAGS::INDEX8
    case 0xC06D8F: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/door_transition.asm:158 TAX
    case 0xC06D91: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:159 LDA f:UNKNOWN_C3E1D8,X
    case 0xC06D92: {
        Instruction step(cpu, 0xBF, 0xC3E1D8u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:160 TAY
    case 0xC06D96: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/door_transition.asm:161 LDX @VIRTUAL04
    case 0xC06D97: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:162 LDA @VIRTUAL02
    case 0xC06D99: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:163 JSL UNKNOWN_C03FA9
    case 0xC06D9B: {
        Instruction step(cpu, 0x22, 0xC03FA9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:164 LDA DEBUG
    case 0xC06D9F: {
        Instruction step(cpu, 0xAD, 0x00436Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:165 BEQ @UNKNOWN12
    case 0xC06DA2: {
        Instruction step(cpu, 0xF0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:166 LDA REPLAY_MODE_ACTIVE
    case 0xC06DA4: {
        Instruction step(cpu, 0xAD, 0x00B567u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:167 BNE @UNKNOWN12
    case 0xC06DA7: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:168 JSL SAVE_REPLAY_SAVE_SLOT
    case 0xC06DA9: {
        Instruction step(cpu, 0x22, 0xEFE771u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:170 JSL UNKNOWN_C069AF
    case 0xC06DAD: {
        Instruction step(cpu, 0x22, 0xC069AFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:171 JSL UNKNOWN_C065A3
    case 0xC06DB1: {
        Instruction step(cpu, 0x22, 0xC065A3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:172 LDA #door_data::unknown10
    case 0xC06DB5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:172 LDA #door_data::unknown10
    // Overlapping static entry reached from 0xC06DB5.
    case 0xC06DB7: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/door_transition.asm:173 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06DB8: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/door_transition.asm:173 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06DBA: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/door_transition.asm:173 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06DBC: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/door_transition.asm:173 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06DBE: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:174 CLC
    case 0xC06DC0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/door_transition.asm:175 ADC @VIRTUAL06
    case 0xC06DC1: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/door_transition.asm:176 STA @VIRTUAL06
    case 0xC06DC3: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:177 LDX #0
    case 0xC06DC5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:177 LDX #0
    // Overlapping static entry reached from 0xC06DC5.
    case 0xC06DC7: {
        Instruction step(cpu, 0x00, 0x0000A7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:178 LDA [@VIRTUAL06]
    case 0xC06DC8: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:179 AND #$00FF
    case 0xC06DCA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:179 AND #$00FF
    // Overlapping static entry reached from 0xC06DCA.
    case 0xC06DCC: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:180 JSL GET_SCREEN_TRANSITION_SOUND_EFFECT
    case 0xC06DCD: {
        Instruction step(cpu, 0x22, 0xC068AFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:181 JSL PLAY_SOUND
    case 0xC06DD1: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:182 LDA DISABLED_TRANSITIONS
    case 0xC06DD5: {
        Instruction step(cpu, 0xAD, 0x00B4B6u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:183 BEQ @UNKNOWN13
    case 0xC06DD8: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:184 LDX #1
    case 0xC06DDA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:184 LDX #1
    // Overlapping static entry reached from 0xC06DDA.
    case 0xC06DDC: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:185 TXA
    case 0xC06DDD: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:186 JSL FADE_IN
    case 0xC06DDE: {
        Instruction step(cpu, 0x22, 0xC0886Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:187 BRA @UNKNOWN14
    case 0xC06DE2: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/door_transition.asm:189 LDX #0
    case 0xC06DE4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:189 LDX #0
    // Overlapping static entry reached from 0xC06DE4.
    case 0xC06DE6: {
        Instruction step(cpu, 0x00, 0x0000A7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:190 LDA [@VIRTUAL06]
    case 0xC06DE7: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:191 AND #$00FF
    case 0xC06DE9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:191 AND #$00FF
    // Overlapping static entry reached from 0xC06DE9.
    case 0xC06DEB: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:192 JSL SCREEN_TRANSITION
    case 0xC06DEC: {
        Instruction step(cpu, 0x22, 0xC06662u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:194 LDA #$FFFF
    case 0xC06DF0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:194 LDA #$FFFF
    // Overlapping static entry reached from 0xC06DF0.
    case 0xC06DF2: {
        Instruction step(cpu, 0xFF, 0x5DC48Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/door_transition.asm:195 STA STAIRS_DIRECTION
    case 0xC06DF3: {
        Instruction step(cpu, 0x8D, 0x005DC4u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:196 STZ PLAYER_HAS_DONE_SOMETHING_THIS_FRAME
    case 0xC06DF6: {
        Instruction step(cpu, 0x9C, 0x000A34u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:197 JSL SPAWN_BUZZ_BUZZ
    case 0xC06DF9: {
        Instruction step(cpu, 0x22, 0xC06B21u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:198 STZ USING_DOOR
    case 0xC06DFD: {
        Instruction step(cpu, 0x9C, 0x005DC2u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/door_transition.asm:200 END_C_FUNCTION
    case 0xC06E00: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/door_transition.asm:200 END_C_FUNCTION
    case 0xC06E01: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
