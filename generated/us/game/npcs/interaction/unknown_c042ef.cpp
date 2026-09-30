// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C0/C042EF.asm
bool resume_unresolved_c0_c042ef(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C042EF.asm:3 BEGIN_C_FUNCTION
    case 0xC042EF: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C042EF.asm:13 END_STACK_VARS
    case 0xC042F1: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C042EF.asm:13 END_STACK_VARS
    case 0xC042F2: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C042EF.asm:13 END_STACK_VARS
    case 0xC042F3: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C042EF.asm:13 END_STACK_VARS
    case 0xC042F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E4u : 0x00FFE4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C042EF.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC042F4.
    case 0xC042F6: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C042EF.asm:13 END_STACK_VARS
    case 0xC042F7: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C042EF.asm:13 END_STACK_VARS
    case 0xC042F8: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:14 STA @LOCAL06
    case 0xC042F9: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:14 STA @LOCAL06
    // Overlapping static entry reached from 0xC042F6.
    case 0xC042FA: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:15 ASL
    case 0xC042FB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:16 TAX
    case 0xC042FC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:17 LDA f:UNKNOWN_C3E148,X
    case 0xC042FD: {
        Instruction step(cpu, 0xBF, 0xC3E148u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:18 STA @LOCAL05
    case 0xC04301: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:19 LDA f:UNKNOWN_C3E158,X
    case 0xC04303: {
        Instruction step(cpu, 0xBF, 0xC3E158u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:20 STA @LOCAL04
    case 0xC04307: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:21 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC04309: {
        Instruction step(cpu, 0xAD, 0x009877u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:22 CLC
    case 0xC0430C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:23 ADC @LOCAL05
    case 0xC0430D: {
        Instruction step(cpu, 0x65, 0x000018u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:24 STA @LOCAL03
    case 0xC0430F: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:25 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC04311: {
        Instruction step(cpu, 0xAD, 0x00987Bu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:26 CLC
    case 0xC04314: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:27 ADC @LOCAL04
    case 0xC04315: {
        Instruction step(cpu, 0x65, 0x000016u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:28 STA @VIRTUAL04
    case 0xC04317: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:29 LDA PLAYER_INTANGIBILITY_FRAMES
    case 0xC04319: {
        Instruction step(cpu, 0xAD, 0x005D58u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:30 STA @LOCAL02
    case 0xC0431C: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:31 LDA #1
    case 0xC0431E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:31 LDA #1
    // Overlapping static entry reached from 0xC0431E.
    case 0xC04320: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:32 STA PLAYER_INTANGIBILITY_FRAMES
    case 0xC04321: {
        Instruction step(cpu, 0x8D, 0x005D58u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:34 LDA #.LOWORD(GAME_STATE) + game_state::current_party_members
    case 0xC04324: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000089u : 0x009889u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:34 LDA #.LOWORD(GAME_STATE) + game_state::current_party_members
    // Overlapping static entry reached from 0xC04324.
    case 0xC04326: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:35 STA @VIRTUAL02
    case 0xC04327: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:36 LDX @VIRTUAL02
    case 0xC04329: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:37 LDA __BSS_START__,X
    case 0xC0432B: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:38 TAY
    case 0xC0432E: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:39 LDX @VIRTUAL04
    case 0xC0432F: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:40 LDA @LOCAL03
    case 0xC04331: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:41 JSL NPC_COLLISION_CHECK
    case 0xC04333: {
        Instruction step(cpu, 0x22, 0xC05FF6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:42 STA @LOCAL01
    case 0xC04337: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:43 CMP #$8000
    case 0xC04339: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:43 CMP #$8000
    // Overlapping static entry reached from 0xC04339.
    case 0xC0433B: {
        Instruction step(cpu, 0x80, 0x0000B0u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:44 BCS @UNKNOWN1
    case 0xC0433C: {
        Instruction step(cpu, 0xB0, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:45 ASL
    case 0xC0433E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:46 TAX
    case 0xC0433F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:47 LDA ENTITY_NPC_IDS,X
    case 0xC04340: {
        Instruction step(cpu, 0xBD, 0x002C9Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:48 STA INTERACTING_NPC_ID
    case 0xC04343: {
        Instruction step(cpu, 0x8D, 0x005D62u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:49 LDA @LOCAL01
    case 0xC04346: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:50 STA INTERACTING_NPC_ENTITY
    case 0xC04348: {
        Instruction step(cpu, 0x8D, 0x005D64u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:51 BRA @UNKNOWN7
    case 0xC0434B: {
        Instruction step(cpu, 0x80, 0x000052u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:53 LDA @LOCAL06
    case 0xC0434D: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:54 STA @LOCAL00
    case 0xC0434F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:55 LDX @VIRTUAL02
    case 0xC04351: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:56 LDA __BSS_START__,X
    case 0xC04353: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:57 TAY
    case 0xC04356: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:58 LDX @VIRTUAL04
    case 0xC04357: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:59 LDA @LOCAL03
    case 0xC04359: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:60 JSL UNKNOWN_C05CD7
    case 0xC0435B: {
        Instruction step(cpu, 0x22, 0xC05CD7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:61 AND #$0082
    case 0xC0435F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000082u : 0x000082u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:61 AND #$0082
    // Overlapping static entry reached from 0xC0435F.
    case 0xC04361: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:62 CMP #130
    case 0xC04362: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000082u : 0x000082u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:62 CMP #130
    // Overlapping static entry reached from 0xC04362.
    case 0xC04364: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:63 BNE @UNKNOWN7
    case 0xC04365: {
        Instruction step(cpu, 0xD0, 0x000038u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:64 LDA @LOCAL05
    case 0xC04367: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:65 BEQ @UNKNOWN4
    case 0xC04369: {
        Instruction step(cpu, 0xF0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:66 LDA @LOCAL05
    case 0xC0436B: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:67 AND #$8000
    case 0xC0436D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:67 AND #$8000
    // Overlapping static entry reached from 0xC0436D.
    case 0xC0436F: {
        Instruction step(cpu, 0x80, 0x0000F0u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:68 BEQ @UNKNOWN2
    case 0xC04370: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:69 LDX #.LOWORD(-8)
    case 0xC04372: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000F8u : 0x00FFF8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:69 LDX #.LOWORD(-8)
    // Overlapping static entry reached from 0xC04372.
    case 0xC04374: {
        Instruction step(cpu, 0xFF, 0xA20380u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:70 BRA @UNKNOWN3
    case 0xC04375: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:72 LDX #8
    case 0xC04377: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:72 LDX #8
    // Overlapping static entry reached from 0xC04374.
    case 0xC04378: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:72 LDX #8
    // Overlapping static entry reached from 0xC04377.
    case 0xC04379: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:74 TXA
    case 0xC0437A: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:75 CLC
    case 0xC0437B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:76 ADC @LOCAL03
    case 0xC0437C: {
        Instruction step(cpu, 0x65, 0x000014u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:77 STA @LOCAL03
    case 0xC0437E: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:79 LDA @LOCAL04
    case 0xC04380: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:80 BEQ @UNKNOWN0
    case 0xC04382: {
        Instruction step(cpu, 0xF0, 0x0000A0u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:81 LDA @LOCAL04
    case 0xC04384: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:82 AND #$8000
    case 0xC04386: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:82 AND #$8000
    // Overlapping static entry reached from 0xC04386.
    case 0xC04388: {
        Instruction step(cpu, 0x80, 0x0000F0u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:83 BEQ @UNKNOWN5
    case 0xC04389: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:84 LDX #.LOWORD(-8)
    case 0xC0438B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000F8u : 0x00FFF8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:84 LDX #.LOWORD(-8)
    // Overlapping static entry reached from 0xC0438B.
    case 0xC0438D: {
        Instruction step(cpu, 0xFF, 0xA20380u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:85 BRA @UNKNOWN6
    case 0xC0438E: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:87 LDX #8
    case 0xC04390: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:87 LDX #8
    // Overlapping static entry reached from 0xC0438D.
    case 0xC04391: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:87 LDX #8
    // Overlapping static entry reached from 0xC04390.
    case 0xC04392: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:89 STX @VIRTUAL02
    case 0xC04393: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:90 LDA @VIRTUAL04
    case 0xC04395: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:91 CLC
    case 0xC04397: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:92 ADC @VIRTUAL02
    case 0xC04398: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:93 STA @VIRTUAL04
    case 0xC0439A: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:94 JMP @UNKNOWN0
    case 0xC0439C: {
        Instruction step(cpu, 0x4C, 0x004324u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:96 LDA @LOCAL02
    case 0xC0439F: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:97 STA PLAYER_INTANGIBILITY_FRAMES
    case 0xC043A1: {
        Instruction step(cpu, 0x8D, 0x005D58u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:98 LDA INTERACTING_NPC_ID
    case 0xC043A4: {
        Instruction step(cpu, 0xAD, 0x005D62u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:99 BEQ @UNKNOWN8
    case 0xC043A7: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:100 LDA INTERACTING_NPC_ID
    case 0xC043A9: {
        Instruction step(cpu, 0xAD, 0x005D62u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:101 CMP #.LOWORD(-1)
    case 0xC043AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:101 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC043AC.
    case 0xC043AE: {
        Instruction step(cpu, 0xFF, 0xA506D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:102 BNE @UNKNOWN9
    case 0xC043AF: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:104 LDA @LOCAL06
    case 0xC043B1: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:104 LDA @LOCAL06
    // Overlapping static entry reached from 0xC043AE.
    case 0xC043B2: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:105 JSL UNKNOWN_C065C2
    case 0xC043B3: {
        Instruction step(cpu, 0x22, 0xC065C2u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:107 LDA INTERACTING_NPC_ID
    case 0xC043B7: {
        Instruction step(cpu, 0xAD, 0x005D62u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C042EF.asm:108 END_C_FUNCTION
    case 0xC043BA: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C042EF.asm:108 END_C_FUNCTION
    case 0xC043BB: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
