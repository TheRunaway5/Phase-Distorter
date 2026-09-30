#pragma once

#include "eb/game_version.hpp"
#include <array>
#include <memory>
#include <span>
#include <vector>

namespace eb::native::dialogue {
// Imported CC1C08 fixed-character sequences. Artwork remains owned by the
// existing font/window resources; no image or mutable rendering state is kept.
class TextAnimationResources {
  public:
    static std::shared_ptr<const TextAnimationResources> import(std::span<const std::uint8_t>, GameVersion);
    GameVersion version() const;
    // Selector1 stops at the first zero within its declared20-byte asset.
    // Its returned span excludes the terminator. Selector2 is exactly9 words.
    // Other selectors have no resource sequence and throw.
    std::span<const std::uint16_t> sequence(std::uint8_t selector) const;

  private:
    explicit TextAnimationResources(GameVersion version) : version_(version) {}
    GameVersion version_;
    std::vector<std::uint16_t> first_;
    std::array<std::uint16_t, 9> second_{};
};
} // namespace eb::native::dialogue
