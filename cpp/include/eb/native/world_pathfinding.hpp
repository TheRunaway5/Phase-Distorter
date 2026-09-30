#pragma once
#include "eb/native/world_collision.hpp"
#include "eb/native/world_party.hpp"
#include <map>

namespace eb::native {
struct WorldPathCandidate {
  ActorId actor{};
  CollisionCell origin{};
  std::uint16_t width{}, height{}, raw_length{};
  std::vector<CollisionCell> points;
};
struct WorldActorPath {
  std::vector<CollisionCell> points;
  std::size_t next{};
  // Final arrival retains its current point while consuming the last count;
  // the script waypoint command advances past that point. These are distinct.
  std::uint16_t remaining{};
};
// FIND_PATH_TO_PARTY and its complete grouped wavefront/reconstruction pass.
// Borrow actual actor gates, party formation, creation shapes and terrain.
// Local cell coordinates and bounded authored search work are algorithm data,
// never a RAM cache, source pointer, physical actor slot or allocation heap.
class WorldPathfinding {
public:
  WorldPathfinding(ActorWorld &, const WorldCollision &, const WorldMapArea &,
                   const WorldPartyState &, const party::State &);
  WorldPathfinding(const WorldPathfinding &) = delete;
  WorldPathfinding &operator=(const WorldPathfinding &) = delete;
  // Returns the number of candidates with a nonempty reconstructed path.
  // Zero applies the original all-active-actor failure gate. No tick/RNG/input
  // work occurs. width/height are equal logical search dimensions (normally64).
  // Original callers use square searches; rectangular source axis aliases are
  // not a supported native domain. Out-of-grid actors/targets fail explicitly.
  unsigned find_to_party(unsigned width = 64, unsigned height = 64);
  bool uses(const ActorWorld &, const WorldCollision &, const WorldMapArea &,
            const WorldPartyState &, const party::State &) const noexcept;
  bool uses(const ActorWorld &, const WorldPartyState &,
            const party::State &) const noexcept;
  bool uses(const ActorWorld &, const WorldCollision &) const noexcept;
  bool uses(const ActorWorld &, const WorldCollision &,
            const WorldMapArea &) const noexcept;
  bool failed() const noexcept { return failed_; }
  CollisionCell centre() const noexcept { return centre_; }
  CollisionCell half_extent() const noexcept { return half_; }
  CollisionCell top_left() const noexcept { return top_left_; }
  std::span<const CollisionCell> targets() const noexcept { return targets_; }
  std::span<const WorldPathCandidate> candidates() const noexcept {
    return candidates_;
  }
  const WorldActorPath *path(ActorId) const;
  std::uint16_t remaining(ActorId) const;
  CollisionCell current_point(ActorId) const;
  std::uint16_t consume_followed_point(ActorId);
  std::uint16_t consume_script_point(ActorId);
  // Encounter pruning clears only its selection cost. The installed route and
  // actor path-state gate remain owned by their actual separate callers.
  void clear_candidate_cost(std::size_t index);

private:
  std::uint16_t consume_point(ActorId, bool advance_last);
  ActorWorld &actors_;
  const WorldCollision &collision_;
  const WorldMapArea &area_;
  const WorldPartyState &formation_;
  const party::State &party_;
  CollisionCell centre_{}, half_{}, top_left_{};
  std::vector<CollisionCell> targets_;
  std::vector<WorldPathCandidate> candidates_;
  // Routes survive authored role retirement/reuse, just like the source
  // path metadata. Public access first resolves a live host identity.
  std::map<unsigned, WorldActorPath> paths_;
  bool failed_{};
};
} // namespace eb::native
