#include "eb/native/world_maintenance.hpp"
#include "eb/native/world_scene_presentation.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native {
void WorldMaintenance::bind_presentation(WorldScenePresentation &presentation) {
  if (busy() || failed() || (presentation_ && presentation_ != &presentation))
    throw std::logic_error("Cannot replace a live maintenance palette publisher");
  presentation_ = &presentation;
}
WorldMaintenance::WorldMaintenance(
    dialogue::WindowHost &windows, WorldControl &control,
    WorldMaintenanceState &state, party::ItemTransformationState &items,
    WorldInteractionQueue &interactions, WorldMapArea &area,
    AreaPalettes &palettes, AreaPaletteAnimation &animation,
    PreparedActorState &prepared, PossessionActorContent content)
    : windows_(windows), control_(control), state_(state), items_(items),
      queue_(interactions.queue()), phone_(interactions.phone()),
      dad_message_(interactions.dad_message()), area_(area),
      palettes_(palettes), animation_(animation), prepared_(prepared),
      possession_content_(content) {
  auto &actors = control_.actors_;
  if (&control_.prompt_ != &windows.prompt_state() ||
      &control_.area_ != &area ||
      !queue_.shares_world(windows.version(),
                           actors.appearance_scene().intangibility_ticks))
    throw std::invalid_argument(
        "Native maintenance owners do not share one world");
  const auto &flags = windows.state().event_flags;
  if (flags.size() != 128 ||
      actors.scene().event_flags.size() != flags.size() ||
      actors.scene().event_flags.data() != flags.data())
    throw std::invalid_argument(
        "Native maintenance requires one shared story flag owner");
}
void WorldMaintenance::check() const {
  if (failed_)
    throw std::logic_error(
        "Native maintenance failed; replace this scene owner");
  if (control_.failed())
    throw std::logic_error("Native maintenance cannot use a failed controller");
  if (queue_.failed())
    throw std::logic_error(
        "Native maintenance cannot use an abandoned interaction queue");
  const auto &flags = windows_.state().event_flags;
  if (flags.size() != 128 ||
      control_.actors_.scene().event_flags.size() != 128 ||
      flags.data() != control_.actors_.scene().event_flags.data())
    throw std::logic_error("Native maintenance story flags changed owner");
}
void WorldMaintenance::possession() {
  auto &actors = control_.actors_;
  if (state_.possession_actor) {
    const auto ids = actors.actors();
    if (std::find(ids.begin(), ids.end(), *state_.possession_actor) ==
        ids.end())
      throw std::logic_error(
          "Native possession actor disappeared outside its owner");
    if (!state_.possessed_players) {
      actors.erase(*state_.possession_actor);
      state_.possession_actor.reset();
    }
    return;
  }
  if (!state_.possessed_players)
    return;
  const auto leader = actors.actor_for_role(control_.party_.current_leader_role);
  if (!leader)
    throw std::logic_error("Native possession effect needs a formation actor");
  const auto &actor = actors.actor(*leader);
  if (!actor.scripts_and_physics_enabled || !actor.tick_callback_enabled ||
      actor.appearance.flashing_hidden() || control_.state_.automatic_mode == 2)
    return;
  auto prepared = prepared_;
  prepared.x = prepared.y = prepared.direction = 0;
  auto spec = actors.prepare_actor(possession_content_.sprite,
                                   possession_content_.script, prepared);
  const auto created = actors.create_authored(spec);
  if (!created)
    throw std::runtime_error(
        "No native authored role available for possession sprite");
  state_.possession_actor = created;
  auto &ghost = actors.actor(*created);
  ghost.action().position[0] =
      0xff000000u | (ghost.action().position[0] & 65535);
  ghost.action().position[1] =
      0xff000000u | (ghost.action().position[1] & 65535);
  ghost.action().animation = 0xffff;
  ghost.behavior.projected_y = -256;
}
void WorldMaintenance::phone() {
  if (phone_.timer || control_.state_.automatic_mode == 2)
    return;
  const auto &appearance = control_.actors_.appearance_scene();
  if (!windows_.draw_order().empty() || state_.battle_mode_flag ||
      appearance.battle_swirl_ticks || state_.enemy_touched || phone_.queued)
    return;
  constexpr unsigned flag = 775 - 1;
  if (windows_.state().event_flags[flag / 8] & (1u << (flag % 8)))
    return;
  queue_.enqueue(10, dad_message_);
  // Source sets queued even when the queue suppresses this current type.
  phone_.queued = 1;
}
std::unique_ptr<WorldMaintenance::Operation> WorldMaintenance::begin() {
  check();
  if (active_ || control_.busy())
    throw std::logic_error("Native maintenance/control is already active");
  auto operation = std::unique_ptr<Operation>(new Operation(*this));
  active_ = operation.get();
  return operation;
}
WorldMaintenance::Operation::Operation(WorldMaintenance &owner)
    : owner_(owner) {}
