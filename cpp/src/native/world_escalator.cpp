#include "eb/native/world_escalator.hpp"
#include "eb/native/world_door_transitions.hpp"
#include "eb/native/world_maintenance.hpp"
#include <stdexcept>

namespace eb::native {
namespace {
void require(bool okay, const char *message) {
  if (!okay) throw std::logic_error(message);
}
std::uint32_t fixed(std::uint16_t whole, std::uint16_t fraction) {
  return std::uint32_t(whole) << 16 | fraction;
}
}
WorldEscalator::WorldEscalator(
    const WalkingData &data, ActorWorld &actors, npcs::InteractionState &leader,
    WorldControlState &control, WorldPartyState &formation, WorldNavigationState &navigation,
    const WorldDoorTransitionState &transitions, WorldMaintenanceState &maintenance,
    story::InputState &input, WorldInteractionQueue &queue, WorldDoors &doors,
    const WorldCollision &collision, const WorldMovement &movement, const WorldMapArea &area)
    : data_(data), actors_(actors), leader_(leader), control_(control),
      formation_(formation), navigation_(navigation), transitions_(transitions),
      maintenance_(maintenance), input_(input), queue_(queue), doors_(doors),
      collision_(collision), movement_(movement), area_(area) { check(); }
void WorldEscalator::check() const {
  require(!failed(), "Native escalator owner failed");
  require(queue_.shares_world(data_.version(), actors_.appearance_scene().intangibility_ticks),
          "Native escalator queue uses another world");
  require(doors_.uses(actors_, leader_, control_, navigation_, maintenance_, input_, queue_),
          "Native escalator doors use different world owners");
}
bool WorldEscalator::uses(
    const WorldControl &control, const WorldWalking &walking,
    const WorldDoorTransitions &transitions, const WorldMaintenanceState &maintenance,
    const story::InputState &input, const WorldInteractionQueue &queue,
    const WorldCollision &collision, const WorldMapArea &area) const noexcept {
  return &control.actors() == &actors_ && &control.leader_state() == &leader_ &&
         &control.state() == &control_ && &control.formation() == &formation_ &&
         &walking.data() == &data_ && &walking.movement() == &movement_ &&
         &walking.doors() == &doors_ && &walking.navigation() == &navigation_ &&
         &transitions.state() == &transitions_ && &transitions.formation() == &formation_ &&
         transitions.uses(data_) && transitions.uses(leader_, control_, navigation_, input_) &&
         &maintenance == &maintenance_ && &input == &input_ && &queue == &queue_ &&
         &collision == &collision_ && &area == &area_;
}
std::unique_ptr<WorldEscalator::Operation> WorldEscalator::begin() {
  check();
  require(!active_ && !doors_.busy(), "Native escalator already has unfinished movement or doors");
  auto result = std::unique_ptr<Operation>(new Operation(*this));
  active_ = result.get();
  return result;
}
WorldEscalator::Operation::Operation(WorldEscalator &owner) : owner_(owner) {}
WorldEscalator::Operation::~Operation() {
  if (owner_.active_ == this) {
    owner_.active_ = nullptr;
    if (!complete_) owner_.failed_ = true;
  }
}
const std::optional<WorldDoorTransitionRequest> &WorldEscalator::Operation::request() const {
  static const std::optional<WorldDoorTransitionRequest> none;
  return door_ ? door_->request() : none;
}
bool WorldEscalator::Operation::advance() {
  auto &o = owner_;
  if (complete_) return true;
  try {
    o.check();
    if (!phase_) {
      auto &swirl = o.actors_.appearance_scene().battle_swirl_ticks;
      if (o.maintenance_.enemy_touched) phase_ = 2;
      else if (swirl) { --swirl; phase_ = 2; }
      else {
        constexpr std::array directions{CollisionDirection::NorthWest, CollisionDirection::NorthEast,
                                         CollisionDirection::SouthWest, CollisionDirection::SouthEast};
        direction_ = directions[(o.transitions_.escalator_entrance >> 8) & 3];
        o.navigation_.ladder_stairs.x = 0xffff;
        const auto resolved = o.movement_.resolve(o.collision_, o.area_,
            {{o.leader_.leader_x, o.leader_.leader_y}, direction_, o.queue_.pending() != 0,
             o.navigation_.ladder_stairs, o.navigation_.vertical_obstacles});
        o.leader_.checked_surface_origin = resolved.probes.origin;
        o.leader_.surface_flags = resolved.probes.surface_flags;
        o.navigation_.surface_write_counter = resolved.probes.surface_write_counter;
        o.navigation_.vertical_obstacles = resolved.probes.vertical_obstacles;
        o.navigation_.ladder_stairs = resolved.probes.ladder_stairs;
        o.navigation_.final_direction = unsigned(resolved.final_direction);
        o.formation_.projection.movement_mismatch = resolved.redirected ? 1 : 0;
        if (o.navigation_.ladder_stairs.x != 0xffff)
          door_ = o.doors_.begin(o.navigation_.ladder_stairs);
        phase_ = 1;
      }
    }
    if (phase_ == 1) {
      if (door_ && !door_->advance()) return false;
      // LDX #1 makes the original permission branch unconditional. The door
      // can change style/coordinates; motion still uses raw style12 and the
      // original entrance direction, applied to those current coordinates.
      const auto x = fixed(o.leader_.leader_x, o.control_.x_fraction) + o.data_.raw_delta(0, 12, direction_);
      const auto y = fixed(o.leader_.leader_y, o.control_.y_fraction) + o.data_.raw_delta(1, 12, direction_);
      o.leader_.leader_x = std::uint16_t(x >> 16);
      o.control_.x_fraction = std::uint16_t(x);
      o.leader_.leader_y = std::uint16_t(y >> 16);
      o.control_.y_fraction = std::uint16_t(y);
      o.control_.moved_this_tick = 1;
      phase_ = 2;
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
