#pragma once

#include "eb/game/dialogue/register_bank.hpp"
#include <cstdint>

namespace eb::game::dialogue {

enum class WorkingBranch : std::uint8_t { Zero, Nonzero };
enum class CommandContinuation : std::uint8_t { Continue, ReadJumpDestination };

// CC_1B_TREE selectors 2/3 test the entire 32-bit working register. A taken
// branch selects CC_0A, which subsequently reads the destination operand.
bool should_jump(WorkingBranch condition, std::uint32_t working) noexcept;

// Skip the four-byte jump operand through the borrowed live cursor. Its storage
// starts at WRAM $7e0000 + cursor_storage_address; accesses proceed in ascending
// byte order (including into bank $7f when storage crosses the bank boundary).
// Read all four bytes before writing all four bytes back. Only the cursor VALUE's
// low 16 bits are incremented, modulo 65536; its high word is written unchanged.
// This deliberately differs from adding four to a 32-bit pointer.
void skip_jump_operand(RegisterMemory& memory, std::uint16_t cursor_storage_address);

// Complete synchronous command-domain behavior for CC_1B selectors 2/3. Taken
// branches leave the cursor untouched and perform no cursor-memory accesses.
// The caller supplies the previously read working register; no register-bank
// snapshot or persistent command state is kept here.
//
// Source: ebsrc src/text/ccs/tree_1B.asm @UNKNOWN5..@UNKNOWN10, identical in US/JP;
// include/macros.asm MOVE_INT_YPTRSRC defines the original word-read order.
// ABI: WRAM data bank $7e, binary arithmetic, stable borrowed memory during each
// call. These helpers do not model CPU flags/scratch registers, bus timing or
// interrupts. Native adapters may invoke the predicate and skip separately at
// the corresponding source checkpoints to preserve hardware-event boundaries.
CommandContinuation conditional_jump(RegisterMemory& memory, WorkingBranch condition,
                                     std::uint32_t working,
                                     std::uint16_t cursor_storage_address);

} // namespace eb::game::dialogue
