// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/target_allies.asm
bool resume_battle_target_allies(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/target_allies.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC26B3A: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/target_allies.asm:6 END_STACK_VARS
    case 0xC26B3C: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/target_allies.asm:6 END_STACK_VARS
    case 0xC26B3D: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/target_allies.asm:6 END_STACK_VARS
    case 0xC26B3E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/target_allies.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC26B3E.
    case 0xC26B40: {
        Instruction step(cpu, 0xFF, 0x00A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/target_allies.asm:6 END_STACK_VARS
    case 0xC26B41: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/target_allies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26B42: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/target_allies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC26B42.
    case 0xC26B44: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/target_allies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26B45: {
        Instruction step(cpu, 0x8D, 0x00AB6Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/target_allies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26B48: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/target_allies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    // Overlapping static entry reached from 0xC26B48.
    case 0xC26B4A: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/target_allies.asm:7 MOVE_INT_CONSTANT 0, BATTLER_TARGET_FLAGS
    case 0xC26B4B: {
        Instruction step(cpu, 0x8D, 0x00AB70u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:8 LDX #.LOWORD(BATTLERS_TABLE)
    case 0xC26B4E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/target_allies.asm:8 LDX #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC26B4E.
    case 0xC26B50: {
        Instruction step(cpu, 0xA1, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:9 LDA #0
    case 0xC26B51: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:9 LDA #0
    // Overlapping static entry reached from 0xC26B50.
    case 0xC26B52: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/target_allies.asm:9 LDA #0
    // Overlapping static entry reached from 0xC26B51.
    case 0xC26B53: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/target_allies.asm:10 STA @LOCAL00
    case 0xC26B54: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:11 BRA @UNKNOWN3
    case 0xC26B56: {
        Instruction step(cpu, 0x80, 0x000062u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/target_allies.asm:13 LDA a:battler::consciousness,X
    case 0xC26B58: {
        Instruction step(cpu, 0xBD, 0x00000Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:14 AND #$00FF
    case 0xC26B5B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC26B5B.
    case 0xC26B5D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/target_allies.asm:15 BEQ @UNKNOWN2
    case 0xC26B5E: {
        Instruction step(cpu, 0xF0, 0x00004Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/target_allies.asm:16 LDA a:battler::ally_or_enemy,X
    case 0xC26B60: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:17 AND #$00FF
    case 0xC26B63: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC26B63.
    case 0xC26B65: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/target_allies.asm:18 BEQ @UNKNOWN1
    case 0xC26B66: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/target_allies.asm:19 LDA a:battler::npc_id,X
    case 0xC26B68: {
        Instruction step(cpu, 0xBD, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:20 AND #$00FF
    case 0xC26B6B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC26B6B.
    case 0xC26B6D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/target_allies.asm:21 BEQ @UNKNOWN2
    case 0xC26B6E: {
        Instruction step(cpu, 0xF0, 0x00003Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26B70: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E6u : 0x0076E6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26B70.
    case 0xC26B72: {
        Instruction step(cpu, 0x76, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26B73: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26B72.
    case 0xC26B74: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26B75: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26B74.
    case 0xC26B76: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26B75.
    case 0xC26B77: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/target_allies.asm:23 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26B78: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:24 LDA @LOCAL00
    case 0xC26B7A: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:25 ASL
    case 0xC26B7C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/target_allies.asm:26 ASL
    case 0xC26B7D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/target_allies.asm:27 CLC
    case 0xC26B7E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/target_allies.asm:28 ADC @VIRTUAL06
    case 0xC26B7F: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/target_allies.asm:29 STA @VIRTUAL06
    case 0xC26B81: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/target_allies.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26B83: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/target_allies.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26B83.
    case 0xC26B85: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/target_allies.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26B86: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/target_allies.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26B88: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/target_allies.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26B89: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/target_allies.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26B8B: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/target_allies.asm:30 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26B8D: {
        Instruction step(cpu, 0x84, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/target_allies.asm:31 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26B8F: {
        Instruction step(cpu, 0xAD, 0x00AB6Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/target_allies.asm:31 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26B92: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/target_allies.asm:31 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26B94: {
        Instruction step(cpu, 0xAD, 0x00AB70u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/target_allies.asm:31 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26B97: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:955 LDA val1
    // Macro caller: src/battle/target_allies.asm:32 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26B99: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:956 ORA val2
    // Macro caller: src/battle/target_allies.asm:32 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26B9B: {
        Instruction step(cpu, 0x05, 0x00000Au, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:957 STA dest
    // Macro caller: src/battle/target_allies.asm:32 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26B9D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/battle/target_allies.asm:32 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26B9F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/battle/target_allies.asm:32 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26BA1: {
        Instruction step(cpu, 0x05, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/battle/target_allies.asm:32 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26BA3: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/target_allies.asm:33 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26BA5: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/target_allies.asm:33 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26BA7: {
        Instruction step(cpu, 0x8D, 0x00AB6Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/target_allies.asm:33 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26BAA: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/target_allies.asm:33 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC26BAC: {
        Instruction step(cpu, 0x8D, 0x00AB70u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:35 TXA
    case 0xC26BAF: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:36 CLC
    case 0xC26BB0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/target_allies.asm:37 ADC #.SIZEOF(battler)
    case 0xC26BB1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/target_allies.asm:37 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC26BB1.
    case 0xC26BB3: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/target_allies.asm:38 TAX
    case 0xC26BB4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/target_allies.asm:39 LDA @LOCAL00
    case 0xC26BB5: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:40 INC
    case 0xC26BB7: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/target_allies.asm:41 STA @LOCAL00
    case 0xC26BB8: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:43 CMP #BATTLER_COUNT
    case 0xC26BBA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/target_allies.asm:43 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC26BBA.
    case 0xC26BBC: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/target_allies.asm:44 BCC @UNKNOWN0
    case 0xC26BBD: {
        Instruction step(cpu, 0x90, 0x000099u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/target_allies.asm:45 END_C_FUNCTION
    case 0xC26BBF: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/target_allies.asm:45 END_C_FUNCTION
    case 0xC26BC0: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
