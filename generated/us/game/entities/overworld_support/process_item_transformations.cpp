// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/process_item_transformations.asm
bool resume_overworld_process_item_transformations(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/process_item_transformations.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC48FC4: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/process_item_transformations.asm:9 END_STACK_VARS
    case 0xC48FC6: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/process_item_transformations.asm:9 END_STACK_VARS
    case 0xC48FC7: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/process_item_transformations.asm:9 END_STACK_VARS
    case 0xC48FC8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/process_item_transformations.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC48FC8.
    case 0xC48FCA: {
        Instruction step(cpu, 0xFF, 0xBAAD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/process_item_transformations.asm:9 END_STACK_VARS
    case 0xC48FCB: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:10 LDA ENEMY_HAS_BEEN_TOUCHED
    case 0xC48FCC: {
        Instruction step(cpu, 0xAD, 0x004DBAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:10 LDA ENEMY_HAS_BEEN_TOUCHED
    // Overlapping static entry reached from 0xC48FCA.
    case 0xC48FCE: {
        Instruction step(cpu, 0x4D, 0x006D18u, 3u, AddressMode::Absolute);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:11 CLC
    case 0xC48FCF: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:12 ADC BATTLE_SWIRL_COUNTDOWN
    case 0xC48FD0: {
        Instruction step(cpu, 0x6D, 0x005D60u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:12 ADC BATTLE_SWIRL_COUNTDOWN
    // Overlapping static entry reached from 0xC48FCE.
    case 0xC48FD1: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/process_item_transformations.asm:13 BNEL @UNKNOWN8
    case 0xC48FD3: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/process_item_transformations.asm:13 BNEL @UNKNOWN8
    case 0xC48FD5: {
        Instruction step(cpu, 0x4C, 0x0090ECu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:14 LDA DISABLED_TRANSITIONS
    case 0xC48FD8: {
        Instruction step(cpu, 0xAD, 0x00B4B6u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/process_item_transformations.asm:15 BNEL @UNKNOWN8
    case 0xC48FDB: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/process_item_transformations.asm:15 BNEL @UNKNOWN8
    case 0xC48FDD: {
        Instruction step(cpu, 0x4C, 0x0090ECu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:16 LDA GAME_STATE + game_state::unknownB0
    case 0xC48FE0: {
        Instruction step(cpu, 0xAD, 0x0098A5u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:17 CMP #2
    case 0xC48FE3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:17 CMP #2
    // Overlapping static entry reached from 0xC48FE3.
    case 0xC48FE5: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/process_item_transformations.asm:18 BEQL @UNKNOWN8
    case 0xC48FE6: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/process_item_transformations.asm:18 BEQL @UNKNOWN8
    case 0xC48FE8: {
        Instruction step(cpu, 0x4C, 0x0090ECu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC48FEB: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:20 LDA TIME_UNTIL_NEXT_ITEM_TRANSFORMATION_CHECK
    case 0xC48FED: {
        Instruction step(cpu, 0xAD, 0x009F2Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:21 DEC
    case 0xC48FF0: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:22 STA TIME_UNTIL_NEXT_ITEM_TRANSFORMATION_CHECK
    case 0xC48FF1: {
        Instruction step(cpu, 0x8D, 0x009F2Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC48FF4: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:24 AND #$00FF
    case 0xC48FF6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC48FF6.
    case 0xC48FF8: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/process_item_transformations.asm:25 BNEL @UNKNOWN8
    case 0xC48FF9: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/process_item_transformations.asm:25 BNEL @UNKNOWN8
    case 0xC48FFB: {
        Instruction step(cpu, 0x4C, 0x0090ECu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC48FFE: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:27 LDA #60
    case 0xC49000: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Cu : 0x008D3Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:28 STA TIME_UNTIL_NEXT_ITEM_TRANSFORMATION_CHECK
    case 0xC49002: {
        Instruction step(cpu, 0x8D, 0x009F2Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:28 STA TIME_UNTIL_NEXT_ITEM_TRANSFORMATION_CHECK
    // Overlapping static entry reached from 0xC49000.
    case 0xC49003: {
        Instruction step(cpu, 0x2C, 0x00C29Fu, 3u, AddressMode::Absolute);
        step.test_bits();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC49005: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:29 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC49003.
    case 0xC49006: {
        Instruction step(cpu, 0x20, 0x001AA9u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:30 LDA #.LOWORD(LOADED_TIMED_ITEM_TRANSFORMATIONS)
    case 0xC49007: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Au : 0x009F1Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:30 LDA #.LOWORD(LOADED_TIMED_ITEM_TRANSFORMATIONS)
    // Overlapping static entry reached from 0xC49007.
    case 0xC49009: {
        Instruction step(cpu, 0x9F, 0xA90285u, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:31 STA @VIRTUAL02
    case 0xC4900A: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:32 LDA #1
    case 0xC4900C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:32 LDA #1
    // Overlapping static entry reached from 0xC49009.
    case 0xC4900D: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:32 LDA #1
    // Overlapping static entry reached from 0xC4900C.
    case 0xC4900E: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:33 STA @LOCAL03
    case 0xC4900F: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:34 LDA #0
    case 0xC49011: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:34 LDA #0
    // Overlapping static entry reached from 0xC49011.
    case 0xC49013: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:35 STA @VIRTUAL04
    case 0xC49014: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:36 STA @LOCAL02
    case 0xC49016: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:37 JMP @UNKNOWN7
    case 0xC49018: {
        Instruction step(cpu, 0x4C, 0x0090E0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:39 LDA @LOCAL03
    case 0xC4901B: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:40 BEQ @UNKNOWN5
    case 0xC4901D: {
        Instruction step(cpu, 0xF0, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:41 LDY @VIRTUAL02
    case 0xC4901F: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:42 INY
    case 0xC49021: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:43 STY @LOCAL01
    case 0xC49022: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:44 LDA __BSS_START__,Y
    case 0xC49024: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:45 AND #$00FF
    case 0xC49027: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC49027.
    case 0xC49029: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:46 BEQ @UNKNOWN5
    case 0xC4902A: {
        Instruction step(cpu, 0xF0, 0x00003Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:47 LDX @VIRTUAL02
    case 0xC4902C: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:48 INX
    case 0xC4902E: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:49 INX
    case 0xC4902F: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:50 STX @LOCAL00
    case 0xC49030: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:51 SEP #PROC_FLAGS::ACCUM8
    case 0xC49032: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:52 LDA __BSS_START__,X
    case 0xC49034: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:53 DEC
    case 0xC49037: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:54 STA __BSS_START__,X
    case 0xC49038: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:55 REP #PROC_FLAGS::ACCUM8
    case 0xC4903B: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:56 AND #$00FF
    case 0xC4903D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:56 AND #$00FF
    // Overlapping static entry reached from 0xC4903D.
    case 0xC4903F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:57 BNE @UNKNOWN5
    case 0xC49040: {
        Instruction step(cpu, 0xD0, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:58 LDA #2
    case 0xC49042: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:58 LDA #2
    // Overlapping static entry reached from 0xC49042.
    case 0xC49044: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:59 JSL RAND_MOD
    case 0xC49045: {
        Instruction step(cpu, 0x22, 0xC45F7Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xC49049: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:61 STA @VIRTUAL00
    case 0xC4904B: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:62 LDY @LOCAL01
    case 0xC4904D: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:63 LDA __BSS_START__,Y
    case 0xC4904F: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:64 CLC
    case 0xC49052: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:65 ADC @VIRTUAL00
    case 0xC49053: {
        Instruction step(cpu, 0x65, 0x000000u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:66 DEC
    case 0xC49055: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:67 LDX @LOCAL00
    case 0xC49056: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:68 STA __BSS_START__,X
    case 0xC49058: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:69 LDX @VIRTUAL02
    case 0xC4905B: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:70 REP #PROC_FLAGS::ACCUM8
    case 0xC4905D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:71 LDA __BSS_START__,X
    case 0xC4905F: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:72 AND #$00FF
    case 0xC49062: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:72 AND #$00FF
    // Overlapping static entry reached from 0xC49062.
    case 0xC49064: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:73 JSL PLAY_SOUND
    case 0xC49065: {
        Instruction step(cpu, 0x22, 0xC0ABE0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:74 STZ @LOCAL03
    case 0xC49069: {
        Instruction step(cpu, 0x64, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:76 LDX @VIRTUAL02
    case 0xC4906B: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:77 INX
    case 0xC4906D: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:78 INX
    case 0xC4906E: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:79 INX
    case 0xC4906F: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:80 LDA __BSS_START__,X
    case 0xC49070: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:81 AND #$00FF
    case 0xC49073: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC49073.
    case 0xC49075: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:82 BEQ @UNKNOWN6
    case 0xC49076: {
        Instruction step(cpu, 0xF0, 0x000056u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:83 SEP #PROC_FLAGS::ACCUM8
    case 0xC49078: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:84 DEC
    case 0xC4907A: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:85 STA __BSS_START__,X
    case 0xC4907B: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:86 REP #PROC_FLAGS::ACCUM8
    case 0xC4907E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:87 AND #$00FF
    case 0xC49080: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:87 AND #$00FF
    // Overlapping static entry reached from 0xC49080.
    case 0xC49082: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:88 BNE @UNKNOWN6
    case 0xC49083: {
        Instruction step(cpu, 0xD0, 0x000049u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/process_item_transformations.asm:89 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC49085: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000BBu : 0x00F4BBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/process_item_transformations.asm:89 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC49085.
    case 0xC49087: {
        Instruction step(cpu, 0xF4, 0x000685u, 3u, AddressMode::Immediate);
        step.push_effective_absolute();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/process_item_transformations.asm:89 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC49088: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/process_item_transformations.asm:89 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC4908A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/process_item_transformations.asm:89 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4908A.
    case 0xC4908C: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/process_item_transformations.asm:89 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC4908D: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:90 LDA @VIRTUAL04
    case 0xC4908F: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:529 STA scratch
    // Macro caller: src/overworld/process_item_transformations.asm:91 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC49091: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:530 ASL
    // Macro caller: src/overworld/process_item_transformations.asm:91 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC49093: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:531 ASL
    // Macro caller: src/overworld/process_item_transformations.asm:91 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC49094: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/overworld/process_item_transformations.asm:91 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC49095: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:92 TAY
    case 0xC49097: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:93 STY @LOCAL00
    case 0xC49098: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:94 TYA
    case 0xC4909A: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/process_item_transformations.asm:95 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4909B: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/process_item_transformations.asm:95 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4909D: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/process_item_transformations.asm:95 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4909F: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/process_item_transformations.asm:95 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC490A1: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:96 CLC
    case 0xC490A3: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:97 ADC @VIRTUAL0A
    case 0xC490A4: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:98 STA @VIRTUAL0A
    case 0xC490A6: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:99 LDA [@VIRTUAL0A]
    case 0xC490A8: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:100 AND #$00FF
    case 0xC490AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:100 AND #$00FF
    // Overlapping static entry reached from 0xC490AA.
    case 0xC490AC: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:101 TAX
    case 0xC490AD: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:102 LDA #$00FF
    case 0xC490AE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:102 LDA #$00FF
    // Overlapping static entry reached from 0xC490AE.
    case 0xC490B0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:103 JSL TAKE_ITEM_FROM_CHARACTER
    case 0xC490B1: {
        Instruction step(cpu, 0x22, 0xC18EADu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:104 STA @LOCAL01
    case 0xC490B5: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:105 LDY @LOCAL00
    case 0xC490B7: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:106 TYA
    case 0xC490B9: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:107 INC
    case 0xC490BA: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:108 INC
    case 0xC490BB: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:109 INC
    case 0xC490BC: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:110 CLC
    case 0xC490BD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:111 ADC @VIRTUAL06
    case 0xC490BE: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:112 STA @VIRTUAL06
    case 0xC490C0: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:113 LDA [@VIRTUAL06]
    case 0xC490C2: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:114 AND #$00FF
    case 0xC490C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:114 AND #$00FF
    // Overlapping static entry reached from 0xC490C4.
    case 0xC490C6: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:115 TAX
    case 0xC490C7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:116 LDA @LOCAL01
    case 0xC490C8: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:117 JSL GIVE_ITEM_TO_CHARACTER
    case 0xC490CA: {
        Instruction step(cpu, 0x22, 0xC18BC6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:119 INC @VIRTUAL02
    case 0xC490CE: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:120 INC @VIRTUAL02
    case 0xC490D0: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:121 INC @VIRTUAL02
    case 0xC490D2: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:122 INC @VIRTUAL02
    case 0xC490D4: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:123 LDA @LOCAL02
    case 0xC490D6: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:124 STA @VIRTUAL04
    case 0xC490D8: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:125 INC @VIRTUAL04
    case 0xC490DA: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:126 LDA @VIRTUAL04
    case 0xC490DC: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:127 STA @LOCAL02
    case 0xC490DE: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:129 LDA @VIRTUAL04
    case 0xC490E0: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:130 CMP #4
    case 0xC490E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:130 CMP #4
    // Overlapping static entry reached from 0xC490E2.
    case 0xC490E4: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/process_item_transformations.asm:131 BCCL @UNKNOWN4
    case 0xC490E5: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/process_item_transformations.asm:131 BCCL @UNKNOWN4
    case 0xC490E7: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/process_item_transformations.asm:131 BCCL @UNKNOWN4
    case 0xC490E9: {
        Instruction step(cpu, 0x4C, 0x00901Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/process_item_transformations.asm:133 END_C_FUNCTION
    case 0xC490EC: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/process_item_transformations.asm:133 END_C_FUNCTION
    case 0xC490ED: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
