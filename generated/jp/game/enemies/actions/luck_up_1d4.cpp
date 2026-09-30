// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/battle/actions/luck_up_1d4.asm
bool resume_battle_actions_luck_up_1d4(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/actions/luck_up_1d4.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2A1D0: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/actions/luck_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A1D2: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/actions/luck_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A1D3: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/luck_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A1D4: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000E8u : 0x00FFE8u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/actions/luck_up_1d4.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2A1D4.
    case 0xC2A1D6: {
        Instruction step(cpu, 0xFF, 0x04A95Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/actions/luck_up_1d4.asm:8 END_STACK_VARS
    case 0xC2A1D7: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/battle/actions/luck_up_1d4.asm:9 LDA #4
    case 0xC2A1D8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000004u : 0x000004u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/luck_up_1d4.asm:9 LDA #4
    // Overlapping static entry reached from 0xC2A1D8.
    case 0xC2A1DA: {
        Instruction step(cpu, 0x00, 0x000020u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/luck_up_1d4.asm:10 JSR RAND_LIMIT
    case 0xC2A1DB: {
        Instruction step(cpu, 0x20, 0x00696Cu, 3u, AddressMode::Absolute);
        step.call();
        return step.finish();
    }
    // src/battle/actions/luck_up_1d4.asm:11 INC
    case 0xC2A1DE: {
        Instruction step(cpu, 0x1A, 0x000000u, 1u, AddressMode::Accumulator);
        step.increment();
        return step.finish();
    }
    // src/battle/actions/luck_up_1d4.asm:12 STA @LOCAL02
    case 0xC2A1DF: {
        Instruction step(cpu, 0x85, 0x000016u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/luck_up_1d4.asm:13 LDA CURRENT_TARGET
    case 0xC2A1E1: {
        Instruction step(cpu, 0xAD, 0x00AB74u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/luck_up_1d4.asm:14 CLC
    case 0xC2A1E4: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/luck_up_1d4.asm:15 ADC #battler::luck
    case 0xC2A1E5: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x00002Eu : 0x00002Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/luck_up_1d4.asm:15 ADC #battler::luck
    // Overlapping static entry reached from 0xC2A1E5.
    case 0xC2A1E7: {
        Instruction step(cpu, 0x00, 0x0000AAu, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/battle/actions/luck_up_1d4.asm:16 TAX
    case 0xC2A1E8: {
        Instruction step(cpu, 0xAA, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_x();
        return step.finish();
    }
    // src/battle/actions/luck_up_1d4.asm:17 LDA @LOCAL02
    case 0xC2A1E9: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/luck_up_1d4.asm:18 STA @VIRTUAL02
    case 0xC2A1EB: {
        Instruction step(cpu, 0x85, 0x000002u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/luck_up_1d4.asm:19 LDA __BSS_START__,X
    case 0xC2A1ED: {
        Instruction step(cpu, 0xBD, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.load_accumulator();
        return step.finish();
    }
    // src/battle/actions/luck_up_1d4.asm:20 CLC
    case 0xC2A1F0: {
        Instruction step(cpu, 0x18, 0x000000u, 1u, AddressMode::Implied);
        step.clear_carry();
        return step.finish();
    }
    // src/battle/actions/luck_up_1d4.asm:21 ADC @VIRTUAL02
    case 0xC2A1F1: {
        Instruction step(cpu, 0x65, 0x000002u, 2u, AddressMode::DirectPage);
        step.add_with_carry();
        return step.finish();
    }
    // src/battle/actions/luck_up_1d4.asm:22 STA __BSS_START__,X
    case 0xC2A1F3: {
        Instruction step(cpu, 0x9D, 0x000000u, 3u, AddressMode::AbsoluteIndexedX);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/luck_up_1d4.asm:23 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    case 0xC2A1F6: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000013u : 0x003713u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/actions/luck_up_1d4.asm:23 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2A1F6.
    case 0xC2A1F8: {
        Instruction step(cpu, 0x37, 0x000085u, 2u, AddressMode::DirectPageIndirectLongIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/luck_up_1d4.asm:23 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    case 0xC2A1F9: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/actions/luck_up_1d4.asm:23 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2A1F8.
    case 0xC2A1FA: {
        Instruction step(cpu, 0x0E, 0x00C7A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/luck_up_1d4.asm:23 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    case 0xC2A1FB: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C7u : 0x0000C7u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/actions/luck_up_1d4.asm:23 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    // Overlapping static entry reached from 0xC2A1FB.
    case 0xC2A1FD: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/actions/luck_up_1d4.asm:23 LOADPTR MSG_BTL_LUCK_UP, @LOCAL00
    case 0xC2A1FE: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:865 LDA src
    // Macro caller: src/battle/actions/luck_up_1d4.asm:24 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A200: {
        Instruction step(cpu, 0xA5, 0x000016u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/actions/luck_up_1d4.asm:24 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A202: {
        Instruction step(cpu, 0x85, 0x000006u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/actions/luck_up_1d4.asm:24 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A204: {
        Instruction step(cpu, 0x64, 0x000008u, 2u, AddressMode::DirectPage);
        step.store_zero();
        return step.finish();
    }
    // include/macros.asm:876 BPL :+
    // Macro caller: src/battle/actions/luck_up_1d4.asm:24 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A206: {
        Instruction step(cpu, 0x10, 0x000002u, 2u, AddressMode::Relative8);
        step.branch_if_nonnegative();
        return step.finish();
    }
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/battle/actions/luck_up_1d4.asm:24 MOVE_INT1632S @LOCAL02, @VIRTUAL06
    case 0xC2A208: {
        Instruction step(cpu, 0xC6, 0x000008u, 2u, AddressMode::DirectPage);
        step.decrement();
        return step.finish();
    }
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/actions/luck_up_1d4.asm:25 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A20A: {
        Instruction step(cpu, 0xA5, 0x000006u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/actions/luck_up_1d4.asm:25 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A20C: {
        Instruction step(cpu, 0x85, 0x000012u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/actions/luck_up_1d4.asm:25 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A20E: {
        Instruction step(cpu, 0xA5, 0x000008u, 2u, AddressMode::DirectPage);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/actions/luck_up_1d4.asm:25 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2A210: {
        Instruction step(cpu, 0x85, 0x000014u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/battle/actions/luck_up_1d4.asm:26 JSL DISPLAY_TEXT_WAIT
    case 0xC2A212: {
        Instruction step(cpu, 0x22, 0xC1DA49u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/actions/luck_up_1d4.asm:27 END_C_FUNCTION
    case 0xC2A216: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/actions/luck_up_1d4.asm:27 END_C_FUNCTION
    case 0xC2A217: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
