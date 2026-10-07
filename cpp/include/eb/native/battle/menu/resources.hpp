#pragma once
#include "eb/game_version.hpp"
#include <array>
#include <cstdint>
#include <memory>
#include <span>
#include <vector>
namespace eb::native::battle {
struct MenuPsi {
  std::uint8_t name{}, level{}, category{}, usability{};
  std::uint16_t action{};
  std::array<std::uint8_t, 3> learned_at{};
  std::uint8_t x{}, y{};
  std::uint32_t description{};
};
// Authored menu strings and records are imported from the purchased content.
// Mutable selection, names, inventory, PP and learned flags stay with callers.
class MenuContent {
public:
  static std::shared_ptr<const MenuContent>
      import(std::span<const std::uint8_t>, GameVersion);
  GameVersion version() const noexcept { return version_; }
  const MenuPsi &psi(unsigned id) const { return psi_.at(id); }
  std::span<const std::uint8_t> command(unsigned id) const {
    return commands_.at(id);
  }
  std::span<const std::uint8_t> category(unsigned id) const {
    return categories_.at(id);
  }
  std::span<const std::uint8_t> target(unsigned id) const {
    return targets_.at(id);
  }
  std::span<const std::uint8_t> to_text() const { return to_; }
  std::span<const std::uint8_t> row_text(unsigned row) const {
    return rows_.at(row);
  }
  std::span<const std::uint8_t> pp_text() const { return pp_; }
  std::span<const std::uint8_t> ally_prompt() const { return ally_; }
  std::uint16_t status_character(std::span<const std::uint8_t, 7>) const;
  std::uint16_t item_action(unsigned id) const { return items_.at(id); }
  std::uint8_t usable_flag(unsigned character) const {
    return usable_.at(character - 1);
  }
  std::uint8_t command_window(unsigned shape) const {
    return windows_.at(shape);
  }
  std::uint32_t cannot_use_psi() const { return cannot_; }
  std::span<const std::uint16_t, 4> auto_fight_cells() const {
    return auto_cells_;
  }

private:
  explicit MenuContent(GameVersion v) : version_(v) {}
  GameVersion version_;
  std::array<MenuPsi, 54> psi_{};
  std::array<std::vector<std::uint8_t>, 11> commands_{};
  std::array<std::vector<std::uint8_t>, 3> categories_{};
  std::array<std::vector<std::uint8_t>, 10> targets_{};
  std::array<std::vector<std::uint8_t>, 2> rows_{};
  std::vector<std::uint8_t> to_, pp_, ally_;
  std::array<std::uint16_t, 49> status_{};
  std::array<std::uint16_t, 254> items_{};
  std::array<std::uint16_t, 4> auto_cells_{};
  std::array<std::uint8_t, 4> usable_{};
  std::array<std::uint8_t, 3> windows_{};
  std::uint32_t cannot_{};
};
} // namespace eb::native::battle
