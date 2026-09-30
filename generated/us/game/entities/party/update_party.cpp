// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/update_party.asm
bool resume_overworld_update_party(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/update_party.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC034D6: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/update_party.asm:17 END_STACK_VARS
    case 0xC034D8: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/update_party.asm:17 END_STACK_VARS
    case 0xC034D9: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/update_party.asm:17 END_STACK_VARS
    case 0xC034DA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000B2u : 0x00FFB2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/update_party.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC034DA.
    case 0xC034DC: {
        Instruction step(cpu, 0xFF, 0xA3AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/update_party.asm:17 END_STACK_VARS
    case 0xC034DD: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/update_party.asm:18 LDA GAME_STATE+game_state::party_count
    case 0xC034DE: {
        Instruction step(cpu, 0xAD, 0x0098A3u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:18 LDA GAME_STATE+game_state::party_count
    // Overlapping static entry reached from 0xC034DC.
    case 0xC034E0: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:19 AND #$00FF
    case 0xC034E1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC034E1.
    case 0xC034E3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party.asm:20 STA @PARTY_COUNT
    case 0xC034E4: {
        Instruction step(cpu, 0x85, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:21 LDA #0
    case 0xC034E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:21 LDA #0
    // Overlapping static entry reached from 0xC034E6.
    case 0xC034E8: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party.asm:22 STA @LOCAL0A
    case 0xC034E9: {
        Instruction step(cpu, 0x85, 0x00004Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:23 BRA @UNKNOWN1
    case 0xC034EB: {
        Instruction step(cpu, 0x80, 0x00001Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/update_party.asm:25 ASL
    case 0xC034ED: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/update_party.asm:26 PHA
    case 0xC034EE: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:27 LDA @LOCAL0A
    case 0xC034EF: {
        Instruction step(cpu, 0xA5, 0x00004Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:28 TAX
    case 0xC034F1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/update_party.asm:29 LDA GAME_STATE+game_state::player_controlled_party_members,X
    case 0xC034F2: {
        Instruction step(cpu, 0xBD, 0x009891u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:30 AND #$00FF
    case 0xC034F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC034F5.
    case 0xC034F7: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party.asm:31 LDY #.SIZEOF(char_struct)
    case 0xC034F8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/update_party.asm:31 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC034F8.
    case 0xC034FA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party.asm:32 JSL MULT168
    case 0xC034FB: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/update_party.asm:33 TAX
    case 0xC034FF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/update_party.asm:34 LDA PARTY_CHARACTERS+char_struct::position_index,X
    case 0xC03500: {
        Instruction step(cpu, 0xBD, 0x009A0Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:35 PLX
    case 0xC03503: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/overworld/update_party.asm:36 STA @LOCAL00,X
    case 0xC03504: {
        Instruction step(cpu, 0x95, 0x00000Eu, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:37 LDA @LOCAL0A
    case 0xC03506: {
        Instruction step(cpu, 0xA5, 0x00004Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:38 INC
    case 0xC03508: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/update_party.asm:39 STA @LOCAL0A
    case 0xC03509: {
        Instruction step(cpu, 0x85, 0x00004Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:41 CMP @PARTY_COUNT
    case 0xC0350B: {
        Instruction step(cpu, 0xC5, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:42 BCC @UNKNOWN0
    case 0xC0350D: {
        Instruction step(cpu, 0x90, 0x0000DEu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/update_party.asm:43 LDY #0
    case 0xC0350F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/update_party.asm:43 LDY #0
    // Overlapping static entry reached from 0xC0350F.
    case 0xC03511: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party.asm:44 STY @LOCAL09
    case 0xC03512: {
        Instruction step(cpu, 0x84, 0x000048u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/update_party.asm:45 BRA @UNKNOWN6
    case 0xC03514: {
        Instruction step(cpu, 0x80, 0x00005Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/update_party.asm:47 LDA GAME_STATE + game_state::unknown96,Y
    case 0xC03516: {
        Instruction step(cpu, 0xB9, 0x00988Bu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:48 AND #$00FF
    case 0xC03519: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC03519.
    case 0xC0351B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party.asm:49 STA @LOCAL08
    case 0xC0351C: {
        Instruction step(cpu, 0x85, 0x000046u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:50 CMP #5
    case 0xC0351E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:50 CMP #5
    // Overlapping static entry reached from 0xC0351E.
    case 0xC03520: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party.asm:51 BCC @UNKNOWN3
    case 0xC03521: {
        Instruction step(cpu, 0x90, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/update_party.asm:52 CLC
    case 0xC03523: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:53 ADC #$0300
    case 0xC03524: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x000300u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:53 ADC #$0300
    // Overlapping static entry reached from 0xC03524.
    case 0xC03526: {
        Instruction step(cpu, 0x03, 0x000085u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:54 STA @LOCAL08
    case 0xC03527: {
        Instruction step(cpu, 0x85, 0x000046u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:54 STA @LOCAL08
    // Overlapping static entry reached from 0xC03526.
    case 0xC03528: {
        Instruction step(cpu, 0x46, 0x000080u, 2u, AddressMode::DirectPage);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/update_party.asm:55 BRA @UNKNOWN5
    case 0xC03529: {
        Instruction step(cpu, 0x80, 0x00002Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/update_party.asm:55 BRA @UNKNOWN5
    // Overlapping static entry reached from 0xC03528.
    case 0xC0352A: {
        Instruction step(cpu, 0x2C, 0x000A98u, 3u, AddressMode::Absolute);
        step.test_bits();
        return step.finish();
    }
    // src/overworld/update_party.asm:57 TYA
    case 0xC0352B: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:58 ASL
    case 0xC0352C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/update_party.asm:59 TAX
    case 0xC0352D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/update_party.asm:60 LDA GAME_STATE + game_state::unknownA2,X
    case 0xC0352E: {
        Instruction step(cpu, 0xBD, 0x009897u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:61 ASL
    case 0xC03531: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/update_party.asm:62 TAX
    case 0xC03532: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/update_party.asm:63 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC03533: {
        Instruction step(cpu, 0xBD, 0x000E9Au, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:64 LDY #.SIZEOF(char_struct)
    case 0xC03536: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/update_party.asm:64 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC03536.
    case 0xC03538: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party.asm:65 JSL MULT168
    case 0xC03539: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/update_party.asm:66 TAX
    case 0xC0353D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/update_party.asm:67 LDA PARTY_CHARACTERS+char_struct::afflictions,X
    case 0xC0353E: {
        Instruction step(cpu, 0xBD, 0x0099DCu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:68 AND #$00FF
    case 0xC03541: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:68 AND #$00FF
    // Overlapping static entry reached from 0xC03541.
    case 0xC03543: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party.asm:69 TAX
    case 0xC03544: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/update_party.asm:70 CPX #1
    case 0xC03545: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/update_party.asm:70 CPX #1
    // Overlapping static entry reached from 0xC03545.
    case 0xC03547: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party.asm:71 BEQ @UNKNOWN4
    case 0xC03548: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/update_party.asm:72 CPX #2
    case 0xC0354A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/overworld/update_party.asm:72 CPX #2
    // Overlapping static entry reached from 0xC0354A.
    case 0xC0354C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party.asm:73 BNE @UNKNOWN5
    case 0xC0354D: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/update_party.asm:75 LDA @LOCAL08
    case 0xC0354F: {
        Instruction step(cpu, 0xA5, 0x000046u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:76 CLC
    case 0xC03551: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:77 ADC #$0100
    case 0xC03552: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:77 ADC #$0100
    // Overlapping static entry reached from 0xC03552.
    case 0xC03554: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:78 STA @LOCAL08
    case 0xC03555: {
        Instruction step(cpu, 0x85, 0x000046u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:78 STA @LOCAL08
    // Overlapping static entry reached from 0xC03554.
    case 0xC03556: {
        Instruction step(cpu, 0x46, 0x0000A4u, 2u, AddressMode::DirectPage);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/update_party.asm:80 LDY @LOCAL09
    case 0xC03557: {
        Instruction step(cpu, 0xA4, 0x000048u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/update_party.asm:80 LDY @LOCAL09
    // Overlapping static entry reached from 0xC03556.
    case 0xC03558: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:81 TYA
    case 0xC03559: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:82 ASL
    case 0xC0355A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/update_party.asm:83 TAX
    case 0xC0355B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/update_party.asm:84 LDA @LOCAL08
    case 0xC0355C: {
        Instruction step(cpu, 0xA5, 0x000046u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:85 STA @LOCAL01,X
    case 0xC0355E: {
        Instruction step(cpu, 0x95, 0x00001Au, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:86 LDA GAME_STATE + game_state::unknownA2,X
    case 0xC03560: {
        Instruction step(cpu, 0xBD, 0x009897u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:87 STA @LOCAL02,X
    case 0xC03563: {
        Instruction step(cpu, 0x95, 0x000026u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:88 LDA GAME_STATE + game_state::player_controlled_party_members,Y
    case 0xC03565: {
        Instruction step(cpu, 0xB9, 0x009891u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:89 AND #$00FF
    case 0xC03568: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:89 AND #$00FF
    // Overlapping static entry reached from 0xC03568.
    case 0xC0356A: {
        Instruction step(cpu, 0x00, 0x000095u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party.asm:90 STA @LOCAL03,X
    case 0xC0356B: {
        Instruction step(cpu, 0x95, 0x000032u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:91 INY
    case 0xC0356D: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/update_party.asm:92 STY @LOCAL09
    case 0xC0356E: {
        Instruction step(cpu, 0x84, 0x000048u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/update_party.asm:94 CPY @PARTY_COUNT
    case 0xC03570: {
        Instruction step(cpu, 0xC4, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/update_party.asm:95 BCC @UNKNOWN2
    case 0xC03572: {
        Instruction step(cpu, 0x90, 0x0000A2u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/update_party.asm:96 STZ @LOCAL07
    case 0xC03574: {
        Instruction step(cpu, 0x64, 0x000044u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/update_party.asm:97 JMP @UNKNOWN12
    case 0xC03576: {
        Instruction step(cpu, 0x4C, 0x00360Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/update_party.asm:99 STZ @LOCAL06
    case 0xC03579: {
        Instruction step(cpu, 0x64, 0x000042u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/update_party.asm:100 JMP @UNKNOWN10
    case 0xC0357B: {
        Instruction step(cpu, 0x4C, 0x0035FFu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/update_party.asm:102 LDA @LOCAL06
    case 0xC0357E: {
        Instruction step(cpu, 0xA5, 0x000042u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:103 ASL
    case 0xC03580: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/update_party.asm:104 STA @VIRTUAL02
    case 0xC03581: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:105 TDC
    case 0xC03583: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:106 CLC
    case 0xC03584: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:107 ADC #@LOCAL01
    case 0xC03585: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Au : 0x00001Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:107 ADC #@LOCAL01
    // Overlapping static entry reached from 0xC03585.
    case 0xC03587: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party.asm:108 CLC
    case 0xC03588: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:109 ADC @VIRTUAL02
    case 0xC03589: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:110 TAY
    case 0xC0358B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/update_party.asm:111 LDA __BSS_START__,Y
    case 0xC0358C: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:112 STA @LOCAL08
    case 0xC0358F: {
        Instruction step(cpu, 0x85, 0x000046u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:113 LDA @VIRTUAL02
    case 0xC03591: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:114 STA @VIRTUAL04
    case 0xC03593: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:115 INC @VIRTUAL04
    case 0xC03595: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/update_party.asm:116 INC @VIRTUAL04
    case 0xC03597: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/update_party.asm:117 TDC
    case 0xC03599: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:118 CLC
    case 0xC0359A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:119 ADC #@LOCAL01
    case 0xC0359B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00001Au : 0x00001Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:119 ADC #@LOCAL01
    // Overlapping static entry reached from 0xC0359B.
    case 0xC0359D: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party.asm:120 CLC
    case 0xC0359E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:121 ADC @VIRTUAL04
    case 0xC0359F: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:122 TAX
    case 0xC035A1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/update_party.asm:123 LDA __BSS_START__,X
    case 0xC035A2: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:124 STA @LOCAL0A
    case 0xC035A5: {
        Instruction step(cpu, 0x85, 0x00004Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:125 LDA @LOCAL08
    case 0xC035A7: {
        Instruction step(cpu, 0xA5, 0x000046u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:126 CMP @LOCAL0A
    case 0xC035A9: {
        Instruction step(cpu, 0xC5, 0x00004Au, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/update_party.asm:127 BLTEQ @UNKNOWN9
    case 0xC035AB: {
        Instruction step(cpu, 0x90, 0x000050u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/update_party.asm:127 BLTEQ @UNKNOWN9
    case 0xC035AD: {
        Instruction step(cpu, 0xF0, 0x00004Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/update_party.asm:128 LDA @LOCAL0A
    case 0xC035AF: {
        Instruction step(cpu, 0xA5, 0x00004Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:129 STA __BSS_START__,Y
    case 0xC035B1: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:130 LDA @LOCAL08
    case 0xC035B4: {
        Instruction step(cpu, 0xA5, 0x000046u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:131 STA __BSS_START__,X
    case 0xC035B6: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:132 TDC
    case 0xC035B9: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:133 CLC
    case 0xC035BA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:134 ADC #@LOCAL02
    case 0xC035BB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000026u : 0x000026u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:134 ADC #@LOCAL02
    // Overlapping static entry reached from 0xC035BB.
    case 0xC035BD: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party.asm:135 CLC
    case 0xC035BE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:136 ADC @VIRTUAL02
    case 0xC035BF: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:137 TAY
    case 0xC035C1: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/update_party.asm:138 LDA __BSS_START__,Y
    case 0xC035C2: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:139 STA @LOCAL05
    case 0xC035C5: {
        Instruction step(cpu, 0x85, 0x000040u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:140 TDC
    case 0xC035C7: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:141 CLC
    case 0xC035C8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:142 ADC #@LOCAL02
    case 0xC035C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000026u : 0x000026u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:142 ADC #@LOCAL02
    // Overlapping static entry reached from 0xC035C9.
    case 0xC035CB: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party.asm:143 CLC
    case 0xC035CC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:144 ADC @VIRTUAL04
    case 0xC035CD: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:145 TAX
    case 0xC035CF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/update_party.asm:146 LDA __BSS_START__,X
    case 0xC035D0: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:147 STA __BSS_START__,Y
    case 0xC035D3: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:148 LDA @LOCAL05
    case 0xC035D6: {
        Instruction step(cpu, 0xA5, 0x000040u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:149 STA __BSS_START__,X
    case 0xC035D8: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:150 TDC
    case 0xC035DB: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:151 CLC
    case 0xC035DC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:152 ADC #@LOCAL03
    case 0xC035DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000032u : 0x000032u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:152 ADC #@LOCAL03
    // Overlapping static entry reached from 0xC035DD.
    case 0xC035DF: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party.asm:153 CLC
    case 0xC035E0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:154 ADC @VIRTUAL02
    case 0xC035E1: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:155 TAY
    case 0xC035E3: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/update_party.asm:156 LDA __BSS_START__,Y
    case 0xC035E4: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:157 STA @LOCAL0A
    case 0xC035E7: {
        Instruction step(cpu, 0x85, 0x00004Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:158 TDC
    case 0xC035E9: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:159 CLC
    case 0xC035EA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:160 ADC #@LOCAL03
    case 0xC035EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000032u : 0x000032u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:160 ADC #@LOCAL03
    // Overlapping static entry reached from 0xC035EB.
    case 0xC035ED: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party.asm:161 CLC
    case 0xC035EE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:162 ADC @VIRTUAL04
    case 0xC035EF: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:163 TAX
    case 0xC035F1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/update_party.asm:164 LDA __BSS_START__,X
    case 0xC035F2: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:165 STA __BSS_START__,Y
    case 0xC035F5: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:166 LDA @LOCAL0A
    case 0xC035F8: {
        Instruction step(cpu, 0xA5, 0x00004Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:167 STA __BSS_START__,X
    case 0xC035FA: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:169 INC @LOCAL06
    case 0xC035FD: {
        Instruction step(cpu, 0xE6, 0x000042u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/update_party.asm:171 LDA @PARTY_COUNT
    case 0xC035FF: {
        Instruction step(cpu, 0xA5, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:172 DEC
    case 0xC03601: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/update_party.asm:173 CMP @LOCAL06
    case 0xC03602: {
        Instruction step(cpu, 0xC5, 0x000042u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/overworld/update_party.asm:174 BGTL @UNKNOWN8
    case 0xC03604: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:792 BCC :+
    // Macro caller: src/overworld/update_party.asm:174 BGTL @UNKNOWN8
    case 0xC03606: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:793 JMP dest
    // Macro caller: src/overworld/update_party.asm:174 BGTL @UNKNOWN8
    case 0xC03608: {
        Instruction step(cpu, 0x4C, 0x00357Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/update_party.asm:175 INC @LOCAL07
    case 0xC0360B: {
        Instruction step(cpu, 0xE6, 0x000044u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/update_party.asm:177 LDA @PARTY_COUNT
    case 0xC0360D: {
        Instruction step(cpu, 0xA5, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:178 DEC
    case 0xC0360F: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/update_party.asm:179 CMP @LOCAL07
    case 0xC03610: {
        Instruction step(cpu, 0xC5, 0x000044u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/overworld/update_party.asm:180 BGTL @UNKNOWN7
    case 0xC03612: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:792 BCC :+
    // Macro caller: src/overworld/update_party.asm:180 BGTL @UNKNOWN7
    case 0xC03614: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:793 JMP dest
    // Macro caller: src/overworld/update_party.asm:180 BGTL @UNKNOWN7
    case 0xC03616: {
        Instruction step(cpu, 0x4C, 0x003579u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/update_party.asm:181 LDA #0
    case 0xC03619: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:181 LDA #0
    // Overlapping static entry reached from 0xC03619.
    case 0xC0361B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party.asm:182 STA @LOCAL08
    case 0xC0361C: {
        Instruction step(cpu, 0x85, 0x000046u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:183 BRA @UNKNOWN15
    case 0xC0361E: {
        Instruction step(cpu, 0x80, 0x000063u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/update_party.asm:185 CLC
    case 0xC03620: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:186 ADC #.LOWORD(GAME_STATE)
    case 0xC03621: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F5u : 0x0097F5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:186 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03621.
    case 0xC03623: {
        Instruction step(cpu, 0x97, 0x0000A8u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:187 TAY
    case 0xC03624: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/update_party.asm:188 LDA @LOCAL08
    case 0xC03625: {
        Instruction step(cpu, 0xA5, 0x000046u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:189 ASL
    case 0xC03627: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/update_party.asm:190 STA @VIRTUAL04
    case 0xC03628: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:191 LDX @VIRTUAL04
    case 0xC0362A: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/update_party.asm:192 SEP #PROC_FLAGS::ACCUM8
    case 0xC0362C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/update_party.asm:193 LDA @LOCAL01,X
    case 0xC0362E: {
        Instruction step(cpu, 0xB5, 0x00001Au, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:194 STA __BSS_START__ + game_state::unknown96,Y
    case 0xC03630: {
        Instruction step(cpu, 0x99, 0x000096u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:195 REP #PROC_FLAGS::ACCUM8
    case 0xC03633: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/update_party.asm:196 LDA @VIRTUAL04
    case 0xC03635: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:197 CLC
    case 0xC03637: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:198 ADC #.LOWORD(GAME_STATE) + game_state::unknownA2
    case 0xC03638: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000097u : 0x009897u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:198 ADC #.LOWORD(GAME_STATE) + game_state::unknownA2
    // Overlapping static entry reached from 0xC03638.
    case 0xC0363A: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:199 TAX
    case 0xC0363B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/update_party.asm:200 STX @LOCAL04
    case 0xC0363C: {
        Instruction step(cpu, 0x86, 0x00003Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/update_party.asm:201 LDX @VIRTUAL04
    case 0xC0363E: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/update_party.asm:202 LDA @LOCAL02,X
    case 0xC03640: {
        Instruction step(cpu, 0xB5, 0x000026u, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:203 LDX @LOCAL04
    case 0xC03642: {
        Instruction step(cpu, 0xA6, 0x00003Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/update_party.asm:204 STA __BSS_START__,X
    case 0xC03644: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:205 TDC
    case 0xC03647: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:206 CLC
    case 0xC03648: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:207 ADC #@LOCAL03
    case 0xC03649: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000032u : 0x000032u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:207 ADC #@LOCAL03
    // Overlapping static entry reached from 0xC03649.
    case 0xC0364B: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party.asm:208 CLC
    case 0xC0364C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:209 ADC @VIRTUAL04
    case 0xC0364D: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/update_party.asm:210 STA @VIRTUAL02
    case 0xC0364F: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:211 LDX @VIRTUAL02
    case 0xC03651: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/update_party.asm:212 SEP #PROC_FLAGS::ACCUM8
    case 0xC03653: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/update_party.asm:213 LDA __BSS_START__,X
    case 0xC03655: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:214 STA __BSS_START__ + game_state::player_controlled_party_members,Y
    case 0xC03658: {
        Instruction step(cpu, 0x99, 0x00009Cu, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:215 LDX @VIRTUAL02
    case 0xC0365B: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/update_party.asm:216 REP #PROC_FLAGS::ACCUM8
    case 0xC0365D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/update_party.asm:217 LDA __BSS_START__,X
    case 0xC0365F: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:218 LDY #.SIZEOF(char_struct)
    case 0xC03662: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/update_party.asm:218 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC03662.
    case 0xC03664: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party.asm:219 JSL MULT168
    case 0xC03665: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/update_party.asm:220 PHA
    case 0xC03669: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:221 LDX @VIRTUAL04
    case 0xC0366A: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/update_party.asm:222 LDA @LOCAL00,X
    case 0xC0366C: {
        Instruction step(cpu, 0xB5, 0x00000Eu, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:223 PLX
    case 0xC0366E: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/overworld/update_party.asm:224 STA PARTY_CHARACTERS+char_struct::position_index,X
    case 0xC0366F: {
        Instruction step(cpu, 0x9D, 0x009A0Bu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:225 LDX @LOCAL04
    case 0xC03672: {
        Instruction step(cpu, 0xA6, 0x00003Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/update_party.asm:226 LDA __BSS_START__,X
    case 0xC03674: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:227 ASL
    case 0xC03677: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/update_party.asm:228 TAX
    case 0xC03678: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/update_party.asm:229 LDA @VIRTUAL04
    case 0xC03679: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:230 STA ENTITY_SCRIPT_VAR5_TABLE,X
    case 0xC0367B: {
        Instruction step(cpu, 0x9D, 0x000F8Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:231 LDA @LOCAL08
    case 0xC0367E: {
        Instruction step(cpu, 0xA5, 0x000046u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:232 INC
    case 0xC03680: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/update_party.asm:233 STA @LOCAL08
    case 0xC03681: {
        Instruction step(cpu, 0x85, 0x000046u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:235 CMP @PARTY_COUNT
    case 0xC03683: {
        Instruction step(cpu, 0xC5, 0x00004Cu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:236 BCC @UNKNOWN14
    case 0xC03685: {
        Instruction step(cpu, 0x90, 0x000099u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/update_party.asm:237 LDA GAME_STATE +game_state::unknownA2
    case 0xC03687: {
        Instruction step(cpu, 0xAD, 0x009897u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:238 STA GAME_STATE+game_state::current_party_members
    case 0xC0368A: {
        Instruction step(cpu, 0x8D, 0x009889u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party.asm:239 JSL UNKNOWN_C032EC
    case 0xC0368D: {
        Instruction step(cpu, 0x22, 0xC032ECu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/update_party.asm:240 JSL UNKNOWN_C02C3E
    case 0xC03691: {
        Instruction step(cpu, 0x22, 0xC02C3Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/update_party.asm:241 JSL UNKNOWN_C47F87
    case 0xC03695: {
        Instruction step(cpu, 0x22, 0xC47F87u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/update_party.asm:242 END_C_FUNCTION
    case 0xC03699: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/update_party.asm:242 END_C_FUNCTION
    case 0xC0369A: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
