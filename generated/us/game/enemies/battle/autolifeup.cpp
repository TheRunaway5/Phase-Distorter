// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/autolifeup.asm
bool resume_battle_autolifeup(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/autolifeup.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4A15D: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/autolifeup.asm:10 END_STACK_VARS
    case 0xC4A15F: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/autolifeup.asm:10 END_STACK_VARS
    case 0xC4A160: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/autolifeup.asm:10 END_STACK_VARS
    case 0xC4A161: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/autolifeup.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC4A161.
    case 0xC4A163: {
        Instruction step(cpu, 0xFF, 0x0FA95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/autolifeup.asm:10 END_STACK_VARS
    case 0xC4A164: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/autolifeup.asm:11 LDA #9999
    case 0xC4A165: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Fu : 0x00270Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:11 LDA #9999
    // Overlapping static entry reached from 0xC4A165.
    case 0xC4A167: {
        Instruction step(cpu, 0x27, 0x000085u, 2u, AddressMode::DirectPageIndirectLong);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:12 STA @LOCAL03
    case 0xC4A168: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:12 STA @LOCAL03
    // Overlapping static entry reached from 0xC4A167.
    case 0xC4A169: {
        Instruction step(cpu, 0x14, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/battle/autolifeup.asm:13 LDA #$0000
    case 0xC4A16A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:13 LDA #$0000
    // Overlapping static entry reached from 0xC4A169.
    case 0xC4A16B: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/autolifeup.asm:13 LDA #$0000
    // Overlapping static entry reached from 0xC4A16A.
    case 0xC4A16C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/autolifeup.asm:14 STA @VIRTUAL04
    case 0xC4A16D: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:15 STA @VIRTUAL02
    case 0xC4A16F: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:16 STA @LOCAL02
    case 0xC4A171: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:17 BRA @UNKNOWN3
    case 0xC4A173: {
        Instruction step(cpu, 0x80, 0x00005Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/autolifeup.asm:26 LDX @VIRTUAL02
    case 0xC4A175: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/autolifeup.asm:27 LDA GAME_STATE + game_state::party_members,X
    case 0xC4A177: {
        Instruction step(cpu, 0xBD, 0x00986Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:29 AND #$00FF
    case 0xC4A17A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC4A17A.
    case 0xC4A17C: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/autolifeup.asm:30 TAY
    case 0xC4A17D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/autolifeup.asm:31 STY @LOCAL01
    case 0xC4A17E: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/autolifeup.asm:32 CPY #PARTY_MEMBER::NESS
    case 0xC4A180: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/autolifeup.asm:32 CPY #PARTY_MEMBER::NESS
    // Overlapping static entry reached from 0xC4A180.
    case 0xC4A182: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/autolifeup.asm:33 BCC @UNKNOWN2
    case 0xC4A183: {
        Instruction step(cpu, 0x90, 0x000040u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/autolifeup.asm:34 CPY #PARTY_MEMBER::POO
    case 0xC4A185: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/autolifeup.asm:34 CPY #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC4A185.
    case 0xC4A187: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/autolifeup.asm:35 BGT @UNKNOWN2
    case 0xC4A188: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/autolifeup.asm:35 BGT @UNKNOWN2
    case 0xC4A18A: {
        Instruction step(cpu, 0xB0, 0x000039u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/autolifeup.asm:36 TYA
    case 0xC4A18C: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:37 DEC
    case 0xC4A18D: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/autolifeup.asm:38 LDY #.SIZEOF(char_struct)
    case 0xC4A18E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/autolifeup.asm:38 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC4A18E.
    case 0xC4A190: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/autolifeup.asm:39 JSL MULT168
    case 0xC4A191: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/autolifeup.asm:40 TAX
    case 0xC4A195: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/autolifeup.asm:41 LDA PARTY_CHARACTERS+char_struct::unknown94,X
    case 0xC4A196: {
        Instruction step(cpu, 0xBD, 0x009A2Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:42 AND #$00FF
    case 0xC4A199: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:42 AND #$00FF
    // Overlapping static entry reached from 0xC4A199.
    case 0xC4A19B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/autolifeup.asm:43 BNE @UNKNOWN2
    case 0xC4A19C: {
        Instruction step(cpu, 0xD0, 0x000027u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/autolifeup.asm:44 LDA PARTY_CHARACTERS+char_struct::afflictions,X
    case 0xC4A19E: {
        Instruction step(cpu, 0xBD, 0x0099DCu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:45 AND #$00FF
    case 0xC4A1A1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC4A1A1.
    case 0xC4A1A3: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/autolifeup.asm:46 CMP #STATUS_0::UNCONSCIOUS
    case 0xC4A1A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:46 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC4A1A4.
    case 0xC4A1A6: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/autolifeup.asm:47 BEQ @UNKNOWN2
    case 0xC4A1A7: {
        Instruction step(cpu, 0xF0, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/autolifeup.asm:48 LDA PARTY_CHARACTERS+char_struct::current_hp_target,X
    case 0xC4A1A9: {
        Instruction step(cpu, 0xBD, 0x009A15u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:49 STA @LOCAL00
    case 0xC4A1AC: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:50 LDA PARTY_CHARACTERS+char_struct::max_hp,X
    case 0xC4A1AE: {
        Instruction step(cpu, 0xBD, 0x0099D8u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:51 LSR
    case 0xC4A1B1: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/autolifeup.asm:52 LSR
    case 0xC4A1B2: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/autolifeup.asm:53 STA @VIRTUAL02
    case 0xC4A1B3: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:54 LDA @LOCAL00
    case 0xC4A1B5: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:55 CMP @VIRTUAL02
    case 0xC4A1B7: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:56 BCS @UNKNOWN2
    case 0xC4A1B9: {
        Instruction step(cpu, 0xB0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/autolifeup.asm:57 CMP @LOCAL03
    case 0xC4A1BB: {
        Instruction step(cpu, 0xC5, 0x000014u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:58 BCS @UNKNOWN2
    case 0xC4A1BD: {
        Instruction step(cpu, 0xB0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/autolifeup.asm:59 STA @LOCAL03
    case 0xC4A1BF: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:60 LDY @LOCAL01
    case 0xC4A1C1: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/autolifeup.asm:61 STY @VIRTUAL04
    case 0xC4A1C3: {
        Instruction step(cpu, 0x84, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/autolifeup.asm:63 LDA @LOCAL02
    case 0xC4A1C5: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:64 STA @VIRTUAL02
    case 0xC4A1C7: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:65 INC @VIRTUAL02
    case 0xC4A1C9: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/autolifeup.asm:66 LDA @VIRTUAL02
    case 0xC4A1CB: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:67 STA @LOCAL02
    case 0xC4A1CD: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:69 LDA @VIRTUAL02
    case 0xC4A1CF: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:70 CMP #TOTAL_PARTY_COUNT
    case 0xC4A1D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:70 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC4A1D1.
    case 0xC4A1D3: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/autolifeup.asm:71 BCC @UNKNOWN0
    case 0xC4A1D4: {
        Instruction step(cpu, 0x90, 0x00009Fu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/autolifeup.asm:72 LDA @VIRTUAL04
    case 0xC4A1D6: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:73 BEQ @UNKNOWN4
    case 0xC4A1D8: {
        Instruction step(cpu, 0xF0, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/autolifeup.asm:74 LDA @VIRTUAL04
    case 0xC4A1DA: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:75 DEC
    case 0xC4A1DC: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/autolifeup.asm:76 LDY #.SIZEOF(char_struct)
    case 0xC4A1DD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/autolifeup.asm:76 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC4A1DD.
    case 0xC4A1DF: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/autolifeup.asm:77 JSL MULT168
    case 0xC4A1E0: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/autolifeup.asm:78 TAX
    case 0xC4A1E4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/autolifeup.asm:79 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A1E5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/autolifeup.asm:80 LDA #$01
    case 0xC4A1E7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:81 STA PARTY_CHARACTERS+char_struct::unknown94,X
    case 0xC4A1E9: {
        Instruction step(cpu, 0x9D, 0x009A2Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/autolifeup.asm:81 STA PARTY_CHARACTERS+char_struct::unknown94,X
    // Overlapping static entry reached from 0xC4A1E7.
    case 0xC4A1EA: {
        Instruction step(cpu, 0x2C, 0x00C29Au, 3u, AddressMode::Absolute);
        step.test_bits();
        return step.finish();
    }
    // src/battle/autolifeup.asm:83 REP #PROC_FLAGS::ACCUM8
    case 0xC4A1EC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/autolifeup.asm:83 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4A1EA.
    case 0xC4A1ED: {
        Instruction step(cpu, 0x20, 0x0004A5u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/autolifeup.asm:84 LDA @VIRTUAL04
    case 0xC4A1EE: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/autolifeup.asm:85 END_C_FUNCTION
    case 0xC4A1F0: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/autolifeup.asm:85 END_C_FUNCTION
    case 0xC4A1F1: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
