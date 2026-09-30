// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/init_scripted.asm
bool resume_battle_init_scripted(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/init_scripted.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC22F38: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/init_scripted.asm:9 END_STACK_VARS
    case 0xC22F3A: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/init_scripted.asm:9 END_STACK_VARS
    case 0xC22F3B: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/init_scripted.asm:9 END_STACK_VARS
    case 0xC22F3C: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_scripted.asm:9 END_STACK_VARS
    case 0xC22F3D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_scripted.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC22F3D.
    case 0xC22F3F: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/init_scripted.asm:9 END_STACK_VARS
    case 0xC22F40: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/init_scripted.asm:9 END_STACK_VARS
    case 0xC22F41: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:10 STA @LOCAL01
    case 0xC22F42: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:10 STA @LOCAL01
    // Overlapping static entry reached from 0xC22F3F.
    case 0xC22F43: {
        Instruction step(cpu, 0x10, 0x00008Du, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/battle/init_scripted.asm:11 STA CURRENT_BATTLE_GROUP
    case 0xC22F44: {
        Instruction step(cpu, 0x8D, 0x004A8Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:11 STA CURRENT_BATTLE_GROUP
    // Overlapping static entry reached from 0xC22F43.
    case 0xC22F45: {
        Instruction step(cpu, 0x8C, 0x00A94Au, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/init_scripted.asm:12 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC22F47: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Du : 0x00C60Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/init_scripted.asm:12 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC22F45.
    case 0xC22F48: {
        Instruction step(cpu, 0x0D, 0x0085C6u, 3u, AddressMode::Absolute);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/init_scripted.asm:12 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC22F47.
    case 0xC22F49: {
        Instruction step(cpu, 0xC6, 0x000085u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/init_scripted.asm:12 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC22F4A: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/init_scripted.asm:12 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC22F49.
    case 0xC22F4B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/init_scripted.asm:12 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC22F4C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D0u : 0x0000D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/init_scripted.asm:12 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC22F4C.
    case 0xC22F4E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/init_scripted.asm:12 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC22F4F: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:13 LDA @LOCAL01
    case 0xC22F51: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:14 ASL
    case 0xC22F53: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/init_scripted.asm:15 ASL
    case 0xC22F54: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/init_scripted.asm:16 ASL
    case 0xC22F55: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/init_scripted.asm:17 CLC
    case 0xC22F56: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/init_scripted.asm:18 ADC @VIRTUAL0A
    case 0xC22F57: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/init_scripted.asm:19 STA @VIRTUAL0A
    case 0xC22F59: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/init_scripted.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC22F5B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/init_scripted.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC22F5B.
    case 0xC22F5D: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/init_scripted.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC22F5E: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/init_scripted.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC22F60: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/init_scripted.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC22F61: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/init_scripted.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC22F63: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/init_scripted.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC22F65: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/init_scripted.asm:21 STZ ENEMIES_IN_BATTLE
    case 0xC22F67: {
        Instruction step(cpu, 0x9C, 0x009F8Au, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/init_scripted.asm:22 BRA @UNKNOWN2
    case 0xC22F6A: {
        Instruction step(cpu, 0x80, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/init_scripted.asm:24 LDA ENEMIES_IN_BATTLE
    case 0xC22F6C: {
        Instruction step(cpu, 0xAD, 0x009F8Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:25 ASL
    case 0xC22F6F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/init_scripted.asm:26 TAX
    case 0xC22F70: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/init_scripted.asm:27 LDY #1
    case 0xC22F71: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_scripted.asm:27 LDY #1
    // Overlapping static entry reached from 0xC22F71.
    case 0xC22F73: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_scripted.asm:28 LDA [@VIRTUAL06],Y
    case 0xC22F74: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:29 STA ENEMIES_IN_BATTLE_IDS,X
    case 0xC22F76: {
        Instruction step(cpu, 0x9D, 0x009F8Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:30 INC ENEMIES_IN_BATTLE
    case 0xC22F79: {
        Instruction step(cpu, 0xEE, 0x009F8Au, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/battle/init_scripted.asm:32 LDA @LOCAL00
    case 0xC22F7C: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:33 TAX
    case 0xC22F7E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/init_scripted.asm:34 DEC
    case 0xC22F7F: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/init_scripted.asm:35 STA @LOCAL00
    case 0xC22F80: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:36 CPX #0
    case 0xC22F82: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/init_scripted.asm:36 CPX #0
    // Overlapping static entry reached from 0xC22F82.
    case 0xC22F84: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_scripted.asm:37 BNE @UNKNOWN0
    case 0xC22F85: {
        Instruction step(cpu, 0xD0, 0x0000E5u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/init_scripted.asm:38 LDA #3
    case 0xC22F87: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:38 LDA #3
    // Overlapping static entry reached from 0xC22F87.
    case 0xC22F89: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_scripted.asm:39 CLC
    case 0xC22F8A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/init_scripted.asm:40 ADC @VIRTUAL06
    case 0xC22F8B: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/init_scripted.asm:41 STA @VIRTUAL06
    case 0xC22F8D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/init_scripted.asm:43 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC22F8F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/init_scripted.asm:43 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC22F91: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/init_scripted.asm:43 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC22F93: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/init_scripted.asm:43 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC22F95: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:44 LDA [@VIRTUAL0A]
    case 0xC22F97: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:45 AND #$00FF
    case 0xC22F99: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC22F99.
    case 0xC22F9B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_scripted.asm:46 STA @LOCAL00
    case 0xC22F9C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:47 CMP #$00FF
    case 0xC22F9E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:47 CMP #$00FF
    // Overlapping static entry reached from 0xC22F9E.
    case 0xC22FA0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_scripted.asm:48 BNE @UNKNOWN1
    case 0xC22FA1: {
        Instruction step(cpu, 0xD0, 0x0000D9u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/init_scripted.asm:49 LDA #$FFFF
    case 0xC22FA3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:49 LDA #$FFFF
    // Overlapping static entry reached from 0xC22FA3.
    case 0xC22FA5: {
        Instruction step(cpu, 0xFF, 0x4DC28Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/init_scripted.asm:50 STA BATTLE_MODE
    case 0xC22FA6: {
        Instruction step(cpu, 0x8D, 0x004DC2u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:51 JSL BATTLE_SWIRL_SEQUENCE
    case 0xC22FA9: {
        Instruction step(cpu, 0x22, 0xC2E8E0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_scripted.asm:52 BRA @UNKNOWN4
    case 0xC22FAD: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/init_scripted.asm:54 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC22FAF: {
        Instruction step(cpu, 0x22, 0xC08756u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_scripted.asm:55 JSL UNKNOWN_C4A7B0
    case 0xC22FB3: {
        Instruction step(cpu, 0x22, 0xC4A7B0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_scripted.asm:57 JSL UNKNOWN_C2E9C8
    case 0xC22FB7: {
        Instruction step(cpu, 0x22, 0xC2E9C8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_scripted.asm:58 CMP #0
    case 0xC22FBB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:58 CMP #0
    // Overlapping static entry reached from 0xC22FBB.
    case 0xC22FBD: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_scripted.asm:59 BNE @UNKNOWN3
    case 0xC22FBE: {
        Instruction step(cpu, 0xD0, 0x0000EFu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/init_scripted.asm:60 JSL INIT_BATTLE_COMMON
    case 0xC22FC0: {
        Instruction step(cpu, 0x22, 0xC052AAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_scripted.asm:61 TAX
    case 0xC22FC4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/init_scripted.asm:62 STX @LOCAL01
    case 0xC22FC5: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/init_scripted.asm:63 LDA PSI_TELEPORT_DESTINATION
    case 0xC22FC7: {
        Instruction step(cpu, 0xAD, 0x009F3Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:64 BNE @UNKNOWN6
    case 0xC22FCA: {
        Instruction step(cpu, 0xD0, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/init_scripted.asm:65 CPX #0
    case 0xC22FCC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/init_scripted.asm:65 CPX #0
    // Overlapping static entry reached from 0xC22FCC.
    case 0xC22FCE: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_scripted.asm:66 BEQ @UNKNOWN5
    case 0xC22FCF: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/init_scripted.asm:67 LDA #1
    case 0xC22FD1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:67 LDA #1
    // Overlapping static entry reached from 0xC22FD1.
    case 0xC22FD3: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_scripted.asm:68 BRA @RETURN
    case 0xC22FD4: {
        Instruction step(cpu, 0x80, 0x000030u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/init_scripted.asm:70 JSL RELOAD_MAP
    case 0xC22FD6: {
        Instruction step(cpu, 0x22, 0xC018F3u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_scripted.asm:71 LDX #1
    case 0xC22FDA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_scripted.asm:71 LDX #1
    // Overlapping static entry reached from 0xC22FDA.
    case 0xC22FDC: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_scripted.asm:72 TXA
    case 0xC22FDD: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:73 JSL FADE_IN
    case 0xC22FDE: {
        Instruction step(cpu, 0x22, 0xC0886Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_scripted.asm:74 BRA @UNKNOWN7
    case 0xC22FE2: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/init_scripted.asm:76 JSL TELEPORT_MAINLOOP
    case 0xC22FE4: {
        Instruction step(cpu, 0x22, 0xC0EA99u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_scripted.asm:77 LDX @LOCAL01
    case 0xC22FE8: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_scripted.asm:78 BEQ @UNKNOWN7
    case 0xC22FEA: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/init_scripted.asm:79 LDA #1
    case 0xC22FEC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:79 LDA #1
    // Overlapping static entry reached from 0xC22FEC.
    case 0xC22FEE: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_scripted.asm:80 BRA @RETURN
    case 0xC22FEF: {
        Instruction step(cpu, 0x80, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/init_scripted.asm:82 JSL UNKNOWN_C3EE4D
    case 0xC22FF1: {
        Instruction step(cpu, 0x22, 0xC3EE4Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_scripted.asm:83 LDA CURRENT_BATTLE_GROUP
    case 0xC22FF5: {
        Instruction step(cpu, 0xAD, 0x004A8Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:84 CMP #ENEMY_GROUP::BOSS_START
    case 0xC22FF8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000C0u : 0x0001C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:84 CMP #ENEMY_GROUP::BOSS_START
    // Overlapping static entry reached from 0xC22FF8.
    case 0xC22FFA: {
        Instruction step(cpu, 0x01, 0x0000B0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:85 BCS @UNKNOWN8
    case 0xC22FFB: {
        Instruction step(cpu, 0xB0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/init_scripted.asm:85 BCS @UNKNOWN8
    // Overlapping static entry reached from 0xC22FFA.
    case 0xC22FFC: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/battle/init_scripted.asm:86 LDA #120
    case 0xC22FFD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000078u : 0x000078u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:86 LDA #120
    // Overlapping static entry reached from 0xC22FFC.
    case 0xC22FFE: {
        Instruction step(cpu, 0x78, 0x000000u, 1u, AddressMode::Implied);
        step.disable_interrupts();
        return step.finish();
    }
    // src/battle/init_scripted.asm:86 LDA #120
    // Overlapping static entry reached from 0xC22FFD.
    case 0xC22FFF: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_scripted.asm:87 STA PLAYER_INTANGIBILITY_FRAMES
    case 0xC23000: {
        Instruction step(cpu, 0x8D, 0x005D58u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:89 LDA #0
    case 0xC23003: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:89 LDA #0
    // Overlapping static entry reached from 0xC23003.
    case 0xC23005: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/init_scripted.asm:91 END_C_FUNCTION
    case 0xC23006: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/init_scripted.asm:91 END_C_FUNCTION
    case 0xC23007: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
