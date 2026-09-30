// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/remove_npc_targetting.asm
bool resume_battle_remove_npc_targetting(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/remove_npc_targetting.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC26E77: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/remove_npc_targetting.asm:6 END_STACK_VARS
    case 0xC26E79: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/remove_npc_targetting.asm:6 END_STACK_VARS
    case 0xC26E7A: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/remove_npc_targetting.asm:6 END_STACK_VARS
    case 0xC26E7B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/remove_npc_targetting.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC26E7B.
    case 0xC26E7D: {
        Instruction step(cpu, 0xFF, 0xACA25Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/remove_npc_targetting.asm:6 END_STACK_VARS
    case 0xC26E7E: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:7 LDX #.LOWORD(BATTLERS_TABLE)
    case 0xC26E7F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:7 LDX #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC26E7F.
    case 0xC26E81: {
        Instruction step(cpu, 0x9F, 0x0000A9u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:8 LDA #0
    case 0xC26E82: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:8 LDA #0
    // Overlapping static entry reached from 0xC26E82.
    case 0xC26E84: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:9 STA @LOCAL00
    case 0xC26E85: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:10 BRA @UNKNOWN2
    case 0xC26E87: {
        Instruction step(cpu, 0x80, 0x000068u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:12 LDA a:battler::consciousness,X
    case 0xC26E89: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:13 AND #$00FF
    case 0xC26E8C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC26E8C.
    case 0xC26E8E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:14 BEQ @UNKNOWN1
    case 0xC26E8F: {
        Instruction step(cpu, 0xF0, 0x000055u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:15 LDA a:battler::npc_id,X
    case 0xC26E91: {
        Instruction step(cpu, 0xBD, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:16 AND #$00FF
    case 0xC26E94: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC26E94.
    case 0xC26E96: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:17 BEQ @UNKNOWN1
    case 0xC26E97: {
        Instruction step(cpu, 0xF0, 0x00004Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/remove_npc_targetting.asm:18 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26E99: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000079u : 0x00A279u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/remove_npc_targetting.asm:18 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26E99.
    case 0xC26E9B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000085u : 0x000685u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/remove_npc_targetting.asm:18 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26E9C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/remove_npc_targetting.asm:18 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26E9B.
    case 0xC26E9D: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/remove_npc_targetting.asm:18 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26E9E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/remove_npc_targetting.asm:18 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26E9D.
    case 0xC26E9F: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/remove_npc_targetting.asm:18 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26E9E.
    case 0xC26EA0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/remove_npc_targetting.asm:18 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26EA1: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:19 LDA @LOCAL00
    case 0xC26EA3: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:20 ASL
    case 0xC26EA5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:21 ASL
    case 0xC26EA6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:22 CLC
    case 0xC26EA7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:23 ADC @VIRTUAL06
    case 0xC26EA8: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:24 STA @VIRTUAL06
    case 0xC26EAA: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/remove_npc_targetting.asm:25 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26EAC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/remove_npc_targetting.asm:25 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26EAC.
    case 0xC26EAE: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/remove_npc_targetting.asm:25 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26EAF: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/remove_npc_targetting.asm:25 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26EB1: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/remove_npc_targetting.asm:25 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26EB2: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/remove_npc_targetting.asm:25 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26EB4: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/remove_npc_targetting.asm:25 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26EB6: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:26 LDA @VIRTUAL0A
    case 0xC26EB8: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:27 EOR #$FFFF
    case 0xC26EBA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:27 EOR #$FFFF
    // Overlapping static entry reached from 0xC26EBA.
    case 0xC26EBC: {
        Instruction step(cpu, 0xFF, 0xA50A85u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:28 STA @VIRTUAL0A
    case 0xC26EBD: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:29 LDA @VIRTUAL0A+2
    case 0xC26EBF: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:29 LDA @VIRTUAL0A+2
    // Overlapping static entry reached from 0xC26EBC.
    case 0xC26EC0: {
        Instruction step(cpu, 0x0C, 0x00FF49u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:30 EOR #$FFFF
    case 0xC26EC1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:30 EOR #$FFFF
    // Overlapping static entry reached from 0xC26EC1.
    case 0xC26EC3: {
        Instruction step(cpu, 0xFF, 0xAD0C85u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:31 STA @VIRTUAL0A+2
    case 0xC26EC4: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/remove_npc_targetting.asm:32 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26EC6: {
        Instruction step(cpu, 0xAD, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/remove_npc_targetting.asm:32 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC26EC3.
    case 0xC26EC7: {
        Instruction step(cpu, 0x6C, 0x0085A9u, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/remove_npc_targetting.asm:32 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26EC9: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/remove_npc_targetting.asm:32 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26ECB: {
        Instruction step(cpu, 0xAD, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/remove_npc_targetting.asm:32 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26ECE: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:968 LDA val1
    // Macro caller: src/battle/remove_npc_targetting.asm:33 AND_INT_ASSIGN @VIRTUAL06 ,@VIRTUAL0A
    case 0xC26ED0: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:969 AND val2
    // Macro caller: src/battle/remove_npc_targetting.asm:33 AND_INT_ASSIGN @VIRTUAL06 ,@VIRTUAL0A
    case 0xC26ED2: {
        Instruction step(cpu, 0x25, 0x00000Au, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:970 STA dest
    // Macro caller: src/battle/remove_npc_targetting.asm:33 AND_INT_ASSIGN @VIRTUAL06 ,@VIRTUAL0A
    case 0xC26ED4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:971 LDA val1+2
    // Macro caller: src/battle/remove_npc_targetting.asm:33 AND_INT_ASSIGN @VIRTUAL06 ,@VIRTUAL0A
    case 0xC26ED6: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:972 AND val2+2
    // Macro caller: src/battle/remove_npc_targetting.asm:33 AND_INT_ASSIGN @VIRTUAL06 ,@VIRTUAL0A
    case 0xC26ED8: {
        Instruction step(cpu, 0x25, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:973 STA dest+2
    // Macro caller: src/battle/remove_npc_targetting.asm:33 AND_INT_ASSIGN @VIRTUAL06 ,@VIRTUAL0A
    case 0xC26EDA: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/remove_npc_targetting.asm:34 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26EDC: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/remove_npc_targetting.asm:34 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26EDE: {
        Instruction step(cpu, 0x8D, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/remove_npc_targetting.asm:34 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26EE1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/remove_npc_targetting.asm:34 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26EE3: {
        Instruction step(cpu, 0x8D, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:36 TXA
    case 0xC26EE6: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:37 CLC
    case 0xC26EE7: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:38 ADC #.SIZEOF(battler)
    case 0xC26EE8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:38 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC26EE8.
    case 0xC26EEA: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:39 TAX
    case 0xC26EEB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:40 LDA @LOCAL00
    case 0xC26EEC: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:41 INC
    case 0xC26EEE: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:42 STA @LOCAL00
    case 0xC26EEF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:44 CMP #BATTLER_COUNT
    case 0xC26EF1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:44 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC26EF1.
    case 0xC26EF3: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/remove_npc_targetting.asm:45 BCC @UNKNOWN0
    case 0xC26EF4: {
        Instruction step(cpu, 0x90, 0x000093u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/remove_npc_targetting.asm:46 END_C_FUNCTION
    case 0xC26EF6: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/remove_npc_targetting.asm:46 END_C_FUNCTION
    case 0xC26EF7: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
