// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/unknown/C0/C042EF.asm
bool resume_unresolved_c0_c042ef(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C042EF.asm:3 BEGIN_C_FUNCTION
    case 0xC04576: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C042EF.asm:13 END_STACK_VARS
    case 0xC04578: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C042EF.asm:13 END_STACK_VARS
    case 0xC04579: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C042EF.asm:13 END_STACK_VARS
    case 0xC0457A: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C042EF.asm:13 END_STACK_VARS
    case 0xC0457B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E4u : 0x00FFE4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C042EF.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC0457B.
    case 0xC0457D: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C042EF.asm:13 END_STACK_VARS
    case 0xC0457E: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C042EF.asm:13 END_STACK_VARS
    case 0xC0457F: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:14 STA @LOCAL06
    case 0xC04580: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:14 STA @LOCAL06
    // Overlapping static entry reached from 0xC0457D.
    case 0xC04581: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:15 ASL
    case 0xC04582: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:16 TAX
    case 0xC04583: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:17 LDA f:UNKNOWN_C3E148,X
    case 0xC04584: {
        Instruction step(cpu, 0xBF, 0xC3E132u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:18 STA @LOCAL05
    case 0xC04588: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:19 LDA f:UNKNOWN_C3E158,X
    case 0xC0458A: {
        Instruction step(cpu, 0xBF, 0xC3E142u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:20 STA @LOCAL04
    case 0xC0458E: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:21 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC04590: {
        Instruction step(cpu, 0xAD, 0x009B28u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:22 CLC
    case 0xC04593: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:23 ADC @LOCAL05
    case 0xC04594: {
        Instruction step(cpu, 0x65, 0x000018u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:24 STA @LOCAL03
    case 0xC04596: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:25 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC04598: {
        Instruction step(cpu, 0xAD, 0x009B2Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:26 CLC
    case 0xC0459B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:27 ADC @LOCAL04
    case 0xC0459C: {
        Instruction step(cpu, 0x65, 0x000016u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:28 STA @VIRTUAL04
    case 0xC0459E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:29 LDA PLAYER_INTANGIBILITY_FRAMES
    case 0xC045A0: {
        Instruction step(cpu, 0xAD, 0x0060DEu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:30 STA @LOCAL02
    case 0xC045A3: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:31 LDA #1
    case 0xC045A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:31 LDA #1
    // Overlapping static entry reached from 0xC045A5.
    case 0xC045A7: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:32 STA PLAYER_INTANGIBILITY_FRAMES
    case 0xC045A8: {
        Instruction step(cpu, 0x8D, 0x0060DEu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:34 LDA #.LOWORD(GAME_STATE) + game_state::current_party_members
    case 0xC045AB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Au : 0x009B3Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:34 LDA #.LOWORD(GAME_STATE) + game_state::current_party_members
    // Overlapping static entry reached from 0xC045AB.
    case 0xC045AD: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:35 STA @VIRTUAL02
    case 0xC045AE: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:36 LDX @VIRTUAL02
    case 0xC045B0: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:37 LDA __BSS_START__,X
    case 0xC045B2: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:38 TAY
    case 0xC045B5: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:39 LDX @VIRTUAL04
    case 0xC045B6: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:40 LDA @LOCAL03
    case 0xC045B8: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:41 JSL NPC_COLLISION_CHECK
    case 0xC045BA: {
        Instruction step(cpu, 0x22, 0xC06224u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:42 STA @LOCAL01
    case 0xC045BE: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:43 CMP #$8000
    case 0xC045C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:43 CMP #$8000
    // Overlapping static entry reached from 0xC045C0.
    case 0xC045C2: {
        Instruction step(cpu, 0x80, 0x0000B0u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:44 BCS @UNKNOWN1
    case 0xC045C3: {
        Instruction step(cpu, 0xB0, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:45 ASL
    case 0xC045C5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:46 TAX
    case 0xC045C6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:47 LDA ENTITY_NPC_IDS,X
    case 0xC045C7: {
        Instruction step(cpu, 0xBD, 0x003098u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:48 STA INTERACTING_NPC_ID
    case 0xC045CA: {
        Instruction step(cpu, 0x8D, 0x0060E8u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:49 LDA @LOCAL01
    case 0xC045CD: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:50 STA INTERACTING_NPC_ENTITY
    case 0xC045CF: {
        Instruction step(cpu, 0x8D, 0x0060EAu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:51 BRA @UNKNOWN7
    case 0xC045D2: {
        Instruction step(cpu, 0x80, 0x000052u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:53 LDA @LOCAL06
    case 0xC045D4: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:54 STA @LOCAL00
    case 0xC045D6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:55 LDX @VIRTUAL02
    case 0xC045D8: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:56 LDA __BSS_START__,X
    case 0xC045DA: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:57 TAY
    case 0xC045DD: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:58 LDX @VIRTUAL04
    case 0xC045DE: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:59 LDA @LOCAL03
    case 0xC045E0: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:60 JSL UNKNOWN_C05CD7
    case 0xC045E2: {
        Instruction step(cpu, 0x22, 0xC05F05u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:61 AND #$0082
    case 0xC045E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000082u : 0x000082u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:61 AND #$0082
    // Overlapping static entry reached from 0xC045E6.
    case 0xC045E8: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:62 CMP #130
    case 0xC045E9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000082u : 0x000082u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:62 CMP #130
    // Overlapping static entry reached from 0xC045E9.
    case 0xC045EB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:63 BNE @UNKNOWN7
    case 0xC045EC: {
        Instruction step(cpu, 0xD0, 0x000038u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:64 LDA @LOCAL05
    case 0xC045EE: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:65 BEQ @UNKNOWN4
    case 0xC045F0: {
        Instruction step(cpu, 0xF0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:66 LDA @LOCAL05
    case 0xC045F2: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:67 AND #$8000
    case 0xC045F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:67 AND #$8000
    // Overlapping static entry reached from 0xC045F4.
    case 0xC045F6: {
        Instruction step(cpu, 0x80, 0x0000F0u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:68 BEQ @UNKNOWN2
    case 0xC045F7: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:69 LDX #.LOWORD(-8)
    case 0xC045F9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000F8u : 0x00FFF8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:69 LDX #.LOWORD(-8)
    // Overlapping static entry reached from 0xC045F9.
    case 0xC045FB: {
        Instruction step(cpu, 0xFF, 0xA20380u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:70 BRA @UNKNOWN3
    case 0xC045FC: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:72 LDX #8
    case 0xC045FE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:72 LDX #8
    // Overlapping static entry reached from 0xC045FB.
    case 0xC045FF: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:72 LDX #8
    // Overlapping static entry reached from 0xC045FE.
    case 0xC04600: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:74 TXA
    case 0xC04601: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:75 CLC
    case 0xC04602: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:76 ADC @LOCAL03
    case 0xC04603: {
        Instruction step(cpu, 0x65, 0x000014u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:77 STA @LOCAL03
    case 0xC04605: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:79 LDA @LOCAL04
    case 0xC04607: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:80 BEQ @UNKNOWN0
    case 0xC04609: {
        Instruction step(cpu, 0xF0, 0x0000A0u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:81 LDA @LOCAL04
    case 0xC0460B: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:82 AND #$8000
    case 0xC0460D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:82 AND #$8000
    // Overlapping static entry reached from 0xC0460D.
    case 0xC0460F: {
        Instruction step(cpu, 0x80, 0x0000F0u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:83 BEQ @UNKNOWN5
    case 0xC04610: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:84 LDX #.LOWORD(-8)
    case 0xC04612: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000F8u : 0x00FFF8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:84 LDX #.LOWORD(-8)
    // Overlapping static entry reached from 0xC04612.
    case 0xC04614: {
        Instruction step(cpu, 0xFF, 0xA20380u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:85 BRA @UNKNOWN6
    case 0xC04615: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:87 LDX #8
    case 0xC04617: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:87 LDX #8
    // Overlapping static entry reached from 0xC04614.
    case 0xC04618: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:87 LDX #8
    // Overlapping static entry reached from 0xC04617.
    case 0xC04619: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:89 STX @VIRTUAL02
    case 0xC0461A: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:90 LDA @VIRTUAL04
    case 0xC0461C: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:91 CLC
    case 0xC0461E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:92 ADC @VIRTUAL02
    case 0xC0461F: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:93 STA @VIRTUAL04
    case 0xC04621: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:94 JMP @UNKNOWN0
    case 0xC04623: {
        Instruction step(cpu, 0x4C, 0x0045ABu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:96 LDA @LOCAL02
    case 0xC04626: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:97 STA PLAYER_INTANGIBILITY_FRAMES
    case 0xC04628: {
        Instruction step(cpu, 0x8D, 0x0060DEu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:98 LDA INTERACTING_NPC_ID
    case 0xC0462B: {
        Instruction step(cpu, 0xAD, 0x0060E8u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:99 BEQ @UNKNOWN8
    case 0xC0462E: {
        Instruction step(cpu, 0xF0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:100 LDA INTERACTING_NPC_ID
    case 0xC04630: {
        Instruction step(cpu, 0xAD, 0x0060E8u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:101 CMP #.LOWORD(-1)
    case 0xC04633: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:101 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC04633.
    case 0xC04635: {
        Instruction step(cpu, 0xFF, 0xA506D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:102 BNE @UNKNOWN9
    case 0xC04636: {
        Instruction step(cpu, 0xD0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:104 LDA @LOCAL06
    case 0xC04638: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:104 LDA @LOCAL06
    // Overlapping static entry reached from 0xC04635.
    case 0xC04639: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:105 JSL UNKNOWN_C065C2
    case 0xC0463A: {
        Instruction step(cpu, 0x22, 0xC067F0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C042EF.asm:107 LDA INTERACTING_NPC_ID
    case 0xC0463E: {
        Instruction step(cpu, 0xAD, 0x0060E8u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C042EF.asm:108 END_C_FUNCTION
    case 0xC04641: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C0/C042EF.asm:108 END_C_FUNCTION
    case 0xC04642: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
