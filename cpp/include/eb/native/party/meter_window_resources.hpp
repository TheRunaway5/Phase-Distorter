#pragma once

#include "eb/game_version.hpp"
#include <array>
#include <cstdint>
#include <memory>
#include <span>

namespace eb::native::party {
struct MeterStatusArtwork {
    std::uint16_t character{}, palette{};
    bool operator==(const MeterStatusArtwork&) const = default;
};

// Small authored descriptor tables used by DRAW_HP_PP_WINDOW. The actual
// artwork, including generated names/status labels, stays in WindowGraphics.
class MeterWindowResources {
  public:
    static std::shared_ptr<const MeterWindowResources> import(std::span<const std::uint8_t>, GameVersion);
    GameVersion version() const { return version_; }
    std::span<const std::uint8_t, 8> labels() const { return labels_; }
    MeterStatusArtwork status(std::span<const std::uint8_t, 7> afflictions) const;
  private:
    explicit MeterWindowResources(GameVersion version) : version_(version) {}
    GameVersion version_;
    std::array<std::uint8_t, 8> labels_{};
    std::array<std::uint16_t, 49> characters_{}, palettes_{};
};
} // namespace eb::native::party
