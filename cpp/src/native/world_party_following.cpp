#include "eb/native/world_party_following.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native {
WorldPartyFollowingData
import_party_following_data(std::span<const std::uint8_t> bytes,
                            GameVersion version) {
  if (version != GameVersion::US && version != GameVersion::JP)
    throw std::invalid_argument("Unsupported party following region");
  const unsigned graphics = version == GameVersion::US ? 0x3f2b5 : 0x3f02e;
  const unsigned sizes = version == GameVersion::US ? 0x3e09a : 0x3e084;
  const auto word = [&](unsigned at) {
    if (at >= bytes.size() || bytes.size() - at < 2)
      throw std::invalid_argument("Truncated party following content");
    return std::uint16_t(bytes[at] | unsigned(bytes[at + 1]) << 8);
  };
  WorldPartyFollowingData result;
  for (unsigned i = 0; i < 17; ++i) {
    result.sizes[i] = word(sizes + i * 2);
    for (unsigned pose = 0; pose < 8; ++pose)
      result.graphics[i][pose] = word(graphics + i * 16 + pose * 2);
  }
  return result;
}
WorldPartyFollowing::WorldPartyFollowing(
    ActorWorld &actors, party::State &party, WorldPartyState &formation,
    PartyTrail &trail, WorldControlState &control,
    const npcs::InteractionState &leader, const dialogue::PromptState &prompt,
    WorldMaintenanceState &maintenance, const std::uint16_t &area_style,
    const WorldPartyFollowingState &state, const WorldPartyFollowingData &data)
    : actors_(actors), party_(party), formation_(formation), trail_(trail),
      control_(control), leader_(leader), prompt_(prompt),
      maintenance_(maintenance), area_style_(area_style), state_(state),
      data_(data) {
  if (&area_style != &leader.movement_flags)
    throw std::invalid_argument(
        "Party following area style must borrow the world movement flags");
}
bool WorldPartyFollowing::uses(const ActorWorld &actors) const noexcept {
  return &actors_ == &actors;
}
bool WorldPartyFollowing::uses(
    const WorldControl &control, const party::State &party,
    const WorldMaintenanceState &maintenance,
    const dialogue::PromptState &prompt) const noexcept {
  return &actors_ == &control.actors() && &formation_ == &control.formation() &&
         &trail_ == &control.trail() && &control_ == &control.state() &&
         &leader_ == &control.leader_state() && &party_ == &party &&
         &maintenance_ == &maintenance && &prompt_ == &prompt &&
         &area_style_ == &control.leader_state().movement_flags;
}
bool WorldPartyFollowing::uses(
    const ActorWorld &actors, const party::State &party,
    const WorldPartyState &formation, const PartyTrail &trail,
    const WorldControlState &control, const npcs::InteractionState &leader,
    const dialogue::PromptState &prompt,
    const WorldMaintenanceState &maintenance, const std::uint16_t &area_style,
    const WorldPartyFollowingState &state,
    const WorldPartyFollowingData &data) const noexcept {
  return &actors_ == &actors && &party_ == &party &&
         &formation_ == &formation && &trail_ == &trail &&
         &control_ == &control && &leader_ == &leader && &prompt_ == &prompt &&
         &maintenance_ == &maintenance && &area_style_ == &area_style &&
         &state_ == &state && &data_ == &data;
}
std::optional<std::uint16_t> WorldPartyFollowing::prepare(ActorId id) {
  std::uint16_t result{};
  if (!update(id, false, result))
    return {};
  return result;
}
bool WorldPartyFollowing::tick(ActorId id) {
  if (control_.automatic_mode == 3 ||
      actors_.appearance_scene().battle_swirl_ticks ||
      maintenance_.enemy_touched || prompt_.battle_mode)
    return true;
  std::uint16_t ignored{};
  return update(id, true, ignored);
}
bool WorldPartyFollowing::update(ActorId id, bool movement,
                                 std::uint16_t &result) {
  const auto ids = actors_.actors();
  if (std::find(ids.begin(), ids.end(), id) == ids.end())
    return false;
  auto &actor = actors_.actor(id);
  if (!actor.authored_role() || !actor.has_appearance())
    return false;
  const unsigned record = actor.action().variables[1],
                 member = actor.action().variables[0];
  if (record >= 6 || member >= data_.graphics.size())
    throw std::invalid_argument("Invalid party follower character/member");
  const unsigned cursor = formation_.trail_cursors[record];
  if (cursor >= trail_.points.size())
    throw std::out_of_range("Party follower cursor exceeds trail");
  const auto &point = trail_.points[cursor];
  const auto &character = party_.character(record + 1);
  auto action = actor.action();
  auto context = actor.behavior;
  auto appearance = actor.appearance;
  auto appearance_context = actor.appearance_context;
  auto selected_style = formation_.selected_styles[record];
  auto last_style = formation_.last_trail_styles[record];
  auto possessed = maintenance_.possessed_players;
  auto next = std::uint16_t(cursor);
  context.direction = point.direction;
  context.surface_flags = point.surface_flags;
  unsigned sprite = 0xffff, pose = 0;
  // C0780F returns before even clearing the overlays for the pajamas case.
  if (!member && !actors_.appearance_scene().transitions_disabled &&
      state_.pajamas) {
    sprite = 437;
  } else {
    appearance_context.overlay_flags = 0;
    if (party_.party_status == 1) {
      sprite = area_style_ == 3 ? 37 : 13;
    } else if (character.afflictions[0] == 2) {
      sprite = area_style_ == 3 ? 36 : 12;
    } else {
      if (character.afflictions[0] == 1)
        pose = 1;
      else if (character.afflictions[0] == 4)
        appearance_context.overlay_flags |= 0x8000;
      if (character.afflictions[1] == 1)
        appearance_context.overlay_flags |= 0x4000;
      else if (character.afflictions[1] == 2)
        ++possessed;
      if (area_style_ == 6)
        sprite = 7;
      else if (area_style_ == 4 &&
               !formation_.character_startup[record].member_index)
        sprite = 6;
      else {
        if (!pose) {
          switch (point.walking_style) {
          case 0:
          case 12:
          case 13:
            pose = 0;
            break;
          case 4:
            pose = 1;
            break;
          case 7:
            pose = 2;
            break;
          case 8:
            pose = 3;
            break;
          default:
            break;
          }
        }
        if (area_style_ == 3) {
          pose += 4;
          appearance_context.overlay_flags = 0;
        } else if (area_style_ == 5 && !pose)
          pose = 6;
        if (party_.party_status == 3)
          action.variables[3] = 5;
        else if (character.afflictions[0] == 1)
          action.variables[3] = 16;
        else if ((point.surface_flags & 12) == 12)
          action.variables[3] = 24;
        else if (point.surface_flags & 8)
          action.variables[3] = 16;
        else
          action.variables[3] = 8;
        if (character.afflictions[0] == 3)
          action.variables[3] = 56;
        sprite = data_.graphics[member][pose];
      }
    }
  }
  // C07A56 owns only requested artwork. The authored animation call latches
  // it later; creation geometry/palette and retained image stay untouched.
  if (sprite == 0xffff)
    action.animation = 0xffff;
  else {
    appearance.set_sprite(sprite);
    appearance_context.walking_style = point.walking_style;
    if (selected_style != point.walking_style) {
      selected_style = point.walking_style;
      action.variables[7] |= 0x8000;
    }
    if (control_.moved_this_tick && point.walking_style != 12)
      action.variables[7] &= 0x1fff;
    else
      action.variables[7] |= 0x6000;
  }
  result = control_.automatic_mode;
  if (control_.automatic_mode == 2) {
    action.variables[7] |= 0x1000;
    result = action.variables[7];
  }
  if (movement && (control_.moved_this_tick || point.walking_style == 12)) {
    action.position[0] =
        (std::uint32_t(point.x) << 16) | (action.position[0] & 65535);
    action.position[1] =
        (std::uint32_t(point.y) << 16) | (action.position[1] & 65535);
    last_style = point.walking_style;
    const bool first = party_.display_order[0] == member + 1;
    const bool exiting_escalator =
        (point.walking_style & 255) == 12 && !leader_.walking_style;
    if (first || exiting_escalator) {
      next = std::uint16_t(cursor + 1);
      action.variables[7] &= 0xefff;
    } else {
      // The source's unbounded search reads outside formation if the
      // member is absent. A native host must supply that missing owner.
      const auto found = std::find(party_.display_order.begin(),
                                   party_.display_order.end(), member + 1);
      if (found == party_.display_order.end() ||
          found == party_.display_order.begin())
        return false;
      const unsigned previous =
          unsigned(found - party_.display_order.begin() - 1);
      const auto predecessor =
          actors_.actor_for_role(formation_.roles[previous]);
      if (!predecessor)
        return false;
      const auto predecessor_record =
          actors_.actor(*predecessor).action().variables[1];
      if (predecessor_record >= 6)
        throw std::out_of_range("Invalid predecessor character record");
      unsigned ahead = formation_.trail_cursors[predecessor_record];
      if (ahead >= 256)
        throw std::out_of_range("Invalid predecessor trail cursor");
      if (ahead < cursor)
        ahead += 256;
      const unsigned distance = ahead - cursor;
      unsigned spacing = (point.walking_style & 255) == 7 ||
                                 (point.walking_style & 255) == 8 ||
                                 (point.walking_style & 255) == 12
                             ? 30
                         : (point.walking_style & 255) == 13 ? 24
                         : area_style_ == 3                  ? 8
                                                             : 12;
      spacing = std::uint16_t(spacing + data_.sizes[member]);
      if (distance == spacing) {
        ++next;
        action.variables[7] &= 0xefff;
      } else if (distance > spacing) {
        next += 2;
        action.variables[7] |= 0x1000;
      }
    }
    next &= 255;
  }
  actor.action() = action;
  actor.behavior = context;
  actor.appearance = std::move(appearance);
  actor.appearance_context = appearance_context;
  formation_.selected_styles[record] = selected_style;
  formation_.last_trail_styles[record] = last_style;
  formation_.trail_cursors[record] = next;
  maintenance_.possessed_players = possessed;
  return true;
}
} // namespace eb::native
