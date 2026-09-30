// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C0/C0C6B6.asm
bool resume_unresolved_c0_c0c6b6(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C6B6.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0C6B6: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C0C6B6.asm:3 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC0AB61.
    case 0xC0C6B7: {
        Instruction step(cpu, 0x31, 0x00000Bu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C0C6B6.asm:7 END_STACK_VARS
    case 0xC0C6B8: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C0C6B6.asm:7 END_STACK_VARS
    case 0xC0C6B9: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C6B6.asm:7 END_STACK_VARS
    case 0xC0C6BA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C0C6B6.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0C6BA.
    case 0xC0C6BC: {
        Instruction step(cpu, 0xFF, 0x47AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C0C6B6.asm:7 END_STACK_VARS
    case 0xC0C6BD: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:8 LDA PSI_TELEPORT_SPEED + fixed_point::integer
    case 0xC0C6BE: {
        Instruction step(cpu, 0xAD, 0x009F47u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:8 LDA PSI_TELEPORT_SPEED + fixed_point::integer
    // Overlapping static entry reached from 0xC0C6BC.
    case 0xC0C6C0: {
        Instruction step(cpu, 0x9F, 0x0004C9u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:9 CMP #04
    case 0xC0C6C1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:9 CMP #04
    // Overlapping static entry reached from 0xC0C6C1.
    case 0xC0C6C3: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:10 BCC @UNKNOWN0
    case 0xC0C6C4: {
        Instruction step(cpu, 0x90, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:11 LDA #.LOWORD(-1)
    case 0xC0C6C6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:11 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0C6C6.
    case 0xC0C6C8: {
        Instruction step(cpu, 0xFF, 0xAD4480u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:12 BRA @UNKNOWN4
    case 0xC0C6C9: {
        Instruction step(cpu, 0x80, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:14 LDA CURRENT_ENTITY_SLOT
    case 0xC0C6CB: {
        Instruction step(cpu, 0xAD, 0x001A42u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:14 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC0C6C8.
    case 0xC0C6CC: {
        Instruction step(cpu, 0x42, 0x00001Au, 2u, AddressMode::SignatureByte);
        step.reserved_no_operation();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:15 ASL
    case 0xC0C6CE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:16 TAX
    case 0xC0C6CF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:17 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC0C6D0: {
        Instruction step(cpu, 0xAD, 0x009877u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:18 SEC
    case 0xC0C6D3: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:19 SBC #128
    case 0xC0C6D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:19 SBC #128
    // Overlapping static entry reached from 0xC0C6D4.
    case 0xC0C6D6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:20 STA @VIRTUAL02
    case 0xC0C6D7: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:21 LDA ENTITY_ABS_X_TABLE,X
    case 0xC0C6D9: {
        Instruction step(cpu, 0xBD, 0x000B8Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:22 SEC
    case 0xC0C6DC: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:23 SBC @VIRTUAL02
    case 0xC0C6DD: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:24 STA @LOCAL00
    case 0xC0C6DF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:25 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC0C6E1: {
        Instruction step(cpu, 0xAD, 0x00987Bu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:26 SEC
    case 0xC0C6E4: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:27 SBC #112
    case 0xC0C6E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000070u : 0x000070u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:27 SBC #112
    // Overlapping static entry reached from 0xC0C6E5.
    case 0xC0C6E7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:28 STA @VIRTUAL02
    case 0xC0C6E8: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:29 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC0C6EA: {
        Instruction step(cpu, 0xBD, 0x000BCAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:30 SEC
    case 0xC0C6ED: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:31 SBC @VIRTUAL02
    case 0xC0C6EE: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:32 TAX
    case 0xC0C6F0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:33 LDA @LOCAL00
    case 0xC0C6F1: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:33 LDA @LOCAL00
    // Overlapping static entry reached from 0xC0C76B.
    case 0xC0C6F2: {
        Instruction step(cpu, 0x0E, 0x00C0C9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:34 CMP #.LOWORD(-64)
    // Retained frozen presentation override; see program_index.json.
    case 0xC0C6F3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000080u : 0x00FF80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:34 CMP #.LOWORD(-64)
    // Overlapping static entry reached from 0xC0C6F3.
    case 0xC0C6F5: {
        Instruction step(cpu, 0xFF, 0xC905B0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:35 BCS @UNKNOWN1
    case 0xC0C6F6: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:36 CMP #320
    // Retained frozen presentation override; see program_index.json.
    case 0xC0C6F8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000080u : 0x000180u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:36 CMP #320
    // Retained frozen presentation override; see program_index.json.
    // Overlapping static entry reached from 0xC0C6F5.
    case 0xC0C6F9: {
        Instruction step(cpu, 0x80, 0x000001u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:36 CMP #320
    // Overlapping static entry reached from 0xC0C6F8.
    case 0xC0C6FA: {
        Instruction step(cpu, 0x01, 0x0000B0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:37 BCS @UNKNOWN3
    case 0xC0C6FB: {
        Instruction step(cpu, 0xB0, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:37 BCS @UNKNOWN3
    // Overlapping static entry reached from 0xC0C6FA.
    case 0xC0C6FC: {
        Instruction step(cpu, 0x0F, 0xFFC0E0u, 4u, AddressMode::Long);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:39 CPX #.LOWORD(-64)
    // Retained frozen presentation override; see program_index.json.
    case 0xC0C6FD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000080u : 0x00FF80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:39 CPX #.LOWORD(-64)
    // Overlapping static entry reached from 0xC0C6FD.
    case 0xC0C6FF: {
        Instruction step(cpu, 0xFF, 0xE005B0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:40 BCS @UNKNOWN2
    case 0xC0C700: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:41 CPX #320
    // Retained frozen presentation override; see program_index.json.
    case 0xC0C702: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000080u : 0x000180u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:41 CPX #320
    // Retained frozen presentation override; see program_index.json.
    // Overlapping static entry reached from 0xC0C6FF.
    case 0xC0C703: {
        Instruction step(cpu, 0x80, 0x000001u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:41 CPX #320
    // Overlapping static entry reached from 0xC0C702.
    case 0xC0C704: {
        Instruction step(cpu, 0x01, 0x0000B0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:42 BCS @UNKNOWN3
    case 0xC0C705: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:42 BCS @UNKNOWN3
    // Overlapping static entry reached from 0xC0C704.
    case 0xC0C706: {
        Instruction step(cpu, 0x05, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:44 LDA #.LOWORD(-1)
    case 0xC0C707: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:44 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0C706.
    case 0xC0C708: {
        Instruction step(cpu, 0xFF, 0x0380FFu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:44 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0C707.
    case 0xC0C709: {
        Instruction step(cpu, 0xFF, 0xA90380u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:45 BRA @UNKNOWN4
    case 0xC0C70A: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:47 LDA #0
    case 0xC0C70C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:47 LDA #0
    // Overlapping static entry reached from 0xC0C709.
    case 0xC0C70D: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C0C6B6.asm:47 LDA #0
    // Overlapping static entry reached from 0xC0C70C.
    case 0xC0C70E: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C0C6B6.asm:49 END_C_FUNCTION
    case 0xC0C70F: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C0C6B6.asm:49 END_C_FUNCTION
    case 0xC0C710: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
