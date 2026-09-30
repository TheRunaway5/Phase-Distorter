// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/process_item_transformations.asm
bool resume_overworld_process_item_transformations(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/process_item_transformations.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4660E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/process_item_transformations.asm:9 END_STACK_VARS
    case 0xC46610: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/process_item_transformations.asm:9 END_STACK_VARS
    case 0xC46611: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/process_item_transformations.asm:9 END_STACK_VARS
    case 0xC46612: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/process_item_transformations.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC46612.
    case 0xC46614: {
        Instruction step(cpu, 0xFF, 0x40AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/process_item_transformations.asm:9 END_STACK_VARS
    case 0xC46615: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:10 LDA ENEMY_HAS_BEEN_TOUCHED
    case 0xC46616: {
        Instruction step(cpu, 0xAD, 0x005140u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:10 LDA ENEMY_HAS_BEEN_TOUCHED
    // Overlapping static entry reached from 0xC46614.
    case 0xC46618: {
        Instruction step(cpu, 0x51, 0x000018u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:11 CLC
    case 0xC46619: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:12 ADC BATTLE_SWIRL_COUNTDOWN
    case 0xC4661A: {
        Instruction step(cpu, 0x6D, 0x0060E6u, 3u, AddressMode::Absolute);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/process_item_transformations.asm:13 BNEL @UNKNOWN8
    case 0xC4661D: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/process_item_transformations.asm:13 BNEL @UNKNOWN8
    case 0xC4661F: {
        Instruction step(cpu, 0x4C, 0x006736u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:14 LDA DISABLED_TRANSITIONS
    case 0xC46622: {
        Instruction step(cpu, 0xAD, 0x00B68Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/process_item_transformations.asm:15 BNEL @UNKNOWN8
    case 0xC46625: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/process_item_transformations.asm:15 BNEL @UNKNOWN8
    case 0xC46627: {
        Instruction step(cpu, 0x4C, 0x006736u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:16 LDA GAME_STATE + game_state::unknownB0
    case 0xC4662A: {
        Instruction step(cpu, 0xAD, 0x009B56u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:17 CMP #2
    case 0xC4662D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:17 CMP #2
    // Overlapping static entry reached from 0xC4662D.
    case 0xC4662F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/process_item_transformations.asm:18 BEQL @UNKNOWN8
    case 0xC46630: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/process_item_transformations.asm:18 BEQL @UNKNOWN8
    case 0xC46632: {
        Instruction step(cpu, 0x4C, 0x006736u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:19 SEP #PROC_FLAGS::ACCUM8
    case 0xC46635: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:20 LDA TIME_UNTIL_NEXT_ITEM_TRANSFORMATION_CHECK
    case 0xC46637: {
        Instruction step(cpu, 0xAD, 0x00A132u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:21 DEC
    case 0xC4663A: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:22 STA TIME_UNTIL_NEXT_ITEM_TRANSFORMATION_CHECK
    case 0xC4663B: {
        Instruction step(cpu, 0x8D, 0x00A132u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:23 REP #PROC_FLAGS::ACCUM8
    case 0xC4663E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:24 AND #$00FF
    case 0xC46640: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC46640.
    case 0xC46642: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/process_item_transformations.asm:25 BNEL @UNKNOWN8
    case 0xC46643: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/process_item_transformations.asm:25 BNEL @UNKNOWN8
    case 0xC46645: {
        Instruction step(cpu, 0x4C, 0x006736u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC46648: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:27 LDA #60
    case 0xC4664A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Cu : 0x008D3Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:28 STA TIME_UNTIL_NEXT_ITEM_TRANSFORMATION_CHECK
    case 0xC4664C: {
        Instruction step(cpu, 0x8D, 0x00A132u, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:28 STA TIME_UNTIL_NEXT_ITEM_TRANSFORMATION_CHECK
    // Overlapping static entry reached from 0xC4664A.
    case 0xC4664D: {
        Instruction step(cpu, 0x32, 0x0000A1u, 2u, AddressMode::DirectPageIndirect);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC4664F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:30 LDA #.LOWORD(LOADED_TIMED_ITEM_TRANSFORMATIONS)
    case 0xC46651: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000020u : 0x00A120u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:30 LDA #.LOWORD(LOADED_TIMED_ITEM_TRANSFORMATIONS)
    // Overlapping static entry reached from 0xC46651.
    case 0xC46653: {
        Instruction step(cpu, 0xA1, 0x000085u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:31 STA @VIRTUAL02
    case 0xC46654: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:31 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC46653.
    case 0xC46655: {
        Instruction step(cpu, 0x02, 0x0000A9u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:32 LDA #1
    case 0xC46656: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:32 LDA #1
    // Overlapping static entry reached from 0xC46656.
    case 0xC46658: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:33 STA @LOCAL03
    case 0xC46659: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:34 LDA #0
    case 0xC4665B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:34 LDA #0
    // Overlapping static entry reached from 0xC4665B.
    case 0xC4665D: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:35 STA @VIRTUAL04
    case 0xC4665E: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:36 STA @LOCAL02
    case 0xC46660: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:37 JMP @UNKNOWN7
    case 0xC46662: {
        Instruction step(cpu, 0x4C, 0x00672Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:39 LDA @LOCAL03
    case 0xC46665: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:40 BEQ @UNKNOWN5
    case 0xC46667: {
        Instruction step(cpu, 0xF0, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:41 LDY @VIRTUAL02
    case 0xC46669: {
        Instruction step(cpu, 0xA4, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:42 INY
    case 0xC4666B: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:43 STY @LOCAL01
    case 0xC4666C: {
        Instruction step(cpu, 0x84, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:44 LDA __BSS_START__,Y
    case 0xC4666E: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:45 AND #$00FF
    case 0xC46671: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC46671.
    case 0xC46673: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:46 BEQ @UNKNOWN5
    case 0xC46674: {
        Instruction step(cpu, 0xF0, 0x00003Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:47 LDX @VIRTUAL02
    case 0xC46676: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:48 INX
    case 0xC46678: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:49 INX
    case 0xC46679: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:50 STX @LOCAL00
    case 0xC4667A: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:51 SEP #PROC_FLAGS::ACCUM8
    case 0xC4667C: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:52 LDA __BSS_START__,X
    case 0xC4667E: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:53 DEC
    case 0xC46681: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:54 STA __BSS_START__,X
    case 0xC46682: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:55 REP #PROC_FLAGS::ACCUM8
    case 0xC46685: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:56 AND #$00FF
    case 0xC46687: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:56 AND #$00FF
    // Overlapping static entry reached from 0xC46687.
    case 0xC46689: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:57 BNE @UNKNOWN5
    case 0xC4668A: {
        Instruction step(cpu, 0xD0, 0x000029u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:58 LDA #2
    case 0xC4668C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:58 LDA #2
    // Overlapping static entry reached from 0xC4668C.
    case 0xC4668E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:59 JSL RAND_MOD
    case 0xC4668F: {
        Instruction step(cpu, 0x22, 0xC43CC9u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xC46693: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:61 STA @VIRTUAL00
    case 0xC46695: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:62 LDY @LOCAL01
    case 0xC46697: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:63 LDA __BSS_START__,Y
    case 0xC46699: {
        Instruction step(cpu, 0xB9, 0x000000u, 3u, AddressMode::AbsoluteIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:64 CLC
    case 0xC4669C: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:65 ADC @VIRTUAL00
    case 0xC4669D: {
        Instruction step(cpu, 0x65, 0x000000u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:66 DEC
    case 0xC4669F: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:67 LDX @LOCAL00
    case 0xC466A0: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:68 STA __BSS_START__,X
    case 0xC466A2: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:69 LDX @VIRTUAL02
    case 0xC466A5: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:70 REP #PROC_FLAGS::ACCUM8
    case 0xC466A7: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:71 LDA __BSS_START__,X
    case 0xC466A9: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:72 AND #$00FF
    case 0xC466AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:72 AND #$00FF
    // Overlapping static entry reached from 0xC466AC.
    case 0xC466AE: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:73 JSL PLAY_SOUND
    case 0xC466AF: {
        Instruction step(cpu, 0x22, 0xC0ABBFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:74 STZ @LOCAL03
    case 0xC466B3: {
        Instruction step(cpu, 0x64, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:76 LDX @VIRTUAL02
    case 0xC466B5: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:77 INX
    case 0xC466B7: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:78 INX
    case 0xC466B8: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:79 INX
    case 0xC466B9: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:80 LDA __BSS_START__,X
    case 0xC466BA: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:81 AND #$00FF
    case 0xC466BD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC466BD.
    case 0xC466BF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:82 BEQ @UNKNOWN6
    case 0xC466C0: {
        Instruction step(cpu, 0xF0, 0x000056u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:83 SEP #PROC_FLAGS::ACCUM8
    case 0xC466C2: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:84 DEC
    case 0xC466C4: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:85 STA __BSS_START__,X
    case 0xC466C5: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:86 REP #PROC_FLAGS::ACCUM8
    case 0xC466C8: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:87 AND #$00FF
    case 0xC466CA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:87 AND #$00FF
    // Overlapping static entry reached from 0xC466CA.
    case 0xC466CC: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:88 BNE @UNKNOWN6
    case 0xC466CD: {
        Instruction step(cpu, 0xD0, 0x000049u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/process_item_transformations.asm:89 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC466CF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Bu : 0x00F41Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/process_item_transformations.asm:89 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC466CF.
    case 0xC466D1: {
        Instruction step(cpu, 0xF4, 0x000685u, 3u, AddressMode::Immediate);
        step.push_effective_absolute();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/process_item_transformations.asm:89 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC466D2: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/process_item_transformations.asm:89 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC466D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D5u : 0x0000D5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/process_item_transformations.asm:89 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC466D4.
    case 0xC466D6: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/process_item_transformations.asm:89 LOADPTR TIMED_ITEM_TRANSFORMATION_TABLE, @VIRTUAL06
    case 0xC466D7: {
        Instruction step(cpu, 0x85, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:90 LDA @VIRTUAL04
    case 0xC466D9: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:529 STA scratch
    // Macro caller: src/overworld/process_item_transformations.asm:91 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC466DB: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:530 ASL
    // Macro caller: src/overworld/process_item_transformations.asm:91 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC466DD: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:531 ASL
    // Macro caller: src/overworld/process_item_transformations.asm:91 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC466DE: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/overworld/process_item_transformations.asm:91 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(timed_item_transformation)
    case 0xC466DF: {
        Instruction step(cpu, 0x65, 0x000004u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:92 TAY
    case 0xC466E1: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:93 STY @LOCAL00
    case 0xC466E2: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:94 TYA
    case 0xC466E4: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/process_item_transformations.asm:95 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC466E5: {
        Instruction step(cpu, 0xA6, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/process_item_transformations.asm:95 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC466E7: {
        Instruction step(cpu, 0x86, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/process_item_transformations.asm:95 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC466E9: {
        Instruction step(cpu, 0xA6, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/process_item_transformations.asm:95 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC466EB: {
        Instruction step(cpu, 0x86, 0x00000Cu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:96 CLC
    case 0xC466ED: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:97 ADC @VIRTUAL0A
    case 0xC466EE: {
        Instruction step(cpu, 0x65, 0x00000Au, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:98 STA @VIRTUAL0A
    case 0xC466F0: {
        Instruction step(cpu, 0x85, 0x00000Au, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:99 LDA [@VIRTUAL0A]
    case 0xC466F2: {
        Instruction step(cpu, 0xA7, 0x00000Au, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:100 AND #$00FF
    case 0xC466F4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:100 AND #$00FF
    // Overlapping static entry reached from 0xC466F4.
    case 0xC466F6: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:101 TAX
    case 0xC466F7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:102 LDA #$00FF
    case 0xC466F8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:102 LDA #$00FF
    // Overlapping static entry reached from 0xC466F8.
    case 0xC466FA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:103 JSL TAKE_ITEM_FROM_CHARACTER
    case 0xC466FB: {
        Instruction step(cpu, 0x22, 0xC18F56u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:104 STA @LOCAL01
    case 0xC466FF: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:105 LDY @LOCAL00
    case 0xC46701: {
        Instruction step(cpu, 0xA4, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:106 TYA
    case 0xC46703: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:107 INC
    case 0xC46704: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:108 INC
    case 0xC46705: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:109 INC
    case 0xC46706: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:110 CLC
    case 0xC46707: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:111 ADC @VIRTUAL06
    case 0xC46708: {
        Instruction step(cpu, 0x65, 0x000006u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:112 STA @VIRTUAL06
    case 0xC4670A: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:113 LDA [@VIRTUAL06]
    case 0xC4670C: {
        Instruction step(cpu, 0xA7, 0x000006u, 2u, AddressMode::DirectPageIndirectLong);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:114 AND #$00FF
    case 0xC4670E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:114 AND #$00FF
    // Overlapping static entry reached from 0xC4670E.
    case 0xC46710: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:115 TAX
    case 0xC46711: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:116 LDA @LOCAL01
    case 0xC46712: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:117 JSL GIVE_ITEM_TO_CHARACTER
    case 0xC46714: {
        Instruction step(cpu, 0x22, 0xC18C69u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:119 INC @VIRTUAL02
    case 0xC46718: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:120 INC @VIRTUAL02
    case 0xC4671A: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:121 INC @VIRTUAL02
    case 0xC4671C: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:122 INC @VIRTUAL02
    case 0xC4671E: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:123 LDA @LOCAL02
    case 0xC46720: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:124 STA @VIRTUAL04
    case 0xC46722: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:125 INC @VIRTUAL04
    case 0xC46724: {
        Instruction step(cpu, 0xE6, 0x000004u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:126 LDA @VIRTUAL04
    case 0xC46726: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:127 STA @LOCAL02
    case 0xC46728: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:129 LDA @VIRTUAL04
    case 0xC4672A: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:130 CMP #4
    case 0xC4672C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/process_item_transformations.asm:130 CMP #4
    // Overlapping static entry reached from 0xC4672C.
    case 0xC4672E: {
        Instruction step(cpu, 0x00, 0x0000B0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/process_item_transformations.asm:131 BCCL @UNKNOWN4
    case 0xC4672F: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/process_item_transformations.asm:131 BCCL @UNKNOWN4
    case 0xC46731: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/process_item_transformations.asm:131 BCCL @UNKNOWN4
    case 0xC46733: {
        Instruction step(cpu, 0x4C, 0x006665u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/process_item_transformations.asm:133 END_C_FUNCTION
    case 0xC46736: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/process_item_transformations.asm:133 END_C_FUNCTION
    case 0xC46737: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
