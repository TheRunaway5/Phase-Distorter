#include "eb/native/world_streaming.hpp"
#include "eb/native/world/collision_window.hpp"
#include <stdexcept>

namespace eb::native {
WorldStreaming::WorldStreaming(ActorWorld &world, WorldActivation &activation,
                               WorldEnemies &enemies,
                               const WorldCollision &collision,
                               const WorldMapArea &area,
                               story::RandomState &random,
                               WorldSpawnControls &controls)
    : world_(world), activation_(activation), enemies_(enemies),
      collision_(collision), area_(area), random_(random), controls_(controls) {
}

void WorldStreaming::bind_collision_window(const WorldCollisionWindow &window) {
  if (busy_ || (collision_window_ && collision_window_ != &window))
    throw std::logic_error(
        "Streaming requires its idle actual collision-window owner");
  collision_window_ = &window;
}
void WorldStreaming::bind_actor_graphics(RawActorCreation &graphics) {
  if(busy_||failure_||(graphics_&&graphics_!=&graphics)||!graphics.uses(world_)||!world_.uses(graphics))
    throw std::logic_error("World streaming requires its actual idle raw actor owner");
  enemies_.bind_actor_graphics(graphics);
  graphics_=&graphics;
}
void WorldStreaming::clear_actor_graphics(RawActorCreation &graphics) noexcept {
  if(graphics_!=&graphics)return;
  npc_creation_.reset();
  enemies_.clear_actor_graphics(graphics);
  graphics_=nullptr;
}
bool WorldStreaming::needs_graphics_publication() const noexcept {
  return (npc_creation_&&npc_creation_->needs_publication()) ||
         (enemy_strip_&&enemies_.needs_graphics_publication());
}
void WorldStreaming::respond_graphics_publication() {
  if(!needs_graphics_publication()||failure_)
    throw std::logic_error("World streaming has no actual graphics publication");
  if(npc_creation_)npc_creation_->respond_publication();
  else enemies_.respond_graphics_publication(world_);
}
void WorldStreaming::validate_begin(NpcStripAdmission admission) const {
  if (busy_ || activation_.request() || enemies_.busy())
    throw std::logic_error(
        "Native streaming already has unfinished activation");
  if (admission != NpcStripAdmission::Admitted &&
      admission != NpcStripAdmission::Rejected)
    throw std::invalid_argument(
        "Native streaming requires an explicit NPC admission policy");
  if (world_.scene().event_flags.size() != 128)
    throw std::logic_error(
        "Native streaming requires the authoritative 128-byte story flags");
  if (controls_.npcs != NpcSpawnMode::Disabled &&
      controls_.npcs != NpcSpawnMode::Initial &&
      controls_.npcs != NpcSpawnMode::Streaming)
    throw std::invalid_argument("Invalid native NPC spawn mode");
}
void WorldStreaming::start(CameraPosition camera, NpcStripAdmission admission) {
  world_.scene().camera_changed |= world_.scene().camera_x != camera.x ||
                                   world_.scene().camera_y != camera.y;
  world_.scene().camera_x = camera.x;
  world_.scene().camera_y = camera.y;
  work_ = {};
  admission_ = admission;
  enemy_strip_ = false;
  busy_ = true;
  if (!activation_.request()) {
    try {
      finish();
    } catch (...) {
      failure_ = std::current_exception();
      throw;
    }
  }
}
void WorldStreaming::begin_refresh(CameraPosition camera,
                                   NpcStripAdmission admission) {
  validate_begin(admission);
  if (world_.camera_refresh())
    throw std::logic_error(
        "Use actor refresh to consume the suspended camera callback");
  enemies_.synchronize_lifetimes(world_);
  activation_.begin_refresh(camera);
  initial_ = false;
  actor_refresh_.reset();
  camera_completion_ = {};
  start(camera, admission);
}
void WorldStreaming::begin_actor_refresh(NpcStripAdmission admission,
                                         std::function<void()> completion) {
  validate_begin(admission);
  if (!world_.camera_refresh())
    throw std::logic_error("No actor camera callback to consume");
  enemies_.synchronize_lifetimes(world_);
  const auto request = *world_.camera_refresh();
  activation_.begin_refresh({request.camera_x, request.camera_y});
  actor_refresh_ = request;
  camera_completion_ = std::move(completion);
  initial_ = false;
  start({request.camera_x, request.camera_y}, admission);
}
void WorldStreaming::begin_initial_activation(CameraPosition center,
                                              NpcStripAdmission admission) {
  validate_begin(admission);
  if (world_.camera_refresh())
    throw std::logic_error(
        "Initial activation cannot replace a camera callback");
  enemies_.synchronize_lifetimes(world_);
  activation_.begin_initial_load(center);
  initial_ = true;
  actor_refresh_.reset();
  camera_completion_ = {};
  if (controls_.npcs != NpcSpawnMode::Disabled)
    controls_.npcs = NpcSpawnMode::Initial;
  start({std::uint16_t(center.x - 128), std::uint16_t(center.y - 112)},
        admission);
}
NpcActivationState WorldStreaming::npc_state() const {
  return {{world_.scene().camera_x, world_.scene().camera_y},
          controls_.npcs,
          area_.combination(),
          world_.scene().event_flags,
          controls_.objects_only,
          controls_.photograph,
          controls_.npc_debug,
          controls_.prepared};
}
EnemySpawnState WorldStreaming::enemy_state() const {
  const auto flags = world_.scene().event_flags;
  // The authored strip gates read flags 11 and 73. Borrow those same bits;
  // a second pair of cached booleans could drift from dialogue/world writes.
  return {area_.combination(),
          {flags.begin(), flags.end()},
          controls_.enemies != 0,
          bool(flags[1] & 4),
          bool(flags[9] & 1),
          controls_.debug_forced_encounter,
          controls_.bypass_enemy_chance,
          controls_.prepared};
}
void WorldStreaming::finish() {
  if (activation_.request() || enemies_.busy())
    throw std::logic_error("Cannot finish incomplete native streaming");
  enemies_.synchronize_lifetimes(world_);
  if (actor_refresh_) {
    const auto &pending = world_.camera_refresh();
    if (!pending || pending->actor != actor_refresh_->actor ||
        pending->tick != actor_refresh_->tick ||
        pending->camera_x != actor_refresh_->camera_x ||
        pending->camera_y != actor_refresh_->camera_y)
      throw std::logic_error("Native camera callback changed during streaming");
    if (camera_completion_)
      camera_completion_();
    else
      world_.respond_camera_refresh();
    if (world_.camera_refresh() || world_.ticks() + 1 != actor_refresh_->tick)
      throw std::logic_error(
          "Camera completion must acknowledge only the suspended callback");
    camera_completion_ = {};
    actor_refresh_.reset();
  }
  if (initial_ && controls_.npcs != NpcSpawnMode::Disabled)
    controls_.npcs = NpcSpawnMode::Streaming;
  busy_ = false;
}
bool WorldStreaming::advance(unsigned budget) {
  if (failure_)
    std::rethrow_exception(failure_);
  if (!budget)
    throw std::invalid_argument(
        "Native streaming work budget must be positive");
  try {
    while (busy_ && budget--) {
      if(npc_creation_) {
        if(!npc_creation_->advance(1)) {
          if(npc_creation_->needs_publication())return false;
          continue;
        }
        ++work_.npc_strips;work_.npc_creations+=npc_creation_->created().size();
        npc_creation_.reset();
      } else if (enemy_strip_) {
        if(enemies_.needs_graphics_publication())return false;
        if(!enemies_.busy()) {
          enemy_strip_=false;
          activation_.complete_enemy_request();
          if(!activation_.request())finish();
          continue;
        }
        if (!enemies_.request())
          throw std::logic_error("Unfinished enemy activation has no request");
        if (std::holds_alternative<EnemyRandomRequest>(*enemies_.request())) {
          const auto value = story::next_random(random_);
          ++work_.random_draws;
          enemies_.respond_random(world_, value);
        } else {
          const auto request =
              std::get<EnemyTerrainRequest>(*enemies_.request());
          const auto shape =
              world_.actor(request.actor).appearance_context.shape;
          const auto flags = collision_.vertical_surfaces(
              [&](CollisionCell cell) {
                return collision_window_ ? collision_window_->sample(cell)
                                         : area_.collision(cell.x, cell.y);
              },
              {request.x, request.y}, shape);
          ++work_.terrain_queries;
          enemies_.respond_terrain(world_, flags);
        }
        if (!enemies_.busy()) {
          enemy_strip_ = false;
          activation_.complete_enemy_request();
        }
      } else {
        const auto &request = activation_.request();
        if (!request)
          throw std::logic_error(
              "Native streaming lost its ordered activation request");
        if (request->service == CameraRefreshService::Npcs) {
          if(graphics_)npc_creation_=activation_.begin_next(world_,npc_state(),admission_,*graphics_);
          else {
            const auto created=activation_.activate_next(world_,npc_state(),admission_);
            ++work_.npc_strips;work_.npc_creations+=created.size();
          }
        } else {
          enemies_.begin_strip(world_, *request, enemy_state());
          ++work_.enemy_strips;
          enemy_strip_ = enemies_.busy();
          if (!enemy_strip_)
            activation_.complete_enemy_request();
        }
      }
      if (!activation_.request())
        finish();
    }
    return !busy_;
  } catch (...) {
    failure_ = std::current_exception();
    throw;
  }
}
} // namespace eb::native
