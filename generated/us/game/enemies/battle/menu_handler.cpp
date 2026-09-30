// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/battle/menu_handler.asm
bool resume_battle_menu_handler(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/menu_handler.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2311B: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/menu_handler.asm:17 END_STACK_VARS
    case 0xC2311D: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/menu_handler.asm:17 END_STACK_VARS
    case 0xC2311E: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/menu_handler.asm:17 END_STACK_VARS
    case 0xC2311F: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/menu_handler.asm:17 END_STACK_VARS
    case 0xC23120: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D8u : 0x00FFD8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/menu_handler.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC23120.
    case 0xC23122: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/menu_handler.asm:17 END_STACK_VARS
    case 0xC23123: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/menu_handler.asm:17 END_STACK_VARS
    case 0xC23124: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:18 STX @VIRTUAL04
    case 0xC23125: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:18 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC23122.
    case 0xC23126: {
        Instruction step(cpu, 0x04, 0x000085u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:19 STA @LOCAL09
    case 0xC23127: {
        Instruction step(cpu, 0x85, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:19 STA @LOCAL09
    // Overlapping static entry reached from 0xC23126.
    case 0xC23128: {
        Instruction step(cpu, 0x26, 0x000064u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/battle/menu_handler.asm:20 STZ @LOCAL08
    case 0xC23129: {
        Instruction step(cpu, 0x64, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:20 STZ @LOCAL08
    // Overlapping static entry reached from 0xC23128.
    case 0xC2312A: {
        Instruction step(cpu, 0x24, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:21 LDA #0
    case 0xC2312B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:21 LDA #0
    // Overlapping static entry reached from 0xC2312A.
    case 0xC2312C: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:21 LDA #0
    // Overlapping static entry reached from 0xC2312B.
    case 0xC2312D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:22 JSL UNKNOWN_C2FEF9
    case 0xC2312E: {
        Instruction step(cpu, 0x22, 0xC2FEF9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:23 LDA @LOCAL09
    case 0xC23132: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:24 DEC
    case 0xC23134: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/menu_handler.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    case 0xC23135: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/menu_handler.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC23135.
    case 0xC23137: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/menu_handler.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    case 0xC23138: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:26 CLC
    case 0xC2313C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/menu_handler.asm:27 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC2313D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CEu : 0x0099CEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/menu_handler.asm:27 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC2313D.
    case 0xC2313F: {
        Instruction step(cpu, 0x99, 0x002285u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:28 STA @LOCAL07
    case 0xC23140: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:29 LDY #char_struct::afflictions
    case 0xC23142: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:29 LDY #char_struct::afflictions
    // Overlapping static entry reached from 0xC23142.
    case 0xC23144: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:30 LDA (@LOCAL07),Y
    case 0xC23145: {
        Instruction step(cpu, 0xB1, 0x000022u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:31 AND #$00FF
    case 0xC23147: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC23147.
    case 0xC23149: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:32 CMP #STATUS_0::PARALYZED
    case 0xC2314A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:32 CMP #STATUS_0::PARALYZED
    // Overlapping static entry reached from 0xC2314A.
    case 0xC2314C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:33 BEQ @UNKNOWN0
    case 0xC2314D: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:34 LDY #char_struct::afflictions+2
    case 0xC2314F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:34 LDY #char_struct::afflictions+2
    // Overlapping static entry reached from 0xC2314F.
    case 0xC23151: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:35 LDA (@LOCAL07),Y
    case 0xC23152: {
        Instruction step(cpu, 0xB1, 0x000022u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:36 AND #$00FF
    case 0xC23154: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC23154.
    case 0xC23156: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:37 CMP #STATUS_2::IMMOBILIZED
    case 0xC23157: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:37 CMP #STATUS_2::IMMOBILIZED
    // Overlapping static entry reached from 0xC23157.
    case 0xC23159: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:38 BNE @UNKNOWN1
    case 0xC2315A: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:40 LDA #2
    case 0xC2315C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:40 LDA #2
    // Overlapping static entry reached from 0xC2315C.
    case 0xC2315E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:41 STA @LOCAL06
    case 0xC2315F: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:42 BRA @UNKNOWN4
    case 0xC23161: {
        Instruction step(cpu, 0x80, 0x00003Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler.asm:44 LDY #char_struct::equipment+EQUIPMENT_SLOT::WEAPON
    case 0xC23163: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000031u : 0x000031u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:44 LDY #char_struct::equipment+EQUIPMENT_SLOT::WEAPON
    // Overlapping static entry reached from 0xC23163.
    case 0xC23165: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:45 LDA (@LOCAL07),Y
    case 0xC23166: {
        Instruction step(cpu, 0xB1, 0x000022u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:46 AND #$00FF
    case 0xC23168: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC23168.
    case 0xC2316A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:47 BEQ @UNKNOWN2
    case 0xC2316B: {
        Instruction step(cpu, 0xF0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:48 DEC
    case 0xC2316D: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/menu_handler.asm:49 CLC
    case 0xC2316E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/menu_handler.asm:50 ADC @LOCAL07
    case 0xC2316F: {
        Instruction step(cpu, 0x65, 0x000022u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/menu_handler.asm:51 TAX
    case 0xC23171: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:52 LDA __BSS_START__ + char_struct::items,X
    case 0xC23172: {
        Instruction step(cpu, 0xBD, 0x000023u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:53 AND #$00FF
    case 0xC23175: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC23175.
    case 0xC23177: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:55 CMP #0
    case 0xC23178: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:55 CMP #0
    // Overlapping static entry reached from 0xC23178.
    case 0xC2317A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:56 BEQ @UNKNOWN3
    case 0xC2317B: {
        Instruction step(cpu, 0xF0, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:57 LDY #.SIZEOF(item)
    case 0xC2317D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:57 LDY #.SIZEOF(item)
    // Overlapping static entry reached from 0xC2317D.
    case 0xC2317F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:58 JSL MULT168
    case 0xC23180: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:59 CLC
    case 0xC23184: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/menu_handler.asm:60 ADC #item::type
    case 0xC23185: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/menu_handler.asm:60 ADC #item::type
    // Overlapping static entry reached from 0xC23185.
    case 0xC23187: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:61 TAX
    case 0xC23188: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:62 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC23189: {
        Instruction step(cpu, 0xBF, 0xD55000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:63 AND #$00FF
    case 0xC2318D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:63 AND #$00FF
    // Overlapping static entry reached from 0xC2318D.
    case 0xC2318F: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:64 AND #$0003
    case 0xC23190: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:64 AND #$0003
    // Overlapping static entry reached from 0xC23190.
    case 0xC23192: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:65 CMP #1
    case 0xC23193: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:65 CMP #1
    // Overlapping static entry reached from 0xC23193.
    case 0xC23195: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:66 BNE @UNKNOWN3
    case 0xC23196: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:67 LDA #1
    case 0xC23198: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:67 LDA #1
    // Overlapping static entry reached from 0xC23198.
    case 0xC2319A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:68 STA @LOCAL06
    case 0xC2319B: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:69 BRA @UNKNOWN4
    case 0xC2319D: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler.asm:71 STZ @LOCAL06
    case 0xC2319F: {
        Instruction step(cpu, 0x64, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:73 LDA GAME_STATE+game_state::auto_fight_enable
    case 0xC231A1: {
        Instruction step(cpu, 0xAD, 0x0098B1u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:74 AND #$00FF
    case 0xC231A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:74 AND #$00FF
    // Overlapping static entry reached from 0xC231A4.
    case 0xC231A6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:75 BEQL @UNKNOWN43
    case 0xC231A7: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:75 BEQL @UNKNOWN43
    case 0xC231A9: {
        Instruction step(cpu, 0x4C, 0x00356Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:76 LDY #char_struct::afflictions+4
    case 0xC231AC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000012u : 0x000012u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:76 LDY #char_struct::afflictions+4
    // Overlapping static entry reached from 0xC231AC.
    case 0xC231AE: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:77 LDA (@LOCAL07),Y
    case 0xC231AF: {
        Instruction step(cpu, 0xB1, 0x000022u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:78 AND #$00FF
    case 0xC231B1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:78 AND #$00FF
    // Overlapping static entry reached from 0xC231B1.
    case 0xC231B3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:79 BNEL @UNKNOWN38
    case 0xC231B4: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler.asm:79 BNEL @UNKNOWN38
    case 0xC231B6: {
        Instruction step(cpu, 0x4C, 0x003519u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:80 LDY #char_struct::afflictions+3
    case 0xC231B9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000011u : 0x000011u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:80 LDY #char_struct::afflictions+3
    // Overlapping static entry reached from 0xC231B9.
    case 0xC231BB: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:81 LDA (@LOCAL07),Y
    case 0xC231BC: {
        Instruction step(cpu, 0xB1, 0x000022u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:82 AND #$00FF
    case 0xC231BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:82 AND #$00FF
    // Overlapping static entry reached from 0xC231BE.
    case 0xC231C0: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:83 CMP #STATUS_3::STRANGE
    case 0xC231C1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:83 CMP #STATUS_3::STRANGE
    // Overlapping static entry reached from 0xC231C1.
    case 0xC231C3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:84 BEQL @UNKNOWN38
    case 0xC231C4: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:84 BEQL @UNKNOWN38
    case 0xC231C6: {
        Instruction step(cpu, 0x4C, 0x003519u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:85 LDY #char_struct::afflictions+1
    case 0xC231C9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:85 LDY #char_struct::afflictions+1
    // Overlapping static entry reached from 0xC231C9.
    case 0xC231CB: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:86 LDA (@LOCAL07),Y
    case 0xC231CC: {
        Instruction step(cpu, 0xB1, 0x000022u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:87 AND #$00FF
    case 0xC231CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:87 AND #$00FF
    // Overlapping static entry reached from 0xC231CE.
    case 0xC231D0: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:88 CMP #STATUS_1::MUSHROOMIZED
    case 0xC231D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:88 CMP #STATUS_1::MUSHROOMIZED
    // Overlapping static entry reached from 0xC231D1.
    case 0xC231D3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:89 BEQL @UNKNOWN38
    case 0xC231D4: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:89 BEQL @UNKNOWN38
    case 0xC231D6: {
        Instruction step(cpu, 0x4C, 0x003519u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:90 LDA @LOCAL09
    case 0xC231D9: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:91 CMP #PARTY_MEMBER::NESS
    case 0xC231DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:91 CMP #PARTY_MEMBER::NESS
    // Overlapping static entry reached from 0xC231DB.
    case 0xC231DD: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:92 BEQ @UNKNOWN9
    case 0xC231DE: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:93 LDA @LOCAL09
    case 0xC231E0: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:94 CMP #PARTY_MEMBER::POO
    case 0xC231E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:94 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC231E2.
    case 0xC231E4: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:95 BNEL @UNKNOWN38
    case 0xC231E5: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler.asm:95 BNEL @UNKNOWN38
    case 0xC231E7: {
        Instruction step(cpu, 0x4C, 0x003519u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:97 SEP #PROC_FLAGS::ACCUM8
    case 0xC231EA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:98 LDA #1
    case 0xC231EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:99 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    case 0xC231EE: {
        Instruction step(cpu, 0x8D, 0x00A981u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:99 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC231EC.
    case 0xC231EF: {
        Instruction step(cpu, 0x81, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:100 LDA #26
    case 0xC231F1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Au : 0x008D1Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:101 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC231F3: {
        Instruction step(cpu, 0x8D, 0x00A97Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:101 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC231F1.
    case 0xC231F4: {
        Instruction step(cpu, 0x7E, 0x00C2A9u, 3u, AddressMode::AbsoluteIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // src/battle/menu_handler.asm:102 REP #PROC_FLAGS::ACCUM8
    case 0xC231F6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:102 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC231F4.
    case 0xC231F7: {
        Instruction step(cpu, 0x20, 0x0023A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/menu_handler.asm:103 LDA #35
    case 0xC231F8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000023u : 0x000023u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:103 LDA #35
    // Overlapping static entry reached from 0xC231F8.
    case 0xC231FA: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:104 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC231FB: {
        Instruction step(cpu, 0x8D, 0x00A97Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:105 LDX #26
    case 0xC231FE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00001Au : 0x00001Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:105 LDX #26
    // Overlapping static entry reached from 0xC231FE.
    case 0xC23200: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:106 LDA @LOCAL09
    case 0xC23201: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:107 JSL CHECK_IF_PSI_KNOWN
    case 0xC23203: {
        Instruction step(cpu, 0x22, 0xC45ECEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:108 CMP #0
    case 0xC23207: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:108 CMP #0
    // Overlapping static entry reached from 0xC23207.
    case 0xC23209: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:109 BEQ @UNKNOWN15
    case 0xC2320A: {
        Instruction step(cpu, 0xF0, 0x000060u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:110 LDY #char_struct::current_pp_target
    case 0xC2320C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:110 LDY #char_struct::current_pp_target
    // Overlapping static entry reached from 0xC2320C.
    case 0xC2320E: {
        Instruction step(cpu, 0x00, 0x0000AFu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:111 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_LIFEUP_OMEGA) + battle_action::pp_cost
    case 0xC2320F: {
        Instruction step(cpu, 0xAF, 0xD57D0Fu, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:112 AND #$00FF
    case 0xC23213: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:112 AND #$00FF
    // Overlapping static entry reached from 0xC23213.
    case 0xC23215: {
        Instruction step(cpu, 0x00, 0x0000D1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:113 CMP (@LOCAL07),Y
    case 0xC23216: {
        Instruction step(cpu, 0xD1, 0x000022u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:114 BGT @UNKNOWN15
    case 0xC23218: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler.asm:114 BGT @UNKNOWN15
    case 0xC2321A: {
        Instruction step(cpu, 0xB0, 0x000050u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/menu_handler.asm:115 LDA #0
    case 0xC2321C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:115 LDA #0
    // Overlapping static entry reached from 0xC2321C.
    case 0xC2321E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:116 JSL COUNT_CHARS
    case 0xC2321F: {
        Instruction step(cpu, 0x22, 0xC2BAC5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:117 CMP #2
    case 0xC23223: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:117 CMP #2
    // Overlapping static entry reached from 0xC23223.
    case 0xC23225: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:118 BCC @UNKNOWN15
    case 0xC23226: {
        Instruction step(cpu, 0x90, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/menu_handler.asm:119 LDY #0
    case 0xC23228: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:119 LDY #0
    // Overlapping static entry reached from 0xC23228.
    case 0xC2322A: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:120 STY @LOCAL05
    case 0xC2322B: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:121 BRA @UNKNOWN14
    case 0xC2322D: {
        Instruction step(cpu, 0x80, 0x00002Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler.asm:123 LDA GAME_STATE + game_state::party_members,Y
    case 0xC2322F: {
        Instruction step(cpu, 0xB9, 0x00986Fu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:124 AND #$00FF
    case 0xC23232: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:124 AND #$00FF
    // Overlapping static entry reached from 0xC23232.
    case 0xC23234: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:125 TAX
    case 0xC23235: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:126 CPX #1
    case 0xC23236: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:126 CPX #1
    // Overlapping static entry reached from 0xC23236.
    case 0xC23238: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:127 BCC @UNKNOWN13
    case 0xC23239: {
        Instruction step(cpu, 0x90, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/menu_handler.asm:128 CPX #4
    case 0xC2323B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:128 CPX #4
    // Overlapping static entry reached from 0xC2323B.
    case 0xC2323D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:129 BGT @UNKNOWN13
    case 0xC2323E: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler.asm:129 BGT @UNKNOWN13
    case 0xC23240: {
        Instruction step(cpu, 0xB0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/menu_handler.asm:130 TXA
    case 0xC23242: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:131 DEC
    case 0xC23243: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/menu_handler.asm:132 LDY #.SIZEOF(char_struct)
    case 0xC23244: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:132 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC23244.
    case 0xC23246: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:133 JSL MULT168
    case 0xC23247: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:134 TAX
    case 0xC2324B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:135 LDA PARTY_CHARACTERS+char_struct::max_hp,X
    case 0xC2324C: {
        Instruction step(cpu, 0xBD, 0x0099D8u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:136 LSR
    case 0xC2324F: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/menu_handler.asm:137 LSR
    case 0xC23250: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/menu_handler.asm:138 CMP PARTY_CHARACTERS+char_struct::current_hp_target,X
    case 0xC23251: {
        Instruction step(cpu, 0xDD, 0x009A15u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/menu_handler.asm:139 BLTEQ @UNKNOWN15
    case 0xC23254: {
        Instruction step(cpu, 0x90, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/menu_handler.asm:139 BLTEQ @UNKNOWN15
    case 0xC23256: {
        Instruction step(cpu, 0xF0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:141 LDY @LOCAL05
    case 0xC23258: {
        Instruction step(cpu, 0xA4, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:142 INY
    case 0xC2325A: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:143 STY @LOCAL05
    case 0xC2325B: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:145 CPY #6
    case 0xC2325D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:145 CPY #6
    // Overlapping static entry reached from 0xC2325D.
    case 0xC2325F: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:146 BCC @UNKNOWN11
    case 0xC23260: {
        Instruction step(cpu, 0x90, 0x0000CDu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/menu_handler.asm:147 SEP #PROC_FLAGS::ACCUM8
    case 0xC23262: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:148 LDA #4
    case 0xC23264: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x008D04u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:149 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    case 0xC23266: {
        Instruction step(cpu, 0x8D, 0x00A981u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:149 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC23264.
    case 0xC23267: {
        Instruction step(cpu, 0x81, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:150 JMP @UNKNOWN21
    case 0xC23269: {
        Instruction step(cpu, 0x4C, 0x003326u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:152 SEP #PROC_FLAGS::ACCUM8
    case 0xC2326C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:153 LDA #25
    case 0xC2326E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000019u : 0x008D19u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:154 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC23270: {
        Instruction step(cpu, 0x8D, 0x00A97Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:154 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC2326E.
    case 0xC23271: {
        Instruction step(cpu, 0x7E, 0x00C2A9u, 3u, AddressMode::AbsoluteIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // src/battle/menu_handler.asm:155 REP #PROC_FLAGS::ACCUM8
    case 0xC23273: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:155 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC23271.
    case 0xC23274: {
        Instruction step(cpu, 0x20, 0x0022A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/menu_handler.asm:156 LDA #34
    case 0xC23275: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000022u : 0x000022u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:156 LDA #34
    // Overlapping static entry reached from 0xC23275.
    case 0xC23277: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:157 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23278: {
        Instruction step(cpu, 0x8D, 0x00A97Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:158 LDX #25
    case 0xC2327B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:158 LDX #25
    // Overlapping static entry reached from 0xC2327B.
    case 0xC2327D: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:159 LDA @LOCAL09
    case 0xC2327E: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:160 JSL CHECK_IF_PSI_KNOWN
    case 0xC23280: {
        Instruction step(cpu, 0x22, 0xC45ECEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:161 CMP #0
    case 0xC23284: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:161 CMP #0
    // Overlapping static entry reached from 0xC23284.
    case 0xC23286: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:162 BEQ @UNKNOWN17
    case 0xC23287: {
        Instruction step(cpu, 0xF0, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:163 LDY #char_struct::current_pp_target
    case 0xC23289: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:163 LDY #char_struct::current_pp_target
    // Overlapping static entry reached from 0xC23289.
    case 0xC2328B: {
        Instruction step(cpu, 0x00, 0x0000AFu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:164 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_LIFEUP_GAMMA) + battle_action::pp_cost
    case 0xC2328C: {
        Instruction step(cpu, 0xAF, 0xD57D03u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:165 AND #$00FF
    case 0xC23290: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:165 AND #$00FF
    // Overlapping static entry reached from 0xC23290.
    case 0xC23292: {
        Instruction step(cpu, 0x00, 0x0000D1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:166 CMP (@LOCAL07),Y
    case 0xC23293: {
        Instruction step(cpu, 0xD1, 0x000022u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:167 BGT @UNKNOWN17
    case 0xC23295: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler.asm:167 BGT @UNKNOWN17
    case 0xC23297: {
        Instruction step(cpu, 0xB0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/menu_handler.asm:168 JSL AUTOLIFEUP
    case 0xC23299: {
        Instruction step(cpu, 0x22, 0xC4A15Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:169 SEP #PROC_FLAGS::ACCUM8
    case 0xC2329D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:170 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC2329F: {
        Instruction step(cpu, 0x8D, 0x00A982u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:171 REP #PROC_FLAGS::ACCUM8
    case 0xC232A2: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:172 AND #$00FF
    case 0xC232A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:172 AND #$00FF
    // Overlapping static entry reached from 0xC232A4.
    case 0xC232A6: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:173 BNEL @UNKNOWN21
    case 0xC232A7: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler.asm:173 BNEL @UNKNOWN21
    case 0xC232A9: {
        Instruction step(cpu, 0x4C, 0x003326u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:175 SEP #PROC_FLAGS::ACCUM8
    case 0xC232AC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:176 LDA #24
    case 0xC232AE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x008D18u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:177 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC232B0: {
        Instruction step(cpu, 0x8D, 0x00A97Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:177 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC232AE.
    case 0xC232B1: {
        Instruction step(cpu, 0x7E, 0x00C2A9u, 3u, AddressMode::AbsoluteIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // src/battle/menu_handler.asm:178 REP #PROC_FLAGS::ACCUM8
    case 0xC232B3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:178 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC232B1.
    case 0xC232B4: {
        Instruction step(cpu, 0x20, 0x0021A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/menu_handler.asm:179 LDA #33
    case 0xC232B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:179 LDA #33
    // Overlapping static entry reached from 0xC232B5.
    case 0xC232B7: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:180 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC232B8: {
        Instruction step(cpu, 0x8D, 0x00A97Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:181 LDX #24
    case 0xC232BB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:181 LDX #24
    // Overlapping static entry reached from 0xC232BB.
    case 0xC232BD: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:182 LDA @LOCAL09
    case 0xC232BE: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:183 JSL CHECK_IF_PSI_KNOWN
    case 0xC232C0: {
        Instruction step(cpu, 0x22, 0xC45ECEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:184 CMP #0
    case 0xC232C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:184 CMP #0
    // Overlapping static entry reached from 0xC232C4.
    case 0xC232C6: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:185 BEQ @UNKNOWN19
    case 0xC232C7: {
        Instruction step(cpu, 0xF0, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:186 LDY #char_struct::current_pp_target
    case 0xC232C9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:186 LDY #char_struct::current_pp_target
    // Overlapping static entry reached from 0xC232C9.
    case 0xC232CB: {
        Instruction step(cpu, 0x00, 0x0000AFu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:187 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_LIFEUP_BETA) + battle_action::pp_cost
    case 0xC232CC: {
        Instruction step(cpu, 0xAF, 0xD57CF7u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:188 AND #$00FF
    case 0xC232D0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:188 AND #$00FF
    // Overlapping static entry reached from 0xC232D0.
    case 0xC232D2: {
        Instruction step(cpu, 0x00, 0x0000D1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:189 CMP (@LOCAL07),Y
    case 0xC232D3: {
        Instruction step(cpu, 0xD1, 0x000022u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:190 BGT @UNKNOWN19
    case 0xC232D5: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler.asm:190 BGT @UNKNOWN19
    case 0xC232D7: {
        Instruction step(cpu, 0xB0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/menu_handler.asm:191 JSL AUTOLIFEUP
    case 0xC232D9: {
        Instruction step(cpu, 0x22, 0xC4A15Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:192 SEP #PROC_FLAGS::ACCUM8
    case 0xC232DD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:193 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC232DF: {
        Instruction step(cpu, 0x8D, 0x00A982u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:194 REP #PROC_FLAGS::ACCUM8
    case 0xC232E2: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:195 AND #$00FF
    case 0xC232E4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:195 AND #$00FF
    // Overlapping static entry reached from 0xC232E4.
    case 0xC232E6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:196 BNE @UNKNOWN21
    case 0xC232E7: {
        Instruction step(cpu, 0xD0, 0x00003Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:198 SEP #PROC_FLAGS::ACCUM8
    case 0xC232E9: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:199 LDA #23
    case 0xC232EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000017u : 0x008D17u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:200 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC232ED: {
        Instruction step(cpu, 0x8D, 0x00A97Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:200 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC232EB.
    case 0xC232EE: {
        Instruction step(cpu, 0x7E, 0x00C2A9u, 3u, AddressMode::AbsoluteIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // src/battle/menu_handler.asm:201 REP #PROC_FLAGS::ACCUM8
    case 0xC232F0: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:201 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC232EE.
    case 0xC232F1: {
        Instruction step(cpu, 0x20, 0x0020A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/menu_handler.asm:202 LDA #32
    case 0xC232F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:202 LDA #32
    // Overlapping static entry reached from 0xC232F2.
    case 0xC232F4: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:203 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC232F5: {
        Instruction step(cpu, 0x8D, 0x00A97Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:204 LDX #23
    case 0xC232F8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000017u : 0x000017u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:204 LDX #23
    // Overlapping static entry reached from 0xC232F8.
    case 0xC232FA: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:205 LDA @LOCAL09
    case 0xC232FB: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:206 JSL CHECK_IF_PSI_KNOWN
    case 0xC232FD: {
        Instruction step(cpu, 0x22, 0xC45ECEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:207 CMP #0
    case 0xC23301: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:207 CMP #0
    // Overlapping static entry reached from 0xC23301.
    case 0xC23303: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:208 BEQ @UNKNOWN22
    case 0xC23304: {
        Instruction step(cpu, 0xF0, 0x000031u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:209 LDY #char_struct::current_pp_target
    case 0xC23306: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:209 LDY #char_struct::current_pp_target
    // Overlapping static entry reached from 0xC23306.
    case 0xC23308: {
        Instruction step(cpu, 0x00, 0x0000AFu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:210 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_LIFEUP_ALPHA) + battle_action::pp_cost
    case 0xC23309: {
        Instruction step(cpu, 0xAF, 0xD57CEBu, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:211 AND #$00FF
    case 0xC2330D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:211 AND #$00FF
    // Overlapping static entry reached from 0xC2330D.
    case 0xC2330F: {
        Instruction step(cpu, 0x00, 0x0000D1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:212 CMP (@LOCAL07),Y
    case 0xC23310: {
        Instruction step(cpu, 0xD1, 0x000022u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:213 BGT @UNKNOWN22
    case 0xC23312: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler.asm:213 BGT @UNKNOWN22
    case 0xC23314: {
        Instruction step(cpu, 0xB0, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/menu_handler.asm:214 JSL AUTOLIFEUP
    case 0xC23316: {
        Instruction step(cpu, 0x22, 0xC4A15Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:215 SEP #PROC_FLAGS::ACCUM8
    case 0xC2331A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:216 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC2331C: {
        Instruction step(cpu, 0x8D, 0x00A982u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:217 REP #PROC_FLAGS::ACCUM8
    case 0xC2331F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:218 AND #$00FF
    case 0xC23321: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:218 AND #$00FF
    // Overlapping static entry reached from 0xC23321.
    case 0xC23323: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:219 BEQ @UNKNOWN22
    case 0xC23324: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:221 REP #PROC_FLAGS::ACCUM8
    case 0xC23326: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:222 LDA @LOCAL09
    case 0xC23328: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:223 SEP #PROC_FLAGS::ACCUM8
    case 0xC2332A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:224 STA BATTLE_MENU_SELECTION
    case 0xC2332C: {
        Instruction step(cpu, 0x8D, 0x00A97Du, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:225 REP #PROC_FLAGS::ACCUM8
    case 0xC2332F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:226 LDA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23331: {
        Instruction step(cpu, 0xAD, 0x00A97Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:227 JMP @UNKNOWN113
    case 0xC23334: {
        Instruction step(cpu, 0x4C, 0x003B64u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:229 SEP #PROC_FLAGS::ACCUM8
    case 0xC23337: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:230 LDA #30
    case 0xC23339: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x008D1Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:231 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC2333B: {
        Instruction step(cpu, 0x8D, 0x00A97Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:231 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC23339.
    case 0xC2333C: {
        Instruction step(cpu, 0x7E, 0x00C2A9u, 3u, AddressMode::AbsoluteIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // src/battle/menu_handler.asm:232 REP #PROC_FLAGS::ACCUM8
    case 0xC2333E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:232 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2333C.
    case 0xC2333F: {
        Instruction step(cpu, 0x20, 0x0027A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/menu_handler.asm:233 LDA #39
    case 0xC23340: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:233 LDA #39
    // Overlapping static entry reached from 0xC23340.
    case 0xC23342: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:234 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23343: {
        Instruction step(cpu, 0x8D, 0x00A97Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:235 LDX #30
    case 0xC23346: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:235 LDX #30
    // Overlapping static entry reached from 0xC23346.
    case 0xC23348: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:236 LDA @LOCAL09
    case 0xC23349: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:237 JSL CHECK_IF_PSI_KNOWN
    case 0xC2334B: {
        Instruction step(cpu, 0x22, 0xC45ECEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:238 CMP #0
    case 0xC2334F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:238 CMP #0
    // Overlapping static entry reached from 0xC2334F.
    case 0xC23351: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:239 BEQ @UNKNOWN24
    case 0xC23352: {
        Instruction step(cpu, 0xF0, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:240 LDY #char_struct::current_pp_target
    case 0xC23354: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:240 LDY #char_struct::current_pp_target
    // Overlapping static entry reached from 0xC23354.
    case 0xC23356: {
        Instruction step(cpu, 0x00, 0x0000AFu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:241 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_HEALING_OMEGA) + battle_action::pp_cost
    case 0xC23357: {
        Instruction step(cpu, 0xAF, 0xD57D3Fu, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:242 AND #$00FF
    case 0xC2335B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:242 AND #$00FF
    // Overlapping static entry reached from 0xC2335B.
    case 0xC2335D: {
        Instruction step(cpu, 0x00, 0x0000D1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:243 CMP (@LOCAL07),Y
    case 0xC2335E: {
        Instruction step(cpu, 0xD1, 0x000022u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:244 BGT @UNKNOWN24
    case 0xC23360: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler.asm:244 BGT @UNKNOWN24
    case 0xC23362: {
        Instruction step(cpu, 0xB0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/menu_handler.asm:245 LDX #1
    case 0xC23364: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:245 LDX #1
    // Overlapping static entry reached from 0xC23364.
    case 0xC23366: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:246 LDA #0
    case 0xC23367: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:246 LDA #0
    // Overlapping static entry reached from 0xC23367.
    case 0xC23369: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:247 JSL AUTOHEALING
    case 0xC2336A: {
        Instruction step(cpu, 0x22, 0xC4A0CFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:248 SEP #PROC_FLAGS::ACCUM8
    case 0xC2336E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:249 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC23370: {
        Instruction step(cpu, 0x8D, 0x00A982u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:250 REP #PROC_FLAGS::ACCUM8
    case 0xC23373: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:251 AND #$00FF
    case 0xC23375: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:251 AND #$00FF
    // Overlapping static entry reached from 0xC23375.
    case 0xC23377: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:252 BNE @UNKNOWN21
    case 0xC23378: {
        Instruction step(cpu, 0xD0, 0x0000ACu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:254 SEP #PROC_FLAGS::ACCUM8
    case 0xC2337A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:255 LDA #29
    case 0xC2337C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Du : 0x008D1Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:256 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC2337E: {
        Instruction step(cpu, 0x8D, 0x00A97Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:256 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC2337C.
    case 0xC2337F: {
        Instruction step(cpu, 0x7E, 0x00C2A9u, 3u, AddressMode::AbsoluteIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // src/battle/menu_handler.asm:257 REP #PROC_FLAGS::ACCUM8
    case 0xC23381: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:257 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2337F.
    case 0xC23382: {
        Instruction step(cpu, 0x20, 0x0026A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/menu_handler.asm:258 LDA #38
    case 0xC23383: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000026u : 0x000026u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:258 LDA #38
    // Overlapping static entry reached from 0xC23383.
    case 0xC23385: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:259 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23386: {
        Instruction step(cpu, 0x8D, 0x00A97Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:260 LDX #29
    case 0xC23389: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00001Du : 0x00001Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:260 LDX #29
    // Overlapping static entry reached from 0xC23389.
    case 0xC2338B: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:261 LDA @LOCAL09
    case 0xC2338C: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:262 JSL CHECK_IF_PSI_KNOWN
    case 0xC2338E: {
        Instruction step(cpu, 0x22, 0xC45ECEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:263 CMP #0
    case 0xC23392: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:263 CMP #0
    // Overlapping static entry reached from 0xC23392.
    case 0xC23394: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:264 BEQ @UNKNOWN28
    case 0xC23395: {
        Instruction step(cpu, 0xF0, 0x000064u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:265 LDY #char_struct::current_pp_target
    case 0xC23397: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:265 LDY #char_struct::current_pp_target
    // Overlapping static entry reached from 0xC23397.
    case 0xC23399: {
        Instruction step(cpu, 0x00, 0x0000AFu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:266 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_HEALING_GAMMA) + battle_action::pp_cost
    case 0xC2339A: {
        Instruction step(cpu, 0xAF, 0xD57D33u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:267 AND #$00FF
    case 0xC2339E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:267 AND #$00FF
    // Overlapping static entry reached from 0xC2339E.
    case 0xC233A0: {
        Instruction step(cpu, 0x00, 0x0000D1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:268 CMP (@LOCAL07),Y
    case 0xC233A1: {
        Instruction step(cpu, 0xD1, 0x000022u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:269 BGT @UNKNOWN28
    case 0xC233A3: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler.asm:269 BGT @UNKNOWN28
    case 0xC233A5: {
        Instruction step(cpu, 0xB0, 0x000054u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/menu_handler.asm:270 LDX #3
    case 0xC233A7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:270 LDX #3
    // Overlapping static entry reached from 0xC233A7.
    case 0xC233A9: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:271 LDA #0
    case 0xC233AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:271 LDA #0
    // Overlapping static entry reached from 0xC233AA.
    case 0xC233AC: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:272 JSL AUTOHEALING
    case 0xC233AD: {
        Instruction step(cpu, 0x22, 0xC4A0CFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:273 SEP #PROC_FLAGS::ACCUM8
    case 0xC233B1: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:274 LDY #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    case 0xC233B3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000082u : 0x00A982u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:274 LDY #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    // Overlapping static entry reached from 0xC233B3.
    case 0xC233B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000084u : 0x001E84u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:275 STY @LOCAL05
    case 0xC233B6: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:275 STY @LOCAL05
    // Overlapping static entry reached from 0xC233B5.
    case 0xC233B7: {
        Instruction step(cpu, 0x1E, 0x000099u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/battle/menu_handler.asm:276 STA __BSS_START__,Y
    case 0xC233B8: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:276 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC233B7.
    case 0xC233BA: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:277 REP #PROC_FLAGS::ACCUM8
    case 0xC233BB: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:278 AND #$00FF
    case 0xC233BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:278 AND #$00FF
    // Overlapping static entry reached from 0xC233BD.
    case 0xC233BF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:279 BNEL @UNKNOWN21
    case 0xC233C0: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler.asm:279 BNEL @UNKNOWN21
    case 0xC233C2: {
        Instruction step(cpu, 0x4C, 0x003326u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:280 LDX #2
    case 0xC233C5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:280 LDX #2
    // Overlapping static entry reached from 0xC233C5.
    case 0xC233C7: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:281 LDA #0
    case 0xC233C8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:281 LDA #0
    // Overlapping static entry reached from 0xC233C8.
    case 0xC233CA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:282 JSL AUTOHEALING
    case 0xC233CB: {
        Instruction step(cpu, 0x22, 0xC4A0CFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:283 SEP #PROC_FLAGS::ACCUM8
    case 0xC233CF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:284 LDY @LOCAL05
    case 0xC233D1: {
        Instruction step(cpu, 0xA4, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:285 STA __BSS_START__,Y
    case 0xC233D3: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:286 REP #PROC_FLAGS::ACCUM8
    case 0xC233D6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:287 AND #$00FF
    case 0xC233D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:287 AND #$00FF
    // Overlapping static entry reached from 0xC233D8.
    case 0xC233DA: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:288 BNEL @UNKNOWN21
    case 0xC233DB: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler.asm:288 BNEL @UNKNOWN21
    case 0xC233DD: {
        Instruction step(cpu, 0x4C, 0x003326u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:289 LDX #1
    case 0xC233E0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:289 LDX #1
    // Overlapping static entry reached from 0xC233E0.
    case 0xC233E2: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:290 LDA #0
    case 0xC233E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:290 LDA #0
    // Overlapping static entry reached from 0xC233E3.
    case 0xC233E5: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:291 JSL AUTOHEALING
    case 0xC233E6: {
        Instruction step(cpu, 0x22, 0xC4A0CFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:292 SEP #PROC_FLAGS::ACCUM8
    case 0xC233EA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:293 LDY @LOCAL05
    case 0xC233EC: {
        Instruction step(cpu, 0xA4, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:294 STA __BSS_START__,Y
    case 0xC233EE: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:295 REP #PROC_FLAGS::ACCUM8
    case 0xC233F1: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:296 AND #$00FF
    case 0xC233F3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:296 AND #$00FF
    // Overlapping static entry reached from 0xC233F3.
    case 0xC233F5: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:297 BNEL @UNKNOWN21
    case 0xC233F6: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler.asm:297 BNEL @UNKNOWN21
    case 0xC233F8: {
        Instruction step(cpu, 0x4C, 0x003326u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:299 SEP #PROC_FLAGS::ACCUM8
    case 0xC233FB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:300 LDA #28
    case 0xC233FD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Cu : 0x008D1Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:301 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC233FF: {
        Instruction step(cpu, 0x8D, 0x00A97Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:301 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC233FD.
    case 0xC23400: {
        Instruction step(cpu, 0x7E, 0x00C2A9u, 3u, AddressMode::AbsoluteIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // src/battle/menu_handler.asm:302 REP #PROC_FLAGS::ACCUM8
    case 0xC23402: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:302 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC23400.
    case 0xC23403: {
        Instruction step(cpu, 0x20, 0x0025A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/menu_handler.asm:303 LDA #37
    case 0xC23404: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000025u : 0x000025u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:303 LDA #37
    // Overlapping static entry reached from 0xC23404.
    case 0xC23406: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:304 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23407: {
        Instruction step(cpu, 0x8D, 0x00A97Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:305 LDX #28
    case 0xC2340A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00001Cu : 0x00001Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:305 LDX #28
    // Overlapping static entry reached from 0xC2340A.
    case 0xC2340C: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:306 LDA @LOCAL09
    case 0xC2340D: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:307 JSL CHECK_IF_PSI_KNOWN
    case 0xC2340F: {
        Instruction step(cpu, 0x22, 0xC45ECEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:308 CMP #0
    case 0xC23413: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:308 CMP #0
    // Overlapping static entry reached from 0xC23413.
    case 0xC23415: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:309 BEQL @UNKNOWN34
    case 0xC23416: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:309 BEQL @UNKNOWN34
    case 0xC23418: {
        Instruction step(cpu, 0x4C, 0x003498u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:310 LDY #char_struct::current_pp_target
    case 0xC2341B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:310 LDY #char_struct::current_pp_target
    // Overlapping static entry reached from 0xC2341B.
    case 0xC2341D: {
        Instruction step(cpu, 0x00, 0x0000AFu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:311 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_HEALING_BETA) + battle_action::pp_cost
    case 0xC2341E: {
        Instruction step(cpu, 0xAF, 0xD57D27u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:312 AND #$00FF
    case 0xC23422: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:312 AND #$00FF
    // Overlapping static entry reached from 0xC23422.
    case 0xC23424: {
        Instruction step(cpu, 0x00, 0x0000D1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:313 CMP (@LOCAL07),Y
    case 0xC23425: {
        Instruction step(cpu, 0xD1, 0x000022u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:314 BGT @UNKNOWN34
    case 0xC23427: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler.asm:314 BGT @UNKNOWN34
    case 0xC23429: {
        Instruction step(cpu, 0xB0, 0x00006Du, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/menu_handler.asm:315 LDX #5
    case 0xC2342B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:315 LDX #5
    // Overlapping static entry reached from 0xC2342B.
    case 0xC2342D: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:316 LDA #0
    case 0xC2342E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:316 LDA #0
    // Overlapping static entry reached from 0xC2342E.
    case 0xC23430: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:317 JSL AUTOHEALING
    case 0xC23431: {
        Instruction step(cpu, 0x22, 0xC4A0CFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:318 SEP #PROC_FLAGS::ACCUM8
    case 0xC23435: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:319 LDY #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    case 0xC23437: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000082u : 0x00A982u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:319 LDY #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    // Overlapping static entry reached from 0xC23437.
    case 0xC23439: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000084u : 0x001C84u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:320 STY @LOCAL04
    case 0xC2343A: {
        Instruction step(cpu, 0x84, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:320 STY @LOCAL04
    // Overlapping static entry reached from 0xC23439.
    case 0xC2343B: {
        Instruction step(cpu, 0x1C, 0x000099u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:321 STA __BSS_START__,Y
    case 0xC2343C: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:321 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC2343B.
    case 0xC2343E: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:322 REP #PROC_FLAGS::ACCUM8
    case 0xC2343F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:323 AND #$00FF
    case 0xC23441: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:323 AND #$00FF
    // Overlapping static entry reached from 0xC23441.
    case 0xC23443: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:324 BNEL @UNKNOWN21
    case 0xC23444: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler.asm:324 BNEL @UNKNOWN21
    case 0xC23446: {
        Instruction step(cpu, 0x4C, 0x003326u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:325 LDX #4
    case 0xC23449: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:325 LDX #4
    // Overlapping static entry reached from 0xC23449.
    case 0xC2344B: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:326 LDA #0
    case 0xC2344C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:326 LDA #0
    // Overlapping static entry reached from 0xC2344C.
    case 0xC2344E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:327 JSL AUTOHEALING
    case 0xC2344F: {
        Instruction step(cpu, 0x22, 0xC4A0CFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:328 SEP #PROC_FLAGS::ACCUM8
    case 0xC23453: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:329 LDY @LOCAL04
    case 0xC23455: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:330 STA __BSS_START__,Y
    case 0xC23457: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:331 REP #PROC_FLAGS::ACCUM8
    case 0xC2345A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:332 AND #$00FF
    case 0xC2345C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:332 AND #$00FF
    // Overlapping static entry reached from 0xC2345C.
    case 0xC2345E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:333 BNEL @UNKNOWN21
    case 0xC2345F: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler.asm:333 BNEL @UNKNOWN21
    case 0xC23461: {
        Instruction step(cpu, 0x4C, 0x003326u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:334 LDX #2
    case 0xC23464: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:334 LDX #2
    // Overlapping static entry reached from 0xC23464.
    case 0xC23466: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:335 TXA
    case 0xC23467: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:336 JSL AUTOHEALING
    case 0xC23468: {
        Instruction step(cpu, 0x22, 0xC4A0CFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:337 SEP #PROC_FLAGS::ACCUM8
    case 0xC2346C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:338 LDY @LOCAL04
    case 0xC2346E: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:339 STA __BSS_START__,Y
    case 0xC23470: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:340 REP #PROC_FLAGS::ACCUM8
    case 0xC23473: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:341 AND #$00FF
    case 0xC23475: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:341 AND #$00FF
    // Overlapping static entry reached from 0xC23475.
    case 0xC23477: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:342 BNEL @UNKNOWN21
    case 0xC23478: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler.asm:342 BNEL @UNKNOWN21
    case 0xC2347A: {
        Instruction step(cpu, 0x4C, 0x003326u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:343 LDX #1
    case 0xC2347D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:343 LDX #1
    // Overlapping static entry reached from 0xC2347D.
    case 0xC2347F: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:344 LDA #3
    case 0xC23480: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:344 LDA #3
    // Overlapping static entry reached from 0xC23480.
    case 0xC23482: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:345 JSL AUTOHEALING
    case 0xC23483: {
        Instruction step(cpu, 0x22, 0xC4A0CFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:346 SEP #PROC_FLAGS::ACCUM8
    case 0xC23487: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:347 LDY @LOCAL04
    case 0xC23489: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:348 STA __BSS_START__,Y
    case 0xC2348B: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:349 REP #PROC_FLAGS::ACCUM8
    case 0xC2348E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:350 AND #$00FF
    case 0xC23490: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:350 AND #$00FF
    // Overlapping static entry reached from 0xC23490.
    case 0xC23492: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:351 BNEL @UNKNOWN21
    case 0xC23493: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler.asm:351 BNEL @UNKNOWN21
    case 0xC23495: {
        Instruction step(cpu, 0x4C, 0x003326u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:353 SEP #PROC_FLAGS::ACCUM8
    case 0xC23498: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:354 LDA #27
    case 0xC2349A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Bu : 0x008D1Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:355 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC2349C: {
        Instruction step(cpu, 0x8D, 0x00A97Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:355 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC2349A.
    case 0xC2349D: {
        Instruction step(cpu, 0x7E, 0x00C2A9u, 3u, AddressMode::AbsoluteIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // src/battle/menu_handler.asm:356 REP #PROC_FLAGS::ACCUM8
    case 0xC2349F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:356 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2349D.
    case 0xC234A0: {
        Instruction step(cpu, 0x20, 0x0024A9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/menu_handler.asm:357 LDA #36
    case 0xC234A1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000024u : 0x000024u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:357 LDA #36
    // Overlapping static entry reached from 0xC234A1.
    case 0xC234A3: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:358 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC234A4: {
        Instruction step(cpu, 0x8D, 0x00A97Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:359 LDX #27
    case 0xC234A7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:359 LDX #27
    // Overlapping static entry reached from 0xC234A7.
    case 0xC234A9: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:360 LDA @LOCAL09
    case 0xC234AA: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:361 JSL CHECK_IF_PSI_KNOWN
    case 0xC234AC: {
        Instruction step(cpu, 0x22, 0xC45ECEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:362 CMP #0
    case 0xC234B0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:362 CMP #0
    // Overlapping static entry reached from 0xC234B0.
    case 0xC234B2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:363 BEQ @UNKNOWN38
    case 0xC234B3: {
        Instruction step(cpu, 0xF0, 0x000064u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:364 LDY #char_struct::current_pp_target
    case 0xC234B5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Du : 0x00004Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:364 LDY #char_struct::current_pp_target
    // Overlapping static entry reached from 0xC234B5.
    case 0xC234B7: {
        Instruction step(cpu, 0x00, 0x0000AFu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:365 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_HEALING_ALPHA) + battle_action::pp_cost
    case 0xC234B8: {
        Instruction step(cpu, 0xAF, 0xD57D1Bu, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:366 AND #$00FF
    case 0xC234BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:366 AND #$00FF
    // Overlapping static entry reached from 0xC234BC.
    case 0xC234BE: {
        Instruction step(cpu, 0x00, 0x0000D1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:367 CMP (@LOCAL07),Y
    case 0xC234BF: {
        Instruction step(cpu, 0xD1, 0x000022u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:368 BGT @UNKNOWN38
    case 0xC234C1: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler.asm:368 BGT @UNKNOWN38
    case 0xC234C3: {
        Instruction step(cpu, 0xB0, 0x000054u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/menu_handler.asm:369 LDX #7
    case 0xC234C5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:369 LDX #7
    // Overlapping static entry reached from 0xC234C5.
    case 0xC234C7: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:370 LDA #0
    case 0xC234C8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:370 LDA #0
    // Overlapping static entry reached from 0xC234C8.
    case 0xC234CA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:371 JSL AUTOHEALING
    case 0xC234CB: {
        Instruction step(cpu, 0x22, 0xC4A0CFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:372 SEP #PROC_FLAGS::ACCUM8
    case 0xC234CF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:373 LDY #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    case 0xC234D1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000082u : 0x00A982u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:373 LDY #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    // Overlapping static entry reached from 0xC234D1.
    case 0xC234D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000084u : 0x001E84u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:374 STY @LOCAL05
    case 0xC234D4: {
        Instruction step(cpu, 0x84, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:374 STY @LOCAL05
    // Overlapping static entry reached from 0xC234D3.
    case 0xC234D5: {
        Instruction step(cpu, 0x1E, 0x000099u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/battle/menu_handler.asm:375 STA __BSS_START__,Y
    case 0xC234D6: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:375 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC234D5.
    case 0xC234D8: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:376 REP #PROC_FLAGS::ACCUM8
    case 0xC234D9: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:377 AND #$00FF
    case 0xC234DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:377 AND #$00FF
    // Overlapping static entry reached from 0xC234DB.
    case 0xC234DD: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:378 BNEL @UNKNOWN21
    case 0xC234DE: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler.asm:378 BNEL @UNKNOWN21
    case 0xC234E0: {
        Instruction step(cpu, 0x4C, 0x003326u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:379 LDX #6
    case 0xC234E3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:379 LDX #6
    // Overlapping static entry reached from 0xC234E3.
    case 0xC234E5: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:380 LDA #0
    case 0xC234E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:380 LDA #0
    // Overlapping static entry reached from 0xC234E6.
    case 0xC234E8: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:381 JSL AUTOHEALING
    case 0xC234E9: {
        Instruction step(cpu, 0x22, 0xC4A0CFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:382 SEP #PROC_FLAGS::ACCUM8
    case 0xC234ED: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:383 LDY @LOCAL05
    case 0xC234EF: {
        Instruction step(cpu, 0xA4, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:384 STA __BSS_START__,Y
    case 0xC234F1: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:385 REP #PROC_FLAGS::ACCUM8
    case 0xC234F4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:386 AND #$00FF
    case 0xC234F6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:386 AND #$00FF
    // Overlapping static entry reached from 0xC234F6.
    case 0xC234F8: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:387 BNEL @UNKNOWN21
    case 0xC234F9: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler.asm:387 BNEL @UNKNOWN21
    case 0xC234FB: {
        Instruction step(cpu, 0x4C, 0x003326u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:388 LDX #1
    case 0xC234FE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:388 LDX #1
    // Overlapping static entry reached from 0xC234FE.
    case 0xC23500: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:389 LDA #2
    case 0xC23501: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:389 LDA #2
    // Overlapping static entry reached from 0xC23501.
    case 0xC23503: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:390 JSL AUTOHEALING
    case 0xC23504: {
        Instruction step(cpu, 0x22, 0xC4A0CFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:391 SEP #PROC_FLAGS::ACCUM8
    case 0xC23508: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:392 LDY @LOCAL05
    case 0xC2350A: {
        Instruction step(cpu, 0xA4, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:393 STA __BSS_START__,Y
    case 0xC2350C: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:394 REP #PROC_FLAGS::ACCUM8
    case 0xC2350F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:395 AND #$00FF
    case 0xC23511: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:395 AND #$00FF
    // Overlapping static entry reached from 0xC23511.
    case 0xC23513: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:396 BNEL @UNKNOWN21
    case 0xC23514: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler.asm:396 BNEL @UNKNOWN21
    case 0xC23516: {
        Instruction step(cpu, 0x4C, 0x003326u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:398 LDA @LOCAL06
    case 0xC23519: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:399 BEQ @UNKNOWN39
    case 0xC2351B: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:400 CMP #1
    case 0xC2351D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:400 CMP #1
    // Overlapping static entry reached from 0xC2351D.
    case 0xC2351F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:401 BEQ @UNKNOWN40
    case 0xC23520: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:402 CMP #2
    case 0xC23522: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:402 CMP #2
    // Overlapping static entry reached from 0xC23522.
    case 0xC23524: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:403 BEQ @UNKNOWN41
    case 0xC23525: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:404 BRA @UNKNOWN42
    case 0xC23527: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler.asm:406 LDA #4
    case 0xC23529: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:406 LDA #4
    // Overlapping static entry reached from 0xC23529.
    case 0xC2352B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:407 STA @LOCAL03
    case 0xC2352C: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:408 BRA @UNKNOWN42
    case 0xC2352E: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler.asm:410 LDA #5
    case 0xC23530: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:410 LDA #5
    // Overlapping static entry reached from 0xC23530.
    case 0xC23532: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:411 STA @LOCAL03
    case 0xC23533: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:412 BRA @UNKNOWN42
    case 0xC23535: {
        Instruction step(cpu, 0x80, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler.asm:414 LDA #1
    case 0xC23537: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:414 LDA #1
    // Overlapping static entry reached from 0xC23537.
    case 0xC23539: {
        Instruction step(cpu, 0x00, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:415 JMP @UNKNOWN113
    case 0xC2353A: {
        Instruction step(cpu, 0x4C, 0x003B64u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:417 LDA @LOCAL09
    case 0xC2353D: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:418 SEP #PROC_FLAGS::ACCUM8
    case 0xC2353F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:419 STA BATTLE_MENU_SELECTION
    case 0xC23541: {
        Instruction step(cpu, 0x8D, 0x00A97Du, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:420 STZ BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC23544: {
        Instruction step(cpu, 0x9C, 0x00A97Eu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:421 REP #PROC_FLAGS::ACCUM8
    case 0xC23547: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:422 LDA @LOCAL03
    case 0xC23549: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:423 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC2354B: {
        Instruction step(cpu, 0x8D, 0x00A97Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:424 SEP #PROC_FLAGS::ACCUM8
    case 0xC2354E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:425 LDA #17
    case 0xC23550: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000011u : 0x008D11u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:426 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    case 0xC23552: {
        Instruction step(cpu, 0x8D, 0x00A981u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:426 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC23550.
    case 0xC23553: {
        Instruction step(cpu, 0x81, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:427 REP #PROC_FLAGS::ACCUM8
    case 0xC23555: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:428 LDA NUM_BATTLERS_IN_FRONT_ROW
    case 0xC23557: {
        Instruction step(cpu, 0xAD, 0x00AD56u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:429 CLC
    case 0xC2355A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/menu_handler.asm:430 ADC NUM_BATTLERS_IN_BACK_ROW
    case 0xC2355B: {
        Instruction step(cpu, 0x6D, 0x00AD58u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/menu_handler.asm:431 JSR RAND_LIMIT
    case 0xC2355E: {
        Instruction step(cpu, 0x20, 0x006A2Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/menu_handler.asm:432 SEP #PROC_FLAGS::ACCUM8
    case 0xC23561: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:433 INC
    case 0xC23563: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/menu_handler.asm:434 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC23564: {
        Instruction step(cpu, 0x8D, 0x00A982u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:435 REP #PROC_FLAGS::ACCUM8
    case 0xC23567: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:436 LDA @LOCAL03
    case 0xC23569: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:437 JMP @UNKNOWN113
    case 0xC2356B: {
        Instruction step(cpu, 0x4C, 0x003B64u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:439 JSL UNKNOWN_EF0262
    case 0xC2356E: {
        Instruction step(cpu, 0x22, 0xEF0262u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:440 LDA @LOCAL09
    case 0xC23572: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:441 CMP #PARTY_MEMBER::PAULA
    case 0xC23574: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:441 CMP #PARTY_MEMBER::PAULA
    // Overlapping static entry reached from 0xC23574.
    case 0xC23576: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:442 BEQ @UNKNOWN44
    case 0xC23577: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:443 LDA @LOCAL09
    case 0xC23579: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:444 CMP #PARTY_MEMBER::POO
    case 0xC2357B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:444 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC2357B.
    case 0xC2357D: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:445 BNE @UNKNOWN45
    case 0xC2357E: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:447 LDA #1
    case 0xC23580: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:447 LDA #1
    // Overlapping static entry reached from 0xC23580.
    case 0xC23582: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:448 STA @LOCAL03
    case 0xC23583: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:449 BRA @UNKNOWN46
    case 0xC23585: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler.asm:451 STZ @LOCAL03
    case 0xC23587: {
        Instruction step(cpu, 0x64, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:453 LDA @VIRTUAL04
    case 0xC23589: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:454 BNE @UNKNOWN47
    case 0xC2358B: {
        Instruction step(cpu, 0xD0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:455 INC @LOCAL03
    case 0xC2358D: {
        Instruction step(cpu, 0xE6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:457 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    case 0xC2358F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F2u : 0x00A1F2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:457 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    // Overlapping static entry reached from 0xC2358F.
    case 0xC23591: {
        Instruction step(cpu, 0xA1, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:457 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    case 0xC23592: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:457 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    // Overlapping static entry reached from 0xC23591.
    case 0xC23593: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:457 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    case 0xC23594: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:457 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    // Overlapping static entry reached from 0xC23593.
    case 0xC23595: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:457 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    // Overlapping static entry reached from 0xC23594.
    case 0xC23596: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler.asm:457 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    case 0xC23597: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:458 LDA @LOCAL03
    case 0xC23599: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:459 CLC
    case 0xC2359B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/menu_handler.asm:460 ADC @VIRTUAL06
    case 0xC2359C: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/menu_handler.asm:461 STA @VIRTUAL06
    case 0xC2359E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:462 STA @LOCAL02
    case 0xC235A0: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:463 LDA @VIRTUAL06+2
    case 0xC235A2: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:464 STA @LOCAL02+2
    case 0xC235A4: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:465 LDA [@VIRTUAL06]
    case 0xC235A6: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:466 AND #$00FF
    case 0xC235A8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:466 AND #$00FF
    // Overlapping static entry reached from 0xC235A8.
    case 0xC235AA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:467 JSL REDIRECT_CREATE_WINDOW
    case 0xC235AB: {
        Instruction step(cpu, 0x22, 0xC1DD47u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:468 LDA @LOCAL09
    case 0xC235AF: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:469 DEC
    case 0xC235B1: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/menu_handler.asm:470 LDY #.SIZEOF(char_struct)
    case 0xC235B2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Fu : 0x00005Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:470 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC235B2.
    case 0xC235B4: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:471 JSL MULT168
    case 0xC235B5: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:472 CLC
    case 0xC235B9: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/menu_handler.asm:473 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC235BA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000CEu : 0x0099CEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/menu_handler.asm:473 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC235BA.
    case 0xC235BC: {
        Instruction step(cpu, 0x99, 0x000685u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/menu_handler.asm:474 PROMOTENEARPTRA @VIRTUAL06
    case 0xC235BD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/menu_handler.asm:474 PROMOTENEARPTRA @VIRTUAL06
    case 0xC235BF: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/menu_handler.asm:474 PROMOTENEARPTRA @VIRTUAL06
    case 0xC235C0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/menu_handler.asm:474 PROMOTENEARPTRA @VIRTUAL06
    case 0xC235C2: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/menu_handler.asm:474 PROMOTENEARPTRA @VIRTUAL06
    case 0xC235C3: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/menu_handler.asm:474 PROMOTENEARPTRA @VIRTUAL06
    case 0xC235C5: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:475 REP #PROC_FLAGS::ACCUM8
    case 0xC235C7: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler.asm:476 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC235C9: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler.asm:476 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC235CB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler.asm:476 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC235CD: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:476 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC235CF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:477 LDX #5
    case 0xC235D1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:477 LDX #5
    // Overlapping static entry reached from 0xC235D1.
    case 0xC235D3: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler.asm:478 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC235D4: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler.asm:478 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC235D6: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler.asm:478 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC235D8: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:478 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC235DA: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:479 LDA [@VIRTUAL06]
    case 0xC235DC: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:480 AND #$00FF
    case 0xC235DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:480 AND #$00FF
    // Overlapping static entry reached from 0xC235DE.
    case 0xC235E0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:481 JSL SET_WINDOW_TITLE
    case 0xC235E1: {
        Instruction step(cpu, 0x22, 0xC2032Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:482 LDA @LOCAL06
    case 0xC235E5: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:483 BEQ @UNKNOWN48
    case 0xC235E7: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:484 CMP #1
    case 0xC235E9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:484 CMP #1
    // Overlapping static entry reached from 0xC235E9.
    case 0xC235EB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:485 BEQ @UNKNOWN49
    case 0xC235EC: {
        Instruction step(cpu, 0xF0, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:486 CMP #2
    case 0xC235EE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:486 CMP #2
    // Overlapping static entry reached from 0xC235EE.
    case 0xC235F0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:487 BEQ @UNKNOWN50
    case 0xC235F1: {
        Instruction step(cpu, 0xF0, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:488 BRA @UNKNOWN51
    case 0xC235F3: {
        Instruction step(cpu, 0x80, 0x000061u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:490 LOADPTR BATTLE_MENU_TEXT_BASH, @LOCAL00
    case 0xC235F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x009FE1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:490 LOADPTR BATTLE_MENU_TEXT_BASH, @LOCAL00
    // Overlapping static entry reached from 0xC235F5.
    case 0xC235F7: {
        Instruction step(cpu, 0x9F, 0xA90E85u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:490 LOADPTR BATTLE_MENU_TEXT_BASH, @LOCAL00
    case 0xC235F8: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:490 LOADPTR BATTLE_MENU_TEXT_BASH, @LOCAL00
    case 0xC235FA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:490 LOADPTR BATTLE_MENU_TEXT_BASH, @LOCAL00
    // Overlapping static entry reached from 0xC235F7.
    case 0xC235FB: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:490 LOADPTR BATTLE_MENU_TEXT_BASH, @LOCAL00
    // Overlapping static entry reached from 0xC235FA.
    case 0xC235FC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler.asm:490 LOADPTR BATTLE_MENU_TEXT_BASH, @LOCAL00
    case 0xC235FD: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:491 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC235FF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:491 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC235FF.
    case 0xC23601: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler.asm:491 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23602: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:491 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23604: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:491 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC23604.
    case 0xC23606: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:491 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23607: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:492 LDY #0
    case 0xC23609: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:492 LDY #0
    // Overlapping static entry reached from 0xC23609.
    case 0xC2360B: {
        Instruction step(cpu, 0x00, 0x0000BBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:493 TYX
    case 0xC2360C: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:494 LDA #1
    case 0xC2360D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:494 LDA #1
    // Overlapping static entry reached from 0xC2360D.
    case 0xC2360F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:495 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC23610: {
        Instruction step(cpu, 0x22, 0xC1DDDAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:496 BRA @UNKNOWN51
    case 0xC23614: {
        Instruction step(cpu, 0x80, 0x000040u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:498 LOADPTR BATTLE_MENU_TEXT_SHOOT, @LOCAL00
    case 0xC23616: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000041u : 0x00A041u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:498 LOADPTR BATTLE_MENU_TEXT_SHOOT, @LOCAL00
    // Overlapping static entry reached from 0xC23616.
    case 0xC23618: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000085u : 0x000E85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:498 LOADPTR BATTLE_MENU_TEXT_SHOOT, @LOCAL00
    case 0xC23619: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:498 LOADPTR BATTLE_MENU_TEXT_SHOOT, @LOCAL00
    // Overlapping static entry reached from 0xC23618.
    case 0xC2361A: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:498 LOADPTR BATTLE_MENU_TEXT_SHOOT, @LOCAL00
    case 0xC2361B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:498 LOADPTR BATTLE_MENU_TEXT_SHOOT, @LOCAL00
    // Overlapping static entry reached from 0xC2361B.
    case 0xC2361D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler.asm:498 LOADPTR BATTLE_MENU_TEXT_SHOOT, @LOCAL00
    case 0xC2361E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:499 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23620: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:499 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC23620.
    case 0xC23622: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler.asm:499 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23623: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:499 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23625: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:499 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC23625.
    case 0xC23627: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:499 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23628: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:500 LDY #0
    case 0xC2362A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:500 LDY #0
    // Overlapping static entry reached from 0xC2362A.
    case 0xC2362C: {
        Instruction step(cpu, 0x00, 0x0000BBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:501 TYX
    case 0xC2362D: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:502 LDA #1
    case 0xC2362E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:502 LDA #1
    // Overlapping static entry reached from 0xC2362E.
    case 0xC23630: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:503 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC23631: {
        Instruction step(cpu, 0x22, 0xC1DDDAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:504 BRA @UNKNOWN51
    case 0xC23635: {
        Instruction step(cpu, 0x80, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:506 LOADPTR BATTLE_MENU_TEXT_DO_NOTHING, @LOCAL00
    case 0xC23637: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000081u : 0x00A081u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:506 LOADPTR BATTLE_MENU_TEXT_DO_NOTHING, @LOCAL00
    // Overlapping static entry reached from 0xC23637.
    case 0xC23639: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000085u : 0x000E85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:506 LOADPTR BATTLE_MENU_TEXT_DO_NOTHING, @LOCAL00
    case 0xC2363A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:506 LOADPTR BATTLE_MENU_TEXT_DO_NOTHING, @LOCAL00
    // Overlapping static entry reached from 0xC23639.
    case 0xC2363B: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:506 LOADPTR BATTLE_MENU_TEXT_DO_NOTHING, @LOCAL00
    case 0xC2363C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:506 LOADPTR BATTLE_MENU_TEXT_DO_NOTHING, @LOCAL00
    // Overlapping static entry reached from 0xC2363C.
    case 0xC2363E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler.asm:506 LOADPTR BATTLE_MENU_TEXT_DO_NOTHING, @LOCAL00
    case 0xC2363F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:507 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23641: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:507 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC23641.
    case 0xC23643: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler.asm:507 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23644: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:507 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23646: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:507 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC23646.
    case 0xC23648: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:507 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23649: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:508 LDY #0
    case 0xC2364B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:508 LDY #0
    // Overlapping static entry reached from 0xC2364B.
    case 0xC2364D: {
        Instruction step(cpu, 0x00, 0x0000BBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:509 TYX
    case 0xC2364E: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:510 LDA #1
    case 0xC2364F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:510 LDA #1
    // Overlapping static entry reached from 0xC2364F.
    case 0xC23651: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:511 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC23652: {
        Instruction step(cpu, 0x22, 0xC1DDDAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:513 LDA @LOCAL06
    case 0xC23656: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:514 CMP #2
    case 0xC23658: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:514 CMP #2
    // Overlapping static entry reached from 0xC23658.
    case 0xC2365A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:515 BEQL @UNKNOWN53
    case 0xC2365B: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:515 BEQL @UNKNOWN53
    case 0xC2365D: {
        Instruction step(cpu, 0x4C, 0x0036E2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:516 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL0A
    case 0xC23660: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x009FE1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:516 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC23660.
    case 0xC23662: {
        Instruction step(cpu, 0x9F, 0xA90A85u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:516 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL0A
    case 0xC23663: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:516 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL0A
    case 0xC23665: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:516 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC23662.
    case 0xC23666: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:516 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC23665.
    case 0xC23667: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler.asm:516 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL0A
    case 0xC23668: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:517 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC2366A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:517 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC2366A.
    case 0xC2366C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler.asm:517 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC2366D: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:517 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC2366F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:517 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC2366F.
    case 0xC23671: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:517 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC23672: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler.asm:518 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC23674: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler.asm:518 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC23676: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler.asm:518 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC23678: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:518 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2367A: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:519 LDA #16
    case 0xC2367C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:519 LDA #16
    // Overlapping static entry reached from 0xC2367C.
    case 0xC2367E: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/menu_handler.asm:520 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2367F: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/menu_handler.asm:520 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC23681: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/menu_handler.asm:520 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC23683: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/menu_handler.asm:520 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC23685: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:521 CLC
    case 0xC23687: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/menu_handler.asm:522 ADC @VIRTUAL06
    case 0xC23688: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/menu_handler.asm:523 STA @VIRTUAL06
    case 0xC2368A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:524 STA @LOCAL00
    case 0xC2368C: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:525 LDA @VIRTUAL06+2
    case 0xC2368E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:526 STA @LOCAL00+2
    case 0xC23690: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler.asm:527 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC23692: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler.asm:527 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC23694: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler.asm:527 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC23696: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:527 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC23698: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler.asm:528 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2369A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler.asm:528 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2369C: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler.asm:528 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2369E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:528 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC236A0: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:529 LDY #0
    case 0xC236A2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:529 LDY #0
    // Overlapping static entry reached from 0xC236A2.
    case 0xC236A4: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:530 LDX #6
    case 0xC236A5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:530 LDX #6
    // Overlapping static entry reached from 0xC236A5.
    case 0xC236A7: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:531 LDA #2
    case 0xC236A8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:531 LDA #2
    // Overlapping static entry reached from 0xC236A8.
    case 0xC236AA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:532 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC236AB: {
        Instruction step(cpu, 0x22, 0xC1DDDAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:533 LDA #64
    case 0xC236AF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:533 LDA #64
    // Overlapping static entry reached from 0xC236AF.
    case 0xC236B1: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/menu_handler.asm:534 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC236B2: {
        Instruction step(cpu, 0xA6, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/menu_handler.asm:534 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC236B4: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/menu_handler.asm:534 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC236B6: {
        Instruction step(cpu, 0xA6, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/menu_handler.asm:534 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC236B8: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:535 CLC
    case 0xC236BA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/menu_handler.asm:536 ADC @VIRTUAL06
    case 0xC236BB: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/menu_handler.asm:537 STA @VIRTUAL06
    case 0xC236BD: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:538 STA @LOCAL00
    case 0xC236BF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:539 LDA @VIRTUAL06+2
    case 0xC236C1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:540 STA @LOCAL00+2
    case 0xC236C3: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler.asm:541 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC236C5: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler.asm:541 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC236C7: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler.asm:541 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC236C9: {
        Instruction step(cpu, 0xA5, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:541 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC236CB: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler.asm:542 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC236CD: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler.asm:542 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC236CF: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler.asm:542 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC236D1: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:542 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC236D3: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:543 LDY #1
    case 0xC236D5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:543 LDY #1
    // Overlapping static entry reached from 0xC236D5.
    case 0xC236D7: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:544 LDX #6
    case 0xC236D8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:544 LDX #6
    // Overlapping static entry reached from 0xC236D8.
    case 0xC236DA: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:545 LDA #5
    case 0xC236DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:545 LDA #5
    // Overlapping static entry reached from 0xC236DB.
    case 0xC236DD: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:546 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC236DE: {
        Instruction step(cpu, 0x22, 0xC1DDDAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:548 LDA @VIRTUAL04
    case 0xC236E2: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:549 BNEL @UNKNOWN59
    case 0xC236E4: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler.asm:549 BNEL @UNKNOWN59
    case 0xC236E6: {
        Instruction step(cpu, 0x4C, 0x003784u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:550 LDA @LOCAL03
    case 0xC236E9: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:551 CMP #2
    case 0xC236EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:551 CMP #2
    // Overlapping static entry reached from 0xC236EB.
    case 0xC236ED: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:552 BNE @UNKNOWN55
    case 0xC236EE: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:553 LDX #16
    case 0xC236F0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:553 LDX #16
    // Overlapping static entry reached from 0xC236F0.
    case 0xC236F2: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:554 BRA @UNKNOWN56
    case 0xC236F3: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler.asm:556 LDX #11
    case 0xC236F5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:556 LDX #11
    // Overlapping static entry reached from 0xC236F5.
    case 0xC236F7: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:558 STX @VIRTUAL04
    case 0xC236F8: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:559 LDA @LOCAL09
    case 0xC236FA: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:560 CMP #PARTY_MEMBER::PAULA
    case 0xC236FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:560 CMP #PARTY_MEMBER::PAULA
    // Overlapping static entry reached from 0xC236FC.
    case 0xC236FE: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:561 BEQ @UNKNOWN57
    case 0xC236FF: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:562 LDA @LOCAL09
    case 0xC23701: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:563 CMP #PARTY_MEMBER::POO
    case 0xC23703: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:563 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC23703.
    case 0xC23705: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:564 BNE @UNKNOWN58
    case 0xC23706: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:566 INC @VIRTUAL04
    case 0xC23708: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/menu_handler.asm:567 INC @VIRTUAL04
    case 0xC2370A: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:569 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    case 0xC2370C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E1u : 0x009FE1u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:569 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC2370C.
    case 0xC2370E: {
        Instruction step(cpu, 0x9F, 0xA90685u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:569 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    case 0xC2370F: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:569 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    case 0xC23711: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:569 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC2370E.
    case 0xC23712: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:569 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC23711.
    case 0xC23713: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler.asm:569 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    case 0xC23714: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler.asm:570 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC23716: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler.asm:570 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC23718: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler.asm:570 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2371A: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:570 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2371C: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:571 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC2371E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:571 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2371E.
    case 0xC23720: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler.asm:571 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23721: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:571 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23723: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:571 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC23723.
    case 0xC23725: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:571 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23726: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:572 LDA #32
    case 0xC23728: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:572 LDA #32
    // Overlapping static entry reached from 0xC23728.
    case 0xC2372A: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:573 CLC
    case 0xC2372B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/menu_handler.asm:574 ADC @VIRTUAL06
    case 0xC2372C: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/menu_handler.asm:575 STA @VIRTUAL06
    case 0xC2372E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:576 STA @LOCAL00
    case 0xC23730: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:577 LDA @VIRTUAL06+2
    case 0xC23732: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:578 STA @LOCAL00+2
    case 0xC23734: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler.asm:579 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC23736: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler.asm:579 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC23738: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler.asm:579 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2373A: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:579 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2373C: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler.asm:580 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2373E: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler.asm:580 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC23740: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler.asm:580 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC23742: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:580 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC23744: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:581 LDY #0
    case 0xC23746: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:581 LDY #0
    // Overlapping static entry reached from 0xC23746.
    case 0xC23748: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:582 LDX @VIRTUAL04
    case 0xC23749: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:583 LDA #3
    case 0xC2374B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:583 LDA #3
    // Overlapping static entry reached from 0xC2374B.
    case 0xC2374D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:584 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC2374E: {
        Instruction step(cpu, 0x22, 0xC1DDDAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:585 LDA #128
    case 0xC23752: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:585 LDA #128
    // Overlapping static entry reached from 0xC23752.
    case 0xC23754: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/menu_handler.asm:586 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC23755: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/menu_handler.asm:586 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC23757: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/menu_handler.asm:586 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC23759: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/menu_handler.asm:586 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC2375B: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:587 CLC
    case 0xC2375D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/menu_handler.asm:588 ADC @VIRTUAL06
    case 0xC2375E: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/menu_handler.asm:589 STA @VIRTUAL06
    case 0xC23760: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:590 STA @LOCAL00
    case 0xC23762: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:591 LDA @VIRTUAL06+2
    case 0xC23764: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:592 STA @LOCAL00+2
    case 0xC23766: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler.asm:593 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC23768: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler.asm:593 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2376A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler.asm:593 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2376C: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:593 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2376E: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler.asm:594 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC23770: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler.asm:594 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC23772: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler.asm:594 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC23774: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:594 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC23776: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:595 LDY #1
    case 0xC23778: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:595 LDY #1
    // Overlapping static entry reached from 0xC23778.
    case 0xC2377A: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:596 LDX @VIRTUAL04
    case 0xC2377B: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:597 LDA #6
    case 0xC2377D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:597 LDA #6
    // Overlapping static entry reached from 0xC2377D.
    case 0xC2377F: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:598 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC23780: {
        Instruction step(cpu, 0x22, 0xC1DDDAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:600 LDA @LOCAL09
    case 0xC23784: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:601 CMP #PARTY_MEMBER::JEFF
    case 0xC23786: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:601 CMP #PARTY_MEMBER::JEFF
    // Overlapping static entry reached from 0xC23786.
    case 0xC23788: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:602 BNE @UNKNOWN60
    case 0xC23789: {
        Instruction step(cpu, 0xD0, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:603 LOADPTR BATTLE_MENU_TEXT_SPY, @LOCAL00
    case 0xC2378B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000051u : 0x00A051u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:603 LOADPTR BATTLE_MENU_TEXT_SPY, @LOCAL00
    // Overlapping static entry reached from 0xC2378B.
    case 0xC2378D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000085u : 0x000E85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:603 LOADPTR BATTLE_MENU_TEXT_SPY, @LOCAL00
    case 0xC2378E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:603 LOADPTR BATTLE_MENU_TEXT_SPY, @LOCAL00
    // Overlapping static entry reached from 0xC2378D.
    case 0xC2378F: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:603 LOADPTR BATTLE_MENU_TEXT_SPY, @LOCAL00
    case 0xC23790: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:603 LOADPTR BATTLE_MENU_TEXT_SPY, @LOCAL00
    // Overlapping static entry reached from 0xC23790.
    case 0xC23792: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler.asm:603 LOADPTR BATTLE_MENU_TEXT_SPY, @LOCAL00
    case 0xC23793: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:604 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23795: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:604 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC23795.
    case 0xC23797: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler.asm:604 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23798: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:604 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC2379A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:604 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC2379A.
    case 0xC2379C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:604 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC2379D: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:605 LDY #1
    case 0xC2379F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:605 LDY #1
    // Overlapping static entry reached from 0xC2379F.
    case 0xC237A1: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:606 LDX #0
    case 0xC237A2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:606 LDX #0
    // Overlapping static entry reached from 0xC237A2.
    case 0xC237A4: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:607 LDA #4
    case 0xC237A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:607 LDA #4
    // Overlapping static entry reached from 0xC237A5.
    case 0xC237A7: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:608 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC237A8: {
        Instruction step(cpu, 0x22, 0xC1DDDAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:609 BRA @UNKNOWN61
    case 0xC237AC: {
        Instruction step(cpu, 0x80, 0x00002Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler.asm:611 LDY #char_struct::afflictions+4
    case 0xC237AE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000012u : 0x000012u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:611 LDY #char_struct::afflictions+4
    // Overlapping static entry reached from 0xC237AE.
    case 0xC237B0: {
        Instruction step(cpu, 0x00, 0x0000B1u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:612 LDA (@LOCAL07),Y
    case 0xC237B1: {
        Instruction step(cpu, 0xB1, 0x000022u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:613 AND #$00FF
    case 0xC237B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:613 AND #$00FF
    // Overlapping static entry reached from 0xC237B3.
    case 0xC237B5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:614 BNE @UNKNOWN61
    case 0xC237B6: {
        Instruction step(cpu, 0xD0, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:615 LOADPTR BATTLE_MENU_TEXT_PSI, @LOCAL00
    case 0xC237B8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000011u : 0x00A011u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:615 LOADPTR BATTLE_MENU_TEXT_PSI, @LOCAL00
    // Overlapping static entry reached from 0xC237B8.
    case 0xC237BA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000085u : 0x000E85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:615 LOADPTR BATTLE_MENU_TEXT_PSI, @LOCAL00
    case 0xC237BB: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:615 LOADPTR BATTLE_MENU_TEXT_PSI, @LOCAL00
    // Overlapping static entry reached from 0xC237BA.
    case 0xC237BC: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:615 LOADPTR BATTLE_MENU_TEXT_PSI, @LOCAL00
    case 0xC237BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:615 LOADPTR BATTLE_MENU_TEXT_PSI, @LOCAL00
    // Overlapping static entry reached from 0xC237BD.
    case 0xC237BF: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler.asm:615 LOADPTR BATTLE_MENU_TEXT_PSI, @LOCAL00
    case 0xC237C0: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:616 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC237C2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:616 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC237C2.
    case 0xC237C4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler.asm:616 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC237C5: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:616 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC237C7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:616 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC237C7.
    case 0xC237C9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:616 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC237CA: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:617 LDY #1
    case 0xC237CC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:617 LDY #1
    // Overlapping static entry reached from 0xC237CC.
    case 0xC237CE: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:618 LDX #0
    case 0xC237CF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:618 LDX #0
    // Overlapping static entry reached from 0xC237CF.
    case 0xC237D1: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:619 LDA #4
    case 0xC237D2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:619 LDA #4
    // Overlapping static entry reached from 0xC237D2.
    case 0xC237D4: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:620 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC237D5: {
        Instruction step(cpu, 0x22, 0xC1DDDAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:622 LDA @LOCAL09
    case 0xC237D9: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:623 CMP #PARTY_MEMBER::PAULA
    case 0xC237DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:623 CMP #PARTY_MEMBER::PAULA
    // Overlapping static entry reached from 0xC237DB.
    case 0xC237DD: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:624 BNE @UNKNOWN62
    case 0xC237DE: {
        Instruction step(cpu, 0xD0, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:625 LOADPTR BATTLE_MENU_TEXT_PRAY, @LOCAL00
    case 0xC237E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000031u : 0x00A031u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:625 LOADPTR BATTLE_MENU_TEXT_PRAY, @LOCAL00
    // Overlapping static entry reached from 0xC237E0.
    case 0xC237E2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000085u : 0x000E85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:625 LOADPTR BATTLE_MENU_TEXT_PRAY, @LOCAL00
    case 0xC237E3: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:625 LOADPTR BATTLE_MENU_TEXT_PRAY, @LOCAL00
    // Overlapping static entry reached from 0xC237E2.
    case 0xC237E4: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:625 LOADPTR BATTLE_MENU_TEXT_PRAY, @LOCAL00
    case 0xC237E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:625 LOADPTR BATTLE_MENU_TEXT_PRAY, @LOCAL00
    // Overlapping static entry reached from 0xC237E5.
    case 0xC237E7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler.asm:625 LOADPTR BATTLE_MENU_TEXT_PRAY, @LOCAL00
    case 0xC237E8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:626 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC237EA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:626 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC237EA.
    case 0xC237EC: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler.asm:626 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC237ED: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:626 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC237EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:626 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC237EF.
    case 0xC237F1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:626 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC237F2: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:627 LDY #0
    case 0xC237F4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:627 LDY #0
    // Overlapping static entry reached from 0xC237F4.
    case 0xC237F6: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:628 LDX #11
    case 0xC237F7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:628 LDX #11
    // Overlapping static entry reached from 0xC237F7.
    case 0xC237F9: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:629 LDA #7
    case 0xC237FA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:629 LDA #7
    // Overlapping static entry reached from 0xC237FA.
    case 0xC237FC: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:630 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC237FD: {
        Instruction step(cpu, 0x22, 0xC1DDDAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:632 LDA @LOCAL09
    case 0xC23801: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:633 CMP #PARTY_MEMBER::POO
    case 0xC23803: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:633 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC23803.
    case 0xC23805: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:634 BNE @UNKNOWN63
    case 0xC23806: {
        Instruction step(cpu, 0xD0, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:635 LOADPTR BATTLE_MENU_TEXT_MIRROR, @LOCAL00
    case 0xC23808: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000071u : 0x00A071u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler.asm:635 LOADPTR BATTLE_MENU_TEXT_MIRROR, @LOCAL00
    // Overlapping static entry reached from 0xC23808.
    case 0xC2380A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000085u : 0x000E85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:635 LOADPTR BATTLE_MENU_TEXT_MIRROR, @LOCAL00
    case 0xC2380B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler.asm:635 LOADPTR BATTLE_MENU_TEXT_MIRROR, @LOCAL00
    // Overlapping static entry reached from 0xC2380A.
    case 0xC2380C: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:635 LOADPTR BATTLE_MENU_TEXT_MIRROR, @LOCAL00
    case 0xC2380D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler.asm:635 LOADPTR BATTLE_MENU_TEXT_MIRROR, @LOCAL00
    // Overlapping static entry reached from 0xC2380D.
    case 0xC2380F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler.asm:635 LOADPTR BATTLE_MENU_TEXT_MIRROR, @LOCAL00
    case 0xC23810: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:636 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23812: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:636 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC23812.
    case 0xC23814: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler.asm:636 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23815: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:636 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23817: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler.asm:636 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC23817.
    case 0xC23819: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler.asm:636 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC2381A: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:637 LDY #0
    case 0xC2381C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:637 LDY #0
    // Overlapping static entry reached from 0xC2381C.
    case 0xC2381E: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:638 LDX #13
    case 0xC2381F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:638 LDX #13
    // Overlapping static entry reached from 0xC2381F.
    case 0xC23821: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:639 LDA #7
    case 0xC23822: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:639 LDA #7
    // Overlapping static entry reached from 0xC23822.
    case 0xC23824: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:640 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC23825: {
        Instruction step(cpu, 0x22, 0xC1DDDAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:642 LDX @LOCAL03
    case 0xC23829: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:643 LDA f:BATTLE_WINDOW_SIZES,X
    case 0xC2382B: {
        Instruction step(cpu, 0xBF, 0xC4A1F2u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:643 LDA f:BATTLE_WINDOW_SIZES,X
    // Overlapping static entry reached from 0xC2385C.
    case 0xC2382E: {
        Instruction step(cpu, 0xC4, 0x000029u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:644 AND #$00FF
    case 0xC2382F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:644 AND #$00FF
    // Overlapping static entry reached from 0xC2382E.
    case 0xC23830: {
        Instruction step(cpu, 0xFF, 0x4D2200u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/menu_handler.asm:644 AND #$00FF
    // Overlapping static entry reached from 0xC2382F.
    case 0xC23831: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:645 JSL REDIRECT_SET_WINDOW_FOCUS
    case 0xC23832: {
        Instruction step(cpu, 0x22, 0xC1DD4Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:645 JSL REDIRECT_SET_WINDOW_FOCUS
    // Overlapping static entry reached from 0xC23830.
    case 0xC23834: {
        Instruction step(cpu, 0xDD, 0x00A5C1u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:646 LDA @LOCAL08
    case 0xC23836: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:646 LDA @LOCAL08
    // Overlapping static entry reached from 0xC23834.
    case 0xC23837: {
        Instruction step(cpu, 0x24, 0x0000D0u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:647 BNE @UNKNOWN64
    case 0xC23838: {
        Instruction step(cpu, 0xD0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:647 BNE @UNKNOWN64
    // Overlapping static entry reached from 0xC23837.
    case 0xC23839: {
        Instruction step(cpu, 0x04, 0x000022u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:648 JSL REDIRECT_PRINT_MENU_ITEMS
    case 0xC2383A: {
        Instruction step(cpu, 0x22, 0xC1DE25u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:648 JSL REDIRECT_PRINT_MENU_ITEMS
    // Overlapping static entry reached from 0xC23839.
    case 0xC2383B: {
        Instruction step(cpu, 0x25, 0x0000DEu, 2u, AddressMode::DirectPage);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:648 JSL REDIRECT_PRINT_MENU_ITEMS
    // Overlapping static entry reached from 0xC2383B.
    case 0xC2383D: {
        Instruction step(cpu, 0xC1, 0x0000E6u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:650 INC @LOCAL08
    case 0xC2383E: {
        Instruction step(cpu, 0xE6, 0x000024u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/battle/menu_handler.asm:650 INC @LOCAL08
    // Overlapping static entry reached from 0xC2383D.
    case 0xC2383F: {
        Instruction step(cpu, 0x24, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:651 LDA #1
    case 0xC23840: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:651 LDA #1
    // Overlapping static entry reached from 0xC2383F.
    case 0xC23841: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:651 LDA #1
    // Overlapping static entry reached from 0xC23840.
    case 0xC23842: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:652 JSL REDIRECT_SELECTION_MENU
    case 0xC23843: {
        Instruction step(cpu, 0x22, 0xC1DE2Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:653 CMP #0
    case 0xC23847: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:653 CMP #0
    // Overlapping static entry reached from 0xC23847.
    case 0xC23849: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:654 BNEL @UNKNOWN74
    case 0xC2384A: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler.asm:654 BNEL @UNKNOWN74
    case 0xC2384C: {
        Instruction step(cpu, 0x4C, 0x0038D9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:655 LDA DEBUG
    case 0xC2384F: {
        Instruction step(cpu, 0xAD, 0x00436Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:656 BEQ @UNKNOWN67
    case 0xC23852: {
        Instruction step(cpu, 0xF0, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:657 LDA PAD_STATE
    case 0xC23854: {
        Instruction step(cpu, 0xAD, 0x000065u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:658 AND #PAD::SELECT_BUTTON | PAD::START_BUTTON
    case 0xC23857: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x003000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:658 AND #PAD::SELECT_BUTTON | PAD::START_BUTTON
    // Overlapping static entry reached from 0xC23857.
    case 0xC23859: {
        Instruction step(cpu, 0x30, 0x0000C9u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/menu_handler.asm:659 CMP #PAD::SELECT_BUTTON | PAD::START_BUTTON
    case 0xC2385A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x003000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:659 CMP #PAD::SELECT_BUTTON | PAD::START_BUTTON
    // Overlapping static entry reached from 0xC23859.
    case 0xC2385B: {
        Instruction step(cpu, 0x00, 0x000030u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:659 CMP #PAD::SELECT_BUTTON | PAD::START_BUTTON
    // Overlapping static entry reached from 0xC2385A.
    case 0xC2385C: {
        Instruction step(cpu, 0x30, 0x0000D0u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/menu_handler.asm:660 BNE @UNKNOWN66
    case 0xC2385D: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:660 BNE @UNKNOWN66
    // Overlapping static entry reached from 0xC2385C.
    case 0xC2385E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/menu_handler.asm:661 JSL RESUME_MUSIC
    case 0xC2385F: {
        Instruction step(cpu, 0x22, 0xEF026Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:662 LDA #$FFFF
    case 0xC23863: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:662 LDA #$FFFF
    // Overlapping static entry reached from 0xC23863.
    case 0xC23865: {
        Instruction step(cpu, 0xFF, 0x3B644Cu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/menu_handler.asm:663 JMP @UNKNOWN113
    case 0xC23866: {
        Instruction step(cpu, 0x4C, 0x003B64u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:665 LDA PAD_STATE
    case 0xC23869: {
        Instruction step(cpu, 0xAD, 0x000065u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:666 AND #PAD::R_BUTTON
    case 0xC2386C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:666 AND #PAD::R_BUTTON
    // Overlapping static entry reached from 0xC2386C.
    case 0xC2386E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:667 BEQ @UNKNOWN67
    case 0xC2386F: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:668 JSL UNKNOWN_E14DE8
    case 0xC23871: {
        Instruction step(cpu, 0x22, 0xE14DE8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:669 BRA @UNKNOWN63
    case 0xC23875: {
        Instruction step(cpu, 0x80, 0x0000B2u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler.asm:671 LDA BATTLE_MODE
    case 0xC23877: {
        Instruction step(cpu, 0xAD, 0x004DC2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:672 BNE @UNKNOWN73
    case 0xC2387A: {
        Instruction step(cpu, 0xD0, 0x000053u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:673 LDA PAD_STATE
    case 0xC2387C: {
        Instruction step(cpu, 0xAD, 0x000065u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:674 AND #PAD::L_BUTTON
    case 0xC2387F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:674 AND #PAD::L_BUTTON
    // Overlapping static entry reached from 0xC2387F.
    case 0xC23881: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:675 BEQ @UNKNOWN72
    case 0xC23882: {
        Instruction step(cpu, 0xF0, 0x00003Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:676 JSL DEBUG_SET_CHAR_LEVEL
    case 0xC23884: {
        Instruction step(cpu, 0x22, 0xC13E7Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:677 LDY #0
    case 0xC23888: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:677 LDY #0
    // Overlapping static entry reached from 0xC23888.
    case 0xC2388A: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:678 STY @LOCAL07
    case 0xC2388B: {
        Instruction step(cpu, 0x84, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:679 BRA @UNKNOWN71
    case 0xC2388D: {
        Instruction step(cpu, 0x80, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler.asm:681 LDA GAME_STATE + game_state::party_members,Y
    case 0xC2388F: {
        Instruction step(cpu, 0xB9, 0x00986Fu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:682 AND #$00FF
    case 0xC23892: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:682 AND #$00FF
    // Overlapping static entry reached from 0xC23892.
    case 0xC23894: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:683 STA @LOCAL04
    case 0xC23895: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:684 BEQ @UNKNOWN70
    case 0xC23897: {
        Instruction step(cpu, 0xF0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:685 CMP #4
    case 0xC23899: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:685 CMP #4
    // Overlapping static entry reached from 0xC23899.
    case 0xC2389B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler.asm:686 BGT @UNKNOWN70
    case 0xC2389C: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler.asm:686 BGT @UNKNOWN70
    case 0xC2389E: {
        Instruction step(cpu, 0xB0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/menu_handler.asm:687 TYA
    case 0xC238A0: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:688 LDY #.SIZEOF(battler)
    case 0xC238A1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:688 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC238A1.
    case 0xC238A3: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:689 JSL MULT168
    case 0xC238A4: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:690 CLC
    case 0xC238A8: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/menu_handler.asm:691 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC238A9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ACu : 0x009FACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/menu_handler.asm:691 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC238A9.
    case 0xC238AB: {
        Instruction step(cpu, 0x9F, 0x1CA5AAu, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:692 TAX
    case 0xC238AC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:693 LDA @LOCAL04
    case 0xC238AD: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:694 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC238AF: {
        Instruction step(cpu, 0x22, 0xC2B930u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:696 LDY @LOCAL07
    case 0xC238B3: {
        Instruction step(cpu, 0xA4, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:697 INY
    case 0xC238B5: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:698 STY @LOCAL07
    case 0xC238B6: {
        Instruction step(cpu, 0x84, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:700 CPY #6
    case 0xC238B8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:700 CPY #6
    // Overlapping static entry reached from 0xC238B8.
    case 0xC238BA: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:701 BCC @UNKNOWN68
    case 0xC238BB: {
        Instruction step(cpu, 0x90, 0x0000D2u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/menu_handler.asm:702 JMP @UNKNOWN63
    case 0xC238BD: {
        Instruction step(cpu, 0x4C, 0x003829u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:704 LDA PAD_STATE
    case 0xC238C0: {
        Instruction step(cpu, 0xAD, 0x000065u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:705 AND #PAD::SELECT_BUTTON
    case 0xC238C3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:705 AND #PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC238C3.
    case 0xC238C5: {
        Instruction step(cpu, 0x20, 0x0007F0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/menu_handler.asm:706 BEQ @UNKNOWN73
    case 0xC238C6: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:707 JSL DEBUG_Y_BUTTON_GOODS
    case 0xC238C8: {
        Instruction step(cpu, 0x22, 0xC13EE7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:708 JMP @UNKNOWN63
    case 0xC238CC: {
        Instruction step(cpu, 0x4C, 0x003829u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:710 JSL RESUME_MUSIC
    case 0xC238CF: {
        Instruction step(cpu, 0x22, 0xEF026Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:711 LDA #0
    case 0xC238D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:711 LDA #0
    // Overlapping static entry reached from 0xC238D3.
    case 0xC238D5: {
        Instruction step(cpu, 0x00, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:712 JMP @UNKNOWN113
    case 0xC238D6: {
        Instruction step(cpu, 0x4C, 0x003B64u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:714 SEP #PROC_FLAGS::ACCUM8
    case 0xC238D9: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:715 STZ BATTLE_ITEM_USED
    case 0xC238DB: {
        Instruction step(cpu, 0x9C, 0x00A97Cu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:716 REP #PROC_FLAGS::ACCUM8
    case 0xC238DE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:717 CMP #1
    case 0xC238E0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:717 CMP #1
    // Overlapping static entry reached from 0xC238E0.
    case 0xC238E2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:718 BEQ @UNKNOWN81
    case 0xC238E3: {
        Instruction step(cpu, 0xF0, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:719 CMP #2
    case 0xC238E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:719 CMP #2
    // Overlapping static entry reached from 0xC238E5.
    case 0xC238E7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:720 BEQL @UNKNOWN88
    case 0xC238E8: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:720 BEQL @UNKNOWN88
    case 0xC238EA: {
        Instruction step(cpu, 0x4C, 0x003979u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:721 CMP #3
    case 0xC238ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:721 CMP #3
    // Overlapping static entry reached from 0xC238ED.
    case 0xC238EF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:722 BEQL @UNKNOWN90
    case 0xC238F0: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:722 BEQL @UNKNOWN90
    case 0xC238F2: {
        Instruction step(cpu, 0x4C, 0x0039ADu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:723 CMP #4
    case 0xC238F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:723 CMP #4
    // Overlapping static entry reached from 0xC238F5.
    case 0xC238F7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:724 BEQL @UNKNOWN91
    case 0xC238F8: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:724 BEQL @UNKNOWN91
    case 0xC238FA: {
        Instruction step(cpu, 0x4C, 0x0039C2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:725 CMP #5
    case 0xC238FD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:725 CMP #5
    // Overlapping static entry reached from 0xC238FD.
    case 0xC238FF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:726 BEQL @UNKNOWN95
    case 0xC23900: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:726 BEQL @UNKNOWN95
    case 0xC23902: {
        Instruction step(cpu, 0x4C, 0x003A23u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:727 CMP #6
    case 0xC23905: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:727 CMP #6
    // Overlapping static entry reached from 0xC23905.
    case 0xC23907: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:728 BEQL @UNKNOWN96
    case 0xC23908: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:728 BEQL @UNKNOWN96
    case 0xC2390A: {
        Instruction step(cpu, 0x4C, 0x003A37u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:729 CMP #7
    case 0xC2390D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:729 CMP #7
    // Overlapping static entry reached from 0xC2390D.
    case 0xC2390F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:730 BEQL @UNKNOWN97
    case 0xC23910: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:730 BEQL @UNKNOWN97
    case 0xC23912: {
        Instruction step(cpu, 0x4C, 0x003A58u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:731 JMP @UNKNOWN112
    case 0xC23915: {
        Instruction step(cpu, 0x4C, 0x003B4Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:733 LDA @LOCAL06
    case 0xC23918: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:734 BEQ @UNKNOWN82
    case 0xC2391A: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:735 CMP #1
    case 0xC2391C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:735 CMP #1
    // Overlapping static entry reached from 0xC2391C.
    case 0xC2391E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:736 BEQ @UNKNOWN83
    case 0xC2391F: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:737 CMP #2
    case 0xC23921: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:737 CMP #2
    // Overlapping static entry reached from 0xC23921.
    case 0xC23923: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:738 BEQ @UNKNOWN84
    case 0xC23924: {
        Instruction step(cpu, 0xF0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:739 BRA @UNKNOWN85
    case 0xC23926: {
        Instruction step(cpu, 0x80, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler.asm:741 LDA #BATTLE_ACTIONS::BASH
    case 0xC23928: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:741 LDA #BATTLE_ACTIONS::BASH
    // Overlapping static entry reached from 0xC23928.
    case 0xC2392A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:742 STA @VIRTUAL02
    case 0xC2392B: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:743 STA @LOCAL05
    case 0xC2392D: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:744 BRA @UNKNOWN85
    case 0xC2392F: {
        Instruction step(cpu, 0x80, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler.asm:746 LDA #BATTLE_ACTIONS::SHOOT
    case 0xC23931: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:746 LDA #BATTLE_ACTIONS::SHOOT
    // Overlapping static entry reached from 0xC23931.
    case 0xC23933: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:747 STA @VIRTUAL02
    case 0xC23934: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:748 STA @LOCAL05
    case 0xC23936: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:749 BRA @UNKNOWN85
    case 0xC23938: {
        Instruction step(cpu, 0x80, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler.asm:751 LDA #BATTLE_ACTIONS::USE_NO_EFFECT
    case 0xC2393A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:751 LDA #BATTLE_ACTIONS::USE_NO_EFFECT
    // Overlapping static entry reached from 0xC2393A.
    case 0xC2393C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:752 STA @VIRTUAL02
    case 0xC2393D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:753 STA @LOCAL05
    case 0xC2393F: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:755 LDA @LOCAL05
    case 0xC23941: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:756 STA @VIRTUAL02
    case 0xC23943: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:757 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23945: {
        Instruction step(cpu, 0x8D, 0x00A97Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:758 SEP #PROC_FLAGS::ACCUM8
    case 0xC23948: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:759 LDA #17
    case 0xC2394A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000011u : 0x008D11u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:760 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    case 0xC2394C: {
        Instruction step(cpu, 0x8D, 0x00A981u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:760 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC2394A.
    case 0xC2394D: {
        Instruction step(cpu, 0x81, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:761 REP #PROC_FLAGS::ACCUM8
    case 0xC2394F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:762 LDA @LOCAL06
    case 0xC23951: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:763 CMP #2
    case 0xC23953: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:763 CMP #2
    // Overlapping static entry reached from 0xC23953.
    case 0xC23955: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:764 BEQL @UNKNOWN112
    case 0xC23956: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:764 BEQL @UNKNOWN112
    case 0xC23958: {
        Instruction step(cpu, 0x4C, 0x003B4Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:765 LDY @VIRTUAL02
    case 0xC2395B: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:766 LDX #1
    case 0xC2395D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:766 LDX #1
    // Overlapping static entry reached from 0xC2395D.
    case 0xC2395F: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:767 LDA #0
    case 0xC23960: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:767 LDA #0
    // Overlapping static entry reached from 0xC23960.
    case 0xC23962: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:768 JSL REDIRECT_C1242E
    case 0xC23963: {
        Instruction step(cpu, 0x22, 0xC1DE37u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:769 SEP #PROC_FLAGS::ACCUM8
    case 0xC23967: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:770 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC23969: {
        Instruction step(cpu, 0x8D, 0x00A982u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:771 REP #PROC_FLAGS::ACCUM8
    case 0xC2396C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:772 AND #$00FF
    case 0xC2396E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:772 AND #$00FF
    // Overlapping static entry reached from 0xC2396E.
    case 0xC23970: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:773 BEQL @UNKNOWN63
    case 0xC23971: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:773 BEQL @UNKNOWN63
    case 0xC23973: {
        Instruction step(cpu, 0x4C, 0x003829u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:774 JMP @UNKNOWN112
    case 0xC23976: {
        Instruction step(cpu, 0x4C, 0x003B4Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:776 LDA @LOCAL09
    case 0xC23979: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:777 SEP #PROC_FLAGS::ACCUM8
    case 0xC2397B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:778 STA BATTLE_MENU_SELECTION
    case 0xC2397D: {
        Instruction step(cpu, 0x8D, 0x00A97Du, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:779 REP #PROC_FLAGS::ACCUM8
    case 0xC23980: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:780 LDA #.LOWORD(BATTLE_MENU_SELECTION)
    case 0xC23982: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Du : 0x00A97Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:780 LDA #.LOWORD(BATTLE_MENU_SELECTION)
    // Overlapping static entry reached from 0xC23982.
    case 0xC23984: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000022u : 0x003122u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:781 JSL REDIRECT_C1CFC6
    case 0xC23985: {
        Instruction step(cpu, 0x22, 0xC1DE31u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:781 JSL REDIRECT_C1CFC6
    // Overlapping static entry reached from 0xC23984.
    case 0xC23986: {
        Instruction step(cpu, 0x31, 0x0000DEu, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:781 JSL REDIRECT_C1CFC6
    // Overlapping static entry reached from 0xC23984.
    case 0xC23987: {
        Instruction step(cpu, 0xDE, 0x00AAC1u, 3u, AddressMode::AbsoluteIndexedX);
        step.decrement();
        return step.finish();
    }
    // src/battle/menu_handler.asm:781 JSL REDIRECT_C1CFC6
    // Overlapping static entry reached from 0xC23986.
    case 0xC23988: {
        Instruction step(cpu, 0xC1, 0x0000AAu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:782 TAX
    case 0xC23989: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:783 BEQL @UNKNOWN63
    case 0xC2398A: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:783 BEQL @UNKNOWN63
    case 0xC2398C: {
        Instruction step(cpu, 0x4C, 0x003829u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:784 LDA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC2398F: {
        Instruction step(cpu, 0xAD, 0x00A97Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:785 AND #$00FF
    case 0xC23992: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:785 AND #$00FF
    // Overlapping static entry reached from 0xC23992.
    case 0xC23994: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:786 TAX
    case 0xC23995: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:787 LDA @LOCAL09
    case 0xC23996: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:788 JSL GET_CHARACTER_ITEM
    case 0xC23998: {
        Instruction step(cpu, 0x22, 0xC3E977u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:789 SEP #PROC_FLAGS::ACCUM8
    case 0xC2399C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:790 STA BATTLE_ITEM_USED
    case 0xC2399E: {
        Instruction step(cpu, 0x8D, 0x00A97Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:791 REP #PROC_FLAGS::ACCUM8
    case 0xC239A1: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:792 LDA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC239A3: {
        Instruction step(cpu, 0xAD, 0x00A97Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:793 STA @VIRTUAL02
    case 0xC239A6: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:794 STA @LOCAL05
    case 0xC239A8: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:795 JMP @UNKNOWN112
    case 0xC239AA: {
        Instruction step(cpu, 0x4C, 0x003B4Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:797 SEP #PROC_FLAGS::ACCUM8
    case 0xC239AD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:798 LDA #1
    case 0xC239AF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:799 STA GAME_STATE+game_state::auto_fight_enable
    case 0xC239B1: {
        Instruction step(cpu, 0x8D, 0x0098B1u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:799 STA GAME_STATE+game_state::auto_fight_enable
    // Overlapping static entry reached from 0xC239AF.
    case 0xC239B2: {
        Instruction step(cpu, 0xB1, 0x000098u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:800 JSL UNKNOWN_C20266
    case 0xC239B4: {
        Instruction step(cpu, 0x22, 0xC20266u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:802 LDA #BATTLE_ACTIONS::NO_EFFECT
    case 0xC239B8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:802 LDA #BATTLE_ACTIONS::NO_EFFECT
    // Overlapping static entry reached from 0xC239B8.
    case 0xC239BA: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:803 STA @VIRTUAL02
    case 0xC239BB: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:804 STA @LOCAL05
    case 0xC239BD: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:805 JMP @UNKNOWN112
    case 0xC239BF: {
        Instruction step(cpu, 0x4C, 0x003B4Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:807 LDA @LOCAL09
    case 0xC239C2: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:808 CMP #PARTY_MEMBER::JEFF
    case 0xC239C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:808 CMP #PARTY_MEMBER::JEFF
    // Overlapping static entry reached from 0xC239C4.
    case 0xC239C6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:809 BNE @UNKNOWN93
    case 0xC239C7: {
        Instruction step(cpu, 0xD0, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:810 LDA #BATTLE_ACTIONS::SPY
    case 0xC239C9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:810 LDA #BATTLE_ACTIONS::SPY
    // Overlapping static entry reached from 0xC239C9.
    case 0xC239CB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:811 STA @VIRTUAL02
    case 0xC239CC: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:812 STA @LOCAL05
    case 0xC239CE: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:813 LDA @VIRTUAL02
    case 0xC239D0: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:814 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC239D2: {
        Instruction step(cpu, 0x8D, 0x00A97Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:815 SEP #PROC_FLAGS::ACCUM8
    case 0xC239D5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:816 LDA #17
    case 0xC239D7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000011u : 0x008D11u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:817 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    case 0xC239D9: {
        Instruction step(cpu, 0x8D, 0x00A981u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:817 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC239D7.
    case 0xC239DA: {
        Instruction step(cpu, 0x81, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:818 LDY @VIRTUAL02
    case 0xC239DC: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:819 LDX #1
    case 0xC239DE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:819 LDX #1
    // Overlapping static entry reached from 0xC239DE.
    case 0xC239E0: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:820 REP #PROC_FLAGS::ACCUM8
    case 0xC239E1: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:821 LDA #0
    case 0xC239E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:821 LDA #0
    // Overlapping static entry reached from 0xC239E3.
    case 0xC239E5: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:822 JSL REDIRECT_C1242E
    case 0xC239E6: {
        Instruction step(cpu, 0x22, 0xC1DE37u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:823 SEP #PROC_FLAGS::ACCUM8
    case 0xC239EA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:824 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC239EC: {
        Instruction step(cpu, 0x8D, 0x00A982u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:825 REP #PROC_FLAGS::ACCUM8
    case 0xC239EF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:826 AND #$00FF
    case 0xC239F1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:826 AND #$00FF
    // Overlapping static entry reached from 0xC239F1.
    case 0xC239F3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:827 BEQL @UNKNOWN63
    case 0xC239F4: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:827 BEQL @UNKNOWN63
    case 0xC239F6: {
        Instruction step(cpu, 0x4C, 0x003829u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:828 JMP @UNKNOWN112
    case 0xC239F9: {
        Instruction step(cpu, 0x4C, 0x003B4Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:830 LDA @LOCAL09
    case 0xC239FC: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:831 SEP #PROC_FLAGS::ACCUM8
    case 0xC239FE: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:832 STA BATTLE_MENU_SELECTION
    case 0xC23A00: {
        Instruction step(cpu, 0x8D, 0x00A97Du, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:833 REP #PROC_FLAGS::ACCUM8
    case 0xC23A03: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:834 LDA #.LOWORD(BATTLE_MENU_SELECTION)
    case 0xC23A05: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Du : 0x00A97Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:834 LDA #.LOWORD(BATTLE_MENU_SELECTION)
    // Overlapping static entry reached from 0xC23A05.
    case 0xC23A07: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000022u : 0x003D22u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:835 JSL REDIRECT_BATTLE_PSI_MENU
    case 0xC23A08: {
        Instruction step(cpu, 0x22, 0xC1DE3Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:835 JSL REDIRECT_BATTLE_PSI_MENU
    // Overlapping static entry reached from 0xC23A07.
    case 0xC23A09: {
        Instruction step(cpu, 0x3D, 0x00C1DEu, 3u, AddressMode::AbsoluteIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:835 JSL REDIRECT_BATTLE_PSI_MENU
    // Overlapping static entry reached from 0xC23A07.
    case 0xC23A0A: {
        Instruction step(cpu, 0xDE, 0x00AAC1u, 3u, AddressMode::AbsoluteIndexedX);
        step.decrement();
        return step.finish();
    }
    // src/battle/menu_handler.asm:836 TAX
    case 0xC23A0C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:837 BEQL @UNKNOWN63
    case 0xC23A0D: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:837 BEQL @UNKNOWN63
    case 0xC23A0F: {
        Instruction step(cpu, 0x4C, 0x003829u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:838 SEP #PROC_FLAGS::ACCUM8
    case 0xC23A12: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:839 STZ BATTLE_ITEM_USED
    case 0xC23A14: {
        Instruction step(cpu, 0x9C, 0x00A97Cu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:840 REP #PROC_FLAGS::ACCUM8
    case 0xC23A17: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:841 LDA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23A19: {
        Instruction step(cpu, 0xAD, 0x00A97Fu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:842 STA @VIRTUAL02
    case 0xC23A1C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:843 STA @LOCAL05
    case 0xC23A1E: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:844 JMP @UNKNOWN112
    case 0xC23A20: {
        Instruction step(cpu, 0x4C, 0x003B4Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:846 LDA #BATTLE_ACTIONS::GUARD
    case 0xC23A23: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:846 LDA #BATTLE_ACTIONS::GUARD
    // Overlapping static entry reached from 0xC23A23.
    case 0xC23A25: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:847 STA @VIRTUAL02
    case 0xC23A26: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:848 STA @LOCAL05
    case 0xC23A28: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:849 LDA @VIRTUAL02
    case 0xC23A2A: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:850 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23A2C: {
        Instruction step(cpu, 0x8D, 0x00A97Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:851 SEP #PROC_FLAGS::ACCUM8
    case 0xC23A2F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:852 STZ BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    case 0xC23A31: {
        Instruction step(cpu, 0x9C, 0x00A981u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:853 JMP @UNKNOWN112
    case 0xC23A34: {
        Instruction step(cpu, 0x4C, 0x003B4Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:855 SEP #PROC_FLAGS::ACCUM8
    case 0xC23A37: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:856 LDA #1
    case 0xC23A39: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:857 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    case 0xC23A3B: {
        Instruction step(cpu, 0x8D, 0x00A981u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:857 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC23A39.
    case 0xC23A3C: {
        Instruction step(cpu, 0x81, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:858 REP #PROC_FLAGS::ACCUM8
    case 0xC23A3E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:859 LDA @LOCAL09
    case 0xC23A40: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:860 SEP #PROC_FLAGS::ACCUM8
    case 0xC23A42: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:861 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC23A44: {
        Instruction step(cpu, 0x8D, 0x00A982u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:862 REP #PROC_FLAGS::ACCUM8
    case 0xC23A47: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:863 LDA #BATTLE_ACTIONS::RUN_AWAY
    case 0xC23A49: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000017u : 0x000117u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:863 LDA #BATTLE_ACTIONS::RUN_AWAY
    // Overlapping static entry reached from 0xC23A49.
    case 0xC23A4B: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:864 STA @VIRTUAL02
    case 0xC23A4C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:864 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC23A4B.
    case 0xC23A4D: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/menu_handler.asm:865 STA @LOCAL05
    case 0xC23A4E: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:866 LDA @VIRTUAL02
    case 0xC23A50: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:867 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23A52: {
        Instruction step(cpu, 0x8D, 0x00A97Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:868 JMP @UNKNOWN112
    case 0xC23A55: {
        Instruction step(cpu, 0x4C, 0x003B4Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:870 LDX #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::targetting
    case 0xC23A58: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000081u : 0x00A981u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:870 LDX #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC23A58.
    case 0xC23A5A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000086u : 0x001C86u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:871 STX @LOCAL04
    case 0xC23A5B: {
        Instruction step(cpu, 0x86, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:871 STX @LOCAL04
    // Overlapping static entry reached from 0xC23A5A.
    case 0xC23A5C: {
        Instruction step(cpu, 0x1C, 0x0020E2u, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:872 SEP #PROC_FLAGS::ACCUM8
    case 0xC23A5D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:873 LDA #1
    case 0xC23A5F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:874 STA __BSS_START__,X
    case 0xC23A61: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:874 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC23A5F.
    case 0xC23A62: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:875 REP #PROC_FLAGS::ACCUM8
    case 0xC23A64: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:876 LDA #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    case 0xC23A66: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000082u : 0x00A982u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:876 LDA #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    // Overlapping static entry reached from 0xC23A66.
    case 0xC23A68: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000085u : 0x000485u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:877 STA @VIRTUAL04
    case 0xC23A69: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:877 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC23A68.
    case 0xC23A6A: {
        Instruction step(cpu, 0x04, 0x0000A5u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:878 LDA @LOCAL09
    case 0xC23A6B: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:878 LDA @LOCAL09
    // Overlapping static entry reached from 0xC23A6A.
    case 0xC23A6C: {
        Instruction step(cpu, 0x26, 0x0000E2u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/battle/menu_handler.asm:879 SEP #PROC_FLAGS::ACCUM8
    case 0xC23A6D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:879 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC23A6C.
    case 0xC23A6E: {
        Instruction step(cpu, 0x20, 0x0004A6u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/menu_handler.asm:880 LDX @VIRTUAL04
    case 0xC23A6F: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:881 STA __BSS_START__,X
    case 0xC23A71: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:882 REP #PROC_FLAGS::ACCUM8
    case 0xC23A74: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:883 LDA @LOCAL09
    case 0xC23A76: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:884 CMP #PARTY_MEMBER::PAULA
    case 0xC23A78: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:884 CMP #PARTY_MEMBER::PAULA
    // Overlapping static entry reached from 0xC23A78.
    case 0xC23A7A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:885 BEQ @UNKNOWN99
    case 0xC23A7B: {
        Instruction step(cpu, 0xF0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:886 CMP #PARTY_MEMBER::POO
    case 0xC23A7D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:886 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC23A7D.
    case 0xC23A7F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:887 BEQL @UNKNOWN111
    case 0xC23A80: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:887 BEQL @UNKNOWN111
    case 0xC23A82: {
        Instruction step(cpu, 0x4C, 0x003B19u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:888 JMP @UNKNOWN112
    case 0xC23A85: {
        Instruction step(cpu, 0x4C, 0x003B4Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:890 LDA GIYGAS_PHASE
    case 0xC23A88: {
        Instruction step(cpu, 0xAD, 0x00A97Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:891 CMP #GIYGAS_PHASES::START_PRAYING
    case 0xC23A8B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:891 CMP #GIYGAS_PHASES::START_PRAYING
    // Overlapping static entry reached from 0xC23A8B.
    case 0xC23A8D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:892 BEQ @UNKNOWN100
    case 0xC23A8E: {
        Instruction step(cpu, 0xF0, 0x00002Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:893 CMP #GIYGAS_PHASES::PRAYER_1_USED
    case 0xC23A90: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:893 CMP #GIYGAS_PHASES::PRAYER_1_USED
    // Overlapping static entry reached from 0xC23A90.
    case 0xC23A92: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:894 BEQ @UNKNOWN101
    case 0xC23A93: {
        Instruction step(cpu, 0xF0, 0x00002Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:895 CMP #GIYGAS_PHASES::PRAYER_2_USED
    case 0xC23A95: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:895 CMP #GIYGAS_PHASES::PRAYER_2_USED
    // Overlapping static entry reached from 0xC23A95.
    case 0xC23A97: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:896 BEQ @UNKNOWN102
    case 0xC23A98: {
        Instruction step(cpu, 0xF0, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:897 CMP #GIYGAS_PHASES::PRAYER_3_USED
    case 0xC23A9A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:897 CMP #GIYGAS_PHASES::PRAYER_3_USED
    // Overlapping static entry reached from 0xC23A9A.
    case 0xC23A9C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:898 BEQ @UNKNOWN103
    case 0xC23A9D: {
        Instruction step(cpu, 0xF0, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:899 CMP #GIYGAS_PHASES::PRAYER_4_USED
    case 0xC23A9F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:899 CMP #GIYGAS_PHASES::PRAYER_4_USED
    // Overlapping static entry reached from 0xC23A9F.
    case 0xC23AA1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:900 BEQ @UNKNOWN104
    case 0xC23AA2: {
        Instruction step(cpu, 0xF0, 0x00003Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:901 CMP #GIYGAS_PHASES::PRAYER_5_USED
    case 0xC23AA4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:901 CMP #GIYGAS_PHASES::PRAYER_5_USED
    // Overlapping static entry reached from 0xC23AA4.
    case 0xC23AA6: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:902 BEQ @UNKNOWN105
    case 0xC23AA7: {
        Instruction step(cpu, 0xF0, 0x00003Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:903 CMP #GIYGAS_PHASES::PRAYER_6_USED
    case 0xC23AA9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:903 CMP #GIYGAS_PHASES::PRAYER_6_USED
    // Overlapping static entry reached from 0xC23AA9.
    case 0xC23AAB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:904 BEQ @UNKNOWN106
    case 0xC23AAC: {
        Instruction step(cpu, 0xF0, 0x000042u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:905 CMP #GIYGAS_PHASES::PRAYER_7_USED
    case 0xC23AAE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:905 CMP #GIYGAS_PHASES::PRAYER_7_USED
    // Overlapping static entry reached from 0xC23AAE.
    case 0xC23AB0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:906 BEQ @UNKNOWN107
    case 0xC23AB1: {
        Instruction step(cpu, 0xF0, 0x000046u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:907 CMP #GIYGAS_PHASES::PRAYER_8_USED
    case 0xC23AB3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:907 CMP #GIYGAS_PHASES::PRAYER_8_USED
    // Overlapping static entry reached from 0xC23AB3.
    case 0xC23AB5: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:908 BEQ @UNKNOWN108
    case 0xC23AB6: {
        Instruction step(cpu, 0xF0, 0x00004Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler.asm:909 BRA @UNKNOWN109
    case 0xC23AB8: {
        Instruction step(cpu, 0x80, 0x000051u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler.asm:911 LDA #BATTLE_ACTIONS::FINAL_PRAYER_1
    case 0xC23ABA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000023u : 0x000123u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:911 LDA #BATTLE_ACTIONS::FINAL_PRAYER_1
    // Overlapping static entry reached from 0xC23ABA.
    case 0xC23ABC: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:912 STA @VIRTUAL02
    case 0xC23ABD: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:912 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC23ABC.
    case 0xC23ABE: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/menu_handler.asm:913 STA @LOCAL05
    case 0xC23ABF: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:914 BRA @UNKNOWN110
    case 0xC23AC1: {
        Instruction step(cpu, 0x80, 0x00004Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler.asm:916 LDA #BATTLE_ACTIONS::FINAL_PRAYER_2
    case 0xC23AC3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000024u : 0x000124u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:916 LDA #BATTLE_ACTIONS::FINAL_PRAYER_2
    // Overlapping static entry reached from 0xC23AC3.
    case 0xC23AC5: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:917 STA @VIRTUAL02
    case 0xC23AC6: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:917 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC23AC5.
    case 0xC23AC7: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/menu_handler.asm:918 STA @LOCAL05
    case 0xC23AC8: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:919 BRA @UNKNOWN110
    case 0xC23ACA: {
        Instruction step(cpu, 0x80, 0x000046u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler.asm:921 LDA #BATTLE_ACTIONS::FINAL_PRAYER_3
    case 0xC23ACC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000025u : 0x000125u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:921 LDA #BATTLE_ACTIONS::FINAL_PRAYER_3
    // Overlapping static entry reached from 0xC23ACC.
    case 0xC23ACE: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:922 STA @VIRTUAL02
    case 0xC23ACF: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:922 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC23ACE.
    case 0xC23AD0: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/menu_handler.asm:923 STA @LOCAL05
    case 0xC23AD1: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:924 BRA @UNKNOWN110
    case 0xC23AD3: {
        Instruction step(cpu, 0x80, 0x00003Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler.asm:926 LDA #BATTLE_ACTIONS::FINAL_PRAYER_4
    case 0xC23AD5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000026u : 0x000126u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:926 LDA #BATTLE_ACTIONS::FINAL_PRAYER_4
    // Overlapping static entry reached from 0xC23AD5.
    case 0xC23AD7: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:927 STA @VIRTUAL02
    case 0xC23AD8: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:927 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC23AD7.
    case 0xC23AD9: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/menu_handler.asm:928 STA @LOCAL05
    case 0xC23ADA: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:929 BRA @UNKNOWN110
    case 0xC23ADC: {
        Instruction step(cpu, 0x80, 0x000034u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler.asm:931 LDA #BATTLE_ACTIONS::FINAL_PRAYER_5
    case 0xC23ADE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000027u : 0x000127u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:931 LDA #BATTLE_ACTIONS::FINAL_PRAYER_5
    // Overlapping static entry reached from 0xC23ADE.
    case 0xC23AE0: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:932 STA @VIRTUAL02
    case 0xC23AE1: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:932 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC23AE0.
    case 0xC23AE2: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/menu_handler.asm:933 STA @LOCAL05
    case 0xC23AE3: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:934 BRA @UNKNOWN110
    case 0xC23AE5: {
        Instruction step(cpu, 0x80, 0x00002Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler.asm:936 LDA #BATTLE_ACTIONS::FINAL_PRAYER_6
    case 0xC23AE7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000028u : 0x000128u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:936 LDA #BATTLE_ACTIONS::FINAL_PRAYER_6
    // Overlapping static entry reached from 0xC23AE7.
    case 0xC23AE9: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:937 STA @VIRTUAL02
    case 0xC23AEA: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:937 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC23AE9.
    case 0xC23AEB: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/menu_handler.asm:938 STA @LOCAL05
    case 0xC23AEC: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:939 BRA @UNKNOWN110
    case 0xC23AEE: {
        Instruction step(cpu, 0x80, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler.asm:941 LDA #BATTLE_ACTIONS::FINAL_PRAYER_7
    case 0xC23AF0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000029u : 0x000129u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:941 LDA #BATTLE_ACTIONS::FINAL_PRAYER_7
    // Overlapping static entry reached from 0xC23AF0.
    case 0xC23AF2: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:942 STA @VIRTUAL02
    case 0xC23AF3: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:942 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC23AF2.
    case 0xC23AF4: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/menu_handler.asm:943 STA @LOCAL05
    case 0xC23AF5: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:944 BRA @UNKNOWN110
    case 0xC23AF7: {
        Instruction step(cpu, 0x80, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler.asm:946 LDA #BATTLE_ACTIONS::FINAL_PRAYER_8
    case 0xC23AF9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Au : 0x00012Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:946 LDA #BATTLE_ACTIONS::FINAL_PRAYER_8
    // Overlapping static entry reached from 0xC23AF9.
    case 0xC23AFB: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:947 STA @VIRTUAL02
    case 0xC23AFC: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:947 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC23AFB.
    case 0xC23AFD: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/menu_handler.asm:948 STA @LOCAL05
    case 0xC23AFE: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:949 BRA @UNKNOWN110
    case 0xC23B00: {
        Instruction step(cpu, 0x80, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler.asm:951 LDA #BATTLE_ACTIONS::FINAL_PRAYER_9
    case 0xC23B02: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Bu : 0x00012Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:951 LDA #BATTLE_ACTIONS::FINAL_PRAYER_9
    // Overlapping static entry reached from 0xC23B02.
    case 0xC23B04: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:952 STA @VIRTUAL02
    case 0xC23B05: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:952 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC23B04.
    case 0xC23B06: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/menu_handler.asm:953 STA @LOCAL05
    case 0xC23B07: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:954 BRA @UNKNOWN110
    case 0xC23B09: {
        Instruction step(cpu, 0x80, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler.asm:956 LDA #BATTLE_ACTIONS::PRAY
    case 0xC23B0B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:956 LDA #BATTLE_ACTIONS::PRAY
    // Overlapping static entry reached from 0xC23B0B.
    case 0xC23B0D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:957 STA @VIRTUAL02
    case 0xC23B0E: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:958 STA @LOCAL05
    case 0xC23B10: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:960 LDA @VIRTUAL02
    case 0xC23B12: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:961 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23B14: {
        Instruction step(cpu, 0x8D, 0x00A97Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:962 BRA @UNKNOWN112
    case 0xC23B17: {
        Instruction step(cpu, 0x80, 0x000034u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler.asm:964 LDA #BATTLE_ACTIONS::MIRROR
    case 0xC23B19: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000118u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:964 LDA #BATTLE_ACTIONS::MIRROR
    // Overlapping static entry reached from 0xC23B19.
    case 0xC23B1B: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:965 STA @VIRTUAL02
    case 0xC23B1C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:965 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC23B1B.
    case 0xC23B1D: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/menu_handler.asm:966 STA @LOCAL05
    case 0xC23B1E: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:967 LDA @VIRTUAL02
    case 0xC23B20: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:968 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23B22: {
        Instruction step(cpu, 0x8D, 0x00A97Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:969 SEP #PROC_FLAGS::ACCUM8
    case 0xC23B25: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:970 LDA #17
    case 0xC23B27: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000011u : 0x00A611u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:971 LDX @LOCAL04
    case 0xC23B29: {
        Instruction step(cpu, 0xA6, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:971 LDX @LOCAL04
    // Overlapping static entry reached from 0xC23B27.
    case 0xC23B2A: {
        Instruction step(cpu, 0x1C, 0x00009Du, 3u, AddressMode::Absolute);
        step.reset_tested_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:972 STA __BSS_START__,X
    case 0xC23B2B: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:972 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC23B2A.
    case 0xC23B2D: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:973 LDY @VIRTUAL02
    case 0xC23B2E: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler.asm:974 LDX #1
    case 0xC23B30: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:974 LDX #1
    // Overlapping static entry reached from 0xC23B30.
    case 0xC23B32: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:975 REP #PROC_FLAGS::ACCUM8
    case 0xC23B33: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:976 LDA #0
    case 0xC23B35: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:976 LDA #0
    // Overlapping static entry reached from 0xC23B35.
    case 0xC23B37: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:977 JSL REDIRECT_C1242E
    case 0xC23B38: {
        Instruction step(cpu, 0x22, 0xC1DE37u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:978 SEP #PROC_FLAGS::ACCUM8
    case 0xC23B3C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:979 LDX @VIRTUAL04
    case 0xC23B3E: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:980 STA __BSS_START__,X
    case 0xC23B40: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:981 REP #PROC_FLAGS::ACCUM8
    case 0xC23B43: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:982 AND #$00FF
    case 0xC23B45: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:982 AND #$00FF
    // Overlapping static entry reached from 0xC23B45.
    case 0xC23B47: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler.asm:983 BEQL @UNKNOWN63
    case 0xC23B48: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler.asm:983 BEQL @UNKNOWN63
    case 0xC23B4A: {
        Instruction step(cpu, 0x4C, 0x003829u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler.asm:985 LDX @LOCAL03
    case 0xC23B4D: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler.asm:986 REP #PROC_FLAGS::ACCUM8
    case 0xC23B4F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler.asm:987 LDA f:BATTLE_WINDOW_SIZES,X
    case 0xC23B51: {
        Instruction step(cpu, 0xBF, 0xC4A1F2u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:988 AND #$00FF
    case 0xC23B55: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:988 AND #$00FF
    // Overlapping static entry reached from 0xC23B55.
    case 0xC23B57: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler.asm:989 JSL REDIRECT_SET_WINDOW_FOCUS
    case 0xC23B58: {
        Instruction step(cpu, 0x22, 0xC1DD4Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:990 JSL RESUME_MUSIC
    case 0xC23B5C: {
        Instruction step(cpu, 0x22, 0xEF026Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler.asm:991 LDA @LOCAL05
    case 0xC23B60: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler.asm:992 STA @VIRTUAL02
    case 0xC23B62: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/menu_handler.asm:994 END_C_FUNCTION
    case 0xC23B64: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/menu_handler.asm:994 END_C_FUNCTION
    case 0xC23B65: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
