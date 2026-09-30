// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/autolifeup.asm
bool resume_battle_autolifeup(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/autolifeup.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC475C5: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/autolifeup.asm:10 END_STACK_VARS
    case 0xC475C7: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/autolifeup.asm:10 END_STACK_VARS
    case 0xC475C8: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/autolifeup.asm:10 END_STACK_VARS
    case 0xC475C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/autolifeup.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC475C9.
    case 0xC475CB: {
        Instruction step(cpu, 0xFF, 0x0FA95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/autolifeup.asm:10 END_STACK_VARS
    case 0xC475CC: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/autolifeup.asm:11 LDA #9999
    case 0xC475CD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Fu : 0x00270Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:11 LDA #9999
    // Overlapping static entry reached from 0xC475CD.
    case 0xC475CF: {
        Instruction step(cpu, 0x27, 0x000085u, 2u, AddressMode::DirectPageIndirectLong);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:12 STA @LOCAL03
    case 0xC475D0: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:12 STA @LOCAL03
    // Overlapping static entry reached from 0xC475CF.
    case 0xC475D1: {
        Instruction step(cpu, 0x14, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/battle/autolifeup.asm:13 LDA #$0000
    case 0xC475D2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:13 LDA #$0000
    // Overlapping static entry reached from 0xC475D1.
    case 0xC475D3: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/autolifeup.asm:13 LDA #$0000
    // Overlapping static entry reached from 0xC475D2.
    case 0xC475D4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/autolifeup.asm:14 STA @VIRTUAL04
    case 0xC475D5: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:15 STA @VIRTUAL02
    case 0xC475D7: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:16 STA @LOCAL02
    case 0xC475D9: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:17 BRA @UNKNOWN3
    case 0xC475DB: {
        Instruction step(cpu, 0x80, 0x00005Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/autolifeup.asm:20 LDA @VIRTUAL02
    case 0xC475DD: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:21 CLC
    case 0xC475DF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/autolifeup.asm:22 ADC #.LOWORD(GAME_STATE)
    case 0xC475E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/autolifeup.asm:22 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC475E0.
    case 0xC475E2: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/battle/autolifeup.asm:23 TAX
    case 0xC475E3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/autolifeup.asm:24 LDA a:game_state::party_members,X
    case 0xC475E4: {
        Instruction step(cpu, 0xBD, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:29 AND #$00FF
    case 0xC475E7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC475E7.
    case 0xC475E9: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/autolifeup.asm:30 TAY
    case 0xC475EA: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/autolifeup.asm:31 STY @LOCAL01
    case 0xC475EB: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/autolifeup.asm:32 CPY #PARTY_MEMBER::NESS
    case 0xC475ED: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/autolifeup.asm:32 CPY #PARTY_MEMBER::NESS
    // Overlapping static entry reached from 0xC475ED.
    case 0xC475EF: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/autolifeup.asm:33 BCC @UNKNOWN2
    case 0xC475F0: {
        Instruction step(cpu, 0x90, 0x000040u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/autolifeup.asm:34 CPY #PARTY_MEMBER::POO
    case 0xC475F2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/autolifeup.asm:34 CPY #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC475F2.
    case 0xC475F4: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/autolifeup.asm:35 BGT @UNKNOWN2
    case 0xC475F5: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/autolifeup.asm:35 BGT @UNKNOWN2
    case 0xC475F7: {
        Instruction step(cpu, 0xB0, 0x000039u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/autolifeup.asm:36 TYA
    case 0xC475F9: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:37 DEC
    case 0xC475FA: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/autolifeup.asm:38 LDY #.SIZEOF(char_struct)
    case 0xC475FB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/autolifeup.asm:38 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC475FB.
    case 0xC475FD: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/autolifeup.asm:39 JSL MULT168
    case 0xC475FE: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/autolifeup.asm:40 TAX
    case 0xC47602: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/autolifeup.asm:41 LDA PARTY_CHARACTERS+char_struct::unknown94,X
    case 0xC47603: {
        Instruction step(cpu, 0xBD, 0x009CDCu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:42 AND #$00FF
    case 0xC47606: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC47606.
    case 0xC47608: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/autolifeup.asm:43 BNE @UNKNOWN2
    case 0xC47609: {
        Instruction step(cpu, 0xD0, 0x000027u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/autolifeup.asm:44 LDA PARTY_CHARACTERS+char_struct::afflictions,X
    case 0xC4760B: {
        Instruction step(cpu, 0xBD, 0x009C8Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:45 AND #$00FF
    case 0xC4760E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC4760E.
    case 0xC47610: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/autolifeup.asm:46 CMP #STATUS_0::UNCONSCIOUS
    case 0xC47611: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:46 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC47611.
    case 0xC47613: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/autolifeup.asm:47 BEQ @UNKNOWN2
    case 0xC47614: {
        Instruction step(cpu, 0xF0, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/autolifeup.asm:48 LDA PARTY_CHARACTERS+char_struct::current_hp_target,X
    case 0xC47616: {
        Instruction step(cpu, 0xBD, 0x009CC5u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:49 STA @LOCAL00
    case 0xC47619: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:50 LDA PARTY_CHARACTERS+char_struct::max_hp,X
    case 0xC4761B: {
        Instruction step(cpu, 0xBD, 0x009C88u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:51 LSR
    case 0xC4761E: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/autolifeup.asm:52 LSR
    case 0xC4761F: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/autolifeup.asm:53 STA @VIRTUAL02
    case 0xC47620: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:54 LDA @LOCAL00
    case 0xC47622: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:55 CMP @VIRTUAL02
    case 0xC47624: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:56 BCS @UNKNOWN2
    case 0xC47626: {
        Instruction step(cpu, 0xB0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/autolifeup.asm:57 CMP @LOCAL03
    case 0xC47628: {
        Instruction step(cpu, 0xC5, 0x000014u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:58 BCS @UNKNOWN2
    case 0xC4762A: {
        Instruction step(cpu, 0xB0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/autolifeup.asm:59 STA @LOCAL03
    case 0xC4762C: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:60 LDY @LOCAL01
    case 0xC4762E: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/autolifeup.asm:61 STY @VIRTUAL04
    case 0xC47630: {
        Instruction step(cpu, 0x84, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/autolifeup.asm:63 LDA @LOCAL02
    case 0xC47632: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:64 STA @VIRTUAL02
    case 0xC47634: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:65 INC @VIRTUAL02
    case 0xC47636: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/autolifeup.asm:66 LDA @VIRTUAL02
    case 0xC47638: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:67 STA @LOCAL02
    case 0xC4763A: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:69 LDA @VIRTUAL02
    case 0xC4763C: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:70 CMP #TOTAL_PARTY_COUNT
    case 0xC4763E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:70 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC4763E.
    case 0xC47640: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/autolifeup.asm:71 BCC @UNKNOWN0
    case 0xC47641: {
        Instruction step(cpu, 0x90, 0x00009Au, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/autolifeup.asm:72 LDA @VIRTUAL04
    case 0xC47643: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:73 BEQ @UNKNOWN4
    case 0xC47645: {
        Instruction step(cpu, 0xF0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/autolifeup.asm:74 LDA @VIRTUAL04
    case 0xC47647: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:75 DEC
    case 0xC47649: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/autolifeup.asm:76 LDY #.SIZEOF(char_struct)
    case 0xC4764A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/autolifeup.asm:76 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC4764A.
    case 0xC4764C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/autolifeup.asm:77 JSL MULT168
    case 0xC4764D: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/autolifeup.asm:78 TAX
    case 0xC47651: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/autolifeup.asm:79 SEP #PROC_FLAGS::ACCUM8
    case 0xC47652: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/autolifeup.asm:80 LDA #$01
    case 0xC47654: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:81 STA PARTY_CHARACTERS+char_struct::unknown94,X
    case 0xC47656: {
        Instruction step(cpu, 0x9D, 0x009CDCu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:81 STA PARTY_CHARACTERS+char_struct::unknown94,X
    // Overlapping static entry reached from 0xC47654.
    case 0xC47657: {
        Instruction step(cpu, 0xDC, 0x00C29Cu, 3u, AddressMode::AbsoluteIndirectLong);
        step.jump_long();
        return step.finish();
    }
    // src/battle/autolifeup.asm:83 REP #PROC_FLAGS::ACCUM8
    case 0xC47659: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/autolifeup.asm:84 LDA @VIRTUAL04
    case 0xC4765B: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/autolifeup.asm:85 END_C_FUNCTION
    case 0xC4765D: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/autolifeup.asm:85 END_C_FUNCTION
    case 0xC4765E: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
