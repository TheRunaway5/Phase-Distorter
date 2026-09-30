// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/remove_target.asm
bool resume_battle_remove_target(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/remove_target.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC26FC8: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/remove_target.asm:7 END_STACK_VARS
    case 0xC26FCA: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/remove_target.asm:7 END_STACK_VARS
    case 0xC26FCB: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/remove_target.asm:7 END_STACK_VARS
    case 0xC26FCC: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/remove_target.asm:7 END_STACK_VARS
    case 0xC26FCD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/remove_target.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC26FCD.
    case 0xC26FCF: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/remove_target.asm:7 END_STACK_VARS
    case 0xC26FD0: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/remove_target.asm:7 END_STACK_VARS
    case 0xC26FD1: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/remove_target.asm:8 STA @LOCAL00
    case 0xC26FD2: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/remove_target.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC26FCF.
    case 0xC26FD3: {
        Instruction step(cpu, 0x0E, 0x00E6A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26FD4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E6u : 0x0076E6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26FD4.
    case 0xC26FD6: {
        Instruction step(cpu, 0x76, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26FD7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26FD6.
    case 0xC26FD8: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26FD9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26FD8.
    case 0xC26FDA: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26FD9.
    case 0xC26FDB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/remove_target.asm:9 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26FDC: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/remove_target.asm:10 LDA @LOCAL00
    case 0xC26FDE: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/remove_target.asm:11 ASL
    case 0xC26FE0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/remove_target.asm:12 ASL
    case 0xC26FE1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/remove_target.asm:13 CLC
    case 0xC26FE2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/remove_target.asm:14 ADC @VIRTUAL06
    case 0xC26FE3: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/remove_target.asm:15 STA @VIRTUAL06
    case 0xC26FE5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/remove_target.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26FE7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/remove_target.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26FE7.
    case 0xC26FE9: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/remove_target.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26FEA: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/remove_target.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26FEC: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/remove_target.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26FED: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/remove_target.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26FEF: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/remove_target.asm:16 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26FF1: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/remove_target.asm:17 LDA @VIRTUAL0A
    case 0xC26FF3: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/remove_target.asm:18 EOR #$FFFF
    case 0xC26FF5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/remove_target.asm:18 EOR #$FFFF
    // Overlapping static entry reached from 0xC26FF5.
    case 0xC26FF7: {
        Instruction step(cpu, 0xFF, 0xA50A85u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/remove_target.asm:19 STA @VIRTUAL0A
    case 0xC26FF8: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/remove_target.asm:20 LDA @VIRTUAL0A+2
    case 0xC26FFA: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/remove_target.asm:20 LDA @VIRTUAL0A+2
    // Overlapping static entry reached from 0xC26FF7.
    case 0xC26FFB: {
        Instruction step(cpu, 0x0C, 0x00FF49u, 3u, AddressMode::Absolute);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/remove_target.asm:21 EOR #$FFFF
    case 0xC26FFC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/remove_target.asm:21 EOR #$FFFF
    // Overlapping static entry reached from 0xC26FFC.
    case 0xC26FFE: {
        Instruction step(cpu, 0xFF, 0xAD0C85u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/remove_target.asm:22 STA @VIRTUAL0A+2
    case 0xC26FFF: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/remove_target.asm:23 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC27001: {
        Instruction step(cpu, 0xAD, 0x00AB6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/remove_target.asm:23 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC26FFE.
    case 0xC27002: {
        Instruction step(cpu, 0x6E, 0x0085ABu, 3u, AddressMode::Absolute);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/remove_target.asm:23 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC27004: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/remove_target.asm:23 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC27002.
    case 0xC27005: {
        Instruction step(cpu, 0x06, 0x0000ADu, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/remove_target.asm:23 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC27006: {
        Instruction step(cpu, 0xAD, 0x00AB70u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/remove_target.asm:23 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    // Overlapping static entry reached from 0xC27005.
    case 0xC27007: {
        Instruction step(cpu, 0x70, 0x0000ABu, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/remove_target.asm:23 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC27009: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:968 LDA val1
    // Macro caller: src/battle/remove_target.asm:24 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2700B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:969 AND val2
    // Macro caller: src/battle/remove_target.asm:24 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2700D: {
        Instruction step(cpu, 0x25, 0x00000Au, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:970 STA dest
    // Macro caller: src/battle/remove_target.asm:24 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2700F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:971 LDA val1+2
    // Macro caller: src/battle/remove_target.asm:24 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC27011: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:972 AND val2+2
    // Macro caller: src/battle/remove_target.asm:24 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC27013: {
        Instruction step(cpu, 0x25, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:973 STA dest+2
    // Macro caller: src/battle/remove_target.asm:24 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC27015: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/remove_target.asm:25 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC27017: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/remove_target.asm:25 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC27019: {
        Instruction step(cpu, 0x8D, 0x00AB6Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/remove_target.asm:25 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2701C: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/remove_target.asm:25 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2701E: {
        Instruction step(cpu, 0x8D, 0x00AB70u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/remove_target.asm:26 END_C_FUNCTION
    case 0xC27021: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/remove_target.asm:26 END_C_FUNCTION
    case 0xC27022: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
