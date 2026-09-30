// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/unknown/C1/C1BEFC.asm
bool resume_unresolved_c1_c1befc(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1BEFC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1BEFC: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:7 CMP #1
    case 0xC1BEFE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:7 CMP #1
    // Overlapping static entry reached from 0xC1BEFE.
    case 0xC1BF00: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:8 BEQL @1F4101_COFFEESCENE
    case 0xC1BF01: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:8 BEQL @1F4101_COFFEESCENE
    case 0xC1BF03: {
        Instruction step(cpu, 0x4C, 0x00BF91u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:9 CMP #2
    case 0xC1BF06: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:9 CMP #2
    // Overlapping static entry reached from 0xC1BF06.
    case 0xC1BF08: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:10 BEQL @1F4102_TEASCENE
    case 0xC1BF09: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:10 BEQL @1F4102_TEASCENE
    case 0xC1BF0B: {
        Instruction step(cpu, 0x4C, 0x00BF9Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:11 CMP #3
    case 0xC1BF0E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:11 CMP #3
    // Overlapping static entry reached from 0xC1BF0E.
    case 0xC1BF10: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:12 BEQL @1F4103_REGISTERREALNAME
    case 0xC1BF11: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:12 BEQL @1F4103_REGISTERREALNAME
    case 0xC1BF13: {
        Instruction step(cpu, 0x4C, 0x00BFA5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:13 CMP #4
    case 0xC1BF16: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:13 CMP #4
    // Overlapping static entry reached from 0xC1BF16.
    case 0xC1BF18: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:14 BEQL @1F4104_REGISTERREALNAME2
    case 0xC1BF19: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:14 BEQL @1F4104_REGISTERREALNAME2
    case 0xC1BF1B: {
        Instruction step(cpu, 0x4C, 0x00BFAFu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:15 CMP #5
    case 0xC1BF1E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:15 CMP #5
    // Overlapping static entry reached from 0xC1BF1E.
    case 0xC1BF20: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:16 BEQL @1F4105
    case 0xC1BF21: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:16 BEQL @1F4105
    case 0xC1BF23: {
        Instruction step(cpu, 0x4C, 0x00BFB9u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:17 CMP #6
    case 0xC1BF26: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:17 CMP #6
    // Overlapping static entry reached from 0xC1BF26.
    case 0xC1BF28: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:18 BEQL @1F4106
    case 0xC1BF29: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:18 BEQL @1F4106
    case 0xC1BF2B: {
        Instruction step(cpu, 0x4C, 0x00BFC3u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:19 CMP #7
    case 0xC1BF2E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:19 CMP #7
    // Overlapping static entry reached from 0xC1BF2E.
    case 0xC1BF30: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:20 BEQL @1F4107_TOWNMAP
    case 0xC1BF31: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:20 BEQL @1F4107_TOWNMAP
    case 0xC1BF33: {
        Instruction step(cpu, 0x4C, 0x00BFD0u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:21 CMP #8
    case 0xC1BF36: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:21 CMP #8
    // Overlapping static entry reached from 0xC1BF36.
    case 0xC1BF38: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:22 BEQL @1F4108
    case 0xC1BF39: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:22 BEQL @1F4108
    case 0xC1BF3B: {
        Instruction step(cpu, 0x4C, 0x00BFD6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:23 CMP #9
    case 0xC1BF3E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:23 CMP #9
    // Overlapping static entry reached from 0xC1BF3E.
    case 0xC1BF40: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:24 BEQL @1F4109_SOUNDSTONE
    case 0xC1BF41: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:24 BEQL @1F4109_SOUNDSTONE
    case 0xC1BF43: {
        Instruction step(cpu, 0x4C, 0x00BFDCu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:25 CMP #10
    case 0xC1BF46: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:25 CMP #10
    // Overlapping static entry reached from 0xC1BF46.
    case 0xC1BF48: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:26 BEQL @1F410A_TITLESCREEN
    case 0xC1BF49: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:26 BEQL @1F410A_TITLESCREEN
    case 0xC1BF4B: {
        Instruction step(cpu, 0x4C, 0x00BFE5u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:27 CMP #11
    case 0xC1BF4E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:27 CMP #11
    // Overlapping static entry reached from 0xC1BF4E.
    case 0xC1BF50: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:28 BEQL @1F410B_CASTSCREEN
    case 0xC1BF51: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:28 BEQL @1F410B_CASTSCREEN
    case 0xC1BF53: {
        Instruction step(cpu, 0x4C, 0x00BFEEu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:29 CMP #12
    case 0xC1BF56: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:29 CMP #12
    // Overlapping static entry reached from 0xC1BF56.
    case 0xC1BF58: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:30 BEQL @1F410C_ENDCREDITS
    case 0xC1BF59: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:30 BEQL @1F410C_ENDCREDITS
    case 0xC1BF5B: {
        Instruction step(cpu, 0x4C, 0x00BFF4u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:31 CMP #13
    case 0xC1BF5E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:31 CMP #13
    // Overlapping static entry reached from 0xC1BF5E.
    case 0xC1BF60: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:32 BEQL @1F410D
    case 0xC1BF61: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:32 BEQL @1F410D
    case 0xC1BF63: {
        Instruction step(cpu, 0x4C, 0x00BFFAu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:33 CMP #14
    case 0xC1BF66: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:33 CMP #14
    // Overlapping static entry reached from 0xC1BF66.
    case 0xC1BF68: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:34 BEQL @1F410E
    case 0xC1BF69: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:34 BEQL @1F410E
    case 0xC1BF6B: {
        Instruction step(cpu, 0x4C, 0x00C002u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:35 CMP #15
    case 0xC1BF6E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:35 CMP #15
    // Overlapping static entry reached from 0xC1BF6E.
    case 0xC1BF70: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:36 BEQL @1F410F_CLEAREVENTFLAGS
    case 0xC1BF71: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:36 BEQL @1F410F_CLEAREVENTFLAGS
    case 0xC1BF73: {
        Instruction step(cpu, 0x4C, 0x00C00Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:37 CMP #16
    case 0xC1BF76: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:37 CMP #16
    // Overlapping static entry reached from 0xC1BF76.
    case 0xC1BF78: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:38 BEQL @1F4110_SOUNDSTONE_UNCANCELLABLE
    case 0xC1BF79: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:38 BEQL @1F4110_SOUNDSTONE_UNCANCELLABLE
    case 0xC1BF7B: {
        Instruction step(cpu, 0x4C, 0x00C01Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:39 CMP #17
    case 0xC1BF7E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000011u : 0x000011u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:39 CMP #17
    // Overlapping static entry reached from 0xC1BF7E.
    case 0xC1BF80: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:40 BEQL @1F4111
    case 0xC1BF81: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:40 BEQL @1F4111
    case 0xC1BF83: {
        Instruction step(cpu, 0x4C, 0x00C025u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:41 CMP #18
    case 0xC1BF86: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000012u : 0x000012u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:41 CMP #18
    // Overlapping static entry reached from 0xC1BF86.
    case 0xC1BF88: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:42 BEQL @1F4112
    case 0xC1BF89: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:42 BEQL @1F4112
    case 0xC1BF8B: {
        Instruction step(cpu, 0x4C, 0x00C02Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:43 JMP @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BF8E: {
        Instruction step(cpu, 0x4C, 0x00C040u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:45 LDA #0
    case 0xC1BF91: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:45 LDA #0
    // Overlapping static entry reached from 0xC1BF91.
    case 0xC1BF93: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:46 JSL COFFEETEA_SCENE
    case 0xC1BF94: {
        Instruction step(cpu, 0x22, 0xC49D6Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:47 JMP @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BF98: {
        Instruction step(cpu, 0x4C, 0x00C040u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:49 LDA #1
    case 0xC1BF9B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:49 LDA #1
    // Overlapping static entry reached from 0xC1BF9B.
    case 0xC1BF9D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:50 JSL COFFEETEA_SCENE
    case 0xC1BF9E: {
        Instruction step(cpu, 0x22, 0xC49D6Au, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:51 JMP @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BFA2: {
        Instruction step(cpu, 0x4C, 0x00C040u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:53 LDA #0
    case 0xC1BFA5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:53 LDA #0
    // Overlapping static entry reached from 0xC1BFA5.
    case 0xC1BFA7: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:54 JSL ENTER_YOUR_NAME_PLEASE
    case 0xC1BFA8: {
        Instruction step(cpu, 0x22, 0xC1EAA6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:55 JMP @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BFAC: {
        Instruction step(cpu, 0x4C, 0x00C040u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:57 LDA #1
    case 0xC1BFAF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:57 LDA #1
    // Overlapping static entry reached from 0xC1BFAF.
    case 0xC1BFB1: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:58 JSL ENTER_YOUR_NAME_PLEASE
    case 0xC1BFB2: {
        Instruction step(cpu, 0x22, 0xC1EAA6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:59 JMP @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BFB6: {
        Instruction step(cpu, 0x4C, 0x00C040u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:61 LDA #1
    case 0xC1BFB9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:61 LDA #1
    // Overlapping static entry reached from 0xC1BFB9.
    case 0xC1BFBB: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:62 JSL UNKNOWN_C43344
    case 0xC1BFBC: {
        Instruction step(cpu, 0x22, 0xC43344u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:63 JMP @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BFC0: {
        Instruction step(cpu, 0x4C, 0x00C040u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:65 LDA #EVENT_FLAG::FLG_WIN_GIEGU
    case 0xC1BFC3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000049u : 0x000049u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:65 LDA #EVENT_FLAG::FLG_WIN_GIEGU
    // Overlapping static entry reached from 0xC1BFC3.
    case 0xC1BFC5: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:66 JSL GET_EVENT_FLAG
    case 0xC1BFC6: {
        Instruction step(cpu, 0x22, 0xC21628u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:67 JSL UNKNOWN_C43344
    case 0xC1BFCA: {
        Instruction step(cpu, 0x22, 0xC43344u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:68 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BFCE: {
        Instruction step(cpu, 0x80, 0x000070u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:70 JSL DISPLAY_TOWN_MAP
    case 0xC1BFD0: {
        Instruction step(cpu, 0x22, 0xC4D681u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:71 BRA @RETURN
    case 0xC1BFD4: {
        Instruction step(cpu, 0x80, 0x00006Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:73 JSL UNKNOWN_C3FB09
    case 0xC1BFD6: {
        Instruction step(cpu, 0x22, 0xC3FB09u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:74 BRA @RETURN
    case 0xC1BFDA: {
        Instruction step(cpu, 0x80, 0x000069u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:76 LDA #1
    case 0xC1BFDC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:76 LDA #1
    // Overlapping static entry reached from 0xC1BFDC.
    case 0xC1BFDE: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:77 JSL USE_SOUND_STONE
    case 0xC1BFDF: {
        Instruction step(cpu, 0x22, 0xC4ACCEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:78 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BFE3: {
        Instruction step(cpu, 0x80, 0x00005Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:80 LDA #1
    case 0xC1BFE5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:80 LDA #1
    // Overlapping static entry reached from 0xC1BFE5.
    case 0xC1BFE7: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:81 JSL SHOW_TITLE_SCREEN
    case 0xC1BFE8: {
        Instruction step(cpu, 0x22, 0xC3F3C5u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:82 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BFEC: {
        Instruction step(cpu, 0x80, 0x000052u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:84 JSL PLAY_CAST_SCENE
    case 0xC1BFEE: {
        Instruction step(cpu, 0x22, 0xC4ED0Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:85 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BFF2: {
        Instruction step(cpu, 0x80, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:87 JSL PLAY_CREDITS
    case 0xC1BFF4: {
        Instruction step(cpu, 0x22, 0xC4F554u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:88 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BFF8: {
        Instruction step(cpu, 0x80, 0x000046u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:90 LDA #1
    case 0xC1BFFA: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:90 LDA #1
    // Overlapping static entry reached from 0xC1BFFA.
    case 0xC1BFFC: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:91 JSR UNKNOWN_C12D17
    case 0xC1BFFD: {
        Instruction step(cpu, 0x20, 0x002D17u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:92 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1C000: {
        Instruction step(cpu, 0x80, 0x00003Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:94 LDA #0
    case 0xC1C002: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:94 LDA #0
    // Overlapping static entry reached from 0xC1C002.
    case 0xC1C004: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:95 JSR UNKNOWN_C12D17
    case 0xC1C005: {
        Instruction step(cpu, 0x20, 0x002D17u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:96 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1C008: {
        Instruction step(cpu, 0x80, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:98 LDX #0
    case 0xC1C00A: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:98 LDX #0
    // Overlapping static entry reached from 0xC1C00A.
    case 0xC1C00C: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:99 BRA @1F410F_CLEAREVENTFLAGS_LOOP_ENTRY
    case 0xC1C00D: {
        Instruction step(cpu, 0x80, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:101 SEP #PROC_FLAGS::ACCUM8
    case 0xC1C00F: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:102 STZ EVENT_FLAGS,X
    case 0xC1C011: {
        Instruction step(cpu, 0x9E, 0x009C08u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:103 INX
    case 0xC1C014: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:105 CPX #128
    case 0xC1C015: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:105 CPX #128
    // Overlapping static entry reached from 0xC1C015.
    case 0xC1C017: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:106 BCC @1F410F_CLEAREVENTFLAGS_LOOP_BEGINNING
    case 0xC1C018: {
        Instruction step(cpu, 0x90, 0x0000F5u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:107 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1C01A: {
        Instruction step(cpu, 0x80, 0x000024u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:110 LDA #0
    case 0xC1C01C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:110 LDA #0
    // Overlapping static entry reached from 0xC1C01C.
    case 0xC1C01E: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:111 JSL USE_SOUND_STONE
    case 0xC1C01F: {
        Instruction step(cpu, 0x22, 0xC4ACCEu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:112 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1C023: {
        Instruction step(cpu, 0x80, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:114 JSR ATTEMPT_HOMESICKNESS
    case 0xC1C025: {
        Instruction step(cpu, 0x20, 0x00BE4Du, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:115 BRA @RETURN
    case 0xC1C028: {
        Instruction step(cpu, 0x80, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:117 LDA GAME_STATE+game_state::walking_style
    case 0xC1C02A: {
        Instruction step(cpu, 0xAD, 0x009883u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:118 CMP #3
    case 0xC1C02D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:118 CMP #3
    // Overlapping static entry reached from 0xC1C02D.
    case 0xC1C02F: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:119 BNE @RETURN_ZERO_1
    case 0xC1C030: {
        Instruction step(cpu, 0xD0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:120 JSL UNKNOWN_C03CFD
    case 0xC1C032: {
        Instruction step(cpu, 0x22, 0xC03CFDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:121 LDA #1
    case 0xC1C036: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:121 LDA #1
    // Overlapping static entry reached from 0xC1C036.
    case 0xC1C038: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:122 BRA @RETURN
    case 0xC1C039: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:124 LDA #0
    case 0xC1C03B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:124 LDA #0
    // Overlapping static entry reached from 0xC1C03B.
    case 0xC1C03D: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:125 BRA @RETURN
    case 0xC1C03E: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:127 REP #PROC_FLAGS::ACCUM8
    case 0xC1C040: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:128 LDA #0
    case 0xC1C042: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:128 LDA #0
    // Overlapping static entry reached from 0xC1C042.
    case 0xC1C044: {
        Instruction step(cpu, 0x00, 0x00006Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1BEFC.asm:130 END_C_FUNCTION
    case 0xC1C045: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
