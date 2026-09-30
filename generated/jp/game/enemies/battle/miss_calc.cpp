// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/miss_calc.asm
bool resume_battle_miss_calc(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/miss_calc.asm:3 BEGIN_C_FUNCTION
    case 0xC2829E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/miss_calc.asm:10 END_STACK_VARS
    case 0xC282A0: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/miss_calc.asm:10 END_STACK_VARS
    case 0xC282A1: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/miss_calc.asm:10 END_STACK_VARS
    case 0xC282A2: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/miss_calc.asm:10 END_STACK_VARS
    case 0xC282A3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/miss_calc.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC282A3.
    case 0xC282A5: {
        Instruction step(cpu, 0xFF, 0xA8685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/miss_calc.asm:10 END_STACK_VARS
    case 0xC282A6: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/miss_calc.asm:10 END_STACK_VARS
    case 0xC282A7: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:11 TAY
    case 0xC282A8: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/miss_calc.asm:12 STY @MISS_MESSAGE
    case 0xC282A9: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/miss_calc.asm:13 LDX CURRENT_ATTACKER
    case 0xC282AB: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/miss_calc.asm:14 LDA __BSS_START__+14,X
    case 0xC282AE: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:15 AND #$00FF
    case 0xC282B1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC282B1.
    case 0xC282B3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/miss_calc.asm:16 BNEL @UNKNOWN5
    case 0xC282B4: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/miss_calc.asm:16 BNEL @UNKNOWN5
    case 0xC282B6: {
        Instruction step(cpu, 0x4C, 0x008343u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/miss_calc.asm:17 LDX CURRENT_ATTACKER
    case 0xC282B9: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/miss_calc.asm:18 LDA __BSS_START__+15,X
    case 0xC282BC: {
        Instruction step(cpu, 0xBD, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:19 AND #$00FF
    case 0xC282BF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC282BF.
    case 0xC282C1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/miss_calc.asm:20 BNEL @UNKNOWN5
    case 0xC282C2: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/miss_calc.asm:20 BNEL @UNKNOWN5
    case 0xC282C4: {
        Instruction step(cpu, 0x4C, 0x008343u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/miss_calc.asm:21 LDX CURRENT_ATTACKER
    case 0xC282C7: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/miss_calc.asm:22 LDA __BSS_START__+16,X
    case 0xC282CA: {
        Instruction step(cpu, 0xBD, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:23 AND #$00FF
    case 0xC282CD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC282CD.
    case 0xC282CF: {
        Instruction step(cpu, 0x00, 0x0000A0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/miss_calc.asm:24 LDY #.SIZEOF(char_struct)
    case 0xC282D0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/miss_calc.asm:24 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC282D0.
    case 0xC282D2: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/miss_calc.asm:25 JSL MULT168
    case 0xC282D3: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/miss_calc.asm:26 TAX
    case 0xC282D7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/miss_calc.asm:27 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC282D8: {
        Instruction step(cpu, 0xBD, 0x009CAFu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:28 AND #$00FF
    case 0xC282DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC282DB.
    case 0xC282DD: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/miss_calc.asm:29 BEQ @UNKNOWN2
    case 0xC282DE: {
        Instruction step(cpu, 0xF0, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/miss_calc.asm:30 DEC
    case 0xC282E0: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/miss_calc.asm:31 STA @VIRTUAL02
    case 0xC282E1: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:32 TXA
    case 0xC282E3: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:33 CLC
    case 0xC282E4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/miss_calc.asm:34 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    case 0xC282E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A1u : 0x009CA1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/miss_calc.asm:34 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::items
    // Overlapping static entry reached from 0xC282E5.
    case 0xC282E7: {
        Instruction step(cpu, 0x9C, 0x006518u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/miss_calc.asm:35 CLC
    case 0xC282E8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/miss_calc.asm:36 ADC @VIRTUAL02
    case 0xC282E9: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/miss_calc.asm:36 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC282E7.
    case 0xC282EA: {
        Instruction step(cpu, 0x02, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/miss_calc.asm:37 TAX
    case 0xC282EB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/miss_calc.asm:38 LDA __BSS_START__,X
    case 0xC282EC: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:39 AND #$00FF
    case 0xC282EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC282EF.
    case 0xC282F1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/miss_calc.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC282F2: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/miss_calc.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC282F4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/miss_calc.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC282F5: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/miss_calc.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC282F7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/miss_calc.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC282F8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/miss_calc.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC282F9: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/miss_calc.asm:41 CLC
    case 0xC282FA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/miss_calc.asm:42 ADC #item::params + item_parameters::special
    case 0xC282FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/miss_calc.asm:42 ADC #item::params + item_parameters::special
    // Overlapping static entry reached from 0xC282FB.
    case 0xC282FD: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/miss_calc.asm:43 TAX
    case 0xC282FE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/miss_calc.asm:44 SEP #PROC_FLAGS::ACCUM8
    case 0xC282FF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/miss_calc.asm:45 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC28301: {
        Instruction step(cpu, 0xBF, 0xD57000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:46 REP #PROC_FLAGS::ACCUM8
    case 0xC28305: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/miss_calc.asm:47 SEC
    case 0xC28307: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/miss_calc.asm:48 AND #$00FF
    case 0xC28308: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC28308.
    case 0xC2830A: {
        Instruction step(cpu, 0x00, 0x0000E9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/miss_calc.asm:49 SBC #$0080
    case 0xC2830B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/miss_calc.asm:49 SBC #$0080
    // Overlapping static entry reached from 0xC2830B.
    case 0xC2830D: {
        Instruction step(cpu, 0x00, 0x000049u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/miss_calc.asm:50 EOR #$FF80
    case 0xC2830E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x000080u : 0x00FF80u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:50 EOR #$FF80
    // Overlapping static entry reached from 0xC2830E.
    case 0xC28310: {
        Instruction step(cpu, 0xFF, 0x1286AAu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/miss_calc.asm:51 TAX
    case 0xC28311: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/miss_calc.asm:52 STX @MISS_CHANCE
    case 0xC28312: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/miss_calc.asm:53 BRA @UNKNOWN3
    case 0xC28314: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/miss_calc.asm:55 LDX #1
    case 0xC28316: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/miss_calc.asm:55 LDX #1
    // Overlapping static entry reached from 0xC28316.
    case 0xC28318: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/miss_calc.asm:56 STX @MISS_CHANCE
    case 0xC28319: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/miss_calc.asm:58 LDX CURRENT_ATTACKER
    case 0xC2831B: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/miss_calc.asm:59 LDA __BSS_START__ + battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC2831E: {
        Instruction step(cpu, 0xBD, 0x00001Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:60 AND #$00FF
    case 0xC28321: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:60 AND #$00FF
    // Overlapping static entry reached from 0xC28321.
    case 0xC28323: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/miss_calc.asm:61 CMP #STATUS_2::CRYING
    case 0xC28324: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:61 CMP #STATUS_2::CRYING
    // Overlapping static entry reached from 0xC28324.
    case 0xC28326: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/miss_calc.asm:62 BEQ @UNKNOWN4
    case 0xC28327: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/miss_calc.asm:63 LDX CURRENT_ATTACKER
    case 0xC28329: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/miss_calc.asm:64 LDA __BSS_START__ + battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC2832C: {
        Instruction step(cpu, 0xBD, 0x00001Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:65 AND #$00FF
    case 0xC2832F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:65 AND #$00FF
    // Overlapping static entry reached from 0xC2832F.
    case 0xC28331: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/miss_calc.asm:66 CMP #STATUS_0::NAUSEOUS
    case 0xC28332: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:66 CMP #STATUS_0::NAUSEOUS
    // Overlapping static entry reached from 0xC28332.
    case 0xC28334: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/miss_calc.asm:67 BNE @UNKNOWN6
    case 0xC28335: {
        Instruction step(cpu, 0xD0, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/miss_calc.asm:69 LDX @MISS_CHANCE
    case 0xC28337: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/miss_calc.asm:70 TXA
    case 0xC28339: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:71 CLC
    case 0xC2833A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/miss_calc.asm:72 ADC #8 ;miss chance + 1/2
    case 0xC2833B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/miss_calc.asm:72 ADC #8 ;miss chance + 1/2
    // Overlapping static entry reached from 0xC2833B.
    case 0xC2833D: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/miss_calc.asm:73 TAX
    case 0xC2833E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/miss_calc.asm:74 STX @MISS_CHANCE
    case 0xC2833F: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/miss_calc.asm:75 BRA @UNKNOWN6
    case 0xC28341: {
        Instruction step(cpu, 0x80, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/miss_calc.asm:77 LDX CURRENT_ATTACKER
    case 0xC28343: {
        Instruction step(cpu, 0xAE, 0x00AB72u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/miss_calc.asm:78 LDA __BSS_START__,X
    case 0xC28346: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:79 LDY #.SIZEOF(enemy_data)
    case 0xC28349: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/miss_calc.asm:79 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC28349.
    case 0xC2834B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/miss_calc.asm:80 JSL MULT168
    case 0xC2834C: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/miss_calc.asm:81 CLC
    case 0xC28350: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/miss_calc.asm:82 ADC #enemy_data::miss_rate
    case 0xC28351: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000033u : 0x000033u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/miss_calc.asm:82 ADC #enemy_data::miss_rate
    // Overlapping static entry reached from 0xC28351.
    case 0xC28353: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/miss_calc.asm:83 TAX
    case 0xC28354: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/miss_calc.asm:84 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC28355: {
        Instruction step(cpu, 0xBF, 0xD5A440u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:85 AND #$00FF
    case 0xC28359: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:85 AND #$00FF
    // Overlapping static entry reached from 0xC28359.
    case 0xC2835B: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/miss_calc.asm:86 TAX
    case 0xC2835C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/miss_calc.asm:87 STX @MISS_CHANCE
    case 0xC2835D: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/miss_calc.asm:89 LDX @MISS_CHANCE
    case 0xC2835F: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/miss_calc.asm:90 BEQ @UNKNOWN9
    case 0xC28361: {
        Instruction step(cpu, 0xF0, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/miss_calc.asm:91 LDA #16
    case 0xC28363: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:91 LDA #16
    // Overlapping static entry reached from 0xC28363.
    case 0xC28365: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/miss_calc.asm:92 JSR RAND_LIMIT
    case 0xC28366: {
        Instruction step(cpu, 0x20, 0x00696Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/miss_calc.asm:93 STA @VIRTUAL02
    case 0xC28369: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:94 LDX @MISS_CHANCE
    case 0xC2836B: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/miss_calc.asm:95 TXA
    case 0xC2836D: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:96 DEC
    case 0xC2836E: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/miss_calc.asm:97 CMP @VIRTUAL02
    case 0xC2836F: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:98 BCC @UNKNOWN9
    case 0xC28371: {
        Instruction step(cpu, 0x90, 0x000027u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/miss_calc.asm:99 LDY @MISS_MESSAGE
    case 0xC28373: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/miss_calc.asm:100 BEQ @UNKNOWN7
    case 0xC28375: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/miss_calc.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI_UTSU
    case 0xC28377: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Cu : 0x002E2Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/miss_calc.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI_UTSU
    // Overlapping static entry reached from 0xC28377.
    case 0xC28379: {
        Instruction step(cpu, 0x2E, 0x000E85u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/miss_calc.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI_UTSU
    case 0xC2837A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/miss_calc.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI_UTSU
    case 0xC2837C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/miss_calc.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI_UTSU
    // Overlapping static entry reached from 0xC2837C.
    case 0xC2837E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/miss_calc.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI_UTSU
    case 0xC2837F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/miss_calc.asm:101 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI_UTSU
    case 0xC28381: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/miss_calc.asm:102 BRA @UNKNOWN8
    case 0xC28385: {
        Instruction step(cpu, 0x80, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/miss_calc.asm:104 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI
    case 0xC28387: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Fu : 0x002E1Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/miss_calc.asm:104 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI
    // Overlapping static entry reached from 0xC28387.
    case 0xC28389: {
        Instruction step(cpu, 0x2E, 0x000E85u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/miss_calc.asm:104 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI
    case 0xC2838A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/miss_calc.asm:104 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI
    case 0xC2838C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/miss_calc.asm:104 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI
    // Overlapping static entry reached from 0xC2838C.
    case 0xC2838E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/miss_calc.asm:104 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI
    case 0xC2838F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/miss_calc.asm:104 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KARABURI
    case 0xC28391: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/miss_calc.asm:106 LDA #1
    case 0xC28395: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:106 LDA #1
    // Overlapping static entry reached from 0xC28395.
    case 0xC28397: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/miss_calc.asm:107 BRA @UNKNOWN10
    case 0xC28398: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/miss_calc.asm:109 LDA #0
    case 0xC2839A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/miss_calc.asm:109 LDA #0
    // Overlapping static entry reached from 0xC2839A.
    case 0xC2839C: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/miss_calc.asm:111 END_C_FUNCTION
    case 0xC2839D: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/miss_calc.asm:111 END_C_FUNCTION
    case 0xC2839E: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