WorldMaintenance::Operation::~Operation() {
  if (owner_.active_ == this) {
    owner_.active_ = nullptr;
    if (!complete_)
      owner_.failed_ = true;
  }
}
bool WorldMaintenance::Operation::advance(unsigned budget) {
  auto &o = owner_;
  o.check();
  if (complete_)
    return true;
  if (request_)
    return false;
  try {
    while (budget--) {
      switch (phase_) {
      case 0:
        if (o.windows_.prompt_state().battle_mode) {
          phase_ = 8;
          break;
        }
        o.possession();
        phase_ = 1;
        break;
      case 1:
        if (o.area_.animation_active())
          o.area_.advance_animation();
        phase_ = 2;
        break;
      case 2:
        if (o.animation_.active() && o.animation_.advance()) {
          o.palettes_.scenery = o.animation_.colors().scenery;
          o.palettes_.scenery_zero = o.animation_.colors().scenery_zero;
          if (o.presentation_) o.presentation_->publish_scenery(o.palettes_);
        }
        phase_ = 3;
        break;
      case 3:
        phase_ = 4;
        if (o.items_.loaded_count) {
          request_ = WorldMaintenanceRequest{
              WorldMaintenanceService::ItemTransformations, {}};
          return false;
        }
        break;
      case 4:
        control_ = o.control_.begin();
        phase_ = 5;
        break;
      case 5:
        if (!control_->advance()) {
          request_ = WorldMaintenanceRequest{WorldMaintenanceService::Control,
                                             control_->request()};
          return false;
        }
        control_.reset();
        phase_ = 6;
        break;
      case 6: {
        const auto &leader = o.control_.leader_;
        const unsigned x = leader.leader_x >> 8, y = leader.leader_y >> 8;
        phase_ = 7;
        if (x != o.state_.last_sector_x || y != o.state_.last_sector_y) {
          o.state_.last_sector_x = x;
          o.state_.last_sector_y = y;
          if (o.state_.auto_sector_music) {
            request_ = WorldMaintenanceRequest{
                WorldMaintenanceService::SectorMusic, {}};
            return false;
          }
        }
        break;
      }
      case 7:
        o.phone();
        o.state_.possessed_players = 0;
        o.control_.party_.projection.direction =
            o.control_.leader_.leader_direction;
        o.control_.party_.projection.leader_role = o.control_.party_.current_leader_role;
        if (o.control_.state_.moved_this_tick)
          o.control_.input_.player_activity = 1;
        phase_ = 8;
        break;
      case 8:
        complete_ = true;
        o.active_ = nullptr;
        return true;
      default:
        throw std::logic_error("Invalid native maintenance continuation");
      }
    }
  } catch (...) {
    o.failed_ = true;
    throw;
  }
  return false;
}
void WorldMaintenance::Operation::respond() {
  owner_.check();
  if (!request_ || complete_)
    throw std::logic_error("No pending native maintenance service");
  if (request_->kind == WorldMaintenanceService::Control)
    control_->respond();
  request_.reset();
}
} // namespace eb::native
