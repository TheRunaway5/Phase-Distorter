#pragma once

#include <array>
#include <cstdint>

namespace eb::native {
// The single native owner of the authored 256-point follower trail. Character
// read cursors belong to WorldPartyState, not this ring. Source writes but
// never reads the final word; preserve it without inventing gameplay meaning.
struct PartyTrailPoint {
  std::uint16_t x{}, y{}, surface_flags{}, walking_style{}, direction{},
      reserved{};
  bool operator==(const PartyTrailPoint &) const = default;
};
struct PartyTrail {
  std::array<PartyTrailPoint, 256> points{};
  std::uint16_t next_write{};
  bool operator==(const PartyTrail &) const = default;
};
} // namespace eb::native
