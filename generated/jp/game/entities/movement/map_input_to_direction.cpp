// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/map_input_to_direction.asm
bool resume_overworld_map_input_to_direction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/map_input_to_direction.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC042D6: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/map_input_to_direction.asm:9 END_STACK_VARS
    case 0xC042D8: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/map_input_to_direction.asm:9 END_STACK_VARS
    case 0xC042D9: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/map_input_to_direction.asm:9 END_STACK_VARS
    case 0xC042DA: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/map_input_to_direction.asm:9 END_STACK_VARS
    case 0xC042DB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/map_input_to_direction.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC042DB.
    case 0xC042DD: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/map_input_to_direction.asm:9 END_STACK_VARS
    case 0xC042DE: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/map_input_to_direction.asm:9 END_STACK_VARS
    case 0xC042DF: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:10 STA @LOCAL01
    case 0xC042E0: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:10 STA @LOCAL01
    // Overlapping static entry reached from 0xC042DD.
    case 0xC042E1: {
        Instruction step(cpu, 0x10, 0x0000A2u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:11 LDX #.LOWORD(-1)
    case 0xC042E2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:11 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC042E1.
    case 0xC042E3: {
        Instruction step(cpu, 0xFF, 0x0E86FFu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:11 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC042E2.
    case 0xC042E4: {
        Instruction step(cpu, 0xFF, 0xAD0E86u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:12 STX @LOCAL00
    case 0xC042E5: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:13 LDA PENDING_INTERACTIONS
    case 0xC042E7: {
        Instruction step(cpu, 0xAD, 0x006120u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:13 LDA PENDING_INTERACTIONS
    // Overlapping static entry reached from 0xC042E4.
    case 0xC042E8: {
        Instruction step(cpu, 0x20, 0x00F061u, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:14 BEQ @UNKNOWN0
    case 0xC042EA: {
        Instruction step(cpu, 0xF0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:14 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC042E8.
    case 0xC042EB: {
        Instruction step(cpu, 0x04, 0x00008Au, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:15 TXA
    case 0xC042EC: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:16 JMP @RETURN
    case 0xC042ED: {
        Instruction step(cpu, 0x4C, 0x00439Bu, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:18 LDA @LOCAL01
    case 0xC042F0: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:19 ASL
    case 0xC042F2: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:20 TAX
    case 0xC042F3: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:21 LDA f:ALLOWED_INPUT_DIRECTIONS,X
    case 0xC042F4: {
        Instruction step(cpu, 0xBF, 0xC3E116u, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:22 STA @LOCAL01
    case 0xC042F8: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:23 LDA PAD_STATE
    case 0xC042FA: {
        Instruction step(cpu, 0xAD, 0x000065u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:24 AND #PAD::UP | PAD::DOWN | PAD::LEFT | PAD::RIGHT
    case 0xC042FD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000F00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:24 AND #PAD::UP | PAD::DOWN | PAD::LEFT | PAD::RIGHT
    // Overlapping static entry reached from 0xC042FD.
    case 0xC042FF: {
        Instruction step(cpu, 0x0F, 0x0800C9u, 4u, AddressMode::Long);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:25 CMP #PAD::UP
    case 0xC04300: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:25 CMP #PAD::UP
    // Overlapping static entry reached from 0xC04300.
    case 0xC04302: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:26 BEQ @UP_PRESSED
    case 0xC04303: {
        Instruction step(cpu, 0xF0, 0x000025u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:27 CMP #PAD::UP | PAD::RIGHT
    case 0xC04305: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000900u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:27 CMP #PAD::UP | PAD::RIGHT
    // Overlapping static entry reached from 0xC04305.
    case 0xC04307: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x0000F0u : 0x002EF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:28 BEQ @UP_RIGHT_PRESSED
    case 0xC04308: {
        Instruction step(cpu, 0xF0, 0x00002Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:28 BEQ @UP_RIGHT_PRESSED
    // Overlapping static entry reached from 0xC04307.
    case 0xC04309: {
        Instruction step(cpu, 0x2E, 0x0000C9u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:29 CMP #PAD::RIGHT
    case 0xC0430A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:29 CMP #PAD::RIGHT
    // Overlapping static entry reached from 0xC0430A.
    case 0xC0430C: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:30 BEQ @RIGHT_PRESSED
    case 0xC0430D: {
        Instruction step(cpu, 0xF0, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:30 BEQ @RIGHT_PRESSED
    // Overlapping static entry reached from 0xC0430C.
    case 0xC0430E: {
        Instruction step(cpu, 0x37, 0x0000C9u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:31 CMP #PAD::DOWN | PAD::RIGHT
    case 0xC0430F: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:31 CMP #PAD::DOWN | PAD::RIGHT
    // Overlapping static entry reached from 0xC0430E.
    case 0xC04310: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:31 CMP #PAD::DOWN | PAD::RIGHT
    // Overlapping static entry reached from 0xC0430F.
    case 0xC04311: {
        Instruction step(cpu, 0x05, 0x0000F0u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:32 BEQ @DOWN_RIGHT_PRESSED
    case 0xC04312: {
        Instruction step(cpu, 0xF0, 0x000040u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:32 BEQ @DOWN_RIGHT_PRESSED
    // Overlapping static entry reached from 0xC04311.
    case 0xC04313: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:33 CMP #PAD::DOWN
    case 0xC04314: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:33 CMP #PAD::DOWN
    // Overlapping static entry reached from 0xC04314.
    case 0xC04316: {
        Instruction step(cpu, 0x04, 0x0000F0u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:34 BEQ @DOWN_PRESSED
    case 0xC04317: {
        Instruction step(cpu, 0xF0, 0x000049u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:34 BEQ @DOWN_PRESSED
    // Overlapping static entry reached from 0xC04316.
    case 0xC04318: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x0000C9u : 0x0000C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:35 CMP #PAD::DOWN | PAD::LEFT
    case 0xC04319: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000600u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:35 CMP #PAD::DOWN | PAD::LEFT
    // Overlapping static entry reached from 0xC04318.
    case 0xC0431A: {
        Instruction step(cpu, 0x00, 0x000006u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:35 CMP #PAD::DOWN | PAD::LEFT
    // Overlapping static entry reached from 0xC04319.
    case 0xC0431B: {
        Instruction step(cpu, 0x06, 0x0000F0u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:36 BEQ @DOWN_LEFT_PRESSED
    case 0xC0431C: {
        Instruction step(cpu, 0xF0, 0x000052u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:36 BEQ @DOWN_LEFT_PRESSED
    // Overlapping static entry reached from 0xC0431B.
    case 0xC0431D: {
        Instruction step(cpu, 0x52, 0x0000C9u, 2u, AddressMode::DirectPageIndirect);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:37 CMP #PAD::LEFT
    case 0xC0431E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:37 CMP #PAD::LEFT
    // Overlapping static entry reached from 0xC0431D.
    case 0xC0431F: {
        Instruction step(cpu, 0x00, 0x000002u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:37 CMP #PAD::LEFT
    // Overlapping static entry reached from 0xC0431E.
    case 0xC04320: {
        Instruction step(cpu, 0x02, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:38 BEQ @LEFT_PRESSED
    case 0xC04321: {
        Instruction step(cpu, 0xF0, 0x00005Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:39 CMP #PAD::UP | PAD::LEFT
    case 0xC04323: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000A00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:39 CMP #PAD::UP | PAD::LEFT
    // Overlapping static entry reached from 0xC04323.
    case 0xC04325: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:40 BEQ @UP_LEFT_PRESSED
    case 0xC04326: {
        Instruction step(cpu, 0xF0, 0x000064u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:41 BRA @RETURN_DEFAULT
    case 0xC04328: {
        Instruction step(cpu, 0x80, 0x00006Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:43 LDA @LOCAL01
    case 0xC0432A: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:44 AND #DIRECTION_MASK::UP
    case 0xC0432C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:44 AND #DIRECTION_MASK::UP
    // Overlapping static entry reached from 0xC0432C.
    case 0xC0432E: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:45 BEQ @RETURN_DEFAULT
    case 0xC0432F: {
        Instruction step(cpu, 0xF0, 0x000067u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:46 LDX #DIRECTION::UP
    case 0xC04331: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:46 LDX #DIRECTION::UP
    // Overlapping static entry reached from 0xC04331.
    case 0xC04333: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:47 STX @LOCAL00
    case 0xC04334: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:48 BRA @RETURN_DEFAULT
    case 0xC04336: {
        Instruction step(cpu, 0x80, 0x000060u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:50 LDA @LOCAL01
    case 0xC04338: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:51 AND #DIRECTION_MASK::UP_RIGHT
    case 0xC0433A: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:51 AND #DIRECTION_MASK::UP_RIGHT
    // Overlapping static entry reached from 0xC0433A.
    case 0xC0433C: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:52 BEQ @RETURN_DEFAULT
    case 0xC0433D: {
        Instruction step(cpu, 0xF0, 0x000059u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:53 LDX #DIRECTION::UP_RIGHT
    case 0xC0433F: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:53 LDX #DIRECTION::UP_RIGHT
    // Overlapping static entry reached from 0xC0433F.
    case 0xC04341: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:54 STX @LOCAL00
    case 0xC04342: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:55 BRA @RETURN_DEFAULT
    case 0xC04344: {
        Instruction step(cpu, 0x80, 0x000052u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:57 LDA @LOCAL01
    case 0xC04346: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:58 AND #DIRECTION_MASK::RIGHT
    case 0xC04348: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:58 AND #DIRECTION_MASK::RIGHT
    // Overlapping static entry reached from 0xC04348.
    case 0xC0434A: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:59 BEQ @RETURN_DEFAULT
    case 0xC0434B: {
        Instruction step(cpu, 0xF0, 0x00004Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:60 LDX #DIRECTION::RIGHT
    case 0xC0434D: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:60 LDX #DIRECTION::RIGHT
    // Overlapping static entry reached from 0xC0434D.
    case 0xC0434F: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:61 STX @LOCAL00
    case 0xC04350: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:62 BRA @RETURN_DEFAULT
    case 0xC04352: {
        Instruction step(cpu, 0x80, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:64 LDA @LOCAL01
    case 0xC04354: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:65 AND #DIRECTION_MASK::DOWN_RIGHT
    case 0xC04356: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:65 AND #DIRECTION_MASK::DOWN_RIGHT
    // Overlapping static entry reached from 0xC04356.
    case 0xC04358: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:66 BEQ @RETURN_DEFAULT
    case 0xC04359: {
        Instruction step(cpu, 0xF0, 0x00003Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:67 LDX #DIRECTION::DOWN_RIGHT
    case 0xC0435B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:67 LDX #DIRECTION::DOWN_RIGHT
    // Overlapping static entry reached from 0xC0435B.
    case 0xC0435D: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:68 STX @LOCAL00
    case 0xC0435E: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:69 BRA @RETURN_DEFAULT
    case 0xC04360: {
        Instruction step(cpu, 0x80, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:71 LDA @LOCAL01
    case 0xC04362: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:72 AND #DIRECTION_MASK::DOWN
    case 0xC04364: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:72 AND #DIRECTION_MASK::DOWN
    // Overlapping static entry reached from 0xC04364.
    case 0xC04366: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:73 BEQ @RETURN_DEFAULT
    case 0xC04367: {
        Instruction step(cpu, 0xF0, 0x00002Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:74 LDX #DIRECTION::DOWN
    case 0xC04369: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:74 LDX #DIRECTION::DOWN
    // Overlapping static entry reached from 0xC04369.
    case 0xC0436B: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:75 STX @LOCAL00
    case 0xC0436C: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:76 BRA @RETURN_DEFAULT
    case 0xC0436E: {
        Instruction step(cpu, 0x80, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:78 LDA @LOCAL01
    case 0xC04370: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:79 AND #DIRECTION_MASK::DOWN_LEFT
    case 0xC04372: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:79 AND #DIRECTION_MASK::DOWN_LEFT
    // Overlapping static entry reached from 0xC04372.
    case 0xC04374: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:80 BEQ @RETURN_DEFAULT
    case 0xC04375: {
        Instruction step(cpu, 0xF0, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:81 LDX #DIRECTION::DOWN_LEFT
    case 0xC04377: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:81 LDX #DIRECTION::DOWN_LEFT
    // Overlapping static entry reached from 0xC04377.
    case 0xC04379: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:82 STX @LOCAL00
    case 0xC0437A: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:83 BRA @RETURN_DEFAULT
    case 0xC0437C: {
        Instruction step(cpu, 0x80, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:85 LDA @LOCAL01
    case 0xC0437E: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:86 AND #DIRECTION_MASK::LEFT
    case 0xC04380: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:86 AND #DIRECTION_MASK::LEFT
    // Overlapping static entry reached from 0xC04380.
    case 0xC04382: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:87 BEQ @RETURN_DEFAULT
    case 0xC04383: {
        Instruction step(cpu, 0xF0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:88 LDX #DIRECTION::LEFT
    case 0xC04385: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:88 LDX #DIRECTION::LEFT
    // Overlapping static entry reached from 0xC04385.
    case 0xC04387: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:89 STX @LOCAL00
    case 0xC04388: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:90 BRA @RETURN_DEFAULT
    case 0xC0438A: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:92 LDA @LOCAL01
    case 0xC0438C: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:93 AND #DIRECTION_MASK::UP_LEFT
    case 0xC0438E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:93 AND #DIRECTION_MASK::UP_LEFT
    // Overlapping static entry reached from 0xC0438E.
    case 0xC04390: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:94 BEQ @RETURN_DEFAULT
    case 0xC04391: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:95 LDX #DIRECTION::UP_LEFT
    case 0xC04393: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:95 LDX #DIRECTION::UP_LEFT
    // Overlapping static entry reached from 0xC04393.
    case 0xC04395: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:96 STX @LOCAL00
    case 0xC04396: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:98 LDX @LOCAL00
    case 0xC04398: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:99 TXA
    case 0xC0439A: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/map_input_to_direction.asm:101 END_C_FUNCTION
    case 0xC0439B: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/map_input_to_direction.asm:101 END_C_FUNCTION
    case 0xC0439C: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
