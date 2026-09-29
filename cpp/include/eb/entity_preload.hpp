#pragma once
#include "eb/game_version.hpp"
#include <algorithm>
#include <cstdint>

namespace eb {
// Desktop overworld policy. Source loaders still own event conditions, enemy
// selection, duplicate checks and the fixed entity pool. Only their horizontal
// query/retention bounds change. Units are 64-pixel enemy-spawn sectors.
class EntityPreload {
public:
  void set_width(unsigned width) {
    width = std::clamp(width, 256u, 1024u);
    const unsigned margin = (width - 256 + 1) / 2;
    extra_pixels_ = margin ? ((margin + 63) / 64 + 1) * 64 : 0;
  }
  bool enabled() const { return extra_pixels_ != 0; }
  void adapt(GameVersion version, std::uint32_t pc, std::uint8_t opcode,
             unsigned length, std::uint32_t &operand,
             std::uint16_t &accumulator) const;

private:
  unsigned extra_pixels_{};
};
} // namespace eb
