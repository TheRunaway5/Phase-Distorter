#include "eb/native/world_party_movement.hpp"
#include <stdexcept>

namespace eb::native {
namespace {
std::uint16_t magnitude(std::uint16_t value) {
  return value & 0x8000 ? std::uint16_t(0u - value) : value;
}
std::uint16_t integral(const WorldActor &actor, unsigned axis) {
  return std::uint16_t(actor.action().position[axis] >> 16);
}
int coordinate(std::uint16_t value) {
  return value < 0x8000 ? int(value) : int(value) - 65536;
}
} // namespace
WorldPartyMovementData
import_party_movement_data(std::span<const std::uint8_t> bytes,
                           GameVersion version) {
  if (version != GameVersion::US && version != GameVersion::JP)
    throw std::invalid_argument("Unsupported native party movement region");
  const unsigned cardinal = version == GameVersion::JP ? 0xa28a : 0xa2ab;
  const unsigned diagonal = version == GameVersion::JP ? 0xa2ea : 0xa30b;
  const auto word = [&](unsigned at) {
    if (at >= bytes.size() || bytes.size() - at < 2)
      throw std::invalid_argument("Truncated native party spacing");
    return std::uint16_t(bytes[at] | unsigned(bytes[at + 1]) << 8);
  };
  WorldPartyMovementData result;
  for (unsigned i = 0; i < 6; ++i) {
    result.cardinal_spacing[i] = word(cardinal + i * 2);
    result.diagonal_spacing[i] = word(diagonal + i * 2);
  }
  return result;
}
WorldPartyMovement::WorldPartyMovement(ActorWorld &actors, party::State &party,
                                       WorldPartyState &state,
                                       story::RandomState &random,
                                       const WorldPartyMovementData &data)
    : actors_(actors), party_(party), state_(state), random_(random),
      data_(data) {}
std::optional<std::uint16_t> WorldPartyMovement::startup(ActorId id) {
  const auto result=prepare_startup(id);
  if(result)finish_startup(id);
  return result;
}
std::optional<std::uint16_t> WorldPartyMovement::prepare_startup(ActorId id) {
  if(startup_actor_)throw std::logic_error("Party startup already owns its actual upload continuation");
  auto &actor = actors_.actor(id);
  const auto role = actor.authored_role();
  if (!role || !party_.party_count)
    return std::nullopt;
  if (party_.party_count > 6 || state_.current_leader_role >= 30)
    throw std::invalid_argument("Invalid native party startup formation");
  if (!actors_.actor_for_role(state_.current_leader_role))
    return std::nullopt;
  const auto record = actor.action().variables[1];
  if (record >= 6)
    throw std::invalid_argument("Invalid party startup character binding");
  if (!actor.has_appearance())
    return std::nullopt;
  auto appearance = actor.appearance;
  auto random = random_;
  auto action = actor.action();
  appearance.invalidate_animation_fingerprint();
  action.variables[3] = 8;
  action.variables[2] = story::next_random(random) & 15;
  appearance.select_eight(actor.behavior.direction, action.animation,
                          actor.behavior.surface_flags);
  actor.appearance = std::move(appearance);
  actor.action() = action;
  random_ = random;
  startup_actor_=id;
  return std::uint16_t(state_.current_leader_role * 2);
}
void WorldPartyMovement::finish_startup(ActorId id) {
  if(startup_actor_!=id)throw std::logic_error("Party startup completion lost its actual upload owner");
  auto &actor=actors_.actor(id);
  const auto role=actor.authored_role();
  const auto record=actor.action().variables[1];
  if(!role||record>=6||state_.current_leader_role>=30)
    throw std::logic_error("Party startup changed its owned role during upload");
  const WorldPartyState::CharacterStartup startup{
      actor.action().variables[0], std::uint16_t(*role), 0, 0xffff};
  state_.character_startup[record] = startup;
  if (party_.character(record + 1).afflictions[0] == 1)
    actor.action().variables[3] = 16;
  actors_.appearance_scene().footstep_role = state_.current_leader_role;
  startup_actor_.reset();
}
void WorldPartyMovement::project(ActorId id) const {
  auto &actor = actors_.actor(id);
  const auto role = actor.authored_role();
  if (!role || !state_.projection.leader_role)
    throw std::logic_error(
        "Native follower projection has no owned role/cache");
  const auto leader_role = *state_.projection.leader_role;
  if (leader_role >= 30)
    throw std::invalid_argument("Invalid cached party leader role");
  const auto absolute = [&]() {
    actor.behavior.projected_x = coordinate(
        std::uint16_t(integral(actor, 0) - actors_.scene().camera_x));
    actor.behavior.projected_y = coordinate(
        std::uint16_t(integral(actor, 1) - actors_.scene().camera_y));
  };
  // The authored entry is assembled under .A8, but the actor movement pass
  // runs with a 16-bit accumulator: AND byte0 consumes the following CLC
  // byte as its high operand. Actual source therefore tests VAR7 &1800.
  if (*role == leader_role || (actor.action().variables[7] & 0x1800) ||
      state_.projection.movement_mismatch ||
      actor.behavior.direction != state_.projection.direction) {
    absolute();
    return;
  }
  // The source reads retained role tables even after that role is retired.
  // Its integer coordinates and screen projection do not require a live actor.
  const auto leader_position = actors_.authored_position(leader_role);
  const auto leader_behavior = actors_.authored_behavior(leader_role);
  const auto direction = actor.behavior.direction;
  if (direction >= 8)
    throw std::invalid_argument("Invalid follower projection direction");
  const auto offset = actor.action().variables[5];
  const auto spacing = [&](const auto &table) {
    if (offset > 10 || (offset & 1))
      throw std::invalid_argument(
          "Follower spacing is outside its authored six entries");
    return table[offset / 2];
  };
  std::uint16_t result;
  if (direction & 1) {
    const auto dx =
        magnitude(std::uint16_t(std::uint16_t(leader_position[0] >> 16) - integral(actor, 0)));
    result = dx;
    if (dx >= spacing(data_.diagonal_spacing)) {
      const auto dy =
          magnitude(std::uint16_t(std::uint16_t(leader_position[1] >> 16) - integral(actor, 1)));
      result = std::uint16_t(dy - dx);
      if (result)
        result = std::uint16_t(magnitude(result) - 1);
    }
  } else {
    const unsigned axis = (direction == 2 || direction == 6) ? 0 : 1;
    result = std::uint16_t(
        axis ? leader_behavior.projected_x ^ actor.behavior.projected_x
             : leader_behavior.projected_y ^ actor.behavior.projected_y);
    if (!result) {
      const auto distance = magnitude(
          std::uint16_t(std::uint16_t(leader_position[axis] >> 16) - integral(actor, axis)));
      result =
          magnitude(std::uint16_t(distance - spacing(data_.cardinal_spacing)));
      if (result)
        --result;
    }
  }
  // The source tests the doubled 16-bit result, so both 0 and8000 retain
  // their previous projection. No position/fraction/velocity is changed.
  if (std::uint16_t(result * 2))
    absolute();
}
} // namespace eb::native
