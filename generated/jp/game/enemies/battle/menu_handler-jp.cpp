// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/menu_handler-jp.asm
bool resume_battle_menu_handler_jp(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/menu_handler-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC23040: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/menu_handler-jp.asm:17 END_STACK_VARS
    case 0xC23042: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/menu_handler-jp.asm:17 END_STACK_VARS
    case 0xC23043: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/menu_handler-jp.asm:17 END_STACK_VARS
    case 0xC23044: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/menu_handler-jp.asm:17 END_STACK_VARS
    case 0xC23045: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D8u : 0x00FFD8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/menu_handler-jp.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC23045.
    case 0xC23047: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/menu_handler-jp.asm:17 END_STACK_VARS
    case 0xC23048: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/menu_handler-jp.asm:17 END_STACK_VARS
    case 0xC23049: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:18 STX @LOCAL09
    case 0xC2304A: {
        Instruction step(cpu, 0x86, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:18 STX @LOCAL09
    // Overlapping static entry reached from 0xC23047.
    case 0xC2304B: {
        Instruction step(cpu, 0x26, 0x000085u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:19 STA @LOCAL08
    case 0xC2304C: {
        Instruction step(cpu, 0x85, 0x000024u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:19 STA @LOCAL08
    // Overlapping static entry reached from 0xC2304B.
    case 0xC2304D: {
        Instruction step(cpu, 0x24, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:20 LDA #0
    case 0xC2304E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:20 LDA #0
    // Overlapping static entry reached from 0xC2304D.
    case 0xC2304F: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:20 LDA #0
    // Overlapping static entry reached from 0xC2304E.
    case 0xC23050: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:21 JSL UNKNOWN_C2FEF9
    case 0xC23051: {
        Instruction step(cpu, 0x22, 0xC2FE12u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:22 LDA @LOCAL08
    case 0xC23055: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:23 DEC
    case 0xC23057: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/menu_handler-jp.asm:24 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    case 0xC23058: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/battle/menu_handler-jp.asm:24 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC23058.
    case 0xC2305A: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/battle/menu_handler-jp.asm:24 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(char_struct)
    case 0xC2305B: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:25 CLC
    case 0xC2305F: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:26 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC23060: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Fu : 0x009C7Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:26 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC23060.
    case 0xC23062: {
        Instruction step(cpu, 0x9C, 0x000485u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:27 STA @VIRTUAL04
    case 0xC23063: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:28 STA @LOCAL07
    case 0xC23065: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:29 LDX @VIRTUAL04
    case 0xC23067: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:30 LDA a:char_struct::afflictions,X
    case 0xC23069: {
        Instruction step(cpu, 0xBD, 0x00000Du, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:31 AND #$00FF
    case 0xC2306C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC2306C.
    case 0xC2306E: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:32 CMP #STATUS_0::PARALYZED
    case 0xC2306F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:32 CMP #STATUS_0::PARALYZED
    // Overlapping static entry reached from 0xC2306F.
    case 0xC23071: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:33 BEQ @UNKNOWN0
    case 0xC23072: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:34 LDX @VIRTUAL04
    case 0xC23074: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:35 LDA a:char_struct::afflictions+2,X
    case 0xC23076: {
        Instruction step(cpu, 0xBD, 0x00000Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:36 AND #$00FF
    case 0xC23079: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC23079.
    case 0xC2307B: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:37 CMP #STATUS_2::IMMOBILIZED
    case 0xC2307C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:37 CMP #STATUS_2::IMMOBILIZED
    // Overlapping static entry reached from 0xC2307C.
    case 0xC2307E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:38 BNE @UNKNOWN1
    case 0xC2307F: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:40 LDA #2
    case 0xC23081: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:40 LDA #2
    // Overlapping static entry reached from 0xC23081.
    case 0xC23083: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:41 STA @LOCAL06
    case 0xC23084: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:42 BRA @UNKNOWN4
    case 0xC23086: {
        Instruction step(cpu, 0x80, 0x000043u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:44 LDX @VIRTUAL04
    case 0xC23088: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:45 LDA a:char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC2308A: {
        Instruction step(cpu, 0xBD, 0x000030u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:46 AND #$00FF
    case 0xC2308D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC2308D.
    case 0xC2308F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:47 BEQ @UNKNOWN2
    case 0xC23090: {
        Instruction step(cpu, 0xF0, 0x00000Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:48 DEC
    case 0xC23092: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:49 STA @VIRTUAL02
    case 0xC23093: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:50 LDA @VIRTUAL04
    case 0xC23095: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:51 CLC
    case 0xC23097: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:52 ADC @VIRTUAL02
    case 0xC23098: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:53 TAX
    case 0xC2309A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:54 LDA __BSS_START__ + char_struct::items,X
    case 0xC2309B: {
        Instruction step(cpu, 0xBD, 0x000022u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:55 AND #$00FF
    case 0xC2309E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC2309E.
    case 0xC230A0: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:57 CMP #0
    case 0xC230A1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:57 CMP #0
    // Overlapping static entry reached from 0xC230A1.
    case 0xC230A3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:58 BEQ @UNKNOWN3
    case 0xC230A4: {
        Instruction step(cpu, 0xF0, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:58 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC2D52E.
    case 0xC230A5: {
        Instruction step(cpu, 0x23, 0x000085u, 2u, AddressMode::StackRelative);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/menu_handler-jp.asm:59 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC230A6: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:623 STA scratch
    // Macro caller: src/battle/menu_handler-jp.asm:59 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC230A5.
    case 0xC230A7: {
        Instruction step(cpu, 0x04, 0x00000Au, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // include/macros.asm:624 ASL
    // Macro caller: src/battle/menu_handler-jp.asm:59 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC230A8: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/battle/menu_handler-jp.asm:59 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC230A9: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:626 ASL
    // Macro caller: src/battle/menu_handler-jp.asm:59 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC230AB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:627 ASL
    // Macro caller: src/battle/menu_handler-jp.asm:59 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC230AC: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:628 ASL
    // Macro caller: src/battle/menu_handler-jp.asm:59 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC230AD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:60 CLC
    case 0xC230AE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:61 ADC #item::type
    case 0xC230AF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:61 ADC #item::type
    // Overlapping static entry reached from 0xC230AF.
    case 0xC230B1: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:62 TAX
    case 0xC230B2: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:63 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC230B3: {
        Instruction step(cpu, 0xBF, 0xD57000u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:64 AND #$00FF
    case 0xC230B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:64 AND #$00FF
    // Overlapping static entry reached from 0xC230B7.
    case 0xC230B9: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:65 AND #$0003
    case 0xC230BA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:65 AND #$0003
    // Overlapping static entry reached from 0xC230BA.
    case 0xC230BC: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:66 CMP #1
    case 0xC230BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:66 CMP #1
    // Overlapping static entry reached from 0xC230BD.
    case 0xC230BF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:67 BNE @UNKNOWN3
    case 0xC230C0: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:68 LDA #1
    case 0xC230C2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:68 LDA #1
    // Overlapping static entry reached from 0xC230C2.
    case 0xC230C4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:69 STA @LOCAL06
    case 0xC230C5: {
        Instruction step(cpu, 0x85, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:70 BRA @UNKNOWN4
    case 0xC230C7: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:72 STZ @LOCAL06
    case 0xC230C9: {
        Instruction step(cpu, 0x64, 0x000020u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:74 LDA GAME_STATE+game_state::auto_fight_enable
    case 0xC230CB: {
        Instruction step(cpu, 0xAD, 0x009B62u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:75 AND #$00FF
    case 0xC230CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC23122.
    case 0xC230CF: {
        Instruction step(cpu, 0xFF, 0x03D000u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC230CE.
    case 0xC230D0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:76 BEQL @UNKNOWN43
    case 0xC230D1: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:76 BEQL @UNKNOWN43
    case 0xC230D3: {
        Instruction step(cpu, 0x4C, 0x0034A1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:77 LDA @LOCAL07
    case 0xC230D6: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:78 STA @VIRTUAL04
    case 0xC230D8: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:79 LDX @VIRTUAL04
    case 0xC230DA: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:80 LDA a:char_struct::afflictions+4,X
    case 0xC230DC: {
        Instruction step(cpu, 0xBD, 0x000011u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:81 AND #$00FF
    case 0xC230DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC230DF.
    case 0xC230E1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:82 BNEL @UNKNOWN38
    case 0xC230E2: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:82 BNEL @UNKNOWN38
    case 0xC230E4: {
        Instruction step(cpu, 0x4C, 0x00344Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:83 LDX @VIRTUAL04
    case 0xC230E7: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:84 LDA a:char_struct::afflictions+3,X
    case 0xC230E9: {
        Instruction step(cpu, 0xBD, 0x000010u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:85 AND #$00FF
    case 0xC230EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:85 AND #$00FF
    // Overlapping static entry reached from 0xC230EC.
    case 0xC230EE: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:86 CMP #STATUS_3::STRANGE
    case 0xC230EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:86 CMP #STATUS_3::STRANGE
    // Overlapping static entry reached from 0xC230EF.
    case 0xC230F1: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:87 BEQL @UNKNOWN38
    case 0xC230F2: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:87 BEQL @UNKNOWN38
    case 0xC230F4: {
        Instruction step(cpu, 0x4C, 0x00344Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:88 LDX @VIRTUAL04
    case 0xC230F7: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:89 LDA a:char_struct::afflictions+1,X
    case 0xC230F9: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:90 AND #$00FF
    case 0xC230FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:90 AND #$00FF
    // Overlapping static entry reached from 0xC230FC.
    case 0xC230FE: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:91 CMP #STATUS_1::MUSHROOMIZED
    case 0xC230FF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:91 CMP #STATUS_1::MUSHROOMIZED
    // Overlapping static entry reached from 0xC230FF.
    case 0xC23101: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:92 BEQL @UNKNOWN38
    case 0xC23102: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:92 BEQL @UNKNOWN38
    case 0xC23104: {
        Instruction step(cpu, 0x4C, 0x00344Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:93 LDA @LOCAL08
    case 0xC23107: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:94 CMP #PARTY_MEMBER::NESS
    case 0xC23109: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:94 CMP #PARTY_MEMBER::NESS
    // Overlapping static entry reached from 0xC23109.
    case 0xC2310B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:95 BEQ @UNKNOWN9
    case 0xC2310C: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:96 LDA @LOCAL08
    case 0xC2310E: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:97 CMP #PARTY_MEMBER::POO
    case 0xC23110: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:97 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC23110.
    case 0xC23112: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:98 BNEL @UNKNOWN38
    case 0xC23113: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:98 BNEL @UNKNOWN38
    case 0xC23115: {
        Instruction step(cpu, 0x4C, 0x00344Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:100 SEP #PROC_FLAGS::ACCUM8
    case 0xC23118: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:101 LDA #1
    case 0xC2311A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:102 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    case 0xC2311C: {
        Instruction step(cpu, 0x8D, 0x00AB83u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:102 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC2311A.
    case 0xC2311D: {
        Instruction step(cpu, 0x83, 0x0000ABu, 2u, AddressMode::StackRelative);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:103 LDA #26
    case 0xC2311F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Au : 0x008D1Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:104 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC23121: {
        Instruction step(cpu, 0x8D, 0x00AB80u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:104 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC2311F.
    case 0xC23122: {
        Instruction step(cpu, 0x80, 0x0000ABu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:105 REP #PROC_FLAGS::ACCUM8
    case 0xC23124: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:106 LDA #35
    case 0xC23126: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000023u : 0x000023u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:106 LDA #35
    // Overlapping static entry reached from 0xC23126.
    case 0xC23128: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:107 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23129: {
        Instruction step(cpu, 0x8D, 0x00AB81u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:108 LDX #26
    case 0xC2312C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00001Au : 0x00001Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:108 LDX #26
    // Overlapping static entry reached from 0xC2312C.
    case 0xC2312E: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:109 LDA @LOCAL08
    case 0xC2312F: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:110 JSL CHECK_IF_PSI_KNOWN
    case 0xC23131: {
        Instruction step(cpu, 0x22, 0xC43C1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:111 CMP #0
    case 0xC23135: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:111 CMP #0
    // Overlapping static entry reached from 0xC23135.
    case 0xC23137: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:112 BEQ @UNKNOWN15
    case 0xC23138: {
        Instruction step(cpu, 0xF0, 0x000065u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:113 LDX @VIRTUAL04
    case 0xC2313A: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:114 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_LIFEUP_OMEGA) + battle_action::pp_cost
    case 0xC2313C: {
        Instruction step(cpu, 0xAF, 0xD58CC5u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:115 AND #$00FF
    case 0xC23140: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:115 AND #$00FF
    // Overlapping static entry reached from 0xC23140.
    case 0xC23142: {
        Instruction step(cpu, 0x00, 0x0000DDu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:116 CMP a:char_struct::current_pp_target,X
    case 0xC23143: {
        Instruction step(cpu, 0xDD, 0x00004Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:117 BGT @UNKNOWN15
    case 0xC23146: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler-jp.asm:117 BGT @UNKNOWN15
    case 0xC23148: {
        Instruction step(cpu, 0xB0, 0x000055u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:118 LDA #0
    case 0xC2314A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:118 LDA #0
    // Overlapping static entry reached from 0xC2314A.
    case 0xC2314C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:119 JSL COUNT_CHARS
    case 0xC2314D: {
        Instruction step(cpu, 0x22, 0xC2BA70u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:120 CMP #2
    case 0xC23151: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:120 CMP #2
    // Overlapping static entry reached from 0xC23151.
    case 0xC23153: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:121 BCC @UNKNOWN15
    case 0xC23154: {
        Instruction step(cpu, 0x90, 0x000049u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:122 LDA #0
    case 0xC23156: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:122 LDA #0
    // Overlapping static entry reached from 0xC23156.
    case 0xC23158: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:123 STA @LOCAL05
    case 0xC23159: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:124 BRA @UNKNOWN14
    case 0xC2315B: {
        Instruction step(cpu, 0x80, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:126 CLC
    case 0xC2315D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:127 ADC #.LOWORD(GAME_STATE)
    case 0xC2315E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:127 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC2315E.
    case 0xC23160: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:128 TAX
    case 0xC23161: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:129 LDA a:game_state::party_members,X
    case 0xC23162: {
        Instruction step(cpu, 0xBD, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:130 AND #$00FF
    case 0xC23165: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:130 AND #$00FF
    // Overlapping static entry reached from 0xC23165.
    case 0xC23167: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:131 TAX
    case 0xC23168: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:132 CPX #1
    case 0xC23169: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:132 CPX #1
    // Overlapping static entry reached from 0xC23169.
    case 0xC2316B: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:133 BCC @UNKNOWN13
    case 0xC2316C: {
        Instruction step(cpu, 0x90, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:134 CPX #4
    case 0xC2316E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:134 CPX #4
    // Overlapping static entry reached from 0xC2316E.
    case 0xC23170: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:135 BGT @UNKNOWN13
    case 0xC23171: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler-jp.asm:135 BGT @UNKNOWN13
    case 0xC23173: {
        Instruction step(cpu, 0xB0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:136 TXA
    case 0xC23175: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:137 DEC
    case 0xC23176: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:138 LDY #.SIZEOF(char_struct)
    case 0xC23177: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:138 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC23177.
    case 0xC23179: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:139 JSL MULT168
    case 0xC2317A: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:140 TAX
    case 0xC2317E: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:141 LDA PARTY_CHARACTERS+char_struct::max_hp,X
    case 0xC2317F: {
        Instruction step(cpu, 0xBD, 0x009C88u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:142 LSR
    case 0xC23182: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:143 LSR
    case 0xC23183: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:144 CMP PARTY_CHARACTERS+char_struct::current_hp_target,X
    case 0xC23184: {
        Instruction step(cpu, 0xDD, 0x009CC5u, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/menu_handler-jp.asm:145 BLTEQ @UNKNOWN15
    case 0xC23187: {
        Instruction step(cpu, 0x90, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/menu_handler-jp.asm:145 BLTEQ @UNKNOWN15
    case 0xC23189: {
        Instruction step(cpu, 0xF0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:147 LDA @LOCAL05
    case 0xC2318B: {
        Instruction step(cpu, 0xA5, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:148 INC
    case 0xC2318D: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:149 STA @LOCAL05
    case 0xC2318E: {
        Instruction step(cpu, 0x85, 0x00001Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:151 CMP #6
    case 0xC23190: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:151 CMP #6
    // Overlapping static entry reached from 0xC231E4.
    case 0xC23191: {
        Instruction step(cpu, 0x06, 0x000000u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:151 CMP #6
    // Overlapping static entry reached from 0xC23190.
    case 0xC23192: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:152 BCC @UNKNOWN11
    case 0xC23193: {
        Instruction step(cpu, 0x90, 0x0000C8u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:153 SEP #PROC_FLAGS::ACCUM8
    case 0xC23195: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:154 LDA #4
    case 0xC23197: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x008D04u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:155 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    case 0xC23199: {
        Instruction step(cpu, 0x8D, 0x00AB83u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:155 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC23197.
    case 0xC2319A: {
        Instruction step(cpu, 0x83, 0x0000ABu, 2u, AddressMode::StackRelative);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:156 JMP @UNKNOWN21
    case 0xC2319C: {
        Instruction step(cpu, 0x4C, 0x003259u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:158 SEP #PROC_FLAGS::ACCUM8
    case 0xC2319F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:159 LDA #25
    case 0xC231A1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000019u : 0x008D19u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:160 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC231A3: {
        Instruction step(cpu, 0x8D, 0x00AB80u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:160 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC231A1.
    case 0xC231A4: {
        Instruction step(cpu, 0x80, 0x0000ABu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:161 REP #PROC_FLAGS::ACCUM8
    case 0xC231A6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:162 LDA #34
    case 0xC231A8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000022u : 0x000022u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:162 LDA #34
    // Overlapping static entry reached from 0xC231A8.
    case 0xC231AA: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:163 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC231AB: {
        Instruction step(cpu, 0x8D, 0x00AB81u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:164 LDX #25
    case 0xC231AE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:164 LDX #25
    // Overlapping static entry reached from 0xC231AE.
    case 0xC231B0: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:165 LDA @LOCAL08
    case 0xC231B1: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:166 JSL CHECK_IF_PSI_KNOWN
    case 0xC231B3: {
        Instruction step(cpu, 0x22, 0xC43C1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:167 CMP #0
    case 0xC231B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:167 CMP #0
    // Overlapping static entry reached from 0xC231B7.
    case 0xC231B9: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:168 BEQ @UNKNOWN17
    case 0xC231BA: {
        Instruction step(cpu, 0xF0, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:169 LDX @VIRTUAL04
    case 0xC231BC: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:170 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_LIFEUP_GAMMA) + battle_action::pp_cost
    case 0xC231BE: {
        Instruction step(cpu, 0xAF, 0xD58CB9u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:171 AND #$00FF
    case 0xC231C2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:171 AND #$00FF
    // Overlapping static entry reached from 0xC231C2.
    case 0xC231C4: {
        Instruction step(cpu, 0x00, 0x0000DDu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:172 CMP a:char_struct::current_pp_target,X
    case 0xC231C5: {
        Instruction step(cpu, 0xDD, 0x00004Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:173 BGT @UNKNOWN17
    case 0xC231C8: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler-jp.asm:173 BGT @UNKNOWN17
    case 0xC231CA: {
        Instruction step(cpu, 0xB0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:174 JSL AUTOLIFEUP
    case 0xC231CC: {
        Instruction step(cpu, 0x22, 0xC475C5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:174 JSL AUTOLIFEUP
    // Overlapping static entry reached from 0xC23221.
    case 0xC231CE: {
        Instruction step(cpu, 0x75, 0x0000C4u, 2u, AddressMode::DirectPageIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:175 SEP #PROC_FLAGS::ACCUM8
    case 0xC231D0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:176 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC231D2: {
        Instruction step(cpu, 0x8D, 0x00AB84u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:177 REP #PROC_FLAGS::ACCUM8
    case 0xC231D5: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:178 AND #$00FF
    case 0xC231D7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:178 AND #$00FF
    // Overlapping static entry reached from 0xC231D7.
    case 0xC231D9: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:179 BNEL @UNKNOWN21
    case 0xC231DA: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:179 BNEL @UNKNOWN21
    case 0xC231DC: {
        Instruction step(cpu, 0x4C, 0x003259u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:181 SEP #PROC_FLAGS::ACCUM8
    case 0xC231DF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:182 LDA #24
    case 0xC231E1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x008D18u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:183 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC231E3: {
        Instruction step(cpu, 0x8D, 0x00AB80u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:183 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC231E1.
    case 0xC231E4: {
        Instruction step(cpu, 0x80, 0x0000ABu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:184 REP #PROC_FLAGS::ACCUM8
    case 0xC231E6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:185 LDA #33
    case 0xC231E8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:185 LDA #33
    // Overlapping static entry reached from 0xC231E8.
    case 0xC231EA: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:186 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC231EB: {
        Instruction step(cpu, 0x8D, 0x00AB81u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:187 LDX #24
    case 0xC231EE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:187 LDX #24
    // Overlapping static entry reached from 0xC231EE.
    case 0xC231F0: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:188 LDA @LOCAL08
    case 0xC231F1: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:189 JSL CHECK_IF_PSI_KNOWN
    case 0xC231F3: {
        Instruction step(cpu, 0x22, 0xC43C1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:190 CMP #0
    case 0xC231F7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:190 CMP #0
    // Overlapping static entry reached from 0xC231F7.
    case 0xC231F9: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:191 BEQ @UNKNOWN19
    case 0xC231FA: {
        Instruction step(cpu, 0xF0, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:192 LDX @VIRTUAL04
    case 0xC231FC: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:193 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_LIFEUP_BETA) + battle_action::pp_cost
    case 0xC231FE: {
        Instruction step(cpu, 0xAF, 0xD58CADu, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:194 AND #$00FF
    case 0xC23202: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:194 AND #$00FF
    // Overlapping static entry reached from 0xC23202.
    case 0xC23204: {
        Instruction step(cpu, 0x00, 0x0000DDu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:195 CMP a:char_struct::current_pp_target,X
    case 0xC23205: {
        Instruction step(cpu, 0xDD, 0x00004Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:196 BGT @UNKNOWN19
    case 0xC23208: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler-jp.asm:196 BGT @UNKNOWN19
    case 0xC2320A: {
        Instruction step(cpu, 0xB0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:197 JSL AUTOLIFEUP
    case 0xC2320C: {
        Instruction step(cpu, 0x22, 0xC475C5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:198 SEP #PROC_FLAGS::ACCUM8
    case 0xC23210: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:199 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC23212: {
        Instruction step(cpu, 0x8D, 0x00AB84u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:200 REP #PROC_FLAGS::ACCUM8
    case 0xC23215: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:201 AND #$00FF
    case 0xC23217: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:201 AND #$00FF
    // Overlapping static entry reached from 0xC23217.
    case 0xC23219: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:202 BNE @UNKNOWN21
    case 0xC2321A: {
        Instruction step(cpu, 0xD0, 0x00003Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:204 SEP #PROC_FLAGS::ACCUM8
    case 0xC2321C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:205 LDA #23
    case 0xC2321E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000017u : 0x008D17u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:206 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC23220: {
        Instruction step(cpu, 0x8D, 0x00AB80u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:206 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC2321E.
    case 0xC23221: {
        Instruction step(cpu, 0x80, 0x0000ABu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:207 REP #PROC_FLAGS::ACCUM8
    case 0xC23223: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:208 LDA #32
    case 0xC23225: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:208 LDA #32
    // Overlapping static entry reached from 0xC23225.
    case 0xC23227: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:209 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23228: {
        Instruction step(cpu, 0x8D, 0x00AB81u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:210 LDX #23
    case 0xC2322B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000017u : 0x000017u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:210 LDX #23
    // Overlapping static entry reached from 0xC2322B.
    case 0xC2322D: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:211 LDA @LOCAL08
    case 0xC2322E: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:212 JSL CHECK_IF_PSI_KNOWN
    case 0xC23230: {
        Instruction step(cpu, 0x22, 0xC43C1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:213 CMP #0
    case 0xC23234: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:213 CMP #0
    // Overlapping static entry reached from 0xC23234.
    case 0xC23236: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:214 BEQ @UNKNOWN22
    case 0xC23237: {
        Instruction step(cpu, 0xF0, 0x000031u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:215 LDX @VIRTUAL04
    case 0xC23239: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:216 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_LIFEUP_ALPHA) + battle_action::pp_cost
    case 0xC2323B: {
        Instruction step(cpu, 0xAF, 0xD58CA1u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:217 AND #$00FF
    case 0xC2323F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:217 AND #$00FF
    // Overlapping static entry reached from 0xC2323F.
    case 0xC23241: {
        Instruction step(cpu, 0x00, 0x0000DDu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:218 CMP a:char_struct::current_pp_target,X
    case 0xC23242: {
        Instruction step(cpu, 0xDD, 0x00004Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:219 BGT @UNKNOWN22
    case 0xC23245: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler-jp.asm:219 BGT @UNKNOWN22
    case 0xC23247: {
        Instruction step(cpu, 0xB0, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:220 JSL AUTOLIFEUP
    case 0xC23249: {
        Instruction step(cpu, 0x22, 0xC475C5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:221 SEP #PROC_FLAGS::ACCUM8
    case 0xC2324D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:222 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC2324F: {
        Instruction step(cpu, 0x8D, 0x00AB84u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:223 REP #PROC_FLAGS::ACCUM8
    case 0xC23252: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:224 AND #$00FF
    case 0xC23254: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:224 AND #$00FF
    // Overlapping static entry reached from 0xC23254.
    case 0xC23256: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:225 BEQ @UNKNOWN22
    case 0xC23257: {
        Instruction step(cpu, 0xF0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:227 REP #PROC_FLAGS::ACCUM8
    case 0xC23259: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:228 LDA @LOCAL08
    case 0xC2325B: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:229 SEP #PROC_FLAGS::ACCUM8
    case 0xC2325D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:230 STA BATTLE_MENU_SELECTION
    case 0xC2325F: {
        Instruction step(cpu, 0x8D, 0x00AB7Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:231 REP #PROC_FLAGS::ACCUM8
    case 0xC23262: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:232 LDA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23264: {
        Instruction step(cpu, 0xAD, 0x00AB81u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:233 JMP @UNKNOWN113
    case 0xC23267: {
        Instruction step(cpu, 0x4C, 0x003A4Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:235 SEP #PROC_FLAGS::ACCUM8
    case 0xC2326A: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:236 LDA #30
    case 0xC2326C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x008D1Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:237 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC2326E: {
        Instruction step(cpu, 0x8D, 0x00AB80u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:237 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC2326C.
    case 0xC2326F: {
        Instruction step(cpu, 0x80, 0x0000ABu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:238 REP #PROC_FLAGS::ACCUM8
    case 0xC23271: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:239 LDA #39
    case 0xC23273: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:239 LDA #39
    // Overlapping static entry reached from 0xC23273.
    case 0xC23275: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:240 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23276: {
        Instruction step(cpu, 0x8D, 0x00AB81u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:241 LDX #30
    case 0xC23279: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:241 LDX #30
    // Overlapping static entry reached from 0xC23279.
    case 0xC2327B: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:242 LDA @LOCAL08
    case 0xC2327C: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:243 JSL CHECK_IF_PSI_KNOWN
    case 0xC2327E: {
        Instruction step(cpu, 0x22, 0xC43C1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:244 CMP #0
    case 0xC23282: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:244 CMP #0
    // Overlapping static entry reached from 0xC23282.
    case 0xC23284: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:245 BEQ @UNKNOWN24
    case 0xC23285: {
        Instruction step(cpu, 0xF0, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:246 LDX @VIRTUAL04
    case 0xC23287: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:247 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_HEALING_OMEGA) + battle_action::pp_cost
    case 0xC23289: {
        Instruction step(cpu, 0xAF, 0xD58CF5u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:248 AND #$00FF
    case 0xC2328D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:248 AND #$00FF
    // Overlapping static entry reached from 0xC2328D.
    case 0xC2328F: {
        Instruction step(cpu, 0x00, 0x0000DDu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:249 CMP a:char_struct::current_pp_target,X
    case 0xC23290: {
        Instruction step(cpu, 0xDD, 0x00004Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:250 BGT @UNKNOWN24
    case 0xC23293: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler-jp.asm:250 BGT @UNKNOWN24
    case 0xC23295: {
        Instruction step(cpu, 0xB0, 0x000016u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:251 LDX #1
    case 0xC23297: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:251 LDX #1
    // Overlapping static entry reached from 0xC23297.
    case 0xC23299: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:252 LDA #0
    case 0xC2329A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:252 LDA #0
    // Overlapping static entry reached from 0xC2329A.
    case 0xC2329C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:253 JSL AUTOHEALING
    case 0xC2329D: {
        Instruction step(cpu, 0x22, 0xC47532u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:254 SEP #PROC_FLAGS::ACCUM8
    case 0xC232A1: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:255 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC232A3: {
        Instruction step(cpu, 0x8D, 0x00AB84u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:256 REP #PROC_FLAGS::ACCUM8
    case 0xC232A6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:257 AND #$00FF
    case 0xC232A8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:257 AND #$00FF
    // Overlapping static entry reached from 0xC232A8.
    case 0xC232AA: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:258 BNE @UNKNOWN21
    case 0xC232AB: {
        Instruction step(cpu, 0xD0, 0x0000ACu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:260 SEP #PROC_FLAGS::ACCUM8
    case 0xC232AD: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:261 LDA #29
    case 0xC232AF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Du : 0x008D1Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:262 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC232B1: {
        Instruction step(cpu, 0x8D, 0x00AB80u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:262 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC232AF.
    case 0xC232B2: {
        Instruction step(cpu, 0x80, 0x0000ABu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:263 REP #PROC_FLAGS::ACCUM8
    case 0xC232B4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:264 LDA #38
    case 0xC232B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000026u : 0x000026u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:264 LDA #38
    // Overlapping static entry reached from 0xC232B6.
    case 0xC232B8: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:265 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC232B9: {
        Instruction step(cpu, 0x8D, 0x00AB81u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:266 LDX #29
    case 0xC232BC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00001Du : 0x00001Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:266 LDX #29
    // Overlapping static entry reached from 0xC232BC.
    case 0xC232BE: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:267 LDA @LOCAL08
    case 0xC232BF: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:268 JSL CHECK_IF_PSI_KNOWN
    case 0xC232C1: {
        Instruction step(cpu, 0x22, 0xC43C1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:269 CMP #0
    case 0xC232C5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:269 CMP #0
    // Overlapping static entry reached from 0xC232C5.
    case 0xC232C7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:270 BEQ @UNKNOWN28
    case 0xC232C8: {
        Instruction step(cpu, 0xF0, 0x000064u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:271 LDX @VIRTUAL04
    case 0xC232CA: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:272 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_HEALING_GAMMA) + battle_action::pp_cost
    case 0xC232CC: {
        Instruction step(cpu, 0xAF, 0xD58CE9u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:273 AND #$00FF
    case 0xC232D0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:273 AND #$00FF
    // Overlapping static entry reached from 0xC232D0.
    case 0xC232D2: {
        Instruction step(cpu, 0x00, 0x0000DDu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:274 CMP a:char_struct::current_pp_target,X
    case 0xC232D3: {
        Instruction step(cpu, 0xDD, 0x00004Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:275 BGT @UNKNOWN28
    case 0xC232D6: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler-jp.asm:275 BGT @UNKNOWN28
    case 0xC232D8: {
        Instruction step(cpu, 0xB0, 0x000054u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:276 LDX #3
    case 0xC232DA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:276 LDX #3
    // Overlapping static entry reached from 0xC232DA.
    case 0xC232DC: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:277 LDA #0
    case 0xC232DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:277 LDA #0
    // Overlapping static entry reached from 0xC232DD.
    case 0xC232DF: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:278 JSL AUTOHEALING
    case 0xC232E0: {
        Instruction step(cpu, 0x22, 0xC47532u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:279 SEP #PROC_FLAGS::ACCUM8
    case 0xC232E4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:280 LDY #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    case 0xC232E6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000084u : 0x00AB84u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:280 LDY #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    // Overlapping static entry reached from 0xC232E6.
    case 0xC232E8: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:281 STY @LOCAL04
    case 0xC232E9: {
        Instruction step(cpu, 0x84, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:282 STA __BSS_START__,Y
    case 0xC232EB: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:283 REP #PROC_FLAGS::ACCUM8
    case 0xC232EE: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:284 AND #$00FF
    case 0xC232F0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:284 AND #$00FF
    // Overlapping static entry reached from 0xC232F0.
    case 0xC232F2: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:285 BNEL @UNKNOWN21
    case 0xC232F3: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:285 BNEL @UNKNOWN21
    case 0xC232F5: {
        Instruction step(cpu, 0x4C, 0x003259u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:286 LDX #2
    case 0xC232F8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:286 LDX #2
    // Overlapping static entry reached from 0xC232F8.
    case 0xC232FA: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:287 LDA #0
    case 0xC232FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:287 LDA #0
    // Overlapping static entry reached from 0xC232FB.
    case 0xC232FD: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:288 JSL AUTOHEALING
    case 0xC232FE: {
        Instruction step(cpu, 0x22, 0xC47532u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:289 SEP #PROC_FLAGS::ACCUM8
    case 0xC23302: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:290 LDY @LOCAL04
    case 0xC23304: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:291 STA __BSS_START__,Y
    case 0xC23306: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:292 REP #PROC_FLAGS::ACCUM8
    case 0xC23309: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:293 AND #$00FF
    case 0xC2330B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:293 AND #$00FF
    // Overlapping static entry reached from 0xC2330B.
    case 0xC2330D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:294 BNEL @UNKNOWN21
    case 0xC2330E: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:294 BNEL @UNKNOWN21
    case 0xC23310: {
        Instruction step(cpu, 0x4C, 0x003259u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:295 LDX #1
    case 0xC23313: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:295 LDX #1
    // Overlapping static entry reached from 0xC23313.
    case 0xC23315: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:296 LDA #0
    case 0xC23316: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:296 LDA #0
    // Overlapping static entry reached from 0xC23316.
    case 0xC23318: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:297 JSL AUTOHEALING
    case 0xC23319: {
        Instruction step(cpu, 0x22, 0xC47532u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:298 SEP #PROC_FLAGS::ACCUM8
    case 0xC2331D: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:299 LDY @LOCAL04
    case 0xC2331F: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:300 STA __BSS_START__,Y
    case 0xC23321: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:301 REP #PROC_FLAGS::ACCUM8
    case 0xC23324: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:302 AND #$00FF
    case 0xC23326: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:302 AND #$00FF
    // Overlapping static entry reached from 0xC23326.
    case 0xC23328: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:303 BNEL @UNKNOWN21
    case 0xC23329: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:303 BNEL @UNKNOWN21
    case 0xC2332B: {
        Instruction step(cpu, 0x4C, 0x003259u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:305 SEP #PROC_FLAGS::ACCUM8
    case 0xC2332E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:306 LDA #28
    case 0xC23330: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Cu : 0x008D1Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:307 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC23332: {
        Instruction step(cpu, 0x8D, 0x00AB80u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:307 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC23330.
    case 0xC23333: {
        Instruction step(cpu, 0x80, 0x0000ABu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:308 REP #PROC_FLAGS::ACCUM8
    case 0xC23335: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:309 LDA #37
    case 0xC23337: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000025u : 0x000025u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:309 LDA #37
    // Overlapping static entry reached from 0xC23337.
    case 0xC23339: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:310 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC2333A: {
        Instruction step(cpu, 0x8D, 0x00AB81u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:311 LDX #28
    case 0xC2333D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00001Cu : 0x00001Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:311 LDX #28
    // Overlapping static entry reached from 0xC2333D.
    case 0xC2333F: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:312 LDA @LOCAL08
    case 0xC23340: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:313 JSL CHECK_IF_PSI_KNOWN
    case 0xC23342: {
        Instruction step(cpu, 0x22, 0xC43C1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:314 CMP #0
    case 0xC23346: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:314 CMP #0
    // Overlapping static entry reached from 0xC23346.
    case 0xC23348: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:315 BEQL @UNKNOWN34
    case 0xC23349: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:315 BEQL @UNKNOWN34
    case 0xC2334B: {
        Instruction step(cpu, 0x4C, 0x0033CBu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:316 LDX @VIRTUAL04
    case 0xC2334E: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:317 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_HEALING_BETA) + battle_action::pp_cost
    case 0xC23350: {
        Instruction step(cpu, 0xAF, 0xD58CDDu, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:318 AND #$00FF
    case 0xC23354: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:318 AND #$00FF
    // Overlapping static entry reached from 0xC23354.
    case 0xC23356: {
        Instruction step(cpu, 0x00, 0x0000DDu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:319 CMP a:char_struct::current_pp_target,X
    case 0xC23357: {
        Instruction step(cpu, 0xDD, 0x00004Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:320 BGT @UNKNOWN34
    case 0xC2335A: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler-jp.asm:320 BGT @UNKNOWN34
    case 0xC2335C: {
        Instruction step(cpu, 0xB0, 0x00006Du, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:321 LDX #5
    case 0xC2335E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:321 LDX #5
    // Overlapping static entry reached from 0xC2335E.
    case 0xC23360: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:322 LDA #0
    case 0xC23361: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:322 LDA #0
    // Overlapping static entry reached from 0xC23361.
    case 0xC23363: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:323 JSL AUTOHEALING
    case 0xC23364: {
        Instruction step(cpu, 0x22, 0xC47532u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:324 SEP #PROC_FLAGS::ACCUM8
    case 0xC23368: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:325 LDY #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    case 0xC2336A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000084u : 0x00AB84u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:325 LDY #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    // Overlapping static entry reached from 0xC2336A.
    case 0xC2336C: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:326 STY @LOCAL09
    case 0xC2336D: {
        Instruction step(cpu, 0x84, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:327 STA __BSS_START__,Y
    case 0xC2336F: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:328 REP #PROC_FLAGS::ACCUM8
    case 0xC23372: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:329 AND #$00FF
    case 0xC23374: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:329 AND #$00FF
    // Overlapping static entry reached from 0xC23374.
    case 0xC23376: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:330 BNEL @UNKNOWN21
    case 0xC23377: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:330 BNEL @UNKNOWN21
    case 0xC23379: {
        Instruction step(cpu, 0x4C, 0x003259u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:331 LDX #4
    case 0xC2337C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:331 LDX #4
    // Overlapping static entry reached from 0xC233D0.
    case 0xC2337D: {
        Instruction step(cpu, 0x04, 0x000000u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:331 LDX #4
    // Overlapping static entry reached from 0xC2337C.
    case 0xC2337E: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:332 LDA #0
    case 0xC2337F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:332 LDA #0
    // Overlapping static entry reached from 0xC2337F.
    case 0xC23381: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:333 JSL AUTOHEALING
    case 0xC23382: {
        Instruction step(cpu, 0x22, 0xC47532u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:334 SEP #PROC_FLAGS::ACCUM8
    case 0xC23386: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:335 LDY @LOCAL09
    case 0xC23388: {
        Instruction step(cpu, 0xA4, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:336 STA __BSS_START__,Y
    case 0xC2338A: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:337 REP #PROC_FLAGS::ACCUM8
    case 0xC2338D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:338 AND #$00FF
    case 0xC2338F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:338 AND #$00FF
    // Overlapping static entry reached from 0xC2338F.
    case 0xC23391: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:339 BNEL @UNKNOWN21
    case 0xC23392: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:339 BNEL @UNKNOWN21
    case 0xC23394: {
        Instruction step(cpu, 0x4C, 0x003259u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:340 LDX #2
    case 0xC23397: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:340 LDX #2
    // Overlapping static entry reached from 0xC23397.
    case 0xC23399: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:341 TXA
    case 0xC2339A: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:342 JSL AUTOHEALING
    case 0xC2339B: {
        Instruction step(cpu, 0x22, 0xC47532u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:343 SEP #PROC_FLAGS::ACCUM8
    case 0xC2339F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:344 LDY @LOCAL09
    case 0xC233A1: {
        Instruction step(cpu, 0xA4, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:345 STA __BSS_START__,Y
    case 0xC233A3: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:346 REP #PROC_FLAGS::ACCUM8
    case 0xC233A6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:347 AND #$00FF
    case 0xC233A8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:347 AND #$00FF
    // Overlapping static entry reached from 0xC233A8.
    case 0xC233AA: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:348 BNEL @UNKNOWN21
    case 0xC233AB: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:348 BNEL @UNKNOWN21
    case 0xC233AD: {
        Instruction step(cpu, 0x4C, 0x003259u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:349 LDX #1
    case 0xC233B0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:349 LDX #1
    // Overlapping static entry reached from 0xC233B0.
    case 0xC233B2: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:350 LDA #3
    case 0xC233B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:350 LDA #3
    // Overlapping static entry reached from 0xC233B3.
    case 0xC233B5: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:351 JSL AUTOHEALING
    case 0xC233B6: {
        Instruction step(cpu, 0x22, 0xC47532u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:352 SEP #PROC_FLAGS::ACCUM8
    case 0xC233BA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:353 LDY @LOCAL09
    case 0xC233BC: {
        Instruction step(cpu, 0xA4, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:354 STA __BSS_START__,Y
    case 0xC233BE: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:355 REP #PROC_FLAGS::ACCUM8
    case 0xC233C1: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:356 AND #$00FF
    case 0xC233C3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:356 AND #$00FF
    // Overlapping static entry reached from 0xC233C3.
    case 0xC233C5: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:357 BNEL @UNKNOWN21
    case 0xC233C6: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:357 BNEL @UNKNOWN21
    case 0xC233C8: {
        Instruction step(cpu, 0x4C, 0x003259u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:359 SEP #PROC_FLAGS::ACCUM8
    case 0xC233CB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:360 LDA #27
    case 0xC233CD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Bu : 0x008D1Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:361 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC233CF: {
        Instruction step(cpu, 0x8D, 0x00AB80u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:361 STA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    // Overlapping static entry reached from 0xC233CD.
    case 0xC233D0: {
        Instruction step(cpu, 0x80, 0x0000ABu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:362 REP #PROC_FLAGS::ACCUM8
    case 0xC233D2: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:363 LDA #36
    case 0xC233D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000024u : 0x000024u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:363 LDA #36
    // Overlapping static entry reached from 0xC233D4.
    case 0xC233D6: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:364 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC233D7: {
        Instruction step(cpu, 0x8D, 0x00AB81u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:365 LDX #27
    case 0xC233DA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:365 LDX #27
    // Overlapping static entry reached from 0xC233DA.
    case 0xC233DC: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:366 LDA @LOCAL08
    case 0xC233DD: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:367 JSL CHECK_IF_PSI_KNOWN
    case 0xC233DF: {
        Instruction step(cpu, 0x22, 0xC43C1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:368 CMP #0
    case 0xC233E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:368 CMP #0
    // Overlapping static entry reached from 0xC233E3.
    case 0xC233E5: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:369 BEQ @UNKNOWN38
    case 0xC233E6: {
        Instruction step(cpu, 0xF0, 0x000064u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:370 LDX @VIRTUAL04
    case 0xC233E8: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:371 LDA f:BATTLE_ACTION_TABLE + (.SIZEOF(battle_action) * BATTLE_ACTIONS::PSI_HEALING_ALPHA) + battle_action::pp_cost
    case 0xC233EA: {
        Instruction step(cpu, 0xAF, 0xD58CD1u, 4u, AddressMode::Long);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:372 AND #$00FF
    case 0xC233EE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:372 AND #$00FF
    // Overlapping static entry reached from 0xC233EE.
    case 0xC233F0: {
        Instruction step(cpu, 0x00, 0x0000DDu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:373 CMP a:char_struct::current_pp_target,X
    case 0xC233F1: {
        Instruction step(cpu, 0xDD, 0x00004Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:374 BGT @UNKNOWN38
    case 0xC233F4: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler-jp.asm:374 BGT @UNKNOWN38
    case 0xC233F6: {
        Instruction step(cpu, 0xB0, 0x000054u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:375 LDX #7
    case 0xC233F8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:375 LDX #7
    // Overlapping static entry reached from 0xC233F8.
    case 0xC233FA: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:376 LDA #0
    case 0xC233FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:376 LDA #0
    // Overlapping static entry reached from 0xC233FB.
    case 0xC233FD: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:377 JSL AUTOHEALING
    case 0xC233FE: {
        Instruction step(cpu, 0x22, 0xC47532u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:378 SEP #PROC_FLAGS::ACCUM8
    case 0xC23402: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:379 LDY #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    case 0xC23404: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000084u : 0x00AB84u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:379 LDY #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    // Overlapping static entry reached from 0xC23404.
    case 0xC23406: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:380 STY @LOCAL04
    case 0xC23407: {
        Instruction step(cpu, 0x84, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:381 STA __BSS_START__,Y
    case 0xC23409: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:382 REP #PROC_FLAGS::ACCUM8
    case 0xC2340C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:383 AND #$00FF
    case 0xC2340E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:383 AND #$00FF
    // Overlapping static entry reached from 0xC2340E.
    case 0xC23410: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:384 BNEL @UNKNOWN21
    case 0xC23411: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:384 BNEL @UNKNOWN21
    case 0xC23413: {
        Instruction step(cpu, 0x4C, 0x003259u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:385 LDX #6
    case 0xC23416: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:385 LDX #6
    // Overlapping static entry reached from 0xC23416.
    case 0xC23418: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:386 LDA #0
    case 0xC23419: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:386 LDA #0
    // Overlapping static entry reached from 0xC23419.
    case 0xC2341B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:387 JSL AUTOHEALING
    case 0xC2341C: {
        Instruction step(cpu, 0x22, 0xC47532u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:388 SEP #PROC_FLAGS::ACCUM8
    case 0xC23420: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:389 LDY @LOCAL04
    case 0xC23422: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:390 STA __BSS_START__,Y
    case 0xC23424: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:391 REP #PROC_FLAGS::ACCUM8
    case 0xC23427: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:392 AND #$00FF
    case 0xC23429: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:392 AND #$00FF
    // Overlapping static entry reached from 0xC23429.
    case 0xC2342B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:393 BNEL @UNKNOWN21
    case 0xC2342C: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:393 BNEL @UNKNOWN21
    case 0xC2342E: {
        Instruction step(cpu, 0x4C, 0x003259u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:394 LDX #1
    case 0xC23431: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:394 LDX #1
    // Overlapping static entry reached from 0xC23431.
    case 0xC23433: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:395 LDA #2
    case 0xC23434: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:395 LDA #2
    // Overlapping static entry reached from 0xC23434.
    case 0xC23436: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:396 JSL AUTOHEALING
    case 0xC23437: {
        Instruction step(cpu, 0x22, 0xC47532u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:397 SEP #PROC_FLAGS::ACCUM8
    case 0xC2343B: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:398 LDY @LOCAL04
    case 0xC2343D: {
        Instruction step(cpu, 0xA4, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:399 STA __BSS_START__,Y
    case 0xC2343F: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:400 REP #PROC_FLAGS::ACCUM8
    case 0xC23442: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:401 AND #$00FF
    case 0xC23444: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:401 AND #$00FF
    // Overlapping static entry reached from 0xC23444.
    case 0xC23446: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:402 BNEL @UNKNOWN21
    case 0xC23447: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:402 BNEL @UNKNOWN21
    case 0xC23449: {
        Instruction step(cpu, 0x4C, 0x003259u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:404 LDA @LOCAL06
    case 0xC2344C: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:405 BEQ @UNKNOWN39
    case 0xC2344E: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:406 CMP #1
    case 0xC23450: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:406 CMP #1
    // Overlapping static entry reached from 0xC23450.
    case 0xC23452: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:407 BEQ @UNKNOWN40
    case 0xC23453: {
        Instruction step(cpu, 0xF0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:408 CMP #2
    case 0xC23455: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:408 CMP #2
    // Overlapping static entry reached from 0xC23455.
    case 0xC23457: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:409 BEQ @UNKNOWN41
    case 0xC23458: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:410 BRA @UNKNOWN42
    case 0xC2345A: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:412 LDA #4
    case 0xC2345C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:412 LDA #4
    // Overlapping static entry reached from 0xC2345C.
    case 0xC2345E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:413 STA @LOCAL03
    case 0xC2345F: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:414 BRA @UNKNOWN42
    case 0xC23461: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:416 LDA #5
    case 0xC23463: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:416 LDA #5
    // Overlapping static entry reached from 0xC23463.
    case 0xC23465: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:417 STA @LOCAL03
    case 0xC23466: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:418 BRA @UNKNOWN42
    case 0xC23468: {
        Instruction step(cpu, 0x80, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:420 LDA #1
    case 0xC2346A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:420 LDA #1
    // Overlapping static entry reached from 0xC2346A.
    case 0xC2346C: {
        Instruction step(cpu, 0x00, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:421 JMP @UNKNOWN113
    case 0xC2346D: {
        Instruction step(cpu, 0x4C, 0x003A4Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:423 LDA @LOCAL08
    case 0xC23470: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:424 SEP #PROC_FLAGS::ACCUM8
    case 0xC23472: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:425 STA BATTLE_MENU_SELECTION
    case 0xC23474: {
        Instruction step(cpu, 0x8D, 0x00AB7Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:426 STZ BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC23477: {
        Instruction step(cpu, 0x9C, 0x00AB80u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:427 REP #PROC_FLAGS::ACCUM8
    case 0xC2347A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:428 LDA @LOCAL03
    case 0xC2347C: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:429 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC2347E: {
        Instruction step(cpu, 0x8D, 0x00AB81u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:430 SEP #PROC_FLAGS::ACCUM8
    case 0xC23481: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:431 LDA #17
    case 0xC23483: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000011u : 0x008D11u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:432 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    case 0xC23485: {
        Instruction step(cpu, 0x8D, 0x00AB83u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:432 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC23483.
    case 0xC23486: {
        Instruction step(cpu, 0x83, 0x0000ABu, 2u, AddressMode::StackRelative);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:433 REP #PROC_FLAGS::ACCUM8
    case 0xC23488: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:434 LDA NUM_BATTLERS_IN_FRONT_ROW
    case 0xC2348A: {
        Instruction step(cpu, 0xAD, 0x00AF2Bu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:435 CLC
    case 0xC2348D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:436 ADC NUM_BATTLERS_IN_BACK_ROW
    case 0xC2348E: {
        Instruction step(cpu, 0x6D, 0x00AF2Du, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:437 JSR RAND_LIMIT
    case 0xC23491: {
        Instruction step(cpu, 0x20, 0x00696Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:438 SEP #PROC_FLAGS::ACCUM8
    case 0xC23494: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:439 INC
    case 0xC23496: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:440 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC23497: {
        Instruction step(cpu, 0x8D, 0x00AB84u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:441 REP #PROC_FLAGS::ACCUM8
    case 0xC2349A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:442 LDA @LOCAL03
    case 0xC2349C: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:443 JMP @UNKNOWN113
    case 0xC2349E: {
        Instruction step(cpu, 0x4C, 0x003A4Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:445 JSL UNKNOWN_EF0262
    case 0xC234A1: {
        Instruction step(cpu, 0x22, 0xC13429u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:446 LDA @LOCAL08
    case 0xC234A5: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:447 CMP #PARTY_MEMBER::PAULA
    case 0xC234A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:447 CMP #PARTY_MEMBER::PAULA
    // Overlapping static entry reached from 0xC234A7.
    case 0xC234A9: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:448 BEQ @UNKNOWN44
    case 0xC234AA: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:449 LDA @LOCAL08
    case 0xC234AC: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:450 CMP #PARTY_MEMBER::POO
    case 0xC234AE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:450 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC234AE.
    case 0xC234B0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:451 BNE @UNKNOWN45
    case 0xC234B1: {
        Instruction step(cpu, 0xD0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:453 LDA #1
    case 0xC234B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:453 LDA #1
    // Overlapping static entry reached from 0xC234B3.
    case 0xC234B5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:454 STA @LOCAL03
    case 0xC234B6: {
        Instruction step(cpu, 0x85, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:455 BRA @UNKNOWN46
    case 0xC234B8: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:457 STZ @LOCAL03
    case 0xC234BA: {
        Instruction step(cpu, 0x64, 0x00001Au, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:459 LDA @LOCAL09
    case 0xC234BC: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:460 BNE @UNKNOWN47
    case 0xC234BE: {
        Instruction step(cpu, 0xD0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:461 INC @LOCAL03
    case 0xC234C0: {
        Instruction step(cpu, 0xE6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:463 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    case 0xC234C2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00005Fu : 0x00765Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:463 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    // Overlapping static entry reached from 0xC234C2.
    case 0xC234C4: {
        Instruction step(cpu, 0x76, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_right();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:463 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    case 0xC234C5: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:463 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    // Overlapping static entry reached from 0xC234C4.
    case 0xC234C6: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:463 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    case 0xC234C7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:463 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    // Overlapping static entry reached from 0xC234C6.
    case 0xC234C8: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:463 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    // Overlapping static entry reached from 0xC234C7.
    case 0xC234C9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler-jp.asm:463 LOADPTR BATTLE_WINDOW_SIZES, @VIRTUAL06
    case 0xC234CA: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:464 LDA @LOCAL03
    case 0xC234CC: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:465 CLC
    case 0xC234CE: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:466 ADC @VIRTUAL06
    case 0xC234CF: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:467 STA @VIRTUAL06
    case 0xC234D1: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:468 LDA [@VIRTUAL06]
    case 0xC234D3: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:469 AND #$00FF
    case 0xC234D5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:469 AND #$00FF
    // Overlapping static entry reached from 0xC234D5.
    case 0xC234D7: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:470 JSL REDIRECT_CREATE_WINDOW
    case 0xC234D8: {
        Instruction step(cpu, 0x22, 0xC1DB24u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:471 LDA @LOCAL08
    case 0xC234DC: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:472 DEC
    case 0xC234DE: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:473 LDY #.SIZEOF(char_struct)
    case 0xC234DF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:473 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC234DF.
    case 0xC234E1: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:474 JSL MULT168
    case 0xC234E2: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:475 CLC
    case 0xC234E6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:476 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC234E7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00007Fu : 0x009C7Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:476 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC234E7.
    case 0xC234E9: {
        Instruction step(cpu, 0x9C, 0x000A85u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:477 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC234EA: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/menu_handler-jp.asm:477 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC234EC: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/menu_handler-jp.asm:477 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC234ED: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/menu_handler-jp.asm:477 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC234EF: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:477 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC234F0: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/menu_handler-jp.asm:477 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC234F2: {
        Instruction step(cpu, 0x64, 0x00000Du, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:478 REP #PROC_FLAGS::ACCUM8
    case 0xC234F4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler-jp.asm:479 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC234F6: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:479 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC234F8: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler-jp.asm:479 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC234FA: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:479 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC234FC: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:480 LDX #4
    case 0xC234FE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:480 LDX #4
    // Overlapping static entry reached from 0xC234FE.
    case 0xC23500: {
        Instruction step(cpu, 0x00, 0x0000A7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:481 LDA [@VIRTUAL06]
    case 0xC23501: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:482 AND #$00FF
    case 0xC23503: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:482 AND #$00FF
    // Overlapping static entry reached from 0xC23503.
    case 0xC23505: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:483 JSL SET_WINDOW_TITLE
    case 0xC23506: {
        Instruction step(cpu, 0x22, 0xC2030Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:484 LDA @LOCAL06
    case 0xC2350A: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:485 BEQ @UNKNOWN48
    case 0xC2350C: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:486 CMP #1
    case 0xC2350E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:486 CMP #1
    // Overlapping static entry reached from 0xC2350E.
    case 0xC23510: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:487 BEQ @UNKNOWN49
    case 0xC23511: {
        Instruction step(cpu, 0xF0, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:488 CMP #2
    case 0xC23513: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:488 CMP #2
    // Overlapping static entry reached from 0xC23513.
    case 0xC23515: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:489 BEQ @UNKNOWN50
    case 0xC23516: {
        Instruction step(cpu, 0xF0, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:490 BRA @UNKNOWN51
    case 0xC23518: {
        Instruction step(cpu, 0x80, 0x000061u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:492 LOADPTR BATTLE_MENU_TEXT_BASH, @LOCAL00
    case 0xC2351A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B7u : 0x0074B7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:492 LOADPTR BATTLE_MENU_TEXT_BASH, @LOCAL00
    // Overlapping static entry reached from 0xC2351A.
    case 0xC2351C: {
        Instruction step(cpu, 0x74, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:492 LOADPTR BATTLE_MENU_TEXT_BASH, @LOCAL00
    case 0xC2351D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:492 LOADPTR BATTLE_MENU_TEXT_BASH, @LOCAL00
    // Overlapping static entry reached from 0xC2351C.
    case 0xC2351E: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:492 LOADPTR BATTLE_MENU_TEXT_BASH, @LOCAL00
    case 0xC2351F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:492 LOADPTR BATTLE_MENU_TEXT_BASH, @LOCAL00
    // Overlapping static entry reached from 0xC2351F.
    case 0xC23521: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler-jp.asm:492 LOADPTR BATTLE_MENU_TEXT_BASH, @LOCAL00
    case 0xC23522: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:493 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23524: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:493 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC23524.
    case 0xC23526: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:493 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23527: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:493 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23529: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:493 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC23529.
    case 0xC2352B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:493 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC2352C: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:494 LDY #0
    case 0xC2352E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:494 LDY #0
    // Overlapping static entry reached from 0xC2352E.
    case 0xC23530: {
        Instruction step(cpu, 0x00, 0x0000BBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:495 TYX
    case 0xC23531: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:496 LDA #1
    case 0xC23532: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:496 LDA #1
    // Overlapping static entry reached from 0xC23532.
    case 0xC23534: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:497 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC23535: {
        Instruction step(cpu, 0x22, 0xC1DBB5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:498 BRA @UNKNOWN51
    case 0xC23539: {
        Instruction step(cpu, 0x80, 0x000040u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:500 LOADPTR BATTLE_MENU_TEXT_SHOOT, @LOCAL00
    case 0xC2353B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0074D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:500 LOADPTR BATTLE_MENU_TEXT_SHOOT, @LOCAL00
    // Overlapping static entry reached from 0xC2353B.
    case 0xC2353D: {
        Instruction step(cpu, 0x74, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:500 LOADPTR BATTLE_MENU_TEXT_SHOOT, @LOCAL00
    case 0xC2353E: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:500 LOADPTR BATTLE_MENU_TEXT_SHOOT, @LOCAL00
    // Overlapping static entry reached from 0xC2353D.
    case 0xC2353F: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:500 LOADPTR BATTLE_MENU_TEXT_SHOOT, @LOCAL00
    case 0xC23540: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:500 LOADPTR BATTLE_MENU_TEXT_SHOOT, @LOCAL00
    // Overlapping static entry reached from 0xC23540.
    case 0xC23542: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler-jp.asm:500 LOADPTR BATTLE_MENU_TEXT_SHOOT, @LOCAL00
    case 0xC23543: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:501 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23545: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:501 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC23545.
    case 0xC23547: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:501 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23548: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:501 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC2354A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:501 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC2354A.
    case 0xC2354C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:501 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC2354D: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:502 LDY #0
    case 0xC2354F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:502 LDY #0
    // Overlapping static entry reached from 0xC2354F.
    case 0xC23551: {
        Instruction step(cpu, 0x00, 0x0000BBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:503 TYX
    case 0xC23552: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:504 LDA #1
    case 0xC23553: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:504 LDA #1
    // Overlapping static entry reached from 0xC23553.
    case 0xC23555: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:505 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC23556: {
        Instruction step(cpu, 0x22, 0xC1DBB5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:506 BRA @UNKNOWN51
    case 0xC2355A: {
        Instruction step(cpu, 0x80, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:508 LOADPTR BATTLE_MENU_TEXT_DO_NOTHING, @LOCAL00
    case 0xC2355C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E9u : 0x0074E9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:508 LOADPTR BATTLE_MENU_TEXT_DO_NOTHING, @LOCAL00
    // Overlapping static entry reached from 0xC2355C.
    case 0xC2355E: {
        Instruction step(cpu, 0x74, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:508 LOADPTR BATTLE_MENU_TEXT_DO_NOTHING, @LOCAL00
    case 0xC2355F: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:508 LOADPTR BATTLE_MENU_TEXT_DO_NOTHING, @LOCAL00
    // Overlapping static entry reached from 0xC2355E.
    case 0xC23560: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:508 LOADPTR BATTLE_MENU_TEXT_DO_NOTHING, @LOCAL00
    case 0xC23561: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:508 LOADPTR BATTLE_MENU_TEXT_DO_NOTHING, @LOCAL00
    // Overlapping static entry reached from 0xC23561.
    case 0xC23563: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler-jp.asm:508 LOADPTR BATTLE_MENU_TEXT_DO_NOTHING, @LOCAL00
    case 0xC23564: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:509 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23566: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:509 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC23566.
    case 0xC23568: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:509 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23569: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:509 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC2356B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:509 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC2356B.
    case 0xC2356D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:509 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC2356E: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:510 LDY #0
    case 0xC23570: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:510 LDY #0
    // Overlapping static entry reached from 0xC23570.
    case 0xC23572: {
        Instruction step(cpu, 0x00, 0x0000BBu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:511 TYX
    case 0xC23573: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:512 LDA #1
    case 0xC23574: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:512 LDA #1
    // Overlapping static entry reached from 0xC23574.
    case 0xC23576: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:513 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC23577: {
        Instruction step(cpu, 0x22, 0xC1DBB5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:515 LDA @LOCAL06
    case 0xC2357B: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:516 CMP #2
    case 0xC2357D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:516 CMP #2
    // Overlapping static entry reached from 0xC2357D.
    case 0xC2357F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:517 BEQ @UNKNOWN53
    case 0xC23580: {
        Instruction step(cpu, 0xF0, 0x000068u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:519 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    case 0xC23582: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B7u : 0x0074B7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:519 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC23582.
    case 0xC23584: {
        Instruction step(cpu, 0x74, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:519 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    case 0xC23585: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:519 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC23584.
    case 0xC23586: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:519 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    case 0xC23587: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:519 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC23586.
    case 0xC23588: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:519 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC23587.
    case 0xC23589: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler-jp.asm:519 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    case 0xC2358A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler-jp.asm:520 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2358C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:520 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2358E: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler-jp.asm:520 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC23590: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:520 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC23592: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:521 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23594: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:521 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC23594.
    case 0xC23596: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:521 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23597: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:521 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23599: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:521 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC23599.
    case 0xC2359B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:521 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC2359C: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:522 LDA #5
    case 0xC2359E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:522 LDA #5
    // Overlapping static entry reached from 0xC2359E.
    case 0xC235A0: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:523 CLC
    case 0xC235A1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:524 ADC @VIRTUAL06
    case 0xC235A2: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:525 STA @VIRTUAL06
    case 0xC235A4: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:526 STA @LOCAL00
    case 0xC235A6: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:527 LDA @VIRTUAL06+2
    case 0xC235A8: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:528 STA @LOCAL00+2
    case 0xC235AA: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler-jp.asm:529 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC235AC: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:529 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC235AE: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler-jp.asm:529 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC235B0: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:529 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC235B2: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:530 LDY #0
    case 0xC235B4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:530 LDY #0
    // Overlapping static entry reached from 0xC235B4.
    case 0xC235B6: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:531 LDX #5
    case 0xC235B7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:531 LDX #5
    // Overlapping static entry reached from 0xC235B7.
    case 0xC235B9: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:532 LDA #2
    case 0xC235BA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:532 LDA #2
    // Overlapping static entry reached from 0xC235BA.
    case 0xC235BC: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:533 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC235BD: {
        Instruction step(cpu, 0x22, 0xC1DBB5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:534 LDA #20
    case 0xC235C1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:534 LDA #20
    // Overlapping static entry reached from 0xC235C1.
    case 0xC235C3: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/menu_handler-jp.asm:535 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC235C4: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/menu_handler-jp.asm:535 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC235C6: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/menu_handler-jp.asm:535 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC235C8: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:535 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC235CA: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:536 CLC
    case 0xC235CC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:537 ADC @VIRTUAL06
    case 0xC235CD: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:538 STA @VIRTUAL06
    case 0xC235CF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:539 STA @LOCAL00
    case 0xC235D1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:540 LDA @VIRTUAL06+2
    case 0xC235D3: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:541 STA @LOCAL00+2
    case 0xC235D5: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler-jp.asm:542 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC235D7: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:542 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC235D9: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler-jp.asm:542 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC235DB: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:542 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC235DD: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:543 LDY #1
    case 0xC235DF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:543 LDY #1
    // Overlapping static entry reached from 0xC235DF.
    case 0xC235E1: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:544 LDX #5
    case 0xC235E2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:544 LDX #5
    // Overlapping static entry reached from 0xC235E2.
    case 0xC235E4: {
        Instruction step(cpu, 0x00, 0x00008Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:545 TXA
    case 0xC235E5: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:546 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC235E6: {
        Instruction step(cpu, 0x22, 0xC1DBB5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:548 LDA @LOCAL09
    case 0xC235EA: {
        Instruction step(cpu, 0xA5, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:549 BNEL @UNKNOWN59
    case 0xC235EC: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:549 BNEL @UNKNOWN59
    case 0xC235EE: {
        Instruction step(cpu, 0x4C, 0x00366Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:550 LDA @LOCAL03
    case 0xC235F1: {
        Instruction step(cpu, 0xA5, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:551 CMP #2
    case 0xC235F3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:551 CMP #2
    // Overlapping static entry reached from 0xC235F3.
    case 0xC235F5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:552 BNE @UNKNOWN55
    case 0xC235F6: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:553 LDX #15
    case 0xC235F8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:553 LDX #15
    // Overlapping static entry reached from 0xC235F8.
    case 0xC235FA: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:554 BRA @UNKNOWN56
    case 0xC235FB: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:556 LDX #10
    case 0xC235FD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:556 LDX #10
    // Overlapping static entry reached from 0xC235FD.
    case 0xC235FF: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:558 STX @LOCAL09
    case 0xC23600: {
        Instruction step(cpu, 0x86, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:559 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    case 0xC23602: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B7u : 0x0074B7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:559 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC23602.
    case 0xC23604: {
        Instruction step(cpu, 0x74, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:559 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    case 0xC23605: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:559 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC23604.
    case 0xC23606: {
        Instruction step(cpu, 0x06, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:559 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    case 0xC23607: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:559 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC23606.
    case 0xC23608: {
        Instruction step(cpu, 0xC4, 0x000000u, 2u, AddressMode::DirectPage);
        step.compare_y();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:559 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC23607.
    case 0xC23609: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler-jp.asm:559 LOADPTR BATTLE_MENU_TEXT, @VIRTUAL06
    case 0xC2360A: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler-jp.asm:560 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2360C: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:560 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2360E: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler-jp.asm:560 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC23610: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:560 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC23612: {
        Instruction step(cpu, 0x85, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:561 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23614: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:561 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC23614.
    case 0xC23616: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:561 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23617: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:561 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC23619: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:561 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC23619.
    case 0xC2361B: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:561 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC2361C: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:562 LDA #10
    case 0xC2361E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:562 LDA #10
    // Overlapping static entry reached from 0xC2361E.
    case 0xC23620: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:563 CLC
    case 0xC23621: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:564 ADC @VIRTUAL06
    case 0xC23622: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:565 STA @VIRTUAL06
    case 0xC23624: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:566 STA @LOCAL00
    case 0xC23626: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:567 LDA @VIRTUAL06+2
    case 0xC23628: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:568 STA @LOCAL00+2
    case 0xC2362A: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler-jp.asm:569 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2362C: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:569 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2362E: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler-jp.asm:569 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC23630: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:569 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC23632: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:570 LDY #0
    case 0xC23634: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:570 LDY #0
    // Overlapping static entry reached from 0xC23634.
    case 0xC23636: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:571 LDX @LOCAL09
    case 0xC23637: {
        Instruction step(cpu, 0xA6, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:572 LDA #3
    case 0xC23639: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:572 LDA #3
    // Overlapping static entry reached from 0xC23639.
    case 0xC2363B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:573 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC2363C: {
        Instruction step(cpu, 0x22, 0xC1DBB5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:574 LDA #40
    case 0xC23640: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000028u : 0x000028u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:574 LDA #40
    // Overlapping static entry reached from 0xC23640.
    case 0xC23642: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/menu_handler-jp.asm:575 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC23643: {
        Instruction step(cpu, 0xA6, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/menu_handler-jp.asm:575 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC23645: {
        Instruction step(cpu, 0x86, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/menu_handler-jp.asm:575 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC23647: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:575 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC23649: {
        Instruction step(cpu, 0x86, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:576 CLC
    case 0xC2364B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:577 ADC @VIRTUAL06
    case 0xC2364C: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:578 STA @VIRTUAL06
    case 0xC2364E: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:579 STA @LOCAL00
    case 0xC23650: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:580 LDA @VIRTUAL06+2
    case 0xC23652: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:581 STA @LOCAL00+2
    case 0xC23654: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/menu_handler-jp.asm:582 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC23656: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:582 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC23658: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/menu_handler-jp.asm:582 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2365A: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:582 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2365C: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:583 LDY #1
    case 0xC2365E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:583 LDY #1
    // Overlapping static entry reached from 0xC2365E.
    case 0xC23660: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:584 LDX @LOCAL09
    case 0xC23661: {
        Instruction step(cpu, 0xA6, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:585 LDA #6
    case 0xC23663: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:585 LDA #6
    // Overlapping static entry reached from 0xC23663.
    case 0xC23665: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:586 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC23666: {
        Instruction step(cpu, 0x22, 0xC1DBB5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:588 LDA @LOCAL08
    case 0xC2366A: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:589 CMP #PARTY_MEMBER::JEFF
    case 0xC2366C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:589 CMP #PARTY_MEMBER::JEFF
    // Overlapping static entry reached from 0xC2366C.
    case 0xC2366E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:590 BNE @UNKNOWN60
    case 0xC2366F: {
        Instruction step(cpu, 0xD0, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:591 LOADPTR BATTLE_MENU_TEXT_SPY, @LOCAL00
    case 0xC23671: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DAu : 0x0074DAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:591 LOADPTR BATTLE_MENU_TEXT_SPY, @LOCAL00
    // Overlapping static entry reached from 0xC23671.
    case 0xC23673: {
        Instruction step(cpu, 0x74, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:591 LOADPTR BATTLE_MENU_TEXT_SPY, @LOCAL00
    case 0xC23674: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:591 LOADPTR BATTLE_MENU_TEXT_SPY, @LOCAL00
    // Overlapping static entry reached from 0xC23673.
    case 0xC23675: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:591 LOADPTR BATTLE_MENU_TEXT_SPY, @LOCAL00
    case 0xC23676: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:591 LOADPTR BATTLE_MENU_TEXT_SPY, @LOCAL00
    // Overlapping static entry reached from 0xC23676.
    case 0xC23678: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler-jp.asm:591 LOADPTR BATTLE_MENU_TEXT_SPY, @LOCAL00
    case 0xC23679: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:592 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC2367B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:592 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC2367B.
    case 0xC2367D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:592 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC2367E: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:592 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23680: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:592 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC23680.
    case 0xC23682: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:592 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23683: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:593 LDY #1
    case 0xC23685: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:593 LDY #1
    // Overlapping static entry reached from 0xC23685.
    case 0xC23687: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:594 LDX #0
    case 0xC23688: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:594 LDX #0
    // Overlapping static entry reached from 0xC23688.
    case 0xC2368A: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:595 LDA #4
    case 0xC2368B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:595 LDA #4
    // Overlapping static entry reached from 0xC2368B.
    case 0xC2368D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:596 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC2368E: {
        Instruction step(cpu, 0x22, 0xC1DBB5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:597 BRA @UNKNOWN61
    case 0xC23692: {
        Instruction step(cpu, 0x80, 0x00002Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:599 LDA @LOCAL07
    case 0xC23694: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:600 STA @VIRTUAL04
    case 0xC23696: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:601 LDX @VIRTUAL04
    case 0xC23698: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:602 LDA a:char_struct::afflictions+4,X
    case 0xC2369A: {
        Instruction step(cpu, 0xBD, 0x000011u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:603 AND #$00FF
    case 0xC2369D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:603 AND #$00FF
    // Overlapping static entry reached from 0xC2369D.
    case 0xC2369F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:604 BNE @UNKNOWN61
    case 0xC236A0: {
        Instruction step(cpu, 0xD0, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:605 LOADPTR BATTLE_MENU_TEXT_PSI, @LOCAL00
    case 0xC236A2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C6u : 0x0074C6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:605 LOADPTR BATTLE_MENU_TEXT_PSI, @LOCAL00
    // Overlapping static entry reached from 0xC236A2.
    case 0xC236A4: {
        Instruction step(cpu, 0x74, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:605 LOADPTR BATTLE_MENU_TEXT_PSI, @LOCAL00
    case 0xC236A5: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:605 LOADPTR BATTLE_MENU_TEXT_PSI, @LOCAL00
    // Overlapping static entry reached from 0xC236A4.
    case 0xC236A6: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:605 LOADPTR BATTLE_MENU_TEXT_PSI, @LOCAL00
    case 0xC236A7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:605 LOADPTR BATTLE_MENU_TEXT_PSI, @LOCAL00
    // Overlapping static entry reached from 0xC236A7.
    case 0xC236A9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler-jp.asm:605 LOADPTR BATTLE_MENU_TEXT_PSI, @LOCAL00
    case 0xC236AA: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:606 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC236AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:606 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC236AC.
    case 0xC236AE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:606 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC236AF: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:606 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC236B1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:606 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC236B1.
    case 0xC236B3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:606 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC236B4: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:607 LDY #1
    case 0xC236B6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:607 LDY #1
    // Overlapping static entry reached from 0xC236B6.
    case 0xC236B8: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:608 LDX #0
    case 0xC236B9: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:608 LDX #0
    // Overlapping static entry reached from 0xC236B9.
    case 0xC236BB: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:609 LDA #4
    case 0xC236BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:609 LDA #4
    // Overlapping static entry reached from 0xC236BC.
    case 0xC236BE: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:610 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC236BF: {
        Instruction step(cpu, 0x22, 0xC1DBB5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:612 LDA @LOCAL08
    case 0xC236C3: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:613 CMP #PARTY_MEMBER::PAULA
    case 0xC236C5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:613 CMP #PARTY_MEMBER::PAULA
    // Overlapping static entry reached from 0xC236C5.
    case 0xC236C7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:614 BNE @UNKNOWN62
    case 0xC236C8: {
        Instruction step(cpu, 0xD0, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:615 LOADPTR BATTLE_MENU_TEXT_PRAY, @LOCAL00
    case 0xC236CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D0u : 0x0074D0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:615 LOADPTR BATTLE_MENU_TEXT_PRAY, @LOCAL00
    // Overlapping static entry reached from 0xC236CA.
    case 0xC236CC: {
        Instruction step(cpu, 0x74, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:615 LOADPTR BATTLE_MENU_TEXT_PRAY, @LOCAL00
    case 0xC236CD: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:615 LOADPTR BATTLE_MENU_TEXT_PRAY, @LOCAL00
    // Overlapping static entry reached from 0xC236CC.
    case 0xC236CE: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:615 LOADPTR BATTLE_MENU_TEXT_PRAY, @LOCAL00
    case 0xC236CF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:615 LOADPTR BATTLE_MENU_TEXT_PRAY, @LOCAL00
    // Overlapping static entry reached from 0xC236CF.
    case 0xC236D1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler-jp.asm:615 LOADPTR BATTLE_MENU_TEXT_PRAY, @LOCAL00
    case 0xC236D2: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:616 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC236D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:616 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC236D4.
    case 0xC236D6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:616 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC236D7: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:616 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC236D9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:616 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC236D9.
    case 0xC236DB: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:616 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC236DC: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:617 LDY #0
    case 0xC236DE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:617 LDY #0
    // Overlapping static entry reached from 0xC236DE.
    case 0xC236E0: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:618 LDX #10
    case 0xC236E1: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:618 LDX #10
    // Overlapping static entry reached from 0xC236E1.
    case 0xC236E3: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:619 LDA #7
    case 0xC236E4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:619 LDA #7
    // Overlapping static entry reached from 0xC236E4.
    case 0xC236E6: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:620 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC236E7: {
        Instruction step(cpu, 0x22, 0xC1DBB5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:622 LDA @LOCAL08
    case 0xC236EB: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:623 CMP #PARTY_MEMBER::POO
    case 0xC236ED: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:623 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC236ED.
    case 0xC236EF: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:624 BNE @UNKNOWN63
    case 0xC236F0: {
        Instruction step(cpu, 0xD0, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:625 LOADPTR BATTLE_MENU_TEXT_MIRROR, @LOCAL00
    case 0xC236F2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E4u : 0x0074E4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:625 LOADPTR BATTLE_MENU_TEXT_MIRROR, @LOCAL00
    // Overlapping static entry reached from 0xC236F2.
    case 0xC236F4: {
        Instruction step(cpu, 0x74, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:625 LOADPTR BATTLE_MENU_TEXT_MIRROR, @LOCAL00
    case 0xC236F5: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/menu_handler-jp.asm:625 LOADPTR BATTLE_MENU_TEXT_MIRROR, @LOCAL00
    // Overlapping static entry reached from 0xC236F4.
    case 0xC236F6: {
        Instruction step(cpu, 0x0E, 0x00C4A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:625 LOADPTR BATTLE_MENU_TEXT_MIRROR, @LOCAL00
    case 0xC236F7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C4u : 0x0000C4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/menu_handler-jp.asm:625 LOADPTR BATTLE_MENU_TEXT_MIRROR, @LOCAL00
    // Overlapping static entry reached from 0xC236F7.
    case 0xC236F9: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/menu_handler-jp.asm:625 LOADPTR BATTLE_MENU_TEXT_MIRROR, @LOCAL00
    case 0xC236FA: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:626 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC236FC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:626 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC236FC.
    case 0xC236FE: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/menu_handler-jp.asm:626 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC236FF: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:626 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23701: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/menu_handler-jp.asm:626 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC23701.
    case 0xC23703: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/menu_handler-jp.asm:626 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC23704: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:627 LDY #0
    case 0xC23706: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:627 LDY #0
    // Overlapping static entry reached from 0xC23706.
    case 0xC23708: {
        Instruction step(cpu, 0x00, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:628 LDX #10
    case 0xC23709: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:628 LDX #10
    // Overlapping static entry reached from 0xC23709.
    case 0xC2370B: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:629 LDA #7
    case 0xC2370C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:629 LDA #7
    // Overlapping static entry reached from 0xC2370C.
    case 0xC2370E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:630 JSL SELECTION_MENU_ITEM_SETUP
    case 0xC2370F: {
        Instruction step(cpu, 0x22, 0xC1DBB5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:630 JSL SELECTION_MENU_ITEM_SETUP
    // Overlapping static entry reached from 0xC23740.
    case 0xC23712: {
        Instruction step(cpu, 0xC1, 0x0000A6u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:632 LDX @LOCAL03
    case 0xC23713: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:632 LDX @LOCAL03
    // Overlapping static entry reached from 0xC23712.
    case 0xC23714: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:633 LDA f:BATTLE_WINDOW_SIZES,X
    case 0xC23715: {
        Instruction step(cpu, 0xBF, 0xC4765Fu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:634 AND #$00FF
    case 0xC23719: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:634 AND #$00FF
    // Overlapping static entry reached from 0xC23719.
    case 0xC2371B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:635 JSL REDIRECT_SET_WINDOW_FOCUS
    case 0xC2371C: {
        Instruction step(cpu, 0x22, 0xC1DB2Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:636 JSL REDIRECT_PRINT_MENU_ITEMS
    case 0xC23720: {
        Instruction step(cpu, 0x22, 0xC1DBE8u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:637 LDA #1
    case 0xC23724: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:637 LDA #1
    // Overlapping static entry reached from 0xC23724.
    case 0xC23726: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:638 JSL REDIRECT_SELECTION_MENU
    case 0xC23727: {
        Instruction step(cpu, 0x22, 0xC1DBEEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:639 CMP #0
    case 0xC2372B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:639 CMP #0
    // Overlapping static entry reached from 0xC2372B.
    case 0xC2372D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:640 BNEL @UNKNOWN74
    case 0xC2372E: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:640 BNEL @UNKNOWN74
    case 0xC23730: {
        Instruction step(cpu, 0x4C, 0x0037C3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:641 LDA DEBUG
    case 0xC23733: {
        Instruction step(cpu, 0xAD, 0x0046F2u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:642 BEQ @UNKNOWN67
    case 0xC23736: {
        Instruction step(cpu, 0xF0, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:643 LDA PAD_STATE
    case 0xC23738: {
        Instruction step(cpu, 0xAD, 0x000065u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:644 AND #PAD::SELECT_BUTTON | PAD::START_BUTTON
    case 0xC2373B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x003000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:644 AND #PAD::SELECT_BUTTON | PAD::START_BUTTON
    // Overlapping static entry reached from 0xC2373B.
    case 0xC2373D: {
        Instruction step(cpu, 0x30, 0x0000C9u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:645 CMP #PAD::SELECT_BUTTON | PAD::START_BUTTON
    case 0xC2373E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x003000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:645 CMP #PAD::SELECT_BUTTON | PAD::START_BUTTON
    // Overlapping static entry reached from 0xC2373D.
    case 0xC2373F: {
        Instruction step(cpu, 0x00, 0x000030u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:645 CMP #PAD::SELECT_BUTTON | PAD::START_BUTTON
    // Overlapping static entry reached from 0xC2373E.
    case 0xC23740: {
        Instruction step(cpu, 0x30, 0x0000D0u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:646 BNE @UNKNOWN66
    case 0xC23741: {
        Instruction step(cpu, 0xD0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:646 BNE @UNKNOWN66
    // Overlapping static entry reached from 0xC23740.
    case 0xC23742: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:647 JSL RESUME_MUSIC
    case 0xC23743: {
        Instruction step(cpu, 0x22, 0xC13435u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:648 LDA #$FFFF
    case 0xC23747: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:648 LDA #$FFFF
    // Overlapping static entry reached from 0xC23747.
    case 0xC23749: {
        Instruction step(cpu, 0xFF, 0x3A4E4Cu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:649 JMP @UNKNOWN113
    case 0xC2374A: {
        Instruction step(cpu, 0x4C, 0x003A4Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:651 LDA PAD_STATE
    case 0xC2374D: {
        Instruction step(cpu, 0xAD, 0x000065u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:652 AND #PAD::R_BUTTON
    case 0xC23750: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:652 AND #PAD::R_BUTTON
    // Overlapping static entry reached from 0xC23750.
    case 0xC23752: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:653 BEQ @UNKNOWN67
    case 0xC23753: {
        Instruction step(cpu, 0xF0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:654 JSL UNKNOWN_E14DE8
    case 0xC23755: {
        Instruction step(cpu, 0x22, 0xE1423Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:655 BRA @UNKNOWN63
    case 0xC23759: {
        Instruction step(cpu, 0x80, 0x0000B8u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:657 LDA BATTLE_MODE
    case 0xC2375B: {
        Instruction step(cpu, 0xAD, 0x005148u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:658 BNE @UNKNOWN73
    case 0xC2375E: {
        Instruction step(cpu, 0xD0, 0x000059u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:659 LDA PAD_STATE
    case 0xC23760: {
        Instruction step(cpu, 0xAD, 0x000065u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:660 AND #PAD::L_BUTTON
    case 0xC23763: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:660 AND #PAD::L_BUTTON
    // Overlapping static entry reached from 0xC23763.
    case 0xC23765: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:661 BEQ @UNKNOWN72
    case 0xC23766: {
        Instruction step(cpu, 0xF0, 0x000042u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:662 JSL DEBUG_SET_CHAR_LEVEL
    case 0xC23768: {
        Instruction step(cpu, 0x22, 0xC142D9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:663 LDY #0
    case 0xC2376C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:663 LDY #0
    // Overlapping static entry reached from 0xC2376C.
    case 0xC2376E: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:664 STY @LOCAL09
    case 0xC2376F: {
        Instruction step(cpu, 0x84, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:665 BRA @UNKNOWN71
    case 0xC23771: {
        Instruction step(cpu, 0x80, 0x00002Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:667 TYA
    case 0xC23773: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:668 CLC
    case 0xC23774: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:669 ADC #.LOWORD(GAME_STATE)
    case 0xC23775: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:669 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC23775.
    case 0xC23777: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:670 TAX
    case 0xC23778: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:671 LDA a:game_state::party_members,X
    case 0xC23779: {
        Instruction step(cpu, 0xBD, 0x000077u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:672 AND #$00FF
    case 0xC2377C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:672 AND #$00FF
    // Overlapping static entry reached from 0xC2377C.
    case 0xC2377E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:673 STA @LOCAL07
    case 0xC2377F: {
        Instruction step(cpu, 0x85, 0x000022u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:674 BEQ @UNKNOWN70
    case 0xC23781: {
        Instruction step(cpu, 0xF0, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:675 CMP #4
    case 0xC23783: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:675 CMP #4
    // Overlapping static entry reached from 0xC23783.
    case 0xC23785: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/menu_handler-jp.asm:676 BGT @UNKNOWN70
    case 0xC23786: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/menu_handler-jp.asm:676 BGT @UNKNOWN70
    case 0xC23788: {
        Instruction step(cpu, 0xB0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:677 TYA
    case 0xC2378A: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:678 LDY #.SIZEOF(battler)
    case 0xC2378B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:678 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2378B.
    case 0xC2378D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:679 JSL MULT168
    case 0xC2378E: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:680 CLC
    case 0xC23792: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:681 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC23793: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:681 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC23793.
    case 0xC23795: {
        Instruction step(cpu, 0xA1, 0x0000AAu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:682 TAX
    case 0xC23796: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:683 LDA @LOCAL07
    case 0xC23797: {
        Instruction step(cpu, 0xA5, 0x000022u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:684 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC23799: {
        Instruction step(cpu, 0x22, 0xC2B8D9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:686 LDY @LOCAL09
    case 0xC2379D: {
        Instruction step(cpu, 0xA4, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:687 INY
    case 0xC2379F: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:688 STY @LOCAL09
    case 0xC237A0: {
        Instruction step(cpu, 0x84, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:690 CPY #6
    case 0xC237A2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:690 CPY #6
    // Overlapping static entry reached from 0xC237A2.
    case 0xC237A4: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:691 BCC @UNKNOWN68
    case 0xC237A5: {
        Instruction step(cpu, 0x90, 0x0000CCu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:692 JMP @UNKNOWN63
    case 0xC237A7: {
        Instruction step(cpu, 0x4C, 0x003713u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:694 LDA PAD_STATE
    case 0xC237AA: {
        Instruction step(cpu, 0xAD, 0x000065u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:695 AND #PAD::SELECT_BUTTON
    case 0xC237AD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:695 AND #PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC237AD.
    case 0xC237AF: {
        Instruction step(cpu, 0x20, 0x0007F0u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:696 BEQ @UNKNOWN73
    case 0xC237B0: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:697 JSL DEBUG_Y_BUTTON_GOODS
    case 0xC237B2: {
        Instruction step(cpu, 0x22, 0xC14344u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:698 JMP @UNKNOWN63
    case 0xC237B6: {
        Instruction step(cpu, 0x4C, 0x003713u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:700 JSL RESUME_MUSIC
    case 0xC237B9: {
        Instruction step(cpu, 0x22, 0xC13435u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:701 LDA #0
    case 0xC237BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:701 LDA #0
    // Overlapping static entry reached from 0xC237BD.
    case 0xC237BF: {
        Instruction step(cpu, 0x00, 0x00004Cu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:702 JMP @UNKNOWN113
    case 0xC237C0: {
        Instruction step(cpu, 0x4C, 0x003A4Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:704 SEP #PROC_FLAGS::ACCUM8
    case 0xC237C3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:705 STZ BATTLE_ITEM_USED
    case 0xC237C5: {
        Instruction step(cpu, 0x9C, 0x00AB7Eu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:706 REP #PROC_FLAGS::ACCUM8
    case 0xC237C8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:707 CMP #1
    case 0xC237CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:707 CMP #1
    // Overlapping static entry reached from 0xC237CA.
    case 0xC237CC: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:708 BEQ @UNKNOWN81
    case 0xC237CD: {
        Instruction step(cpu, 0xF0, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:709 CMP #2
    case 0xC237CF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:709 CMP #2
    // Overlapping static entry reached from 0xC237CF.
    case 0xC237D1: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:710 BEQL @UNKNOWN88
    case 0xC237D2: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:710 BEQL @UNKNOWN88
    case 0xC237D4: {
        Instruction step(cpu, 0x4C, 0x003863u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:711 CMP #3
    case 0xC237D7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:711 CMP #3
    // Overlapping static entry reached from 0xC237D7.
    case 0xC237D9: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:712 BEQL @UNKNOWN90
    case 0xC237DA: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:712 BEQL @UNKNOWN90
    case 0xC237DC: {
        Instruction step(cpu, 0x4C, 0x003897u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:713 CMP #4
    case 0xC237DF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:713 CMP #4
    // Overlapping static entry reached from 0xC237DF.
    case 0xC237E1: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:714 BEQL @UNKNOWN91
    case 0xC237E2: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:714 BEQL @UNKNOWN91
    case 0xC237E4: {
        Instruction step(cpu, 0x4C, 0x0038ACu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:715 CMP #5
    case 0xC237E7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:715 CMP #5
    // Overlapping static entry reached from 0xC237E7.
    case 0xC237E9: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:716 BEQL @UNKNOWN95
    case 0xC237EA: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:716 BEQL @UNKNOWN95
    case 0xC237EC: {
        Instruction step(cpu, 0x4C, 0x00390Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:717 CMP #6
    case 0xC237EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:717 CMP #6
    // Overlapping static entry reached from 0xC237EF.
    case 0xC237F1: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:718 BEQL @UNKNOWN96
    case 0xC237F2: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:718 BEQL @UNKNOWN96
    case 0xC237F4: {
        Instruction step(cpu, 0x4C, 0x003921u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:719 CMP #7
    case 0xC237F7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:719 CMP #7
    // Overlapping static entry reached from 0xC237F7.
    case 0xC237F9: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:720 BEQL @UNKNOWN97
    case 0xC237FA: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:720 BEQL @UNKNOWN97
    case 0xC237FC: {
        Instruction step(cpu, 0x4C, 0x003942u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:721 JMP @UNKNOWN112
    case 0xC237FF: {
        Instruction step(cpu, 0x4C, 0x003A37u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:723 LDA @LOCAL06
    case 0xC23802: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:724 BEQ @UNKNOWN82
    case 0xC23804: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:725 CMP #1
    case 0xC23806: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:725 CMP #1
    // Overlapping static entry reached from 0xC23806.
    case 0xC23808: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:726 BEQ @UNKNOWN83
    case 0xC23809: {
        Instruction step(cpu, 0xF0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:727 CMP #2
    case 0xC2380B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:727 CMP #2
    // Overlapping static entry reached from 0xC2380B.
    case 0xC2380D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:728 BEQ @UNKNOWN84
    case 0xC2380E: {
        Instruction step(cpu, 0xF0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:729 BRA @UNKNOWN85
    case 0xC23810: {
        Instruction step(cpu, 0x80, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:731 LDA #BATTLE_ACTIONS::BASH
    case 0xC23812: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:731 LDA #BATTLE_ACTIONS::BASH
    // Overlapping static entry reached from 0xC23812.
    case 0xC23814: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:732 STA @VIRTUAL02
    case 0xC23815: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:733 STA @LOCAL04
    case 0xC23817: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:734 BRA @UNKNOWN85
    case 0xC23819: {
        Instruction step(cpu, 0x80, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:736 LDA #BATTLE_ACTIONS::SHOOT
    case 0xC2381B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:736 LDA #BATTLE_ACTIONS::SHOOT
    // Overlapping static entry reached from 0xC2381B.
    case 0xC2381D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:737 STA @VIRTUAL02
    case 0xC2381E: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:738 STA @LOCAL04
    case 0xC23820: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:739 BRA @UNKNOWN85
    case 0xC23822: {
        Instruction step(cpu, 0x80, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:741 LDA #BATTLE_ACTIONS::USE_NO_EFFECT
    case 0xC23824: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:741 LDA #BATTLE_ACTIONS::USE_NO_EFFECT
    // Overlapping static entry reached from 0xC23824.
    case 0xC23826: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:742 STA @VIRTUAL02
    case 0xC23827: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:743 STA @LOCAL04
    case 0xC23829: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:745 LDA @LOCAL04
    case 0xC2382B: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:746 STA @VIRTUAL02
    case 0xC2382D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:747 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC2382F: {
        Instruction step(cpu, 0x8D, 0x00AB81u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:748 SEP #PROC_FLAGS::ACCUM8
    case 0xC23832: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:749 LDA #17
    case 0xC23834: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000011u : 0x008D11u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:750 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    case 0xC23836: {
        Instruction step(cpu, 0x8D, 0x00AB83u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:750 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC23834.
    case 0xC23837: {
        Instruction step(cpu, 0x83, 0x0000ABu, 2u, AddressMode::StackRelative);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:751 REP #PROC_FLAGS::ACCUM8
    case 0xC23839: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:752 LDA @LOCAL06
    case 0xC2383B: {
        Instruction step(cpu, 0xA5, 0x000020u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:753 CMP #2
    case 0xC2383D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:753 CMP #2
    // Overlapping static entry reached from 0xC2383D.
    case 0xC2383F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:754 BEQL @UNKNOWN112
    case 0xC23840: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:754 BEQL @UNKNOWN112
    case 0xC23842: {
        Instruction step(cpu, 0x4C, 0x003A37u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:755 LDY @VIRTUAL02
    case 0xC23845: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:756 LDX #1
    case 0xC23847: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:756 LDX #1
    // Overlapping static entry reached from 0xC23847.
    case 0xC23849: {
        Instruction step(cpu, 0x00, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:757 LDA #0
    case 0xC2384A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:757 LDA #0
    // Overlapping static entry reached from 0xC2384A.
    case 0xC2384C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:758 JSL REDIRECT_C1242E
    case 0xC2384D: {
        Instruction step(cpu, 0x22, 0xC1DBFAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:759 SEP #PROC_FLAGS::ACCUM8
    case 0xC23851: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:760 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC23853: {
        Instruction step(cpu, 0x8D, 0x00AB84u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:761 REP #PROC_FLAGS::ACCUM8
    case 0xC23856: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:762 AND #$00FF
    case 0xC23858: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:762 AND #$00FF
    // Overlapping static entry reached from 0xC23858.
    case 0xC2385A: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:763 BEQL @UNKNOWN63
    case 0xC2385B: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:763 BEQL @UNKNOWN63
    case 0xC2385D: {
        Instruction step(cpu, 0x4C, 0x003713u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:764 JMP @UNKNOWN112
    case 0xC23860: {
        Instruction step(cpu, 0x4C, 0x003A37u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:766 LDA @LOCAL08
    case 0xC23863: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:767 SEP #PROC_FLAGS::ACCUM8
    case 0xC23865: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:768 STA BATTLE_MENU_SELECTION
    case 0xC23867: {
        Instruction step(cpu, 0x8D, 0x00AB7Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:769 REP #PROC_FLAGS::ACCUM8
    case 0xC2386A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:770 LDA #.LOWORD(BATTLE_MENU_SELECTION)
    case 0xC2386C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00AB7Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:770 LDA #.LOWORD(BATTLE_MENU_SELECTION)
    // Overlapping static entry reached from 0xC2386C.
    case 0xC2386E: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:771 JSL REDIRECT_C1CFC6
    case 0xC2386F: {
        Instruction step(cpu, 0x22, 0xC1DBF4u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:772 TAX
    case 0xC23873: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:773 BEQL @UNKNOWN63
    case 0xC23874: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:773 BEQL @UNKNOWN63
    case 0xC23876: {
        Instruction step(cpu, 0x4C, 0x003713u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:774 LDA BATTLE_MENU_SELECTION + battle_menu_selection::param1
    case 0xC23879: {
        Instruction step(cpu, 0xAD, 0x00AB80u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:775 AND #$00FF
    case 0xC2387C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:775 AND #$00FF
    // Overlapping static entry reached from 0xC2387C.
    case 0xC2387E: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:776 TAX
    case 0xC2387F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:777 LDA @LOCAL08
    case 0xC23880: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:778 JSL GET_CHARACTER_ITEM
    case 0xC23882: {
        Instruction step(cpu, 0x22, 0xC3E537u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:779 SEP #PROC_FLAGS::ACCUM8
    case 0xC23886: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:780 STA BATTLE_ITEM_USED
    case 0xC23888: {
        Instruction step(cpu, 0x8D, 0x00AB7Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:781 REP #PROC_FLAGS::ACCUM8
    case 0xC2388B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:782 LDA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC2388D: {
        Instruction step(cpu, 0xAD, 0x00AB81u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:783 STA @VIRTUAL02
    case 0xC23890: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:784 STA @LOCAL04
    case 0xC23892: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:785 JMP @UNKNOWN112
    case 0xC23894: {
        Instruction step(cpu, 0x4C, 0x003A37u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:787 SEP #PROC_FLAGS::ACCUM8
    case 0xC23897: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:788 LDA #1
    case 0xC23899: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:789 STA GAME_STATE+game_state::auto_fight_enable
    case 0xC2389B: {
        Instruction step(cpu, 0x8D, 0x009B62u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:789 STA GAME_STATE+game_state::auto_fight_enable
    // Overlapping static entry reached from 0xC23899.
    case 0xC2389C: {
        Instruction step(cpu, 0x62, 0x00229Bu, 3u, AddressMode::Relative16);
        step.push_effective_relative();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:790 JSL UNKNOWN_C20266
    case 0xC2389E: {
        Instruction step(cpu, 0x22, 0xC20201u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:790 JSL UNKNOWN_C20266
    // Overlapping static entry reached from 0xC2389C.
    case 0xC2389F: {
        Instruction step(cpu, 0x01, 0x000002u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:790 JSL UNKNOWN_C20266
    // Overlapping static entry reached from 0xC2389F.
    case 0xC238A1: {
        Instruction step(cpu, 0xC2, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:792 LDA #BATTLE_ACTIONS::NO_EFFECT
    case 0xC238A2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:792 LDA #BATTLE_ACTIONS::NO_EFFECT
    // Overlapping static entry reached from 0xC238A1.
    case 0xC238A3: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:792 LDA #BATTLE_ACTIONS::NO_EFFECT
    // Overlapping static entry reached from 0xC238A2.
    case 0xC238A4: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:793 STA @VIRTUAL02
    case 0xC238A5: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:794 STA @LOCAL04
    case 0xC238A7: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:795 JMP @UNKNOWN112
    case 0xC238A9: {
        Instruction step(cpu, 0x4C, 0x003A37u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:797 LDA @LOCAL08
    case 0xC238AC: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:798 CMP #PARTY_MEMBER::JEFF
    case 0xC238AE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:798 CMP #PARTY_MEMBER::JEFF
    // Overlapping static entry reached from 0xC238AE.
    case 0xC238B0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:799 BNE @UNKNOWN93
    case 0xC238B1: {
        Instruction step(cpu, 0xD0, 0x000033u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:800 LDA #BATTLE_ACTIONS::SPY
    case 0xC238B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:800 LDA #BATTLE_ACTIONS::SPY
    // Overlapping static entry reached from 0xC238B3.
    case 0xC238B5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:801 STA @VIRTUAL02
    case 0xC238B6: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:802 STA @LOCAL04
    case 0xC238B8: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:803 LDA @VIRTUAL02
    case 0xC238BA: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:804 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC238BC: {
        Instruction step(cpu, 0x8D, 0x00AB81u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:805 SEP #PROC_FLAGS::ACCUM8
    case 0xC238BF: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:806 LDA #17
    case 0xC238C1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000011u : 0x008D11u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:807 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    case 0xC238C3: {
        Instruction step(cpu, 0x8D, 0x00AB83u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:807 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC238C1.
    case 0xC238C4: {
        Instruction step(cpu, 0x83, 0x0000ABu, 2u, AddressMode::StackRelative);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:808 LDY @VIRTUAL02
    case 0xC238C6: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:809 LDX #1
    case 0xC238C8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:809 LDX #1
    // Overlapping static entry reached from 0xC238C8.
    case 0xC238CA: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:810 REP #PROC_FLAGS::ACCUM8
    case 0xC238CB: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:811 LDA #0
    case 0xC238CD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:811 LDA #0
    // Overlapping static entry reached from 0xC238CD.
    case 0xC238CF: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:812 JSL REDIRECT_C1242E
    case 0xC238D0: {
        Instruction step(cpu, 0x22, 0xC1DBFAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:813 SEP #PROC_FLAGS::ACCUM8
    case 0xC238D4: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:814 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC238D6: {
        Instruction step(cpu, 0x8D, 0x00AB84u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:815 REP #PROC_FLAGS::ACCUM8
    case 0xC238D9: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:816 AND #$00FF
    case 0xC238DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:816 AND #$00FF
    // Overlapping static entry reached from 0xC238DB.
    case 0xC238DD: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:817 BEQL @UNKNOWN63
    case 0xC238DE: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:817 BEQL @UNKNOWN63
    case 0xC238E0: {
        Instruction step(cpu, 0x4C, 0x003713u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:818 JMP @UNKNOWN112
    case 0xC238E3: {
        Instruction step(cpu, 0x4C, 0x003A37u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:820 LDA @LOCAL08
    case 0xC238E6: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:821 SEP #PROC_FLAGS::ACCUM8
    case 0xC238E8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:822 STA BATTLE_MENU_SELECTION
    case 0xC238EA: {
        Instruction step(cpu, 0x8D, 0x00AB7Fu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:823 REP #PROC_FLAGS::ACCUM8
    case 0xC238ED: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:824 LDA #.LOWORD(BATTLE_MENU_SELECTION)
    case 0xC238EF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Fu : 0x00AB7Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:824 LDA #.LOWORD(BATTLE_MENU_SELECTION)
    // Overlapping static entry reached from 0xC238EF.
    case 0xC238F1: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:825 JSL REDIRECT_BATTLE_PSI_MENU
    case 0xC238F2: {
        Instruction step(cpu, 0x22, 0xC1DC00u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:826 TAX
    case 0xC238F6: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:827 BEQL @UNKNOWN63
    case 0xC238F7: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:827 BEQL @UNKNOWN63
    case 0xC238F9: {
        Instruction step(cpu, 0x4C, 0x003713u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:828 SEP #PROC_FLAGS::ACCUM8
    case 0xC238FC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:829 STZ BATTLE_ITEM_USED
    case 0xC238FE: {
        Instruction step(cpu, 0x9C, 0x00AB7Eu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:830 REP #PROC_FLAGS::ACCUM8
    case 0xC23901: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:831 LDA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23903: {
        Instruction step(cpu, 0xAD, 0x00AB81u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:832 STA @VIRTUAL02
    case 0xC23906: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:833 STA @LOCAL04
    case 0xC23908: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:834 JMP @UNKNOWN112
    case 0xC2390A: {
        Instruction step(cpu, 0x4C, 0x003A37u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:836 LDA #BATTLE_ACTIONS::GUARD
    case 0xC2390D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:836 LDA #BATTLE_ACTIONS::GUARD
    // Overlapping static entry reached from 0xC2390D.
    case 0xC2390F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:837 STA @VIRTUAL02
    case 0xC23910: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:838 STA @LOCAL04
    case 0xC23912: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:839 LDA @VIRTUAL02
    case 0xC23914: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:840 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23916: {
        Instruction step(cpu, 0x8D, 0x00AB81u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:841 SEP #PROC_FLAGS::ACCUM8
    case 0xC23919: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:842 STZ BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    case 0xC2391B: {
        Instruction step(cpu, 0x9C, 0x00AB83u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:843 JMP @UNKNOWN112
    case 0xC2391E: {
        Instruction step(cpu, 0x4C, 0x003A37u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:845 SEP #PROC_FLAGS::ACCUM8
    case 0xC23921: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:846 LDA #1
    case 0xC23923: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x008D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:847 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    case 0xC23925: {
        Instruction step(cpu, 0x8D, 0x00AB83u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:847 STA BATTLE_MENU_SELECTION + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC23923.
    case 0xC23926: {
        Instruction step(cpu, 0x83, 0x0000ABu, 2u, AddressMode::StackRelative);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:848 REP #PROC_FLAGS::ACCUM8
    case 0xC23928: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:849 LDA @LOCAL08
    case 0xC2392A: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:850 SEP #PROC_FLAGS::ACCUM8
    case 0xC2392C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:851 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_target
    case 0xC2392E: {
        Instruction step(cpu, 0x8D, 0x00AB84u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:852 REP #PROC_FLAGS::ACCUM8
    case 0xC23931: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:853 LDA #BATTLE_ACTIONS::RUN_AWAY
    case 0xC23933: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000017u : 0x000117u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:853 LDA #BATTLE_ACTIONS::RUN_AWAY
    // Overlapping static entry reached from 0xC23933.
    case 0xC23935: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:854 STA @VIRTUAL02
    case 0xC23936: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:854 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC23935.
    case 0xC23937: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:855 STA @LOCAL04
    case 0xC23938: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:856 LDA @VIRTUAL02
    case 0xC2393A: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:857 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC2393C: {
        Instruction step(cpu, 0x8D, 0x00AB81u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:858 JMP @UNKNOWN112
    case 0xC2393F: {
        Instruction step(cpu, 0x4C, 0x003A37u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:860 LDX #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::targetting
    case 0xC23942: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000083u : 0x00AB83u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:860 LDX #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::targetting
    // Overlapping static entry reached from 0xC23942.
    case 0xC23944: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:861 STX @LOCAL09
    case 0xC23945: {
        Instruction step(cpu, 0x86, 0x000026u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:862 SEP #PROC_FLAGS::ACCUM8
    case 0xC23947: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:863 LDA #1
    case 0xC23949: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x009D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:864 STA __BSS_START__,X
    case 0xC2394B: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:864 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC23949.
    case 0xC2394C: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:865 REP #PROC_FLAGS::ACCUM8
    case 0xC2394E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:866 LDA #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    case 0xC23950: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000084u : 0x00AB84u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:866 LDA #.LOWORD(BATTLE_MENU_SELECTION) + battle_menu_selection::selected_target
    // Overlapping static entry reached from 0xC23950.
    case 0xC23952: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:867 STA @VIRTUAL04
    case 0xC23953: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:868 LDA @LOCAL08
    case 0xC23955: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:869 SEP #PROC_FLAGS::ACCUM8
    case 0xC23957: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:870 LDX @VIRTUAL04
    case 0xC23959: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:871 STA __BSS_START__,X
    case 0xC2395B: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:872 REP #PROC_FLAGS::ACCUM8
    case 0xC2395E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:873 LDA @LOCAL08
    case 0xC23960: {
        Instruction step(cpu, 0xA5, 0x000024u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:874 CMP #PARTY_MEMBER::PAULA
    case 0xC23962: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:874 CMP #PARTY_MEMBER::PAULA
    // Overlapping static entry reached from 0xC23962.
    case 0xC23964: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:875 BEQ @UNKNOWN99
    case 0xC23965: {
        Instruction step(cpu, 0xF0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:876 CMP #PARTY_MEMBER::POO
    case 0xC23967: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:876 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC23967.
    case 0xC23969: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:877 BEQL @UNKNOWN111
    case 0xC2396A: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:877 BEQL @UNKNOWN111
    case 0xC2396C: {
        Instruction step(cpu, 0x4C, 0x003A03u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:878 JMP @UNKNOWN112
    case 0xC2396F: {
        Instruction step(cpu, 0x4C, 0x003A37u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:880 LDA GIYGAS_PHASE
    case 0xC23972: {
        Instruction step(cpu, 0xAD, 0x00AB7Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:881 CMP #GIYGAS_PHASES::START_PRAYING
    case 0xC23975: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:881 CMP #GIYGAS_PHASES::START_PRAYING
    // Overlapping static entry reached from 0xC23975.
    case 0xC23977: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:882 BEQ @UNKNOWN100
    case 0xC23978: {
        Instruction step(cpu, 0xF0, 0x00002Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:883 CMP #GIYGAS_PHASES::PRAYER_1_USED
    case 0xC2397A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:883 CMP #GIYGAS_PHASES::PRAYER_1_USED
    // Overlapping static entry reached from 0xC2397A.
    case 0xC2397C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:884 BEQ @UNKNOWN101
    case 0xC2397D: {
        Instruction step(cpu, 0xF0, 0x00002Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:885 CMP #GIYGAS_PHASES::PRAYER_2_USED
    case 0xC2397F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:885 CMP #GIYGAS_PHASES::PRAYER_2_USED
    // Overlapping static entry reached from 0xC2397F.
    case 0xC23981: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:886 BEQ @UNKNOWN102
    case 0xC23982: {
        Instruction step(cpu, 0xF0, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:887 CMP #GIYGAS_PHASES::PRAYER_3_USED
    case 0xC23984: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:887 CMP #GIYGAS_PHASES::PRAYER_3_USED
    // Overlapping static entry reached from 0xC23984.
    case 0xC23986: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:888 BEQ @UNKNOWN103
    case 0xC23987: {
        Instruction step(cpu, 0xF0, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:889 CMP #GIYGAS_PHASES::PRAYER_4_USED
    case 0xC23989: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:889 CMP #GIYGAS_PHASES::PRAYER_4_USED
    // Overlapping static entry reached from 0xC23989.
    case 0xC2398B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:890 BEQ @UNKNOWN104
    case 0xC2398C: {
        Instruction step(cpu, 0xF0, 0x00003Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:891 CMP #GIYGAS_PHASES::PRAYER_5_USED
    case 0xC2398E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:891 CMP #GIYGAS_PHASES::PRAYER_5_USED
    // Overlapping static entry reached from 0xC2398E.
    case 0xC23990: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:892 BEQ @UNKNOWN105
    case 0xC23991: {
        Instruction step(cpu, 0xF0, 0x00003Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:893 CMP #GIYGAS_PHASES::PRAYER_6_USED
    case 0xC23993: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:893 CMP #GIYGAS_PHASES::PRAYER_6_USED
    // Overlapping static entry reached from 0xC23993.
    case 0xC23995: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:894 BEQ @UNKNOWN106
    case 0xC23996: {
        Instruction step(cpu, 0xF0, 0x000042u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:895 CMP #GIYGAS_PHASES::PRAYER_7_USED
    case 0xC23998: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:895 CMP #GIYGAS_PHASES::PRAYER_7_USED
    // Overlapping static entry reached from 0xC23998.
    case 0xC2399A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:896 BEQ @UNKNOWN107
    case 0xC2399B: {
        Instruction step(cpu, 0xF0, 0x000046u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:897 CMP #GIYGAS_PHASES::PRAYER_8_USED
    case 0xC2399D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:897 CMP #GIYGAS_PHASES::PRAYER_8_USED
    // Overlapping static entry reached from 0xC2399D.
    case 0xC2399F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:898 BEQ @UNKNOWN108
    case 0xC239A0: {
        Instruction step(cpu, 0xF0, 0x00004Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:899 BRA @UNKNOWN109
    case 0xC239A2: {
        Instruction step(cpu, 0x80, 0x000051u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:901 LDA #BATTLE_ACTIONS::FINAL_PRAYER_1
    case 0xC239A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000023u : 0x000123u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:901 LDA #BATTLE_ACTIONS::FINAL_PRAYER_1
    // Overlapping static entry reached from 0xC239A4.
    case 0xC239A6: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:902 STA @VIRTUAL02
    case 0xC239A7: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:902 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC239A6.
    case 0xC239A8: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:903 STA @LOCAL04
    case 0xC239A9: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:904 BRA @UNKNOWN110
    case 0xC239AB: {
        Instruction step(cpu, 0x80, 0x00004Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:906 LDA #BATTLE_ACTIONS::FINAL_PRAYER_2
    case 0xC239AD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000024u : 0x000124u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:906 LDA #BATTLE_ACTIONS::FINAL_PRAYER_2
    // Overlapping static entry reached from 0xC239AD.
    case 0xC239AF: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:907 STA @VIRTUAL02
    case 0xC239B0: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:907 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC239AF.
    case 0xC239B1: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:908 STA @LOCAL04
    case 0xC239B2: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:909 BRA @UNKNOWN110
    case 0xC239B4: {
        Instruction step(cpu, 0x80, 0x000046u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:911 LDA #BATTLE_ACTIONS::FINAL_PRAYER_3
    case 0xC239B6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000025u : 0x000125u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:911 LDA #BATTLE_ACTIONS::FINAL_PRAYER_3
    // Overlapping static entry reached from 0xC239B6.
    case 0xC239B8: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:912 STA @VIRTUAL02
    case 0xC239B9: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:912 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC239B8.
    case 0xC239BA: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:913 STA @LOCAL04
    case 0xC239BB: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:914 BRA @UNKNOWN110
    case 0xC239BD: {
        Instruction step(cpu, 0x80, 0x00003Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:916 LDA #BATTLE_ACTIONS::FINAL_PRAYER_4
    case 0xC239BF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000026u : 0x000126u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:916 LDA #BATTLE_ACTIONS::FINAL_PRAYER_4
    // Overlapping static entry reached from 0xC239BF.
    case 0xC239C1: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:917 STA @VIRTUAL02
    case 0xC239C2: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:917 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC239C1.
    case 0xC239C3: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:918 STA @LOCAL04
    case 0xC239C4: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:919 BRA @UNKNOWN110
    case 0xC239C6: {
        Instruction step(cpu, 0x80, 0x000034u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:921 LDA #BATTLE_ACTIONS::FINAL_PRAYER_5
    case 0xC239C8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000027u : 0x000127u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:921 LDA #BATTLE_ACTIONS::FINAL_PRAYER_5
    // Overlapping static entry reached from 0xC239C8.
    case 0xC239CA: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:922 STA @VIRTUAL02
    case 0xC239CB: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:922 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC239CA.
    case 0xC239CC: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:923 STA @LOCAL04
    case 0xC239CD: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:924 BRA @UNKNOWN110
    case 0xC239CF: {
        Instruction step(cpu, 0x80, 0x00002Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:926 LDA #BATTLE_ACTIONS::FINAL_PRAYER_6
    case 0xC239D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000028u : 0x000128u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:926 LDA #BATTLE_ACTIONS::FINAL_PRAYER_6
    // Overlapping static entry reached from 0xC239D1.
    case 0xC239D3: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:927 STA @VIRTUAL02
    case 0xC239D4: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:927 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC239D3.
    case 0xC239D5: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:928 STA @LOCAL04
    case 0xC239D6: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:929 BRA @UNKNOWN110
    case 0xC239D8: {
        Instruction step(cpu, 0x80, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:931 LDA #BATTLE_ACTIONS::FINAL_PRAYER_7
    case 0xC239DA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000029u : 0x000129u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:931 LDA #BATTLE_ACTIONS::FINAL_PRAYER_7
    // Overlapping static entry reached from 0xC239DA.
    case 0xC239DC: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:932 STA @VIRTUAL02
    case 0xC239DD: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:932 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC239DC.
    case 0xC239DE: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:933 STA @LOCAL04
    case 0xC239DF: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:934 BRA @UNKNOWN110
    case 0xC239E1: {
        Instruction step(cpu, 0x80, 0x000019u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:936 LDA #BATTLE_ACTIONS::FINAL_PRAYER_8
    case 0xC239E3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Au : 0x00012Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:936 LDA #BATTLE_ACTIONS::FINAL_PRAYER_8
    // Overlapping static entry reached from 0xC239E3.
    case 0xC239E5: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:937 STA @VIRTUAL02
    case 0xC239E6: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:937 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC239E5.
    case 0xC239E7: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:938 STA @LOCAL04
    case 0xC239E8: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:939 BRA @UNKNOWN110
    case 0xC239EA: {
        Instruction step(cpu, 0x80, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:941 LDA #BATTLE_ACTIONS::FINAL_PRAYER_9
    case 0xC239EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00002Bu : 0x00012Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:941 LDA #BATTLE_ACTIONS::FINAL_PRAYER_9
    // Overlapping static entry reached from 0xC239EC.
    case 0xC239EE: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:942 STA @VIRTUAL02
    case 0xC239EF: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:942 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC239EE.
    case 0xC239F0: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:943 STA @LOCAL04
    case 0xC239F1: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:944 BRA @UNKNOWN110
    case 0xC239F3: {
        Instruction step(cpu, 0x80, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:946 LDA #BATTLE_ACTIONS::PRAY
    case 0xC239F5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:946 LDA #BATTLE_ACTIONS::PRAY
    // Overlapping static entry reached from 0xC239F5.
    case 0xC239F7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:947 STA @VIRTUAL02
    case 0xC239F8: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:948 STA @LOCAL04
    case 0xC239FA: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:950 LDA @VIRTUAL02
    case 0xC239FC: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:951 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC239FE: {
        Instruction step(cpu, 0x8D, 0x00AB81u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:952 BRA @UNKNOWN112
    case 0xC23A01: {
        Instruction step(cpu, 0x80, 0x000034u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:954 LDA #BATTLE_ACTIONS::MIRROR
    case 0xC23A03: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000018u : 0x000118u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:954 LDA #BATTLE_ACTIONS::MIRROR
    // Overlapping static entry reached from 0xC23A03.
    case 0xC23A05: {
        Instruction step(cpu, 0x01, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:955 STA @VIRTUAL02
    case 0xC23A06: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:955 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC23A05.
    case 0xC23A07: {
        Instruction step(cpu, 0x02, 0x000085u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:956 STA @LOCAL04
    case 0xC23A08: {
        Instruction step(cpu, 0x85, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:957 LDA @VIRTUAL02
    case 0xC23A0A: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:958 STA BATTLE_MENU_SELECTION + battle_menu_selection::selected_action
    case 0xC23A0C: {
        Instruction step(cpu, 0x8D, 0x00AB81u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:959 SEP #PROC_FLAGS::ACCUM8
    case 0xC23A0F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:960 LDA #17
    case 0xC23A11: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000011u : 0x00A611u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:961 LDX @LOCAL09
    case 0xC23A13: {
        Instruction step(cpu, 0xA6, 0x000026u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:961 LDX @LOCAL09
    // Overlapping static entry reached from 0xC23A11.
    case 0xC23A14: {
        Instruction step(cpu, 0x26, 0x00009Du, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:962 STA __BSS_START__,X
    case 0xC23A15: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:962 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC23A14.
    case 0xC23A16: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:963 LDY @VIRTUAL02
    case 0xC23A18: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:964 LDX #1
    case 0xC23A1A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:964 LDX #1
    // Overlapping static entry reached from 0xC23A1A.
    case 0xC23A1C: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:965 REP #PROC_FLAGS::ACCUM8
    case 0xC23A1D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:966 LDA #0
    case 0xC23A1F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:966 LDA #0
    // Overlapping static entry reached from 0xC23A1F.
    case 0xC23A21: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:967 JSL REDIRECT_C1242E
    case 0xC23A22: {
        Instruction step(cpu, 0x22, 0xC1DBFAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:968 SEP #PROC_FLAGS::ACCUM8
    case 0xC23A26: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:969 LDX @VIRTUAL04
    case 0xC23A28: {
        Instruction step(cpu, 0xA6, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:970 STA __BSS_START__,X
    case 0xC23A2A: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:971 REP #PROC_FLAGS::ACCUM8
    case 0xC23A2D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:972 AND #$00FF
    case 0xC23A2F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:972 AND #$00FF
    // Overlapping static entry reached from 0xC23A2F.
    case 0xC23A31: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/menu_handler-jp.asm:973 BEQL @UNKNOWN63
    case 0xC23A32: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/menu_handler-jp.asm:973 BEQL @UNKNOWN63
    case 0xC23A34: {
        Instruction step(cpu, 0x4C, 0x003713u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:975 LDX @LOCAL03
    case 0xC23A37: {
        Instruction step(cpu, 0xA6, 0x00001Au, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:976 REP #PROC_FLAGS::ACCUM8
    case 0xC23A39: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:977 LDA f:BATTLE_WINDOW_SIZES,X
    case 0xC23A3B: {
        Instruction step(cpu, 0xBF, 0xC4765Fu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:978 AND #$00FF
    case 0xC23A3F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:978 AND #$00FF
    // Overlapping static entry reached from 0xC23A3F.
    case 0xC23A41: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:979 JSL REDIRECT_SET_WINDOW_FOCUS
    case 0xC23A42: {
        Instruction step(cpu, 0x22, 0xC1DB2Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:980 JSL RESUME_MUSIC
    case 0xC23A46: {
        Instruction step(cpu, 0x22, 0xC13435u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:981 LDA @LOCAL04
    case 0xC23A4A: {
        Instruction step(cpu, 0xA5, 0x00001Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/menu_handler-jp.asm:982 STA @VIRTUAL02
    case 0xC23A4C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/menu_handler-jp.asm:984 END_C_FUNCTION
    case 0xC23A4E: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/menu_handler-jp.asm:984 END_C_FUNCTION
    case 0xC23A4F: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
