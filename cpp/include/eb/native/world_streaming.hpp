#pragma once

#include "eb/native/story/random.hpp"
#include "eb/native/world_activation.hpp"
#include "eb/native/world_collision.hpp"
#include "eb/native/world_enemies.hpp"
#include <exception>
#include <functional>

namespace eb::native {
class WorldCollisionWindow;
// The scene's authoritative spawn controls. Borrow this same state from scene
// services; do not maintain separate NPC/enemy copies in render or tick code.
struct WorldSpawnControls {
  NpcSpawnMode npcs = NpcSpawnMode::Disabled;
  // ENEMY_SPAWNS_ENABLED is a retained source word. Spawning tests nonzero;
  // startup and photograph restoration must preserve its complete value.
  std::uint16_t enemies{};
  bool objects_only{}, photograph{};
  NpcActivationDebug npc_debug;
  bool debug_forced_encounter{}, bypass_enemy_chance{};
  PreparedActorState prepared;
};
struct WorldStreamingWork {
  std::uint64_t npc_strips{}, enemy_strips{}, npc_creations{}, random_draws{},
      terrain_queries{};
  bool operator==(const WorldStreamingWork &) const = default;
};

// Runs native map-triggered activation as one ordered operation, including real
// shared RNG and collision queries. Camera callbacks cannot resume their actor
// traversal until every NPC/enemy strip finishes. Work budgets yield without a
// game/input/audio tick, RNG reseeding or frame publication. Rendering width is
// deliberately absent. All borrowed owners remain stable for this lifetime;
// only this coordinator consumes activation/enemy requests while it is busy.
class WorldStreaming {
public:
  WorldStreaming(ActorWorld &, WorldActivation &, WorldEnemies &,
                 const WorldCollision &, const WorldMapArea &,
                 story::RandomState &, WorldSpawnControls &);
  WorldStreaming(const WorldStreaming &) = delete;
  WorldStreaming &operator=(const WorldStreaming &) = delete;

  // A real map-loader binding makes source enemy placement sample that
  // loader's retained terrain. This never initializes or replaces its data.
  void bind_collision_window(const WorldCollisionWindow &);
  void bind_actor_graphics(RawActorCreation &);
  // Abandon retained raw creation before its borrowed graphics owner dies.
  void clear_actor_graphics(RawActorCreation &) noexcept;
  bool needs_graphics_publication() const noexcept;
  void respond_graphics_publication();
  // Explicit scripted camera refresh, outside an actor's suspended callback.
  void begin_refresh(CameraPosition, NpcStripAdmission);
  // Consume the ActorWorld's current camera callback. Completion acknowledges
  // exactly that request; even deleting its actor cannot discard this work.
  // A scene wrapper can supply its own synchronous acknowledgment, which must
  // clear this same camera request without advancing actors or another frame.
  // Omission acknowledges ActorWorld directly. The callback must remain valid
  // until completion and must not reenter this coordinator.
  void begin_actor_refresh(NpcStripAdmission,
                           std::function<void()> completion = {});
  // Activation phase of LOAD_MAP_AT_POSITION only. The scene must already
  // have performed cleanup and selected the correct area/palettes. Enabled
  // NPCs enter Initial mode now and Streaming mode after all 80 rows finish.
  void begin_initial_activation(CameraPosition center, NpcStripAdmission);
  // Return true when complete, false when the native work budget expires.
  // No operation here advances actors, input or animation. The scene must
  // block ticks/publication for scripted and initial work while busy().
  // A service exception latches failure: prior work is already committed,
  // so the scene must be abandoned rather than replaying consumed RNG.
  // Later advance calls rethrow before any further owner mutation.
  bool advance(unsigned work_budget = 256);
  bool busy() const { return busy_; }
  bool failed() const { return bool(failure_); }
  const WorldStreamingWork &work() const { return work_; }

private:
  void validate_begin(NpcStripAdmission) const;
  void start(CameraPosition camera, NpcStripAdmission);
  void finish();
  NpcActivationState npc_state() const;
  EnemySpawnState enemy_state() const;
  ActorWorld &world_;
  WorldActivation &activation_;
  WorldEnemies &enemies_;
  const WorldCollision &collision_;
  const WorldMapArea &area_;
  const WorldCollisionWindow *collision_window_{};
  story::RandomState &random_;
  WorldSpawnControls &controls_;
  NpcStripAdmission admission_ = NpcStripAdmission::Rejected;
  WorldStreamingWork work_;
  RawActorCreation *graphics_{};
  std::unique_ptr<WorldActivation::RawOperation> npc_creation_;
  std::optional<WorldCameraRefresh> actor_refresh_;
  std::function<void()> camera_completion_;
  std::exception_ptr failure_;
  bool busy_{}, initial_{}, enemy_strip_{};
};
} // namespace eb::native
