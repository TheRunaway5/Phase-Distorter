#include "eb/native/world_control.hpp"
#include <stdexcept>

namespace eb::native {
void clear_party_sprite_blink(ActorWorld &actors) {
  if (!actors.appearance_scene().intangibility_ticks)
    return;
  for (unsigned role = 24; role < 30; ++role)
    if (const auto id = actors.actor_for_role(role))
      actors.actor(*id).appearance.clear_flashing();
}
WorldControl::WorldControl(ActorWorld &actors, WorldPartyState &party,
                           PartyTrail &trail, npcs::InteractionState &leader,
                           WorldControlState &state,
                           dialogue::PromptState &prompt,
                           story::InputState &input, story::TickState &clock,
                           const WorldCollision &collision,
                           const WorldMapArea &area)
    : actors_(actors), party_(party), trail_(trail), leader_(leader),
      state_(state), prompt_(prompt), input_(input), clock_(clock),
      collision_(collision), area_(area) {}
bool WorldControl::uses(const ActorWorld &actors,
                        const dialogue::PromptState &prompt,
                        const story::InputState &input,
                        const story::TickState &clock,
                        const WorldCollision &collision,
                        const WorldMapArea &area) const noexcept {
  return &actors_ == &actors && &prompt_ == &prompt && &input_ == &input &&
         &clock_ == &clock && &collision_ == &collision && &area_ == &area;
}
void WorldControl::check() const {
  if (failed_)
    throw std::logic_error(
        "Native world control failed; replace this scene owner");
}
std::unique_ptr<WorldControl::Operation> WorldControl::begin() {
  check();
  if (active_)
    throw std::logic_error("Native world control already has unfinished work");
  auto operation = std::unique_ptr<Operation>(new Operation(*this));
  active_ = operation.get();
  return operation;
}
WorldControl::Operation::Operation(WorldControl &owner) : owner_(owner) {}
WorldControl::Operation::~Operation() {
  if (owner_.active_ == this) {
    owner_.active_ = nullptr;
    if (!complete_)
      owner_.failed_ = true;
  }
}
bool WorldControl::Operation::advance() {
  auto &o = owner_;
  o.check();
  if (complete_)
    return true;
  if (request_)
    return false;
  try {
    for (;;) {
      switch (phase_) {
      case 0: {
        previous_movement_ = o.state_.moved_this_tick;
        o.state_.moved_this_tick = 0;
        auto &appearance = o.actors_.appearance_scene();
        if (appearance.intangibility_ticks) {
          clear_party_sprite_blink(o.actors_);
          --appearance.intangibility_ticks;
        }
        // DEBUG + held X skips fifteen of sixteen logic frames, after
        // the reset/blink phase but before character/trail writes.
        if (o.prompt_.debug && (o.input_.state[0] & 0x40) &&
            (o.clock_.frame_counter & 15)) {
          phase_ = 4;
          continue;
        }
        if (o.trail_.next_write >= 256)
          throw std::out_of_range("Native party trail cursor exceeds 255");
        const auto id = o.actors_.actor_for_role(o.party_.current_leader_role);
        if (!id)
          throw std::logic_error(
              "Native control needs its current formation actor");
        const auto record = o.actors_.actor(*id).action().variables[1];
        if (record >= 6)
          throw std::out_of_range(
              "Native control actor character index exceeds five");
        o.party_.trail_cursors[record] = o.trail_.next_write;
        auto kind = WorldControlService::Walk;
        if (o.state_.automatic_mode)
          kind = WorldControlService::Automatic;
        else if (o.leader_.walking_style == 12)
          kind = WorldControlService::Escalator;
        else if (o.leader_.walking_style == 3)
          kind = WorldControlService::Bicycle;
        request_ = WorldControlRequest{kind,
                                       kind == WorldControlService::Bicycle
                                           ? previous_movement_
                                           : std::uint16_t{},
                                       {}};
        phase_ = 1;
        return false;
      }
      case 1: {
        // A real nested movement mode may have changed the leader,
        // trail head and area. Read those live values after it returns.
        if (o.trail_.next_write >= 256)
          throw std::out_of_range("Native party trail cursor exceeds 255");
        point_ = o.trail_.next_write;
        const auto id = o.actors_.actor_for_role(o.party_.current_leader_role);
        if (!id)
          throw std::logic_error(
              "Native movement returned without a formation actor");
        const auto shape = o.actors_.actor(*id).appearance_context.shape;
        o.leader_.checked_surface_origin = o.collision_.origin(
            {o.leader_.leader_x, o.leader_.leader_y}, shape);
        // C05F82 samples the top and bottom edges; the actor physics
        // C05F33 query deliberately samples the other pair of edges.
        const auto flags = o.collision_.edge(
            o.area_, o.leader_.checked_surface_origin, shape,
            CollisionEdge::Bottom,
            o.collision_.edge(o.area_, o.leader_.checked_surface_origin, shape,
                              CollisionEdge::Top));
        o.leader_.surface_flags = flags;
        o.state_.trodden_surface_flags = flags;
        if (o.state_.moved_this_tick) {
          auto &point = o.trail_.points[point_];
          point.x = o.leader_.leader_x;
          point.y = o.leader_.leader_y;
          o.trail_.next_write = (point_ + 1) & 255;
          request_ =
              WorldControlRequest{WorldControlService::RefreshCamera,
                                  0,
                                  {std::uint16_t(o.leader_.leader_x - 128),
                                   std::uint16_t(o.leader_.leader_y - 112)}};
          phase_ = 2;
          return false;
        }
        o.state_.camera_moved = false;
        phase_ = 3;
        continue;
      }
      case 2:
        o.state_.camera_moved = true;
        phase_ = 3;
        continue;
      case 3: {
        auto &point = o.trail_.points[point_];
        point.surface_flags = o.state_.trodden_surface_flags;
        point.walking_style = o.leader_.walking_style;
        point.direction = o.leader_.leader_direction;
        auto &override = o.actors_.appearance_scene().footstep_override;
        override.reset();
        if (o.state_.trodden_surface_flags & 8)
          override = o.state_.trodden_surface_flags & 4 ? 8 : 9;
        phase_ = 4;
        continue;
      }
      case 4:
        complete_ = true;
        o.active_ = nullptr;
        return true;
      default:
        throw std::logic_error("Invalid native control continuation");
      }
    }
  } catch (...) {
    o.failed_ = true;
    throw;
  }
}
void WorldControl::Operation::respond() {
  owner_.check();
  if (!request_ || complete_)
    throw std::logic_error("No pending native control service");
  request_.reset();
}
} // namespace eb::native
