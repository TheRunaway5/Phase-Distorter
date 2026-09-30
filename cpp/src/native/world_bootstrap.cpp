#include "eb/native/world_bootstrap.hpp"
#include <stdexcept>

namespace eb::native {
WorldBootstrapData::WorldBootstrapData(std::span<const std::uint8_t> image,
                                       GameVersion version)
    : version_(version) {
  if (version != GameVersion::US && version != GameVersion::JP)
    throw std::invalid_argument("Unknown native bootstrap region");
  constexpr std::size_t flag = 0x30186;
  if (image.size() < flag + 2)
    throw std::invalid_argument("Truncated native bootstrap flag content");
  pajamas_flag_ = image[flag] | std::uint16_t(image[flag + 1]) << 8;
  if (!pajamas_flag_ || pajamas_flag_ > 1024)
    throw std::invalid_argument(
        "Native bootstrap flag leaves the actual story flags");
}
WorldBootstrap::WorldBootstrap(const WorldBootstrapData &data,
                               const WalkingData &walking, ActorWorld &actors,
                               party::State &party, WorldPartyState &formation,
                               PartyTrail &trail, WorldControlState &control,
                               WorldMaintenanceState &maintenance,
                               WorldPartyFollowingState &following)
    : data_(data), walking_(walking), actors_(actors), party_(party),
      formation_(formation), trail_(trail), control_(control),
      maintenance_(maintenance), following_(following) {
  if (data_.version() != walking_.version() ||
      data_.version() != actors_.version() ||
      data_.version() != party_.version())
    throw std::invalid_argument(
        "Native bootstrap owners must share their actual region");
}
bool WorldBootstrap::uses(
    const ActorWorld &actors, const party::State &party,
    const WorldPartyState &formation, const PartyTrail &trail,
    const WorldControlState &control, const WorldMaintenanceState &maintenance,
    const WorldPartyFollowingState &following) const noexcept {
  return &actors_ == &actors && &party_ == &party &&
         &formation_ == &formation && &trail_ == &trail &&
         &control_ == &control && &maintenance_ == &maintenance &&
         &following_ == &following;
}
bool WorldBootstrap::preflight() const {
  if (actors_.in_tick())
    throw std::logic_error(
        "Native bootstrap cannot reset an active actor tick");
  const auto flags = actors_.scene().event_flags;
  if (flags.size() != 128)
    throw std::logic_error(
        "Native bootstrap requires the actual complete story flag owner");
  const unsigned flag = data_.pajamas_flag() - 1;
  return (flags[flag / 8] & (1u << (flag % 8))) != 0;
}
void WorldBootstrap::apply(WorldActor &controller, bool pajamas) noexcept {
  // No allocation or service call occurs between these source-ordered writes.
  controller.appearance_context.shape = 1;
  maintenance_.possession_actor.reset();
  trail_.next_write = 0;
  control_.automatic_mode = 0;
  control_.automatic_ticks = 0;
  control_.automatic_restore_style = 0;
  party_.party_status = 0;
  formation_.current_leader_role = 24;
  for (unsigned i = 0; i < 6; ++i) {
    party_.display_order[i] = 0;
    formation_.hp_alert_shown[i] = 0;
  }
  party_.controlled_count = 0;
  party_.party_count = 0;
  // VELOCITY_STORE's immutable expansion is the borrowed WalkingData owner.
  following_.pajamas = pajamas ? 1 : 0;
}
void WorldBootstrap::initialize() {
  const bool pajamas = preflight();
  const auto controller = actors_.actor_for_role(23);
  if (!controller)
    throw std::logic_error(
        "Native world initialization requires its actual role23 actor");
  apply(actors_.actor(*controller), pajamas);
}
ActorId
WorldBootstrap::create_controller_and_initialize(PreparedActorState prepared) {
  const bool pajamas = preflight();
  if (actors_.actor_for_role(23))
    throw std::logic_error(
        "Native world bootstrap cannot replace an occupied controller role");
  prepared.x = prepared.y = 0;
  const auto controller = actors_.create_authored_script(1, prepared, {23, 24});
  if (!controller)
    throw std::logic_error(
        "Native controller creation lost its preflight role");
  apply(actors_.actor(*controller), pajamas);
  return *controller;
}
} // namespace eb::native
