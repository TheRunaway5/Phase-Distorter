// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/is_char_targetted.asm
bool resume_battle_is_char_targetted(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/is_char_targetted.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC27029: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/is_char_targetted.asm:8 END_STACK_VARS
    case 0xC2702B: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/is_char_targetted.asm:8 END_STACK_VARS
    case 0xC2702C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/is_char_targetted.asm:8 END_STACK_VARS
    case 0xC2702D: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/is_char_targetted.asm:8 END_STACK_VARS
    case 0xC2702E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/is_char_targetted.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2702E.
    case 0xC27030: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/is_char_targetted.asm:8 END_STACK_VARS
    case 0xC27031: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/is_char_targetted.asm:8 END_STACK_VARS
    case 0xC27032: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/is_char_targetted.asm:9 STA @LOCAL00
    case 0xC27033: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/is_char_targetted.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xC27030.
    case 0xC27034: {
        Instruction step(cpu, 0x0E, 0x0000A2u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/battle/is_char_targetted.asm:10 LDX #0
    case 0xC27035: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/is_char_targetted.asm:10 LDX #0
    // Overlapping static entry reached from 0xC27035.
    case 0xC27037: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/is_char_targetted.asm:11 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC27038: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000079u : 0x00A279u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/is_char_targetted.asm:11 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC27038.
    case 0xC2703A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000085u : 0x000685u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/is_char_targetted.asm:11 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC2703B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/is_char_targetted.asm:11 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC2703A.
    case 0xC2703C: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/is_char_targetted.asm:11 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC2703D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/is_char_targetted.asm:11 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC2703C.
    case 0xC2703E: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/is_char_targetted.asm:11 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC2703D.
    case 0xC2703F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/is_char_targetted.asm:11 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC27040: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/is_char_targetted.asm:12 LDA @LOCAL00
    case 0xC27042: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/is_char_targetted.asm:13 ASL
    case 0xC27044: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/is_char_targetted.asm:14 ASL
    case 0xC27045: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/is_char_targetted.asm:15 CLC
    case 0xC27046: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/is_char_targetted.asm:16 ADC @VIRTUAL06
    case 0xC27047: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/is_char_targetted.asm:17 STA @VIRTUAL06
    case 0xC27049: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/is_char_targetted.asm:18 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2704B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/is_char_targetted.asm:18 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2704B.
    case 0xC2704D: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/is_char_targetted.asm:18 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2704E: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/is_char_targetted.asm:18 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC27050: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/is_char_targetted.asm:18 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC27051: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/is_char_targetted.asm:18 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC27053: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/is_char_targetted.asm:18 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC27055: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/is_char_targetted.asm:19 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC27057: {
        Instruction step(cpu, 0xAD, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/is_char_targetted.asm:19 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2705A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/is_char_targetted.asm:19 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2705C: {
        Instruction step(cpu, 0xAD, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/is_char_targetted.asm:19 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2705F: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:968 LDA val1
    // Macro caller: src/battle/is_char_targetted.asm:20 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC27061: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:969 AND val2
    // Macro caller: src/battle/is_char_targetted.asm:20 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC27063: {
        Instruction step(cpu, 0x25, 0x00000Au, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:970 STA dest
    // Macro caller: src/battle/is_char_targetted.asm:20 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC27065: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:971 LDA val1+2
    // Macro caller: src/battle/is_char_targetted.asm:20 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC27067: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:972 AND val2+2
    // Macro caller: src/battle/is_char_targetted.asm:20 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC27069: {
        Instruction step(cpu, 0x25, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:973 STA dest+2
    // Macro caller: src/battle/is_char_targetted.asm:20 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2706B: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/is_char_targetted.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC2706D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/is_char_targetted.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2706D.
    case 0xC2706F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/is_char_targetted.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC27070: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/is_char_targetted.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC27072: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/is_char_targetted.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC27072.
    case 0xC27074: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/is_char_targetted.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC27075: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/battle/is_char_targetted.asm:22 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC27077: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/battle/is_char_targetted.asm:22 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC27079: {
        Instruction step(cpu, 0xC5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:747 BNE :+
    // Macro caller: src/battle/is_char_targetted.asm:22 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC2707B: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:748 LDA src
    // Macro caller: src/battle/is_char_targetted.asm:22 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC2707D: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:749 CMP dest
    // Macro caller: src/battle/is_char_targetted.asm:22 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC2707F: {
        Instruction step(cpu, 0xC5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/is_char_targetted.asm:23 BEQ @UNKNOWN1
    case 0xC27081: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/is_char_targetted.asm:24 LDX #1
    case 0xC27083: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/is_char_targetted.asm:24 LDX #1
    // Overlapping static entry reached from 0xC27083.
    case 0xC27085: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/is_char_targetted.asm:26 TXA
    case 0xC27086: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/is_char_targetted.asm:27 END_C_FUNCTION
    case 0xC27087: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/is_char_targetted.asm:27 END_C_FUNCTION
    case 0xC27088: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
