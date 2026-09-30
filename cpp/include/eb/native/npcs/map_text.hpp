#pragma once

#include "eb/game_version.hpp"
#include "eb/native/dialogue/program.hpp"
#include <array>
#include <cstdint>
#include <memory>
#include <span>
#include <vector>

namespace eb::native::npcs {
struct MapTextOffset {
    // Source cell offsets are added with16-bit wrapping. Preserve raw words;
    // these are not Talk's separately imported pixel probe offsets.
    std::uint16_t x{}, y{};
    bool operator==(const MapTextOffset &) const = default;
};
enum class MapTextKind : std::uint8_t { Check = 5, Talk = 6 };
struct MapTextState {
    // The original lookup retains these words on a miss. A found non-text
    // door updates the first two even though find_talk returns false.
    std::uint16_t door_found{}, door_found_type{}, unread_type{};
    dialogue::ReferenceKey text{};
    bool operator==(const MapTextState &) const = default;
};

// Owned authored door content for C07477/C065C2's map-text fallback. No event
// flags, actor allocation, machine state or executable content is imported.
// Out-of-map coordinates retain source word arithmetic; only an actual read
// outside the declared owned content fails. Text keys are resolved by the
// caller through its bound dialogue::Program, only when selected for use.
class MapTextResources {
  public:
    static std::shared_ptr<const MapTextResources> import(std::span<const std::uint8_t>, GameVersion);
    GameVersion version() const { return version_; }
    // Returns the matched raw type byte, or FF on miss. A real FF match still
    // updates door_found/type before find_talk performs its adjacent retry.
    std::uint8_t lookup(std::uint16_t cell_x, std::uint16_t cell_y, MapTextState &) const;
    MapTextOffset offset(unsigned direction) const;
    // Feed the actual lookup return, not retained door_found_type: a miss
    // retains a previous type5/6. Only a matching Check/Talk result publishes
    // the unread latch and raw text key. The latch precedes the bounded read,
    // matching C4334A/C065C2 even when that read is unsupported.
    bool select_text(std::uint8_t matched_type, MapTextKind expected, MapTextState &) const;
    // Leader coordinates are source world pixels, direction0..7. True means
    // type6 selected a text key (including null); the owning interaction then
    // sets its map-text target sentinel. False retains text/unread_type.
    bool find_talk(std::uint16_t leader_x, std::uint16_t leader_y, unsigned direction, MapTextState &) const;

  private:
    explicit MapTextResources(GameVersion version) : version_(version) {}
    std::uint8_t byte(std::uint32_t authored_reference) const;
    std::uint16_t word(std::uint32_t authored_reference) const;
    dialogue::ReferenceKey key(std::uint32_t authored_reference) const;
    GameVersion version_;
    // The complete declared door-data and door-list assets are contiguous.
    // Keeping their owned bytes permits source aliases within either asset;
    // these are content provenance, not a mutable bus/RAM mirror.
    std::vector<std::uint8_t> door_content_;
    std::array<std::uint8_t, 1280 * 4> cell_pointers_{};
    std::array<MapTextOffset, 8> offsets_{};
};
} // namespace eb::native::npcs
