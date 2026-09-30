// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/text/ccs/tree_19.asm
bool resume_text_ccs_tree_19(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/tree_19.asm:3 BEGIN_C_FUNCTION
    case 0xC17C1B: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/tree_19.asm:9 END_STACK_VARS
    case 0xC17C1D: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/tree_19.asm:9 END_STACK_VARS
    case 0xC17C1E: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/tree_19.asm:9 END_STACK_VARS
    case 0xC17C1F: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_19.asm:9 END_STACK_VARS
    case 0xC17C20: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_19.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC17C20.
    case 0xC17C22: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/tree_19.asm:9 END_STACK_VARS
    case 0xC17C23: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/tree_19.asm:9 END_STACK_VARS
    case 0xC17C24: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:10 TXA
    case 0xC17C25: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:11 CMP #$02
    case 0xC17C26: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:11 CMP #$02
    // Overlapping static entry reached from 0xC17C26.
    case 0xC17C28: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:12 BEQL @UNKNOWN24
    case 0xC17C29: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:12 BEQL @UNKNOWN24
    case 0xC17C2B: {
        Instruction step(cpu, 0x4C, 0x007CE9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:13 CMP #$04
    case 0xC17C2E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:13 CMP #$04
    // Overlapping static entry reached from 0xC17C2E.
    case 0xC17C30: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:14 BEQL @UNKNOWN25
    case 0xC17C31: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:14 BEQL @UNKNOWN25
    case 0xC17C33: {
        Instruction step(cpu, 0x4C, 0x007CEFu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:15 CMP #$05
    case 0xC17C36: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:15 CMP #$05
    // Overlapping static entry reached from 0xC17C36.
    case 0xC17C38: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:16 BEQL @UNKNOWN26
    case 0xC17C39: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:16 BEQL @UNKNOWN26
    case 0xC17C3B: {
        Instruction step(cpu, 0x4C, 0x007CF5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:17 CMP #$10
    case 0xC17C3E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:17 CMP #$10
    // Overlapping static entry reached from 0xC17C3E.
    case 0xC17C40: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:18 BEQL @UNKNOWN27
    case 0xC17C41: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:18 BEQL @UNKNOWN27
    case 0xC17C43: {
        Instruction step(cpu, 0x4C, 0x007CFBu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:19 CMP #$11
    case 0xC17C46: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000011u : 0x000011u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:19 CMP #$11
    // Overlapping static entry reached from 0xC17C46.
    case 0xC17C48: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:20 BEQL @UNKNOWN28
    case 0xC17C49: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:20 BEQL @UNKNOWN28
    case 0xC17C4B: {
        Instruction step(cpu, 0x4C, 0x007D01u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:21 CMP #$14
    case 0xC17C4E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:21 CMP #$14
    // Overlapping static entry reached from 0xC17C4E.
    case 0xC17C50: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:22 BEQL @UNKNOWN29
    case 0xC17C51: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:22 BEQL @UNKNOWN29
    case 0xC17C53: {
        Instruction step(cpu, 0x4C, 0x007D07u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:23 CMP #$16
    case 0xC17C56: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000016u : 0x000016u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:23 CMP #$16
    // Overlapping static entry reached from 0xC17C56.
    case 0xC17C58: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:24 BEQL @UNKNOWN30
    case 0xC17C59: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:24 BEQL @UNKNOWN30
    case 0xC17C5B: {
        Instruction step(cpu, 0x4C, 0x007D30u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:25 CMP #$18
    case 0xC17C5E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:25 CMP #$18
    // Overlapping static entry reached from 0xC17C5E.
    case 0xC17C60: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:26 BEQL @UNKNOWN31
    case 0xC17C61: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:26 BEQL @UNKNOWN31
    case 0xC17C63: {
        Instruction step(cpu, 0x4C, 0x007D36u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:27 CMP #$19
    case 0xC17C66: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:27 CMP #$19
    // Overlapping static entry reached from 0xC17C66.
    case 0xC17C68: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:28 BEQL @UNKNOWN32
    case 0xC17C69: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:28 BEQL @UNKNOWN32
    case 0xC17C6B: {
        Instruction step(cpu, 0x4C, 0x007D3Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:29 CMP #$1A
    case 0xC17C6E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Au : 0x00001Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:29 CMP #$1A
    // Overlapping static entry reached from 0xC17C6E.
    case 0xC17C70: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:30 BEQL @UNKNOWN33
    case 0xC17C71: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:30 BEQL @UNKNOWN33
    case 0xC17C73: {
        Instruction step(cpu, 0x4C, 0x007D42u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:31 CMP #$1B
    case 0xC17C76: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Bu : 0x00001Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:31 CMP #$1B
    // Overlapping static entry reached from 0xC17C76.
    case 0xC17C78: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:32 BEQL @UNKNOWN34
    case 0xC17C79: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:32 BEQL @UNKNOWN34
    case 0xC17C7B: {
        Instruction step(cpu, 0x4C, 0x007D48u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:33 CMP #$1C
    case 0xC17C7E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Cu : 0x00001Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:33 CMP #$1C
    // Overlapping static entry reached from 0xC17C7E.
    case 0xC17C80: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:34 BEQL @UNKNOWN35
    case 0xC17C81: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:34 BEQL @UNKNOWN35
    case 0xC17C83: {
        Instruction step(cpu, 0x4C, 0x007D4Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:35 CMP #$1D
    case 0xC17C86: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Du : 0x00001Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:35 CMP #$1D
    // Overlapping static entry reached from 0xC17C86.
    case 0xC17C88: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:36 BEQL @UNKNOWN36
    case 0xC17C89: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:36 BEQL @UNKNOWN36
    case 0xC17C8B: {
        Instruction step(cpu, 0x4C, 0x007D53u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:37 CMP #$1E
    case 0xC17C8E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Eu : 0x00001Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:37 CMP #$1E
    // Overlapping static entry reached from 0xC17C8E.
    case 0xC17C90: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:38 BEQL @UNKNOWN37
    case 0xC17C91: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:38 BEQL @UNKNOWN37
    case 0xC17C93: {
        Instruction step(cpu, 0x4C, 0x007D58u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:39 CMP #$1F
    case 0xC17C96: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00001Fu : 0x00001Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:39 CMP #$1F
    // Overlapping static entry reached from 0xC17C96.
    case 0xC17C98: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:40 BEQL @UNKNOWN38
    case 0xC17C99: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:40 BEQL @UNKNOWN38
    case 0xC17C9B: {
        Instruction step(cpu, 0x4C, 0x007D68u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:41 CMP #$20
    case 0xC17C9E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:41 CMP #$20
    // Overlapping static entry reached from 0xC17C9E.
    case 0xC17CA0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:42 BEQL @UNKNOWN39
    case 0xC17CA1: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:42 BEQL @UNKNOWN39
    case 0xC17CA3: {
        Instruction step(cpu, 0x4C, 0x007D82u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:43 CMP #$21
    case 0xC17CA6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:43 CMP #$21
    // Overlapping static entry reached from 0xC17CA6.
    case 0xC17CA8: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:44 BEQL @UNKNOWN40
    case 0xC17CA9: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:44 BEQL @UNKNOWN40
    case 0xC17CAB: {
        Instruction step(cpu, 0x4C, 0x007D9Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:45 CMP #$22
    case 0xC17CAE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000022u : 0x000022u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:45 CMP #$22
    // Overlapping static entry reached from 0xC17CAE.
    case 0xC17CB0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:46 BEQL @UNKNOWN41
    case 0xC17CB1: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:46 BEQL @UNKNOWN41
    case 0xC17CB3: {
        Instruction step(cpu, 0x4C, 0x007DA3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:47 CMP #$23
    case 0xC17CB6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000023u : 0x000023u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:47 CMP #$23
    // Overlapping static entry reached from 0xC17CB6.
    case 0xC17CB8: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:48 BEQL @UNKNOWN42
    case 0xC17CB9: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:48 BEQL @UNKNOWN42
    case 0xC17CBB: {
        Instruction step(cpu, 0x4C, 0x007DA8u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:49 CMP #$24
    case 0xC17CBE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000024u : 0x000024u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:49 CMP #$24
    // Overlapping static entry reached from 0xC17CBE.
    case 0xC17CC0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:50 BEQL @UNKNOWN43
    case 0xC17CC1: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:50 BEQL @UNKNOWN43
    case 0xC17CC3: {
        Instruction step(cpu, 0x4C, 0x007DADu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:51 CMP #$25
    case 0xC17CC6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000025u : 0x000025u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:51 CMP #$25
    // Overlapping static entry reached from 0xC17CC6.
    case 0xC17CC8: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:52 BEQL @UNKNOWN44
    case 0xC17CC9: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:52 BEQL @UNKNOWN44
    case 0xC17CCB: {
        Instruction step(cpu, 0x4C, 0x007DB2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:53 CMP #$26
    case 0xC17CCE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000026u : 0x000026u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:53 CMP #$26
    // Overlapping static entry reached from 0xC17CCE.
    case 0xC17CD0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:54 BEQL @UNKNOWN45
    case 0xC17CD1: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:54 BEQL @UNKNOWN45
    case 0xC17CD3: {
        Instruction step(cpu, 0x4C, 0x007DB7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:55 CMP #$27
    case 0xC17CD6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000027u : 0x000027u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:55 CMP #$27
    // Overlapping static entry reached from 0xC17CD6.
    case 0xC17CD8: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:56 BEQL @UNKNOWN46
    case 0xC17CD9: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:56 BEQL @UNKNOWN46
    case 0xC17CDB: {
        Instruction step(cpu, 0x4C, 0x007DBCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:57 CMP #$28
    case 0xC17CDE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000028u : 0x000028u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:57 CMP #$28
    // Overlapping static entry reached from 0xC17CDE.
    case 0xC17CE0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_19.asm:58 BEQL @UNKNOWN47
    case 0xC17CE1: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_19.asm:58 BEQL @UNKNOWN47
    case 0xC17CE3: {
        Instruction step(cpu, 0x4C, 0x007DC1u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:59 JMP @UNKNOWN48
    case 0xC17CE6: {
        Instruction step(cpu, 0x4C, 0x007DC6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:61 LDA #.LOWORD(CC_19_02)
    case 0xC17CE9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000068u : 0x007B68u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:61 LDA #.LOWORD(CC_19_02)
    // Overlapping static entry reached from 0xC17CE9.
    case 0xC17CEB: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:62 JMP @UNKNOWN49
    case 0xC17CEC: {
        Instruction step(cpu, 0x4C, 0x007DC9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:64 JSR UNKNOWN_C11383
    case 0xC17CEF: {
        Instruction step(cpu, 0x20, 0x0019ABu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:65 JMP @UNKNOWN48
    case 0xC17CF2: {
        Instruction step(cpu, 0x4C, 0x007DC6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:67 LDA #.LOWORD(CC_19_05)
    case 0xC17CF5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Bu : 0x00544Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:67 LDA #.LOWORD(CC_19_05)
    // Overlapping static entry reached from 0xC17CF5.
    case 0xC17CF7: {
        Instruction step(cpu, 0x54, 0x00C94Cu, 3u, AddressMode::BlockMove);
        step.move_byte_forward();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:68 JMP @UNKNOWN49
    case 0xC17CF8: {
        Instruction step(cpu, 0x4C, 0x007DC9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:68 JMP @UNKNOWN49
    // Overlapping static entry reached from 0xC17CF7.
    case 0xC17CFA: {
        Instruction step(cpu, 0x7D, 0x0023A9u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:70 LDA #.LOWORD(CC_19_10)
    case 0xC17CFB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000023u : 0x004B23u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:70 LDA #.LOWORD(CC_19_10)
    // Overlapping static entry reached from 0xC17CFB.
    case 0xC17CFD: {
        Instruction step(cpu, 0x4B, 0x000000u, 1u, AddressMode::Implied);
        step.push_program_bank();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:71 JMP @UNKNOWN49
    case 0xC17CFE: {
        Instruction step(cpu, 0x4C, 0x007DC9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:73 LDA #.LOWORD(CC_19_11)
    case 0xC17D01: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CCu : 0x004BCCu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:73 LDA #.LOWORD(CC_19_11)
    // Overlapping static entry reached from 0xC17D01.
    case 0xC17D03: {
        Instruction step(cpu, 0x4B, 0x000000u, 1u, AddressMode::Implied);
        step.push_program_bank();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:74 JMP @UNKNOWN49
    case 0xC17D04: {
        Instruction step(cpu, 0x4C, 0x007DC9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:76 JSR GET_SECONDARY_MEMORY
    case 0xC17D07: {
        Instruction step(cpu, 0x20, 0x000603u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:78 DEC
    case 0xC17D0A: {
        Instruction step(cpu, 0x3A, 0x000000u, 1u, AddressMode::Accumulator);
        step.decrement();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:79 CLC
    case 0xC17D0B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:80 ADC #.LOWORD(GAME_STATE)
    case 0xC17D0C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000A9u : 0x009AA9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:80 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC17D0C.
    case 0xC17D0E: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:81 TAX
    case 0xC17D0F: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:82 SEP #PROC_FLAGS::ACCUM8
    case 0xC17D10: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:83 LDA a:game_state::escargo_express_items,X
    case 0xC17D12: {
        Instruction step(cpu, 0xBD, 0x000053u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/tree_19.asm:90 STORE_INT832 @VIRTUAL06
    case 0xC17D15: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/tree_19.asm:90 STORE_INT832 @VIRTUAL06
    case 0xC17D17: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/tree_19.asm:90 STORE_INT832 @VIRTUAL06
    case 0xC17D19: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/tree_19.asm:90 STORE_INT832 @VIRTUAL06
    case 0xC17D1B: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:91 REP #PROC_FLAGS::ACCUM8
    case 0xC17D1D: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_19.asm:92 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D1F: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_19.asm:92 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D21: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_19.asm:92 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D23: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_19.asm:92 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D25: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:93 JSR SET_WORKING_MEMORY
    case 0xC17D27: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:94 JSR INCREMENT_SECONDARY_MEMORY
    case 0xC17D2A: {
        Instruction step(cpu, 0x20, 0x000631u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:95 JMP @UNKNOWN48
    case 0xC17D2D: {
        Instruction step(cpu, 0x4C, 0x007DC6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:97 LDA #.LOWORD(CC_19_16)
    case 0xC17D30: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E3u : 0x0053E3u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:97 LDA #.LOWORD(CC_19_16)
    // Overlapping static entry reached from 0xC17D30.
    case 0xC17D32: {
        Instruction step(cpu, 0x53, 0x00004Cu, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:98 JMP @UNKNOWN49
    case 0xC17D33: {
        Instruction step(cpu, 0x4C, 0x007DC9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:98 JMP @UNKNOWN49
    // Overlapping static entry reached from 0xC17D32.
    case 0xC17D34: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00007Du : 0x00A97Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:100 LDA #.LOWORD(CC_19_18)
    case 0xC17D36: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00003Eu : 0x00563Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:100 LDA #.LOWORD(CC_19_18)
    // Overlapping static entry reached from 0xC17D34.
    case 0xC17D37: {
        Instruction step(cpu, 0x3E, 0x004C56u, 3u, AddressMode::AbsoluteIndexedX);
        step.rotate_left();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:100 LDA #.LOWORD(CC_19_18)
    // Overlapping static entry reached from 0xC17D36.
    case 0xC17D38: {
        Instruction step(cpu, 0x56, 0x00004Cu, 2u, AddressMode::DirectPageIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:101 JMP @UNKNOWN49
    case 0xC17D39: {
        Instruction step(cpu, 0x4C, 0x007DC9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:101 JMP @UNKNOWN49
    // Overlapping static entry reached from 0xC17D38.
    case 0xC17D3A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00007Du : 0x00A97Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:103 LDA #.LOWORD(CC_19_19)
    case 0xC17D3C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FAu : 0x005BFAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:103 LDA #.LOWORD(CC_19_19)
    // Overlapping static entry reached from 0xC17D3A.
    case 0xC17D3D: {
        Instruction step(cpu, 0xFA, 0x000000u, 1u, AddressMode::Implied);
        step.pull_x();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:103 LDA #.LOWORD(CC_19_19)
    // Overlapping static entry reached from 0xC17D3C.
    case 0xC17D3E: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:104 JMP @UNKNOWN49
    case 0xC17D3F: {
        Instruction step(cpu, 0x4C, 0x007DC9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:106 LDA #.LOWORD(CC_19_1A)
    case 0xC17D42: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000089u : 0x005D89u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:106 LDA #.LOWORD(CC_19_1A)
    // Overlapping static entry reached from 0xC17D42.
    case 0xC17D44: {
        Instruction step(cpu, 0x5D, 0x00C94Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:107 JMP @UNKNOWN49
    case 0xC17D45: {
        Instruction step(cpu, 0x4C, 0x007DC9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:107 JMP @UNKNOWN49
    // Overlapping static entry reached from 0xC17D44.
    case 0xC17D47: {
        Instruction step(cpu, 0x7D, 0x00B5A9u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:109 LDA #.LOWORD(CC_19_1B)
    case 0xC17D48: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B5u : 0x005EB5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:109 LDA #.LOWORD(CC_19_1B)
    // Overlapping static entry reached from 0xC17D48.
    case 0xC17D4A: {
        Instruction step(cpu, 0x5E, 0x00C94Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:110 JMP @UNKNOWN49
    case 0xC17D4B: {
        Instruction step(cpu, 0x4C, 0x007DC9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:110 JMP @UNKNOWN49
    // Overlapping static entry reached from 0xC17D4A.
    case 0xC17D4D: {
        Instruction step(cpu, 0x7D, 0x0076A9u, 3u, AddressMode::AbsoluteIndexedX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:112 LDA #.LOWORD(CC_19_1C)
    case 0xC17D4E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000076u : 0x006276u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:112 LDA #.LOWORD(CC_19_1C)
    // Overlapping static entry reached from 0xC17D4E.
    case 0xC17D50: {
        Instruction step(cpu, 0x62, 0x007680u, 3u, AddressMode::Relative16);
        step.push_effective_relative();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:113 BRA @UNKNOWN49
    case 0xC17D51: {
        Instruction step(cpu, 0x80, 0x000076u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:115 LDA #.LOWORD(CC_19_1D)
    case 0xC17D53: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FFu : 0x0062FFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:115 LDA #.LOWORD(CC_19_1D)
    // Overlapping static entry reached from 0xC17D53.
    case 0xC17D55: {
        Instruction step(cpu, 0x62, 0x007180u, 3u, AddressMode::Relative16);
        step.push_effective_relative();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:116 BRA @UNKNOWN49
    case 0xC17D56: {
        Instruction step(cpu, 0x80, 0x000071u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:118 JSR UNKNOWN_C1AD26
    case 0xC17D58: {
        Instruction step(cpu, 0x20, 0x00ABE2u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_19.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D5B: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_19.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D5D: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_19.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D5F: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_19.asm:119 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D61: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:120 JSR SET_WORKING_MEMORY
    case 0xC17D63: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:121 BRA @UNKNOWN48
    case 0xC17D66: {
        Instruction step(cpu, 0x80, 0x00005Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:123 JSR UNKNOWN_C1AD02
    case 0xC17D68: {
        Instruction step(cpu, 0x20, 0x00ABBEu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/tree_19.asm:124 STORE_INT832 @VIRTUAL06
    case 0xC17D6B: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/tree_19.asm:124 STORE_INT832 @VIRTUAL06
    case 0xC17D6D: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/tree_19.asm:124 STORE_INT832 @VIRTUAL06
    case 0xC17D6F: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/tree_19.asm:124 STORE_INT832 @VIRTUAL06
    case 0xC17D71: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:125 REP #PROC_FLAGS::ACCUM8
    case 0xC17D73: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_19.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D75: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_19.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D77: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_19.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D79: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_19.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D7B: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:127 JSR SET_WORKING_MEMORY
    case 0xC17D7D: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:128 BRA @UNKNOWN48
    case 0xC17D80: {
        Instruction step(cpu, 0x80, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:130 SEP #PROC_FLAGS::ACCUM8
    case 0xC17D82: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/tree_19.asm:131 MOVE_INT832 GAME_STATE+game_state::player_controlled_party_count, @VIRTUAL06
    case 0xC17D84: {
        Instruction step(cpu, 0xAD, 0x009B55u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/tree_19.asm:131 MOVE_INT832 GAME_STATE+game_state::player_controlled_party_count, @VIRTUAL06
    case 0xC17D87: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/tree_19.asm:131 MOVE_INT832 GAME_STATE+game_state::player_controlled_party_count, @VIRTUAL06
    case 0xC17D89: {
        Instruction step(cpu, 0x64, 0x000007u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/tree_19.asm:131 MOVE_INT832 GAME_STATE+game_state::player_controlled_party_count, @VIRTUAL06
    case 0xC17D8B: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/tree_19.asm:131 MOVE_INT832 GAME_STATE+game_state::player_controlled_party_count, @VIRTUAL06
    case 0xC17D8D: {
        Instruction step(cpu, 0x64, 0x000009u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:132 REP #PROC_FLAGS::ACCUM8
    case 0xC17D8F: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_19.asm:133 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D91: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_19.asm:133 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D93: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_19.asm:133 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D95: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_19.asm:133 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17D97: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:134 JSR SET_WORKING_MEMORY
    case 0xC17D99: {
        Instruction step(cpu, 0x20, 0x000660u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:135 BRA @UNKNOWN48
    case 0xC17D9C: {
        Instruction step(cpu, 0x80, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:137 LDA #.LOWORD(CC_19_21)
    case 0xC17D9E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C2u : 0x0063C2u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:137 LDA #.LOWORD(CC_19_21)
    // Overlapping static entry reached from 0xC17D9E.
    case 0xC17DA0: {
        Instruction step(cpu, 0x63, 0x000080u, 2u, AddressMode::StackRelative);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:138 BRA @UNKNOWN49
    case 0xC17DA1: {
        Instruction step(cpu, 0x80, 0x000026u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:138 BRA @UNKNOWN49
    // Overlapping static entry reached from 0xC17DA0.
    case 0xC17DA2: {
        Instruction step(cpu, 0x26, 0x0000A9u, 2u, AddressMode::DirectPage);
        step.rotate_left();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:140 LDA #.LOWORD(CC_19_22)
    case 0xC17DA3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Fu : 0x006B1Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:140 LDA #.LOWORD(CC_19_22)
    // Overlapping static entry reached from 0xC17DA2.
    case 0xC17DA4: {
        Instruction step(cpu, 0x1F, 0x21806Bu, 4u, AddressMode::LongIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:140 LDA #.LOWORD(CC_19_22)
    // Overlapping static entry reached from 0xC17DA3.
    case 0xC17DA5: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:141 BRA @UNKNOWN49
    case 0xC17DA6: {
        Instruction step(cpu, 0x80, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:143 LDA #.LOWORD(CC_19_23)
    case 0xC17DA8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C6u : 0x006BC6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:143 LDA #.LOWORD(CC_19_23)
    // Overlapping static entry reached from 0xC17DA8.
    case 0xC17DAA: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:144 BRA @UNKNOWN49
    case 0xC17DAB: {
        Instruction step(cpu, 0x80, 0x00001Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:146 LDA #.LOWORD(CC_19_24)
    case 0xC17DAD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FAu : 0x006CFAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:146 LDA #.LOWORD(CC_19_24)
    // Overlapping static entry reached from 0xC17DAD.
    case 0xC17DAF: {
        Instruction step(cpu, 0x6C, 0x001780u, 3u, AddressMode::AbsoluteIndirect);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:147 BRA @UNKNOWN49
    case 0xC17DB0: {
        Instruction step(cpu, 0x80, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:149 LDA #.LOWORD(CC_19_25)
    case 0xC17DB2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x00721Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:149 LDA #.LOWORD(CC_19_25)
    // Overlapping static entry reached from 0xC17DB2.
    case 0xC17DB4: {
        Instruction step(cpu, 0x72, 0x000080u, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:150 BRA @UNKNOWN49
    case 0xC17DB5: {
        Instruction step(cpu, 0x80, 0x000012u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:150 BRA @UNKNOWN49
    // Overlapping static entry reached from 0xC17DB4.
    case 0xC17DB6: {
        Instruction step(cpu, 0x12, 0x0000A9u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:152 LDA #.LOWORD(CC_19_26)
    case 0xC17DB7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000B6u : 0x0072B6u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:152 LDA #.LOWORD(CC_19_26)
    // Overlapping static entry reached from 0xC17DB6.
    case 0xC17DB8: {
        Instruction step(cpu, 0xB6, 0x000072u, 2u, AddressMode::DirectPageIndexedY);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:152 LDA #.LOWORD(CC_19_26)
    // Overlapping static entry reached from 0xC17DB7.
    case 0xC17DB9: {
        Instruction step(cpu, 0x72, 0x000080u, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:153 BRA @UNKNOWN49
    case 0xC17DBA: {
        Instruction step(cpu, 0x80, 0x00000Du, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:153 BRA @UNKNOWN49
    // Overlapping static entry reached from 0xC17DB9.
    case 0xC17DBB: {
        Instruction step(cpu, 0x0D, 0x00EBA9u, 3u, AddressMode::Absolute);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:155 LDA #.LOWORD(CC_19_27)
    case 0xC17DBC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EBu : 0x0079EBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:155 LDA #.LOWORD(CC_19_27)
    // Overlapping static entry reached from 0xC17DBC.
    case 0xC17DBE: {
        Instruction step(cpu, 0x79, 0x000880u, 3u, AddressMode::AbsoluteIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:156 BRA @UNKNOWN49
    case 0xC17DBF: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:158 LDA #.LOWORD(CC_19_28)
    case 0xC17DC1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000019u : 0x004C19u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:158 LDA #.LOWORD(CC_19_28)
    // Overlapping static entry reached from 0xC17DC1.
    case 0xC17DC3: {
        Instruction step(cpu, 0x4C, 0x000380u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:159 BRA @UNKNOWN49
    case 0xC17DC4: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:161 LDA #0
    case 0xC17DC6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_19.asm:161 LDA #0
    // Overlapping static entry reached from 0xC17DC6.
    case 0xC17DC8: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/tree_19.asm:163 END_C_FUNCTION
    case 0xC17DC9: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/tree_19.asm:163 END_C_FUNCTION
    case 0xC17DCA: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
