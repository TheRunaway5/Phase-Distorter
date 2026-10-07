#include "eb/native/world_bicycle.hpp"
#include "eb/native/world_npc_collision.hpp"
#include <stdexcept>
#include <utility>

namespace eb::native {
namespace {
void require(bool okay, const char *message) {
  if (!okay)
    throw std::logic_error(message);
}
std::uint32_t fixed(std::uint16_t whole, std::uint16_t fraction) {
  return std::uint32_t(whole) << 16 | fraction;
}
} // namespace
WorldBicycle::WorldBicycle(
    const WalkingData &data, ActorWorld &actors, const WorldEnemies &enemies,
    npcs::InteractionState &leader, WorldControlState &control,
    WorldPartyState &formation, dialogue::PromptState &prompt,
    story::InputState &input, WorldNavigationState &navigation,
    WorldInteractionQueue &queue, const WorldCollision &collision,
    const WorldMapArea &area, WorldBicycleSound sound)
    : data_(data), actors_(actors), enemies_(enemies), leader_(leader),
      control_(control), formation_(formation), prompt_(prompt), input_(input),
      navigation_(navigation), queue_(queue), collision_(collision),
      area_(area), sound_(std::move(sound)) {
  check();
}
void WorldBicycle::check() const {
  require(!failed(), "Native bicycle owner failed");
  require(queue_.shares_world(data_.version(),
                              actors_.appearance_scene().intangibility_ticks),
          "Native bicycle queue uses another world");
}
bool WorldBicycle::uses(const WorldControl &control,
                        const WorldWalking &walking,
                        const WorldEnemies &enemies,
                        const story::InputState &input,
                        const WorldInteractionQueue &queue,
                        const WorldCollision &collision,
                        const WorldMapArea &area) const noexcept {
  return &control.actors() == &actors_ && &control.leader_state() == &leader_ &&
         &control.state() == &control_ && &control.formation() == &formation_ &&
         &control.prompt_state() == &prompt_ && &walking.data() == &data_ &&
         &walking.navigation() == &navigation_ && &enemies == &enemies_ &&
         &input == &input_ && &queue == &queue_ && &collision == &collision_ &&
         &area == &area_;
}
void WorldBicycle::execute(std::uint16_t previous_movement) {
  check();
  require(!executing_, "Native bicycle movement is already executing");
  executing_ = true;
  try {
    const auto mapped = data_.direction(leader_.walking_style, input_.state[0],
                                        queue_.pending() != 0);
    auto &appearance = actors_.appearance_scene();
    const auto collide = [&](CollisionPoint at) {
      world_npc_collision(actors_, enemies_, leader_, formation_, at);
    };
    if (appearance.battle_swirl_ticks) {
      if (--appearance.battle_swirl_ticks == 0)
        control_.encounter.mode = 0xffff;
      else
        collide({leader_.leader_x, leader_.leader_y});
    } else {
      if (input_.pressed[0] & 0x10) {
        require(bool(sound_), "Native bicycle bell requires the sound adapter");
        sound_({dialogue::ScriptSoundKind::QueueEffect, 23, 23});
      }
      auto direction = mapped;
      if (direction == CollisionDirection::None && previous_movement) {
        if (leader_.leader_direction >= 8)
          throw std::out_of_range("Bicycle coasting has no valid facing");
        direction = CollisionDirection(leader_.leader_direction);
      }
      if (direction == CollisionDirection::None) {
        collide({leader_.leader_x, leader_.leader_y});
      } else {
        if (unsigned(direction) & 1)
          control_.bicycle_turn_frames = 4;
        else if (control_.bicycle_turn_frames) {
          --control_.bicycle_turn_frames;
          if (control_.bicycle_turn_frames ||
              mapped == CollisionDirection::None)
            direction = CollisionDirection(leader_.leader_direction);
        }
        const auto dx = data_.raw_delta(0, 3, direction);
        const auto dy = data_.raw_delta(1, 3, direction);
        leader_.leader_direction = std::uint16_t(direction);
        const std::array<std::uint32_t, 2> proposed{
            fixed(leader_.leader_x, control_.x_fraction) + dx,
            fixed(leader_.leader_y, control_.y_fraction) + dy};
        navigation_.ladder_stairs.x = 0xffff;
        // The terrain routine explicitly reads authored role24's size, while
        // NPC collision below uses the actual current formation leader.
        const auto bicycle = actors_.actor_for_role(24);
        require(bicycle.has_value(),
                "Native bicycle has no authored role24 geometry");
        const auto shape = actors_.actor(*bicycle).appearance_context.shape;
        const CollisionPoint at{std::uint16_t(proposed[0] >> 16),
                                std::uint16_t(proposed[1] >> 16)};
        leader_.checked_surface_origin = collision_.origin(at, shape);
        const auto surface =
            collision_.directional_surface(area_, at, shape, direction);
        leader_.surface_flags = surface;
        collide(at);
        if (!leader_.collision_actor) {
          ++control_.moved_this_tick;
          ++appearance.movement_counter;
          if (surface & 0xc0)
            control_.moved_this_tick = 0;
          else {
            leader_.leader_x = at.x;
            leader_.leader_y = at.y;
            control_.x_fraction = std::uint16_t(proposed[0]);
            control_.y_fraction = std::uint16_t(proposed[1]);
          }
        }
      }
    }
    executing_ = false;
  } catch (...) {
    executing_ = false;
    failed_ = true;
    throw;
  }
}
} // namespace eb::native
