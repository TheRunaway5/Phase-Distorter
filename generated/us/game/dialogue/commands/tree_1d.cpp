// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/text/ccs/tree_1D.asm
bool resume_text_ccs_tree_1d(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/tree_1D.asm:3 BEGIN_C_FUNCTION
    case 0xC17F11: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/tree_1D.asm:11 END_STACK_VARS
    case 0xC17F13: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/tree_1D.asm:11 END_STACK_VARS
    case 0xC17F14: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/tree_1D.asm:11 END_STACK_VARS
    case 0xC17F15: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1D.asm:11 END_STACK_VARS
    case 0xC17F16: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EAu : 0x00FFEAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/tree_1D.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC17F16.
    case 0xC17F18: {
        Instruction step(cpu, 0xFF, 0x8A685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/tree_1D.asm:11 END_STACK_VARS
    case 0xC17F19: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/tree_1D.asm:11 END_STACK_VARS
    case 0xC17F1A: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:12 TXA
    case 0xC17F1B: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:13 BEQL @UNKNOWN30
    case 0xC17F1C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:13 BEQL @UNKNOWN30
    case 0xC17F1E: {
        Instruction step(cpu, 0x4C, 0x00800Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:14 CMP #$01
    case 0xC17F21: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:14 CMP #$01
    // Overlapping static entry reached from 0xC17F21.
    case 0xC17F23: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:15 BEQL @UNKNOWN31
    case 0xC17F24: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:15 BEQL @UNKNOWN31
    case 0xC17F26: {
        Instruction step(cpu, 0x4C, 0x008012u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:16 CMP #$02
    case 0xC17F29: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:16 CMP #$02
    // Overlapping static entry reached from 0xC17F29.
    case 0xC17F2B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:17 BEQL @UNKNOWN32
    case 0xC17F2C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:17 BEQL @UNKNOWN32
    case 0xC17F2E: {
        Instruction step(cpu, 0x4C, 0x008018u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:18 CMP #$03
    case 0xC17F31: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:18 CMP #$03
    // Overlapping static entry reached from 0xC17F31.
    case 0xC17F33: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:19 BEQL @UNKNOWN33
    case 0xC17F34: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:19 BEQL @UNKNOWN33
    case 0xC17F36: {
        Instruction step(cpu, 0x4C, 0x00801Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:20 CMP #$04
    case 0xC17F39: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:20 CMP #$04
    // Overlapping static entry reached from 0xC17F39.
    case 0xC17F3B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:21 BEQL @UNKNOWN34
    case 0xC17F3C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:21 BEQL @UNKNOWN34
    case 0xC17F3E: {
        Instruction step(cpu, 0x4C, 0x008024u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:22 CMP #$05
    case 0xC17F41: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:22 CMP #$05
    // Overlapping static entry reached from 0xC17F41.
    case 0xC17F43: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:23 BEQL @UNKNOWN35
    case 0xC17F44: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:23 BEQL @UNKNOWN35
    case 0xC17F46: {
        Instruction step(cpu, 0x4C, 0x00802Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:24 CMP #$06
    case 0xC17F49: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:24 CMP #$06
    // Overlapping static entry reached from 0xC17F49.
    case 0xC17F4B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:25 BEQL @UNKNOWN36
    case 0xC17F4C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:25 BEQL @UNKNOWN36
    case 0xC17F4E: {
        Instruction step(cpu, 0x4C, 0x008030u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:26 CMP #$07
    case 0xC17F51: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:26 CMP #$07
    // Overlapping static entry reached from 0xC17F51.
    case 0xC17F53: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:27 BEQL @UNKNOWN37
    case 0xC17F54: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:27 BEQL @UNKNOWN37
    case 0xC17F56: {
        Instruction step(cpu, 0x4C, 0x008036u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:28 CMP #$08
    case 0xC17F59: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:28 CMP #$08
    // Overlapping static entry reached from 0xC17F59.
    case 0xC17F5B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:29 BEQL @UNKNOWN38
    case 0xC17F5C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:29 BEQL @UNKNOWN38
    case 0xC17F5E: {
        Instruction step(cpu, 0x4C, 0x00803Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:30 CMP #$09
    case 0xC17F61: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:30 CMP #$09
    // Overlapping static entry reached from 0xC17F61.
    case 0xC17F63: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:31 BEQL @UNKNOWN39
    case 0xC17F64: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:31 BEQL @UNKNOWN39
    case 0xC17F66: {
        Instruction step(cpu, 0x4C, 0x008042u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:32 CMP #$0A
    case 0xC17F69: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:32 CMP #$0A
    // Overlapping static entry reached from 0xC17F69.
    case 0xC17F6B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:33 BEQL @UNKNOWN40
    case 0xC17F6C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:33 BEQL @UNKNOWN40
    case 0xC17F6E: {
        Instruction step(cpu, 0x4C, 0x008048u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:34 CMP #$0B
    case 0xC17F71: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:34 CMP #$0B
    // Overlapping static entry reached from 0xC17F71.
    case 0xC17F73: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:35 BEQL @UNKNOWN41
    case 0xC17F74: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:35 BEQL @UNKNOWN41
    case 0xC17F76: {
        Instruction step(cpu, 0x4C, 0x00804Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:36 CMP #$0C
    case 0xC17F79: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:36 CMP #$0C
    // Overlapping static entry reached from 0xC17F79.
    case 0xC17F7B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:37 BEQL @UNKNOWN42
    case 0xC17F7C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:37 BEQL @UNKNOWN42
    case 0xC17F7E: {
        Instruction step(cpu, 0x4C, 0x008054u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:38 CMP #$0D
    case 0xC17F81: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:38 CMP #$0D
    // Overlapping static entry reached from 0xC17F81.
    case 0xC17F83: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:39 BEQL @UNKNOWN43
    case 0xC17F84: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:39 BEQL @UNKNOWN43
    case 0xC17F86: {
        Instruction step(cpu, 0x4C, 0x00805Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:40 CMP #$0E
    case 0xC17F89: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:40 CMP #$0E
    // Overlapping static entry reached from 0xC17F89.
    case 0xC17F8B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:41 BEQL @UNKNOWN44
    case 0xC17F8C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:41 BEQL @UNKNOWN44
    case 0xC17F8E: {
        Instruction step(cpu, 0x4C, 0x008060u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:42 CMP #$0F
    case 0xC17F91: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:42 CMP #$0F
    // Overlapping static entry reached from 0xC17F91.
    case 0xC17F93: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:43 BEQL @UNKNOWN45
    case 0xC17F94: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:43 BEQL @UNKNOWN45
    case 0xC17F96: {
        Instruction step(cpu, 0x4C, 0x008066u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:44 CMP #$10
    case 0xC17F99: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:44 CMP #$10
    // Overlapping static entry reached from 0xC17F99.
    case 0xC17F9B: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:45 BEQL @UNKNOWN46
    case 0xC17F9C: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:45 BEQL @UNKNOWN46
    case 0xC17F9E: {
        Instruction step(cpu, 0x4C, 0x00806Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:46 CMP #$11
    case 0xC17FA1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000011u : 0x000011u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:46 CMP #$11
    // Overlapping static entry reached from 0xC17FA1.
    case 0xC17FA3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:47 BEQL @UNKNOWN47
    case 0xC17FA4: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:47 BEQL @UNKNOWN47
    case 0xC17FA6: {
        Instruction step(cpu, 0x4C, 0x008072u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:48 CMP #$12
    case 0xC17FA9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000012u : 0x000012u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:48 CMP #$12
    // Overlapping static entry reached from 0xC17FA9.
    case 0xC17FAB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:49 BEQL @UNKNOWN48
    case 0xC17FAC: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:49 BEQL @UNKNOWN48
    case 0xC17FAE: {
        Instruction step(cpu, 0x4C, 0x008078u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:50 CMP #$13
    case 0xC17FB1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000013u : 0x000013u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:50 CMP #$13
    // Overlapping static entry reached from 0xC17FB1.
    case 0xC17FB3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:51 BEQL @UNKNOWN49
    case 0xC17FB4: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:51 BEQL @UNKNOWN49
    case 0xC17FB6: {
        Instruction step(cpu, 0x4C, 0x00807Eu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:52 CMP #$14
    case 0xC17FB9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000014u : 0x000014u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:52 CMP #$14
    // Overlapping static entry reached from 0xC17FB9.
    case 0xC17FBB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:53 BEQL @UNKNOWN50
    case 0xC17FBC: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:53 BEQL @UNKNOWN50
    case 0xC17FBE: {
        Instruction step(cpu, 0x4C, 0x008084u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:54 CMP #$15
    case 0xC17FC1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000015u : 0x000015u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:54 CMP #$15
    // Overlapping static entry reached from 0xC17FC1.
    case 0xC17FC3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:55 BEQL @UNKNOWN51
    case 0xC17FC4: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:55 BEQL @UNKNOWN51
    case 0xC17FC6: {
        Instruction step(cpu, 0x4C, 0x00808Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:56 CMP #$17
    case 0xC17FC9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000017u : 0x000017u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:56 CMP #$17
    // Overlapping static entry reached from 0xC17FC9.
    case 0xC17FCB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:57 BEQL @UNKNOWN52
    case 0xC17FCC: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:57 BEQL @UNKNOWN52
    case 0xC17FCE: {
        Instruction step(cpu, 0x4C, 0x008090u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:58 CMP #$18
    case 0xC17FD1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000018u : 0x000018u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:58 CMP #$18
    // Overlapping static entry reached from 0xC17FD1.
    case 0xC17FD3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:59 BEQL @UNKNOWN53
    case 0xC17FD4: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:59 BEQL @UNKNOWN53
    case 0xC17FD6: {
        Instruction step(cpu, 0x4C, 0x008096u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:60 CMP #$19
    case 0xC17FD9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000019u : 0x000019u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:60 CMP #$19
    // Overlapping static entry reached from 0xC17FD9.
    case 0xC17FDB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:61 BEQL @UNKNOWN54
    case 0xC17FDC: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:61 BEQL @UNKNOWN54
    case 0xC17FDE: {
        Instruction step(cpu, 0x4C, 0x00809Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:62 CMP #$20
    case 0xC17FE1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:62 CMP #$20
    // Overlapping static entry reached from 0xC17FE1.
    case 0xC17FE3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:63 BEQL @UNKNOWN55
    case 0xC17FE4: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:63 BEQL @UNKNOWN55
    case 0xC17FE6: {
        Instruction step(cpu, 0x4C, 0x0080A2u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:64 CMP #$21
    case 0xC17FE9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000021u : 0x000021u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:64 CMP #$21
    // Overlapping static entry reached from 0xC17FE9.
    case 0xC17FEB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:65 BEQL @UNKNOWN58
    case 0xC17FEC: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:65 BEQL @UNKNOWN58
    case 0xC17FEE: {
        Instruction step(cpu, 0x4C, 0x0080D7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:66 CMP #$22
    case 0xC17FF1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000022u : 0x000022u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:66 CMP #$22
    // Overlapping static entry reached from 0xC17FF1.
    case 0xC17FF3: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:67 BEQL @UNKNOWN59
    case 0xC17FF4: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:67 BEQL @UNKNOWN59
    case 0xC17FF6: {
        Instruction step(cpu, 0x4C, 0x0080DCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:68 CMP #$23
    case 0xC17FF9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000023u : 0x000023u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:68 CMP #$23
    // Overlapping static entry reached from 0xC17FF9.
    case 0xC17FFB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:69 BEQL @UNKNOWN62
    case 0xC17FFC: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:69 BEQL @UNKNOWN62
    case 0xC17FFE: {
        Instruction step(cpu, 0x4C, 0x008110u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:70 CMP #$24
    case 0xC18001: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000024u : 0x000024u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:70 CMP #$24
    // Overlapping static entry reached from 0xC18001.
    case 0xC18003: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/ccs/tree_1D.asm:71 BEQL @UNKNOWN63
    case 0xC18004: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/ccs/tree_1D.asm:71 BEQL @UNKNOWN63
    case 0xC18006: {
        Instruction step(cpu, 0x4C, 0x008115u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:72 JMP @UNKNOWN64
    case 0xC18009: {
        Instruction step(cpu, 0x4C, 0x00811Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:74 LDA #.LOWORD(CC_1D_00)
    case 0xC1800C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00001Eu : 0x004C1Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:74 LDA #.LOWORD(CC_1D_00)
    // Overlapping static entry reached from 0xC1800C.
    case 0xC1800E: {
        Instruction step(cpu, 0x4C, 0x001D4Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:75 JMP @UNKNOWN65
    case 0xC1800F: {
        Instruction step(cpu, 0x4C, 0x00811Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:77 LDA #.LOWORD(CC_1D_01)
    case 0xC18012: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000086u : 0x004C86u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:77 LDA #.LOWORD(CC_1D_01)
    // Overlapping static entry reached from 0xC18012.
    case 0xC18014: {
        Instruction step(cpu, 0x4C, 0x001D4Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:78 JMP @UNKNOWN65
    case 0xC18015: {
        Instruction step(cpu, 0x4C, 0x00811Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:80 LDA #.LOWORD(CC_1D_02)
    case 0xC18018: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000ACu : 0x0048ACu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:80 LDA #.LOWORD(CC_1D_02)
    // Overlapping static entry reached from 0xC18018.
    case 0xC1801A: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:81 JMP @UNKNOWN65
    case 0xC1801B: {
        Instruction step(cpu, 0x4C, 0x00811Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:83 LDA #.LOWORD(CC_1D_03)
    case 0xC1801E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000EEu : 0x004CEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:83 LDA #.LOWORD(CC_1D_03)
    // Overlapping static entry reached from 0xC1801E.
    case 0xC18020: {
        Instruction step(cpu, 0x4C, 0x001D4Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:84 JMP @UNKNOWN65
    case 0xC18021: {
        Instruction step(cpu, 0x4C, 0x00811Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:86 LDA #.LOWORD(CC_1D_04)
    case 0xC18024: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000024u : 0x004D24u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:86 LDA #.LOWORD(CC_1D_04)
    // Overlapping static entry reached from 0xC18024.
    case 0xC18026: {
        Instruction step(cpu, 0x4D, 0x001D4Cu, 3u, AddressMode::Absolute);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:87 JMP @UNKNOWN65
    case 0xC18027: {
        Instruction step(cpu, 0x4C, 0x00811Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:87 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18026.
    case 0xC18029: {
        Instruction step(cpu, 0x81, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:89 LDA #.LOWORD(CC_1D_05)
    case 0xC1802A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000093u : 0x004D93u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:89 LDA #.LOWORD(CC_1D_05)
    // Overlapping static entry reached from 0xC18029.
    case 0xC1802B: {
        Instruction step(cpu, 0x93, 0x00004Du, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:89 LDA #.LOWORD(CC_1D_05)
    // Overlapping static entry reached from 0xC1802A.
    case 0xC1802C: {
        Instruction step(cpu, 0x4D, 0x001D4Cu, 3u, AddressMode::Absolute);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:90 JMP @UNKNOWN65
    case 0xC1802D: {
        Instruction step(cpu, 0x4C, 0x00811Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:90 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC1802C.
    case 0xC1802F: {
        Instruction step(cpu, 0x81, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:92 LDA #.LOWORD(CC_1D_06)
    case 0xC18030: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000085u : 0x005C85u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:92 LDA #.LOWORD(CC_1D_06)
    // Overlapping static entry reached from 0xC1802F.
    case 0xC18031: {
        Instruction step(cpu, 0x85, 0x00005Cu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:92 LDA #.LOWORD(CC_1D_06)
    // Overlapping static entry reached from 0xC18030.
    case 0xC18032: {
        Instruction step(cpu, 0x5C, 0x811D4Cu, 4u, AddressMode::Long);
        step.jump_long();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:93 JMP @UNKNOWN65
    case 0xC18033: {
        Instruction step(cpu, 0x4C, 0x00811Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:95 LDA #.LOWORD(CC_1D_07)
    case 0xC18036: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00006Bu : 0x005D6Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:95 LDA #.LOWORD(CC_1D_07)
    // Overlapping static entry reached from 0xC18036.
    case 0xC18038: {
        Instruction step(cpu, 0x5D, 0x001D4Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:96 JMP @UNKNOWN65
    case 0xC18039: {
        Instruction step(cpu, 0x4C, 0x00811Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:96 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18038.
    case 0xC1803B: {
        Instruction step(cpu, 0x81, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:98 LDA #.LOWORD(CC_1D_08)
    case 0xC1803C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E9u : 0x0048E9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:98 LDA #.LOWORD(CC_1D_08)
    // Overlapping static entry reached from 0xC1803B.
    case 0xC1803D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xE9, narrow ? 0x000048u : 0x004C48u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:98 LDA #.LOWORD(CC_1D_08)
    // Overlapping static entry reached from 0xC1803C.
    case 0xC1803E: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:99 JMP @UNKNOWN65
    case 0xC1803F: {
        Instruction step(cpu, 0x4C, 0x00811Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:99 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC1803D.
    case 0xC18040: {
        Instruction step(cpu, 0x1D, 0x00A981u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:101 LDA #.LOWORD(CC_1D_09)
    case 0xC18042: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00004Au : 0x00494Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:101 LDA #.LOWORD(CC_1D_09)
    // Overlapping static entry reached from 0xC18040.
    case 0xC18043: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:101 LDA #.LOWORD(CC_1D_09)
    // Overlapping static entry reached from 0xC18042.
    case 0xC18044: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x00004Cu : 0x001D4Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:102 JMP @UNKNOWN65
    case 0xC18045: {
        Instruction step(cpu, 0x4C, 0x00811Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:102 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18044.
    case 0xC18046: {
        Instruction step(cpu, 0x1D, 0x00A981u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:102 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18044.
    case 0xC18047: {
        Instruction step(cpu, 0x81, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:104 LDA #.LOWORD(CC_1D_0A)
    case 0xC18048: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F8u : 0x004EF8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:104 LDA #.LOWORD(CC_1D_0A)
    // Overlapping static entry reached from 0xC18047.
    case 0xC18049: {
        Instruction step(cpu, 0xF8, 0x000000u, 1u, AddressMode::Implied);
        step.set_decimal();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:104 LDA #.LOWORD(CC_1D_0A)
    // Overlapping static entry reached from 0xC18048.
    case 0xC1804A: {
        Instruction step(cpu, 0x4E, 0x001D4Cu, 3u, AddressMode::Absolute);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:105 JMP @UNKNOWN65
    case 0xC1804B: {
        Instruction step(cpu, 0x4C, 0x00811Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:105 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC1804A.
    case 0xC1804D: {
        Instruction step(cpu, 0x81, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:107 LDA #.LOWORD(CC_1D_0B)
    case 0xC1804E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000033u : 0x004F33u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:107 LDA #.LOWORD(CC_1D_0B)
    // Overlapping static entry reached from 0xC1804D.
    case 0xC1804F: {
        Instruction step(cpu, 0x33, 0x00004Fu, 2u, AddressMode::StackRelativeIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:107 LDA #.LOWORD(CC_1D_0B)
    // Overlapping static entry reached from 0xC1804E.
    case 0xC18050: {
        Instruction step(cpu, 0x4F, 0x811D4Cu, 4u, AddressMode::Long);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:108 JMP @UNKNOWN65
    case 0xC18051: {
        Instruction step(cpu, 0x4C, 0x00811Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:110 LDA #.LOWORD(CC_1D_0C)
    case 0xC18054: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000058u : 0x007058u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:110 LDA #.LOWORD(CC_1D_0C)
    // Overlapping static entry reached from 0xC18054.
    case 0xC18056: {
        Instruction step(cpu, 0x70, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_if_overflow_set();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:111 JMP @UNKNOWN65
    case 0xC18057: {
        Instruction step(cpu, 0x4C, 0x00811Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:111 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18056.
    case 0xC18058: {
        Instruction step(cpu, 0x1D, 0x00A981u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:113 LDA #.LOWORD(CC_1D_0D)
    case 0xC1805A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000E4u : 0x0050E4u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:113 LDA #.LOWORD(CC_1D_0D)
    // Overlapping static entry reached from 0xC18058.
    case 0xC1805B: {
        Instruction step(cpu, 0xE4, 0x000050u, 2u, AddressMode::DirectPage);
        step.compare_x();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:113 LDA #.LOWORD(CC_1D_0D)
    // Overlapping static entry reached from 0xC1805A.
    case 0xC1805C: {
        Instruction step(cpu, 0x50, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_if_overflow_clear();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:114 JMP @UNKNOWN65
    case 0xC1805D: {
        Instruction step(cpu, 0x4C, 0x00811Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:114 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC1805C.
    case 0xC1805E: {
        Instruction step(cpu, 0x1D, 0x00A981u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:116 LDA #.LOWORD(CC_1D_0E)
    case 0xC18060: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000059u : 0x005659u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:116 LDA #.LOWORD(CC_1D_0E)
    // Overlapping static entry reached from 0xC1805E.
    case 0xC18061: {
        Instruction step(cpu, 0x59, 0x004C56u, 3u, AddressMode::AbsoluteIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:116 LDA #.LOWORD(CC_1D_0E)
    // Overlapping static entry reached from 0xC18060.
    case 0xC18062: {
        Instruction step(cpu, 0x56, 0x00004Cu, 2u, AddressMode::DirectPageIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:117 JMP @UNKNOWN65
    case 0xC18063: {
        Instruction step(cpu, 0x4C, 0x00811Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:117 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18062.
    case 0xC18064: {
        Instruction step(cpu, 0x1D, 0x00A981u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:119 LDA #.LOWORD(CC_1D_0F)
    case 0xC18066: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000DBu : 0x0056DBu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:119 LDA #.LOWORD(CC_1D_0F)
    // Overlapping static entry reached from 0xC18064.
    case 0xC18067: {
        Instruction step(cpu, 0xDB, 0x000000u, 1u, AddressMode::Implied);
        step.stop();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:119 LDA #.LOWORD(CC_1D_0F)
    // Overlapping static entry reached from 0xC18066.
    case 0xC18068: {
        Instruction step(cpu, 0x56, 0x00004Cu, 2u, AddressMode::DirectPageIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:120 JMP @UNKNOWN65
    case 0xC18069: {
        Instruction step(cpu, 0x4C, 0x00811Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:120 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18068.
    case 0xC1806A: {
        Instruction step(cpu, 0x1D, 0x00A981u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:122 LDA #.LOWORD(CC_1D_10)
    case 0xC1806C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00005Du : 0x00575Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:122 LDA #.LOWORD(CC_1D_10)
    // Overlapping static entry reached from 0xC1806A.
    case 0xC1806D: {
        Instruction step(cpu, 0x5D, 0x004C57u, 3u, AddressMode::AbsoluteIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:122 LDA #.LOWORD(CC_1D_10)
    // Overlapping static entry reached from 0xC1806C.
    case 0xC1806E: {
        Instruction step(cpu, 0x57, 0x00004Cu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:123 JMP @UNKNOWN65
    case 0xC1806F: {
        Instruction step(cpu, 0x4C, 0x00811Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:123 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC1806E.
    case 0xC18070: {
        Instruction step(cpu, 0x1D, 0x00A981u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:125 LDA #.LOWORD(CC_1D_11)
    case 0xC18072: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CDu : 0x0057CDu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:125 LDA #.LOWORD(CC_1D_11)
    // Overlapping static entry reached from 0xC18070.
    case 0xC18073: {
        Instruction step(cpu, 0xCD, 0x004C57u, 3u, AddressMode::Absolute);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:125 LDA #.LOWORD(CC_1D_11)
    // Overlapping static entry reached from 0xC18072.
    case 0xC18074: {
        Instruction step(cpu, 0x57, 0x00004Cu, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:126 JMP @UNKNOWN65
    case 0xC18075: {
        Instruction step(cpu, 0x4C, 0x00811Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:126 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18074.
    case 0xC18076: {
        Instruction step(cpu, 0x1D, 0x00A981u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:128 LDA #.LOWORD(CC_1D_12)
    case 0xC18078: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000A5u : 0x0058A5u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:128 LDA #.LOWORD(CC_1D_12)
    // Overlapping static entry reached from 0xC18076.
    case 0xC18079: {
        Instruction step(cpu, 0xA5, 0x000058u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:128 LDA #.LOWORD(CC_1D_12)
    // Overlapping static entry reached from 0xC18078.
    case 0xC1807A: {
        Instruction step(cpu, 0x58, 0x000000u, 1u, AddressMode::Implied);
        step.enable_interrupts();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:129 JMP @UNKNOWN65
    case 0xC1807B: {
        Instruction step(cpu, 0x4C, 0x00811Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:131 LDA #.LOWORD(CC_1D_13)
    case 0xC1807E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000FEu : 0x0058FEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:131 LDA #.LOWORD(CC_1D_13)
    // Overlapping static entry reached from 0xC1807E.
    case 0xC18080: {
        Instruction step(cpu, 0x58, 0x000000u, 1u, AddressMode::Implied);
        step.enable_interrupts();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:132 JMP @UNKNOWN65
    case 0xC18081: {
        Instruction step(cpu, 0x4C, 0x00811Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:134 LDA #.LOWORD(CC_1D_14)
    case 0xC18084: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F9u : 0x0059F9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:134 LDA #.LOWORD(CC_1D_14)
    // Overlapping static entry reached from 0xC18084.
    case 0xC18086: {
        Instruction step(cpu, 0x59, 0x001D4Cu, 3u, AddressMode::AbsoluteIndexedY);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:135 JMP @UNKNOWN65
    case 0xC18087: {
        Instruction step(cpu, 0x4C, 0x00811Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:135 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18086.
    case 0xC18089: {
        Instruction step(cpu, 0x81, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:137 LDA #.LOWORD(CC_1D_15)
    case 0xC1808A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000CAu : 0x005BCAu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:137 LDA #.LOWORD(CC_1D_15)
    // Overlapping static entry reached from 0xC18089.
    case 0xC1808B: {
        Instruction step(cpu, 0xCA, 0x000000u, 1u, AddressMode::Implied);
        step.decrement_x();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:137 LDA #.LOWORD(CC_1D_15)
    // Overlapping static entry reached from 0xC1808A.
    case 0xC1808C: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:138 JMP @UNKNOWN65
    case 0xC1808D: {
        Instruction step(cpu, 0x4C, 0x00811Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:140 LDA #.LOWORD(CC_1D_17)
    case 0xC18090: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00005Cu : 0x005E5Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:140 LDA #.LOWORD(CC_1D_17)
    // Overlapping static entry reached from 0xC18090.
    case 0xC18092: {
        Instruction step(cpu, 0x5E, 0x001D4Cu, 3u, AddressMode::AbsoluteIndexedX);
        step.shift_right();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:141 JMP @UNKNOWN65
    case 0xC18093: {
        Instruction step(cpu, 0x4C, 0x00811Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:141 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18092.
    case 0xC18095: {
        Instruction step(cpu, 0x81, 0x0000A9u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:143 LDA #.LOWORD(CC_1D_18)
    case 0xC18096: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000024u : 0x006124u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:143 LDA #.LOWORD(CC_1D_18)
    // Overlapping static entry reached from 0xC18095.
    case 0xC18097: {
        Instruction step(cpu, 0x24, 0x000061u, 2u, AddressMode::DirectPage);
        step.test_bits();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:143 LDA #.LOWORD(CC_1D_18)
    // Overlapping static entry reached from 0xC18096.
    case 0xC18098: {
        Instruction step(cpu, 0x61, 0x00004Cu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:144 JMP @UNKNOWN65
    case 0xC18099: {
        Instruction step(cpu, 0x4C, 0x00811Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:144 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC18098.
    case 0xC1809A: {
        Instruction step(cpu, 0x1D, 0x00A981u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:146 LDA #.LOWORD(CC_1D_19)
    case 0xC1809C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000072u : 0x006172u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:146 LDA #.LOWORD(CC_1D_19)
    // Overlapping static entry reached from 0xC1809A.
    case 0xC1809D: {
        Instruction step(cpu, 0x72, 0x000061u, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:146 LDA #.LOWORD(CC_1D_19)
    // Overlapping static entry reached from 0xC1809C.
    case 0xC1809E: {
        Instruction step(cpu, 0x61, 0x00004Cu, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:147 JMP @UNKNOWN65
    case 0xC1809F: {
        Instruction step(cpu, 0x4C, 0x00811Du, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:147 JMP @UNKNOWN65
    // Overlapping static entry reached from 0xC1809E.
    case 0xC180A0: {
        Instruction step(cpu, 0x1D, 0x00A081u, 3u, AddressMode::AbsoluteIndexedX);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:149 LDY #0
    case 0xC180A2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:149 LDY #0
    // Overlapping static entry reached from 0xC180A0.
    case 0xC180A3: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:149 LDY #0
    // Overlapping static entry reached from 0xC180A2.
    case 0xC180A4: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:150 STY @LOCAL02
    case 0xC180A5: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:151 JSR RETURN_BATTLE_TARGET_ADDRESS
    case 0xC180A7: {
        Instruction step(cpu, 0x20, 0x00ACF2u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:152 STA @LOCAL01
    case 0xC180AA: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:153 JSR RETURN_BATTLE_ATTACKER_ADDRESS
    case 0xC180AC: {
        Instruction step(cpu, 0x20, 0x00AC9Bu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:154 TAX
    case 0xC180AF: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:155 LDA @LOCAL01
    case 0xC180B0: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:156 JSR UNKNOWN_C14070
    case 0xC180B2: {
        Instruction step(cpu, 0x20, 0x004070u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:157 CMP #0
    case 0xC180B5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:157 CMP #0
    // Overlapping static entry reached from 0xC180B5.
    case 0xC180B7: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:158 BNE @UNKNOWN56
    case 0xC180B8: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:159 LDY #1
    case 0xC180BA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:159 LDY #1
    // Overlapping static entry reached from 0xC180BA.
    case 0xC180BC: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:160 STY @LOCAL02
    case 0xC180BD: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:162 LDY @LOCAL02
    case 0xC180BF: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:163 TYA
    case 0xC180C1: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1D.asm:164 STORE_INT1632S @VIRTUAL06
    case 0xC180C2: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1D.asm:164 STORE_INT1632S @VIRTUAL06
    case 0xC180C4: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:883 BPL :+
    // Macro caller: src/text/ccs/tree_1D.asm:164 STORE_INT1632S @VIRTUAL06
    case 0xC180C6: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/text/ccs/tree_1D.asm:164 STORE_INT1632S @VIRTUAL06
    case 0xC180C8: {
        Instruction step(cpu, 0xC6, 0x000008u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1D.asm:165 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC180CA: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1D.asm:165 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC180CC: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1D.asm:165 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC180CE: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1D.asm:165 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC180D0: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:166 JSR SET_WORKING_MEMORY
    case 0xC180D2: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:167 BRA @UNKNOWN64
    case 0xC180D5: {
        Instruction step(cpu, 0x80, 0x000043u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:169 LDA #.LOWORD(CC_1D_21)
    case 0xC180D7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000F0u : 0x0061F0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:169 LDA #.LOWORD(CC_1D_21)
    // Overlapping static entry reached from 0xC180D7.
    case 0xC180D9: {
        Instruction step(cpu, 0x61, 0x000080u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:170 BRA @UNKNOWN65
    case 0xC180DA: {
        Instruction step(cpu, 0x80, 0x000041u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:170 BRA @UNKNOWN65
    // Overlapping static entry reached from 0xC180D9.
    case 0xC180DB: {
        Instruction step(cpu, 0x41, 0x0000A0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:172 LDY #0
    case 0xC180DC: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:172 LDY #0
    // Overlapping static entry reached from 0xC180DB.
    case 0xC180DD: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:172 LDY #0
    // Overlapping static entry reached from 0xC180DC.
    case 0xC180DE: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:173 STY @LOCAL02
    case 0xC180DF: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:174 LDX GAME_STATE+game_state::leader_y_coord
    case 0xC180E1: {
        Instruction step(cpu, 0xAE, 0x00987Bu, 3u, AddressMode::Absolute);
        step.load_x();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:175 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC180E4: {
        Instruction step(cpu, 0xAD, 0x009877u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:176 JSL LOAD_SECTOR_ATTRS
    case 0xC180E7: {
        Instruction step(cpu, 0x22, 0xC00AA1u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:177 AND #$0007
    case 0xC180EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:177 AND #$0007
    // Overlapping static entry reached from 0xC180EB.
    case 0xC180ED: {
        Instruction step(cpu, 0x00, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:178 CMP #2
    case 0xC180EE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:178 CMP #2
    // Overlapping static entry reached from 0xC180EE.
    case 0xC180F0: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:179 BNE @UNKNOWN60
    case 0xC180F1: {
        Instruction step(cpu, 0xD0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:180 LDY #1
    case 0xC180F3: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA0, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:180 LDY #1
    // Overlapping static entry reached from 0xC180F3.
    case 0xC180F5: {
        Instruction step(cpu, 0x00, 0x000084u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:181 STY @LOCAL02
    case 0xC180F6: {
        Instruction step(cpu, 0x84, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:183 LDY @LOCAL02
    case 0xC180F8: {
        Instruction step(cpu, 0xA4, 0x000014u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:184 TYA
    case 0xC180FA: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/tree_1D.asm:185 STORE_INT1632S @VIRTUAL06
    case 0xC180FB: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/tree_1D.asm:185 STORE_INT1632S @VIRTUAL06
    case 0xC180FD: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:883 BPL :+
    // Macro caller: src/text/ccs/tree_1D.asm:185 STORE_INT1632S @VIRTUAL06
    case 0xC180FF: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/text/ccs/tree_1D.asm:185 STORE_INT1632S @VIRTUAL06
    case 0xC18101: {
        Instruction step(cpu, 0xC6, 0x000008u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/tree_1D.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18103: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/tree_1D.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18105: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/tree_1D.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18107: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/tree_1D.asm:186 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18109: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:187 JSR SET_WORKING_MEMORY
    case 0xC1810B: {
        Instruction step(cpu, 0x20, 0x00045Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:188 BRA @UNKNOWN64
    case 0xC1810E: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:190 LDA #.LOWORD(CC_1D_23)
    case 0xC18110: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000008u : 0x007708u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:190 LDA #.LOWORD(CC_1D_23)
    // Overlapping static entry reached from 0xC18110.
    case 0xC18112: {
        Instruction step(cpu, 0x77, 0x000080u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:191 BRA @UNKNOWN65
    case 0xC18113: {
        Instruction step(cpu, 0x80, 0x000008u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:191 BRA @UNKNOWN65
    // Overlapping static entry reached from 0xC18112.
    case 0xC18114: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:193 LDA #.LOWORD(CC_1D_24)
    case 0xC18115: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000074u : 0x007274u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:193 LDA #.LOWORD(CC_1D_24)
    // Overlapping static entry reached from 0xC18115.
    case 0xC18117: {
        Instruction step(cpu, 0x72, 0x000080u, 2u, AddressMode::DirectPageIndirect);
        step.add_with_carry();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:194 BRA @UNKNOWN65
    case 0xC18118: {
        Instruction step(cpu, 0x80, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:194 BRA @UNKNOWN65
    // Overlapping static entry reached from 0xC18117.
    case 0xC18119: {
        Instruction step(cpu, 0x03, 0x0000A9u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:196 LDA #NULL
    case 0xC1811A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:196 LDA #NULL
    // Overlapping static entry reached from 0xC18119.
    case 0xC1811B: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/text/ccs/tree_1D.asm:196 LDA #NULL
    // Overlapping static entry reached from 0xC1811A.
    case 0xC1811C: {
        Instruction step(cpu, 0x00, 0x00002Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/tree_1D.asm:198 END_C_FUNCTION
    case 0xC1811D: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/tree_1D.asm:198 END_C_FUNCTION
    case 0xC1811E: {
        Instruction step(cpu, 0x60, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_call();
        return step.finish();
    }
    default: return false;
    }
}
}
