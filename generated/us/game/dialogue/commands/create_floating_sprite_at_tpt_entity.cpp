// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/create_floating_sprite_at_tpt_entity.asm
bool resume_text_ccs_create_floating_sprite_at_tpt_entity(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:3 BEGIN_C_FUNCTION
    case 0xC165D2: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    case 0xC165D4: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    case 0xC165D5: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    case 0xC165D6: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    case 0xC165D7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000F0u : 0x00FFF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC165D7.
    case 0xC165D9: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    case 0xC165DA: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    case 0xC165DB: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:10 STX @LOCAL00
    case 0xC165DC: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:10 STX @LOCAL00
    // Overlapping static entry reached from 0xC165D9.
    case 0xC165DD: {
        Instruction step(cpu, 0x0E, 0x0002A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:11 LDA #2
    case 0xC165DE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:11 LDA #2
    // Overlapping static entry reached from 0xC165DE.
    case 0xC165E0: {
        Instruction step(cpu, 0x00, 0x000018u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:12 CLC
    case 0xC165E1: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:13 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC165E2: {
        Instruction step(cpu, 0xED, 0x0097CAu, 3u, AddressMode::Absolute);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC165E5: {
        Instruction step(cpu, 0x50, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC165E7: {
        Instruction step(cpu, 0x10, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC165E9: {
        Instruction step(cpu, 0x80, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC165EB: {
        Instruction step(cpu, 0x30, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_negative();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:15 TXA
    case 0xC165ED: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC165EE: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC165F0: {
        Instruction step(cpu, 0xAE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC165F3: {
        Instruction step(cpu, 0x9D, 0x0097BAu, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC165F6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC165F8: {
        Instruction step(cpu, 0xEE, 0x0097CAu, 3u, AddressMode::Absolute);
        step.increment();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:21 LDA #.LOWORD(CC_1F_1A)
    case 0xC165FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000D2u : 0x0065D2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:21 LDA #.LOWORD(CC_1F_1A)
    // Overlapping static entry reached from 0xC165FB.
    case 0xC165FD: {
        Instruction step(cpu, 0x65, 0x000080u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:22 BRA @UNKNOWN3
    case 0xC165FE: {
        Instruction step(cpu, 0x80, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:22 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC165FD.
    case 0xC165FF: {
        Instruction step(cpu, 0x28, 0x000000u, 1u, AddressMode::Implied);
        step.pull_status();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC16600: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:25 LDA #8
    case 0xC16602: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x00E208u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC16604: {
        Instruction step(cpu, 0xE2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:26 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC16602.
    case 0xC16605: {
        Instruction step(cpu, 0x10, 0x0000A8u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:27 TAY
    case 0xC16606: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC16607: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:29 LDA CC_ARGUMENT_STORAGE+1
    case 0xC16609: {
        Instruction step(cpu, 0xAD, 0x0097BBu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:30 AND #$00FF
    case 0xC1660C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC1660C.
    case 0xC1660E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:31 JSL ASL16_ENTRY2
    case 0xC1660F: {
        Instruction step(cpu, 0x22, 0xC0923Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:32 STA @VIRTUAL02
    case 0xC16613: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:33 LDA CC_ARGUMENT_STORAGE
    case 0xC16615: {
        Instruction step(cpu, 0xAD, 0x0097BAu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:34 AND #$00FF
    case 0xC16618: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x0000FFu : 0x0000FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC16618.
    case 0xC1661A: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:35 ORA @VIRTUAL02
    case 0xC1661B: {
        Instruction step(cpu, 0x05, 0x000002u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:36 REP #PROC_FLAGS::INDEX8
    case 0xC1661D: {
        Instruction step(cpu, 0xC2, 0x000010u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:37 LDX @LOCAL00
    case 0xC1661F: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:38 JSL UNKNOWN_C4B524
    case 0xC16621: {
        Instruction step(cpu, 0x22, 0xC4B524u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:39 LDA #NULL
    case 0xC16625: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:39 LDA #NULL
    // Overlapping static entry reached from 0xC16625.
    case 0xC16627: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:41 END_C_FUNCTION
    case 0xC16628: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:41 END_C_FUNCTION
    case 0xC16629: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
