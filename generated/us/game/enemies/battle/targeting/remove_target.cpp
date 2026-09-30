// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/remove_target.asm
bool resume_battle_remove_target(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/remove_target.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC27089: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/remove_target.asm:7 END_STACK_VARS
    case 0xC2708B: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/remove_target.asm:7 END_STACK_VARS
    case 0xC2708C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/remove_target.asm:7 END_STACK_VARS
    case 0xC2708D: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/remove_target.asm:7 END_STACK_VARS
    case 0xC2708E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/remove_target.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC2708E.
    case 0xC27090: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/remove_target.asm:7 END_STACK_VARS
    case 0xC27091: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/remove_target.asm:7 END_STACK_VARS
    case 0xC27092: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/remove_target.asm:8 STA @LOCAL00
    case 0xC27093: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/remove_target.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC27090.
    case 0xC27094: {
        Instruction step(cpu, 0x0E, 0x0079A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC27095: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000079u : 0x00A279u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC27095.
    case 0xC27097: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000085u : 0x000685u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC27098: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC27097.
    case 0xC27099: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC2709A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC27099.
    case 0xC2709B: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC2709A.
    case 0xC2709C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC2709D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/remove_target.asm:10 LDA @LOCAL00
    case 0xC2709F: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/remove_target.asm:11 ASL
    case 0xC270A1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/remove_target.asm:12 ASL
    case 0xC270A2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/remove_target.asm:13 CLC
    case 0xC270A3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/remove_target.asm:14 ADC @VIRTUAL06
    case 0xC270A4: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/remove_target.asm:15 STA @VIRTUAL06
    case 0xC270A6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/remove_target.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC270A8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/remove_target.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC270A8.
    case 0xC270AA: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/remove_target.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC270AB: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/remove_target.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC270AD: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/remove_target.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC270AE: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/remove_target.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC270B0: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/remove_target.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC270B2: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/remove_target.asm:17 LDA @VIRTUAL0A
    case 0xC270B4: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/remove_target.asm:18 EOR #$FFFF
    case 0xC270B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/remove_target.asm:18 EOR #$FFFF
    // Overlapping static entry reached from 0xC270B6.
    case 0xC270B8: {
        Instruction step(cpu, 0xFF, 0xA50A85u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/remove_target.asm:19 STA @VIRTUAL0A
    case 0xC270B9: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/remove_target.asm:20 LDA @VIRTUAL0A+2
    case 0xC270BB: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/remove_target.asm:20 LDA @VIRTUAL0A+2
    // Overlapping static entry reached from 0xC270B8.
    case 0xC270BC: {
        Instruction step(cpu, 0x0C, 0x00FF49u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/remove_target.asm:21 EOR #$FFFF
    case 0xC270BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/remove_target.asm:21 EOR #$FFFF
    // Overlapping static entry reached from 0xC270BD.
    case 0xC270BF: {
        Instruction step(cpu, 0xFF, 0xAD0C85u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/remove_target.asm:22 STA @VIRTUAL0A+2
    case 0xC270C0: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/remove_target.asm:23 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC270C2: {
        Instruction step(cpu, 0xAD, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/remove_target.asm:23 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC270BF.
    case 0xC270C3: {
        Instruction step(cpu, 0x6C, 0x0085A9u, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/remove_target.asm:23 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC270C5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/remove_target.asm:23 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC270C7: {
        Instruction step(cpu, 0xAD, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/remove_target.asm:23 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC270CA: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:968 LDA val1
    // Macro caller: src/battle/remove_target.asm:24 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC270CC: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:969 AND val2
    // Macro caller: src/battle/remove_target.asm:24 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC270CE: {
        Instruction step(cpu, 0x25, 0x00000Au, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:970 STA dest
    // Macro caller: src/battle/remove_target.asm:24 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC270D0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:971 LDA val1+2
    // Macro caller: src/battle/remove_target.asm:24 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC270D2: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:972 AND val2+2
    // Macro caller: src/battle/remove_target.asm:24 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC270D4: {
        Instruction step(cpu, 0x25, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:973 STA dest+2
    // Macro caller: src/battle/remove_target.asm:24 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC270D6: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/remove_target.asm:25 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC270D8: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/remove_target.asm:25 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC270DA: {
        Instruction step(cpu, 0x8D, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/remove_target.asm:25 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC270DD: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/remove_target.asm:25 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC270DF: {
        Instruction step(cpu, 0x8D, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/remove_target.asm:26 END_C_FUNCTION
    case 0xC270E2: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/remove_target.asm:26 END_C_FUNCTION
    case 0xC270E3: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
