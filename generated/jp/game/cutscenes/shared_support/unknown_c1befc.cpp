// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/unknown/C1/C1BEFC.asm
bool resume_unresolved_c1_c1befc(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C1/C1BEFC.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1BD62: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:7 CMP #1
    case 0xC1BD64: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:7 CMP #1
    // Overlapping static entry reached from 0xC1BD64.
    case 0xC1BD66: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:8 BEQL @1F4101_COFFEESCENE
    case 0xC1BD67: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:8 BEQL @1F4101_COFFEESCENE
    case 0xC1BD69: {
        Instruction step(cpu, 0x4C, 0x00BDF7u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:9 CMP #2
    case 0xC1BD6C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:9 CMP #2
    // Overlapping static entry reached from 0xC1BD6C.
    case 0xC1BD6E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:10 BEQL @1F4102_TEASCENE
    case 0xC1BD6F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:10 BEQL @1F4102_TEASCENE
    case 0xC1BD71: {
        Instruction step(cpu, 0x4C, 0x00BE01u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:11 CMP #3
    case 0xC1BD74: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:11 CMP #3
    // Overlapping static entry reached from 0xC1BD74.
    case 0xC1BD76: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:12 BEQL @1F4103_REGISTERREALNAME
    case 0xC1BD77: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:12 BEQL @1F4103_REGISTERREALNAME
    case 0xC1BD79: {
        Instruction step(cpu, 0x4C, 0x00BE0Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:13 CMP #4
    case 0xC1BD7C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:13 CMP #4
    // Overlapping static entry reached from 0xC1BD7C.
    case 0xC1BD7E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:14 BEQL @1F4104_REGISTERREALNAME2
    case 0xC1BD7F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:14 BEQL @1F4104_REGISTERREALNAME2
    case 0xC1BD81: {
        Instruction step(cpu, 0x4C, 0x00BE15u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:15 CMP #5
    case 0xC1BD84: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:15 CMP #5
    // Overlapping static entry reached from 0xC1BD84.
    case 0xC1BD86: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:16 BEQL @1F4105
    case 0xC1BD87: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:16 BEQL @1F4105
    case 0xC1BD89: {
        Instruction step(cpu, 0x4C, 0x00BE1Fu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:17 CMP #6
    case 0xC1BD8C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:17 CMP #6
    // Overlapping static entry reached from 0xC1BD8C.
    case 0xC1BD8E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:18 BEQL @1F4106
    case 0xC1BD8F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:18 BEQL @1F4106
    case 0xC1BD91: {
        Instruction step(cpu, 0x4C, 0x00BE29u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:19 CMP #7
    case 0xC1BD94: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:19 CMP #7
    // Overlapping static entry reached from 0xC1BD94.
    case 0xC1BD96: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:20 BEQL @1F4107_TOWNMAP
    case 0xC1BD97: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:20 BEQL @1F4107_TOWNMAP
    case 0xC1BD99: {
        Instruction step(cpu, 0x4C, 0x00BE36u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:21 CMP #8
    case 0xC1BD9C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:21 CMP #8
    // Overlapping static entry reached from 0xC1BD9C.
    case 0xC1BD9E: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:22 BEQL @1F4108
    case 0xC1BD9F: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:22 BEQL @1F4108
    case 0xC1BDA1: {
        Instruction step(cpu, 0x4C, 0x00BE3Cu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:23 CMP #9
    case 0xC1BDA4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000009u : 0x000009u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:23 CMP #9
    // Overlapping static entry reached from 0xC1BDA4.
    case 0xC1BDA6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:24 BEQL @1F4109_SOUNDSTONE
    case 0xC1BDA7: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:24 BEQL @1F4109_SOUNDSTONE
    case 0xC1BDA9: {
        Instruction step(cpu, 0x4C, 0x00BE42u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:25 CMP #10
    case 0xC1BDAC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:25 CMP #10
    // Overlapping static entry reached from 0xC1BDAC.
    case 0xC1BDAE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:26 BEQL @1F410A_TITLESCREEN
    case 0xC1BDAF: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:26 BEQL @1F410A_TITLESCREEN
    case 0xC1BDB1: {
        Instruction step(cpu, 0x4C, 0x00BE4Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:27 CMP #11
    case 0xC1BDB4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Bu : 0x00000Bu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:27 CMP #11
    // Overlapping static entry reached from 0xC1BDB4.
    case 0xC1BDB6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:28 BEQL @1F410B_CASTSCREEN
    case 0xC1BDB7: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:28 BEQL @1F410B_CASTSCREEN
    case 0xC1BDB9: {
        Instruction step(cpu, 0x4C, 0x00BE54u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:29 CMP #12
    case 0xC1BDBC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Cu : 0x00000Cu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:29 CMP #12
    // Overlapping static entry reached from 0xC1BDBC.
    case 0xC1BDBE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:30 BEQL @1F410C_ENDCREDITS
    case 0xC1BDBF: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:30 BEQL @1F410C_ENDCREDITS
    case 0xC1BDC1: {
        Instruction step(cpu, 0x4C, 0x00BE5Au, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:31 CMP #13
    case 0xC1BDC4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Du : 0x00000Du, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:31 CMP #13
    // Overlapping static entry reached from 0xC1BDC4.
    case 0xC1BDC6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:32 BEQL @1F410D
    case 0xC1BDC7: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:32 BEQL @1F410D
    case 0xC1BDC9: {
        Instruction step(cpu, 0x4C, 0x00BE60u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:33 CMP #14
    case 0xC1BDCC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Eu : 0x00000Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:33 CMP #14
    // Overlapping static entry reached from 0xC1BDCC.
    case 0xC1BDCE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:34 BEQL @1F410E
    case 0xC1BDCF: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:34 BEQL @1F410E
    case 0xC1BDD1: {
        Instruction step(cpu, 0x4C, 0x00BE68u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:35 CMP #15
    case 0xC1BDD4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x00000Fu : 0x00000Fu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:35 CMP #15
    // Overlapping static entry reached from 0xC1BDD4.
    case 0xC1BDD6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:36 BEQL @1F410F_CLEAREVENTFLAGS
    case 0xC1BDD7: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:36 BEQL @1F410F_CLEAREVENTFLAGS
    case 0xC1BDD9: {
        Instruction step(cpu, 0x4C, 0x00BE70u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:37 CMP #16
    case 0xC1BDDC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:37 CMP #16
    // Overlapping static entry reached from 0xC1BDDC.
    case 0xC1BDDE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:38 BEQL @1F4110_SOUNDSTONE_UNCANCELLABLE
    case 0xC1BDDF: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:38 BEQL @1F4110_SOUNDSTONE_UNCANCELLABLE
    case 0xC1BDE1: {
        Instruction step(cpu, 0x4C, 0x00BE82u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:39 CMP #17
    case 0xC1BDE4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000011u : 0x000011u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:39 CMP #17
    // Overlapping static entry reached from 0xC1BDE4.
    case 0xC1BDE6: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:40 BEQL @1F4111
    case 0xC1BDE7: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:40 BEQL @1F4111
    case 0xC1BDE9: {
        Instruction step(cpu, 0x4C, 0x00BE8Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:41 CMP #18
    case 0xC1BDEC: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000012u : 0x000012u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:41 CMP #18
    // Overlapping static entry reached from 0xC1BDEC.
    case 0xC1BDEE: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C1/C1BEFC.asm:42 BEQL @1F4112
    case 0xC1BDEF: {
        Instruction step(cpu, 0xD0, 0x000003u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C1/C1BEFC.asm:42 BEQL @1F4112
    case 0xC1BDF1: {
        Instruction step(cpu, 0x4C, 0x00BE90u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:43 JMP @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BDF4: {
        Instruction step(cpu, 0x4C, 0x00BEA6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:45 LDA #0
    case 0xC1BDF7: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:45 LDA #0
    // Overlapping static entry reached from 0xC1BDF7.
    case 0xC1BDF9: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:46 JSL COFFEETEA_SCENE
    case 0xC1BDFA: {
        Instruction step(cpu, 0x22, 0xC4723Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:47 JMP @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BDFE: {
        Instruction step(cpu, 0x4C, 0x00BEA6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:49 LDA #1
    case 0xC1BE01: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:49 LDA #1
    // Overlapping static entry reached from 0xC1BE01.
    case 0xC1BE03: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:50 JSL COFFEETEA_SCENE
    case 0xC1BE04: {
        Instruction step(cpu, 0x22, 0xC4723Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:51 JMP @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BE08: {
        Instruction step(cpu, 0x4C, 0x00BEA6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:53 LDA #0
    case 0xC1BE0B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:53 LDA #0
    // Overlapping static entry reached from 0xC1BE0B.
    case 0xC1BE0D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:54 JSL ENTER_YOUR_NAME_PLEASE
    case 0xC1BE0E: {
        Instruction step(cpu, 0x22, 0xC1E8F6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:55 JMP @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BE12: {
        Instruction step(cpu, 0x4C, 0x00BEA6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:57 LDA #1
    case 0xC1BE15: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:57 LDA #1
    // Overlapping static entry reached from 0xC1BE15.
    case 0xC1BE17: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:58 JSL ENTER_YOUR_NAME_PLEASE
    case 0xC1BE18: {
        Instruction step(cpu, 0x22, 0xC1E8F6u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:59 JMP @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BE1C: {
        Instruction step(cpu, 0x4C, 0x00BEA6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:61 LDA #1
    case 0xC1BE1F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:61 LDA #1
    // Overlapping static entry reached from 0xC1BE1F.
    case 0xC1BE21: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:62 JSL UNKNOWN_C43344
    case 0xC1BE22: {
        Instruction step(cpu, 0x22, 0xC430BDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:63 JMP @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BE26: {
        Instruction step(cpu, 0x4C, 0x00BEA6u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:65 LDA #EVENT_FLAG::FLG_WIN_GIEGU
    case 0xC1BE29: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000049u : 0x000049u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:65 LDA #EVENT_FLAG::FLG_WIN_GIEGU
    // Overlapping static entry reached from 0xC1BE29.
    case 0xC1BE2B: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:66 JSL GET_EVENT_FLAG
    case 0xC1BE2C: {
        Instruction step(cpu, 0x22, 0xC214D0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:67 JSL UNKNOWN_C43344
    case 0xC1BE30: {
        Instruction step(cpu, 0x22, 0xC430BDu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:68 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BE34: {
        Instruction step(cpu, 0x80, 0x000070u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:70 JSL DISPLAY_TOWN_MAP
    case 0xC1BE36: {
        Instruction step(cpu, 0x22, 0xC4A951u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:71 BRA @RETURN
    case 0xC1BE3A: {
        Instruction step(cpu, 0x80, 0x00006Fu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:73 JSL UNKNOWN_C3FB09
    case 0xC1BE3C: {
        Instruction step(cpu, 0x22, 0xC3F64Eu, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:74 BRA @RETURN
    case 0xC1BE40: {
        Instruction step(cpu, 0x80, 0x000069u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:76 LDA #1
    case 0xC1BE42: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:76 LDA #1
    // Overlapping static entry reached from 0xC1BE42.
    case 0xC1BE44: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:77 JSL USE_SOUND_STONE
    case 0xC1BE45: {
        Instruction step(cpu, 0x22, 0xC48137u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:78 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BE49: {
        Instruction step(cpu, 0x80, 0x00005Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:80 LDA #1
    case 0xC1BE4B: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:80 LDA #1
    // Overlapping static entry reached from 0xC1BE4B.
    case 0xC1BE4D: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:81 JSL SHOW_TITLE_SCREEN
    case 0xC1BE4E: {
        Instruction step(cpu, 0x22, 0xC0EDC0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:82 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BE52: {
        Instruction step(cpu, 0x80, 0x000052u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:84 JSL PLAY_CAST_SCENE
    case 0xC1BE54: {
        Instruction step(cpu, 0x22, 0xC4BF69u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:85 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BE58: {
        Instruction step(cpu, 0x80, 0x00004Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:87 JSL PLAY_CREDITS
    case 0xC1BE5A: {
        Instruction step(cpu, 0x22, 0xC4C594u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:88 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BE5E: {
        Instruction step(cpu, 0x80, 0x000046u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:90 LDA #1
    case 0xC1BE60: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:90 LDA #1
    // Overlapping static entry reached from 0xC1BE60.
    case 0xC1BE62: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:91 JSR UNKNOWN_C12D17
    case 0xC1BE63: {
        Instruction step(cpu, 0x20, 0x003444u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:92 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BE66: {
        Instruction step(cpu, 0x80, 0x00003Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:94 LDA #0
    case 0xC1BE68: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:94 LDA #0
    // Overlapping static entry reached from 0xC1BE68.
    case 0xC1BE6A: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:95 JSR UNKNOWN_C12D17
    case 0xC1BE6B: {
        Instruction step(cpu, 0x20, 0x003444u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:96 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BE6E: {
        Instruction step(cpu, 0x80, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:98 LDX #0
    case 0xC1BE70: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:98 LDX #0
    // Overlapping static entry reached from 0xC1BE70.
    case 0xC1BE72: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:99 BRA @1F410F_CLEAREVENTFLAGS_LOOP_ENTRY
    case 0xC1BE73: {
        Instruction step(cpu, 0x80, 0x000006u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:101 SEP #PROC_FLAGS::ACCUM8
    case 0xC1BE75: {
        Instruction step(cpu, 0xE2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.set_status_bits();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:102 STZ EVENT_FLAGS,X
    case 0xC1BE77: {
        Instruction step(cpu, 0x9E, 0x009EB3u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_zero();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:103 INX
    case 0xC1BE7A: {
        Instruction step(cpu, 0xE8, 0x000000u, 1u, AddressMode::Implied);
        step.increment_x();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:105 CPX #128
    case 0xC1BE7B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xE0, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_x();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:105 CPX #128
    // Overlapping static entry reached from 0xC1BE7B.
    case 0xC1BE7D: {
        Instruction step(cpu, 0x00, 0x000090u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:106 BCC @1F410F_CLEAREVENTFLAGS_LOOP_BEGINNING
    case 0xC1BE7E: {
        Instruction step(cpu, 0x90, 0x0000F5u, 2u, AddressMode::Relative8);
        step.branch_if_carry_clear();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:107 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BE80: {
        Instruction step(cpu, 0x80, 0x000024u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:110 LDA #0
    case 0xC1BE82: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:110 LDA #0
    // Overlapping static entry reached from 0xC1BE82.
    case 0xC1BE84: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:111 JSL USE_SOUND_STONE
    case 0xC1BE85: {
        Instruction step(cpu, 0x22, 0xC48137u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:112 BRA @RETURN_ZERO_RESET_ACCUM16
    case 0xC1BE89: {
        Instruction step(cpu, 0x80, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:114 JSR ATTEMPT_HOMESICKNESS
    case 0xC1BE8B: {
        Instruction step(cpu, 0x20, 0x00BCB3u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:115 BRA @RETURN
    case 0xC1BE8E: {
        Instruction step(cpu, 0x80, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:117 LDA GAME_STATE+game_state::walking_style
    case 0xC1BE90: {
        Instruction step(cpu, 0xAD, 0x009B34u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:118 CMP #3
    case 0xC1BE93: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:118 CMP #3
    // Overlapping static entry reached from 0xC1BE93.
    case 0xC1BE95: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:119 BNE @RETURN_ZERO_1
    case 0xC1BE96: {
        Instruction step(cpu, 0xD0, 0x000009u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:120 JSL UNKNOWN_C03CFD
    case 0xC1BE98: {
        Instruction step(cpu, 0x22, 0xC03F64u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:121 LDA #1
    case 0xC1BE9C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:121 LDA #1
    // Overlapping static entry reached from 0xC1BE9C.
    case 0xC1BE9E: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:122 BRA @RETURN
    case 0xC1BE9F: {
        Instruction step(cpu, 0x80, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:124 LDA #0
    case 0xC1BEA1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:124 LDA #0
    // Overlapping static entry reached from 0xC1BEA1.
    case 0xC1BEA3: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:125 BRA @RETURN
    case 0xC1BEA4: {
        Instruction step(cpu, 0x80, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:127 REP #PROC_FLAGS::ACCUM8
    case 0xC1BEA6: {
        Instruction step(cpu, 0xC2, 0x000020u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:128 LDA #0
    case 0xC1BEA8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C1/C1BEFC.asm:128 LDA #0
    // Overlapping static entry reached from 0xC1BEA8.
    case 0xC1BEAA: {
        Instruction step(cpu, 0x00, 0x00006Bu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C1/C1BEFC.asm:130 END_C_FUNCTION
    case 0xC1BEAB: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
