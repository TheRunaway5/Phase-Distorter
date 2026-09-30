#pragma once

#include "eb/game_version.hpp"
#include <cstdint>

namespace eb::game::entities {

// NPC_COLLISION_CHECK's domain inputs: A = proposed world X, X = proposed
// world Y, Y = a valid moving entity slot (0..29). Coordinates and
// hitbox arithmetic retain the original unsigned 16-bit wrapping rules.
struct NpcCollisionQuery {
  std::uint16_t x, y, moving_slot;
};

// A borrowed view of authoritative memory. Reads are little-endian words at
// 24-bit SNES addresses; indexed reads may cross from WRAM bank $7e into $7f.
// Implementations must not retain a separate actor-state snapshot. The sole
// publication is a word at the regional ENTITY_COLLIDED_OBJECTS[23] address.
class NpcCollisionMemory {
public:
  virtual ~NpcCollisionMemory() = default;
  virtual std::uint16_t read_word(std::uint32_t address) const = 0;
  virtual void publish_collision(std::uint32_t address,
                                 std::uint16_t value) = 0;
};

inline constexpr std::uint16_t no_npc_collision = 0xffff;

struct NpcCollisionLayout {
  std::uint32_t hitbox_enabled, movement_flags, walking_style, demo_frames;
  std::uint32_t direction, lateral_width, lateral_height, vertical_width,
      vertical_height;
  std::uint32_t script, collided_object, intangibility_frames, npc_id, world_x,
      world_y;
};
const NpcCollisionLayout &npc_collision_layout(GameVersion version);

enum class NpcCandidateEligibility {
  Unused,
  CollisionDisabled,
  Intangible,
  Eligible
};
// Only fields reached by the original short-circuit decision are read. This
// observation is local to one synchronous phase, never a cached actor copy.
struct NpcCandidateObservation {
  NpcCandidateEligibility eligibility;
  std::uint16_t script{}, collision_marker{}, intangibility{}, npc_id{};
};
NpcCandidateObservation inspect_npc_candidate(const NpcCollisionMemory &memory,
                                              GameVersion version,
                                              std::uint16_t slot);
struct NpcCollisionHitbox {
  std::uint16_t direction, half_width, height;
};
NpcCollisionHitbox read_npc_collision_hitbox(const NpcCollisionMemory &memory,
                                             GameVersion version,
                                             std::uint16_t slot);

// Coordinates and extent arithmetic intentionally wrap at sixteen bits. The
// two source comparisons are separate resume points: an interrupt can occur
// between them, so callers must not cache the second comparison across a yield.
struct NpcCollisionAxis {
  std::uint16_t start, extent;
  bool separated_at_start(std::uint16_t moving_start,
                          std::uint16_t moving_extent) const;
  bool separated_at_end(std::uint16_t moving_start) const;
};

// Source eligibility rule shared with a scheduler's candidate-search chunk:
// exactly $ffff marks an unused script slot; all other words remain active.
// This predicate only reads ENTITY_SCRIPT_TABLE[slot] from the borrowed view.
bool candidate_has_script(const NpcCollisionMemory &memory, GameVersion version,
                          std::uint16_t slot);

// Returns the first colliding slot in 0..22, or no_npc_collision, and publishes
// that result exactly once, including on every early exit. The source does not
// exclude moving_slot from the candidate scan or publish to that moving slot.
//
// This function implements synchronous domain behavior only. It does not model
// CPU registers/flags, scratch stack writes, clocks or interrupt retirement.
// Its ABI assumes the game's binary arithmetic mode (decimal flag clear),
// WRAM data bank $7e, and authoritative state stable during this synchronous
// call. A scheduler must supply a valid execution seam before replacing the
// original resumable routine; calling it is not a timing-compatible CPU
// instruction.
std::uint16_t check_npc_collision(NpcCollisionMemory &memory,
                                  GameVersion version, NpcCollisionQuery query);

} // namespace eb::game::entities
