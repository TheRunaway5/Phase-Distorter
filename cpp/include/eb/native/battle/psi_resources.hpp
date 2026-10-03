#pragma once

#include "eb/game_version.hpp"
#include <array>
#include <cstdint>
#include <memory>
#include <span>
#include <vector>

namespace eb::native::battle {
struct PsiDefinition {
  unsigned graphics{};
  std::uint8_t frame_hold{}, palette_hold{}, palette_lower{}, palette_upper{};
  std::uint8_t frames{}, target_mode{}, enemy_start{}, enemy_end{};
  std::uint16_t enemy_color{};
  std::array<std::uint16_t, 4> palette{};
  std::vector<std::uint8_t> frame_data;
};
struct PsiTableAlias {
  std::array<std::uint8_t, 12> configuration{};
  std::array<std::uint16_t, 4> palette{};
  std::uint32_t frame_pointer{};
};
// Immutable imported authored data. Decompression preserves its actual length:
// the four short graphics outputs must not replace retained scratch tails.
class PsiResources {
public:
  static constexpr unsigned animation_count = 34;
  static std::shared_ptr<const PsiResources>
      import(std::span<const std::uint8_t>, GameVersion);
  GameVersion version() const noexcept { return version_; }
  const PsiDefinition &definition(unsigned id) const {
    return definitions_.at(id);
  }
  std::span<const std::uint8_t> graphics(unsigned id) const {
    return graphics_.at(id);
  }
  const std::array<std::uint8_t, 3> &enemy_color(unsigned id) const {
    return enemy_colors_.at(id);
  }
  const std::array<std::uint8_t, 3> &misc_color(unsigned id) const {
    return misc_colors_.at(id);
  }
  // The dispatcher admits34 despite a34-entry authored table. Keep its actual
  // adjacent bytes available for diagnosis; never invent a usable animation.
  const PsiTableAlias &alias34() const noexcept { return alias_; }

private:
  explicit PsiResources(GameVersion version) : version_(version) {}
  GameVersion version_;
  std::array<PsiDefinition, animation_count> definitions_;
  std::array<std::vector<std::uint8_t>, 4> graphics_;
  std::array<std::array<std::uint8_t, 3>, 11> enemy_colors_{};
  std::array<std::array<std::uint8_t, 3>, 5> misc_colors_{};
  PsiTableAlias alias_;
};
} // namespace eb::native::battle
