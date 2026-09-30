#include "eb/native/world_doors.hpp"
#include "eb/native/world_door_transitions.hpp"
#include "eb/native/world_maintenance.hpp"
#include <stdexcept>

namespace eb::native {
std::shared_ptr<const WorldDoorResources>
WorldDoorResources::import(std::span<const std::uint8_t> image,
                           GameVersion version) {
  if (version != GameVersion::US && version != GameVersion::JP)
    throw std::invalid_argument("Unsupported native door region");
  // DOOR_DATA ends exactly where DOOR_CONFIG_ENTRY_0 begins. The directory
  // and following music content are deliberately not imported here.
  const std::size_t size = version == GameVersion::US ? 0x264f : 0x268b;
  constexpr std::size_t base = 0xf0000;
  if (image.size() < base || image.size() - base < size)
    throw std::invalid_argument("Truncated native door payload content");
  auto result =
      std::shared_ptr<WorldDoorResources>(new WorldDoorResources(version));
  result->data_.assign(image.begin() + base, image.begin() + base + size);
  return result;
}
DoorEventPredicate
WorldDoorResources::event_predicate(std::uint16_t door_found) const {
  const std::size_t at = door_found & 0x7fff;
  if (at > data_.size() || data_.size() - at < 2)
    throw std::out_of_range(
        "Door event predicate reads outside owned payload content");
  const unsigned word = data_[at] | unsigned(data_[at + 1]) << 8;
  // C06A1B uses an unsigned strict >8000 comparison, not a high-bit test.
  return {std::uint16_t(word & 0x7fff), word > 0x8000};
}
dialogue::ReferenceKey
WorldDoorResources::event_text(std::uint16_t door_found) const {
  const std::size_t at = door_found & 0x7fff;
  if (at > data_.size() || data_.size() - at < 6)
    throw std::out_of_range(
        "Door event text reads outside owned payload content");
  return {data_[at + 2], data_[at + 3], data_[at + 4], data_[at + 5]};
}
dialogue::ReferenceKey WorldDoorResources::door_key(std::uint16_t door_found) {
  return {std::uint8_t(door_found), std::uint8_t((door_found & 0x7fff) >> 8),
          0xcf, 0};
}
WorldDoors::WorldDoors(std::shared_ptr<const npcs::MapTextResources> map,
                       std::shared_ptr<const WorldDoorResources> resources,
                       ActorWorld &actors, npcs::InteractionState &leader,
                       WorldControlState &control,
                       WorldNavigationState &navigation,
                       WorldMaintenanceState &maintenance,
                       story::InputState &input, WorldInteractionQueue &queue)
    : map_(std::move(map)), resources_(std::move(resources)), actors_(actors),
      leader_(leader), control_(control), navigation_(navigation),
      maintenance_(maintenance), input_(input), queue_(queue) {
  if (!map_ || !resources_ || map_->version() != resources_->version() ||
      !queue_.shares_world(resources_->version(),
                           actors_.appearance_scene().intangibility_ticks))
    throw std::invalid_argument(
        "Native doors require matching region and actual world queue owners");
}
bool WorldDoors::uses(const ActorWorld &actors,
                      const npcs::InteractionState &leader,
                      const WorldControlState &control,
                      const WorldNavigationState &navigation,
                      const WorldMaintenanceState &maintenance,
                      const story::InputState &input,
                      const WorldInteractionQueue &queue) const noexcept {
  return &actors_ == &actors && &leader_ == &leader && &control_ == &control &&
         &navigation_ == &navigation && &maintenance_ == &maintenance &&
         &input_ == &input && &queue_ == &queue;
}
void WorldDoors::check() const {
  if (failed())
    throw std::logic_error(
        "Native door operation failed; replace this world owner");
}
bool WorldDoors::failed() const {
  return failed_ || queue_.failed() || (transitions_ && transitions_->failed());
}
void WorldDoors::bind_transitions(WorldDoorTransitions &transitions) {
  check();
  if (active_ || (transitions_ && transitions_ != &transitions) ||
      transitions.failed() || transitions.version() != resources_->version() ||
      !transitions.uses(leader_, control_, navigation_, input_))
    throw std::logic_error(
        "Native doors require idle matching transition owners");
  transitions_ = &transitions;
}
std::unique_ptr<WorldDoors::Operation> WorldDoors::begin(CollisionCell cell) {
  check();
  if (active_)
    throw std::logic_error("Native doors already have unfinished work");
  auto result = std::unique_ptr<Operation>(new Operation(*this, cell));
  active_ = result.get();
  return result;
}
WorldDoors::Operation::Operation(WorldDoors &owner, CollisionCell cell)
    : owner_(owner), cell_(cell) {}
WorldDoors::Operation::~Operation() {
  if (owner_.active_ == this) {
    owner_.active_ = nullptr;
    if (!complete_)
      owner_.failed_ = true;
  }
}
bool WorldDoors::Operation::permission() const {
  if (!complete_)
    throw std::logic_error(
        "Native door permission is not available before completion");
  return permission_;
}
bool WorldDoors::Operation::advance() {
  auto &o = owner_;
  o.check();
  if (complete_)
    return true;
  try {
    if (request_) {
      if (!o.transitions_)
        return false;
      o.transitions_->execute(*request_);
      request_.reset();
      complete_ = true;
      o.active_ = nullptr;
      return true;
    }
    const auto type = o.map_->lookup(cell_.x, cell_.y, o.leader_.map_text);
    const auto found = o.leader_.map_text.door_found;
    switch (type) {
    case 0: {
      const auto payload = o.resources_->event_predicate(found);
      const auto flags = o.actors_.scene().event_flags;
      if (!payload.flag || (unsigned(payload.flag) - 1) / 8 >= flags.size())
        throw std::out_of_range(
            "Door text event flag has no authoritative owner");
      const bool set = (flags[(payload.flag - 1) / 8] &
                        (1u << ((payload.flag - 1) & 7))) != 0;
      if (set == payload.required_state) {
        o.queue_.queue().enqueue(0, o.resources_->event_text(found));
        // These clear even if the queue suppresses its current type.
        o.navigation_.ladder_stairs = {0, 0};
      }
      permission_ = false;
      break;
    }
    case 1:
      if (o.leader_.walking_style != 7 && o.leader_.walking_style != 8) {
        o.leader_.walking_style = found ? 8 : 7;
        o.leader_.leader_direction &= 0xfffe;
        o.navigation_.stairs_direction = 0xffff;
      }
      permission_ = true;
      break;
    case 2:
      if (o.input_.player_activity && o.control_.automatic_mode != 2 &&
          !o.queue_.pending() && !o.maintenance_.enemy_touched &&
          !o.actors_.appearance_scene().battle_swirl_ticks) {
        o.navigation_.using_door = 1;
        o.queue_.queue().enqueue(2, WorldDoorResources::door_key(found));
        clear_party_sprite_blink(o.actors_);
      }
      permission_ = false;
      break;
    case 3:
    case 4:
      permission_ = type == 4;
      if (!o.leader_.demo_frames) {
        request_ = WorldDoorTransitionRequest{
            type == 3 ? WorldDoorTransitionKind::Escalator
                      : WorldDoorTransitionKind::Stairs,
            cell_, found};
        if (o.transitions_) {
          o.transitions_->execute(*request_);
          request_.reset();
          break;
        }
        return false;
      }
      break;
    case 5:
    case 6:
    case 7:
      permission_ = false;
      break;
    default:
      throw std::out_of_range(
          "Door lookup miss/type has no initialized source permission");
    }
    complete_ = true;
    o.active_ = nullptr;
    return true;
  } catch (...) {
    o.failed_ = true;
    throw;
  }
}
} // namespace eb::native
