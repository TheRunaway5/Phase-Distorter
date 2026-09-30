// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::us {
// Source: src/overworld/map_input_to_direction.asm
bool resume_overworld_map_input_to_direction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/map_input_to_direction.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0404F: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/map_input_to_direction.asm:9 END_STACK_VARS
    case 0xC04051: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/map_input_to_direction.asm:9 END_STACK_VARS
    case 0xC04052: {
        Instruction step(cpu, 0x48, 0x000000u, 1u, AddressMode::Implied);
        step.push_accumulator();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/map_input_to_direction.asm:9 END_STACK_VARS
    case 0xC04053: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/map_input_to_direction.asm:9 END_STACK_VARS
    case 0xC04054: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/map_input_to_direction.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC04054.
    case 0xC04056: {
        Instruction step(cpu, 0xFF, 0x85685Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/map_input_to_direction.asm:9 END_STACK_VARS
    case 0xC04057: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/map_input_to_direction.asm:9 END_STACK_VARS
    case 0xC04058: {
        Instruction step(cpu, 0x68, 0x000000u, 1u, AddressMode::Implied);
        step.pull_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:10 STA @LOCAL01
    case 0xC04059: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:10 STA @LOCAL01
    // Overlapping static entry reached from 0xC04056.
    case 0xC0405A: {
        Instruction step(cpu, 0x10, 0x0000A2u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:11 LDX #.LOWORD(-1)
    case 0xC0405B: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:11 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0405A.
    case 0xC0405C: {
        Instruction step(cpu, 0xFF, 0x0E86FFu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:11 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0405B.
    case 0xC0405D: {
        Instruction step(cpu, 0xFF, 0xAD0E86u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:12 STX @LOCAL00
    case 0xC0405E: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:13 LDA PENDING_INTERACTIONS
    case 0xC04060: {
        Instruction step(cpu, 0xAD, 0x005D9Au, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:13 LDA PENDING_INTERACTIONS
    // Overlapping static entry reached from 0xC0405D.
    case 0xC04061: {
        Instruction step(cpu, 0x9A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_stack();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:13 LDA PENDING_INTERACTIONS
    // Overlapping static entry reached from 0xC04061.
    case 0xC04062: {
        Instruction step(cpu, 0x5D, 0x0004F0u, 3u, AddressMode::AbsoluteIndexedX);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:14 BEQ @UNKNOWN0
    case 0xC04063: {
        Instruction step(cpu, 0xF0, 0x000004u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:15 TXA
    case 0xC04065: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:16 JMP @RETURN
    case 0xC04066: {
        Instruction step(cpu, 0x4C, 0x004114u, 3u, AddressMode::Absolute);
        step.jump();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:18 LDA @LOCAL01
    case 0xC04069: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:19 ASL
    case 0xC0406B: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:20 TAX
    case 0xC0406C: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:21 LDA f:ALLOWED_INPUT_DIRECTIONS,X
    case 0xC0406D: {
        Instruction step(cpu, 0xBF, 0xC3E12Cu, 4u, AddressMode::LongIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:22 STA @LOCAL01
    case 0xC04071: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:23 LDA PAD_STATE
    case 0xC04073: {
        Instruction step(cpu, 0xAD, 0x000065u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:24 AND #PAD::UP | PAD::DOWN | PAD::LEFT | PAD::RIGHT
    case 0xC04076: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000000u : 0x000F00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:24 AND #PAD::UP | PAD::DOWN | PAD::LEFT | PAD::RIGHT
    // Overlapping static entry reached from 0xC04076.
    case 0xC04078: {
        Instruction step(cpu, 0x0F, 0x0800C9u, 4u, AddressMode::Long);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:25 CMP #PAD::UP
    case 0xC04079: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000800u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:25 CMP #PAD::UP
    // Overlapping static entry reached from 0xC04079.
    case 0xC0407B: {
        Instruction step(cpu, 0x08, 0x000000u, 1u, AddressMode::Implied);
        step.push_status();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:26 BEQ @UP_PRESSED
    case 0xC0407C: {
        Instruction step(cpu, 0xF0, 0x000025u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:27 CMP #PAD::UP | PAD::RIGHT
    case 0xC0407E: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000900u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:27 CMP #PAD::UP | PAD::RIGHT
    // Overlapping static entry reached from 0xC0407E.
    case 0xC04080: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x09, narrow ? 0x0000F0u : 0x002EF0u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:28 BEQ @UP_RIGHT_PRESSED
    case 0xC04081: {
        Instruction step(cpu, 0xF0, 0x00002Eu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:28 BEQ @UP_RIGHT_PRESSED
    // Overlapping static entry reached from 0xC04080.
    case 0xC04082: {
        Instruction step(cpu, 0x2E, 0x0000C9u, 3u, AddressMode::Absolute);
        step.rotate_left();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:29 CMP #PAD::RIGHT
    case 0xC04083: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000100u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:29 CMP #PAD::RIGHT
    // Overlapping static entry reached from 0xC04083.
    case 0xC04085: {
        Instruction step(cpu, 0x01, 0x0000F0u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:30 BEQ @RIGHT_PRESSED
    case 0xC04086: {
        Instruction step(cpu, 0xF0, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:30 BEQ @RIGHT_PRESSED
    // Overlapping static entry reached from 0xC04085.
    case 0xC04087: {
        Instruction step(cpu, 0x37, 0x0000C9u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:31 CMP #PAD::DOWN | PAD::RIGHT
    case 0xC04088: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000500u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:31 CMP #PAD::DOWN | PAD::RIGHT
    // Overlapping static entry reached from 0xC04087.
    case 0xC04089: {
        Instruction step(cpu, 0x00, 0x000005u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:31 CMP #PAD::DOWN | PAD::RIGHT
    // Overlapping static entry reached from 0xC04088.
    case 0xC0408A: {
        Instruction step(cpu, 0x05, 0x0000F0u, 2u, AddressMode::DirectPage);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:32 BEQ @DOWN_RIGHT_PRESSED
    case 0xC0408B: {
        Instruction step(cpu, 0xF0, 0x000040u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:32 BEQ @DOWN_RIGHT_PRESSED
    // Overlapping static entry reached from 0xC0408A.
    case 0xC0408C: {
        Instruction step(cpu, 0x40, 0x000000u, 1u, AddressMode::Implied);
        step.return_from_interrupt();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:33 CMP #PAD::DOWN
    case 0xC0408D: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000400u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:33 CMP #PAD::DOWN
    // Overlapping static entry reached from 0xC0408D.
    case 0xC0408F: {
        Instruction step(cpu, 0x04, 0x0000F0u, 2u, AddressMode::DirectPage);
        step.set_tested_bits();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:34 BEQ @DOWN_PRESSED
    case 0xC04090: {
        Instruction step(cpu, 0xF0, 0x000049u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:34 BEQ @DOWN_PRESSED
    // Overlapping static entry reached from 0xC0408F.
    case 0xC04091: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x49, narrow ? 0x0000C9u : 0x0000C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:35 CMP #PAD::DOWN | PAD::LEFT
    case 0xC04092: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000600u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:35 CMP #PAD::DOWN | PAD::LEFT
    // Overlapping static entry reached from 0xC04091.
    case 0xC04093: {
        Instruction step(cpu, 0x00, 0x000006u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:35 CMP #PAD::DOWN | PAD::LEFT
    // Overlapping static entry reached from 0xC04092.
    case 0xC04094: {
        Instruction step(cpu, 0x06, 0x0000F0u, 2u, AddressMode::DirectPage);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:36 BEQ @DOWN_LEFT_PRESSED
    case 0xC04095: {
        Instruction step(cpu, 0xF0, 0x000052u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:36 BEQ @DOWN_LEFT_PRESSED
    // Overlapping static entry reached from 0xC04094.
    case 0xC04096: {
        Instruction step(cpu, 0x52, 0x0000C9u, 2u, AddressMode::DirectPageIndirect);
        step.xor_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:37 CMP #PAD::LEFT
    case 0xC04097: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000200u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:37 CMP #PAD::LEFT
    // Overlapping static entry reached from 0xC04096.
    case 0xC04098: {
        Instruction step(cpu, 0x00, 0x000002u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:37 CMP #PAD::LEFT
    // Overlapping static entry reached from 0xC04097.
    case 0xC04099: {
        Instruction step(cpu, 0x02, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.coprocessor_interrupt();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:38 BEQ @LEFT_PRESSED
    case 0xC0409A: {
        Instruction step(cpu, 0xF0, 0x00005Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:39 CMP #PAD::UP | PAD::LEFT
    case 0xC0409C: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000A00u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:39 CMP #PAD::UP | PAD::LEFT
    // Overlapping static entry reached from 0xC0409C.
    case 0xC0409E: {
        Instruction step(cpu, 0x0A, 0x000000u, 1u, AddressMode::Accumulator);
        step.shift_left();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:40 BEQ @UP_LEFT_PRESSED
    case 0xC0409F: {
        Instruction step(cpu, 0xF0, 0x000064u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:41 BRA @RETURN_DEFAULT
    case 0xC040A1: {
        Instruction step(cpu, 0x80, 0x00006Eu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:43 LDA @LOCAL01
    case 0xC040A3: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:44 AND #DIRECTION_MASK::UP
    case 0xC040A5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:44 AND #DIRECTION_MASK::UP
    // Overlapping static entry reached from 0xC040A5.
    case 0xC040A7: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:45 BEQ @RETURN_DEFAULT
    case 0xC040A8: {
        Instruction step(cpu, 0xF0, 0x000067u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:46 LDX #DIRECTION::UP
    case 0xC040AA: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:46 LDX #DIRECTION::UP
    // Overlapping static entry reached from 0xC040AA.
    case 0xC040AC: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:47 STX @LOCAL00
    case 0xC040AD: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:48 BRA @RETURN_DEFAULT
    case 0xC040AF: {
        Instruction step(cpu, 0x80, 0x000060u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:50 LDA @LOCAL01
    case 0xC040B1: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:51 AND #DIRECTION_MASK::UP_RIGHT
    case 0xC040B3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:51 AND #DIRECTION_MASK::UP_RIGHT
    // Overlapping static entry reached from 0xC040B3.
    case 0xC040B5: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:52 BEQ @RETURN_DEFAULT
    case 0xC040B6: {
        Instruction step(cpu, 0xF0, 0x000059u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:53 LDX #DIRECTION::UP_RIGHT
    case 0xC040B8: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:53 LDX #DIRECTION::UP_RIGHT
    // Overlapping static entry reached from 0xC040B8.
    case 0xC040BA: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:54 STX @LOCAL00
    case 0xC040BB: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:55 BRA @RETURN_DEFAULT
    case 0xC040BD: {
        Instruction step(cpu, 0x80, 0x000052u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:57 LDA @LOCAL01
    case 0xC040BF: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:58 AND #DIRECTION_MASK::RIGHT
    case 0xC040C1: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:58 AND #DIRECTION_MASK::RIGHT
    // Overlapping static entry reached from 0xC040C1.
    case 0xC040C3: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:59 BEQ @RETURN_DEFAULT
    case 0xC040C4: {
        Instruction step(cpu, 0xF0, 0x00004Bu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:60 LDX #DIRECTION::RIGHT
    case 0xC040C6: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000002u : 0x000002u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:60 LDX #DIRECTION::RIGHT
    // Overlapping static entry reached from 0xC040C6.
    case 0xC040C8: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:61 STX @LOCAL00
    case 0xC040C9: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:62 BRA @RETURN_DEFAULT
    case 0xC040CB: {
        Instruction step(cpu, 0x80, 0x000044u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:64 LDA @LOCAL01
    case 0xC040CD: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:65 AND #DIRECTION_MASK::DOWN_RIGHT
    case 0xC040CF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000008u : 0x000008u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:65 AND #DIRECTION_MASK::DOWN_RIGHT
    // Overlapping static entry reached from 0xC040CF.
    case 0xC040D1: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:66 BEQ @RETURN_DEFAULT
    case 0xC040D2: {
        Instruction step(cpu, 0xF0, 0x00003Du, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:67 LDX #DIRECTION::DOWN_RIGHT
    case 0xC040D4: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000003u : 0x000003u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:67 LDX #DIRECTION::DOWN_RIGHT
    // Overlapping static entry reached from 0xC040D4.
    case 0xC040D6: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:68 STX @LOCAL00
    case 0xC040D7: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:69 BRA @RETURN_DEFAULT
    case 0xC040D9: {
        Instruction step(cpu, 0x80, 0x000036u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:71 LDA @LOCAL01
    case 0xC040DB: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:72 AND #DIRECTION_MASK::DOWN
    case 0xC040DD: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000010u : 0x000010u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:72 AND #DIRECTION_MASK::DOWN
    // Overlapping static entry reached from 0xC040DD.
    case 0xC040DF: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:73 BEQ @RETURN_DEFAULT
    case 0xC040E0: {
        Instruction step(cpu, 0xF0, 0x00002Fu, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:74 LDX #DIRECTION::DOWN
    case 0xC040E2: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:74 LDX #DIRECTION::DOWN
    // Overlapping static entry reached from 0xC040E2.
    case 0xC040E4: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:75 STX @LOCAL00
    case 0xC040E5: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:76 BRA @RETURN_DEFAULT
    case 0xC040E7: {
        Instruction step(cpu, 0x80, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:78 LDA @LOCAL01
    case 0xC040E9: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:79 AND #DIRECTION_MASK::DOWN_LEFT
    case 0xC040EB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000020u : 0x000020u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:79 AND #DIRECTION_MASK::DOWN_LEFT
    // Overlapping static entry reached from 0xC040EB.
    case 0xC040ED: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:80 BEQ @RETURN_DEFAULT
    case 0xC040EE: {
        Instruction step(cpu, 0xF0, 0x000021u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:81 LDX #DIRECTION::DOWN_LEFT
    case 0xC040F0: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000005u : 0x000005u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:81 LDX #DIRECTION::DOWN_LEFT
    // Overlapping static entry reached from 0xC040F0.
    case 0xC040F2: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:82 STX @LOCAL00
    case 0xC040F3: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:83 BRA @RETURN_DEFAULT
    case 0xC040F5: {
        Instruction step(cpu, 0x80, 0x00001Au, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:85 LDA @LOCAL01
    case 0xC040F7: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:86 AND #DIRECTION_MASK::LEFT
    case 0xC040F9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000040u : 0x000040u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:86 AND #DIRECTION_MASK::LEFT
    // Overlapping static entry reached from 0xC040F9.
    case 0xC040FB: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:87 BEQ @RETURN_DEFAULT
    case 0xC040FC: {
        Instruction step(cpu, 0xF0, 0x000013u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:88 LDX #DIRECTION::LEFT
    case 0xC040FE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000006u : 0x000006u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:88 LDX #DIRECTION::LEFT
    // Overlapping static entry reached from 0xC040FE.
    case 0xC04100: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:89 STX @LOCAL00
    case 0xC04101: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:90 BRA @RETURN_DEFAULT
    case 0xC04103: {
        Instruction step(cpu, 0x80, 0x00000Cu, 2u, AddressMode::Relative8);
        step.branch_always();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:92 LDA @LOCAL01
    case 0xC04105: {
        Instruction step(cpu, 0xA5, 0x000010u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:93 AND #DIRECTION_MASK::UP_LEFT
    case 0xC04107: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x29, narrow ? 0x000080u : 0x000080u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.and_accumulator();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:93 AND #DIRECTION_MASK::UP_LEFT
    // Overlapping static entry reached from 0xC04107.
    case 0xC04109: {
        Instruction step(cpu, 0x00, 0x0000F0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:94 BEQ @RETURN_DEFAULT
    case 0xC0410A: {
        Instruction step(cpu, 0xF0, 0x000005u, 2u, AddressMode::Relative8);
        step.branch_if_zero();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:95 LDX #DIRECTION::UP_LEFT
    case 0xC0410C: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xA2, narrow ? 0x000007u : 0x000007u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:95 LDX #DIRECTION::UP_LEFT
    // Overlapping static entry reached from 0xC0410C.
    case 0xC0410E: {
        Instruction step(cpu, 0x00, 0x000086u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:96 STX @LOCAL00
    case 0xC0410F: {
        Instruction step(cpu, 0x86, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:98 LDX @LOCAL00
    case 0xC04111: {
        Instruction step(cpu, 0xA6, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.load_x();
        return step.finish();
    }
    // src/overworld/map_input_to_direction.asm:99 TXA
    case 0xC04113: {
        Instruction step(cpu, 0x8A, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_x_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/map_input_to_direction.asm:101 END_C_FUNCTION
    case 0xC04114: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/map_input_to_direction.asm:101 END_C_FUNCTION
    case 0xC04115: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
