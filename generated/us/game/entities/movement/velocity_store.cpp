// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/velocity_store.asm
bool resume_overworld_velocity_store(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/velocity_store.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC430EC: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/velocity_store.asm:8 END_STACK_VARS
    case 0xC430EE: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/velocity_store.asm:8 END_STACK_VARS
    case 0xC430EF: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/velocity_store.asm:8 END_STACK_VARS
    case 0xC430F0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/velocity_store.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC430F0.
    case 0xC430F2: {
        Instruction step(cpu, 0xFF, 0x00A05Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/velocity_store.asm:8 END_STACK_VARS
    case 0xC430F3: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:9 LDY #0
    case 0xC430F4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:9 LDY #0
    // Overlapping static entry reached from 0xC430F4.
    case 0xC430F6: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:10 STY @LOCAL02
    case 0xC430F7: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:11 JMP @UNKNOWN1
    case 0xC430F9: {
        Instruction step(cpu, 0x4C, 0x0032A5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:13 TYA
    case 0xC430FC: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:14 ASL
    case 0xC430FD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:15 ASL
    case 0xC430FE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:16 TAX
    case 0xC430FF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:17 LOADPTR MOVEMENT_SPEEDS, @VIRTUAL0A
    case 0xC43100: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000BCu : 0x00E0BCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:17 LOADPTR MOVEMENT_SPEEDS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC43100.
    case 0xC43102: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000085u : 0x000A85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/velocity_store.asm:17 LOADPTR MOVEMENT_SPEEDS, @VIRTUAL0A
    case 0xC43103: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/velocity_store.asm:17 LOADPTR MOVEMENT_SPEEDS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC43102.
    case 0xC43104: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:17 LOADPTR MOVEMENT_SPEEDS, @VIRTUAL0A
    case 0xC43105: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:17 LOADPTR MOVEMENT_SPEEDS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC43105.
    case 0xC43107: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/velocity_store.asm:17 LOADPTR MOVEMENT_SPEEDS, @VIRTUAL0A
    case 0xC43108: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:18 TXA
    case 0xC4310A: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:19 CLC
    case 0xC4310B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:20 ADC @VIRTUAL0A
    case 0xC4310C: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:21 STA @VIRTUAL0A
    case 0xC4310E: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/velocity_store.asm:22 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC43110: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/velocity_store.asm:22 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC43110.
    case 0xC43112: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/velocity_store.asm:22 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC43113: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/velocity_store.asm:22 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC43115: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/velocity_store.asm:22 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC43116: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/velocity_store.asm:22 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC43118: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/velocity_store.asm:22 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4311A: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/velocity_store.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4311C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/velocity_store.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4311E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC43120: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC43122: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC43124: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC43124.
    case 0xC43126: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/velocity_store.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC43127: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC43129: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC43129.
    case 0xC4312B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC4312C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:25 LDY @LOCAL02
    case 0xC4312E: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:26 TYA
    case 0xC43130: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:27 ASL
    case 0xC43131: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:28 ASL
    case 0xC43132: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:29 ASL
    case 0xC43133: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:30 ASL
    case 0xC43134: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:31 ASL
    case 0xC43135: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:32 STA @LOCAL01
    case 0xC43136: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:33 CLC
    case 0xC43138: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:34 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::down
    case 0xC43139: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E6u : 0x004DE6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:34 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::down
    // Overlapping static entry reached from 0xC43139.
    case 0xC4313B: {
        Instruction step(cpu, 0x4D, 0x00A5A8u, 3u, AddressMode::Absolute);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:35 TAY
    case 0xC4313C: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:36 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4313D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:36 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC4313B.
    case 0xC4313E: {
        Instruction step(cpu, 0x06, 0x000099u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:36 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4313F: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:36 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC4313E.
    case 0xC43140: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:36 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43142: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:36 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43144: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:37 LDA @LOCAL01
    case 0xC43147: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:38 CLC
    case 0xC43149: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:39 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::up
    case 0xC4314A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D6u : 0x004DD6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:39 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::up
    // Overlapping static entry reached from 0xC4314A.
    case 0xC4314C: {
        Instruction step(cpu, 0x4D, 0x00A5A8u, 3u, AddressMode::Absolute);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:40 TAY
    case 0xC4314D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4314E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC4314C.
    case 0xC4314F: {
        Instruction step(cpu, 0x06, 0x000099u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43150: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC4314F.
    case 0xC43151: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43153: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43155: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:42 LDA @LOCAL01
    case 0xC43158: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:43 CLC
    case 0xC4315A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:44 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::left
    case 0xC4315B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000AEu : 0x004FAEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:44 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::left
    // Overlapping static entry reached from 0xC4315B.
    case 0xC4315D: {
        Instruction step(cpu, 0x4F, 0x06A5A8u, 4u, AddressMode::Long);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:45 TAY
    case 0xC4315E: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:46 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4315F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:46 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43161: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:46 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43164: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:46 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43166: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:47 LDA @LOCAL01
    case 0xC43169: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:48 CLC
    case 0xC4316B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:49 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::right
    case 0xC4316C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00009Eu : 0x004F9Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:49 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::right
    // Overlapping static entry reached from 0xC4316C.
    case 0xC4316E: {
        Instruction step(cpu, 0x4F, 0x06A5A8u, 4u, AddressMode::Long);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:50 TAY
    case 0xC4316F: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:51 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43170: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:51 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43172: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:51 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43175: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:51 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43177: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/velocity_store.asm:52 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC4317A: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/velocity_store.asm:52 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC4317C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:52 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC4317E: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:52 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC43180: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:53 LDA @LOCAL01
    case 0xC43182: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:54 CLC
    case 0xC43184: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:55 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::down
    case 0xC43185: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A6u : 0x004FA6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:55 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::down
    // Overlapping static entry reached from 0xC43185.
    case 0xC43187: {
        Instruction step(cpu, 0x4F, 0x06A5A8u, 4u, AddressMode::Long);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:56 TAY
    case 0xC43188: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:57 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43189: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:57 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4318B: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:57 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4318E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:57 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43190: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:58 LDA @LOCAL01
    case 0xC43193: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:59 CLC
    case 0xC43195: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:60 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::right
    case 0xC43196: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DEu : 0x004DDEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:60 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::right
    // Overlapping static entry reached from 0xC43196.
    case 0xC43198: {
        Instruction step(cpu, 0x4D, 0x00A5A8u, 3u, AddressMode::Absolute);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:61 TAY
    case 0xC43199: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4319A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC43198.
    case 0xC4319B: {
        Instruction step(cpu, 0x06, 0x000099u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4319C: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC4319B.
    case 0xC4319D: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4319F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC431A1: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/velocity_store.asm:63 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC431A4: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/velocity_store.asm:63 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC431A6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:63 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC431A8: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:63 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC431AA: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:64 SEC
    case 0xC431AC: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC431AD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC431AD.
    case 0xC431AF: {
        Instruction step(cpu, 0x00, 0x0000E5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1021 SBC var
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC431B0: {
        Instruction step(cpu, 0xE5, 0x000006u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:1022 STA dest
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC431B2: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC431B4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC431B4.
    case 0xC431B6: {
        Instruction step(cpu, 0x00, 0x0000E5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC431B7: {
        Instruction step(cpu, 0xE5, 0x000008u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC431B9: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:66 LDA @LOCAL01
    case 0xC431BB: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:67 CLC
    case 0xC431BD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:68 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::up
    case 0xC431BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000096u : 0x004F96u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:68 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::up
    // Overlapping static entry reached from 0xC431BE.
    case 0xC431C0: {
        Instruction step(cpu, 0x4F, 0x06A5A8u, 4u, AddressMode::Long);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:69 TAY
    case 0xC431C1: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:70 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC431C2: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:70 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC431C4: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:70 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC431C7: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:70 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC431C9: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:71 LDA @LOCAL01
    case 0xC431CC: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:72 CLC
    case 0xC431CE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:73 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::left
    case 0xC431CF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x004DEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:73 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::left
    // Overlapping static entry reached from 0xC431CF.
    case 0xC431D1: {
        Instruction step(cpu, 0x4D, 0x00A5A8u, 3u, AddressMode::Absolute);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:74 TAY
    case 0xC431D2: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:75 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC431D3: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:75 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC431D1.
    case 0xC431D4: {
        Instruction step(cpu, 0x06, 0x000099u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:75 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC431D5: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:75 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC431D4.
    case 0xC431D6: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:75 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC431D8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:75 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC431DA: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:76 LOADPTR MOVEMENT_SPEEDS_DIAGONAL, @VIRTUAL0A
    case 0xC431DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F4u : 0x00E0F4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:76 LOADPTR MOVEMENT_SPEEDS_DIAGONAL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC431DD.
    case 0xC431DF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000085u : 0x000A85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/velocity_store.asm:76 LOADPTR MOVEMENT_SPEEDS_DIAGONAL, @VIRTUAL0A
    case 0xC431E0: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/velocity_store.asm:76 LOADPTR MOVEMENT_SPEEDS_DIAGONAL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC431DF.
    case 0xC431E1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:76 LOADPTR MOVEMENT_SPEEDS_DIAGONAL, @VIRTUAL0A
    case 0xC431E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C3u : 0x0000C3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:76 LOADPTR MOVEMENT_SPEEDS_DIAGONAL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC431E2.
    case 0xC431E4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/velocity_store.asm:76 LOADPTR MOVEMENT_SPEEDS_DIAGONAL, @VIRTUAL0A
    case 0xC431E5: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:77 TXA
    case 0xC431E7: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:78 CLC
    case 0xC431E8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:79 ADC @VIRTUAL0A
    case 0xC431E9: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:80 STA @VIRTUAL0A
    case 0xC431EB: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/velocity_store.asm:81 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC431ED: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/velocity_store.asm:81 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC431ED.
    case 0xC431EF: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/velocity_store.asm:81 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC431F0: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/velocity_store.asm:81 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC431F2: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/velocity_store.asm:81 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC431F3: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/velocity_store.asm:81 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC431F5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/velocity_store.asm:81 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC431F7: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/velocity_store.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC431F9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/velocity_store.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC431FB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC431FD: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC431FF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:83 LDA @LOCAL01
    case 0xC43201: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:84 CLC
    case 0xC43203: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:85 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::down_left
    case 0xC43204: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000AAu : 0x004FAAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:85 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::down_left
    // Overlapping static entry reached from 0xC43204.
    case 0xC43206: {
        Instruction step(cpu, 0x4F, 0x06A5A8u, 4u, AddressMode::Long);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:86 TAY
    case 0xC43207: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:87 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43208: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:87 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4320A: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:87 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4320D: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:87 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4320F: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:88 LDA @LOCAL01
    case 0xC43212: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:89 CLC
    case 0xC43214: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:90 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::down_right
    case 0xC43215: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A2u : 0x004FA2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:90 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::down_right
    // Overlapping static entry reached from 0xC43215.
    case 0xC43217: {
        Instruction step(cpu, 0x4F, 0x06A5A8u, 4u, AddressMode::Long);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:91 TAY
    case 0xC43218: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:92 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43219: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:92 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4321B: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:92 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4321E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:92 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43220: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:92 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC46B31.
    case 0xC43222: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:93 LDA @LOCAL01
    case 0xC43223: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:94 CLC
    case 0xC43225: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:95 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::down_right
    case 0xC43226: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E2u : 0x004DE2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:95 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::down_right
    // Overlapping static entry reached from 0xC43226.
    case 0xC43228: {
        Instruction step(cpu, 0x4D, 0x00A5A8u, 3u, AddressMode::Absolute);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:96 TAY
    case 0xC43229: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:97 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4322A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:97 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC43228.
    case 0xC4322B: {
        Instruction step(cpu, 0x06, 0x000099u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:97 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4322C: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:97 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC4322B.
    case 0xC4322D: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:97 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4322F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:97 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43231: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:98 LDA @LOCAL01
    case 0xC43234: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:99 CLC
    case 0xC43236: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:100 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::up_right
    case 0xC43237: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000DAu : 0x004DDAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:100 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::up_right
    // Overlapping static entry reached from 0xC43237.
    case 0xC43239: {
        Instruction step(cpu, 0x4D, 0x00A5A8u, 3u, AddressMode::Absolute);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:101 TAY
    case 0xC4323A: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:102 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4323B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:102 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC43239.
    case 0xC4323C: {
        Instruction step(cpu, 0x06, 0x000099u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:102 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4323D: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:102 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC4323C.
    case 0xC4323E: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:102 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43240: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:102 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43242: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/velocity_store.asm:103 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC43245: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/velocity_store.asm:103 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC43247: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:103 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC43249: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:103 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC4324B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:104 SEC
    case 0xC4324D: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC4324E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC4324E.
    case 0xC43250: {
        Instruction step(cpu, 0x00, 0x0000E5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1021 SBC var
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC43251: {
        Instruction step(cpu, 0xE5, 0x000006u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:1022 STA dest
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC43253: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC43255: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC43255.
    case 0xC43257: {
        Instruction step(cpu, 0x00, 0x0000E5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC43258: {
        Instruction step(cpu, 0xE5, 0x000008u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC4325A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:106 LDA @LOCAL01
    case 0xC4325C: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:107 CLC
    case 0xC4325E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:108 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::up_left
    case 0xC4325F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000B2u : 0x004FB2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:108 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::up_left
    // Overlapping static entry reached from 0xC4325F.
    case 0xC43261: {
        Instruction step(cpu, 0x4F, 0x06A5A8u, 4u, AddressMode::Long);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:109 TAY
    case 0xC43262: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:110 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43263: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:110 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43265: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:110 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43268: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:110 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4326A: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:111 LDA @LOCAL01
    case 0xC4326D: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:112 CLC
    case 0xC4326F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:113 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::up_right
    case 0xC43270: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00009Au : 0x004F9Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:113 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::up_right
    // Overlapping static entry reached from 0xC43270.
    case 0xC43272: {
        Instruction step(cpu, 0x4F, 0x06A5A8u, 4u, AddressMode::Long);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:114 TAY
    case 0xC43273: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:115 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43274: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:115 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43276: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:115 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43279: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:115 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4327B: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:116 LDA @LOCAL01
    case 0xC4327E: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:117 CLC
    case 0xC43280: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:118 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::down_left
    case 0xC43281: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x004DEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:118 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::down_left
    // Overlapping static entry reached from 0xC43281.
    case 0xC43283: {
        Instruction step(cpu, 0x4D, 0x00A5A8u, 3u, AddressMode::Absolute);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:119 TAY
    case 0xC43284: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:120 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43285: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:120 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC43283.
    case 0xC43286: {
        Instruction step(cpu, 0x06, 0x000099u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:120 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43287: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:120 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC43286.
    case 0xC43288: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:120 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4328A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:120 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4328C: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:121 LDA @LOCAL01
    case 0xC4328F: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:122 CLC
    case 0xC43291: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:123 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::up_left
    case 0xC43292: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F2u : 0x004DF2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:123 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::up_left
    // Overlapping static entry reached from 0xC43292.
    case 0xC43294: {
        Instruction step(cpu, 0x4D, 0x00A5A8u, 3u, AddressMode::Absolute);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:124 TAY
    case 0xC43295: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:125 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43296: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:125 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC43294.
    case 0xC43297: {
        Instruction step(cpu, 0x06, 0x000099u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:125 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43298: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:125 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC43297.
    case 0xC43299: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:125 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4329B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:125 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4329D: {
        Instruction step(cpu, 0x99, 0x000002u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:126 LDY @LOCAL02
    case 0xC432A0: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:127 INY
    case 0xC432A2: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:128 STY @LOCAL02
    case 0xC432A3: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:130 CPY #14
    case 0xC432A5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/velocity_store.asm:130 CPY #14
    // Overlapping static entry reached from 0xC432A5.
    case 0xC432A7: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/velocity_store.asm:131 BCCL @UNKNOWN0
    case 0xC432A8: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/velocity_store.asm:131 BCCL @UNKNOWN0
    case 0xC432AA: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/velocity_store.asm:131 BCCL @UNKNOWN0
    case 0xC432AC: {
        Instruction step(cpu, 0x4C, 0x0030FCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/velocity_store.asm:132 END_C_FUNCTION
    case 0xC432AF: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/velocity_store.asm:132 END_C_FUNCTION
    case 0xC432B0: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
