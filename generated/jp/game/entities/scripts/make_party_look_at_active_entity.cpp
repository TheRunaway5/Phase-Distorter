// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/actionscript/make_party_look_at_active_entity.asm
bool resume_overworld_actionscript_make_party_look_at_active_entity(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4617C: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:10 END_STACK_VARS
    case 0xC4617E: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:10 END_STACK_VARS
    case 0xC4617F: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:10 END_STACK_VARS
    case 0xC46180: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC46180.
    case 0xC46182: {
        Instruction step(cpu, 0xFF, 0x38AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:10 END_STACK_VARS
    case 0xC46183: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:11 LDA CURRENT_ENTITY_SLOT
    case 0xC46184: {
        Instruction step(cpu, 0xAD, 0x001A38u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:11 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC46182.
    case 0xC46186: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:12 STA @LOCAL04
    case 0xC46187: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:13 LDA FRAME_COUNTER
    case 0xC46189: {
        Instruction step(cpu, 0xAD, 0x000002u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:14 AND #$00FF
    case 0xC4618C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC4618C.
    case 0xC4618E: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:15 AND #$0001
    case 0xC4618F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:15 AND #$0001
    // Overlapping static entry reached from 0xC4618F.
    case 0xC46191: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:16 BNEL @UNKNOWN6
    case 0xC46192: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:16 BNEL @UNKNOWN6
    case 0xC46194: {
        Instruction step(cpu, 0x4C, 0x006222u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:17 STZ @LOCAL03
    case 0xC46197: {
        Instruction step(cpu, 0x64, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:18 BRA @UNKNOWN5
    case 0xC46199: {
        Instruction step(cpu, 0x80, 0x000078u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:21 LDA @LOCAL03
    case 0xC4619B: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:22 CLC
    case 0xC4619D: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:23 ADC #.LOWORD(GAME_STATE)
    case 0xC4619E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:23 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC4619E.
    case 0xC461A0: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:24 TAX
    case 0xC461A1: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:25 LDA a:game_state::unknown96,X
    case 0xC461A2: {
        Instruction step(cpu, 0xBD, 0x000093u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:30 AND #$00FF
    case 0xC461A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC461A5.
    case 0xC461A7: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:31 STA @VIRTUAL02
    case 0xC461A8: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:32 LDA #16
    case 0xC461AA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:32 LDA #16
    // Overlapping static entry reached from 0xC461AA.
    case 0xC461AC: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:33 CLC
    case 0xC461AD: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:34 SBC @VIRTUAL02
    case 0xC461AE: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:35 BRANCHLTEQS @UNKNOWN4
    case 0xC461B0: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:35 BRANCHLTEQS @UNKNOWN4
    case 0xC461B2: {
        Instruction step(cpu, 0x10, 0x00005Du, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:35 BRANCHLTEQS @UNKNOWN4
    case 0xC461B4: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:35 BRANCHLTEQS @UNKNOWN4
    case 0xC461B6: {
        Instruction step(cpu, 0x30, 0x000059u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:36 LDA @LOCAL03
    case 0xC461B8: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:37 ASL
    case 0xC461BA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:39 CLC
    case 0xC461BB: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:40 ADC #.LOWORD(GAME_STATE)
    case 0xC461BC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:40 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC461BC.
    case 0xC461BE: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:41 TAX
    case 0xC461BF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:42 LDA a:game_state::unknownA2,X
    case 0xC461C0: {
        Instruction step(cpu, 0xBD, 0x00009Fu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:47 STA @VIRTUAL04
    case 0xC461C3: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:48 ASL
    case 0xC461C5: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:49 STA @VIRTUAL02
    case 0xC461C6: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:50 LDA @LOCAL04
    case 0xC461C8: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:51 ASL
    case 0xC461CA: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:52 TAX
    case 0xC461CB: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:53 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC461CC: {
        Instruction step(cpu, 0xBD, 0x000BC0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:54 STA @LOCAL00
    case 0xC461CF: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:55 LDY ENTITY_ABS_X_TABLE,X
    case 0xC461D1: {
        Instruction step(cpu, 0xBC, 0x000B84u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:56 LDX @VIRTUAL02
    case 0xC461D4: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:57 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC461D6: {
        Instruction step(cpu, 0xBD, 0x000BC0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:58 TAX
    case 0xC461D9: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:59 STX @LOCAL02
    case 0xC461DA: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:60 LDX @VIRTUAL02
    case 0xC461DC: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:61 LDA ENTITY_ABS_X_TABLE,X
    case 0xC461DE: {
        Instruction step(cpu, 0xBD, 0x000B84u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:62 LDX @LOCAL02
    case 0xC461E1: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:63 JSL UNKNOWN_C41EFF
    case 0xC461E3: {
        Instruction step(cpu, 0x22, 0xC41E4Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:64 LDY #$2000
    case 0xC461E7: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:64 LDY #$2000
    // Overlapping static entry reached from 0xC461E7.
    case 0xC461E9: {
        Instruction step(cpu, 0x20, 0x006918u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:65 CLC
    case 0xC461EA: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:66 ADC #$1000
    case 0xC461EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x001000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:66 ADC #$1000
    // Overlapping static entry reached from 0xC461E9.
    case 0xC461EC: {
        Instruction step(cpu, 0x00, 0x000010u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:66 ADC #$1000
    // Overlapping static entry reached from 0xC461EB.
    case 0xC461ED: {
        Instruction step(cpu, 0x10, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:67 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC461EE: {
        Instruction step(cpu, 0x22, 0xC0913Du, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:67 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC461ED.
    case 0xC461EF: {
        Instruction step(cpu, 0x3D, 0x00C091u, 3u, AddressMode::AbsoluteIndexedX);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:68 STA @LOCAL01
    case 0xC461F2: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:69 LDA @VIRTUAL02
    case 0xC461F4: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:70 CLC
    case 0xC461F6: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:71 ADC #.LOWORD(ENTITY_DIRECTIONS)
    case 0xC461F7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F4u : 0x002EF4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:71 ADC #.LOWORD(ENTITY_DIRECTIONS)
    // Overlapping static entry reached from 0xC461F7.
    case 0xC461F9: {
        Instruction step(cpu, 0x2E, 0x00A5AAu, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:72 TAX
    case 0xC461FA: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:73 LDA @LOCAL01
    case 0xC461FB: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:73 LDA @LOCAL01
    // Overlapping static entry reached from 0xC461F9.
    case 0xC461FC: {
        Instruction step(cpu, 0x10, 0x000085u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:74 STA @VIRTUAL02
    case 0xC461FD: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:74 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC461FC.
    case 0xC461FE: {
        Instruction step(cpu, 0x02, 0x0000BDu, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:75 LDA __BSS_START__,X
    case 0xC461FF: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:76 CMP @VIRTUAL02
    case 0xC46202: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:77 BEQ @UNKNOWN4
    case 0xC46204: {
        Instruction step(cpu, 0xF0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:78 LDA @LOCAL01
    case 0xC46206: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:79 STA __BSS_START__,X
    case 0xC46208: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:80 LDA @VIRTUAL04
    case 0xC4620B: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:81 JSL UNKNOWN_C0A780
    case 0xC4620D: {
        Instruction step(cpu, 0x22, 0xC0A75Fu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:83 INC @LOCAL03
    case 0xC46211: {
        Instruction step(cpu, 0xE6, 0x000014u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:85 LDA GAME_STATE+game_state::party_count
    case 0xC46213: {
        Instruction step(cpu, 0xAD, 0x009B54u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:86 AND #$00FF
    case 0xC46216: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:86 AND #$00FF
    // Overlapping static entry reached from 0xC46216.
    case 0xC46218: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:87 CMP @LOCAL03
    case 0xC46219: {
        Instruction step(cpu, 0xC5, 0x000014u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:88 BGTL @UNKNOWN1
    case 0xC4621B: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:792 BCC :+
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:88 BGTL @UNKNOWN1
    case 0xC4621D: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:793 JMP dest
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:88 BGTL @UNKNOWN1
    case 0xC4621F: {
        Instruction step(cpu, 0x4C, 0x00619Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:90 END_C_FUNCTION
    case 0xC46222: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:90 END_C_FUNCTION
    case 0xC46223: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
