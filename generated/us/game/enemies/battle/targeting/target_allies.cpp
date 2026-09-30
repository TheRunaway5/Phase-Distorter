// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/target_allies.asm
bool resume_battle_target_allies(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/target_allies.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC26BFB: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/target_allies.asm:6 END_STACK_VARS
    case 0xC26BFD: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/target_allies.asm:6 END_STACK_VARS
    case 0xC26BFE: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/target_allies.asm:6 END_STACK_VARS
    case 0xC26BFF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/target_allies.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC26BFF.
    case 0xC26C01: {
        Instruction step(cpu, 0xFF, 0x00A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/target_allies.asm:6 END_STACK_VARS
    case 0xC26C02: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/target_allies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26C03: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/target_allies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC26C03.
    case 0xC26C05: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/target_allies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26C06: {
        Instruction step(cpu, 0x8D, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/target_allies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26C09: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/target_allies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC26C09.
    case 0xC26C0B: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/target_allies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26C0C: {
        Instruction step(cpu, 0x8D, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:8 LDX #.LOWORD(BATTLERS_TABLE)
    case 0xC26C0F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/target_allies.asm:8 LDX #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC26C0F.
    case 0xC26C11: {
        Instruction step(cpu, 0x9F, 0x0000A9u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:9 LDA #0
    case 0xC26C12: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:9 LDA #0
    // Overlapping static entry reached from 0xC26C12.
    case 0xC26C14: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/target_allies.asm:10 STA @LOCAL00
    case 0xC26C15: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:11 BRA @UNKNOWN3
    case 0xC26C17: {
        Instruction step(cpu, 0x80, 0x000062u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/target_allies.asm:13 LDA a:battler::consciousness,X
    case 0xC26C19: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:14 AND #$00FF
    case 0xC26C1C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC26C1C.
    case 0xC26C1E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/target_allies.asm:15 BEQ @UNKNOWN2
    case 0xC26C1F: {
        Instruction step(cpu, 0xF0, 0x00004Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/target_allies.asm:16 LDA a:battler::ally_or_enemy,X
    case 0xC26C21: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:17 AND #$00FF
    case 0xC26C24: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC26C24.
    case 0xC26C26: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/target_allies.asm:18 BEQ @UNKNOWN1
    case 0xC26C27: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/target_allies.asm:19 LDA a:battler::npc_id,X
    case 0xC26C29: {
        Instruction step(cpu, 0xBD, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:20 AND #$00FF
    case 0xC26C2C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC26C2C.
    case 0xC26C2E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/target_allies.asm:21 BEQ @UNKNOWN2
    case 0xC26C2F: {
        Instruction step(cpu, 0xF0, 0x00003Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26C31: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000079u : 0x00A279u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26C31.
    case 0xC26C33: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000085u : 0x000685u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26C34: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26C33.
    case 0xC26C35: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26C36: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26C35.
    case 0xC26C37: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26C36.
    case 0xC26C38: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26C39: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:24 LDA @LOCAL00
    case 0xC26C3B: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:25 ASL
    case 0xC26C3D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/target_allies.asm:26 ASL
    case 0xC26C3E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/target_allies.asm:27 CLC
    case 0xC26C3F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/target_allies.asm:28 ADC @VIRTUAL06
    case 0xC26C40: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/target_allies.asm:29 STA @VIRTUAL06
    case 0xC26C42: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/target_allies.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26C44: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/target_allies.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26C44.
    case 0xC26C46: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/target_allies.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26C47: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/target_allies.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26C49: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/target_allies.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26C4A: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/target_allies.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26C4C: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/target_allies.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26C4E: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/target_allies.asm:31 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26C50: {
        Instruction step(cpu, 0xAD, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/target_allies.asm:31 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26C53: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/target_allies.asm:31 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26C55: {
        Instruction step(cpu, 0xAD, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/target_allies.asm:31 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26C58: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:955 LDA val1
    // Macro caller: src/battle/target_allies.asm:32 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26C5A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:956 ORA val2
    // Macro caller: src/battle/target_allies.asm:32 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26C5C: {
        Instruction step(cpu, 0x05, 0x00000Au, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:957 STA dest
    // Macro caller: src/battle/target_allies.asm:32 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26C5E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/battle/target_allies.asm:32 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26C60: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/battle/target_allies.asm:32 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26C62: {
        Instruction step(cpu, 0x05, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/battle/target_allies.asm:32 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26C64: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/target_allies.asm:33 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26C66: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/target_allies.asm:33 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26C68: {
        Instruction step(cpu, 0x8D, 0x00A96Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/target_allies.asm:33 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26C6B: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/target_allies.asm:33 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26C6D: {
        Instruction step(cpu, 0x8D, 0x00A96Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:35 TXA
    case 0xC26C70: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:36 CLC
    case 0xC26C71: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/target_allies.asm:37 ADC #.SIZEOF(battler)
    case 0xC26C72: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/target_allies.asm:37 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC26C72.
    case 0xC26C74: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/target_allies.asm:38 TAX
    case 0xC26C75: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/target_allies.asm:39 LDA @LOCAL00
    case 0xC26C76: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:40 INC
    case 0xC26C78: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/target_allies.asm:41 STA @LOCAL00
    case 0xC26C79: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:43 CMP #BATTLER_COUNT
    case 0xC26C7B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:43 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC26C7B.
    case 0xC26C7D: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/target_allies.asm:44 BCC @UNKNOWN0
    case 0xC26C7E: {
        Instruction step(cpu, 0x90, 0x000099u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/target_allies.asm:45 END_C_FUNCTION
    case 0xC26C80: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/target_allies.asm:45 END_C_FUNCTION
    case 0xC26C81: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
