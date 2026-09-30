// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/eat_food.asm
bool resume_battle_eat_food(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/eat_food.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2B232: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/eat_food.asm:15 END_STACK_VARS
    case 0xC2B234: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/eat_food.asm:15 END_STACK_VARS
    case 0xC2B235: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/eat_food.asm:15 END_STACK_VARS
    case 0xC2B236: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E6u : 0x00FFE6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/eat_food.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC2B236.
    case 0xC2B238: {
        Instruction step(cpu, 0xFF, 0x74AE5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/eat_food.asm:15 END_STACK_VARS
    case 0xC2B239: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/eat_food.asm:16 LDX CURRENT_TARGET
    case 0xC2B23A: {
        Instruction step(cpu, 0xAE, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:16 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC2B238.
    case 0xC2B23C: {
        Instruction step(cpu, 0xAB, 0x000000u, 1u, AddressMode::Implied);
        step.pull_data_bank();
        return step.finish();
    }
    // src/battle/eat_food.asm:17 LDA a:battler::id,X
    case 0xC2B23D: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:18 TAX
    case 0xC2B240: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:19 STX @LOCAL03
    case 0xC2B241: {
        Instruction step(cpu, 0x86, 0x000018u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:20 TXA
    case 0xC2B243: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:21 DEC
    case 0xC2B244: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/eat_food.asm:22 LDY #.SIZEOF(char_struct)
    case 0xC2B245: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:22 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2B245.
    case 0xC2B247: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:23 JSL MULT168
    case 0xC2B248: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:24 TAX
    case 0xC2B24C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:25 LDA PARTY_CHARACTERS+char_struct::afflictions,X
    case 0xC2B24D: {
        Instruction step(cpu, 0xBD, 0x009C8Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:26 AND #$00FF
    case 0xC2B250: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC2B250.
    case 0xC2B252: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:27 CMP #STATUS_0::UNCONSCIOUS
    case 0xC2B253: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:27 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC2B253.
    case 0xC2B255: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:28 BNE @UNKNOWN0
    case 0xC2B256: {
        Instruction step(cpu, 0xD0, 0x000011u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:29 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2B258: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CBu : 0x002DCBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:29 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2B258.
    case 0xC2B25A: {
        Instruction step(cpu, 0x2D, 0x000E85u, 3u, AddressMode::Absolute);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:29 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2B25B: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:29 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2B25D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:29 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    // Overlapping static entry reached from 0xC2B25D.
    case 0xC2B25F: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/eat_food.asm:29 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2B260: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/eat_food.asm:29 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIKANAI
    case 0xC2B262: {
        Instruction step(cpu, 0x22, 0xC1D9FFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:30 JMP @UNKNOWN36
    case 0xC2B266: {
        Instruction step(cpu, 0x4C, 0x00B5ABu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:32 JSR APPLY_CONDIMENT
    case 0xC2B269: {
        Instruction step(cpu, 0x20, 0x00B126u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/eat_food.asm:36 LDX @LOCAL03
    case 0xC2B26C: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:37 CPX #4
    case 0xC2B26E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:37 CPX #4
    // Overlapping static entry reached from 0xC2B26E.
    case 0xC2B270: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:38 BNE @UNKNOWN1
    case 0xC2B271: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/battle/eat_food.asm:39 LDA #2
    case 0xC2B273: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:39 LDA #2
    // Overlapping static entry reached from 0xC2B273.
    case 0xC2B275: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:40 BRA @UNKNOWN2
    case 0xC2B276: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/eat_food.asm:42 LDA #1
    case 0xC2B278: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:42 LDA #1
    // Overlapping static entry reached from 0xC2B278.
    case 0xC2B27A: {
        Instruction step(cpu, 0x00, 0x0000A6u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/eat_food.asm:44 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B27B: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/eat_food.asm:44 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B27D: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/eat_food.asm:44 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B27F: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/eat_food.asm:44 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2B281: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:45 CLC
    case 0xC2B283: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:46 ADC @VIRTUAL0A
    case 0xC2B284: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:47 STA @VIRTUAL0A
    case 0xC2B286: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:48 LDA [@VIRTUAL0A]
    case 0xC2B288: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:49 AND #$00FF
    case 0xC2B28A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC2B28A.
    case 0xC2B28C: {
        Instruction step(cpu, 0x00, 0x0000A8u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:50 TAY
    case 0xC2B28D: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:51 STY @LOCAL02
    case 0xC2B28E: {
        Instruction step(cpu, 0x84, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/eat_food.asm:52 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B290: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/eat_food.asm:52 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B292: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/eat_food.asm:52 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B294: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/eat_food.asm:52 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2B296: {
        Instruction step(cpu, 0x85, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:53 LDA [@VIRTUAL0A]
    case 0xC2B298: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:54 AND #$00FF
    case 0xC2B29A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC2B29A.
    case 0xC2B29C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:55 BEQ @UNKNOWN12
    case 0xC2B29D: {
        Instruction step(cpu, 0xF0, 0x000050u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/eat_food.asm:56 CMP #1
    case 0xC2B29F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:56 CMP #1
    // Overlapping static entry reached from 0xC2B29F.
    case 0xC2B2A1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:57 BEQ @UNKNOWN15
    case 0xC2B2A2: {
        Instruction step(cpu, 0xF0, 0x000069u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/eat_food.asm:58 CMP #2
    case 0xC2B2A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:58 CMP #2
    // Overlapping static entry reached from 0xC2B2A4.
    case 0xC2B2A6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:59 BEQL @UNKNOWN18
    case 0xC2B2A7: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:59 BEQL @UNKNOWN18
    case 0xC2B2A9: {
        Instruction step(cpu, 0x4C, 0x00B325u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:60 CMP #3
    case 0xC2B2AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:60 CMP #3
    // Overlapping static entry reached from 0xC2B2AC.
    case 0xC2B2AE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:61 BEQL @UNKNOWN23
    case 0xC2B2AF: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:61 BEQL @UNKNOWN23
    case 0xC2B2B1: {
        Instruction step(cpu, 0x4C, 0x00B357u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:62 CMP #4
    case 0xC2B2B4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:62 CMP #4
    // Overlapping static entry reached from 0xC2B2B4.
    case 0xC2B2B6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:63 BEQL @UNKNOWN28
    case 0xC2B2B7: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:63 BEQL @UNKNOWN28
    case 0xC2B2B9: {
        Instruction step(cpu, 0x4C, 0x00B385u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:64 CMP #5
    case 0xC2B2BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:64 CMP #5
    // Overlapping static entry reached from 0xC2B2BC.
    case 0xC2B2BE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:65 BEQL @UNKNOWN29
    case 0xC2B2BF: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:65 BEQL @UNKNOWN29
    case 0xC2B2C1: {
        Instruction step(cpu, 0x4C, 0x00B3ECu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:66 CMP #6
    case 0xC2B2C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:66 CMP #6
    // Overlapping static entry reached from 0xC2B2C4.
    case 0xC2B2C6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:67 BEQL @UNKNOWN30
    case 0xC2B2C7: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:67 BEQL @UNKNOWN30
    case 0xC2B2C9: {
        Instruction step(cpu, 0x4C, 0x00B453u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:68 CMP #7
    case 0xC2B2CC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:68 CMP #7
    // Overlapping static entry reached from 0xC2B2CC.
    case 0xC2B2CE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:69 BEQL @UNKNOWN31
    case 0xC2B2CF: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:69 BEQL @UNKNOWN31
    case 0xC2B2D1: {
        Instruction step(cpu, 0x4C, 0x00B4BAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:70 CMP #8
    case 0xC2B2D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:70 CMP #8
    // Overlapping static entry reached from 0xC2B2D4.
    case 0xC2B2D6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:71 BEQL @UNKNOWN32
    case 0xC2B2D7: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:71 BEQL @UNKNOWN32
    case 0xC2B2D9: {
        Instruction step(cpu, 0x4C, 0x00B520u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:72 CMP #9
    case 0xC2B2DC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:72 CMP #9
    // Overlapping static entry reached from 0xC2B2DC.
    case 0xC2B2DE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:73 BEQL @UNKNOWN33
    case 0xC2B2DF: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:73 BEQL @UNKNOWN33
    case 0xC2B2E1: {
        Instruction step(cpu, 0x4C, 0x00B586u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:74 CMP #10
    case 0xC2B2E4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:74 CMP #10
    // Overlapping static entry reached from 0xC2B2E4.
    case 0xC2B2E6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:75 BEQL @UNKNOWN34
    case 0xC2B2E7: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:75 BEQL @UNKNOWN34
    case 0xC2B2E9: {
        Instruction step(cpu, 0x4C, 0x00B58Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:76 JMP @UNKNOWN35
    case 0xC2B2EC: {
        Instruction step(cpu, 0x4C, 0x00B590u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:78 CPY #0
    case 0xC2B2EF: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:78 CPY #0
    // Overlapping static entry reached from 0xC2B2EF.
    case 0xC2B2F1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:79 BEQ @UNKNOWN13
    case 0xC2B2F2: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/eat_food.asm:80 TYA
    case 0xC2B2F4: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:534 STA scratch
    // Macro caller: src/battle/eat_food.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B2F5: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:535 ASL
    // Macro caller: src/battle/eat_food.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B2F7: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/battle/eat_food.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B2F8: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:537 ASL
    // Macro caller: src/battle/eat_food.asm:81 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B2FA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/eat_food.asm:82 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2B2FB: {
        Instruction step(cpu, 0x20, 0x006A3Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/eat_food.asm:83 TAX
    case 0xC2B2FE: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:84 BRA @UNKNOWN14
    case 0xC2B2FF: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/eat_food.asm:86 LDX #30000
    case 0xC2B301: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000030u : 0x007530u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:86 LDX #30000
    // Overlapping static entry reached from 0xC2B301.
    case 0xC2B303: {
        Instruction step(cpu, 0x75, 0x0000ADu, 2u, AddressMode::DirectPageIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:88 LDA CURRENT_TARGET
    case 0xC2B304: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:88 LDA CURRENT_TARGET
    // Overlapping static entry reached from 0xC2B303.
    case 0xC2B305: {
        Instruction step(cpu, 0x74, 0x0000ABu, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/eat_food.asm:89 JSR RECOVER_HP
    case 0xC2B307: {
        Instruction step(cpu, 0x20, 0x0071D7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/eat_food.asm:90 JMP @UNKNOWN35
    case 0xC2B30A: {
        Instruction step(cpu, 0x4C, 0x00B590u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:92 CPY #0
    case 0xC2B30D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:92 CPY #0
    // Overlapping static entry reached from 0xC2B30D.
    case 0xC2B30F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:93 BEQ @UNKNOWN16
    case 0xC2B310: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/eat_food.asm:94 TYA
    case 0xC2B312: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:95 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2B313: {
        Instruction step(cpu, 0x20, 0x006A3Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/eat_food.asm:96 TAX
    case 0xC2B316: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:97 BRA @UNKNOWN17
    case 0xC2B317: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/eat_food.asm:99 LDX #30000
    case 0xC2B319: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000030u : 0x007530u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:99 LDX #30000
    // Overlapping static entry reached from 0xC2B319.
    case 0xC2B31B: {
        Instruction step(cpu, 0x75, 0x0000ADu, 2u, AddressMode::DirectPageIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:101 LDA CURRENT_TARGET
    case 0xC2B31C: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:101 LDA CURRENT_TARGET
    // Overlapping static entry reached from 0xC2B31B.
    case 0xC2B31D: {
        Instruction step(cpu, 0x74, 0x0000ABu, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/eat_food.asm:102 JSR RECOVER_PP
    case 0xC2B31F: {
        Instruction step(cpu, 0x20, 0x00725Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/eat_food.asm:103 JMP @UNKNOWN35
    case 0xC2B322: {
        Instruction step(cpu, 0x4C, 0x00B590u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:105 CPY #0
    case 0xC2B325: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:105 CPY #0
    // Overlapping static entry reached from 0xC2B325.
    case 0xC2B327: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:106 BEQ @UNKNOWN19
    case 0xC2B328: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/eat_food.asm:107 TYA
    case 0xC2B32A: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:534 STA scratch
    // Macro caller: src/battle/eat_food.asm:108 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B32B: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:535 ASL
    // Macro caller: src/battle/eat_food.asm:108 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B32D: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/battle/eat_food.asm:108 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B32E: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:537 ASL
    // Macro caller: src/battle/eat_food.asm:108 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B330: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/eat_food.asm:109 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2B331: {
        Instruction step(cpu, 0x20, 0x006A3Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/eat_food.asm:110 TAX
    case 0xC2B334: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:111 BRA @UNKNOWN20
    case 0xC2B335: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/eat_food.asm:113 LDX #30000
    case 0xC2B337: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000030u : 0x007530u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:113 LDX #30000
    // Overlapping static entry reached from 0xC2B337.
    case 0xC2B339: {
        Instruction step(cpu, 0x75, 0x0000ADu, 2u, AddressMode::DirectPageIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:115 LDA CURRENT_TARGET
    case 0xC2B33A: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:115 LDA CURRENT_TARGET
    // Overlapping static entry reached from 0xC2B339.
    case 0xC2B33B: {
        Instruction step(cpu, 0x74, 0x0000ABu, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/eat_food.asm:116 JSR RECOVER_HP
    case 0xC2B33D: {
        Instruction step(cpu, 0x20, 0x0071D7u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/eat_food.asm:117 LDY @LOCAL02
    case 0xC2B340: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:118 BEQ @UNKNOWN21
    case 0xC2B342: {
        Instruction step(cpu, 0xF0, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/eat_food.asm:119 TYA
    case 0xC2B344: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:120 JSR TWENTY_FIVE_PERCENT_VARIANCE
    case 0xC2B345: {
        Instruction step(cpu, 0x20, 0x006A3Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/eat_food.asm:121 TAX
    case 0xC2B348: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:122 BRA @UNKNOWN22
    case 0xC2B349: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/eat_food.asm:124 LDX #$7530
    case 0xC2B34B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000030u : 0x007530u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:124 LDX #$7530
    // Overlapping static entry reached from 0xC2B34B.
    case 0xC2B34D: {
        Instruction step(cpu, 0x75, 0x0000ADu, 2u, AddressMode::DirectPageIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:126 LDA CURRENT_TARGET
    case 0xC2B34E: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:126 LDA CURRENT_TARGET
    // Overlapping static entry reached from 0xC2B34D.
    case 0xC2B34F: {
        Instruction step(cpu, 0x74, 0x0000ABu, 2u, AddressMode::DirectPageIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/battle/eat_food.asm:127 JSR RECOVER_PP
    case 0xC2B351: {
        Instruction step(cpu, 0x20, 0x00725Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/eat_food.asm:128 JMP @UNKNOWN35
    case 0xC2B354: {
        Instruction step(cpu, 0x4C, 0x00B590u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:130 LDA #$0004
    case 0xC2B357: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:130 LDA #$0004
    // Overlapping static entry reached from 0xC2B357.
    case 0xC2B359: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:131 JSR RAND_LIMIT
    case 0xC2B35A: {
        Instruction step(cpu, 0x20, 0x00696Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/eat_food.asm:132 CMP #0
    case 0xC2B35D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:132 CMP #0
    // Overlapping static entry reached from 0xC2B35D.
    case 0xC2B35F: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:133 BEQ @UNKNOWN28
    case 0xC2B360: {
        Instruction step(cpu, 0xF0, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/eat_food.asm:134 CMP #1
    case 0xC2B362: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:134 CMP #1
    // Overlapping static entry reached from 0xC2B362.
    case 0xC2B364: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:135 BEQL @UNKNOWN29
    case 0xC2B365: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:135 BEQL @UNKNOWN29
    case 0xC2B367: {
        Instruction step(cpu, 0x4C, 0x00B3ECu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:136 CMP #2
    case 0xC2B36A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:136 CMP #2
    // Overlapping static entry reached from 0xC2B36A.
    case 0xC2B36C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:137 BEQL @UNKNOWN30
    case 0xC2B36D: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:137 BEQL @UNKNOWN30
    case 0xC2B36F: {
        Instruction step(cpu, 0x4C, 0x00B453u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:138 CMP #3
    case 0xC2B372: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:138 CMP #3
    // Overlapping static entry reached from 0xC2B372.
    case 0xC2B374: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:139 BEQL @UNKNOWN31
    case 0xC2B375: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:139 BEQL @UNKNOWN31
    case 0xC2B377: {
        Instruction step(cpu, 0x4C, 0x00B4BAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:140 CMP #4
    case 0xC2B37A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:140 CMP #4
    // Overlapping static entry reached from 0xC2B37A.
    case 0xC2B37C: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/eat_food.asm:141 BEQL @UNKNOWN32
    case 0xC2B37D: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/eat_food.asm:141 BEQL @UNKNOWN32
    case 0xC2B37F: {
        Instruction step(cpu, 0x4C, 0x00B520u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:142 JMP @UNKNOWN35
    case 0xC2B382: {
        Instruction step(cpu, 0x4C, 0x00B590u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:144 LDA CURRENT_TARGET
    case 0xC2B385: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:145 CLC
    case 0xC2B388: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:146 ADC #battler::iq
    case 0xC2B389: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000031u : 0x000031u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:146 ADC #battler::iq
    // Overlapping static entry reached from 0xC2B389.
    case 0xC2B38B: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:147 LDY @LOCAL02
    case 0xC2B38C: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:148 SEP #PROC_FLAGS::INDEX8
    case 0xC2B38E: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:149 STY @VIRTUAL00
    case 0xC2B390: {
        Instruction step(cpu, 0x84, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:150 PHA
    case 0xC2B392: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:151 REP #PROC_FLAGS::INDEX8
    case 0xC2B393: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:152 TAX
    case 0xC2B395: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:153 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B396: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:154 LDA __BSS_START__,X
    case 0xC2B398: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:155 CLC
    case 0xC2B39B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:156 ADC @VIRTUAL00
    case 0xC2B39C: {
        Instruction step(cpu, 0x65, 0x000000u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:157 PLX
    case 0xC2B39E: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:158 STA __BSS_START__,X
    case 0xC2B39F: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:159 LDX @LOCAL03
    case 0xC2B3A2: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:160 REP #PROC_FLAGS::ACCUM8
    case 0xC2B3A4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:161 TXA
    case 0xC2B3A6: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:162 DEC
    case 0xC2B3A7: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/eat_food.asm:163 LDY #.SIZEOF(char_struct)
    case 0xC2B3A8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:163 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2B5CC.
    case 0xC2B3A9: {
        Instruction step(cpu, 0x5E, 0x002200u, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/battle/eat_food.asm:163 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2B3A8.
    case 0xC2B3AA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:164 JSL MULT168
    case 0xC2B3AB: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:164 JSL MULT168
    // Overlapping static entry reached from 0xC2B3A9.
    case 0xC2B3AC: {
        Instruction step(cpu, 0xDB, 0x000000u, 1u, AddressMode::Implied);
        step.stop();
        return step.finish();
    }
    // src/battle/eat_food.asm:165 CLC
    case 0xC2B3AF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:166 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_iq
    case 0xC2B3B0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D8u : 0x009CD8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:166 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_iq
    // Overlapping static entry reached from 0xC2B3B0.
    case 0xC2B3B2: {
        Instruction step(cpu, 0x9C, 0x00AA48u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/eat_food.asm:167 PHA
    case 0xC2B3B3: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:168 TAX
    case 0xC2B3B4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:169 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B3B5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:170 LDA __BSS_START__,X
    case 0xC2B3B7: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:171 CLC
    case 0xC2B3BA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:172 ADC @VIRTUAL00
    case 0xC2B3BB: {
        Instruction step(cpu, 0x65, 0x000000u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:173 PLX
    case 0xC2B3BD: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:174 STA __BSS_START__,X
    case 0xC2B3BE: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:175 LDX @LOCAL03
    case 0xC2B3C1: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:176 REP #PROC_FLAGS::ACCUM8
    case 0xC2B3C3: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:177 TXA
    case 0xC2B3C5: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:178 JSL RECALC_CHARACTER_POSTMATH_IQ
    case 0xC2B3C6: {
        Instruction step(cpu, 0x22, 0xC21C12u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:179 REP #PROC_FLAGS::ACCUM8
    case 0xC2B3CA: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:180 LOADPTR MSG_BTL_IQ_UP, @LOCAL00
    case 0xC2B3CC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00007Du : 0x00367Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:180 LOADPTR MSG_BTL_IQ_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B3CC.
    case 0xC2B3CE: {
        Instruction step(cpu, 0x36, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:180 LOADPTR MSG_BTL_IQ_UP, @LOCAL00
    case 0xC2B3CF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:180 LOADPTR MSG_BTL_IQ_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B3CE.
    case 0xC2B3D0: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:180 LOADPTR MSG_BTL_IQ_UP, @LOCAL00
    case 0xC2B3D1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:180 LOADPTR MSG_BTL_IQ_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B3D1.
    case 0xC2B3D3: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/eat_food.asm:180 LOADPTR MSG_BTL_IQ_UP, @LOCAL00
    case 0xC2B3D4: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:181 LDY @LOCAL02
    case 0xC2B3D6: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:182 TYA
    case 0xC2B3D8: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/eat_food.asm:183 STORE_INT1632 @TEXTTMP
    case 0xC2B3D9: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/eat_food.asm:183 STORE_INT1632 @TEXTTMP
    case 0xC2B3DB: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/eat_food.asm:184 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B3DD: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/eat_food.asm:184 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B3DF: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/eat_food.asm:184 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B3E1: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/eat_food.asm:184 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B3E3: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:185 JSL DISPLAY_TEXT_WAIT
    case 0xC2B3E5: {
        Instruction step(cpu, 0x22, 0xC1DA49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:186 JMP @UNKNOWN35
    case 0xC2B3E9: {
        Instruction step(cpu, 0x4C, 0x00B590u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:188 LDA CURRENT_TARGET
    case 0xC2B3EC: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:189 CLC
    case 0xC2B3EF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:190 ADC #battler::guts
    case 0xC2B3F0: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00002Cu : 0x00002Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:190 ADC #battler::guts
    // Overlapping static entry reached from 0xC2B3F0.
    case 0xC2B3F2: {
        Instruction step(cpu, 0x00, 0x000048u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:191 PHA
    case 0xC2B3F3: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:192 LDY @LOCAL02
    case 0xC2B3F4: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:193 STY @VIRTUAL02
    case 0xC2B3F6: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:194 TAX
    case 0xC2B3F8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:195 LDA __BSS_START__,X
    case 0xC2B3F9: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:196 CLC
    case 0xC2B3FC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:197 ADC @VIRTUAL02
    case 0xC2B3FD: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:198 PLX
    case 0xC2B3FF: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:199 STA __BSS_START__,X
    case 0xC2B400: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:200 LDX @LOCAL03
    case 0xC2B403: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:201 TXA
    case 0xC2B405: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:202 DEC
    case 0xC2B406: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/eat_food.asm:203 LDY #.SIZEOF(char_struct)
    case 0xC2B407: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:203 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2B407.
    case 0xC2B409: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:204 JSL MULT168
    case 0xC2B40A: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:205 CLC
    case 0xC2B40E: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:206 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_guts
    case 0xC2B40F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D6u : 0x009CD6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:206 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_guts
    // Overlapping static entry reached from 0xC2B40F.
    case 0xC2B411: {
        Instruction step(cpu, 0x9C, 0x00A448u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/eat_food.asm:207 PHA
    case 0xC2B412: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:208 LDY @LOCAL02
    case 0xC2B413: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:208 LDY @LOCAL02
    // Overlapping static entry reached from 0xC2B411.
    case 0xC2B414: {
        Instruction step(cpu, 0x16, 0x0000E2u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/battle/eat_food.asm:209 SEP #PROC_FLAGS::INDEX8
    case 0xC2B415: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:209 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC2B414.
    case 0xC2B416: {
        Instruction step(cpu, 0x10, 0x000084u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/battle/eat_food.asm:210 STY @VIRTUAL00
    case 0xC2B417: {
        Instruction step(cpu, 0x84, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:210 STY @VIRTUAL00
    // Overlapping static entry reached from 0xC2B416.
    case 0xC2B418: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:211 REP #PROC_FLAGS::INDEX8
    case 0xC2B419: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:212 TAX
    case 0xC2B41B: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:213 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B41C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:214 LDA __BSS_START__,X
    case 0xC2B41E: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:215 CLC
    case 0xC2B421: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:216 ADC @VIRTUAL00
    case 0xC2B422: {
        Instruction step(cpu, 0x65, 0x000000u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:217 PLX
    case 0xC2B424: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:218 STA __BSS_START__,X
    case 0xC2B425: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:219 LDX @LOCAL03
    case 0xC2B428: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:220 REP #PROC_FLAGS::ACCUM8
    case 0xC2B42A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:221 TXA
    case 0xC2B42C: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:222 JSL RECALC_CHARACTER_POSTMATH_GUTS
    case 0xC2B42D: {
        Instruction step(cpu, 0x22, 0xC21A48u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:223 REP #PROC_FLAGS::ACCUM8
    case 0xC2B431: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:224 LOADPTR MSG_BTL_GUTS_UP, @LOCAL00
    case 0xC2B433: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000094u : 0x003694u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:224 LOADPTR MSG_BTL_GUTS_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B433.
    case 0xC2B435: {
        Instruction step(cpu, 0x36, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:224 LOADPTR MSG_BTL_GUTS_UP, @LOCAL00
    case 0xC2B436: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:224 LOADPTR MSG_BTL_GUTS_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B435.
    case 0xC2B437: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:224 LOADPTR MSG_BTL_GUTS_UP, @LOCAL00
    case 0xC2B438: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:224 LOADPTR MSG_BTL_GUTS_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B438.
    case 0xC2B43A: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/eat_food.asm:224 LOADPTR MSG_BTL_GUTS_UP, @LOCAL00
    case 0xC2B43B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:225 LDY @LOCAL02
    case 0xC2B43D: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:226 TYA
    case 0xC2B43F: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/eat_food.asm:227 STORE_INT1632 @TEXTTMP
    case 0xC2B440: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/eat_food.asm:227 STORE_INT1632 @TEXTTMP
    case 0xC2B442: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/eat_food.asm:228 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B444: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/eat_food.asm:228 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B446: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/eat_food.asm:228 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B448: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/eat_food.asm:228 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B44A: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:229 JSL DISPLAY_TEXT_WAIT
    case 0xC2B44C: {
        Instruction step(cpu, 0x22, 0xC1DA49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:230 JMP @UNKNOWN35
    case 0xC2B450: {
        Instruction step(cpu, 0x4C, 0x00B590u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:232 LDA CURRENT_TARGET
    case 0xC2B453: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:233 CLC
    case 0xC2B456: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:234 ADC #battler::speed
    case 0xC2B457: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00002Au : 0x00002Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:234 ADC #battler::speed
    // Overlapping static entry reached from 0xC2B457.
    case 0xC2B459: {
        Instruction step(cpu, 0x00, 0x000048u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:235 PHA
    case 0xC2B45A: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:236 LDY @LOCAL02
    case 0xC2B45B: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:237 STY @VIRTUAL02
    case 0xC2B45D: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:238 TAX
    case 0xC2B45F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:239 LDA __BSS_START__,X
    case 0xC2B460: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:240 CLC
    case 0xC2B463: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:241 ADC @VIRTUAL02
    case 0xC2B464: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:242 PLX
    case 0xC2B466: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:243 STA __BSS_START__,X
    case 0xC2B467: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:244 LDX @LOCAL03
    case 0xC2B46A: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:245 TXA
    case 0xC2B46C: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:246 DEC
    case 0xC2B46D: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/eat_food.asm:247 LDY #.SIZEOF(char_struct)
    case 0xC2B46E: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:247 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2B46E.
    case 0xC2B470: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:248 JSL MULT168
    case 0xC2B471: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:249 CLC
    case 0xC2B475: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:250 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_speed
    case 0xC2B476: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D5u : 0x009CD5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:250 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_speed
    // Overlapping static entry reached from 0xC2B476.
    case 0xC2B478: {
        Instruction step(cpu, 0x9C, 0x00A448u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/eat_food.asm:251 PHA
    case 0xC2B479: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:252 LDY @LOCAL02
    case 0xC2B47A: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:252 LDY @LOCAL02
    // Overlapping static entry reached from 0xC2B478.
    case 0xC2B47B: {
        Instruction step(cpu, 0x16, 0x0000E2u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/battle/eat_food.asm:253 SEP #PROC_FLAGS::INDEX8
    case 0xC2B47C: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:253 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC2B47B.
    case 0xC2B47D: {
        Instruction step(cpu, 0x10, 0x000084u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/battle/eat_food.asm:254 STY @VIRTUAL00
    case 0xC2B47E: {
        Instruction step(cpu, 0x84, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:254 STY @VIRTUAL00
    // Overlapping static entry reached from 0xC2B47D.
    case 0xC2B47F: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:255 REP #PROC_FLAGS::INDEX8
    case 0xC2B480: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:256 TAX
    case 0xC2B482: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:257 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B483: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:258 LDA __BSS_START__,X
    case 0xC2B485: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:259 CLC
    case 0xC2B488: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:260 ADC @VIRTUAL00
    case 0xC2B489: {
        Instruction step(cpu, 0x65, 0x000000u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:261 PLX
    case 0xC2B48B: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:262 STA __BSS_START__,X
    case 0xC2B48C: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:263 LDX @LOCAL03
    case 0xC2B48F: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:264 REP #PROC_FLAGS::ACCUM8
    case 0xC2B491: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:265 TXA
    case 0xC2B493: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:266 JSL RECALC_CHARACTER_POSTMATH_SPEED
    case 0xC2B494: {
        Instruction step(cpu, 0x22, 0xC21996u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:267 REP #PROC_FLAGS::ACCUM8
    case 0xC2B498: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:268 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    case 0xC2B49A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DFu : 0x0036DFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:268 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B49A.
    case 0xC2B49C: {
        Instruction step(cpu, 0x36, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:268 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    case 0xC2B49D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:268 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B49C.
    case 0xC2B49E: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:268 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    case 0xC2B49F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:268 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B49F.
    case 0xC2B4A1: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/eat_food.asm:268 LOADPTR MSG_BTL_SPEED_UP, @LOCAL00
    case 0xC2B4A2: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:269 LDY @LOCAL02
    case 0xC2B4A4: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:270 TYA
    case 0xC2B4A6: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/eat_food.asm:271 STORE_INT1632 @TEXTTMP
    case 0xC2B4A7: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/eat_food.asm:271 STORE_INT1632 @TEXTTMP
    case 0xC2B4A9: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/eat_food.asm:272 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B4AB: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/eat_food.asm:272 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B4AD: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/eat_food.asm:272 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B4AF: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/eat_food.asm:272 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B4B1: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:273 JSL DISPLAY_TEXT_WAIT
    case 0xC2B4B3: {
        Instruction step(cpu, 0x22, 0xC1DA49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:274 JMP @UNKNOWN35
    case 0xC2B4B7: {
        Instruction step(cpu, 0x4C, 0x00B590u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/battle/eat_food.asm:276 LDA CURRENT_TARGET
    case 0xC2B4BA: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:277 CLC
    case 0xC2B4BD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:278 ADC #battler::vitality
    case 0xC2B4BE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000030u : 0x000030u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:278 ADC #battler::vitality
    // Overlapping static entry reached from 0xC2B4BE.
    case 0xC2B4C0: {
        Instruction step(cpu, 0x00, 0x0000A4u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:279 LDY @LOCAL02
    case 0xC2B4C1: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:280 SEP #PROC_FLAGS::INDEX8
    case 0xC2B4C3: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:281 STY @VIRTUAL00
    case 0xC2B4C5: {
        Instruction step(cpu, 0x84, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:282 PHA
    case 0xC2B4C7: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:283 REP #PROC_FLAGS::INDEX8
    case 0xC2B4C8: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:284 TAX
    case 0xC2B4CA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:285 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B4CB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:286 LDA __BSS_START__,X
    case 0xC2B4CD: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:287 CLC
    case 0xC2B4D0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:288 ADC @VIRTUAL00
    case 0xC2B4D1: {
        Instruction step(cpu, 0x65, 0x000000u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:289 PLX
    case 0xC2B4D3: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:290 STA __BSS_START__,X
    case 0xC2B4D4: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:291 LDX @LOCAL03
    case 0xC2B4D7: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:292 REP #PROC_FLAGS::ACCUM8
    case 0xC2B4D9: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:293 TXA
    case 0xC2B4DB: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:294 DEC
    case 0xC2B4DC: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/eat_food.asm:295 LDY #.SIZEOF(char_struct)
    case 0xC2B4DD: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:295 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2B4DD.
    case 0xC2B4DF: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:296 JSL MULT168
    case 0xC2B4E0: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:297 CLC
    case 0xC2B4E4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:298 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_vitality
    case 0xC2B4E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D7u : 0x009CD7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:298 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_vitality
    // Overlapping static entry reached from 0xC2B4E5.
    case 0xC2B4E7: {
        Instruction step(cpu, 0x9C, 0x00AA48u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/eat_food.asm:299 PHA
    case 0xC2B4E8: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:300 TAX
    case 0xC2B4E9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:301 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B4EA: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:302 LDA __BSS_START__,X
    case 0xC2B4EC: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:303 CLC
    case 0xC2B4EF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:304 ADC @VIRTUAL00
    case 0xC2B4F0: {
        Instruction step(cpu, 0x65, 0x000000u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:305 PLX
    case 0xC2B4F2: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:306 STA __BSS_START__,X
    case 0xC2B4F3: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:307 LDX @LOCAL03
    case 0xC2B4F6: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:308 REP #PROC_FLAGS::ACCUM8
    case 0xC2B4F8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:309 TXA
    case 0xC2B4FA: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:310 JSL RECALC_CHARACTER_POSTMATH_VITALITY
    case 0xC2B4FB: {
        Instruction step(cpu, 0x22, 0xC21BFAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:311 REP #PROC_FLAGS::ACCUM8
    case 0xC2B4FF: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:312 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    case 0xC2B501: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F8u : 0x0036F8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:312 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B501.
    case 0xC2B503: {
        Instruction step(cpu, 0x36, 0x000085u, 2u, AddressMode::DirectPageIndexedX);
        step.rotate_left();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:312 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    case 0xC2B504: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:312 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B503.
    case 0xC2B505: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:312 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    case 0xC2B506: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:312 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B506.
    case 0xC2B508: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/eat_food.asm:312 LOADPTR MSG_BTL_VITA_UP, @LOCAL00
    case 0xC2B509: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:313 LDY @LOCAL02
    case 0xC2B50B: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:314 TYA
    case 0xC2B50D: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/eat_food.asm:315 STORE_INT1632 @TEXTTMP
    case 0xC2B50E: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/eat_food.asm:315 STORE_INT1632 @TEXTTMP
    case 0xC2B510: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/eat_food.asm:316 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B512: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/eat_food.asm:316 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B514: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/eat_food.asm:316 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B516: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/eat_food.asm:316 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B518: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:317 JSL DISPLAY_TEXT_WAIT
    case 0xC2B51A: {
        Instruction step(cpu, 0x22, 0xC1DA49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:318 BRA @UNKNOWN35
    case 0xC2B51E: {
        Instruction step(cpu, 0x80, 0x000070u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/eat_food.asm:320 LDA CURRENT_TARGET
    case 0xC2B520: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:321 CLC
    case 0xC2B523: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:322 ADC #battler::luck
    case 0xC2B524: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00002Eu : 0x00002Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:322 ADC #battler::luck
    // Overlapping static entry reached from 0xC2B524.
    case 0xC2B526: {
        Instruction step(cpu, 0x00, 0x000048u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:323 PHA
    case 0xC2B527: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:324 LDY @LOCAL02
    case 0xC2B528: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:325 STY @VIRTUAL02
    case 0xC2B52A: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:326 TAX
    case 0xC2B52C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:327 LDA __BSS_START__,X
    case 0xC2B52D: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:328 CLC
    case 0xC2B530: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:329 ADC @VIRTUAL02
    case 0xC2B531: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:330 PLX
    case 0xC2B533: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:331 STA __BSS_START__,X
    case 0xC2B534: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:332 LDX @LOCAL03
    case 0xC2B537: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:333 TXA
    case 0xC2B539: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:334 DEC
    case 0xC2B53A: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/battle/eat_food.asm:335 LDY #.SIZEOF(char_struct)
    case 0xC2B53B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00005Eu : 0x00005Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:335 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC2B53B.
    case 0xC2B53D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:336 JSL MULT168
    case 0xC2B53E: {
        Instruction step(cpu, 0x22, 0xC08FDBu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:337 CLC
    case 0xC2B542: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:338 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_luck
    case 0xC2B543: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000D9u : 0x009CD9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:338 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_luck
    // Overlapping static entry reached from 0xC2B543.
    case 0xC2B545: {
        Instruction step(cpu, 0x9C, 0x00A448u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/battle/eat_food.asm:339 PHA
    case 0xC2B546: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:340 LDY @LOCAL02
    case 0xC2B547: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:340 LDY @LOCAL02
    // Overlapping static entry reached from 0xC2B545.
    case 0xC2B548: {
        Instruction step(cpu, 0x16, 0x0000E2u, 2u, AddressMode::DirectPageIndexedX);
        step.shift_left();
        return step.finish();
    }
    // src/battle/eat_food.asm:341 SEP #PROC_FLAGS::INDEX8
    case 0xC2B549: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:341 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC2B548.
    case 0xC2B54A: {
        Instruction step(cpu, 0x10, 0x000084u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/battle/eat_food.asm:342 STY @VIRTUAL00
    case 0xC2B54B: {
        Instruction step(cpu, 0x84, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:342 STY @VIRTUAL00
    // Overlapping static entry reached from 0xC2B54A.
    case 0xC2B54C: {
        Instruction step(cpu, 0x00, 0x0000C2u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:343 REP #PROC_FLAGS::INDEX8
    case 0xC2B54D: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:344 TAX
    case 0xC2B54F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:345 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B550: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:346 LDA __BSS_START__,X
    case 0xC2B552: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:347 CLC
    case 0xC2B555: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:348 ADC @VIRTUAL00
    case 0xC2B556: {
        Instruction step(cpu, 0x65, 0x000000u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/eat_food.asm:349 PLX
    case 0xC2B558: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:350 STA __BSS_START__,X
    case 0xC2B559: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:351 LDX @LOCAL03
    case 0xC2B55C: {
        Instruction step(cpu, 0xA6, 0x000018u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/battle/eat_food.asm:352 REP #PROC_FLAGS::ACCUM8
    case 0xC2B55E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:353 TXA
    case 0xC2B560: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:354 JSL RECALC_CHARACTER_POSTMATH_LUCK
    case 0xC2B561: {
        Instruction step(cpu, 0x22, 0xC21AFAu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:355 REP #PROC_FLAGS::ACCUM8
    case 0xC2B565: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:356 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    case 0xC2B567: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000013u : 0x003713u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/eat_food.asm:356 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B567.
    case 0xC2B569: {
        Instruction step(cpu, 0x37, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:356 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    case 0xC2B56A: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/eat_food.asm:356 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B569.
    case 0xC2B56B: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:356 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    case 0xC2B56C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/eat_food.asm:356 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2B56C.
    case 0xC2B56E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/eat_food.asm:356 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    case 0xC2B56F: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:357 LDY @LOCAL02
    case 0xC2B571: {
        Instruction step(cpu, 0xA4, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:358 TYA
    case 0xC2B573: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/eat_food.asm:359 STORE_INT1632 @TEXTTMP
    case 0xC2B574: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/eat_food.asm:359 STORE_INT1632 @TEXTTMP
    case 0xC2B576: {
        Instruction step(cpu, 0x64, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/eat_food.asm:360 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B578: {
        Instruction step(cpu, 0xA5, 0x00000Au, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/eat_food.asm:360 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B57A: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/eat_food.asm:360 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B57C: {
        Instruction step(cpu, 0xA5, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/eat_food.asm:360 MOVE_INT @TEXTTMP, @LOCAL01
    case 0xC2B57E: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:361 JSL DISPLAY_TEXT_WAIT
    case 0xC2B580: {
        Instruction step(cpu, 0x22, 0xC1DA49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:362 BRA @UNKNOWN35
    case 0xC2B584: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/eat_food.asm:364 JSL BTLACT_HEALING_A
    case 0xC2B586: {
        Instruction step(cpu, 0x22, 0xC29A93u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:365 BRA @UNKNOWN35
    case 0xC2B58A: {
        Instruction step(cpu, 0x80, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/battle/eat_food.asm:367 JSL HEAL_POISON
    case 0xC2B58C: {
        Instruction step(cpu, 0x22, 0xC2A346u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/battle/eat_food.asm:372 SEP #PROC_FLAGS::ACCUM8
    case 0xC2B590: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:373 LDY #item_parameters::special
    case 0xC2B592: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/battle/eat_food.asm:373 LDY #item_parameters::special
    // Overlapping static entry reached from 0xC2B592.
    case 0xC2B594: {
        Instruction step(cpu, 0x00, 0x0000B7u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:374 LDA [@VIRTUAL06],Y
    case 0xC2B595: {
        Instruction step(cpu, 0xB7, 0x000006u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:375 REP #PROC_FLAGS::ACCUM8
    case 0xC2B597: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/battle/eat_food.asm:376 AND #$00FF
    case 0xC2B599: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:376 AND #$00FF
    // Overlapping static entry reached from 0xC2B599.
    case 0xC2B59B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/eat_food.asm:377 BEQ @UNKNOWN36
    case 0xC2B59C: {
        Instruction step(cpu, 0xF0, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/battle/eat_food.asm:378 AND #$00FF
    case 0xC2B59E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/battle/eat_food.asm:378 AND #$00FF
    // Overlapping static entry reached from 0xC2B59E.
    case 0xC2B5A0: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:534 STA scratch
    // Macro caller: src/battle/eat_food.asm:379 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B5A1: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:535 ASL
    // Macro caller: src/battle/eat_food.asm:379 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B5A3: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/battle/eat_food.asm:379 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B5A4: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:537 ASL
    // Macro caller: src/battle/eat_food.asm:379 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC2B5A6: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/battle/eat_food.asm:380 JSL UNKNOWN_C076C8
    case 0xC2B5A7: {
        Instruction step(cpu, 0x22, 0xC07915u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/eat_food.asm:382 END_C_FUNCTION
    case 0xC2B5AB: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/eat_food.asm:382 END_C_FUNCTION
    case 0xC2B5AC: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
