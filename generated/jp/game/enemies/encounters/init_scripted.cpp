// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/init_scripted.asm
bool resume_battle_init_scripted(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/init_scripted.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC22E5D: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/init_scripted.asm:9 END_STACK_VARS
    case 0xC22E5F: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/init_scripted.asm:9 END_STACK_VARS
    case 0xC22E60: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/init_scripted.asm:9 END_STACK_VARS
    case 0xC22E61: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_scripted.asm:9 END_STACK_VARS
    case 0xC22E62: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/init_scripted.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC22E62.
    case 0xC22E64: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/init_scripted.asm:9 END_STACK_VARS
    case 0xC22E65: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/init_scripted.asm:9 END_STACK_VARS
    case 0xC22E66: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:10 STA @LOCAL01
    case 0xC22E67: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:10 STA @LOCAL01
    // Overlapping static entry reached from 0xC22E64.
    case 0xC22E68: {
        Instruction step(cpu, 0x10, 0x00008Du, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/battle/init_scripted.asm:11 STA CURRENT_BATTLE_GROUP
    case 0xC22E69: {
        Instruction step(cpu, 0x8D, 0x004E12u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:11 STA CURRENT_BATTLE_GROUP
    // Overlapping static entry reached from 0xC22E68.
    case 0xC22E6A: {
        Instruction step(cpu, 0x12, 0x00004Eu, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/init_scripted.asm:12 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC22E6C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Du : 0x00C60Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/init_scripted.asm:12 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC22E6C.
    case 0xC22E6E: {
        Instruction step(cpu, 0xC6, 0x000085u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/init_scripted.asm:12 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC22E6F: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/init_scripted.asm:12 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC22E6E.
    case 0xC22E70: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/init_scripted.asm:12 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC22E71: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D0u : 0x0000D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/init_scripted.asm:12 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC22E71.
    case 0xC22E73: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/init_scripted.asm:12 LOADPTR BTL_ENTRY_PTR_TABLE, @VIRTUAL0A
    case 0xC22E74: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:13 LDA @LOCAL01
    case 0xC22E76: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:14 ASL
    case 0xC22E78: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/init_scripted.asm:15 ASL
    case 0xC22E79: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/init_scripted.asm:16 ASL
    case 0xC22E7A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/init_scripted.asm:17 CLC
    case 0xC22E7B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/init_scripted.asm:18 ADC @VIRTUAL0A
    case 0xC22E7C: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/init_scripted.asm:19 STA @VIRTUAL0A
    case 0xC22E7E: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/init_scripted.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC22E80: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/init_scripted.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC22E80.
    case 0xC22E82: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/init_scripted.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC22E83: {
        Instruction step(cpu, 0xB7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/init_scripted.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC22E85: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/init_scripted.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC22E86: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/init_scripted.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC22E88: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/init_scripted.asm:20 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC22E8A: {
        Instruction step(cpu, 0x84, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/init_scripted.asm:21 STZ ENEMIES_IN_BATTLE
    case 0xC22E8C: {
        Instruction step(cpu, 0x9C, 0x00A18Cu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/init_scripted.asm:22 BRA @UNKNOWN2
    case 0xC22E8F: {
        Instruction step(cpu, 0x80, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/init_scripted.asm:24 LDA ENEMIES_IN_BATTLE
    case 0xC22E91: {
        Instruction step(cpu, 0xAD, 0x00A18Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:25 ASL
    case 0xC22E94: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/init_scripted.asm:26 TAX
    case 0xC22E95: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/init_scripted.asm:27 LDY #1
    case 0xC22E96: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/init_scripted.asm:27 LDY #1
    // Overlapping static entry reached from 0xC22E96.
    case 0xC22E98: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_scripted.asm:28 LDA [@VIRTUAL06],Y
    case 0xC22E99: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:29 STA ENEMIES_IN_BATTLE_IDS,X
    case 0xC22E9B: {
        Instruction step(cpu, 0x9D, 0x00A18Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:30 INC ENEMIES_IN_BATTLE
    case 0xC22E9E: {
        Instruction step(cpu, 0xEE, 0x00A18Cu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/battle/init_scripted.asm:32 LDA @LOCAL00
    case 0xC22EA1: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:33 TAX
    case 0xC22EA3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/init_scripted.asm:34 DEC
    case 0xC22EA4: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/init_scripted.asm:35 STA @LOCAL00
    case 0xC22EA5: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:36 CPX #0
    case 0xC22EA7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/init_scripted.asm:36 CPX #0
    // Overlapping static entry reached from 0xC22EA7.
    case 0xC22EA9: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_scripted.asm:37 BNE @UNKNOWN0
    case 0xC22EAA: {
        Instruction step(cpu, 0xD0, 0x0000E5u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/init_scripted.asm:38 LDA #3
    case 0xC22EAC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:38 LDA #3
    // Overlapping static entry reached from 0xC22EAC.
    case 0xC22EAE: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_scripted.asm:39 CLC
    case 0xC22EAF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/init_scripted.asm:40 ADC @VIRTUAL06
    case 0xC22EB0: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/init_scripted.asm:41 STA @VIRTUAL06
    case 0xC22EB2: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/init_scripted.asm:43 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC22EB4: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/init_scripted.asm:43 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC22EB6: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/init_scripted.asm:43 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC22EB8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/init_scripted.asm:43 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC22EBA: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:44 LDA [@VIRTUAL0A]
    case 0xC22EBC: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:45 AND #$00FF
    case 0xC22EBE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC22EBE.
    case 0xC22EC0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_scripted.asm:46 STA @LOCAL00
    case 0xC22EC1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:47 CMP #$00FF
    case 0xC22EC3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:47 CMP #$00FF
    // Overlapping static entry reached from 0xC22EC3.
    case 0xC22EC5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_scripted.asm:48 BNE @UNKNOWN1
    case 0xC22EC6: {
        Instruction step(cpu, 0xD0, 0x0000D9u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/init_scripted.asm:49 LDA #$FFFF
    case 0xC22EC8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:49 LDA #$FFFF
    // Overlapping static entry reached from 0xC22EC8.
    case 0xC22ECA: {
        Instruction step(cpu, 0xFF, 0x51488Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/init_scripted.asm:50 STA BATTLE_MODE
    case 0xC22ECB: {
        Instruction step(cpu, 0x8D, 0x005148u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:51 JSL BATTLE_SWIRL_SEQUENCE
    case 0xC22ECE: {
        Instruction step(cpu, 0x22, 0xC2E7F9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_scripted.asm:52 BRA @UNKNOWN4
    case 0xC22ED2: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/init_scripted.asm:54 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC22ED4: {
        Instruction step(cpu, 0x22, 0xC0874Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_scripted.asm:55 JSL UNKNOWN_C4A7B0
    case 0xC22ED8: {
        Instruction step(cpu, 0x22, 0xC47C19u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_scripted.asm:57 JSL UNKNOWN_C2E9C8
    case 0xC22EDC: {
        Instruction step(cpu, 0x22, 0xC2E8E1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_scripted.asm:58 CMP #0
    case 0xC22EE0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:58 CMP #0
    // Overlapping static entry reached from 0xC22EE0.
    case 0xC22EE2: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_scripted.asm:59 BNE @UNKNOWN3
    case 0xC22EE3: {
        Instruction step(cpu, 0xD0, 0x0000EFu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/init_scripted.asm:60 JSL INIT_BATTLE_COMMON
    case 0xC22EE5: {
        Instruction step(cpu, 0x22, 0xC054CFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_scripted.asm:61 TAX
    case 0xC22EE9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/init_scripted.asm:62 STX @LOCAL01
    case 0xC22EEA: {
        Instruction step(cpu, 0x86, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/init_scripted.asm:63 LDA PSI_TELEPORT_DESTINATION
    case 0xC22EEC: {
        Instruction step(cpu, 0xAD, 0x00A141u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:64 BNE @UNKNOWN6
    case 0xC22EEF: {
        Instruction step(cpu, 0xD0, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/init_scripted.asm:65 CPX #0
    case 0xC22EF1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/init_scripted.asm:65 CPX #0
    // Overlapping static entry reached from 0xC22EF1.
    case 0xC22EF3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_scripted.asm:66 BEQ @UNKNOWN5
    case 0xC22EF4: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/init_scripted.asm:67 LDA #1
    case 0xC22EF6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:67 LDA #1
    // Overlapping static entry reached from 0xC22EF6.
    case 0xC22EF8: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_scripted.asm:68 BRA @RETURN
    case 0xC22EF9: {
        Instruction step(cpu, 0x80, 0x000030u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/init_scripted.asm:70 JSL RELOAD_MAP
    case 0xC22EFB: {
        Instruction step(cpu, 0x22, 0xC01909u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_scripted.asm:71 LDX #1
    case 0xC22EFF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_scripted.asm:71 LDX #1
    // Overlapping static entry reached from 0xC22EFF.
    case 0xC22F01: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_scripted.asm:72 TXA
    case 0xC22F02: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:73 JSL FADE_IN
    case 0xC22F03: {
        Instruction step(cpu, 0x22, 0xC0885Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_scripted.asm:74 BRA @UNKNOWN7
    case 0xC22F07: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/init_scripted.asm:76 JSL TELEPORT_MAINLOOP
    case 0xC22F09: {
        Instruction step(cpu, 0x22, 0xC0EA63u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_scripted.asm:77 LDX @LOCAL01
    case 0xC22F0D: {
        Instruction step(cpu, 0xA6, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/init_scripted.asm:78 BEQ @UNKNOWN7
    case 0xC22F0F: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/init_scripted.asm:79 LDA #1
    case 0xC22F11: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:79 LDA #1
    // Overlapping static entry reached from 0xC22F11.
    case 0xC22F13: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_scripted.asm:80 BRA @RETURN
    case 0xC22F14: {
        Instruction step(cpu, 0x80, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/init_scripted.asm:82 JSL UNKNOWN_C3EE4D
    case 0xC22F16: {
        Instruction step(cpu, 0x22, 0xC3EA14u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/init_scripted.asm:83 LDA CURRENT_BATTLE_GROUP
    case 0xC22F1A: {
        Instruction step(cpu, 0xAD, 0x004E12u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:84 CMP #ENEMY_GROUP::BOSS_START
    case 0xC22F1D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000C0u : 0x0001C0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:84 CMP #ENEMY_GROUP::BOSS_START
    // Overlapping static entry reached from 0xC22F1D.
    case 0xC22F1F: {
        Instruction step(cpu, 0x01, 0x0000B0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:85 BCS @UNKNOWN8
    case 0xC22F20: {
        Instruction step(cpu, 0xB0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/init_scripted.asm:85 BCS @UNKNOWN8
    // Overlapping static entry reached from 0xC22F1F.
    case 0xC22F21: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/battle/init_scripted.asm:86 LDA #120
    case 0xC22F22: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000078u : 0x000078u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:86 LDA #120
    // Overlapping static entry reached from 0xC22F21.
    case 0xC22F23: {
        Instruction step(cpu, 0x78, 0x000000u, 1u, AddressMode::Implied);
        step.disable_interrupts();
        return step.finish();
    }
    // src/battle/init_scripted.asm:86 LDA #120
    // Overlapping static entry reached from 0xC22F22.
    case 0xC22F24: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/init_scripted.asm:87 STA PLAYER_INTANGIBILITY_FRAMES
    case 0xC22F25: {
        Instruction step(cpu, 0x8D, 0x0060DEu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:89 LDA #0
    case 0xC22F28: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/init_scripted.asm:89 LDA #0
    // Overlapping static entry reached from 0xC22F28.
    case 0xC22F2A: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/init_scripted.asm:91 END_C_FUNCTION
    case 0xC22F2B: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/init_scripted.asm:91 END_C_FUNCTION
    case 0xC22F2C: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
