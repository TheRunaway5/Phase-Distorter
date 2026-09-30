// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/init_entity.asm
bool resume_overworld_init_entity(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/init_entity.asm:5 PHA
    case 0xC092F5: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:6 STZ NEW_ENTITY_POS_Z
    case 0xC092F6: {
        Instruction step(cpu, 0x9C, 0x000A48u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/init_entity.asm:7 STZ NEW_ENTITY_VAR0
    case 0xC092F9: {
        Instruction step(cpu, 0x9C, 0x000A38u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/init_entity.asm:8 STZ NEW_ENTITY_VAR1
    case 0xC092FC: {
        Instruction step(cpu, 0x9C, 0x000A3Au, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/init_entity.asm:9 STZ NEW_ENTITY_VAR2
    case 0xC092FF: {
        Instruction step(cpu, 0x9C, 0x000A3Cu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/init_entity.asm:10 STZ NEW_ENTITY_VAR3
    case 0xC09302: {
        Instruction step(cpu, 0x9C, 0x000A3Eu, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/init_entity.asm:11 STZ NEW_ENTITY_VAR4
    case 0xC09305: {
        Instruction step(cpu, 0x9C, 0x000A40u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/init_entity.asm:12 STZ NEW_ENTITY_VAR5
    case 0xC09308: {
        Instruction step(cpu, 0x9C, 0x000A42u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/init_entity.asm:13 STZ NEW_ENTITY_VAR6
    case 0xC0930B: {
        Instruction step(cpu, 0x9C, 0x000A44u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/init_entity.asm:14 STZ NEW_ENTITY_VAR7
    case 0xC0930E: {
        Instruction step(cpu, 0x9C, 0x000A46u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/init_entity.asm:15 STZ NEW_ENTITY_PRIORITY
    case 0xC09311: {
        Instruction step(cpu, 0x9C, 0x000A4Au, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/init_entity.asm:16 LDA #$0000
    case 0xC09314: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:16 LDA #$0000
    // Overlapping static entry reached from 0xC09314.
    case 0xC09316: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/init_entity.asm:17 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC09317: {
        Instruction step(cpu, 0x8D, 0x000A4Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:18 LDA #$001E
    case 0xC0931A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:18 LDA #$001E
    // Overlapping static entry reached from 0xC0931A.
    case 0xC0931C: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/init_entity.asm:19 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC0931D: {
        Instruction step(cpu, 0x8D, 0x000A4Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:20 PLA
    case 0xC09320: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:24 PHA
    case 0xC09321: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:25 PHY
    case 0xC09322: {
        Instruction step(cpu, 0x5A, 0x000000u, 1u, AddressMode::Implied);
        step.push_y();
        return step.finish();
    }
    // src/overworld/init_entity.asm:26 PHX
    case 0xC09323: {
        Instruction step(cpu, 0xDA, 0x000000u, 1u, AddressMode::Implied);
        step.push_x();
        return step.finish();
    }
    // src/overworld/init_entity.asm:27 LDA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC09324: {
        Instruction step(cpu, 0xAD, 0x000A4Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:28 ASL
    case 0xC09327: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/init_entity.asm:29 STA ENTITY_ALLOCATION_MIN_SLOT
    case 0xC09328: {
        Instruction step(cpu, 0x8D, 0x000A4Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:30 LDA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC0932B: {
        Instruction step(cpu, 0xAD, 0x000A4Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:31 ASL
    case 0xC0932E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/init_entity.asm:32 STA ENTITY_ALLOCATION_MAX_SLOT
    case 0xC0932F: {
        Instruction step(cpu, 0x8D, 0x000A4Eu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:33 JSR UNKNOWN_C09C02
    case 0xC09332: {
        Instruction step(cpu, 0x20, 0x009C02u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/init_entity.asm:33 JSR UNKNOWN_C09C02
    // Overlapping static entry reached from 0xC09395.
    case 0xC09334: {
        Instruction step(cpu, 0x9C, 0x000790u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/init_entity.asm:34 BCC @UNKNOWN0
    case 0xC09335: {
        Instruction step(cpu, 0x90, 0x000007u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/overworld/init_entity.asm:35 PLA
    case 0xC09337: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:36 PLA
    case 0xC09338: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:37 PLA
    case 0xC09339: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:38 LDA #$0000
    case 0xC0933A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:38 LDA #$0000
    // Overlapping static entry reached from 0xC0933A.
    case 0xC0933C: {
        Instruction step(cpu, 0x00, 0x00006Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/init_entity.asm:39 RTL
    case 0xC0933D: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/overworld/init_entity.asm:41 JSR UNKNOWN_C09D03
    case 0xC0933E: {
        Instruction step(cpu, 0x20, 0x009D03u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/init_entity.asm:42 TYA
    case 0xC09341: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:43 STA ENTITY_SCRIPT_INDEX_TABLE,X
    case 0xC09342: {
        Instruction step(cpu, 0x9D, 0x000ADAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:44 LDA #$FFFF
    case 0xC09345: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:44 LDA #$FFFF
    // Overlapping static entry reached from 0xC09345.
    case 0xC09347: {
        Instruction step(cpu, 0xFF, 0x125A99u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/init_entity.asm:45 STA ENTITY_SCRIPT_NEXT_SCRIPTS,Y
    case 0xC09348: {
        Instruction step(cpu, 0x99, 0x00125Au, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:46 LDA #.LOWORD(UNKNOWN_C09FAE_ENTRY2)
    case 0xC0934B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C8u : 0x009FC8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:46 LDA #.LOWORD(UNKNOWN_C09FAE_ENTRY2)
    // Overlapping static entry reached from 0xC0934B.
    case 0xC0934D: {
        Instruction step(cpu, 0x9F, 0x121E9Du, 4u, AddressMode::LongIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:47 STA ENTITY_MOVE_CALLBACK,X
    case 0xC0934E: {
        Instruction step(cpu, 0x9D, 0x00121Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:48 LDA #.LOWORD(UNKNOWN_C0A023)
    case 0xC09351: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000023u : 0x00A023u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:48 LDA #.LOWORD(UNKNOWN_C0A023)
    // Overlapping static entry reached from 0xC09351.
    case 0xC09353: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00009Du : 0x00A69Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/overworld/init_entity.asm:49 STA ENTITY_SCREEN_POSITION_CALLBACK,X
    case 0xC09354: {
        Instruction step(cpu, 0x9D, 0x0011A6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:49 STA ENTITY_SCREEN_POSITION_CALLBACK,X
    // Overlapping static entry reached from 0xC09353.
    case 0xC09355: {
        Instruction step(cpu, 0xA6, 0x000011u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/init_entity.asm:49 STA ENTITY_SCREEN_POSITION_CALLBACK,X
    // Overlapping static entry reached from 0xC09353.
    case 0xC09356: {
        Instruction step(cpu, 0x11, 0x0000A9u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:50 LDA #.LOWORD(UNKNOWN_C0A3A4)
    case 0xC09357: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A4u : 0x00A3A4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:50 LDA #.LOWORD(UNKNOWN_C0A3A4)
    // Overlapping static entry reached from 0xC09356.
    case 0xC09358: {
        Instruction step(cpu, 0xA4, 0x0000A3u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/overworld/init_entity.asm:50 LDA #.LOWORD(UNKNOWN_C0A3A4)
    // Overlapping static entry reached from 0xC09357.
    case 0xC09359: {
        Instruction step(cpu, 0xA3, 0x00009Du, 2u, AddressMode::StackRelative);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:51 STA ENTITY_DRAW_CALLBACK,X
    case 0xC0935A: {
        Instruction step(cpu, 0x9D, 0x0011E2u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:51 STA ENTITY_DRAW_CALLBACK,X
    // Overlapping static entry reached from 0xC09359.
    case 0xC0935B: {
        Instruction step(cpu, 0xE2, 0x000011u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/overworld/init_entity.asm:52 LDA NEW_ENTITY_VAR0
    case 0xC0935D: {
        Instruction step(cpu, 0xAD, 0x000A38u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:53 STA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC09360: {
        Instruction step(cpu, 0x9D, 0x000E5Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:54 LDA NEW_ENTITY_VAR1
    case 0xC09363: {
        Instruction step(cpu, 0xAD, 0x000A3Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:55 STA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC09366: {
        Instruction step(cpu, 0x9D, 0x000E9Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:56 LDA NEW_ENTITY_VAR2
    case 0xC09369: {
        Instruction step(cpu, 0xAD, 0x000A3Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:57 STA ENTITY_SCRIPT_VAR2_TABLE,X
    case 0xC0936C: {
        Instruction step(cpu, 0x9D, 0x000ED6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:58 LDA NEW_ENTITY_VAR3
    case 0xC0936F: {
        Instruction step(cpu, 0xAD, 0x000A3Eu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:59 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC09372: {
        Instruction step(cpu, 0x9D, 0x000F12u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:60 LDA NEW_ENTITY_VAR4
    case 0xC09375: {
        Instruction step(cpu, 0xAD, 0x000A40u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:61 STA ENTITY_SCRIPT_VAR4_TABLE,X
    case 0xC09378: {
        Instruction step(cpu, 0x9D, 0x000F4Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:62 LDA NEW_ENTITY_VAR5
    case 0xC0937B: {
        Instruction step(cpu, 0xAD, 0x000A42u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:63 STA ENTITY_SCRIPT_VAR5_TABLE,X
    case 0xC0937E: {
        Instruction step(cpu, 0x9D, 0x000F8Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:64 LDA NEW_ENTITY_VAR6
    case 0xC09381: {
        Instruction step(cpu, 0xAD, 0x000A44u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:65 STA ENTITY_SCRIPT_VAR6_TABLE,X
    case 0xC09384: {
        Instruction step(cpu, 0x9D, 0x000FC6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:66 LDA NEW_ENTITY_VAR7
    case 0xC09387: {
        Instruction step(cpu, 0xAD, 0x000A46u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:67 STA ENTITY_SCRIPT_VAR7_TABLE,X
    case 0xC0938A: {
        Instruction step(cpu, 0x9D, 0x001002u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:68 LDA NEW_ENTITY_PRIORITY
    case 0xC0938D: {
        Instruction step(cpu, 0xAD, 0x000A4Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:69 STA ENTITY_DRAW_PRIORITY,X
    case 0xC09390: {
        Instruction step(cpu, 0x9D, 0x00103Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:70 LDA #$8000
    case 0xC09393: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:70 LDA #$8000
    // Overlapping static entry reached from 0xC09393.
    case 0xC09395: {
        Instruction step(cpu, 0x80, 0x00009Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/init_entity.asm:71 STA ENTITY_ABS_X_FRACTION_TABLE,X
    case 0xC09396: {
        Instruction step(cpu, 0x9D, 0x000C42u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:72 STA ENTITY_ABS_Y_FRACTION_TABLE,X
    case 0xC09399: {
        Instruction step(cpu, 0x9D, 0x000C7Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:73 STA ENTITY_ABS_Z_FRACTION_TABLE,X
    case 0xC0939C: {
        Instruction step(cpu, 0x9D, 0x000CBAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:74 PLA
    case 0xC0939F: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:75 STA ENTITY_ABS_X_TABLE,X
    case 0xC093A0: {
        Instruction step(cpu, 0x9D, 0x000B8Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:76 STA ENTITY_SCREEN_X_TABLE,X
    case 0xC093A3: {
        Instruction step(cpu, 0x9D, 0x000B16u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:77 PLA
    case 0xC093A6: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:78 STA ENTITY_ABS_Y_TABLE,X
    case 0xC093A7: {
        Instruction step(cpu, 0x9D, 0x000BCAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:79 STA ENTITY_SCREEN_Y_TABLE,X
    case 0xC093AA: {
        Instruction step(cpu, 0x9D, 0x000B52u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:80 LDA NEW_ENTITY_POS_Z
    case 0xC093AD: {
        Instruction step(cpu, 0xAD, 0x000A48u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:81 STA ENTITY_ABS_Z_TABLE,X
    case 0xC093B0: {
        Instruction step(cpu, 0x9D, 0x000C06u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:82 JSR UNKNOWN_C09C57
    case 0xC093B3: {
        Instruction step(cpu, 0x20, 0x009C57u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/init_entity.asm:83 PLA
    case 0xC093B6: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:84 BRA @UNKNOWN1
    case 0xC093B7: {
        Instruction step(cpu, 0x80, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/init_entity.asm:85 PHA
    case 0xC093B9: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:86 JSR UNKNOWN_C09C99
    case 0xC093BA: {
        Instruction step(cpu, 0x20, 0x009C99u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/init_entity.asm:87 JSR UNKNOWN_C09D03
    case 0xC093BD: {
        Instruction step(cpu, 0x20, 0x009D03u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/init_entity.asm:88 TYA
    case 0xC093C0: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:89 STA ENTITY_SCRIPT_INDEX_TABLE,X
    case 0xC093C1: {
        Instruction step(cpu, 0x9D, 0x000ADAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:90 LDA #$FFFF
    case 0xC093C4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:90 LDA #$FFFF
    // Overlapping static entry reached from 0xC093C4.
    case 0xC093C6: {
        Instruction step(cpu, 0xFF, 0x125A99u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/init_entity.asm:91 STA ENTITY_SCRIPT_NEXT_SCRIPTS,Y
    case 0xC093C7: {
        Instruction step(cpu, 0x99, 0x00125Au, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:92 PLA
    case 0xC093CA: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:94 STA ENTITY_SCRIPT_TABLE,X
    case 0xC093CB: {
        Instruction step(cpu, 0x9D, 0x000A62u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:95 PHX
    case 0xC093CE: {
        Instruction step(cpu, 0xDA, 0x000000u, 1u, AddressMode::Implied);
        step.push_x();
        return step.finish();
    }
    // src/overworld/init_entity.asm:96 ASL
    case 0xC093CF: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/init_entity.asm:97 ADC ENTITY_SCRIPT_TABLE,X
    case 0xC093D0: {
        Instruction step(cpu, 0x7D, 0x000A62u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/overworld/init_entity.asm:98 TXY
    case 0xC093D3: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/overworld/init_entity.asm:99 TAX
    case 0xC093D4: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/init_entity.asm:100 LDA f:EVENT_SCRIPT_POINTERS+2,X
    case 0xC093D5: {
        Instruction step(cpu, 0xBF, 0xC400D6u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:101 TAY
    case 0xC093D9: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/overworld/init_entity.asm:102 LDA f:EVENT_SCRIPT_POINTERS,X
    case 0xC093DA: {
        Instruction step(cpu, 0xBF, 0xC400D4u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:103 PLX
    case 0xC093DE: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/overworld/init_entity.asm:104 STZ ENTITY_ANIMATION_FRAME,X
    case 0xC093DF: {
        Instruction step(cpu, 0x9E, 0x0010F2u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/init_entity.asm:105 DEC ENTITY_ANIMATION_FRAME,X
    case 0xC093E2: {
        Instruction step(cpu, 0xDE, 0x0010F2u, 3u, AddressMode::AbsoluteIndexedX);
        step.decrement();
        return step.finish();
    }
    // src/overworld/init_entity.asm:106 STZ ENTITY_DELTA_X_FRACTION_TABLE,X
    case 0xC093E5: {
        Instruction step(cpu, 0x9E, 0x000DAAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/init_entity.asm:107 STZ ENTITY_DELTA_X_TABLE,X
    case 0xC093E8: {
        Instruction step(cpu, 0x9E, 0x000CF6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/init_entity.asm:108 STZ ENTITY_DELTA_Y_FRACTION_TABLE,X
    case 0xC093EB: {
        Instruction step(cpu, 0x9E, 0x000DE6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/init_entity.asm:109 STZ ENTITY_DELTA_Y_TABLE,X
    case 0xC093EE: {
        Instruction step(cpu, 0x9E, 0x000D32u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/init_entity.asm:110 STZ ENTITY_DELTA_Z_FRACTION_TABLE,X
    case 0xC093F1: {
        Instruction step(cpu, 0x9E, 0x000E22u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/init_entity.asm:111 STZ ENTITY_DELTA_Z_TABLE,X
    case 0xC093F4: {
        Instruction step(cpu, 0x9E, 0x000D6Eu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/init_entity.asm:112 BRA UNKNOWN_C092F5_UNKNOWN4
    case 0xC093F7: {
        Instruction step(cpu, 0x80, 0x000025u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/init_entity.asm:114 PHA
    case 0xC093F9: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:115 TXA
    case 0xC093FA: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:116 ASL
    case 0xC093FB: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/init_entity.asm:117 TAX
    case 0xC093FC: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/init_entity.asm:118 PLA
    case 0xC093FD: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:119 JSL INIT_ENTITY_UNKNOWN2
    case 0xC093FE: {
        Instruction step(cpu, 0x22, 0xC09403u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/init_entity.asm:120 RTL
    case 0xC09402: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/overworld/init_entity.asm:122 PHY
    case 0xC09403: {
        Instruction step(cpu, 0x5A, 0x000000u, 1u, AddressMode::Implied);
        step.push_y();
        return step.finish();
    }
    // src/overworld/init_entity.asm:123 PHA
    case 0xC09404: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:124 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC09405: {
        Instruction step(cpu, 0xBD, 0x000A62u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:125 BPL @DONT_LOOP
    case 0xC09408: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/init_entity.asm:127 BRA @LOOP
    case 0xC0940A: {
        Instruction step(cpu, 0x80, 0x0000FEu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/init_entity.asm:129 JSR UNKNOWN_C09C99
    case 0xC0940C: {
        Instruction step(cpu, 0x20, 0x009C99u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/init_entity.asm:130 JSR UNKNOWN_C09D03
    case 0xC0940F: {
        Instruction step(cpu, 0x20, 0x009D03u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/init_entity.asm:131 TYA
    case 0xC09412: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:132 STA ENTITY_SCRIPT_INDEX_TABLE,X
    case 0xC09413: {
        Instruction step(cpu, 0x9D, 0x000ADAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:133 LDA #$FFFF
    case 0xC09416: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:133 LDA #$FFFF
    // Overlapping static entry reached from 0xC09416.
    case 0xC09418: {
        Instruction step(cpu, 0xFF, 0x125A99u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/init_entity.asm:134 STA ENTITY_SCRIPT_NEXT_SCRIPTS,Y
    case 0xC09419: {
        Instruction step(cpu, 0x99, 0x00125Au, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:135 PLA
    case 0xC0941C: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:136 PLY
    case 0xC0941D: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/overworld/init_entity.asm:138 PHY
    case 0xC0941E: {
        Instruction step(cpu, 0x5A, 0x000000u, 1u, AddressMode::Implied);
        step.push_y();
        return step.finish();
    }
    // src/overworld/init_entity.asm:139 PHA
    case 0xC0941F: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:140 JSR CLEAR_SPRITE_TICK_CALLBACK
    case 0xC09420: {
        Instruction step(cpu, 0x20, 0x009DA1u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/init_entity.asm:141 TXY
    case 0xC09423: {
        Instruction step(cpu, 0x9B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_y();
        return step.finish();
    }
    // src/overworld/init_entity.asm:142 LDX ENTITY_SCRIPT_INDEX_TABLE,Y
    case 0xC09424: {
        Instruction step(cpu, 0xBE, 0x000ADAu, 3u, AddressMode::AbsoluteIndexedY);
        step.load_x();
        return step.finish();
    }
    // src/overworld/init_entity.asm:143 PLA
    case 0xC09427: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:144 STA ENTITY_SCRIPT_PROGRAM_COUNTERS,X
    case 0xC09428: {
        Instruction step(cpu, 0x9D, 0x0013FEu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:145 PLA
    case 0xC0942B: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:146 AND #$00FF
    case 0xC0942C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:146 AND #$00FF
    // Overlapping static entry reached from 0xC0942C.
    case 0xC0942E: {
        Instruction step(cpu, 0x00, 0x00009Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/init_entity.asm:147 STA ENTITY_SCRIPT_PROGRAM_COUNTER_BANKS,X
    case 0xC0942F: {
        Instruction step(cpu, 0x9D, 0x00148Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:148 STZ ENTITY_SCRIPT_SLEEP_FRAMES,X
    case 0xC09432: {
        Instruction step(cpu, 0x9E, 0x001372u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/init_entity.asm:149 STZ ENTITY_SCRIPT_STACK_OFFSETS,X
    case 0xC09435: {
        Instruction step(cpu, 0x9E, 0x0012E6u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/overworld/init_entity.asm:150 TYA
    case 0xC09438: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/overworld/init_entity.asm:151 LSR
    case 0xC09439: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/overworld/init_entity.asm:152 CLC
    case 0xC0943A: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/overworld/init_entity.asm:154 RTL
    case 0xC0943B: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
