// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/find_nearby_talkable_tpt_entry.asm
bool resume_overworld_find_nearby_talkable_tpt_entry(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/find_nearby_talkable_tpt_entry.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC046D9: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/find_nearby_talkable_tpt_entry.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC046D6.
    case 0xC046DA: {
        Instruction step(cpu, 0x31, 0x00000Bu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/find_nearby_talkable_tpt_entry.asm:8 END_STACK_VARS
    case 0xC046DB: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/find_nearby_talkable_tpt_entry.asm:8 END_STACK_VARS
    case 0xC046DC: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/find_nearby_talkable_tpt_entry.asm:8 END_STACK_VARS
    case 0xC046DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/find_nearby_talkable_tpt_entry.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC046DD.
    case 0xC046DF: {
        Instruction step(cpu, 0xFF, 0xFFA95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/find_nearby_talkable_tpt_entry.asm:8 END_STACK_VARS
    case 0xC046E0: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/find_nearby_talkable_tpt_entry.asm:9 LDA #.LOWORD(-1)
    case 0xC046E1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/find_nearby_talkable_tpt_entry.asm:9 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC046E1.
    case 0xC046E3: {
        Instruction step(cpu, 0xFF, 0x60E88Du, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/find_nearby_talkable_tpt_entry.asm:10 STA INTERACTING_NPC_ID
    case 0xC046E4: {
        Instruction step(cpu, 0x8D, 0x0060E8u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/find_nearby_talkable_tpt_entry.asm:11 STA INTERACTING_NPC_ENTITY
    case 0xC046E7: {
        Instruction step(cpu, 0x8D, 0x0060EAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/find_nearby_talkable_tpt_entry.asm:12 JSR UNKNOWN_C043BC
    case 0xC046EA: {
        Instruction step(cpu, 0x20, 0x004643u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/find_nearby_talkable_tpt_entry.asm:13 STA @LOCAL01
    case 0xC046ED: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/find_nearby_talkable_tpt_entry.asm:14 CMP #.LOWORD(-1)
    case 0xC046EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/find_nearby_talkable_tpt_entry.asm:14 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC046EF.
    case 0xC046F1: {
        Instruction step(cpu, 0xFF, 0xA229F0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/find_nearby_talkable_tpt_entry.asm:15 BEQ @UNKNOWN0
    case 0xC046F2: {
        Instruction step(cpu, 0xF0, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/find_nearby_talkable_tpt_entry.asm:16 LDX #.LOWORD(GAME_STATE) + game_state::current_party_members
    case 0xC046F4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00003Au : 0x009B3Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/find_nearby_talkable_tpt_entry.asm:16 LDX #.LOWORD(GAME_STATE) + game_state::current_party_members
    // Overlapping static entry reached from 0xC046F1.
    case 0xC046F5: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/find_nearby_talkable_tpt_entry.asm:16 LDX #.LOWORD(GAME_STATE) + game_state::current_party_members
    // Overlapping static entry reached from 0xC046F4.
    case 0xC046F6: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/overworld/find_nearby_talkable_tpt_entry.asm:17 STX @LOCAL00
    case 0xC046F7: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/find_nearby_talkable_tpt_entry.asm:18 LDA __BSS_START__,X
    case 0xC046F9: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/find_nearby_talkable_tpt_entry.asm:19 ASL
    case 0xC046FC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/find_nearby_talkable_tpt_entry.asm:20 TAX
    case 0xC046FD: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/find_nearby_talkable_tpt_entry.asm:21 LDA @LOCAL01
    case 0xC046FE: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/find_nearby_talkable_tpt_entry.asm:22 CMP ENTITY_DIRECTIONS,X
    case 0xC04700: {
        Instruction step(cpu, 0xDD, 0x002EF4u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/find_nearby_talkable_tpt_entry.asm:23 BEQ @UNKNOWN0
    case 0xC04703: {
        Instruction step(cpu, 0xF0, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/find_nearby_talkable_tpt_entry.asm:24 STA GAME_STATE + game_state::leader_direction
    case 0xC04705: {
        Instruction step(cpu, 0x8D, 0x009B30u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/find_nearby_talkable_tpt_entry.asm:25 LDX @LOCAL00
    case 0xC04708: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/find_nearby_talkable_tpt_entry.asm:26 LDA __BSS_START__,X
    case 0xC0470A: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/find_nearby_talkable_tpt_entry.asm:27 ASL
    case 0xC0470D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/find_nearby_talkable_tpt_entry.asm:28 TAX
    case 0xC0470E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/find_nearby_talkable_tpt_entry.asm:29 LDA @LOCAL01
    case 0xC0470F: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/find_nearby_talkable_tpt_entry.asm:30 STA ENTITY_DIRECTIONS,X
    case 0xC04711: {
        Instruction step(cpu, 0x9D, 0x002EF4u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/find_nearby_talkable_tpt_entry.asm:31 LDX @LOCAL00
    case 0xC04714: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/find_nearby_talkable_tpt_entry.asm:32 LDA __BSS_START__,X
    case 0xC04716: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/find_nearby_talkable_tpt_entry.asm:33 JSL UNKNOWN_C0A780
    case 0xC04719: {
        Instruction step(cpu, 0x22, 0xC0A75Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/find_nearby_talkable_tpt_entry.asm:35 LDA INTERACTING_NPC_ID
    case 0xC0471D: {
        Instruction step(cpu, 0xAD, 0x0060E8u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/find_nearby_talkable_tpt_entry.asm:36 END_C_FUNCTION
    case 0xC04720: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/find_nearby_talkable_tpt_entry.asm:36 END_C_FUNCTION
    case 0xC04721: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
