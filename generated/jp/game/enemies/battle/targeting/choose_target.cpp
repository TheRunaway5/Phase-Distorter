// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/choose_target.asm
bool resume_battle_choose_target(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/choose_target.asm:2 BEGIN_C_FUNCTION_FAR
    case 0xC24344: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/choose_target.asm:6 END_STACK_VARS
    case 0xC24346: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/choose_target.asm:6 END_STACK_VARS
    case 0xC24347: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/choose_target.asm:6 END_STACK_VARS
    case 0xC24348: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/choose_target.asm:6 END_STACK_VARS
    case 0xC24349: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/choose_target.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC24349.
    case 0xC2434B: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/choose_target.asm:6 END_STACK_VARS
    case 0xC2434C: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/choose_target.asm:6 END_STACK_VARS
    case 0xC2434D: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:7 STA $02
    case 0xC2434E: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:7 STA $02
    // Overlapping static entry reached from 0xC2434B.
    case 0xC2434F: {
        Instruction step(cpu, 0x02, 0x0000A2u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/choose_target.asm:8 LDX #$0000
    case 0xC24350: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:8 LDX #$0000
    // Overlapping static entry reached from 0xC24350.
    case 0xC24352: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:9 STX $0E
    case 0xC24353: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:10 BRA @UNKNOWN1
    case 0xC24355: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/choose_target.asm:12 LDA FRONT_ROW_BATTLERS,X
    case 0xC24357: {
        Instruction step(cpu, 0xBD, 0x00AF4Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:13 AND #$00FF
    case 0xC2435A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC2435A.
    case 0xC2435C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:14 JSL CHECK_IF_VALID_TARGET
    case 0xC2435D: {
        Instruction step(cpu, 0x22, 0xC47662u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/choose_target.asm:15 CMP #$0000
    case 0xC24361: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:15 CMP #$0000
    // Overlapping static entry reached from 0xC24361.
    case 0xC24363: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:16 BNE @UNKNOWN4
    case 0xC24364: {
        Instruction step(cpu, 0xD0, 0x00002Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/choose_target.asm:17 LDX $0E
    case 0xC24366: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:18 INX
    case 0xC24368: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:19 STX $0E
    case 0xC24369: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:21 CPX NUM_BATTLERS_IN_FRONT_ROW
    case 0xC2436B: {
        Instruction step(cpu, 0xEC, 0x00AF2Bu, 3u, AddressMode::Absolute);
        step.compare_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:22 BCC @UNKNOWN0
    case 0xC2436E: {
        Instruction step(cpu, 0x90, 0x0000E7u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/choose_target.asm:23 LDX #$0000
    case 0xC24370: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:23 LDX #$0000
    // Overlapping static entry reached from 0xC24370.
    case 0xC24372: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:24 STX $0E
    case 0xC24373: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:25 BRA @UNKNOWN3
    case 0xC24375: {
        Instruction step(cpu, 0x80, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/choose_target.asm:27 LDA BACK_ROW_BATTLERS,X
    case 0xC24377: {
        Instruction step(cpu, 0xBD, 0x00AF57u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:28 AND #$00FF
    case 0xC2437A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC2437A.
    case 0xC2437C: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:29 JSL CHECK_IF_VALID_TARGET
    case 0xC2437D: {
        Instruction step(cpu, 0x22, 0xC47662u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/choose_target.asm:30 CMP #$0000
    case 0xC24381: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:30 CMP #$0000
    // Overlapping static entry reached from 0xC24381.
    case 0xC24383: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:31 BNE @UNKNOWN4
    case 0xC24384: {
        Instruction step(cpu, 0xD0, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/choose_target.asm:32 LDX $0E
    case 0xC24386: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:33 INX
    case 0xC24388: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:34 STX $0E
    case 0xC24389: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:36 CPX NUM_BATTLERS_IN_BACK_ROW
    case 0xC2438B: {
        Instruction step(cpu, 0xEC, 0x00AF2Du, 3u, AddressMode::Absolute);
        step.compare_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:37 BCC @UNKNOWN2
    case 0xC2438E: {
        Instruction step(cpu, 0x90, 0x0000E7u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/battle/choose_target.asm:38 JSL UNKNOWN_C2F917
    case 0xC24390: {
        Instruction step(cpu, 0x22, 0xC2F830u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/choose_target.asm:40 LDX $02
    case 0xC24394: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:41 LDA a:battler::current_action,X
    case 0xC24396: {
        Instruction step(cpu, 0xBD, 0x000004u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/choose_target.asm:42 OPTIMIZED_MULT $04, 12
    case 0xC24399: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/choose_target.asm:42 OPTIMIZED_MULT $04, 12
    case 0xC2439B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/choose_target.asm:42 OPTIMIZED_MULT $04, 12
    case 0xC2439C: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/choose_target.asm:42 OPTIMIZED_MULT $04, 12
    case 0xC2439E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/choose_target.asm:42 OPTIMIZED_MULT $04, 12
    case 0xC2439F: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/choose_target.asm:43 TAX
    case 0xC243A0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:44 LDA f:BATTLE_ACTION_TABLE,X
    case 0xC243A1: {
        Instruction step(cpu, 0xBF, 0xD58B1Eu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:45 AND #$00FF
    case 0xC243A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC243A5.
    case 0xC243A7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:46 BNE @UNKNOWN6
    case 0xC243A8: {
        Instruction step(cpu, 0xD0, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/choose_target.asm:47 LDX $02
    case 0xC243AA: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:48 LDA a:battler::ally_or_enemy,X
    case 0xC243AC: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:49 AND #$00FF
    case 0xC243AF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC243AF.
    case 0xC243B1: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:50 CMP #$0001
    case 0xC243B2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:50 CMP #$0001
    // Overlapping static entry reached from 0xC243B2.
    case 0xC243B4: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:51 BNE @UNKNOWN5
    case 0xC243B5: {
        Instruction step(cpu, 0xD0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/choose_target.asm:52 LDX $02
    case 0xC243B7: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:53 SEP #PROC_FLAGS::ACCUM8
    case 0xC243B9: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/choose_target.asm:54 STZ a:battler::action_targetting,X
    case 0xC243BB: {
        Instruction step(cpu, 0x9E, 0x000009u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/choose_target.asm:55 BRA @UNKNOWN8
    case 0xC243BE: {
        Instruction step(cpu, 0x80, 0x00002Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/choose_target.asm:57 SEP #PROC_FLAGS::ACCUM8
    case 0xC243C0: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/choose_target.asm:58 LDA #$0010
    case 0xC243C2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x00A610u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:59 LDX $02
    case 0xC243C4: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:59 LDX $02
    // Overlapping static entry reached from 0xC243C2.
    case 0xC243C5: {
        Instruction step(cpu, 0x02, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/choose_target.asm:60 STA a:battler::action_targetting,X
    case 0xC243C6: {
        Instruction step(cpu, 0x9D, 0x000009u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:61 BRA @UNKNOWN8
    case 0xC243C9: {
        Instruction step(cpu, 0x80, 0x00001Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/choose_target.asm:64 LDX $02
    case 0xC243CB: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:65 LDA a:battler::ally_or_enemy,X
    case 0xC243CD: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:66 AND #$00FF
    case 0xC243D0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:66 AND #$00FF
    // Overlapping static entry reached from 0xC243D0.
    case 0xC243D2: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:67 CMP #$0001
    case 0xC243D3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:67 CMP #$0001
    // Overlapping static entry reached from 0xC243D3.
    case 0xC243D5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:68 BNE @UNKNOWN7
    case 0xC243D6: {
        Instruction step(cpu, 0xD0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/choose_target.asm:69 SEP #PROC_FLAGS::ACCUM8
    case 0xC243D8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/choose_target.asm:70 LDA #$0010
    case 0xC243DA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x00A610u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:71 LDX $02
    case 0xC243DC: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:71 LDX $02
    // Overlapping static entry reached from 0xC243DA.
    case 0xC243DD: {
        Instruction step(cpu, 0x02, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/choose_target.asm:72 STA a:battler::action_targetting,X
    case 0xC243DE: {
        Instruction step(cpu, 0x9D, 0x000009u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:73 BRA @UNKNOWN8
    case 0xC243E1: {
        Instruction step(cpu, 0x80, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/choose_target.asm:75 LDX $02
    case 0xC243E3: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:76 SEP #PROC_FLAGS::ACCUM8
    case 0xC243E5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/choose_target.asm:77 STZ a:battler::action_targetting,X
    case 0xC243E7: {
        Instruction step(cpu, 0x9E, 0x000009u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/choose_target.asm:79 REP #PROC_FLAGS::ACCUM8
    case 0xC243EA: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/choose_target.asm:80 LOADPTR BATTLE_ACTION_TABLE, $06
    case 0xC243EC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x008B1Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/choose_target.asm:80 LOADPTR BATTLE_ACTION_TABLE, $06
    // Overlapping static entry reached from 0xC243EC.
    case 0xC243EE: {
        Instruction step(cpu, 0x8B, 0x000000u, 1u, AddressMode::Implied);
        step.push_data_bank();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/choose_target.asm:80 LOADPTR BATTLE_ACTION_TABLE, $06
    case 0xC243EF: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/choose_target.asm:80 LOADPTR BATTLE_ACTION_TABLE, $06
    case 0xC243F1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/choose_target.asm:80 LOADPTR BATTLE_ACTION_TABLE, $06
    // Overlapping static entry reached from 0xC243F1.
    case 0xC243F3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/choose_target.asm:80 LOADPTR BATTLE_ACTION_TABLE, $06
    case 0xC243F4: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:81 LDX $02
    case 0xC243F6: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:82 INX
    case 0xC243F8: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:83 INX
    case 0xC243F9: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:84 INX
    case 0xC243FA: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:85 INX
    case 0xC243FB: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:86 STX $0E
    case 0xC243FC: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:87 LDA __BSS_START__,X ;battler.current_action
    case 0xC243FE: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/choose_target.asm:88 OPTIMIZED_MULT $04, 12
    case 0xC24401: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/choose_target.asm:88 OPTIMIZED_MULT $04, 12
    case 0xC24403: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/choose_target.asm:88 OPTIMIZED_MULT $04, 12
    case 0xC24404: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/choose_target.asm:88 OPTIMIZED_MULT $04, 12
    case 0xC24406: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/choose_target.asm:88 OPTIMIZED_MULT $04, 12
    case 0xC24407: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/choose_target.asm:89 INC
    case 0xC24408: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/choose_target.asm:90 MOVE_INTX $06, $0A
    case 0xC24409: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/choose_target.asm:90 MOVE_INTX $06, $0A
    case 0xC2440B: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/choose_target.asm:90 MOVE_INTX $06, $0A
    case 0xC2440D: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/choose_target.asm:90 MOVE_INTX $06, $0A
    case 0xC2440F: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:91 CLC
    case 0xC24411: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/choose_target.asm:92 ADC $0A
    case 0xC24412: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/choose_target.asm:93 STA $0A
    case 0xC24414: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:94 LDA [$0A]
    case 0xC24416: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:95 AND #$00FF
    case 0xC24418: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:95 AND #$00FF
    // Overlapping static entry reached from 0xC24418.
    case 0xC2441A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:96 BEQ @UNKNOWN11
    case 0xC2441B: {
        Instruction step(cpu, 0xF0, 0x00001Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/choose_target.asm:97 CMP #$0001
    case 0xC2441D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:97 CMP #$0001
    // Overlapping static entry reached from 0xC2441D.
    case 0xC2441F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:98 BEQ @UNKNOWN13
    case 0xC24420: {
        Instruction step(cpu, 0xF0, 0x000067u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/choose_target.asm:99 CMP #$0002
    case 0xC24422: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:99 CMP #$0002
    // Overlapping static entry reached from 0xC24422.
    case 0xC24424: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:100 BEQ @UNKNOWN13
    case 0xC24425: {
        Instruction step(cpu, 0xF0, 0x000062u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/choose_target.asm:101 CMP #$0003
    case 0xC24427: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:101 CMP #$0003
    // Overlapping static entry reached from 0xC24427.
    case 0xC24429: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/choose_target.asm:102 BEQL @UNKNOWN22
    case 0xC2442A: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/choose_target.asm:102 BEQL @UNKNOWN22
    case 0xC2442C: {
        Instruction step(cpu, 0x4C, 0x004559u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/choose_target.asm:103 CMP #$0004
    case 0xC2442F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:103 CMP #$0004
    // Overlapping static entry reached from 0xC2442F.
    case 0xC24431: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/choose_target.asm:104 BEQL @UNKNOWN26
    case 0xC24432: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/choose_target.asm:104 BEQL @UNKNOWN26
    case 0xC24434: {
        Instruction step(cpu, 0x4C, 0x0045B4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/choose_target.asm:105 JMP @UNKNOWN27
    case 0xC24437: {
        Instruction step(cpu, 0x4C, 0x0045CCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/choose_target.asm:107 LDA $02
    case 0xC2443A: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:108 CLC
    case 0xC2443C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/choose_target.asm:109 ADC #battler::action_targetting
    case 0xC2443D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/choose_target.asm:109 ADC #battler::action_targetting
    // Overlapping static entry reached from 0xC2443D.
    case 0xC2443F: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:110 TAX
    case 0xC24440: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:111 SEP #PROC_FLAGS::ACCUM8
    case 0xC24441: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/choose_target.asm:112 LDA __BSS_START__,X
    case 0xC24443: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:113 ORA #$0001
    case 0xC24446: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000001u : 0x009D01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:114 STA __BSS_START__,X
    case 0xC24448: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:114 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC24446.
    case 0xC24449: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:115 LDX $02
    case 0xC2444B: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:116 REP #PROC_FLAGS::ACCUM8
    case 0xC2444D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/choose_target.asm:117 LDA a:battler::ally_or_enemy,X
    case 0xC2444F: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:118 AND #$00FF
    case 0xC24452: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:118 AND #$00FF
    // Overlapping static entry reached from 0xC24452.
    case 0xC24454: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:119 CMP #$0001
    case 0xC24455: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:119 CMP #$0001
    // Overlapping static entry reached from 0xC24455.
    case 0xC24457: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:120 BNE @UNKNOWN12
    case 0xC24458: {
        Instruction step(cpu, 0xD0, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/choose_target.asm:121 LDY #.SIZEOF(battler)
    case 0xC2445A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/choose_target.asm:121 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2445A.
    case 0xC2445C: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:122 LDA $02
    case 0xC2445D: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:123 SEC
    case 0xC2445F: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/choose_target.asm:124 SBC #.LOWORD(BATTLERS_TABLE)
    case 0xC24460: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/choose_target.asm:124 SBC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC24460.
    case 0xC24462: {
        Instruction step(cpu, 0xA1, 0x000022u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:125 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC24463: {
        Instruction step(cpu, 0x22, 0xC0913Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/choose_target.asm:125 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC24462.
    case 0xC24464: {
        Instruction step(cpu, 0x3D, 0x00C091u, 3u, AddressMode::AbsoluteIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:126 TAX
    case 0xC24467: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:127 LDA $02
    case 0xC24468: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:128 JSL UNKNOWN_C4A228
    case 0xC2446A: {
        Instruction step(cpu, 0x22, 0xC47695u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/choose_target.asm:129 JMP @UNKNOWN27
    case 0xC2446E: {
        Instruction step(cpu, 0x4C, 0x0045CCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/choose_target.asm:131 LDY #.SIZEOF(battler)
    case 0xC24471: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/choose_target.asm:131 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC24471.
    case 0xC24473: {
        Instruction step(cpu, 0x00, 0x0000A5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:132 LDA $02
    case 0xC24474: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:133 SEC
    case 0xC24476: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/battle/choose_target.asm:134 SBC #.LOWORD(BATTLERS_TABLE)
    case 0xC24477: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x0000AEu : 0x00A1AEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/battle/choose_target.asm:134 SBC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC24477.
    case 0xC24479: {
        Instruction step(cpu, 0xA1, 0x000022u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:135 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC2447A: {
        Instruction step(cpu, 0x22, 0xC0913Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/choose_target.asm:135 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC24479.
    case 0xC2447B: {
        Instruction step(cpu, 0x3D, 0x00C091u, 3u, AddressMode::AbsoluteIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:136 SEP #PROC_FLAGS::ACCUM8
    case 0xC2447E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/choose_target.asm:137 INC
    case 0xC24480: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/choose_target.asm:138 LDX $02
    case 0xC24481: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:139 STA a:battler::current_target,X
    case 0xC24483: {
        Instruction step(cpu, 0x9D, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:140 JMP @UNKNOWN27
    case 0xC24486: {
        Instruction step(cpu, 0x4C, 0x0045CCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/choose_target.asm:143 LDA $02
    case 0xC24489: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:144 CLC
    case 0xC2448B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/choose_target.asm:145 ADC #battler::action_targetting
    case 0xC2448C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/choose_target.asm:145 ADC #battler::action_targetting
    // Overlapping static entry reached from 0xC2448C.
    case 0xC2448E: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:146 TAY
    case 0xC2448F: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/choose_target.asm:147 SEP #PROC_FLAGS::ACCUM8
    case 0xC24490: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/choose_target.asm:148 LDA __BSS_START__,Y
    case 0xC24492: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:149 ORA #$0001
    case 0xC24495: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000001u : 0x009901u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:150 STA __BSS_START__,Y
    case 0xC24497: {
        Instruction step(cpu, 0x99, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:150 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC24495.
    case 0xC24498: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:151 LDX $02
    case 0xC2449A: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:152 REP #PROC_FLAGS::ACCUM8
    case 0xC2449C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/choose_target.asm:153 LDA a:battler::ally_or_enemy,X
    case 0xC2449E: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:154 AND #$00FF
    case 0xC244A1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:154 AND #$00FF
    // Overlapping static entry reached from 0xC244A1.
    case 0xC244A3: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:155 CMP #$0001
    case 0xC244A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:155 CMP #$0001
    // Overlapping static entry reached from 0xC244A4.
    case 0xC244A6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:156 BNE @UNKNOWN18
    case 0xC244A7: {
        Instruction step(cpu, 0xD0, 0x000064u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/choose_target.asm:157 LDX $0E
    case 0xC244A9: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:158 LDA __BSS_START__,X ;battler.current_action
    case 0xC244AB: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/choose_target.asm:159 OPTIMIZED_MULT $04, 12
    case 0xC244AE: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/choose_target.asm:159 OPTIMIZED_MULT $04, 12
    case 0xC244B0: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/choose_target.asm:159 OPTIMIZED_MULT $04, 12
    case 0xC244B1: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/choose_target.asm:159 OPTIMIZED_MULT $04, 12
    case 0xC244B3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/choose_target.asm:159 OPTIMIZED_MULT $04, 12
    case 0xC244B4: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/choose_target.asm:160 CLC
    case 0xC244B5: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/choose_target.asm:161 ADC $06
    case 0xC244B6: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/choose_target.asm:162 STA $06
    case 0xC244B8: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:163 LDA [$06]
    case 0xC244BA: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:164 AND #$00FF
    case 0xC244BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:164 AND #$00FF
    // Overlapping static entry reached from 0xC244BC.
    case 0xC244BE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:165 BNE @UNKNOWN16
    case 0xC244BF: {
        Instruction step(cpu, 0xD0, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/choose_target.asm:166 JSL FIND_TARGETTABLE_NPC
    case 0xC244C1: {
        Instruction step(cpu, 0x22, 0xC23E1Cu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/choose_target.asm:167 SEP #PROC_FLAGS::ACCUM8
    case 0xC244C5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/choose_target.asm:168 LDX $02
    case 0xC244C7: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:169 STA a:battler::current_target,X
    case 0xC244C9: {
        Instruction step(cpu, 0x9D, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:170 REP #PROC_FLAGS::ACCUM8
    case 0xC244CC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/choose_target.asm:171 AND #$00FF
    case 0xC244CE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:171 AND #$00FF
    // Overlapping static entry reached from 0xC244CE.
    case 0xC244D0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/choose_target.asm:172 BNEL @UNKNOWN27
    case 0xC244D1: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/choose_target.asm:172 BNEL @UNKNOWN27
    case 0xC244D3: {
        Instruction step(cpu, 0x4C, 0x0045CCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/choose_target.asm:174 JSL RAND
    case 0xC244D6: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/choose_target.asm:175 SEP #PROC_FLAGS::ACCUM8
    case 0xC244DA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/choose_target.asm:176 AND #$0007
    case 0xC244DC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x001A07u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:177 INC
    case 0xC244DE: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/choose_target.asm:178 LDX $02
    case 0xC244DF: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:179 STA a:battler::current_target,X
    case 0xC244E1: {
        Instruction step(cpu, 0x9D, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:180 REP #PROC_FLAGS::ACCUM8
    case 0xC244E4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/choose_target.asm:181 AND #$00FF
    case 0xC244E6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:181 AND #$00FF
    // Overlapping static entry reached from 0xC244E6.
    case 0xC244E8: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:182 DEC
    case 0xC244E9: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/choose_target.asm:183 JSL CHECK_IF_VALID_TARGET
    case 0xC244EA: {
        Instruction step(cpu, 0x22, 0xC47662u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/choose_target.asm:184 CMP #$0000
    case 0xC244EE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:184 CMP #$0000
    // Overlapping static entry reached from 0xC244EE.
    case 0xC244F0: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/choose_target.asm:185 BNEL @UNKNOWN27
    case 0xC244F1: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/choose_target.asm:185 BNEL @UNKNOWN27
    case 0xC244F3: {
        Instruction step(cpu, 0x4C, 0x0045CCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/choose_target.asm:186 BRA @UNKNOWN14
    case 0xC244F6: {
        Instruction step(cpu, 0x80, 0x0000DEu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/choose_target.asm:188 LDA $02
    case 0xC244F8: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:189 JSL UNKNOWN_C24434
    case 0xC244FA: {
        Instruction step(cpu, 0x22, 0xC24301u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/choose_target.asm:190 TAX
    case 0xC244FE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:191 JSL CHECK_IF_VALID_TARGET
    case 0xC244FF: {
        Instruction step(cpu, 0x22, 0xC47662u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/choose_target.asm:192 CMP #$0000
    case 0xC24503: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:192 CMP #$0000
    // Overlapping static entry reached from 0xC24503.
    case 0xC24505: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/choose_target.asm:193 BNEL @UNKNOWN27
    case 0xC24506: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/choose_target.asm:193 BNEL @UNKNOWN27
    case 0xC24508: {
        Instruction step(cpu, 0x4C, 0x0045CCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/choose_target.asm:194 BRA @UNKNOWN16
    case 0xC2450B: {
        Instruction step(cpu, 0x80, 0x0000EBu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/choose_target.asm:196 LDX $0E
    case 0xC2450D: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:197 LDA __BSS_START__,X ;battler.current_action
    case 0xC2450F: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/choose_target.asm:198 OPTIMIZED_MULT $04, 12
    case 0xC24512: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/choose_target.asm:198 OPTIMIZED_MULT $04, 12
    case 0xC24514: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/choose_target.asm:198 OPTIMIZED_MULT $04, 12
    case 0xC24515: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/choose_target.asm:198 OPTIMIZED_MULT $04, 12
    case 0xC24517: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/choose_target.asm:198 OPTIMIZED_MULT $04, 12
    case 0xC24518: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/choose_target.asm:199 CLC
    case 0xC24519: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/choose_target.asm:200 ADC $06
    case 0xC2451A: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/choose_target.asm:201 STA $06
    case 0xC2451C: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:202 LDA [$06]
    case 0xC2451E: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:203 AND #$00FF
    case 0xC24520: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:203 AND #$00FF
    // Overlapping static entry reached from 0xC24520.
    case 0xC24522: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:204 BNE @UNKNOWN21
    case 0xC24523: {
        Instruction step(cpu, 0xD0, 0x000015u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/choose_target.asm:206 LDA $02
    case 0xC24525: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:207 JSL UNKNOWN_C24434
    case 0xC24527: {
        Instruction step(cpu, 0x22, 0xC24301u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/choose_target.asm:208 TAX
    case 0xC2452B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:209 JSL CHECK_IF_VALID_TARGET
    case 0xC2452C: {
        Instruction step(cpu, 0x22, 0xC47662u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/choose_target.asm:210 CMP #$0000
    case 0xC24530: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:210 CMP #$0000
    // Overlapping static entry reached from 0xC24530.
    case 0xC24532: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/choose_target.asm:211 BNEL @UNKNOWN27
    case 0xC24533: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/choose_target.asm:211 BNEL @UNKNOWN27
    case 0xC24535: {
        Instruction step(cpu, 0x4C, 0x0045CCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/choose_target.asm:212 BRA @UNKNOWN19
    case 0xC24538: {
        Instruction step(cpu, 0x80, 0x0000EBu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/choose_target.asm:214 JSL RAND
    case 0xC2453A: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/choose_target.asm:215 SEP #PROC_FLAGS::ACCUM8
    case 0xC2453E: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/choose_target.asm:216 AND #$0007
    case 0xC24540: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x001A07u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:217 INC
    case 0xC24542: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/choose_target.asm:218 LDX $02
    case 0xC24543: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:219 STA a:battler::current_target,X
    case 0xC24545: {
        Instruction step(cpu, 0x9D, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:220 REP #PROC_FLAGS::ACCUM8
    case 0xC24548: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/choose_target.asm:221 AND #$00FF
    case 0xC2454A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:221 AND #$00FF
    // Overlapping static entry reached from 0xC2454A.
    case 0xC2454C: {
        Instruction step(cpu, 0x00, 0x00003Au, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:222 DEC
    case 0xC2454D: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/choose_target.asm:223 JSL CHECK_IF_VALID_TARGET
    case 0xC2454E: {
        Instruction step(cpu, 0x22, 0xC47662u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/choose_target.asm:224 CMP #$0000
    case 0xC24552: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:224 CMP #$0000
    // Overlapping static entry reached from 0xC24552.
    case 0xC24554: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:225 BEQ @UNKNOWN21
    case 0xC24555: {
        Instruction step(cpu, 0xF0, 0x0000E3u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/choose_target.asm:226 BRA @UNKNOWN27
    case 0xC24557: {
        Instruction step(cpu, 0x80, 0x000073u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/choose_target.asm:228 LDA $02
    case 0xC24559: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:229 CLC
    case 0xC2455B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/choose_target.asm:230 ADC #battler::action_targetting
    case 0xC2455C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/choose_target.asm:230 ADC #battler::action_targetting
    // Overlapping static entry reached from 0xC2455C.
    case 0xC2455E: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:231 TAX
    case 0xC2455F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:232 SEP #PROC_FLAGS::ACCUM8
    case 0xC24560: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/choose_target.asm:233 LDA __BSS_START__,X
    case 0xC24562: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:234 ORA #$0002
    case 0xC24565: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000002u : 0x009D02u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:235 STA __BSS_START__,X
    case 0xC24567: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:235 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC24565.
    case 0xC24568: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:236 LDX $02
    case 0xC2456A: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:237 REP #PROC_FLAGS::ACCUM8
    case 0xC2456C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/choose_target.asm:238 LDA a:battler::ally_or_enemy,X
    case 0xC2456E: {
        Instruction step(cpu, 0xBD, 0x00000Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:239 AND #$00FF
    case 0xC24571: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:239 AND #$00FF
    // Overlapping static entry reached from 0xC24571.
    case 0xC24573: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:240 CMP #$0001
    case 0xC24574: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:240 CMP #$0001
    // Overlapping static entry reached from 0xC24574.
    case 0xC24576: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:241 BNE @UNKNOWN23
    case 0xC24577: {
        Instruction step(cpu, 0xD0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/choose_target.asm:242 SEP #PROC_FLAGS::ACCUM8
    case 0xC24579: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/choose_target.asm:243 LDA #$0001
    case 0xC2457B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00A601u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:244 LDX $02
    case 0xC2457D: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:244 LDX $02
    // Overlapping static entry reached from 0xC2457B.
    case 0xC2457E: {
        Instruction step(cpu, 0x02, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/choose_target.asm:245 STA a:battler::current_target,X
    case 0xC2457F: {
        Instruction step(cpu, 0x9D, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:246 BRA @UNKNOWN27
    case 0xC24582: {
        Instruction step(cpu, 0x80, 0x000048u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/choose_target.asm:248 LDA NUM_BATTLERS_IN_FRONT_ROW
    case 0xC24584: {
        Instruction step(cpu, 0xAD, 0x00AF2Bu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:249 BNE @UNKNOWN24
    case 0xC24587: {
        Instruction step(cpu, 0xD0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/choose_target.asm:250 SEP #PROC_FLAGS::ACCUM8
    case 0xC24589: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/choose_target.asm:251 LDA #$0002
    case 0xC2458B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x00A602u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:252 LDX $02
    case 0xC2458D: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:252 LDX $02
    // Overlapping static entry reached from 0xC2458B.
    case 0xC2458E: {
        Instruction step(cpu, 0x02, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/choose_target.asm:253 STA a:battler::current_target,X
    case 0xC2458F: {
        Instruction step(cpu, 0x9D, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:254 BRA @UNKNOWN27
    case 0xC24592: {
        Instruction step(cpu, 0x80, 0x000038u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/choose_target.asm:256 LDA NUM_BATTLERS_IN_BACK_ROW
    case 0xC24594: {
        Instruction step(cpu, 0xAD, 0x00AF2Du, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:257 BNE @UNKNOWN25
    case 0xC24597: {
        Instruction step(cpu, 0xD0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/choose_target.asm:258 SEP #PROC_FLAGS::ACCUM8
    case 0xC24599: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/choose_target.asm:259 LDA #$0001
    case 0xC2459B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00A601u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:260 LDX $02
    case 0xC2459D: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:260 LDX $02
    // Overlapping static entry reached from 0xC2459B.
    case 0xC2459E: {
        Instruction step(cpu, 0x02, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/choose_target.asm:261 STA a:battler::current_target,X
    case 0xC2459F: {
        Instruction step(cpu, 0x9D, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:262 BRA @UNKNOWN27
    case 0xC245A2: {
        Instruction step(cpu, 0x80, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/choose_target.asm:264 JSL RAND
    case 0xC245A4: {
        Instruction step(cpu, 0x22, 0xC08E8Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/choose_target.asm:265 SEP #PROC_FLAGS::ACCUM8
    case 0xC245A8: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/choose_target.asm:266 AND #$0001
    case 0xC245AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x001A01u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:267 INC
    case 0xC245AC: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/choose_target.asm:268 LDX $02
    case 0xC245AD: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:269 STA a:battler::current_target,X
    case 0xC245AF: {
        Instruction step(cpu, 0x9D, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:270 BRA @UNKNOWN27
    case 0xC245B2: {
        Instruction step(cpu, 0x80, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/choose_target.asm:273 LDA $02
    case 0xC245B4: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:274 CLC
    case 0xC245B6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/choose_target.asm:275 ADC #battler::action_targetting
    case 0xC245B7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/choose_target.asm:275 ADC #battler::action_targetting
    // Overlapping static entry reached from 0xC245B7.
    case 0xC245B9: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:276 TAX
    case 0xC245BA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:277 SEP #PROC_FLAGS::ACCUM8
    case 0xC245BB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/choose_target.asm:278 LDA __BSS_START__,X
    case 0xC245BD: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:279 ORA #$0004
    case 0xC245C0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x000004u : 0x009D04u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:280 STA __BSS_START__,X
    case 0xC245C2: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:280 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC245C0.
    case 0xC245C3: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/choose_target.asm:281 LDA #$0001
    case 0xC245C5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x00A601u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:282 LDX $02
    case 0xC245C7: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/choose_target.asm:282 LDX $02
    // Overlapping static entry reached from 0xC245C5.
    case 0xC245C8: {
        Instruction step(cpu, 0x02, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/battle/choose_target.asm:283 STA a:battler::current_target,X
    case 0xC245C9: {
        Instruction step(cpu, 0x9D, 0x00000Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/choose_target.asm:285 REP #PROC_FLAGS::ACCUM8
    case 0xC245CC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/choose_target.asm:286 END_C_FUNCTION
    case 0xC245CE: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/choose_target.asm:286 END_C_FUNCTION
    case 0xC245CF: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
