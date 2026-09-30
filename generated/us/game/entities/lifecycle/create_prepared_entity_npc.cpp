// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/create_prepared_entity_npc.asm
bool resume_overworld_create_prepared_entity_npc(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC464B5: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:12 END_STACK_VARS
    case 0xC464B7: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:12 END_STACK_VARS
    case 0xC464B8: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:12 END_STACK_VARS
    case 0xC464B9: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:12 END_STACK_VARS
    case 0xC464BA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC464BA.
    case 0xC464BC: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:12 END_STACK_VARS
    case 0xC464BD: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:12 END_STACK_VARS
    case 0xC464BE: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_npc.asm:13 STA @VIRTUAL02
    case 0xC464BF: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_npc.asm:13 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC464BC.
    case 0xC464C0: {
        Instruction step(cpu, 0x02, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:14 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC464C1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000085u : 0x008985u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:14 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC464C1.
    case 0xC464C3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x89, narrow ? 0x000085u : 0x000685u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.test_bits();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:14 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC464C4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:14 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC464C3.
    case 0xC464C5: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:14 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC464C6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CFu : 0x0000CFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:14 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC464C5.
    case 0xC464C7: {
        Instruction step(cpu, 0xCF, 0x088500u, 4u, AddressMode::Long);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:14 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC464C6.
    case 0xC464C8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:14 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC464C9: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_npc.asm:15 LDA @VIRTUAL02
    case 0xC464CB: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:594 STA scratch
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:16 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC464CD: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:595 ASL
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:16 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC464CF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:596 ASL
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:16 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC464D0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:597 ASL
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:16 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC464D1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:598 ASL
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:16 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC464D2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:16 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC464D3: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_npc.asm:17 CLC
    case 0xC464D5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_npc.asm:18 ADC @VIRTUAL06
    case 0xC464D6: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_npc.asm:19 STA @VIRTUAL06
    case 0xC464D8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_npc.asm:20 LDA ENTITY_PREPARED_X_COORDINATE
    case 0xC464DA: {
        Instruction step(cpu, 0xAD, 0x009E2Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_npc.asm:21 STA @LOCAL00
    case 0xC464DD: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_npc.asm:22 LDA ENTITY_PREPARED_Y_COORDINATE
    case 0xC464DF: {
        Instruction step(cpu, 0xAD, 0x009E2Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_npc.asm:23 STA @LOCAL01
    case 0xC464E2: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_npc.asm:24 LDY #$FFFF
    case 0xC464E4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_npc.asm:24 LDY #$FFFF
    // Overlapping static entry reached from 0xC464E4.
    case 0xC464E6: {
        Instruction step(cpu, 0xFF, 0xA01484u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_npc.asm:25 STY @LOCAL03
    case 0xC464E7: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_npc.asm:26 LDY #1
    case 0xC464E9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_npc.asm:26 LDY #1
    // Overlapping static entry reached from 0xC464E6.
    case 0xC464EA: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_npc.asm:26 LDY #1
    // Overlapping static entry reached from 0xC464E9.
    case 0xC464EB: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_npc.asm:27 LDA [@VIRTUAL06],Y
    case 0xC464EC: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_npc.asm:28 LDY @LOCAL03
    case 0xC464EE: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_npc.asm:29 JSL CREATE_ENTITY
    case 0xC464F0: {
        Instruction step(cpu, 0x22, 0xC01E49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_npc.asm:30 STA @LOCAL02
    case 0xC464F4: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_npc.asm:31 ASL
    case 0xC464F6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_npc.asm:32 TAX
    case 0xC464F7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_npc.asm:33 LDA ENTITY_PREPARED_DIRECTION
    case 0xC464F8: {
        Instruction step(cpu, 0xAD, 0x009E31u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_npc.asm:34 STA ENTITY_DIRECTIONS,X
    case 0xC464FB: {
        Instruction step(cpu, 0x9D, 0x002AF6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_npc.asm:35 LDA @VIRTUAL02
    case 0xC464FE: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_npc.asm:36 STA ENTITY_NPC_IDS,X
    case 0xC46500: {
        Instruction step(cpu, 0x9D, 0x002C9Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/create_prepared_entity_npc.asm:37 LDA @LOCAL02
    case 0xC46503: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:38 END_C_FUNCTION
    case 0xC46505: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/create_prepared_entity_npc.asm:38 END_C_FUNCTION
    case 0xC46506: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
