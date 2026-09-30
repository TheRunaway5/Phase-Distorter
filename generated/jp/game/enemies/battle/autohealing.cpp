// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/autohealing.asm
bool resume_battle_autohealing(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/autohealing.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC47532: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/autohealing.asm:13 END_STACK_VARS
    case 0xC47534: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/autohealing.asm:13 END_STACK_VARS
    case 0xC47535: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/autohealing.asm:13 END_STACK_VARS
    case 0xC47536: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/autohealing.asm:13 END_STACK_VARS
    case 0xC47537: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/autohealing.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC47537.
    case 0xC47539: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/autohealing.asm:13 END_STACK_VARS
    case 0xC4753A: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/autohealing.asm:13 END_STACK_VARS
    case 0xC4753B: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/autohealing.asm:14 STX @LOCAL04
    case 0xC4753C: {
        Instruction step(cpu, 0x86, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/autohealing.asm:14 STX @LOCAL04
    // Overlapping static entry reached from 0xC47539.
    case 0xC4753D: {
        Instruction step(cpu, 0x16, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/battle/autohealing.asm:15 STA @LOCAL03
    case 0xC4753E: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/autohealing.asm:15 STA @LOCAL03
    // Overlapping static entry reached from 0xC4753D.
    case 0xC4753F: {
        Instruction step(cpu, 0x14, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/battle/autohealing.asm:16 LDA #9999
    case 0xC47540: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Fu : 0x00270Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autohealing.asm:16 LDA #9999
    // Overlapping static entry reached from 0xC4753F.
    case 0xC47541: {
        Instruction step(cpu, 0x0F, 0x128527u, 4u, AddressMode::Long);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/autohealing.asm:16 LDA #9999
    // Overlapping static entry reached from 0xC47540.
    case 0xC47542: {
        Instruction step(cpu, 0x27, 0x000085u, 2u, AddressMode::DirectPageIndirectLong);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/autohealing.asm:17 STA @LOCAL02
    case 0xC47543: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/autohealing.asm:17 STA @LOCAL02
    // Overlapping static entry reached from 0xC47542.
    case 0xC47544: {
        Instruction step(cpu, 0x12, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/autohealing.asm:18 LDA #$0000
    case 0xC47545: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autohealing.asm:18 LDA #$0000
    // Overlapping static entry reached from 0xC47544.
    case 0xC47546: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/autohealing.asm:18 LDA #$0000
    // Overlapping static entry reached from 0xC47545.
    case 0xC47547: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/autohealing.asm:19 STA @VIRTUAL04
    case 0xC47548: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/autohealing.asm:20 STA @VIRTUAL02
    case 0xC4754A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/autohealing.asm:21 BRA @UNKNOWN3
    case 0xC4754C: {
        Instruction step(cpu, 0x80, 0x000054u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/autohealing.asm:24 LDA @VIRTUAL02
    case 0xC4754E: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autohealing.asm:25 CLC
    case 0xC47550: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/autohealing.asm:26 ADC #.LOWORD(GAME_STATE)
    case 0xC47551: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/autohealing.asm:26 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC47551.
    case 0xC47553: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/battle/autohealing.asm:27 TAX
    case 0xC47554: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/autohealing.asm:28 LDA a:game_state::party_members,X
    case 0xC47555: {
        Instruction step(cpu, 0xBD, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autohealing.asm:33 AND #$00FF
    case 0xC47558: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/autohealing.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC47558.
    case 0xC4755A: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/autohealing.asm:34 TAY
    case 0xC4755B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/autohealing.asm:35 STY @LOCAL01
    case 0xC4755C: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/autohealing.asm:36 CPY #PARTY_MEMBER::NESS
    case 0xC4755E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/autohealing.asm:36 CPY #PARTY_MEMBER::NESS
    // Overlapping static entry reached from 0xC4755E.
    case 0xC47560: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/autohealing.asm:37 BCC @UNKNOWN2
    case 0xC47561: {
        Instruction step(cpu, 0x90, 0x00003Du, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/autohealing.asm:38 CPY #PARTY_MEMBER::POO
    case 0xC47563: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/autohealing.asm:38 CPY #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC47563.
    case 0xC47565: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/autohealing.asm:39 BGT @UNKNOWN2
    case 0xC47566: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/autohealing.asm:39 BGT @UNKNOWN2
    case 0xC47568: {
        Instruction step(cpu, 0xB0, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/autohealing.asm:40 TYA
    case 0xC4756A: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/autohealing.asm:41 DEC
    case 0xC4756B: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/autohealing.asm:42 LDY #.SIZEOF(char_struct)
    case 0xC4756C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/autohealing.asm:42 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC4756C.
    case 0xC4756E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/autohealing.asm:43 JSL MULT168
    case 0xC4756F: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/autohealing.asm:44 TAX
    case 0xC47573: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/autohealing.asm:45 STX @LOCAL00
    case 0xC47574: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/autohealing.asm:46 LDA PARTY_CHARACTERS+char_struct::unknown94,X
    case 0xC47576: {
        Instruction step(cpu, 0xBD, 0x009CDCu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autohealing.asm:47 AND #$00FF
    case 0xC47579: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/autohealing.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC47579.
    case 0xC4757B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/autohealing.asm:48 BNE @UNKNOWN2
    case 0xC4757C: {
        Instruction step(cpu, 0xD0, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/autohealing.asm:49 TXA
    case 0xC4757E: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/autohealing.asm:50 CLC
    case 0xC4757F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/autohealing.asm:51 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    case 0xC47580: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00008Cu : 0x009C8Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/autohealing.asm:51 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    // Overlapping static entry reached from 0xC47580.
    case 0xC47582: {
        Instruction step(cpu, 0x9C, 0x006518u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/autohealing.asm:52 CLC
    case 0xC47583: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/autohealing.asm:53 ADC @LOCAL03
    case 0xC47584: {
        Instruction step(cpu, 0x65, 0x000014u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/autohealing.asm:53 ADC @LOCAL03
    // Overlapping static entry reached from 0xC47582.
    case 0xC47585: {
        Instruction step(cpu, 0x14, 0x0000AAu, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/battle/autohealing.asm:54 TAX
    case 0xC47586: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/autohealing.asm:55 LDA __BSS_START__,X
    case 0xC47587: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autohealing.asm:56 AND #$00FF
    case 0xC4758A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/autohealing.asm:56 AND #$00FF
    // Overlapping static entry reached from 0xC4758A.
    case 0xC4758C: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/autohealing.asm:57 CMP @LOCAL04
    case 0xC4758D: {
        Instruction step(cpu, 0xC5, 0x000016u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/autohealing.asm:58 BNE @UNKNOWN2
    case 0xC4758F: {
        Instruction step(cpu, 0xD0, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/autohealing.asm:59 LDX @LOCAL00
    case 0xC47591: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/autohealing.asm:60 LDA PARTY_CHARACTERS+char_struct::current_hp_target,X
    case 0xC47593: {
        Instruction step(cpu, 0xBD, 0x009CC5u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autohealing.asm:61 CMP @LOCAL02
    case 0xC47596: {
        Instruction step(cpu, 0xC5, 0x000012u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/autohealing.asm:62 BCS @UNKNOWN2
    case 0xC47598: {
        Instruction step(cpu, 0xB0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/autohealing.asm:63 STA @LOCAL02
    case 0xC4759A: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/autohealing.asm:64 LDY @LOCAL01
    case 0xC4759C: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/autohealing.asm:65 STY @VIRTUAL04
    case 0xC4759E: {
        Instruction step(cpu, 0x84, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/autohealing.asm:67 INC @VIRTUAL02
    case 0xC475A0: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/autohealing.asm:69 LDA @VIRTUAL02
    case 0xC475A2: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autohealing.asm:70 CMP #TOTAL_PARTY_COUNT
    case 0xC475A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/autohealing.asm:70 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC475A4.
    case 0xC475A6: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/autohealing.asm:71 BCC @UNKNOWN0
    case 0xC475A7: {
        Instruction step(cpu, 0x90, 0x0000A5u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/autohealing.asm:72 LDA @VIRTUAL04
    case 0xC475A9: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autohealing.asm:73 BEQ @UNKNOWN4
    case 0xC475AB: {
        Instruction step(cpu, 0xF0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/autohealing.asm:74 LDA @VIRTUAL04
    case 0xC475AD: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autohealing.asm:75 DEC
    case 0xC475AF: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/autohealing.asm:76 LDY #.SIZEOF(char_struct)
    case 0xC475B0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/autohealing.asm:76 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC475B0.
    case 0xC475B2: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/autohealing.asm:77 JSL MULT168
    case 0xC475B3: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/autohealing.asm:78 TAX
    case 0xC475B7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/autohealing.asm:79 SEP #PROC_FLAGS::ACCUM8
    case 0xC475B8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/autohealing.asm:80 LDA #$01
    case 0xC475BA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autohealing.asm:81 STA PARTY_CHARACTERS+char_struct::unknown94,X
    case 0xC475BC: {
        Instruction step(cpu, 0x9D, 0x009CDCu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/autohealing.asm:81 STA PARTY_CHARACTERS+char_struct::unknown94,X
    // Overlapping static entry reached from 0xC475BA.
    case 0xC475BD: {
        Instruction step(cpu, 0xDC, 0x00C29Cu, 3u, AddressMode::AbsoluteIndirectLong);
        step.jump_long();
        return step.finish();
    }
    // src/battle/autohealing.asm:83 REP #PROC_FLAGS::ACCUM8
    case 0xC475BF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/autohealing.asm:84 LDA @VIRTUAL04
    case 0xC475C1: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/autohealing.asm:85 END_C_FUNCTION
    case 0xC475C3: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/autohealing.asm:85 END_C_FUNCTION
    case 0xC475C4: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
