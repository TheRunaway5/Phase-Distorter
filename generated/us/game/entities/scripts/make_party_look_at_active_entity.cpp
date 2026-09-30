// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/actionscript/make_party_look_at_active_entity.asm
bool resume_overworld_actionscript_make_party_look_at_active_entity(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC48B3B: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:10 END_STACK_VARS
    case 0xC48B3D: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:10 END_STACK_VARS
    case 0xC48B3E: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:10 END_STACK_VARS
    case 0xC48B3F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC48B3F.
    case 0xC48B41: {
        Instruction step(cpu, 0xFF, 0x42AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:10 END_STACK_VARS
    case 0xC48B42: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:11 LDA CURRENT_ENTITY_SLOT
    case 0xC48B43: {
        Instruction step(cpu, 0xAD, 0x001A42u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:11 LDA CURRENT_ENTITY_SLOT
    // Overlapping static entry reached from 0xC48B41.
    case 0xC48B45: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:12 STA @LOCAL04
    case 0xC48B46: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:13 LDA FRAME_COUNTER
    case 0xC48B48: {
        Instruction step(cpu, 0xAD, 0x000002u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:14 AND #$00FF
    case 0xC48B4B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC48B4B.
    case 0xC48B4D: {
        Instruction step(cpu, 0x00, 0x000029u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:15 AND #$0001
    case 0xC48B4E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:15 AND #$0001
    // Overlapping static entry reached from 0xC48B4E.
    case 0xC48B50: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:16 BNEL @UNKNOWN6
    case 0xC48B51: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:16 BNEL @UNKNOWN6
    case 0xC48B53: {
        Instruction step(cpu, 0x4C, 0x008BD8u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:17 STZ @LOCAL03
    case 0xC48B56: {
        Instruction step(cpu, 0x64, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:18 BRA @UNKNOWN5
    case 0xC48B58: {
        Instruction step(cpu, 0x80, 0x00006Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:27 LDY #.LOWORD(GAME_STATE) + game_state::unknown96
    case 0xC48B5A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00008Bu : 0x00988Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:27 LDY #.LOWORD(GAME_STATE) + game_state::unknown96
    // Overlapping static entry reached from 0xC48B5A.
    case 0xC48B5C: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:28 LDA (@LOCAL03),Y
    case 0xC48B5D: {
        Instruction step(cpu, 0xB1, 0x000014u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:30 AND #$00FF
    case 0xC48B5F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC48B5F.
    case 0xC48B61: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:31 STA @VIRTUAL02
    case 0xC48B62: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:32 LDA #16
    case 0xC48B64: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:32 LDA #16
    // Overlapping static entry reached from 0xC48B64.
    case 0xC48B66: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:33 CLC
    case 0xC48B67: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:34 SBC @VIRTUAL02
    case 0xC48B68: {
        Instruction step(cpu, 0xE5, 0x000002u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:35 BRANCHLTEQS @UNKNOWN4
    case 0xC48B6A: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:35 BRANCHLTEQS @UNKNOWN4
    case 0xC48B6C: {
        Instruction step(cpu, 0x10, 0x000059u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:35 BRANCHLTEQS @UNKNOWN4
    case 0xC48B6E: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:35 BRANCHLTEQS @UNKNOWN4
    case 0xC48B70: {
        Instruction step(cpu, 0x30, 0x000055u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:36 LDA @LOCAL03
    case 0xC48B72: {
        Instruction step(cpu, 0xA5, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:37 ASL
    case 0xC48B74: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:44 TAX
    case 0xC48B75: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:45 LDA GAME_STATE + game_state::unknownA2,X
    case 0xC48B76: {
        Instruction step(cpu, 0xBD, 0x009897u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:47 STA @VIRTUAL04
    case 0xC48B79: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:48 ASL
    case 0xC48B7B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:49 STA @VIRTUAL02
    case 0xC48B7C: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:50 LDA @LOCAL04
    case 0xC48B7E: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:51 ASL
    case 0xC48B80: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:52 TAX
    case 0xC48B81: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:53 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC48B82: {
        Instruction step(cpu, 0xBD, 0x000BCAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:54 STA @LOCAL00
    case 0xC48B85: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:55 LDY ENTITY_ABS_X_TABLE,X
    case 0xC48B87: {
        Instruction step(cpu, 0xBC, 0x000B8Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_y();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:56 LDX @VIRTUAL02
    case 0xC48B8A: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:57 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC48B8C: {
        Instruction step(cpu, 0xBD, 0x000BCAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:58 TAX
    case 0xC48B8F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:59 STX @LOCAL02
    case 0xC48B90: {
        Instruction step(cpu, 0x86, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:60 LDX @VIRTUAL02
    case 0xC48B92: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:61 LDA ENTITY_ABS_X_TABLE,X
    case 0xC48B94: {
        Instruction step(cpu, 0xBD, 0x000B8Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:62 LDX @LOCAL02
    case 0xC48B97: {
        Instruction step(cpu, 0xA6, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:63 JSL UNKNOWN_C41EFF
    case 0xC48B99: {
        Instruction step(cpu, 0x22, 0xC41EFFu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:64 LDY #$2000
    case 0xC48B9D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x002000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:64 LDY #$2000
    // Overlapping static entry reached from 0xC48B9D.
    case 0xC48B9F: {
        Instruction step(cpu, 0x20, 0x006918u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:65 CLC
    case 0xC48BA0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:66 ADC #$1000
    case 0xC48BA1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000000u : 0x001000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:66 ADC #$1000
    // Overlapping static entry reached from 0xC48B9F.
    case 0xC48BA2: {
        Instruction step(cpu, 0x00, 0x000010u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:66 ADC #$1000
    // Overlapping static entry reached from 0xC48BA1.
    case 0xC48BA3: {
        Instruction step(cpu, 0x10, 0x000022u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:67 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC48BA4: {
        Instruction step(cpu, 0x22, 0xC0915Bu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:67 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC48BA3.
    case 0xC48BA5: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:67 JSL DIVISION16S_DIVISOR_POSITIVE
    // Overlapping static entry reached from 0xC48BA5.
    case 0xC48BA6: {
        Instruction step(cpu, 0x91, 0x0000C0u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:68 STA @LOCAL01
    case 0xC48BA8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:69 LDA @VIRTUAL02
    case 0xC48BAA: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:70 CLC
    case 0xC48BAC: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:71 ADC #.LOWORD(ENTITY_DIRECTIONS)
    case 0xC48BAD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F6u : 0x002AF6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:71 ADC #.LOWORD(ENTITY_DIRECTIONS)
    // Overlapping static entry reached from 0xC48BAD.
    case 0xC48BAF: {
        Instruction step(cpu, 0x2A, 0x000000u, 1u, AddressMode::Accumulator);
        step.rotate_left();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:72 TAX
    case 0xC48BB0: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:73 LDA @LOCAL01
    case 0xC48BB1: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:74 STA @VIRTUAL02
    case 0xC48BB3: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:75 LDA __BSS_START__,X
    case 0xC48BB5: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:76 CMP @VIRTUAL02
    case 0xC48BB8: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:77 BEQ @UNKNOWN4
    case 0xC48BBA: {
        Instruction step(cpu, 0xF0, 0x00000Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:78 LDA @LOCAL01
    case 0xC48BBC: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:79 STA __BSS_START__,X
    case 0xC48BBE: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:80 LDA @VIRTUAL04
    case 0xC48BC1: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:81 JSL UNKNOWN_C0A780
    case 0xC48BC3: {
        Instruction step(cpu, 0x22, 0xC0A780u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:83 INC @LOCAL03
    case 0xC48BC7: {
        Instruction step(cpu, 0xE6, 0x000014u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:85 LDA GAME_STATE+game_state::party_count
    case 0xC48BC9: {
        Instruction step(cpu, 0xAD, 0x0098A3u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:86 AND #$00FF
    case 0xC48BCC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:86 AND #$00FF
    // Overlapping static entry reached from 0xC48BCC.
    case 0xC48BCE: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/actionscript/make_party_look_at_active_entity.asm:87 CMP @LOCAL03
    case 0xC48BCF: {
        Instruction step(cpu, 0xC5, 0x000014u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:88 BGTL @UNKNOWN1
    case 0xC48BD1: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:792 BCC :+
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:88 BGTL @UNKNOWN1
    case 0xC48BD3: {
        Instruction step(cpu, 0x90, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:793 JMP dest
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:88 BGTL @UNKNOWN1
    case 0xC48BD5: {
        Instruction step(cpu, 0x4C, 0x008B5Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:90 END_C_FUNCTION
    case 0xC48BD8: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/actionscript/make_party_look_at_active_entity.asm:90 END_C_FUNCTION
    case 0xC48BD9: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
