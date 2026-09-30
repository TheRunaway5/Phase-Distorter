// Source-derived resumable game runtime. Regenerate with cpp/tools/port_game_runtime.py.
#include "eb/game/runtime/instruction.hpp"
#include "eb/main_cpu_65816.hpp"

namespace eb::game::runtime::jp {
// Source: src/overworld/load_dad_phone.asm
bool resume_overworld_load_dad_phone(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/load_dad_phone.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0DC8E: {
        Instruction step(cpu, 0xC2, 0x000031u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/load_dad_phone.asm:6 END_STACK_VARS
    case 0xC0DC90: {
        Instruction step(cpu, 0x0B, 0x000000u, 1u, AddressMode::Implied);
        step.push_direct_page();
        return step.finish();
    }
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/load_dad_phone.asm:6 END_STACK_VARS
    case 0xC0DC91: {
        Instruction step(cpu, 0x7B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_direct_page_to_accumulator();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_dad_phone.asm:6 END_STACK_VARS
    case 0xC0DC92: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0x69, narrow ? 0x0000EEu : 0x00FFEEu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.add_with_carry();
        return step.finish();
    }
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/load_dad_phone.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0DC92.
    case 0xC0DC94: {
        Instruction step(cpu, 0xFF, 0x22AD5Bu, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/load_dad_phone.asm:6 END_STACK_VARS
    case 0xC0DC95: {
        Instruction step(cpu, 0x5B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_accumulator_to_direct_page();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:7 LDA WINDOW_HEAD
    case 0xC0DC96: {
        Instruction step(cpu, 0xAD, 0x008C22u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:7 LDA WINDOW_HEAD
    // Overlapping static entry reached from 0xC0DC94.
    case 0xC0DC98: {
        Instruction step(cpu, 0x8C, 0x00FFC9u, 3u, AddressMode::Absolute);
        step.store_y();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:8 CMP #.LOWORD(-1)
    case 0xC0DC99: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x0000FFu : 0x00FFFFu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:8 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0DC99.
    case 0xC0DC9B: {
        Instruction step(cpu, 0xFF, 0xAD37D0u, 4u, AddressMode::LongIndexedX);
        step.subtract_with_borrow();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:9 BNE @UNKNOWN0
    case 0xC0DC9C: {
        Instruction step(cpu, 0xD0, 0x000037u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:10 LDA BATTLE_MODE_FLAG
    case 0xC0DC9E: {
        Instruction step(cpu, 0xAD, 0x00993Bu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:10 LDA BATTLE_MODE_FLAG
    // Overlapping static entry reached from 0xC0DC9B.
    case 0xC0DC9F: {
        Instruction step(cpu, 0x3B, 0x000000u, 1u, AddressMode::Implied);
        step.transfer_stack_to_accumulator();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:10 LDA BATTLE_MODE_FLAG
    // Overlapping static entry reached from 0xC0DC9F.
    case 0xC0DCA0: {
        Instruction step(cpu, 0x99, 0x0032D0u, 3u, AddressMode::AbsoluteIndexedY);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:11 BNE @UNKNOWN0
    case 0xC0DCA1: {
        Instruction step(cpu, 0xD0, 0x000032u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:12 LDA BATTLE_SWIRL_COUNTDOWN
    case 0xC0DCA3: {
        Instruction step(cpu, 0xAD, 0x0060E6u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:13 BNE @UNKNOWN0
    case 0xC0DCA6: {
        Instruction step(cpu, 0xD0, 0x00002Du, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:14 LDA ENEMY_HAS_BEEN_TOUCHED
    case 0xC0DCA8: {
        Instruction step(cpu, 0xAD, 0x005140u, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:15 BNE @UNKNOWN0
    case 0xC0DCAB: {
        Instruction step(cpu, 0xD0, 0x000028u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:16 LDA DAD_PHONE_QUEUED
    case 0xC0DCAD: {
        Instruction step(cpu, 0xAD, 0x00A05Cu, 3u, AddressMode::Absolute);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:17 BNE @UNKNOWN0
    case 0xC0DCB0: {
        Instruction step(cpu, 0xD0, 0x000023u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:18 LDA #EVENT_FLAG::FLG_SYS_DIS_2H_PAPA
    case 0xC0DCB2: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000007u : 0x000307u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:18 LDA #EVENT_FLAG::FLG_SYS_DIS_2H_PAPA
    // Overlapping static entry reached from 0xC0DCB2.
    case 0xC0DCB4: {
        Instruction step(cpu, 0x03, 0x000022u, 2u, AddressMode::StackRelative);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:19 JSL GET_EVENT_FLAG
    case 0xC0DCB5: {
        Instruction step(cpu, 0x22, 0xC214D0u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:19 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC0DCB4.
    case 0xC0DCB6: {
        Instruction step(cpu, 0xD0, 0x000014u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:19 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC0DCB6.
    case 0xC0DCB8: {
        Instruction step(cpu, 0xC2, 0x0000C9u, 2u, AddressMode::SignatureByte);
        step.clear_status_bits();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:20 CMP #0
    case 0xC0DCB9: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xC9, narrow ? 0x000000u : 0x000000u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_accumulator();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:20 CMP #0
    // Overlapping static entry reached from 0xC0DCB8.
    case 0xC0DCBA: {
        Instruction step(cpu, 0x00, 0x000000u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:20 CMP #0
    // Overlapping static entry reached from 0xC0DCB9.
    case 0xC0DCBB: {
        Instruction step(cpu, 0x00, 0x0000D0u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:21 BNE @UNKNOWN0
    case 0xC0DCBC: {
        Instruction step(cpu, 0xD0, 0x000017u, 2u, AddressMode::Relative8);
        step.branch_if_not_zero();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_dad_phone.asm:22 LOADPTR MSG_SYS_PAPA_2H, @LOCAL00
    case 0xC0DCBE: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00009Eu : 0x00319Eu, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/load_dad_phone.asm:22 LOADPTR MSG_SYS_PAPA_2H, @LOCAL00
    // Overlapping static entry reached from 0xC0DCBE.
    case 0xC0DCC0: {
        Instruction step(cpu, 0x31, 0x000085u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.and_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_dad_phone.asm:22 LOADPTR MSG_SYS_PAPA_2H, @LOCAL00
    case 0xC0DCC1: {
        Instruction step(cpu, 0x85, 0x00000Eu, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/load_dad_phone.asm:22 LOADPTR MSG_SYS_PAPA_2H, @LOCAL00
    // Overlapping static entry reached from 0xC0DCC0.
    case 0xC0DCC2: {
        Instruction step(cpu, 0x0E, 0x00C9A9u, 3u, AddressMode::Absolute);
        step.shift_left();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_dad_phone.asm:22 LOADPTR MSG_SYS_PAPA_2H, @LOCAL00
    case 0xC0DCC3: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x0000C9u : 0x0000C9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/load_dad_phone.asm:22 LOADPTR MSG_SYS_PAPA_2H, @LOCAL00
    // Overlapping static entry reached from 0xC0DCC3.
    case 0xC0DCC5: {
        Instruction step(cpu, 0x00, 0x000085u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/load_dad_phone.asm:22 LOADPTR MSG_SYS_PAPA_2H, @LOCAL00
    case 0xC0DCC6: {
        Instruction step(cpu, 0x85, 0x000010u, 2u, AddressMode::DirectPage);
        step.store_accumulator();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:23 LDA #10
    case 0xC0DCC8: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x00000Au : 0x00000Au, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:23 LDA #10
    // Overlapping static entry reached from 0xC0DCC8.
    case 0xC0DCCA: {
        Instruction step(cpu, 0x00, 0x000022u, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:24 JSL UNKNOWN_C064E3
    case 0xC0DCCB: {
        Instruction step(cpu, 0x22, 0xC06711u, 4u, AddressMode::Long);
        step.call_long();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:24 JSL UNKNOWN_C064E3
    // Overlapping static entry reached from 0xC0DCB6.
    case 0xC0DCCC: {
        Instruction step(cpu, 0x11, 0x000067u, 2u, AddressMode::DirectPageIndirectIndexedY);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:24 JSL UNKNOWN_C064E3
    // Overlapping static entry reached from 0xC0DCCC.
    case 0xC0DCCE: {
        const bool narrow = cpu.status_register & 0x10;
        Instruction step(cpu, 0xC0, narrow ? 0x0000A9u : 0x0001A9u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.compare_y();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:25 LDA #1
    case 0xC0DCCF: {
        const bool narrow = cpu.status_register & 0x20;
        Instruction step(cpu, 0xA9, narrow ? 0x000001u : 0x000001u, narrow ? 2u : 3u, AddressMode::Immediate);
        step.load_accumulator();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:25 LDA #1
    // Overlapping static entry reached from 0xC0DCCE.
    case 0xC0DCD0: {
        Instruction step(cpu, 0x01, 0x000000u, 2u, AddressMode::DirectPageIndexedIndirectX);
        step.or_accumulator();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:25 LDA #1
    // Overlapping static entry reached from 0xC0DCCF.
    case 0xC0DCD1: {
        Instruction step(cpu, 0x00, 0x00008Du, 2u, AddressMode::SignatureByte);
        step.software_break();
        return step.finish();
    }
    // src/overworld/load_dad_phone.asm:26 STA DAD_PHONE_QUEUED
    case 0xC0DCD2: {
        Instruction step(cpu, 0x8D, 0x00A05Cu, 3u, AddressMode::Absolute);
        step.store_accumulator();
        return step.finish();
    }
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/load_dad_phone.asm:28 END_C_FUNCTION
    case 0xC0DCD5: {
        Instruction step(cpu, 0x2B, 0x000000u, 1u, AddressMode::Implied);
        step.pull_direct_page();
        return step.finish();
    }
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/load_dad_phone.asm:28 END_C_FUNCTION
    case 0xC0DCD6: {
        Instruction step(cpu, 0x6B, 0x000000u, 1u, AddressMode::Implied);
        step.return_long();
        return step.finish();
    }
    default: return false;
    }
}
}
