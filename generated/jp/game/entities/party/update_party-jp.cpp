// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/update_party-jp.asm
bool resume_overworld_update_party_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/update_party-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC036C7: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/update_party-jp.asm:15 END_STACK_VARS
    case 0xC036C9: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/update_party-jp.asm:15 END_STACK_VARS
    case 0xC036CA: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/update_party-jp.asm:15 END_STACK_VARS
    case 0xC036CB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000B6u : 0x00FFB6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/update_party-jp.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC036CB.
    case 0xC036CD: {
        Instruction step(cpu, 0xFF, 0x54AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/update_party-jp.asm:15 END_STACK_VARS
    case 0xC036CE: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:16 LDA GAME_STATE+game_state::party_count
    case 0xC036CF: {
        Instruction step(cpu, 0xAD, 0x009B54u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:16 LDA GAME_STATE+game_state::party_count
    // Overlapping static entry reached from 0xC036CD.
    case 0xC036D1: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:17 AND #$00FF
    case 0xC036D2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC036D2.
    case 0xC036D4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:18 STA @PARTY_COUNT
    case 0xC036D5: {
        Instruction step(cpu, 0x85, 0x000048u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:19 LDA #0
    case 0xC036D7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:19 LDA #0
    // Overlapping static entry reached from 0xC036D7.
    case 0xC036D9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:20 STA @LOCAL08
    case 0xC036DA: {
        Instruction step(cpu, 0x85, 0x000046u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:21 BRA @UNKNOWN1
    case 0xC036DC: {
        Instruction step(cpu, 0x80, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:23 ASL
    case 0xC036DE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:24 PHA
    case 0xC036DF: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:25 LDA @LOCAL08
    case 0xC036E0: {
        Instruction step(cpu, 0xA5, 0x000046u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:26 CLC
    case 0xC036E2: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:27 ADC #.LOWORD(GAME_STATE)
    case 0xC036E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:27 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC036E3.
    case 0xC036E5: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:28 TAX
    case 0xC036E6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:29 LDA a:game_state::player_controlled_party_members,X
    case 0xC036E7: {
        Instruction step(cpu, 0xBD, 0x000099u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:30 AND #$00FF
    case 0xC036EA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC036EA.
    case 0xC036EC: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:31 LDY #.SIZEOF(char_struct)
    case 0xC036ED: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:31 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC036ED.
    case 0xC036EF: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:32 JSL MULT168
    case 0xC036F0: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:33 TAX
    case 0xC036F4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:34 LDA PARTY_CHARACTERS+char_struct::position_index,X
    case 0xC036F5: {
        Instruction step(cpu, 0xBD, 0x009CBBu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:35 PLX
    case 0xC036F8: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:36 STA @LOCAL00,X
    case 0xC036F9: {
        Instruction step(cpu, 0x95, 0x00000Eu, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:37 LDA @LOCAL08
    case 0xC036FB: {
        Instruction step(cpu, 0xA5, 0x000046u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:38 INC
    case 0xC036FD: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:39 STA @LOCAL08
    case 0xC036FE: {
        Instruction step(cpu, 0x85, 0x000046u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:41 CMP @PARTY_COUNT
    case 0xC03700: {
        Instruction step(cpu, 0xC5, 0x000048u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:42 BCC @UNKNOWN0
    case 0xC03702: {
        Instruction step(cpu, 0x90, 0x0000DAu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:43 LDX #0
    case 0xC03704: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:43 LDX #0
    // Overlapping static entry reached from 0xC03704.
    case 0xC03706: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:44 STX @LOCAL07
    case 0xC03707: {
        Instruction step(cpu, 0x86, 0x000044u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:45 JMP @UNKNOWN6
    case 0xC03709: {
        Instruction step(cpu, 0x4C, 0x003785u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:47 TXA
    case 0xC0370C: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:48 CLC
    case 0xC0370D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:49 ADC #.LOWORD(GAME_STATE)
    case 0xC0370E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:49 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC0370E.
    case 0xC03710: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:50 TAX
    case 0xC03711: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:51 LDA a:game_state::unknown96,X
    case 0xC03712: {
        Instruction step(cpu, 0xBD, 0x000093u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:52 AND #$00FF
    case 0xC03715: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:52 AND #$00FF
    // Overlapping static entry reached from 0xC03715.
    case 0xC03717: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:53 STA @LOCAL06
    case 0xC03718: {
        Instruction step(cpu, 0x85, 0x000042u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:54 CMP #5
    case 0xC0371A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:54 CMP #5
    // Overlapping static entry reached from 0xC0371A.
    case 0xC0371C: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:55 BCC @UNKNOWN3
    case 0xC0371D: {
        Instruction step(cpu, 0x90, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:56 CLC
    case 0xC0371F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:57 ADC #$0300
    case 0xC03720: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x000300u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:57 ADC #$0300
    // Overlapping static entry reached from 0xC03720.
    case 0xC03722: {
        Instruction step(cpu, 0x03, 0x000085u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:58 STA @LOCAL06
    case 0xC03723: {
        Instruction step(cpu, 0x85, 0x000042u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:58 STA @LOCAL06
    // Overlapping static entry reached from 0xC03722.
    case 0xC03724: {
        Instruction step(cpu, 0x42, 0x000080u, 2u, AddressMode::SignatureByte);
        step.reserved_no_operation();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:59 BRA @UNKNOWN5
    case 0xC03725: {
        Instruction step(cpu, 0x80, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:59 BRA @UNKNOWN5
    // Overlapping static entry reached from 0xC03724.
    case 0xC03726: {
        Instruction step(cpu, 0x32, 0x0000A6u, 2u, AddressMode::DirectPageIndirect);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:61 LDX @LOCAL07
    case 0xC03727: {
        Instruction step(cpu, 0xA6, 0x000044u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:61 LDX @LOCAL07
    // Overlapping static entry reached from 0xC03726.
    case 0xC03728: {
        Instruction step(cpu, 0x44, 0x000A8Au, 3u, AddressMode::BlockMove);
        step.move_byte_backward();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:62 TXA
    case 0xC03729: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:63 ASL
    case 0xC0372A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:64 CLC
    case 0xC0372B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:65 ADC #.LOWORD(GAME_STATE)
    case 0xC0372C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:65 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC0372C.
    case 0xC0372E: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:66 TAX
    case 0xC0372F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:67 LDA a:game_state::unknownA2,X
    case 0xC03730: {
        Instruction step(cpu, 0xBD, 0x00009Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:68 ASL
    case 0xC03733: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:69 TAX
    case 0xC03734: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:70 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC03735: {
        Instruction step(cpu, 0xBD, 0x000E90u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:71 LDY #.SIZEOF(char_struct)
    case 0xC03738: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:71 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC03738.
    case 0xC0373A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:72 JSL MULT168
    case 0xC0373B: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:73 TAX
    case 0xC0373F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:74 LDA PARTY_CHARACTERS+char_struct::afflictions,X
    case 0xC03740: {
        Instruction step(cpu, 0xBD, 0x009C8Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:75 AND #$00FF
    case 0xC03743: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC03743.
    case 0xC03745: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:76 TAY
    case 0xC03746: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:77 CPY #1
    case 0xC03747: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:77 CPY #1
    // Overlapping static entry reached from 0xC03747.
    case 0xC03749: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:78 BEQ @UNKNOWN4
    case 0xC0374A: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:79 CPY #2
    case 0xC0374C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:79 CPY #2
    // Overlapping static entry reached from 0xC0374C.
    case 0xC0374E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:80 BNE @UNKNOWN5
    case 0xC0374F: {
        Instruction step(cpu, 0xD0, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:82 LDA @LOCAL06
    case 0xC03751: {
        Instruction step(cpu, 0xA5, 0x000042u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:83 CLC
    case 0xC03753: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:84 ADC #$0100
    case 0xC03754: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:84 ADC #$0100
    // Overlapping static entry reached from 0xC03754.
    case 0xC03756: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:85 STA @LOCAL06
    case 0xC03757: {
        Instruction step(cpu, 0x85, 0x000042u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:85 STA @LOCAL06
    // Overlapping static entry reached from 0xC03756.
    case 0xC03758: {
        Instruction step(cpu, 0x42, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.reserved_no_operation();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:87 LDX @LOCAL07
    case 0xC03759: {
        Instruction step(cpu, 0xA6, 0x000044u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:87 LDX @LOCAL07
    // Overlapping static entry reached from 0xC03758.
    case 0xC0375A: {
        Instruction step(cpu, 0x44, 0x000A8Au, 3u, AddressMode::BlockMove);
        step.move_byte_backward();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:88 TXA
    case 0xC0375B: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:89 ASL
    case 0xC0375C: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:90 TAY
    case 0xC0375D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:91 LDA @LOCAL06
    case 0xC0375E: {
        Instruction step(cpu, 0xA5, 0x000042u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:92 TYX
    case 0xC03760: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:93 STA @LOCAL01,X
    case 0xC03761: {
        Instruction step(cpu, 0x95, 0x00001Au, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:94 TYA
    case 0xC03763: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:95 CLC
    case 0xC03764: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:96 ADC #.LOWORD(GAME_STATE)
    case 0xC03765: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:96 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03765.
    case 0xC03767: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:97 TAX
    case 0xC03768: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:98 LDA a:game_state::unknownA2,X
    case 0xC03769: {
        Instruction step(cpu, 0xBD, 0x00009Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:99 TAX
    case 0xC0376C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:100 STX @LOCAL02,Y
    case 0xC0376D: {
        Instruction step(cpu, 0x96, 0x000026u, 2u, AddressMode::DirectPageIndexedY);
        step.store_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:101 LDX @LOCAL07
    case 0xC0376F: {
        Instruction step(cpu, 0xA6, 0x000044u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:102 TXA
    case 0xC03771: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:103 CLC
    case 0xC03772: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:104 ADC #.LOWORD(GAME_STATE)
    case 0xC03773: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:104 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03773.
    case 0xC03775: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:105 TAX
    case 0xC03776: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:106 LDA a:game_state::player_controlled_party_members,X
    case 0xC03777: {
        Instruction step(cpu, 0xBD, 0x000099u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:107 AND #$00FF
    case 0xC0377A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:107 AND #$00FF
    // Overlapping static entry reached from 0xC0377A.
    case 0xC0377C: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:108 TAX
    case 0xC0377D: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:109 STX @LOCAL03,Y
    case 0xC0377E: {
        Instruction step(cpu, 0x96, 0x000032u, 2u, AddressMode::DirectPageIndexedY);
        step.store_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:110 LDX @LOCAL07
    case 0xC03780: {
        Instruction step(cpu, 0xA6, 0x000044u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:111 INX
    case 0xC03782: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:112 STX @LOCAL07
    case 0xC03783: {
        Instruction step(cpu, 0x86, 0x000044u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:114 CPX @PARTY_COUNT
    case 0xC03785: {
        Instruction step(cpu, 0xE4, 0x000048u, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/update_party-jp.asm:115 BCCL @UNKNOWN2
    case 0xC03787: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/update_party-jp.asm:115 BCCL @UNKNOWN2
    case 0xC03789: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/update_party-jp.asm:115 BCCL @UNKNOWN2
    case 0xC0378B: {
        Instruction step(cpu, 0x4C, 0x00370Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/overworld/update_party-jp.asm:116 STZ_BADOPT @VIRTUAL04
    case 0xC0378E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/overworld/update_party-jp.asm:116 STZ_BADOPT @VIRTUAL04
    // Overlapping static entry reached from 0xC0378E.
    case 0xC03790: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1282 STA dest
    // Macro caller: src/overworld/update_party-jp.asm:116 STZ_BADOPT @VIRTUAL04
    case 0xC03791: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:117 JMP @UNKNOWN12
    case 0xC03793: {
        Instruction step(cpu, 0x4C, 0x003812u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:119 LDX #0
    case 0xC03796: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:119 LDX #0
    // Overlapping static entry reached from 0xC03796.
    case 0xC03798: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:120 STX @LOCAL08
    case 0xC03799: {
        Instruction step(cpu, 0x86, 0x000046u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:121 BRA @UNKNOWN11
    case 0xC0379B: {
        Instruction step(cpu, 0x80, 0x000069u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:123 TXA
    case 0xC0379D: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:124 ASL
    case 0xC0379E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:125 TAY
    case 0xC0379F: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:126 TYX
    case 0xC037A0: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:127 LDA @LOCAL01,X
    case 0xC037A1: {
        Instruction step(cpu, 0xB5, 0x00001Au, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:128 STA @LOCAL05
    case 0xC037A3: {
        Instruction step(cpu, 0x85, 0x000040u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:129 STY @VIRTUAL02
    case 0xC037A5: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:130 INC @VIRTUAL02
    case 0xC037A7: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:131 INC @VIRTUAL02
    case 0xC037A9: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:132 LDX @VIRTUAL02
    case 0xC037AB: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:133 LDA @LOCAL01,X
    case 0xC037AD: {
        Instruction step(cpu, 0xB5, 0x00001Au, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:134 STA @LOCAL04
    case 0xC037AF: {
        Instruction step(cpu, 0x85, 0x00003Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:135 LDA @LOCAL05
    case 0xC037B1: {
        Instruction step(cpu, 0xA5, 0x000040u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:136 CMP @LOCAL04
    case 0xC037B3: {
        Instruction step(cpu, 0xC5, 0x00003Eu, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/update_party-jp.asm:137 BLTEQ @UNKNOWN10
    case 0xC037B5: {
        Instruction step(cpu, 0x90, 0x00004Au, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/update_party-jp.asm:137 BLTEQ @UNKNOWN10
    case 0xC037B7: {
        Instruction step(cpu, 0xF0, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:138 LDX @LOCAL08
    case 0xC037B9: {
        Instruction step(cpu, 0xA6, 0x000046u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:139 TXA
    case 0xC037BB: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:140 ASL
    case 0xC037BC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:141 TAX
    case 0xC037BD: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:142 LDA @LOCAL04
    case 0xC037BE: {
        Instruction step(cpu, 0xA5, 0x00003Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:143 STA @LOCAL01,X
    case 0xC037C0: {
        Instruction step(cpu, 0x95, 0x00001Au, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:144 LDX @LOCAL08
    case 0xC037C2: {
        Instruction step(cpu, 0xA6, 0x000046u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:145 TXA
    case 0xC037C4: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:146 ASL
    case 0xC037C5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:147 TAX
    case 0xC037C6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:148 INX
    case 0xC037C7: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:149 INX
    case 0xC037C8: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:150 LDA @LOCAL05
    case 0xC037C9: {
        Instruction step(cpu, 0xA5, 0x000040u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:151 STA @LOCAL01,X
    case 0xC037CB: {
        Instruction step(cpu, 0x95, 0x00001Au, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:152 TYX
    case 0xC037CD: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:153 LDA @LOCAL02,X
    case 0xC037CE: {
        Instruction step(cpu, 0xB5, 0x000026u, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:154 STA @LOCAL05
    case 0xC037D0: {
        Instruction step(cpu, 0x85, 0x000040u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:155 LDX @LOCAL08
    case 0xC037D2: {
        Instruction step(cpu, 0xA6, 0x000046u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:156 TXA
    case 0xC037D4: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:157 ASL
    case 0xC037D5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:158 PHA
    case 0xC037D6: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:159 LDX @VIRTUAL02
    case 0xC037D7: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:160 LDA @LOCAL02,X
    case 0xC037D9: {
        Instruction step(cpu, 0xB5, 0x000026u, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:161 PLX
    case 0xC037DB: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:162 STA @LOCAL02,X
    case 0xC037DC: {
        Instruction step(cpu, 0x95, 0x000026u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:163 LDX @LOCAL08
    case 0xC037DE: {
        Instruction step(cpu, 0xA6, 0x000046u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:164 TXA
    case 0xC037E0: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:165 ASL
    case 0xC037E1: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:166 TAX
    case 0xC037E2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:167 INX
    case 0xC037E3: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:168 INX
    case 0xC037E4: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:169 LDA @LOCAL05
    case 0xC037E5: {
        Instruction step(cpu, 0xA5, 0x000040u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:170 STA @LOCAL02,X
    case 0xC037E7: {
        Instruction step(cpu, 0x95, 0x000026u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:171 LDX @LOCAL03,Y
    case 0xC037E9: {
        Instruction step(cpu, 0xB6, 0x000032u, 2u, AddressMode::DirectPageIndexedY);
        step.load_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:172 TXY
    case 0xC037EB: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:173 LDX @LOCAL08
    case 0xC037EC: {
        Instruction step(cpu, 0xA6, 0x000046u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:174 TXA
    case 0xC037EE: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:175 ASL
    case 0xC037EF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:176 PHA
    case 0xC037F0: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:177 LDX @VIRTUAL02
    case 0xC037F1: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:178 LDA @LOCAL03,X
    case 0xC037F3: {
        Instruction step(cpu, 0xB5, 0x000032u, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:179 PLX
    case 0xC037F5: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:180 STA @LOCAL03,X
    case 0xC037F6: {
        Instruction step(cpu, 0x95, 0x000032u, 2u, AddressMode::DirectPageIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:181 LDX @LOCAL08
    case 0xC037F8: {
        Instruction step(cpu, 0xA6, 0x000046u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:182 TXA
    case 0xC037FA: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:183 ASL
    case 0xC037FB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:184 TAX
    case 0xC037FC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:185 INX
    case 0xC037FD: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:186 INX
    case 0xC037FE: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:187 STY @LOCAL03,X
    case 0xC037FF: {
        Instruction step(cpu, 0x94, 0x000032u, 2u, AddressMode::DirectPageIndexedX);
        step.store_y();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:189 LDX @LOCAL08
    case 0xC03801: {
        Instruction step(cpu, 0xA6, 0x000046u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:190 INX
    case 0xC03803: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:191 STX @LOCAL08
    case 0xC03804: {
        Instruction step(cpu, 0x86, 0x000046u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:193 LDA @PARTY_COUNT
    case 0xC03806: {
        Instruction step(cpu, 0xA5, 0x000048u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:194 DEC
    case 0xC03808: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:195 STA @VIRTUAL02
    case 0xC03809: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:196 TXA
    case 0xC0380B: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:197 CMP @VIRTUAL02
    case 0xC0380C: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:198 BCC @UNKNOWN9
    case 0xC0380E: {
        Instruction step(cpu, 0x90, 0x00008Du, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:199 INC @VIRTUAL04
    case 0xC03810: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:201 LDA @PARTY_COUNT
    case 0xC03812: {
        Instruction step(cpu, 0xA5, 0x000048u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:202 DEC
    case 0xC03814: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:203 STA @VIRTUAL02
    case 0xC03815: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:204 LDA @VIRTUAL04
    case 0xC03817: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:205 CMP @VIRTUAL02
    case 0xC03819: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/update_party-jp.asm:206 BCCL @UNKNOWN8
    case 0xC0381B: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/update_party-jp.asm:206 BCCL @UNKNOWN8
    case 0xC0381D: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/update_party-jp.asm:206 BCCL @UNKNOWN8
    case 0xC0381F: {
        Instruction step(cpu, 0x4C, 0x003796u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:207 LDA #0
    case 0xC03822: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:207 LDA #0
    // Overlapping static entry reached from 0xC03822.
    case 0xC03824: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:208 STA @LOCAL06
    case 0xC03825: {
        Instruction step(cpu, 0x85, 0x000042u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:209 BRA @UNKNOWN15
    case 0xC03827: {
        Instruction step(cpu, 0x80, 0x00005Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:211 CLC
    case 0xC03829: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:212 ADC #.LOWORD(GAME_STATE)
    case 0xC0382A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:212 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC0382A.
    case 0xC0382C: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:213 TAY
    case 0xC0382D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:214 LDA @LOCAL06
    case 0xC0382E: {
        Instruction step(cpu, 0xA5, 0x000042u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:215 ASL
    case 0xC03830: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:216 STA @VIRTUAL02
    case 0xC03831: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:217 LDX @VIRTUAL02
    case 0xC03833: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:218 SEP #PROC_FLAGS::ACCUM8
    case 0xC03835: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:219 LDA @LOCAL01,X
    case 0xC03837: {
        Instruction step(cpu, 0xB5, 0x00001Au, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:220 STA a:game_state::unknown96,Y
    case 0xC03839: {
        Instruction step(cpu, 0x99, 0x000093u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:221 REP #PROC_FLAGS::ACCUM8
    case 0xC0383C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:222 LDA @VIRTUAL02
    case 0xC0383E: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:223 CLC
    case 0xC03840: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:224 ADC #.LOWORD(GAME_STATE)
    case 0xC03841: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:224 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03841.
    case 0xC03843: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:225 CLC
    case 0xC03844: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:226 ADC #game_state::unknownA2
    case 0xC03845: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00009Fu : 0x00009Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:226 ADC #game_state::unknownA2
    // Overlapping static entry reached from 0xC03845.
    case 0xC03847: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:227 TAX
    case 0xC03848: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:228 STX @LOCAL08
    case 0xC03849: {
        Instruction step(cpu, 0x86, 0x000046u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:229 LDX @VIRTUAL02
    case 0xC0384B: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:230 LDA @LOCAL02,X
    case 0xC0384D: {
        Instruction step(cpu, 0xB5, 0x000026u, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:231 LDX @LOCAL08
    case 0xC0384F: {
        Instruction step(cpu, 0xA6, 0x000046u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:232 STA __BSS_START__,X
    case 0xC03851: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:233 LDX @VIRTUAL02
    case 0xC03854: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:234 SEP #PROC_FLAGS::ACCUM8
    case 0xC03856: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:235 LDA @LOCAL03,X
    case 0xC03858: {
        Instruction step(cpu, 0xB5, 0x000032u, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:236 STA a:game_state::player_controlled_party_members,Y
    case 0xC0385A: {
        Instruction step(cpu, 0x99, 0x000099u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:237 REP #PROC_FLAGS::ACCUM8
    case 0xC0385D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:238 LDA @LOCAL06
    case 0xC0385F: {
        Instruction step(cpu, 0xA5, 0x000042u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:239 ASL
    case 0xC03861: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:240 TAX
    case 0xC03862: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:241 LDA @LOCAL03,X
    case 0xC03863: {
        Instruction step(cpu, 0xB5, 0x000032u, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:242 LDY #.SIZEOF(char_struct)
    case 0xC03865: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:242 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC03865.
    case 0xC03867: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:243 JSL MULT168
    case 0xC03868: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:244 PHA
    case 0xC0386C: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:245 LDX @VIRTUAL02
    case 0xC0386D: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:246 LDA @LOCAL00,X
    case 0xC0386F: {
        Instruction step(cpu, 0xB5, 0x00000Eu, 2u, AddressMode::DirectPageIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:247 PLX
    case 0xC03871: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:248 STA PARTY_CHARACTERS+char_struct::position_index,X
    case 0xC03872: {
        Instruction step(cpu, 0x9D, 0x009CBBu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:249 LDX @LOCAL08
    case 0xC03875: {
        Instruction step(cpu, 0xA6, 0x000046u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:250 LDA __BSS_START__,X
    case 0xC03877: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:251 ASL
    case 0xC0387A: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:252 TAX
    case 0xC0387B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:253 LDA @VIRTUAL02
    case 0xC0387C: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:254 STA ENTITY_SCRIPT_VAR5_TABLE,X
    case 0xC0387E: {
        Instruction step(cpu, 0x9D, 0x000F80u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:255 LDA @LOCAL06
    case 0xC03881: {
        Instruction step(cpu, 0xA5, 0x000042u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:256 INC
    case 0xC03883: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:257 STA @LOCAL06
    case 0xC03884: {
        Instruction step(cpu, 0x85, 0x000042u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:259 CMP @PARTY_COUNT
    case 0xC03886: {
        Instruction step(cpu, 0xC5, 0x000048u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:260 BCC @UNKNOWN14
    case 0xC03888: {
        Instruction step(cpu, 0x90, 0x00009Fu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:261 LDA GAME_STATE +game_state::unknownA2
    case 0xC0388A: {
        Instruction step(cpu, 0xAD, 0x009B48u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:262 STA GAME_STATE+game_state::current_party_members
    case 0xC0388D: {
        Instruction step(cpu, 0x8D, 0x009B3Au, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:263 JSL UNKNOWN_C032EC
    case 0xC03890: {
        Instruction step(cpu, 0x22, 0xC034C7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:264 JSL UNKNOWN_C02C3E
    case 0xC03894: {
        Instruction step(cpu, 0x22, 0xC02E13u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/update_party-jp.asm:265 JSL UNKNOWN_C47F87
    case 0xC03898: {
        Instruction step(cpu, 0x22, 0xC45C1Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/update_party-jp.asm:266 END_C_FUNCTION
    case 0xC0389C: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/update_party-jp.asm:266 END_C_FUNCTION
    case 0xC0389D: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
