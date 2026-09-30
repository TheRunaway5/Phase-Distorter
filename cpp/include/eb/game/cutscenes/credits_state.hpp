#pragma once

#include "eb/game_version.hpp"
#include <cstdint>

namespace eb::game::cutscenes {

// Borrow authoritative WRAM at full SNES addresses. Publications are explicit
// bytes, so the original descriptor and queue-head write order stays observable.
// Implementations must not retain a second copy of credits state.
class CreditsMemory {
  public:
    virtual ~CreditsMemory() = default;
    virtual std::uint8_t read_byte(std::uint32_t address) const = 0;
    virtual void write_byte(std::uint32_t address, std::uint8_t value) = 0;
};

// ENQUEUE_CREDITS_DMA's arguments: A.low = mode, X = byte_count, Y =
// destination_word, caller D+$0e (14 bytes) = source_address. The descriptor retains all
// four source bytes, even though the eventual SNES transfer uses a 24-bit bus.
struct CreditsTransfer {
    std::uint8_t mode;
    std::uint16_t byte_count;
    std::uint32_t source_address;
    std::uint16_t destination_word;
};

// Immutable regional addresses shared by the domain and its native adapter.
// descriptor_buffer is a low-word WRAM address; the other fields are full
// SNES addresses. The independent frozen tests use their own verified layout.
struct CreditsLayout {
    std::uint16_t descriptor_buffer;
    std::uint32_t queue_head, scroll_position, background_three_y;
    static const CreditsLayout& for_version(GameVersion version);
};

// Read/write access to the live credits DMA queue and quarter-pixel scroll.
// Source: src/ending/enqueue_credits_dma.asm, credits_scroll_frame.asm:521-530
// and credits_scroll_frame-jp.asm:410-419. Regional layouts are independently
// linked symbols; the algorithms are shared. The queue reuses the gameplay
// PLAYER_POSITION_BUFFER while credits owns it.
//
// Domain ABI: native mode, binary arithmetic, data bank $7e, valid queue heads
// in 0..127, and stable memory during each synchronous operation. These methods
// do not retire CPU instructions, alter CPU scratch/flags or access PPU registers.
// Native adapters must retain source timing and event boundaries. In particular,
// the following source BG3VOFS latch writes remain outside advance_scroll().
class CreditsState {
  public:
    CreditsState(CreditsMemory& memory, GameVersion version)
        : memory_(memory), version_(version) {}

    std::uint16_t queue_head() const;
    // Low-word address of a complete nine-byte descriptor in WRAM bank $7e.
    std::uint16_t descriptor_address(std::uint16_t slot) const;

    // The captured address/head forms let a native checkpoint use the values
    // already resolved by the source, without re-reading changed global state.
    // Publish mode8, byte_count16, source32, then destination16, in that order.
    void publish_descriptor(std::uint16_t captured_address, const CreditsTransfer& transfer);
    // Two WORD writes are intentional: increment first, then mask to seven bits.
    // For head 127 the memory-visible sequence is 128 followed by 0.
    std::uint16_t advance_queue_head(std::uint16_t captured_head);
    // No full-queue check or tail modification exists in the source. Even when
    // wrapping makes head == tail, this still publishes the record and new head.
    void enqueue(const CreditsTransfer& transfer);

    std::uint32_t scroll_position() const;
    // Add $4000 to the fractional word, carrying into the wrapping integer
    // word. Publish both words, then mirror the integer to BG3_Y_POS.
    std::uint32_t advance_scroll_from(std::uint32_t captured_position);
    std::uint32_t advance_scroll();

  private:
    CreditsMemory& memory_;
    GameVersion version_;
};

} // namespace eb::game::cutscenes
