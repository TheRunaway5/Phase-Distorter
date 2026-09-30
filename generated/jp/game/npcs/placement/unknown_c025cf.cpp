// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/unknown/C0/C025CF.asm
bool resume_unresolved_c0_c025cf(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C0/C025CF.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC025DD: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C0/C025CF.asm:10 END_STACK_VARS
    case 0xC025DF: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C0/C025CF.asm:10 END_STACK_VARS
    case 0xC025E0: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C0/C025CF.asm:10 END_STACK_VARS
    case 0xC025E1: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C025CF.asm:10 END_STACK_VARS
    case 0xC025E2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000ECu : 0x00FFECu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C0/C025CF.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC025E2.
    case 0xC025E4: {
        Instruction step(cpu, 0xFF, 0x86685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C0/C025CF.asm:10 END_STACK_VARS
    case 0xC025E5: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C0/C025CF.asm:10 END_STACK_VARS
    case 0xC025E6: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:11 STX @VIRTUAL04
    case 0xC025E7: {
        Instruction step(cpu, 0x86, 0x000004u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:11 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC025E4.
    case 0xC025E8: {
        Instruction step(cpu, 0x04, 0x000085u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:12 STA @LOCAL02
    case 0xC025E9: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:12 STA @LOCAL02
    // Overlapping static entry reached from 0xC025E8.
    case 0xC025EA: {
        Instruction step(cpu, 0x12, 0x0000A2u, 2u, AddressMode::DirectPageIndirect);
        step.or_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:13 LDX #$8000
    case 0xC025EB: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:13 LDX #$8000
    // Overlapping static entry reached from 0xC025EA.
    case 0xC025EC: {
        Instruction step(cpu, 0x00, 0x000080u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:13 LDX #$8000
    // Overlapping static entry reached from 0xC025EB.
    case 0xC025ED: {
        Instruction step(cpu, 0x80, 0x0000ADu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:14 LDA NPC_SPAWNS_ENABLED
    case 0xC025EE: {
        Instruction step(cpu, 0xAD, 0x004DDEu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:15 BEQ @UNKNOWN3
    case 0xC025F1: {
        Instruction step(cpu, 0xF0, 0x000056u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:16 LDY @LOCAL01
    case 0xC025F3: {
        Instruction step(cpu, 0xA4, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:17 CPY #$8000
    case 0xC025F5: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:17 CPY #$8000
    // Overlapping static entry reached from 0xC025F5.
    case 0xC025F7: {
        Instruction step(cpu, 0x80, 0x0000B0u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:18 BCS @UNKNOWN3
    case 0xC025F8: {
        Instruction step(cpu, 0xB0, 0x00004Fu, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:19 LDA @LOCAL02
    case 0xC025FA: {
        Instruction step(cpu, 0xA5, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:20 LSR
    case 0xC025FC: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:21 LSR
    case 0xC025FD: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:22 LSR
    case 0xC025FE: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:23 LSR
    case 0xC025FF: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:24 LSR
    case 0xC02600: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:25 STA @LOCAL00
    case 0xC02601: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:26 LDA @VIRTUAL04
    case 0xC02603: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:27 STA @VIRTUAL02
    case 0xC02605: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:28 STA @LOCAL01
    case 0xC02607: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:29 BRA @UNKNOWN2
    case 0xC02609: {
        Instruction step(cpu, 0x80, 0x00002Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:31 LDA @LOCAL01
    case 0xC0260B: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:32 STA @VIRTUAL02
    case 0xC0260D: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:33 CMP #$8000
    case 0xC0260F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x008000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:33 CMP #$8000
    // Overlapping static entry reached from 0xC0260F.
    case 0xC02611: {
        Instruction step(cpu, 0x80, 0x0000B0u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:34 BCS @UNKNOWN1
    case 0xC02612: {
        Instruction step(cpu, 0xB0, 0x00001Bu, 2u, AddressMode::Relative8);
        step.branch_if_carry_set();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:35 LDA @VIRTUAL02
    case 0xC02614: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:36 LSR
    case 0xC02616: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:37 LSR
    case 0xC02617: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:38 LSR
    case 0xC02618: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:39 LSR
    case 0xC02619: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:40 LSR
    case 0xC0261A: {
        Instruction step(cpu, 0x4A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_right();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:41 TAY
    case 0xC0261B: {
        Instruction step(cpu, 0xA8, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_y();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:42 STY @LOCAL02
    case 0xC0261C: {
        Instruction step(cpu, 0x84, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:43 STX @VIRTUAL02
    case 0xC0261E: {
        Instruction step(cpu, 0x86, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:44 TYA
    case 0xC02620: {
        Instruction step(cpu, 0x98, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:45 CMP @VIRTUAL02
    case 0xC02621: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:46 BEQ @UNKNOWN1
    case 0xC02623: {
        Instruction step(cpu, 0xF0, 0x00000Au, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:47 TYX
    case 0xC02625: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:48 LDA @LOCAL00
    case 0xC02626: {
        Instruction step(cpu, 0xA5, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:49 JSL UNKNOWN_C0222B
    case 0xC02628: {
        Instruction step(cpu, 0x22, 0xC02239u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:50 LDY @LOCAL02
    case 0xC0262C: {
        Instruction step(cpu, 0xA4, 0x000012u, 2u, AddressMode::DirectPage);
        step.load_y();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:51 TYX
    case 0xC0262E: {
        Instruction step(cpu, 0xBB, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_y_to_x();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:53 LDA @LOCAL01
    case 0xC0262F: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:54 STA @VIRTUAL02
    case 0xC02631: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:55 INC @VIRTUAL02
    case 0xC02633: {
        Instruction step(cpu, 0xE6, 0x000002u, 2u, AddressMode::DirectPage);
        step.increment();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:56 LDA @VIRTUAL02
    case 0xC02635: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:57 STA @LOCAL01
    case 0xC02637: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:59 LDA @VIRTUAL04
    case 0xC02639: {
        Instruction step(cpu, 0xA5, 0x000004u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:60 CLC
    case 0xC0263B: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:61 ADC #32
    case 0xC0263C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:61 ADC #32
    // Overlapping static entry reached from 0xC0263C.
    case 0xC0263E: {
        Instruction step(cpu, 0x00, 0x000048u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:62 PHA
    case 0xC0263F: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:63 LDA @VIRTUAL02
    case 0xC02640: {
        Instruction step(cpu, 0xA5, 0x000002u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:64 PLY
    case 0xC02642: {
        Instruction step(cpu, 0x7A, 0x000000u, 1u, AddressMode::Implied);
        step.pull_y();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:65 STY @VIRTUAL02
    case 0xC02643: {
        Instruction step(cpu, 0x84, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_y();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:66 CMP @VIRTUAL02
    case 0xC02645: {
        Instruction step(cpu, 0xC5, 0x000002u, 2u, AddressMode::DirectPage);
        step.compare_accumulator();
        return step.finish();
    }
    // src/unknown/C0/C025CF.asm:67 BNE @UNKNOWN0
    case 0xC02647: {
        Instruction step(cpu, 0xD0, 0x0000C2u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C0/C025CF.asm:69 END_C_FUNCTION
    case 0xC02649: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C0/C025CF.asm:69 END_C_FUNCTION
    case 0xC0264A: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
