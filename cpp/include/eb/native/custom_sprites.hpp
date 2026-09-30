#pragma once
#include "eb/game_version.hpp"
#include "eb/native/sprite_fragment.hpp"
#include <map>
#include <span>

namespace eb::native {
// Authored title lettering and debug cursor. Import decodes their own content,
// never current object memory; all returned pixels outlive the source bytes.
class CustomSprites {
public:
  CustomSprites(std::span<const std::uint8_t> assets, GameVersion version);
  std::span<const SpriteFragment> frame(std::uint32_t authored_table,
                                        unsigned frame_index) const;

private:
  std::map<std::uint32_t, std::vector<std::vector<SpriteFragment>>> tables_;
};
} // namespace eb::native
