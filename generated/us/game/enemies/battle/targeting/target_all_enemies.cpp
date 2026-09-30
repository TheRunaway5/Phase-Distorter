// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/target_all_enemies.asm
bool resume_battle_target_all_enemies(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/target_all_enemies.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC26C82: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/target_all_enemies.asm:6 END_STACK_VARS
    case 0xC26C84: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/target_all_enemies.asm:6 END_STACK_VARS
    case 0xC26C85: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/target_all_enemies.asm:6 END_STACK_VARS
    case 0xC26C86: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/target_all_enemies.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC26C86.
    case 0xC26C88: {
        Instruction step(cpu, 0xFF, 0x00A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/target_all_enemies.asm:6 END_STACK_VARS
    case 0xC26C89: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/target_all_enemies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26C8A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/target_all_enemies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC26C8A.
    case 0xC26C8C: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/target_all_enemies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26C8D: {
        Instruction step(cpu, 0x8D, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/target_all_enemies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26C90: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/target_all_enemies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC26C90.
    case 0xC26C92: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/target_all_enemies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26C93: {
        Instruction step(cpu, 0x8D, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:8 LDX #.LOWORD(BATTLERS_TABLE)
    case 0xC26C96: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:8 LDX #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC26C96.
    case 0xC26C98: {
        Instruction step(cpu, 0x9F, 0x0000A9u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:9 LDA #0
    case 0xC26C99: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:9 LDA #0
    // Overlapping static entry reached from 0xC26C99.
    case 0xC26C9B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:10 STA @LOCAL00
    case 0xC26C9C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:11 BRA @UNKNOWN2
    case 0xC26C9E: {
        Instruction step(cpu, 0x80, 0x00005Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:13 LDA a:battler::consciousness,X
    case 0xC26CA0: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:14 AND #$00FF
    case 0xC26CA3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC26CA3.
    case 0xC26CA5: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:15 BEQ @UNKNOWN1
    case 0xC26CA6: {
        Instruction step(cpu, 0xF0, 0x00004Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:16 LDA a:battler::ally_or_enemy,X
    case 0xC26CA8: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:17 AND #$00FF
    case 0xC26CAB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC26CAB.
    case 0xC26CAD: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:18 CMP #1
    case 0xC26CAE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:18 CMP #1
    // Overlapping static entry reached from 0xC26CAE.
    case 0xC26CB0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:19 BNE @UNKNOWN1
    case 0xC26CB1: {
        Instruction step(cpu, 0xD0, 0x00003Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/target_all_enemies.asm:20 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26CB3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000079u : 0x00A279u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/target_all_enemies.asm:20 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26CB3.
    case 0xC26CB5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000085u : 0x000685u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/target_all_enemies.asm:20 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26CB6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/target_all_enemies.asm:20 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26CB5.
    case 0xC26CB7: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_all_enemies.asm:20 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26CB8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_all_enemies.asm:20 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26CB7.
    case 0xC26CB9: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_all_enemies.asm:20 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26CB8.
    case 0xC26CBA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/target_all_enemies.asm:20 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26CBB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:21 LDA @LOCAL00
    case 0xC26CBD: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:22 ASL
    case 0xC26CBF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:23 ASL
    case 0xC26CC0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:24 CLC
    case 0xC26CC1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:25 ADC @VIRTUAL06
    case 0xC26CC2: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:26 STA @VIRTUAL06
    case 0xC26CC4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/target_all_enemies.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26CC6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/target_all_enemies.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26CC6.
    case 0xC26CC8: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/target_all_enemies.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26CC9: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/target_all_enemies.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26CCB: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/target_all_enemies.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26CCC: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/target_all_enemies.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26CCE: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/target_all_enemies.asm:27 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26CD0: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/target_all_enemies.asm:28 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26CD2: {
        Instruction step(cpu, 0xAD, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/target_all_enemies.asm:28 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26CD5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/target_all_enemies.asm:28 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26CD7: {
        Instruction step(cpu, 0xAD, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/target_all_enemies.asm:28 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26CDA: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:955 LDA val1
    // Macro caller: src/battle/target_all_enemies.asm:29 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26CDC: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:956 ORA val2
    // Macro caller: src/battle/target_all_enemies.asm:29 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26CDE: {
        Instruction step(cpu, 0x05, 0x00000Au, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:957 STA dest
    // Macro caller: src/battle/target_all_enemies.asm:29 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26CE0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/battle/target_all_enemies.asm:29 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26CE2: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/battle/target_all_enemies.asm:29 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26CE4: {
        Instruction step(cpu, 0x05, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/battle/target_all_enemies.asm:29 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26CE6: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/target_all_enemies.asm:30 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26CE8: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/target_all_enemies.asm:30 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26CEA: {
        Instruction step(cpu, 0x8D, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/target_all_enemies.asm:30 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26CED: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/target_all_enemies.asm:30 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26CEF: {
        Instruction step(cpu, 0x8D, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:32 TXA
    case 0xC26CF2: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:33 CLC
    case 0xC26CF3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:34 ADC #.SIZEOF(battler)
    case 0xC26CF4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:34 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC26CF4.
    case 0xC26CF6: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:35 TAX
    case 0xC26CF7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:36 LDA @LOCAL00
    case 0xC26CF8: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:37 INC
    case 0xC26CFA: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:38 STA @LOCAL00
    case 0xC26CFB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:40 CMP #BATTLER_COUNT
    case 0xC26CFD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:40 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC26CFD.
    case 0xC26CFF: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/target_all_enemies.asm:41 BCC @UNKNOWN0
    case 0xC26D00: {
        Instruction step(cpu, 0x90, 0x00009Eu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/target_all_enemies.asm:42 END_C_FUNCTION
    case 0xC26D02: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/target_all_enemies.asm:42 END_C_FUNCTION
    case 0xC26D03: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
