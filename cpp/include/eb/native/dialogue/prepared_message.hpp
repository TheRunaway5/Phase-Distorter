#pragma once

#include "eb/game_version.hpp"
#include <array>
#include <cstdint>
#include <span>

namespace eb::native::dialogue {
enum class PreparedName { Attacker, Target };
struct NameMetadata {
    std::uint16_t enemy_id{};
    std::uint8_t article{};
    bool operator==(const NameMetadata&) const = default;
};

// Shared values written by the original prepared-name, CNUM and CITEM helpers.
// Conversations borrow this stable owner and read its current bytes after
// suspended effects. It is not a roster, action selector or name formatter.
class PreparedMessage {
public:
    explicit PreparedMessage(GameVersion);
    PreparedMessage(const PreparedMessage&) = delete;
    PreparedMessage& operator=(const PreparedMessage&) = delete;
    PreparedMessage(PreparedMessage&&) = delete;
    PreparedMessage& operator=(PreparedMessage&&) = delete;
    GameVersion version() const { return version_; }

    // Copy the complete supplied count, then NUL; retain the remaining tail.
    // The count must leave room for that terminator in the regional field.
    // Descending reads/writes preserve MEMCPY24's observable overlap behavior.
    // US copies set only this side's enemy ID toFFFF; article stays unchanged.
    void copy_name(PreparedName, std::span<const std::uint8_t>);
    std::span<const std::uint8_t> name(PreparedName) const;
    // Raw retained US enemy ID/article state for the actual FIX_* producer and
    // article consumer. JP has no enemy-ID lookup and neither JP copy nor
    // printing changes this metadata. No automatic value is inferred from id.
    NameMetadata& metadata(PreparedName);
    const NameMetadata& metadata(PreparedName) const;
    void set_number(std::uint32_t value) { number_ = value; }
    std::uint32_t number() const { return number_; }
    void set_item(std::uint8_t value) { item_ = value; }
    std::uint8_t item() const { return item_; }

private:
    std::span<std::uint8_t> writable_name(PreparedName);
    GameVersion version_;
    std::array<std::uint8_t, 30> attacker_{};
    std::array<std::uint8_t, 28> target_{};
    std::array<NameMetadata, 2> metadata_{};
    std::uint32_t number_{};
    std::uint8_t item_{};
};
} // namespace eb::native::dialogue
