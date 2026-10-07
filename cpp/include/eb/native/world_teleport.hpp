#pragma once
#include "eb/native/world_startup.hpp"

namespace eb::native {
struct WorldTeleportDestination {
    std::uint16_t event_flag{}, tile_x{}, tile_y{};
};
class WorldTeleportData {
public:
    WorldTeleportData(std::span<const std::uint8_t>, GameVersion);
    GameVersion version() const noexcept { return version_; }
  const WorldTeleportDestination &destination(unsigned id) const { return destinations_.at(id); }
  dialogue::ReferenceKey mastery_message() const noexcept {
    return version_==GameVersion::US?dialogue::ReferenceKey{0xe7,0x2a,0xc6,0}:dialogue::ReferenceKey{0x9a,0xf9,0xc6,0};
  }
private:
    GameVersion version_;
    std::array<WorldTeleportDestination,17> destinations_{};
};
} // namespace eb::native
