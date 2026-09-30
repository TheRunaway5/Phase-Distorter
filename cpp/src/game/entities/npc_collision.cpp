#include "eb/game/entities/npc_collision.hpp"

namespace eb::game::entities {
namespace {
// Provenance: src/overworld/npc_collision_check.asm, include/enums.asm and
// regional linked WRAM symbols. Both regions use the same algorithm, while
// table addresses differ. The entry points are US $c05ff6 and JP $c06224.
constexpr NpcCollisionLayout us_layout{.hitbox_enabled = 0x7e332a,
                                       .movement_flags = 0x7e5d56,
                                       .walking_style = 0x7e9883,
                                       .demo_frames = 0x7e0081,
                                       .direction = 0x7e2af6,
                                       .lateral_width = 0x7e33de,
                                       .lateral_height = 0x7e1a4a,
                                       .vertical_width = 0x7e3366,
                                       .vertical_height = 0x7e33a2,
                                       .script = 0x7e0a62,
                                       .collided_object = 0x7e289e,
                                       .intangibility_frames = 0x7e5d58,
                                       .npc_id = 0x7e2c9a,
                                       .world_x = 0x7e0b8e,
                                       .world_y = 0x7e0bca};
constexpr NpcCollisionLayout jp_layout{.hitbox_enabled = 0x7e3728,
                                       .movement_flags = 0x7e60dc,
                                       .walking_style = 0x7e9b34,
                                       .demo_frames = 0x7e0081,
                                       .direction = 0x7e2ef4,
                                       .lateral_width = 0x7e37dc,
                                       .lateral_height = 0x7e1a40,
                                       .vertical_width = 0x7e3764,
                                       .vertical_height = 0x7e37a0,
                                       .script = 0x7e0a58,
                                       .collided_object = 0x7e2c9c,
                                       .intangibility_frames = 0x7e60de,
                                       .npc_id = 0x7e3098,
                                       .world_x = 0x7e0b84,
                                       .world_y = 0x7e0bc0};

constexpr std::uint16_t wrap(unsigned value) {
  return static_cast<std::uint16_t>(value);
}
constexpr std::uint16_t subtract(std::uint16_t a, std::uint16_t b) {
  return wrap(unsigned(a) - unsigned(b));
}
constexpr std::uint16_t add(std::uint16_t a, std::uint16_t b) {
  return wrap(unsigned(a) + b);
}
constexpr std::uint16_t twice(std::uint16_t value) {
  return wrap(unsigned(value) * 2);
}

std::uint16_t entity_word(const NpcCollisionMemory &memory, std::uint32_t table,
                          std::uint16_t slot) {
  // ASL truncates the slot offset; absolute indexed addressing subsequently
  // adds it to the full banked address, without wrapping the bank at $ffff.
  return memory.read_word(table + twice(slot));
}
bool lateral(std::uint16_t direction) {
  return direction == 2 || direction == 6;
}

std::uint16_t find_collision(const NpcCollisionMemory &memory,
                             const NpcCollisionLayout &layout,
                             GameVersion version, NpcCollisionQuery query) {
  if (entity_word(memory, layout.hitbox_enabled, query.moving_slot) == 0 ||
      (memory.read_word(layout.movement_flags) & 2) != 0 ||
      memory.read_word(layout.walking_style) == 12 ||
      memory.read_word(layout.demo_frames) != 0)
    return no_npc_collision;

  const auto moving =
      read_npc_collision_hitbox(memory, version, query.moving_slot);
  const auto moving_half_width = moving.half_width;
  const auto moving_height = moving.height;
  const auto moving_left = subtract(query.x, moving_half_width);
  const auto moving_width = twice(moving_half_width);
  const auto moving_top = subtract(query.y, moving_height);

  for (std::uint16_t slot = 0; slot < 23; ++slot) {
    if (inspect_npc_candidate(memory, version, slot).eligibility !=
            NpcCandidateEligibility::Eligible ||
        entity_word(memory, layout.hitbox_enabled, slot) == 0)
      continue;
    const auto hitbox = read_npc_collision_hitbox(memory, version, slot);
    const auto half_width = hitbox.half_width;
    const auto height = hitbox.height;

    // Preserve the original unsigned comparisons after each wrapping
    // arithmetic operation. A signed rectangle intersection, or cancelling
    // matching extents on both sides, changes behavior at coordinate wrap.
    // Y is the bottom of a hitbox; X is its horizontal center. Edge contact
    // alone is excluded, even when a hitbox has a zero extent.
    const auto top =
        subtract(entity_word(memory, layout.world_y, slot), height);
    if (NpcCollisionAxis{top, height}.separated_at_start(moving_top,
                                                         moving_height) ||
        NpcCollisionAxis{top, height}.separated_at_end(moving_top))
      continue;
    const auto left =
        subtract(entity_word(memory, layout.world_x, slot), half_width);
    const auto width = twice(half_width);
    if (NpcCollisionAxis{left, width}.separated_at_start(moving_left,
                                                         moving_width) ||
        NpcCollisionAxis{left, width}.separated_at_end(moving_left))
      continue;
    return slot;
  }
  return no_npc_collision;
}
} // namespace

const NpcCollisionLayout &npc_collision_layout(GameVersion version) {
  return version == GameVersion::JP ? jp_layout : us_layout;
}
NpcCandidateObservation inspect_npc_candidate(const NpcCollisionMemory &memory,
                                              GameVersion version,
                                              std::uint16_t slot) {
  const auto &layout = npc_collision_layout(version);
  NpcCandidateObservation result{NpcCandidateEligibility::Unused};
  result.script = entity_word(memory, layout.script, slot);
  if (result.script == no_npc_collision)
    return result;
  result.eligibility = NpcCandidateEligibility::CollisionDisabled;
  result.collision_marker = entity_word(memory, layout.collided_object, slot);
  if (result.collision_marker == 0x8000)
    return result;
  result.intangibility = memory.read_word(layout.intangibility_frames);
  if (result.intangibility) {
    result.npc_id = entity_word(memory, layout.npc_id, slot);
    // INC wraps: $ffff becomes zero and remains eligible.
    if (add(result.npc_id, 1) >= 0x8001) {
      result.eligibility = NpcCandidateEligibility::Intangible;
      return result;
    }
  }
  result.eligibility = NpcCandidateEligibility::Eligible;
  return result;
}
NpcCollisionHitbox read_npc_collision_hitbox(const NpcCollisionMemory &memory,
                                             GameVersion version,
                                             std::uint16_t slot) {
  const auto &layout = npc_collision_layout(version);
  const auto direction = entity_word(memory, layout.direction, slot);
  const bool side = lateral(direction);
  return {
      direction,
      entity_word(memory, side ? layout.lateral_width : layout.vertical_width,
                  slot),
      entity_word(memory, side ? layout.lateral_height : layout.vertical_height,
                  slot)};
}
bool NpcCollisionAxis::separated_at_start(std::uint16_t moving_start,
                                          std::uint16_t moving_extent) const {
  return subtract(start, moving_extent) >= moving_start;
}
bool NpcCollisionAxis::separated_at_end(std::uint16_t moving_start) const {
  return add(start, extent) <= moving_start;
}

bool candidate_has_script(const NpcCollisionMemory &memory, GameVersion version,
                          std::uint16_t slot) {
  const auto &layout = version == GameVersion::JP ? jp_layout : us_layout;
  return entity_word(memory, layout.script, slot) != 0xffff;
}

std::uint16_t check_npc_collision(NpcCollisionMemory &memory,
                                  GameVersion version,
                                  NpcCollisionQuery query) {
  const auto &layout = version == GameVersion::JP ? jp_layout : us_layout;
  const auto result = find_collision(memory, layout, version, query);
  memory.publish_collision(layout.collided_object + 23 * 2, result);
  return result;
}
} // namespace eb::game::entities
