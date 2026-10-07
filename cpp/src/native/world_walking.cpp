#include "eb/native/world_walking.hpp"
#include "eb/native/world_npc_collision.hpp"
#include "eb/native/world_door_transitions.hpp"
#include <algorithm>
#include <bit>
#include <stdexcept>

namespace eb::native {
void WorldWalking::bind_transitions(WorldDoorTransitions &transitions) {
  if (busy() || failed() || &transitions.formation() != &formation_ ||
      !transitions.uses(data_))
    throw std::logic_error(
        "Native walking requires its own idle transition formation");
  doors_.bind_transitions(transitions);
}
namespace {
void require(bool okay, const char *message) {
  if (!okay)
    throw std::logic_error(message);
}
std::uint16_t wrap(unsigned value) { return std::uint16_t(value); }
std::uint32_t shifted(std::uint32_t value) {
  return std::bit_cast<std::uint32_t>(std::bit_cast<std::int32_t>(value) >> 8);
}
std::uint32_t fixed(std::uint16_t whole, std::uint16_t fraction) {
  return std::uint32_t(whole) << 16 | fraction;
}
} // namespace
WalkingDataLayout walking_data_layout(GameVersion version) {
  if (version == GameVersion::US)
    return {0x3e0bc, 0x3e0f4, 0x3e12c, 0x3e178};
  if (version == GameVersion::JP)
    return {0x3e0a6, 0x3e0de, 0x3e116, 0x3e162};
  throw std::invalid_argument("Unknown walking content region");
}
WalkingData::WalkingData(std::span<const std::uint8_t> image,
                         GameVersion version)
    : WalkingData(image, version, walking_data_layout(version)) {}
WalkingData::WalkingData(std::span<const std::uint8_t> image,
                         GameVersion version, WalkingDataLayout layout)
    : version_(version) {
  (void)walking_data_layout(version);
  const auto bounded = [&](std::size_t at, std::size_t length) {
    if (at > image.size() || length > image.size() - at)
      throw std::out_of_range("Truncated native walking content");
  };
  bounded(layout.cardinal, 14 * 4);
  bounded(layout.diagonal, 14 * 4);
  bounded(layout.allowed, 14 * 2);
  bounded(layout.mushroom_remapping, 3 * 16 * 2);
  const auto word = [&](std::size_t at) {
    return std::uint16_t(image[at] | unsigned(image[at + 1]) << 8);
  };
  const auto value = [&](std::size_t at) {
    return std::uint32_t(word(at)) | std::uint32_t(word(at + 2)) << 16;
  };
  for (unsigned style = 0; style < 14; ++style) {
    const auto straight = value(layout.cardinal + style * 4),
               diagonal = value(layout.diagonal + style * 4);
    deltas_[style] = {{{0, 0u - straight},
                       {diagonal, 0u - diagonal},
                       {straight, 0},
                       {diagonal, diagonal},
                       {0, straight},
                       {0u - diagonal, diagonal},
                       {0u - straight, 0},
                       {0u - diagonal, 0u - diagonal}}};
    allowed_[style] = word(layout.allowed + style * 2);
  }
  for (unsigned modifier = 0; modifier < 3; ++modifier)
    for (unsigned mask = 0; mask < 16; ++mask)
      remapping_[modifier][mask] =
          word(layout.mushroom_remapping + modifier * 32 + mask * 2);
}
std::uint32_t WalkingData::raw_delta(unsigned axis, unsigned style,
                                     CollisionDirection direction) const {
  if (axis >= 2 || style >= deltas_.size() || unsigned(direction) >= 8)
    throw std::out_of_range("Invalid raw walking delta selection");
  return deltas_[style][unsigned(direction)][axis];
}
CollisionDirection WalkingData::direction(unsigned style, std::uint16_t pad,
                                          bool pending) const {
  if (style >= allowed_.size())
    throw std::out_of_range("Walking style exceeds imported directions");
  if (pending)
    return CollisionDirection::None;
  constexpr std::array<unsigned, 8> masks{0x800, 0x900, 0x100, 0x500,
                                          0x400, 0x600, 0x200, 0xa00};
  for (unsigned i = 0; i < masks.size(); ++i)
    if ((pad & 0xf00) == masks[i] && (allowed_[style] & (1u << i)))
      return CollisionDirection(i);
  return CollisionDirection::None;
}
void WalkingData::remap(party::MovementPolicyState &state,
                        story::InputState &input,
                        std::uint16_t demo_frames) const {
  if (!state.mushroomized)
    return;
  // Validate only the table index that would actually be consumed. A zero
  // timer wraps any prior modifier into the authored four-value domain.
  if (state.timer && state.modifier > 3 && !demo_frames)
    throw std::out_of_range(
        "Mushroom input modifier exceeds imported remapping");
  if (!state.timer) {
    state.timer = 1800;
    state.modifier = wrap(unsigned(state.modifier) + 1) & 3;
  }
  --state.timer;
  if (!state.modifier || demo_frames)
    return;
  const auto map = [&](std::uint16_t pad) {
    return std::uint16_t((pad & 0xf0ff) |
                         remapping_[state.modifier - 1][(pad >> 8) & 15]);
  };
  input.pressed[0] = map(input.pressed[0]);
  input.state[0] = map(input.state[0]);
}
std::uint32_t WalkingData::adjust(std::uint32_t position, unsigned axis,
                                  unsigned style, CollisionDirection direction,
                                  std::uint16_t terrain,
                                  std::uint16_t demo_frames,
                                  std::uint8_t party_status) const {
  if (axis > 1 || style >= deltas_.size() || unsigned(direction) > 7)
    throw std::out_of_range(
        "Walking displacement selector exceeds imported content");
  auto delta = deltas_[style][unsigned(direction)][axis];
  std::uint32_t factor{};
  if ((terrain & 12) == 8)
    factor = 0x8000;
  else if ((terrain & 12) == 12)
    factor = 0x547a;
  else if (!demo_frames && party_status == 3 && !style)
    factor = 0x18000;
  if (factor)
    delta = shifted(shifted(delta) * factor);
  return position + delta;
}

WorldWalking::WorldWalking(
    const WalkingData &data, ActorWorld &actors, const WorldEnemies &enemies,
    npcs::InteractionState &leader, WorldControlState &control,
    WorldPartyState &formation, party::State &party,
    party::MovementPolicyState &mushroom, dialogue::PromptState &prompt,
    story::InputState &input, story::TickState &clock,
    WorldNavigationState &navigation, WorldInteractionQueue &queue,
    WorldHotspots &hotspots, WorldDoors &doors, const WorldCollision &collision,
    const WorldMovement &movement, const WorldMapArea &area)
    : data_(data), actors_(actors), enemies_(enemies), leader_(leader),
      control_(control), formation_(formation), party_(party),
      mushroom_(mushroom), prompt_(prompt), input_(input), clock_(clock),
      navigation_(navigation), queue_(queue), hotspots_(hotspots),
      doors_(doors), collision_(collision), movement_(movement), area_(area) {
  check();
}
void WorldWalking::check() const {
  require(!queue_.failed(),
          "Native walking cannot use an abandoned interaction queue");
  require(!failed_, "Native walking failed; replace this world owner");
  require(party_.version() == data_.version(),
          "Walking party and imported content regions differ");
  require(queue_.shares_world(data_.version(),
                              actors_.appearance_scene().intangibility_ticks),
          "Walking queue is not bound to this world");
  require(!doors_.failed(), "Walking door owner has failed");
  require(doors_.uses(actors_, leader_, control_, navigation_,
                      doors_.maintenance_state(), input_, queue_),
          "Walking doors use different world owners");
  require(hotspots_.uses(leader_, clock_, actors_.appearance_scene(), queue_),
          "Walking hotspots use different world owners");
}
bool WorldWalking::uses(
    const WorldControl &control, const ActorWorld &actors,
    const WorldEnemies &enemies, const WorldInteractionQueue &queue,
    const WorldMaintenanceState &maintenance, const party::State &party,
    const story::InputState &input, const story::TickState &clock,
    const WorldCollision &collision, const WorldMapArea &area) const noexcept {
  return &actors_ == &actors && &enemies_ == &enemies && &queue_ == &queue &&
         &doors_.maintenance_state() == &maintenance && &party_ == &party &&
         &input_ == &input && &clock_ == &clock && &collision_ == &collision &&
         &area_ == &area && &control.leader_state() == &leader_ &&
         &control.state() == &control_ && &control.formation() == &formation_ &&
         control.uses(actors_, prompt_, input_, clock_, collision_, area_);
}
void WorldWalking::collide(CollisionPoint proposed) {
  world_npc_collision(actors_, enemies_, leader_, formation_, proposed);
}
std::unique_ptr<WorldWalking::Operation> WorldWalking::begin() {
  check();
  require(!active_, "Native walking already has unfinished work");
  require(!doors_.busy(),
          "Native walking cannot adopt an unfinished door operation");
  // Imported selector bounds are checked before any source-ordered effects.
  (void)data_.direction(leader_.walking_style, input_.state[0],
                        queue_.pending() != 0);
  auto operation = std::unique_ptr<Operation>(new Operation(*this));
  active_ = operation.get();
  return operation;
}
WorldWalking::Operation::Operation(WorldWalking &owner) : owner_(owner) {}
WorldWalking::Operation::~Operation() {
  if (owner_.active_ == this) {
    owner_.active_ = nullptr;
    if (!complete_)
      owner_.failed_ = true;
  }
}
const std::optional<WorldDoorTransitionRequest> &
WorldWalking::Operation::request() const {
  static const std::optional<WorldDoorTransitionRequest> none;
  return door_ ? door_->request() : none;
}
bool WorldWalking::Operation::advance() {
  auto &o = owner_;
  if (complete_)
    return true;
  try {
    o.check();
    if (!phase_) {
      auto &leader = o.leader_;
      auto &appearance = o.actors_.appearance_scene();
      o.control_.moved_this_tick = 0;
      o.data_.remap(o.mushroom_, o.input_, leader.demo_frames);
      auto direction = o.data_.direction(
          leader.walking_style, o.input_.state[0], o.queue_.pending() != 0);
      if (appearance.battle_swirl_ticks) {
        if (--appearance.battle_swirl_ticks == 0)
          o.control_.encounter.mode = 0xffff;
        else
          o.collide({leader.leader_x, leader.leader_y});
        phase_ = 3;
      } else if (direction == CollisionDirection::None) {
        o.collide({leader.leader_x, leader.leader_y});
        phase_ = 3;
      } else {
        if (leader.walking_style == 13) {
          const bool alternate = o.navigation_.stairs_direction == 0x100 ||
                                 o.navigation_.stairs_direction == 0x200;
          direction = alternate ? (unsigned(direction) <= 3
                                       ? CollisionDirection::NorthEast
                                       : CollisionDirection::SouthWest)
                                : (((unsigned(direction) - 1) & 7) <= 3
                                       ? CollisionDirection::SouthEast
                                       : CollisionDirection::NorthWest);
          leader.leader_direction = unsigned(direction) < 4 ? 2 : 6;
        } else if (!(leader.movement_flags & 1))
          leader.leader_direction = unsigned(direction);
        ++appearance.movement_counter;
        ++o.control_.moved_this_tick;
        const auto old_surface = o.control_.trodden_surface_flags;
        const std::array<std::uint32_t, 2> original{
            fixed(leader.leader_x, o.control_.x_fraction),
            fixed(leader.leader_y, o.control_.y_fraction)};
        const auto adjust = [&](CollisionDirection d) {
          for (unsigned axis = 0; axis < 2; ++axis)
            proposed_[axis] = o.data_.adjust(
                original[axis], axis, leader.walking_style, d, old_surface,
                leader.demo_frames, o.party_.party_status);
        };
        adjust(direction);
        o.navigation_.ladder_stairs.x = 0xffff;
        std::uint16_t terrain{};
        if (!(leader.movement_flags & 2)) {
          const auto result =
              o.movement_.resolve(o.collision_, o.area_,
                                  {{std::uint16_t(proposed_[0] >> 16),
                                    std::uint16_t(proposed_[1] >> 16)},
                                   direction,
                                   o.queue_.pending() != 0,
                                   o.navigation_.ladder_stairs,
                                   o.navigation_.vertical_obstacles});
          leader.checked_surface_origin = result.probes.origin;
          leader.surface_flags = result.probes.surface_flags;
          o.navigation_.ladder_stairs = result.probes.ladder_stairs;
          o.navigation_.surface_write_counter =
              result.probes.surface_write_counter;
          o.navigation_.vertical_obstacles = result.probes.vertical_obstacles;
          o.navigation_.final_direction = unsigned(result.final_direction);
          o.formation_.projection.movement_mismatch = result.redirected ? 1 : 0;
          terrain = result.surface_flags;
          if (direction != result.final_direction)
            adjust(result.final_direction);
        } else if (!leader.demo_frames) {
          const auto sample = o.collision_.tile(
              o.area_,
              {std::uint16_t(proposed_[0] >> 19),
               std::uint16_t(std::uint16_t((proposed_[1] >> 16) + 4) >> 3)});
          leader.surface_flags = sample.surface_flags;
          if (sample.ladder_stairs)
            o.navigation_.ladder_stairs = *sample.ladder_stairs;
          terrain = sample.surface_flags & 0x3f;
        }
        o.control_.trodden_surface_flags = terrain;
        o.collide({std::uint16_t(proposed_[0] >> 16),
                   std::uint16_t(proposed_[1] >> 16)});
        allowed_ = !leader.collision_actor && !(terrain & 0xc0);
        if (o.navigation_.ladder_stairs.x != 0xffff) {
          door_ = o.doors_.begin(o.navigation_.ladder_stairs);
          phase_ = 1;
        } else {
          if (leader.walking_style == 7 || leader.walking_style == 8)
            leader.walking_style = 0;
          phase_ = 2;
        }
      }
    }
    if (phase_ == 1) {
      if (!door_->advance())
        return false;
      allowed_ = door_->permission();
      door_.reset();
      phase_ = 2;
    }
    if (phase_ == 2) {
      if (allowed_) {
        o.control_.x_fraction = std::uint16_t(proposed_[0]);
        o.leader_.leader_x = std::uint16_t(proposed_[0] >> 16);
        o.control_.y_fraction = std::uint16_t(proposed_[1]);
        o.leader_.leader_y = std::uint16_t(proposed_[1] >> 16);
      } else
        o.control_.moved_this_tick = 0;
      o.hotspots_.evaluate_tick();
      if (o.leader_.walking_style == 7 || o.leader_.walking_style == 8)
        o.leader_.leader_x =
            wrap(unsigned(o.navigation_.ladder_stairs.x) * 8 + 8);
      if (o.prompt_.debug && (o.input_.state[0] & 0x40)) {
        o.leader_.leader_x &= 0xfff8;
        o.leader_.leader_y &= 0xfff8;
      }
      phase_ = 3;
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
