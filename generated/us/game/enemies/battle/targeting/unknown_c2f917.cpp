// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C2/C2F917.asm
bool resume_unresolved_c2_c2f917(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C2/C2F917.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2F917: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C2/C2F917.asm:8 END_STACK_VARS
    case 0xC2F919: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C2/C2F917.asm:8 END_STACK_VARS
    case 0xC2F91A: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2F917.asm:8 END_STACK_VARS
    case 0xC2F91B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C2/C2F917.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2F91B.
    case 0xC2F91D: {
        Instruction step(cpu, 0xFF, 0x589C5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C2/C2F917.asm:8 END_STACK_VARS
    case 0xC2F91E: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:9 STZ NUM_BATTLERS_IN_BACK_ROW
    case 0xC2F91F: {
        Instruction step(cpu, 0x9C, 0x00AD58u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:9 STZ NUM_BATTLERS_IN_BACK_ROW
    // Overlapping static entry reached from 0xC2F91D.
    case 0xC2F921: {
        Instruction step(cpu, 0xAD, 0x00569Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:10 STZ NUM_BATTLERS_IN_FRONT_ROW
    case 0xC2F922: {
        Instruction step(cpu, 0x9C, 0x00AD56u, 3u, AddressMode::Absolute);
        step.store_zero();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:10 STZ NUM_BATTLERS_IN_FRONT_ROW
    // Overlapping static entry reached from 0xC2F921.
    case 0xC2F924: {
        Instruction step(cpu, 0xAD, 0x0008A9u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:11 LDA #8
    case 0xC2F925: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:11 LDA #8
    // Overlapping static entry reached from 0xC2F925.
    case 0xC2F927: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:12 STA @LOCAL02
    case 0xC2F928: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:13 BRA @UNKNOWN3
    case 0xC2F92A: {
        Instruction step(cpu, 0x80, 0x00003Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:15 LDY #.SIZEOF(battler)
    case 0xC2F92C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:15 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F92C.
    case 0xC2F92E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:16 JSL MULT168
    case 0xC2F92F: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:17 TAX
    case 0xC2F933: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:18 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC2F934: {
        Instruction step(cpu, 0xBD, 0x009FB8u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:19 AND #$00FF
    case 0xC2F937: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC2F937.
    case 0xC2F939: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:20 BEQ @UNKNOWN2
    case 0xC2F93A: {
        Instruction step(cpu, 0xF0, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:21 LDA BATTLERS_TABLE+battler::afflictions,X
    case 0xC2F93C: {
        Instruction step(cpu, 0xBD, 0x009FC9u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:22 AND #$00FF
    case 0xC2F93F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:22 AND #$00FF
    // Overlapping static entry reached from 0xC2F93F.
    case 0xC2F941: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:23 CMP #1
    case 0xC2F942: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:23 CMP #1
    // Overlapping static entry reached from 0xC2F942.
    case 0xC2F944: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:24 BEQ @UNKNOWN2
    case 0xC2F945: {
        Instruction step(cpu, 0xF0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:25 LDA BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC2F947: {
        Instruction step(cpu, 0xBD, 0x009FBAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:26 AND #$00FF
    case 0xC2F94A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC2F94A.
    case 0xC2F94C: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:27 CMP #1
    case 0xC2F94D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:27 CMP #1
    // Overlapping static entry reached from 0xC2F94D.
    case 0xC2F94F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:28 BNE @UNKNOWN2
    case 0xC2F950: {
        Instruction step(cpu, 0xD0, 0x000010u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:29 LDA BATTLERS_TABLE+battler::row,X
    case 0xC2F952: {
        Instruction step(cpu, 0xBD, 0x009FBCu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:30 AND #$00FF
    case 0xC2F955: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC2F955.
    case 0xC2F957: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:31 BEQ @UNKNOWN1
    case 0xC2F958: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:32 INC NUM_BATTLERS_IN_BACK_ROW
    case 0xC2F95A: {
        Instruction step(cpu, 0xEE, 0x00AD58u, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:33 BRA @UNKNOWN2
    case 0xC2F95D: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:35 INC NUM_BATTLERS_IN_FRONT_ROW
    case 0xC2F95F: {
        Instruction step(cpu, 0xEE, 0x00AD56u, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:37 LDA @LOCAL02
    case 0xC2F962: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:38 INC
    case 0xC2F964: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:39 STA @LOCAL02
    case 0xC2F965: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:41 CMP #32
    case 0xC2F967: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:41 CMP #32
    // Overlapping static entry reached from 0xC2F967.
    case 0xC2F969: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:42 BCC @UNKNOWN0
    case 0xC2F96A: {
        Instruction step(cpu, 0x90, 0x0000C0u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:43 STZ @LOCAL01
    case 0xC2F96C: {
        Instruction step(cpu, 0x64, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:44 LDA #0
    case 0xC2F96E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:44 LDA #0
    // Overlapping static entry reached from 0xC2F96E.
    case 0xC2F970: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:45 STA @VIRTUAL02
    case 0xC2F971: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:46 JMP @UNKNOWN9
    case 0xC2F973: {
        Instruction step(cpu, 0x4C, 0x00FA12u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:48 LDA #$FFFF
    case 0xC2F976: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:48 LDA #$FFFF
    // Overlapping static entry reached from 0xC2F976.
    case 0xC2F978: {
        Instruction step(cpu, 0xFF, 0xA00485u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:49 STA @VIRTUAL04
    case 0xC2F979: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:50 LDY #8
    case 0xC2F97B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:50 LDY #8
    // Overlapping static entry reached from 0xC2F978.
    case 0xC2F97C: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:50 LDY #8
    // Overlapping static entry reached from 0xC2F97B.
    case 0xC2F97D: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:51 STY @LOCAL02
    case 0xC2F97E: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:52 BRA @UNKNOWN8
    case 0xC2F980: {
        Instruction step(cpu, 0x80, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:54 TYA
    case 0xC2F982: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:55 LDY #.SIZEOF(battler)
    case 0xC2F983: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:55 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F983.
    case 0xC2F985: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:56 JSL MULT168
    case 0xC2F986: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:57 TAX
    case 0xC2F98A: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:58 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC2F98B: {
        Instruction step(cpu, 0xBD, 0x009FB8u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:59 AND #$00FF
    case 0xC2F98E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC2F98E.
    case 0xC2F990: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:60 BEQ @UNKNOWN7
    case 0xC2F991: {
        Instruction step(cpu, 0xF0, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:61 LDA BATTLERS_TABLE+battler::afflictions,X
    case 0xC2F993: {
        Instruction step(cpu, 0xBD, 0x009FC9u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:62 AND #$00FF
    case 0xC2F996: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:62 AND #$00FF
    // Overlapping static entry reached from 0xC2F996.
    case 0xC2F998: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:63 CMP #1
    case 0xC2F999: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:63 CMP #1
    // Overlapping static entry reached from 0xC2F999.
    case 0xC2F99B: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:64 BEQ @UNKNOWN7
    case 0xC2F99C: {
        Instruction step(cpu, 0xF0, 0x00002Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:65 LDA BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC2F99E: {
        Instruction step(cpu, 0xBD, 0x009FBAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:66 AND #$00FF
    case 0xC2F9A1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:66 AND #$00FF
    // Overlapping static entry reached from 0xC2F9A1.
    case 0xC2F9A3: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:67 CMP #1
    case 0xC2F9A4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:67 CMP #1
    // Overlapping static entry reached from 0xC2F9A4.
    case 0xC2F9A6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:68 BNE @UNKNOWN7
    case 0xC2F9A7: {
        Instruction step(cpu, 0xD0, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:69 LDA BATTLERS_TABLE+battler::row,X
    case 0xC2F9A9: {
        Instruction step(cpu, 0xBD, 0x009FBCu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:70 AND #$00FF
    case 0xC2F9AC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:70 AND #$00FF
    // Overlapping static entry reached from 0xC2F9AC.
    case 0xC2F9AE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:71 BNE @UNKNOWN7
    case 0xC2F9AF: {
        Instruction step(cpu, 0xD0, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:72 LDA BATTLERS_TABLE+battler::sprite_x,X
    case 0xC2F9B1: {
        Instruction step(cpu, 0xBD, 0x009FF0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:73 AND #$00FF
    case 0xC2F9B4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:73 AND #$00FF
    // Overlapping static entry reached from 0xC2F9B4.
    case 0xC2F9B6: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:74 CMP @LOCAL01
    case 0xC2F9B7: {
        Instruction step(cpu, 0xC5, 0x000010u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2F917.asm:75 BLTEQ @UNKNOWN7
    case 0xC2F9B9: {
        Instruction step(cpu, 0x90, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2F917.asm:75 BLTEQ @UNKNOWN7
    case 0xC2F9BB: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:76 CMP @VIRTUAL04
    case 0xC2F9BD: {
        Instruction step(cpu, 0xC5, 0x000004u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C2/C2F917.asm:77 BGT @UNKNOWN7
    case 0xC2F9BF: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C2/C2F917.asm:77 BGT @UNKNOWN7
    case 0xC2F9C1: {
        Instruction step(cpu, 0xB0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:78 LDY @LOCAL02
    case 0xC2F9C3: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:79 STY @LOCAL00
    case 0xC2F9C5: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:80 STA @VIRTUAL04
    case 0xC2F9C7: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:82 LDY @LOCAL02
    case 0xC2F9C9: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:83 INY
    case 0xC2F9CB: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:84 STY @LOCAL02
    case 0xC2F9CC: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:86 CPY #32
    case 0xC2F9CE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:86 CPY #32
    // Overlapping static entry reached from 0xC2F9CE.
    case 0xC2F9D0: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:87 BCC @UNKNOWN5
    case 0xC2F9D1: {
        Instruction step(cpu, 0x90, 0x0000AFu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:88 LDA @LOCAL00
    case 0xC2F9D3: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:89 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F9D5: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:90 LDX @VIRTUAL02
    case 0xC2F9D7: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:91 STA FRONT_ROW_BATTLERS,X
    case 0xC2F9D9: {
        Instruction step(cpu, 0x9D, 0x00AD7Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:92 REP #PROC_FLAGS::ACCUM8
    case 0xC2F9DC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:93 LDA @VIRTUAL04
    case 0xC2F9DE: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:94 LSR
    case 0xC2F9E0: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:95 LSR
    case 0xC2F9E1: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:96 LSR
    case 0xC2F9E2: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:97 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F9E3: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:98 LDX @VIRTUAL02
    case 0xC2F9E5: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:99 STA BATTLER_FRONT_ROW_X_POSITIONS,X
    case 0xC2F9E7: {
        Instruction step(cpu, 0x9D, 0x00AD5Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:100 REP #PROC_FLAGS::ACCUM8
    case 0xC2F9EA: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:101 LDA @LOCAL00
    case 0xC2F9EC: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:102 LDY #.SIZEOF(battler)
    case 0xC2F9EE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:102 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2F9EE.
    case 0xC2F9F0: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:103 JSL MULT168
    case 0xC2F9F1: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:104 TAX
    case 0xC2F9F5: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:105 LDA BATTLERS_TABLE+battler::sprite,X
    case 0xC2F9F6: {
        Instruction step(cpu, 0xBD, 0x009FAEu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:106 JSR GET_BATTLE_SPRITE_HEIGHT
    case 0xC2F9F9: {
        Instruction step(cpu, 0x20, 0x00F04Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:107 SEP #PROC_FLAGS::ACCUM8
    case 0xC2F9FC: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:108 STA @VIRTUAL00
    case 0xC2F9FE: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:109 LDA #18
    case 0xC2FA00: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000012u : 0x003812u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:110 SEC
    case 0xC2FA02: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:111 SBC @VIRTUAL00
    case 0xC2FA03: {
        Instruction step(cpu, 0xE5, 0x000000u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:112 LDX @VIRTUAL02
    case 0xC2FA05: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:113 STA BATTLER_FRONT_ROW_Y_POSITIONS,X
    case 0xC2FA07: {
        Instruction step(cpu, 0x9D, 0x00AD62u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:114 REP #PROC_FLAGS::ACCUM8
    case 0xC2FA0A: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:115 LDA @VIRTUAL04
    case 0xC2FA0C: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:116 STA @LOCAL01
    case 0xC2FA0E: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:117 INC @VIRTUAL02
    case 0xC2FA10: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:119 LDA @VIRTUAL02
    case 0xC2FA12: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:120 CMP NUM_BATTLERS_IN_FRONT_ROW
    case 0xC2FA14: {
        Instruction step(cpu, 0xCD, 0x00AD56u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C2/C2F917.asm:121 BCCL @UNKNOWN4
    case 0xC2FA17: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C2/C2F917.asm:121 BCCL @UNKNOWN4
    case 0xC2FA19: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C2/C2F917.asm:121 BCCL @UNKNOWN4
    case 0xC2FA1B: {
        Instruction step(cpu, 0x4C, 0x00F976u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:122 STZ @LOCAL01
    case 0xC2FA1E: {
        Instruction step(cpu, 0x64, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:123 LDA #0
    case 0xC2FA20: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:123 LDA #0
    // Overlapping static entry reached from 0xC2FA20.
    case 0xC2FA22: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:124 STA @VIRTUAL02
    case 0xC2FA23: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:125 JMP @UNKNOWN16
    case 0xC2FA25: {
        Instruction step(cpu, 0x4C, 0x00FAC4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:127 LDA #$FFFF
    case 0xC2FA28: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:127 LDA #$FFFF
    // Overlapping static entry reached from 0xC2FA28.
    case 0xC2FA2A: {
        Instruction step(cpu, 0xFF, 0xA00485u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:128 STA @VIRTUAL04
    case 0xC2FA2B: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:129 LDY #8
    case 0xC2FA2D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:129 LDY #8
    // Overlapping static entry reached from 0xC2FA2A.
    case 0xC2FA2E: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:129 LDY #8
    // Overlapping static entry reached from 0xC2FA2D.
    case 0xC2FA2F: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:130 STY @LOCAL02
    case 0xC2FA30: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:131 BRA @UNKNOWN15
    case 0xC2FA32: {
        Instruction step(cpu, 0x80, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:133 TYA
    case 0xC2FA34: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:134 LDY #.SIZEOF(battler)
    case 0xC2FA35: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:134 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2FA35.
    case 0xC2FA37: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:135 JSL MULT168
    case 0xC2FA38: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:136 TAX
    case 0xC2FA3C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:137 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC2FA3D: {
        Instruction step(cpu, 0xBD, 0x009FB8u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:138 AND #$00FF
    case 0xC2FA40: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:138 AND #$00FF
    // Overlapping static entry reached from 0xC2FA40.
    case 0xC2FA42: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:139 BEQ @UNKNOWN14
    case 0xC2FA43: {
        Instruction step(cpu, 0xF0, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:140 LDA BATTLERS_TABLE+battler::afflictions,X
    case 0xC2FA45: {
        Instruction step(cpu, 0xBD, 0x009FC9u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:141 AND #$00FF
    case 0xC2FA48: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:141 AND #$00FF
    // Overlapping static entry reached from 0xC2FA48.
    case 0xC2FA4A: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:142 CMP #STATUS_0::UNCONSCIOUS
    case 0xC2FA4B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:142 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC2FA4B.
    case 0xC2FA4D: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:143 BEQ @UNKNOWN14
    case 0xC2FA4E: {
        Instruction step(cpu, 0xF0, 0x00002Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:144 LDA BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC2FA50: {
        Instruction step(cpu, 0xBD, 0x009FBAu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:145 AND #$00FF
    case 0xC2FA53: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:145 AND #$00FF
    // Overlapping static entry reached from 0xC2FA53.
    case 0xC2FA55: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:146 CMP #1
    case 0xC2FA56: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:146 CMP #1
    // Overlapping static entry reached from 0xC2FA56.
    case 0xC2FA58: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:147 BNE @UNKNOWN14
    case 0xC2FA59: {
        Instruction step(cpu, 0xD0, 0x000020u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:148 LDA BATTLERS_TABLE+battler::row,X
    case 0xC2FA5B: {
        Instruction step(cpu, 0xBD, 0x009FBCu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:149 AND #$00FF
    case 0xC2FA5E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:149 AND #$00FF
    // Overlapping static entry reached from 0xC2FA5E.
    case 0xC2FA60: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:150 BEQ @UNKNOWN14
    case 0xC2FA61: {
        Instruction step(cpu, 0xF0, 0x000018u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:151 LDA BATTLERS_TABLE+battler::sprite_x,X
    case 0xC2FA63: {
        Instruction step(cpu, 0xBD, 0x009FF0u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:152 AND #$00FF
    case 0xC2FA66: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:152 AND #$00FF
    // Overlapping static entry reached from 0xC2FA66.
    case 0xC2FA68: {
        Instruction step(cpu, 0x00, 0x0000C5u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:153 CMP @LOCAL01
    case 0xC2FA69: {
        Instruction step(cpu, 0xC5, 0x000010u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C2/C2F917.asm:154 BLTEQ @UNKNOWN14
    case 0xC2FA6B: {
        Instruction step(cpu, 0x90, 0x00000Eu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C2/C2F917.asm:154 BLTEQ @UNKNOWN14
    case 0xC2FA6D: {
        Instruction step(cpu, 0xF0, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:155 CMP @VIRTUAL04
    case 0xC2FA6F: {
        Instruction step(cpu, 0xC5, 0x000004u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C2/C2F917.asm:156 BGT @UNKNOWN14
    case 0xC2FA71: {
        Instruction step(cpu, 0xF0, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C2/C2F917.asm:156 BGT @UNKNOWN14
    case 0xC2FA73: {
        Instruction step(cpu, 0xB0, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:157 LDY @LOCAL02
    case 0xC2FA75: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:158 STY @LOCAL00
    case 0xC2FA77: {
        Instruction step(cpu, 0x84, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:159 STA @VIRTUAL04
    case 0xC2FA79: {
        Instruction step(cpu, 0x85, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:161 LDY @LOCAL02
    case 0xC2FA7B: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:162 INY
    case 0xC2FA7D: {
        Instruction step(cpu, 0xC8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_y();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:163 STY @LOCAL02
    case 0xC2FA7E: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:165 CPY #32
    case 0xC2FA80: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:165 CPY #32
    // Overlapping static entry reached from 0xC2FA80.
    case 0xC2FA82: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:166 BCC @UNKNOWN12
    case 0xC2FA83: {
        Instruction step(cpu, 0x90, 0x0000AFu, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:167 LDA @LOCAL00
    case 0xC2FA85: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:168 SEP #PROC_FLAGS::ACCUM8
    case 0xC2FA87: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:169 LDX @VIRTUAL02
    case 0xC2FA89: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:170 STA BACK_ROW_BATTLERS,X
    case 0xC2FA8B: {
        Instruction step(cpu, 0x9D, 0x00AD82u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:171 REP #PROC_FLAGS::ACCUM8
    case 0xC2FA8E: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:172 LDA @VIRTUAL04
    case 0xC2FA90: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:173 LSR
    case 0xC2FA92: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:174 LSR
    case 0xC2FA93: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:175 LSR
    case 0xC2FA94: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:176 SEP #PROC_FLAGS::ACCUM8
    case 0xC2FA95: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:177 LDX @VIRTUAL02
    case 0xC2FA97: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:178 STA BATTLER_BACK_ROW_X_POSITIONS,X
    case 0xC2FA99: {
        Instruction step(cpu, 0x9D, 0x00AD6Au, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:179 REP #PROC_FLAGS::ACCUM8
    case 0xC2FA9C: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:180 LDA @LOCAL00
    case 0xC2FA9E: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:181 LDY #.SIZEOF(battler)
    case 0xC2FAA0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x00004Eu : 0x00004Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:181 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2FAA0.
    case 0xC2FAA2: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:182 JSL MULT168
    case 0xC2FAA3: {
        Instruction step(cpu, 0x22, 0xC08FF7u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:183 TAX
    case 0xC2FAA7: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:184 LDA BATTLERS_TABLE+battler::sprite,X
    case 0xC2FAA8: {
        Instruction step(cpu, 0xBD, 0x009FAEu, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:185 JSR GET_BATTLE_SPRITE_HEIGHT
    case 0xC2FAAB: {
        Instruction step(cpu, 0x20, 0x00F04Eu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:186 SEP #PROC_FLAGS::ACCUM8
    case 0xC2FAAE: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:187 STA @VIRTUAL00
    case 0xC2FAB0: {
        Instruction step(cpu, 0x85, 0x000000u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:188 LDA #16
    case 0xC2FAB2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000010u : 0x003810u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:189 SEC
    case 0xC2FAB4: {
        Instruction step(cpu, 0x38, 0x000000u, 1u, AddressMode::Implied);
        step.set_carry();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:190 SBC @VIRTUAL00
    case 0xC2FAB5: {
        Instruction step(cpu, 0xE5, 0x000000u, 2u, AddressMode::DirectPage);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:191 LDX @VIRTUAL02
    case 0xC2FAB7: {
        Instruction step(cpu, 0xA6, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:192 STA BATTLER_BACK_ROW_Y_POSITIONS,X
    case 0xC2FAB9: {
        Instruction step(cpu, 0x9D, 0x00AD72u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:193 REP #PROC_FLAGS::ACCUM8
    case 0xC2FABC: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:194 LDA @VIRTUAL04
    case 0xC2FABE: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:195 STA @LOCAL01
    case 0xC2FAC0: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:196 INC @VIRTUAL02
    case 0xC2FAC2: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:198 LDA @VIRTUAL02
    case 0xC2FAC4: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C2/C2F917.asm:199 CMP NUM_BATTLERS_IN_BACK_ROW
    case 0xC2FAC6: {
        Instruction step(cpu, 0xCD, 0x00AD58u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C2/C2F917.asm:200 BCCL @UNKNOWN11
    case 0xC2FAC9: {
        Instruction step(cpu, 0xB0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C2/C2F917.asm:200 BCCL @UNKNOWN11
    case 0xC2FACB: {
        Instruction step(cpu, 0xF0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C2/C2F917.asm:200 BCCL @UNKNOWN11
    case 0xC2FACD: {
        Instruction step(cpu, 0x4C, 0x00FA28u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C2/C2F917.asm:201 END_C_FUNCTION
    case 0xC2FAD0: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C2/C2F917.asm:201 END_C_FUNCTION
    case 0xC2FAD1: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
