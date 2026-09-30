#include "eb/game/cutscenes/credits_state.hpp"

namespace eb::game::cutscenes {
namespace {
// src/bankconfig/common/ram.asm: PLAYER_POSITION_BUFFER,
// CREDITS_DMA_QUEUE_START and CREDITS_SCROLL_POSITION. Values verified in the
// US/JP build/cpp/assembly/{us,jp}/earthbound.dbg linked symbols and current
// generated enqueue_credits_dma / credits_scroll_frame instruction operands.
constexpr CreditsLayout us_layout{0x5156, 0x7eb4f5, 0x7eb4eb, 0x7e003b};
constexpr CreditsLayout jp_layout{0x54dc, 0x7eb6be, 0x7eb6b4, 0x7e003b};
constexpr std::uint32_t wram_bank = 0x7e0000;

std::uint16_t read_word(const CreditsMemory& memory, std::uint32_t address) {
    const auto low = memory.read_byte(address);
    const auto high = memory.read_byte(address + 1);
    return std::uint16_t(low | (std::uint16_t(high) << 8));
}
std::uint32_t read_long(const CreditsMemory& memory, std::uint32_t address) {
    const auto low = read_word(memory, address);
    const auto high = read_word(memory, address + 2);
    return low | (std::uint32_t(high) << 16);
}
void write_word(CreditsMemory& memory, std::uint32_t address, std::uint16_t value) {
    memory.write_byte(address, std::uint8_t(value));
    memory.write_byte(address + 1, std::uint8_t(value >> 8));
}
void write_long(CreditsMemory& memory, std::uint32_t address, std::uint32_t value) {
    write_word(memory, address, std::uint16_t(value));
    write_word(memory, address + 2, std::uint16_t(value >> 16));
}
} // namespace

const CreditsLayout& CreditsLayout::for_version(GameVersion version) {
    return version == GameVersion::JP ? jp_layout : us_layout;
}

std::uint16_t CreditsState::queue_head() const {
    return read_word(memory_, CreditsLayout::for_version(version_).queue_head);
}
std::uint16_t CreditsState::descriptor_address(std::uint16_t slot) const {
    return std::uint16_t(CreditsLayout::for_version(version_).descriptor_buffer + slot * 9);
}
void CreditsState::publish_descriptor(std::uint16_t captured_address, const CreditsTransfer& transfer) {
    const std::uint32_t address = wram_bank + captured_address;
    memory_.write_byte(address, transfer.mode);
    write_word(memory_, address + 1, transfer.byte_count);
    write_long(memory_, address + 3, transfer.source_address);
    write_word(memory_, address + 7, transfer.destination_word);
}
std::uint16_t CreditsState::advance_queue_head(std::uint16_t captured_head) {
    const auto incremented = std::uint16_t(captured_head + 1);
    const auto wrapped = std::uint16_t(incremented & 0x007f);
    const auto address = CreditsLayout::for_version(version_).queue_head;
    write_word(memory_, address, incremented);
    write_word(memory_, address, wrapped);
    return wrapped;
}
void CreditsState::enqueue(const CreditsTransfer& transfer) {
    const auto address = descriptor_address(queue_head());
    publish_descriptor(address, transfer);
    // The source loads the head again after completing the descriptor.
    advance_queue_head(queue_head());
}

std::uint32_t CreditsState::scroll_position() const {
    return read_long(memory_, CreditsLayout::for_version(version_).scroll_position);
}
std::uint32_t CreditsState::advance_scroll_from(std::uint32_t captured_position) {
    const unsigned fraction_sum = (captured_position & 0xffff) + 0x4000;
    const auto fraction = std::uint16_t(fraction_sum);
    const auto integer = std::uint16_t((captured_position >> 16) + (fraction_sum >> 16));
    const auto position = fraction | (std::uint32_t(integer) << 16);
    const auto& addresses = CreditsLayout::for_version(version_);
    write_long(memory_, addresses.scroll_position, position);
    write_word(memory_, addresses.background_three_y, integer);
    return position;
}
std::uint32_t CreditsState::advance_scroll() {
    return advance_scroll_from(scroll_position());
}

} // namespace eb::game::cutscenes
