// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/velocity_store.asm
bool resume_overworld_velocity_store(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/velocity_store.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC02C4E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/velocity_store.asm:8 END_STACK_VARS
    case 0xC02C50: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/velocity_store.asm:8 END_STACK_VARS
    case 0xC02C51: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/velocity_store.asm:8 END_STACK_VARS
    case 0xC02C52: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/velocity_store.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC02C52.
    case 0xC02C54: {
        Instruction step(cpu, 0xFF, 0x00A05Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/velocity_store.asm:8 END_STACK_VARS
    case 0xC02C55: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:9 LDY #0
    case 0xC02C56: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:9 LDY #0
    // Overlapping static entry reached from 0xC02C56.
    case 0xC02C58: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:10 STY @LOCAL02
    case 0xC02C59: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:11 JMP @UNKNOWN1
    case 0xC02C5B: {
        Instruction step(cpu, 0x4C, 0x002E07u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:13 TYA
    case 0xC02C5E: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:14 ASL
    case 0xC02C5F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:15 ASL
    case 0xC02C60: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:16 TAX
    case 0xC02C61: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:17 LOADPTR MOVEMENT_SPEEDS, @VIRTUAL0A
    case 0xC02C62: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A6u : 0x00E0A6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:17 LOADPTR MOVEMENT_SPEEDS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02C62.
    case 0xC02C64: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000085u : 0x000A85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/velocity_store.asm:17 LOADPTR MOVEMENT_SPEEDS, @VIRTUAL0A
    case 0xC02C65: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/velocity_store.asm:17 LOADPTR MOVEMENT_SPEEDS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02C64.
    case 0xC02C66: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:17 LOADPTR MOVEMENT_SPEEDS, @VIRTUAL0A
    case 0xC02C67: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:17 LOADPTR MOVEMENT_SPEEDS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02C67.
    case 0xC02C69: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/velocity_store.asm:17 LOADPTR MOVEMENT_SPEEDS, @VIRTUAL0A
    case 0xC02C6A: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:18 TXA
    case 0xC02C6C: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:19 CLC
    case 0xC02C6D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:20 ADC @VIRTUAL0A
    case 0xC02C6E: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:21 STA @VIRTUAL0A
    case 0xC02C70: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/velocity_store.asm:22 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC02C72: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/velocity_store.asm:22 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC02C72.
    case 0xC02C74: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/velocity_store.asm:22 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC02C75: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/velocity_store.asm:22 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC02C77: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/velocity_store.asm:22 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC02C78: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/velocity_store.asm:22 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC02C7A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/velocity_store.asm:22 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC02C7C: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/velocity_store.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC02C7E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/velocity_store.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC02C80: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC02C82: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC02C84: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC02C86: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC02C86.
    case 0xC02C88: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/velocity_store.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC02C89: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC02C8B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC02C8B.
    case 0xC02C8D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC02C8E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:25 LDY @LOCAL02
    case 0xC02C90: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:26 TYA
    case 0xC02C92: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:27 ASL
    case 0xC02C93: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:28 ASL
    case 0xC02C94: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:29 ASL
    case 0xC02C95: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:30 ASL
    case 0xC02C96: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:31 ASL
    case 0xC02C97: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:32 STA @LOCAL01
    case 0xC02C98: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:33 CLC
    case 0xC02C9A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:34 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::down
    case 0xC02C9B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00006Cu : 0x00516Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:34 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::down
    // Overlapping static entry reached from 0xC02C9B.
    case 0xC02C9D: {
        Instruction step(cpu, 0x51, 0x0000A8u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:35 TAY
    case 0xC02C9E: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:36 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02C9F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:36 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CA1: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:36 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CA4: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:36 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CA6: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:37 LDA @LOCAL01
    case 0xC02CA9: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:38 CLC
    case 0xC02CAB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:39 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::up
    case 0xC02CAC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00005Cu : 0x00515Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:39 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::up
    // Overlapping static entry reached from 0xC02CAC.
    case 0xC02CAE: {
        Instruction step(cpu, 0x51, 0x0000A8u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:40 TAY
    case 0xC02CAF: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CB0: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CB2: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CB5: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CB7: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:42 LDA @LOCAL01
    case 0xC02CBA: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:43 CLC
    case 0xC02CBC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:44 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::left
    case 0xC02CBD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000034u : 0x005334u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:44 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::left
    // Overlapping static entry reached from 0xC02CBD.
    case 0xC02CBF: {
        Instruction step(cpu, 0x53, 0x0000A8u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:45 TAY
    case 0xC02CC0: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:46 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CC1: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:46 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CC3: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:46 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CC6: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:46 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CC8: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:47 LDA @LOCAL01
    case 0xC02CCB: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:48 CLC
    case 0xC02CCD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:49 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::right
    case 0xC02CCE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000024u : 0x005324u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:49 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::right
    // Overlapping static entry reached from 0xC02CCE.
    case 0xC02CD0: {
        Instruction step(cpu, 0x53, 0x0000A8u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:50 TAY
    case 0xC02CD1: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:51 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CD2: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:51 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CD4: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:51 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CD7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:51 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CD9: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/velocity_store.asm:52 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC02CDC: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/velocity_store.asm:52 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC02CDE: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:52 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC02CE0: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:52 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC02CE2: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:53 LDA @LOCAL01
    case 0xC02CE4: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:54 CLC
    case 0xC02CE6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:55 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::down
    case 0xC02CE7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00002Cu : 0x00532Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:55 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::down
    // Overlapping static entry reached from 0xC02CE7.
    case 0xC02CE9: {
        Instruction step(cpu, 0x53, 0x0000A8u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:56 TAY
    case 0xC02CEA: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:57 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CEB: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:57 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CED: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:57 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CF0: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:57 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CF2: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:58 LDA @LOCAL01
    case 0xC02CF5: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:59 CLC
    case 0xC02CF7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:60 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::right
    case 0xC02CF8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000064u : 0x005164u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:60 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::right
    // Overlapping static entry reached from 0xC02CF8.
    case 0xC02CFA: {
        Instruction step(cpu, 0x51, 0x0000A8u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:61 TAY
    case 0xC02CFB: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CFC: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CFE: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D01: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D03: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/velocity_store.asm:63 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC02D06: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/velocity_store.asm:63 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC02D08: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:63 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC02D0A: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:63 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC02D0C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:64 SEC
    case 0xC02D0E: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC02D0F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC02D0F.
    case 0xC02D11: {
        Instruction step(cpu, 0x00, 0x0000E5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1021 SBC var
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC02D12: {
        Instruction step(cpu, 0xE5, 0x000006u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:1022 STA dest
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC02D14: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC02D16: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC02D16.
    case 0xC02D18: {
        Instruction step(cpu, 0x00, 0x0000E5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC02D19: {
        Instruction step(cpu, 0xE5, 0x000008u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC02D1B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:66 LDA @LOCAL01
    case 0xC02D1D: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:67 CLC
    case 0xC02D1F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:68 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::up
    case 0xC02D20: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Cu : 0x00531Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:68 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::up
    // Overlapping static entry reached from 0xC02D20.
    case 0xC02D22: {
        Instruction step(cpu, 0x53, 0x0000A8u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:69 TAY
    case 0xC02D23: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:70 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D24: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:70 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D26: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:70 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D29: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:70 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D2B: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:71 LDA @LOCAL01
    case 0xC02D2E: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:72 CLC
    case 0xC02D30: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:73 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::left
    case 0xC02D31: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000074u : 0x005174u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:73 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::left
    // Overlapping static entry reached from 0xC02D31.
    case 0xC02D33: {
        Instruction step(cpu, 0x51, 0x0000A8u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:74 TAY
    case 0xC02D34: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:75 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D35: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:75 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D37: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:75 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D3A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:75 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D3C: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:76 LOADPTR MOVEMENT_SPEEDS_DIAGONAL, @VIRTUAL0A
    case 0xC02D3F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DEu : 0x00E0DEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:76 LOADPTR MOVEMENT_SPEEDS_DIAGONAL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02D3F.
    case 0xC02D41: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000085u : 0x000A85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/velocity_store.asm:76 LOADPTR MOVEMENT_SPEEDS_DIAGONAL, @VIRTUAL0A
    case 0xC02D42: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/velocity_store.asm:76 LOADPTR MOVEMENT_SPEEDS_DIAGONAL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02D41.
    case 0xC02D43: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:76 LOADPTR MOVEMENT_SPEEDS_DIAGONAL, @VIRTUAL0A
    case 0xC02D44: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:76 LOADPTR MOVEMENT_SPEEDS_DIAGONAL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02D44.
    case 0xC02D46: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/velocity_store.asm:76 LOADPTR MOVEMENT_SPEEDS_DIAGONAL, @VIRTUAL0A
    case 0xC02D47: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:77 TXA
    case 0xC02D49: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:78 CLC
    case 0xC02D4A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:79 ADC @VIRTUAL0A
    case 0xC02D4B: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:80 STA @VIRTUAL0A
    case 0xC02D4D: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/velocity_store.asm:81 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC02D4F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/velocity_store.asm:81 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC02D4F.
    case 0xC02D51: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/velocity_store.asm:81 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC02D52: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/velocity_store.asm:81 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC02D54: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/velocity_store.asm:81 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC02D55: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/velocity_store.asm:81 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC02D57: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/velocity_store.asm:81 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC02D59: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/velocity_store.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC02D5B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/velocity_store.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC02D5D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC02D5F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC02D61: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:83 LDA @LOCAL01
    case 0xC02D63: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:84 CLC
    case 0xC02D65: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:85 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::down_left
    case 0xC02D66: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000030u : 0x005330u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:85 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::down_left
    // Overlapping static entry reached from 0xC02D66.
    case 0xC02D68: {
        Instruction step(cpu, 0x53, 0x0000A8u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:86 TAY
    case 0xC02D69: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:87 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D6A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:87 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D6C: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:87 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D6F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:87 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D71: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:88 LDA @LOCAL01
    case 0xC02D74: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:89 CLC
    case 0xC02D76: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:90 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::down_right
    case 0xC02D77: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000028u : 0x005328u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:90 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::down_right
    // Overlapping static entry reached from 0xC02D77.
    case 0xC02D79: {
        Instruction step(cpu, 0x53, 0x0000A8u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:91 TAY
    case 0xC02D7A: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:92 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D7B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:92 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D7D: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:92 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D80: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:92 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D82: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:93 LDA @LOCAL01
    case 0xC02D85: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:94 CLC
    case 0xC02D87: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:95 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::down_right
    case 0xC02D88: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000068u : 0x005168u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:95 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::down_right
    // Overlapping static entry reached from 0xC02D88.
    case 0xC02D8A: {
        Instruction step(cpu, 0x51, 0x0000A8u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:96 TAY
    case 0xC02D8B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:97 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D8C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:97 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D8E: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:97 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D91: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:97 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D93: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:98 LDA @LOCAL01
    case 0xC02D96: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:99 CLC
    case 0xC02D98: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:100 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::up_right
    case 0xC02D99: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000060u : 0x005160u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:100 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::up_right
    // Overlapping static entry reached from 0xC02D99.
    case 0xC02D9B: {
        Instruction step(cpu, 0x51, 0x0000A8u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:101 TAY
    case 0xC02D9C: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:102 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D9D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:102 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D9F: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:102 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DA2: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:102 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DA4: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/velocity_store.asm:103 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC02DA7: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/velocity_store.asm:103 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC02DA9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:103 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC02DAB: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:103 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC02DAD: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:104 SEC
    case 0xC02DAF: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC02DB0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC02DB0.
    case 0xC02DB2: {
        Instruction step(cpu, 0x00, 0x0000E5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1021 SBC var
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC02DB3: {
        Instruction step(cpu, 0xE5, 0x000006u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:1022 STA dest
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC02DB5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC02DB7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC02DB7.
    case 0xC02DB9: {
        Instruction step(cpu, 0x00, 0x0000E5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC02DBA: {
        Instruction step(cpu, 0xE5, 0x000008u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC02DBC: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:106 LDA @LOCAL01
    case 0xC02DBE: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:107 CLC
    case 0xC02DC0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:108 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::up_left
    case 0xC02DC1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000038u : 0x005338u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:108 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::up_left
    // Overlapping static entry reached from 0xC02DC1.
    case 0xC02DC3: {
        Instruction step(cpu, 0x53, 0x0000A8u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:109 TAY
    case 0xC02DC4: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:110 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DC5: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:110 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DC7: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:110 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DCA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:110 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DCC: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:111 LDA @LOCAL01
    case 0xC02DCF: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:112 CLC
    case 0xC02DD1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:113 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::up_right
    case 0xC02DD2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x005320u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:113 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::up_right
    // Overlapping static entry reached from 0xC02DD2.
    case 0xC02DD4: {
        Instruction step(cpu, 0x53, 0x0000A8u, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:114 TAY
    case 0xC02DD5: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:115 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DD6: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:115 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DD8: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:115 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DDB: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:115 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DDD: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:116 LDA @LOCAL01
    case 0xC02DE0: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:117 CLC
    case 0xC02DE2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:118 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::down_left
    case 0xC02DE3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000070u : 0x005170u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:118 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::down_left
    // Overlapping static entry reached from 0xC02DE3.
    case 0xC02DE5: {
        Instruction step(cpu, 0x51, 0x0000A8u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:119 TAY
    case 0xC02DE6: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:120 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DE7: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:120 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DE9: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:120 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DEC: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:120 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DEE: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:121 LDA @LOCAL01
    case 0xC02DF1: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:122 CLC
    case 0xC02DF3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:123 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::up_left
    case 0xC02DF4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000078u : 0x005178u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:123 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::up_left
    // Overlapping static entry reached from 0xC02DF4.
    case 0xC02DF6: {
        Instruction step(cpu, 0x51, 0x0000A8u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:124 TAY
    case 0xC02DF7: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:125 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DF8: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:125 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DFA: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:125 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DFD: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:125 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DFF: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:126 LDY @LOCAL02
    case 0xC02E02: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:127 INY
    case 0xC02E04: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:128 STY @LOCAL02
    case 0xC02E05: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:130 CPY #14
    case 0xC02E07: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:130 CPY #14
    // Overlapping static entry reached from 0xC02E07.
    case 0xC02E09: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/velocity_store.asm:131 BCCL @UNKNOWN0
    case 0xC02E0A: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/velocity_store.asm:131 BCCL @UNKNOWN0
    case 0xC02E0C: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/velocity_store.asm:131 BCCL @UNKNOWN0
    case 0xC02E0E: {
        Instruction step(cpu, 0x4C, 0x002C5Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/velocity_store.asm:132 END_C_FUNCTION
    case 0xC02E11: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/velocity_store.asm:132 END_C_FUNCTION
    case 0xC02E12: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
