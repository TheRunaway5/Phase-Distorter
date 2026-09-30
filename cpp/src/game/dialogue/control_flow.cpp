#include "eb/game/dialogue/control_flow.hpp"

namespace eb::game::dialogue {

bool should_jump(WorkingBranch condition, std::uint32_t working) noexcept {
    return condition == WorkingBranch::Zero ? working == 0 : working != 0;
}

void skip_jump_operand(RegisterMemory& memory, std::uint16_t cursor_storage_address) {
    const std::uint32_t address = 0x7e0000u + cursor_storage_address;
    // MOVE_INT_YPTRSRC reads the low word, then the high word. Explicit byte
    // operations retain order even when the memory implementation observes it.
    const auto low_byte = memory.read_byte(address);
    const auto low_high_byte = memory.read_byte(address + 1);
    const auto high_byte = memory.read_byte(address + 2);
    const auto high_high_byte = memory.read_byte(address + 3);
    const auto low_word = std::uint16_t(low_byte | (std::uint16_t(low_high_byte) << 8));
    const auto next_low_word = std::uint16_t(low_word + 4);

    // Source ADC updates @VIRTUAL06 alone; @VIRTUAL06+2 is not incremented.
    memory.write_byte(address, std::uint8_t(next_low_word));
    memory.write_byte(address + 1, std::uint8_t(next_low_word >> 8));
    memory.write_byte(address + 2, high_byte);
    memory.write_byte(address + 3, high_high_byte);
}

CommandContinuation conditional_jump(RegisterMemory& memory, WorkingBranch condition,
                                     std::uint32_t working,
                                     std::uint16_t cursor_storage_address) {
    if (should_jump(condition, working))
        return CommandContinuation::ReadJumpDestination;
    skip_jump_operand(memory, cursor_storage_address);
    return CommandContinuation::Continue;
}

} // namespace eb::game::dialogue
