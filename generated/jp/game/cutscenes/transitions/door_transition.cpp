// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/door_transition.asm
bool resume_overworld_door_transition(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/door_transition.asm:3 BEGIN_C_FUNCTION
    case 0xC06E2D: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/door_transition.asm:10 END_STACK_VARS
    case 0xC06E2F: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/door_transition.asm:10 END_STACK_VARS
    case 0xC06E30: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/door_transition.asm:10 END_STACK_VARS
    case 0xC06E31: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E6u : 0x00FFE6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/door_transition.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC06E31.
    case 0xC06E33: {
        Instruction step(cpu, 0xFF, 0x28A55Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/door_transition.asm:10 END_STACK_VARS
    case 0xC06E34: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/door_transition.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC06E35: {
        Instruction step(cpu, 0xA5, 0x000028u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/door_transition.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC06E37: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/door_transition.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC06E39: {
        Instruction step(cpu, 0xA5, 0x00002Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/door_transition.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC06E3B: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/door_transition.asm:12 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC06E3D: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/door_transition.asm:12 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC06E3F: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/door_transition.asm:12 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC06E41: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/door_transition.asm:12 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC06E43: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/door_transition.asm:13 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC06E45: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/door_transition.asm:13 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC06E47: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/door_transition.asm:13 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC06E49: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/door_transition.asm:13 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC06E4B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/door_transition.asm:14 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC06E4D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/door_transition.asm:14 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC06E4D.
    case 0xC06E4F: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/door_transition.asm:14 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC06E50: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/door_transition.asm:14 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC06E52: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/door_transition.asm:14 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC06E53: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/door_transition.asm:14 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC06E55: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/door_transition.asm:14 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC06E57: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/door_transition.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC06E59: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/door_transition.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC06E59.
    case 0xC06E5B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/door_transition.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC06E5C: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/door_transition.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC06E5E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/door_transition.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC06E5E.
    case 0xC06E60: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/door_transition.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC06E61: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/door_transition.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC06E63: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/door_transition.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC06E65: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/door_transition.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC06E67: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/door_transition.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC06E69: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/door_transition.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC06E6B: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:17 BEQ @UNKNOWN1
    case 0xC06E6D: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/door_transition.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00 ;door_data::text
    case 0xC06E6F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/door_transition.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00 ;door_data::text
    case 0xC06E71: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/door_transition.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00 ;door_data::text
    case 0xC06E73: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/door_transition.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00 ;door_data::text
    case 0xC06E75: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:19 JSL UNKNOWN_C10004
    case 0xC06E77: {
        Instruction step(cpu, 0x22, 0xC10000u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:21 STZ LADDER_STAIRS_TILE_Y
    case 0xC06E7B: {
        Instruction step(cpu, 0x9C, 0x006130u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:22 STZ LADDER_STAIRS_TILE_X
    case 0xC06E7E: {
        Instruction step(cpu, 0x9C, 0x00612Eu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:23 LDA #door_data::event_flag
    case 0xC06E81: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:23 LDA #door_data::event_flag
    // Overlapping static entry reached from 0xC06E81.
    case 0xC06E83: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/door_transition.asm:24 MOVE_INTX @LOCAL03, @VIRTUAL0A
    case 0xC06E84: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/door_transition.asm:24 MOVE_INTX @LOCAL03, @VIRTUAL0A
    case 0xC06E86: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/door_transition.asm:24 MOVE_INTX @LOCAL03, @VIRTUAL0A
    case 0xC06E88: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/door_transition.asm:24 MOVE_INTX @LOCAL03, @VIRTUAL0A
    case 0xC06E8A: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/door_transition.asm:25 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06E8C: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/door_transition.asm:25 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06E8E: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/door_transition.asm:25 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06E90: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/door_transition.asm:25 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06E92: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:26 CLC
    case 0xC06E94: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/door_transition.asm:27 ADC @VIRTUAL06
    case 0xC06E95: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/door_transition.asm:28 STA @VIRTUAL06
    case 0xC06E97: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:29 LDA [@VIRTUAL06]
    case 0xC06E99: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:30 BEQ @UNKNOWN3
    case 0xC06E9B: {
        Instruction step(cpu, 0xF0, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:31 AND #$7FFF
    case 0xC06E9D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x007FFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:31 AND #$7FFF
    // Overlapping static entry reached from 0xC06E9D.
    case 0xC06E9F: {
        Instruction step(cpu, 0x7F, 0x14D022u, 4u, AddressMode::LongIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/door_transition.asm:32 JSL GET_EVENT_FLAG
    case 0xC06EA0: {
        Instruction step(cpu, 0x22, 0xC214D0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:32 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC06E9F.
    case 0xC06EA3: {
        Instruction step(cpu, 0xC2, 0x000085u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/door_transition.asm:33 STA @LOCAL02
    case 0xC06EA4: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:33 STA @LOCAL02
    // Overlapping static entry reached from 0xC06EA3.
    case 0xC06EA5: {
        Instruction step(cpu, 0x14, 0x0000A2u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/overworld/door_transition.asm:34 LDX #0
    case 0xC06EA6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:34 LDX #0
    // Overlapping static entry reached from 0xC06EA5.
    case 0xC06EA7: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:34 LDX #0
    // Overlapping static entry reached from 0xC06EA6.
    case 0xC06EA8: {
        Instruction step(cpu, 0x00, 0x0000A7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:35 LDA [@VIRTUAL06]
    case 0xC06EA9: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:36 CMP #EVENT_FLAG_UNSET
    case 0xC06EAB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:36 CMP #EVENT_FLAG_UNSET
    // Overlapping static entry reached from 0xC06EAB.
    case 0xC06EAD: {
        Instruction step(cpu, 0x80, 0x000090u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/door_transition.asm:37 BLTEQ @UNKNOWN2
    case 0xC06EAE: {
        Instruction step(cpu, 0x90, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/door_transition.asm:37 BLTEQ @UNKNOWN2
    case 0xC06EB0: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:38 LDX #1
    case 0xC06EB2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:38 LDX #1
    // Overlapping static entry reached from 0xC06EB2.
    case 0xC06EB4: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:40 STX @VIRTUAL02
    case 0xC06EB5: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:41 LDA @LOCAL02
    case 0xC06EB7: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:42 CMP @VIRTUAL02
    case 0xC06EB9: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:43 BEQ @UNKNOWN3
    case 0xC06EBB: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:44 STZ USING_DOOR
    case 0xC06EBD: {
        Instruction step(cpu, 0x9C, 0x006148u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:45 JMP @UNKNOWN15
    case 0xC06EC0: {
        Instruction step(cpu, 0x4C, 0x00702Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/door_transition.asm:47 LDY #1
    case 0xC06EC3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/door_transition.asm:47 LDY #1
    // Overlapping static entry reached from 0xC06EC3.
    case 0xC06EC5: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:48 STY @LOCAL01
    case 0xC06EC6: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/door_transition.asm:49 BRA @UNKNOWN5
    case 0xC06EC8: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/door_transition.asm:51 LDX #0
    case 0xC06ECA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:51 LDX #0
    // Overlapping static entry reached from 0xC06ECA.
    case 0xC06ECC: {
        Instruction step(cpu, 0x00, 0x000098u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:52 TYA
    case 0xC06ECD: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:53 JSL SET_EVENT_FLAG
    case 0xC06ECE: {
        Instruction step(cpu, 0x22, 0xC21506u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:54 LDY @LOCAL01
    case 0xC06ED2: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/door_transition.asm:55 INY
    case 0xC06ED4: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/door_transition.asm:56 STY @LOCAL01
    case 0xC06ED5: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/door_transition.asm:58 CPY #10
    case 0xC06ED7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/door_transition.asm:58 CPY #10
    // Overlapping static entry reached from 0xC06ED7.
    case 0xC06ED9: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/door_transition.asm:59 BLTEQ @UNKNOWN4
    case 0xC06EDA: {
        Instruction step(cpu, 0x90, 0x0000EEu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/door_transition.asm:59 BLTEQ @UNKNOWN4
    case 0xC06EDC: {
        Instruction step(cpu, 0xF0, 0x0000ECu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:60 JSL UNKNOWN_C06B3D
    case 0xC06EDE: {
        Instruction step(cpu, 0x22, 0xC06D6Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:61 JSL UNKNOWN_C07C5B
    case 0xC06EE2: {
        Instruction step(cpu, 0x22, 0xC07EABu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:62 LDA #$FFFF
    case 0xC06EE6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:62 LDA #$FFFF
    // Overlapping static entry reached from 0xC06EE6.
    case 0xC06EE8: {
        Instruction step(cpu, 0xFF, 0xB67C8Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/door_transition.asm:63 STA ENTITY_FADE_ENTITY
    case 0xC06EE9: {
        Instruction step(cpu, 0x8D, 0x00B67Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:64 STZ PLAYER_INTANGIBILITY_FRAMES
    case 0xC06EEC: {
        Instruction step(cpu, 0x9C, 0x0060DEu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:65 LDA #door_data::unknown10
    case 0xC06EEF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:65 LDA #door_data::unknown10
    // Overlapping static entry reached from 0xC06EEF.
    case 0xC06EF1: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/door_transition.asm:66 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06EF2: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/door_transition.asm:66 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06EF4: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/door_transition.asm:66 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06EF6: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/door_transition.asm:66 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06EF8: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:67 CLC
    case 0xC06EFA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/door_transition.asm:68 ADC @VIRTUAL06
    case 0xC06EFB: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/door_transition.asm:69 STA @VIRTUAL06
    case 0xC06EFD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:70 LDX #1
    case 0xC06EFF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:70 LDX #1
    // Overlapping static entry reached from 0xC06EFF.
    case 0xC06F01: {
        Instruction step(cpu, 0x00, 0x0000A7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:71 LDA [@VIRTUAL06]
    case 0xC06F02: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:72 AND #$00FF
    case 0xC06F04: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:72 AND #$00FF
    // Overlapping static entry reached from 0xC06F04.
    case 0xC06F06: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:73 JSL GET_SCREEN_TRANSITION_SOUND_EFFECT
    case 0xC06F07: {
        Instruction step(cpu, 0x22, 0xC06ADDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:74 JSL PLAY_SOUND
    case 0xC06F0B: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:75 LDA DISABLED_TRANSITIONS
    case 0xC06F0F: {
        Instruction step(cpu, 0xAD, 0x00B68Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:76 BEQ @UNKNOWN6
    case 0xC06F12: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:77 LDX #1
    case 0xC06F14: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:77 LDX #1
    // Overlapping static entry reached from 0xC06F14.
    case 0xC06F16: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:78 TXA
    case 0xC06F17: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:79 JSL FADE_OUT
    case 0xC06F18: {
        Instruction step(cpu, 0x22, 0xC0886Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:80 BRA @UNKNOWN7
    case 0xC06F1C: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/door_transition.asm:82 LDX #1
    case 0xC06F1E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:82 LDX #1
    // Overlapping static entry reached from 0xC06F1E.
    case 0xC06F20: {
        Instruction step(cpu, 0x00, 0x0000A7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:83 LDA [@VIRTUAL06]
    case 0xC06F21: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:84 AND #$00FF
    case 0xC06F23: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:84 AND #$00FF
    // Overlapping static entry reached from 0xC06F23.
    case 0xC06F25: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:85 JSL SCREEN_TRANSITION
    case 0xC06F26: {
        Instruction step(cpu, 0x22, 0xC06890u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:87 LDY #door_data::unknown8
    case 0xC06F2A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/door_transition.asm:87 LDY #door_data::unknown8
    // Overlapping static entry reached from 0xC06F2A.
    case 0xC06F2C: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:88 LDA [@VIRTUAL0A],Y
    case 0xC06F2D: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:89 ASL
    case 0xC06F2F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/door_transition.asm:90 ASL
    case 0xC06F30: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/door_transition.asm:91 ASL
    case 0xC06F31: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/door_transition.asm:92 STA @VIRTUAL02
    case 0xC06F32: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:93 LDY #door_data::unknown6
    case 0xC06F34: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/door_transition.asm:93 LDY #door_data::unknown6
    // Overlapping static entry reached from 0xC06F34.
    case 0xC06F36: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:94 LDA [@VIRTUAL0A],Y
    case 0xC06F37: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:95 STA @LOCAL02
    case 0xC06F39: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:96 AND #$3FFF
    case 0xC06F3B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x003FFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:96 AND #$3FFF
    // Overlapping static entry reached from 0xC06F3B.
    case 0xC06F3D: {
        Instruction step(cpu, 0x3F, 0x0A0A0Au, 4u, AddressMode::LongIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:97 ASL
    case 0xC06F3E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/door_transition.asm:98 ASL
    case 0xC06F3F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/door_transition.asm:99 ASL
    case 0xC06F40: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/door_transition.asm:100 STA @VIRTUAL04
    case 0xC06F41: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:101 SEP #PROC_FLAGS::ACCUM8
    case 0xC06F43: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/door_transition.asm:102 LDA #14
    case 0xC06F45: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00E20Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:103 SEP #PROC_FLAGS::INDEX8
    case 0xC06F47: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/door_transition.asm:103 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC06F45.
    case 0xC06F48: {
        Instruction step(cpu, 0x10, 0x0000A8u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/door_transition.asm:104 TAY
    case 0xC06F49: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/door_transition.asm:105 REP #PROC_FLAGS::ACCUM8
    case 0xC06F4A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/door_transition.asm:106 LDA @LOCAL02
    case 0xC06F4C: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:107 JSL ASR8_UNKNOWN1
    case 0xC06F4E: {
        Instruction step(cpu, 0x22, 0xC09233u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:108 ASL
    case 0xC06F52: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/door_transition.asm:109 REP #PROC_FLAGS::INDEX8
    case 0xC06F53: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/door_transition.asm:110 TAX
    case 0xC06F55: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:111 LDA f:UNKNOWN_C3E1D8,X
    case 0xC06F56: {
        Instruction step(cpu, 0xBF, 0xC3E1C2u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:112 CMP #2
    case 0xC06F5A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:112 CMP #2
    // Overlapping static entry reached from 0xC06F5A.
    case 0xC06F5C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:113 BEQ @UNKNOWN8
    case 0xC06F5D: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:114 LDA @VIRTUAL02
    case 0xC06F5F: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:115 CLC
    case 0xC06F61: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/door_transition.asm:116 ADC #8
    case 0xC06F62: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/door_transition.asm:116 ADC #8
    // Overlapping static entry reached from 0xC06F62.
    case 0xC06F64: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:117 STA @VIRTUAL02
    case 0xC06F65: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:119 LDA DEBUG
    case 0xC06F67: {
        Instruction step(cpu, 0xAD, 0x0046F2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:120 BEQ @UNKNOWN10
    case 0xC06F6A: {
        Instruction step(cpu, 0xF0, 0x000027u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:121 LDA DEBUG_MODE_NUMBER
    case 0xC06F6C: {
        Instruction step(cpu, 0xAD, 0x00B70Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:122 CMP #6
    case 0xC06F6F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:122 CMP #6
    // Overlapping static entry reached from 0xC06F6F.
    case 0xC06F71: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:123 BEQ @UNKNOWN9
    case 0xC06F72: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:124 LDX @VIRTUAL04
    case 0xC06F74: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:125 LDA @VIRTUAL02
    case 0xC06F76: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:126 JSL UNKNOWN_C068F4
    case 0xC06F78: {
        Instruction step(cpu, 0x22, 0xC06B22u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:128 LDA REPLAY_MODE_ACTIVE
    case 0xC06F7C: {
        Instruction step(cpu, 0xAD, 0x00B718u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:129 BNE @UNKNOWN11
    case 0xC06F7F: {
        Instruction step(cpu, 0xD0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:130 SEP #PROC_FLAGS::ACCUM8
    case 0xC06F81: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/door_transition.asm:131 LDY #door_data::unknown10
    case 0xC06F83: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/door_transition.asm:131 LDY #door_data::unknown10
    // Overlapping static entry reached from 0xC06F83.
    case 0xC06F85: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:132 LDA [@VIRTUAL0A],Y
    case 0xC06F86: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:133 REP #PROC_FLAGS::ACCUM8
    case 0xC06F88: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/door_transition.asm:134 AND #$00FF
    case 0xC06F8A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:134 AND #$00FF
    // Overlapping static entry reached from 0xC06F8A.
    case 0xC06F8C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:135 JSL UNKNOWN_EFE895
    case 0xC06F8D: {
        Instruction step(cpu, 0x22, 0xEFD1B8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:136 BRA @UNKNOWN11
    case 0xC06F91: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/door_transition.asm:138 LDX @VIRTUAL04
    case 0xC06F93: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:139 LDA @VIRTUAL02
    case 0xC06F95: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:140 JSL UNKNOWN_C068F4
    case 0xC06F97: {
        Instruction step(cpu, 0x22, 0xC06B22u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:142 LDX @VIRTUAL04
    case 0xC06F9B: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:143 LDA @VIRTUAL02
    case 0xC06F9D: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:144 JSL LOAD_MAP_AT_POSITION
    case 0xC06F9F: {
        Instruction step(cpu, 0x22, 0xC0140Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:145 STZ PLAYER_HAS_MOVED_SINCE_MAP_LOAD
    case 0xC06FA3: {
        Instruction step(cpu, 0x9C, 0x002C8Eu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:146 STZ GAME_STATE+game_state::walking_style
    case 0xC06FA6: {
        Instruction step(cpu, 0x9C, 0x009B34u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:147 SEP #PROC_FLAGS::ACCUM8
    case 0xC06FA9: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/door_transition.asm:148 LDA #14
    case 0xC06FAB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Eu : 0x00480Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:149 PHA
    case 0xC06FAD: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:150 REP #PROC_FLAGS::ACCUM8
    case 0xC06FAE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/door_transition.asm:151 LDY #door_data::unknown6
    case 0xC06FB0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/door_transition.asm:151 LDY #door_data::unknown6
    // Overlapping static entry reached from 0xC06FB0.
    case 0xC06FB2: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:152 LDA [@VIRTUAL0A],Y
    case 0xC06FB3: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:153 SEP #PROC_FLAGS::INDEX8
    case 0xC06FB5: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/door_transition.asm:154 PLY
    case 0xC06FB7: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/overworld/door_transition.asm:155 JSL ASR8_UNKNOWN1
    case 0xC06FB8: {
        Instruction step(cpu, 0x22, 0xC09233u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:156 ASL
    case 0xC06FBC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/door_transition.asm:157 REP #PROC_FLAGS::INDEX8
    case 0xC06FBD: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/door_transition.asm:158 TAX
    case 0xC06FBF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:159 LDA f:UNKNOWN_C3E1D8,X
    case 0xC06FC0: {
        Instruction step(cpu, 0xBF, 0xC3E1C2u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:160 TAY
    case 0xC06FC4: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/door_transition.asm:161 LDX @VIRTUAL04
    case 0xC06FC5: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:162 LDA @VIRTUAL02
    case 0xC06FC7: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:163 JSL UNKNOWN_C03FA9
    case 0xC06FC9: {
        Instruction step(cpu, 0x22, 0xC04230u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:164 LDA DEBUG
    case 0xC06FCD: {
        Instruction step(cpu, 0xAD, 0x0046F2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:165 BEQ @UNKNOWN12
    case 0xC06FD0: {
        Instruction step(cpu, 0xF0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:166 LDA REPLAY_MODE_ACTIVE
    case 0xC06FD2: {
        Instruction step(cpu, 0xAD, 0x00B718u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:167 BNE @UNKNOWN12
    case 0xC06FD5: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:168 JSL SAVE_REPLAY_SAVE_SLOT
    case 0xC06FD7: {
        Instruction step(cpu, 0x22, 0xEFD094u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:170 JSL UNKNOWN_C069AF
    case 0xC06FDB: {
        Instruction step(cpu, 0x22, 0xC06BDDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:171 JSL UNKNOWN_C065A3
    case 0xC06FDF: {
        Instruction step(cpu, 0x22, 0xC067D1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:172 LDA #door_data::unknown10
    case 0xC06FE3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:172 LDA #door_data::unknown10
    // Overlapping static entry reached from 0xC06FE3.
    case 0xC06FE5: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/door_transition.asm:173 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06FE6: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/door_transition.asm:173 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06FE8: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/door_transition.asm:173 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06FEA: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/door_transition.asm:173 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC06FEC: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:174 CLC
    case 0xC06FEE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/door_transition.asm:175 ADC @VIRTUAL06
    case 0xC06FEF: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/door_transition.asm:176 STA @VIRTUAL06
    case 0xC06FF1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:177 LDX #0
    case 0xC06FF3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:177 LDX #0
    // Overlapping static entry reached from 0xC06FF3.
    case 0xC06FF5: {
        Instruction step(cpu, 0x00, 0x0000A7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:178 LDA [@VIRTUAL06]
    case 0xC06FF6: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:179 AND #$00FF
    case 0xC06FF8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:179 AND #$00FF
    // Overlapping static entry reached from 0xC06FF8.
    case 0xC06FFA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:180 JSL GET_SCREEN_TRANSITION_SOUND_EFFECT
    case 0xC06FFB: {
        Instruction step(cpu, 0x22, 0xC06ADDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:181 JSL PLAY_SOUND
    case 0xC06FFF: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:182 LDA DISABLED_TRANSITIONS
    case 0xC07003: {
        Instruction step(cpu, 0xAD, 0x00B68Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:183 BEQ @UNKNOWN13
    case 0xC07006: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:184 LDX #1
    case 0xC07008: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:184 LDX #1
    // Overlapping static entry reached from 0xC07008.
    case 0xC0700A: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:185 TXA
    case 0xC0700B: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:186 JSL FADE_IN
    case 0xC0700C: {
        Instruction step(cpu, 0x22, 0xC0885Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:187 BRA @UNKNOWN14
    case 0xC07010: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/door_transition.asm:189 LDX #0
    case 0xC07012: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/door_transition.asm:189 LDX #0
    // Overlapping static entry reached from 0xC07012.
    case 0xC07014: {
        Instruction step(cpu, 0x00, 0x0000A7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:190 LDA [@VIRTUAL06]
    case 0xC07015: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:191 AND #$00FF
    case 0xC07017: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:191 AND #$00FF
    // Overlapping static entry reached from 0xC07017.
    case 0xC07019: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/door_transition.asm:192 JSL SCREEN_TRANSITION
    case 0xC0701A: {
        Instruction step(cpu, 0x22, 0xC06890u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:194 LDA #$FFFF
    case 0xC0701E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:194 LDA #$FFFF
    // Overlapping static entry reached from 0xC0701E.
    case 0xC07020: {
        Instruction step(cpu, 0xFF, 0x614A8Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/door_transition.asm:195 STA STAIRS_DIRECTION
    case 0xC07021: {
        Instruction step(cpu, 0x8D, 0x00614Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/door_transition.asm:196 STZ PLAYER_HAS_DONE_SOMETHING_THIS_FRAME
    case 0xC07024: {
        Instruction step(cpu, 0x9C, 0x000A2Au, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/door_transition.asm:197 JSL SPAWN_BUZZ_BUZZ
    case 0xC07027: {
        Instruction step(cpu, 0x22, 0xC06D4Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/door_transition.asm:198 STZ USING_DOOR
    case 0xC0702B: {
        Instruction step(cpu, 0x9C, 0x006148u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/door_transition.asm:200 END_C_FUNCTION
    case 0xC0702E: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/door_transition.asm:200 END_C_FUNCTION
    case 0xC0702F: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
