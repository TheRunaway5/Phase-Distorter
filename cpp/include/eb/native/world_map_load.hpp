#pragma once

#include "eb/native/world_runtime.hpp"
#include "eb/native/palette_transition.hpp"
#include "eb/native/dialogue/window_graphics.hpp"
#include "eb/native/world_overlay_playback.hpp"
#include "eb/native/world/collision_window.hpp"

namespace eb::native {
class WorldScenePresentation;
// The map loader owns its content selection, palette backups and retained
// animation decompression staging.
// The teleport destination is in 8-pixel map cells, distinct from the PSI
// destination ID owned by actor appearance. Zero/zero selects the camera sector.
struct WorldMapLoadState {
  std::optional<unsigned> loaded_combination, loaded_palette;
  std::uint16_t teleport_tile_x{}, teleport_tile_y{};
  bool wipe_palettes{};
  std::array<std::uint16_t, 224> map_palette_backup{};
  std::array<std::uint16_t, 256> map_palette_scratch{};
  // Actual retained ANIMATED_TILESET_BUFFER. LOAD_TILESET_ANIM writes only
  // its decoded prefix when tracks exist; a zero-track load preserves it.
  // This owner must outlive the WindowHost that borrows its read-only bytes.
  std::array<std::uint8_t, 8192> animation_staging{};
  WorldCollisionWindow collision_window;
};
struct WorldMapLoadOwners {
  WorldRuntime &runtime;
  ActorWorld &actors;
  WorldEnemies &enemies;
  npcs::Interactions &interactions;
  WorldMapArea &area;
  AreaPalettes &palettes;
  const WorldMap &map_content;
  const WorldPalettes &palette_content;
  const WorldPaletteAnimations &animation_content;
  WorldSpawnControls &spawn;
  story::RandomState &random;
  dialogue::WindowHost &windows;
  const party::State &party;
  const story::TickState &clock;
  WorldScenePresentation &presentation;
  ScenePalette &scene_colors;
  dialogue::WindowGraphics &window_graphics;
  WorldOverlayPlayback &overlays;
};
enum class WorldMapLoadStage { Cleanup, PrepareArea, PublishColors, Activate, Capture, Complete };

// Ordinary OVERWORLD_INITIALIZE + LOAD_MAP_AT_POSITION. This coordinates the
// actual owners, including the source-retained collision window. Work-budget
// yields consume neither input nor logical frames.
// Owners remain exclusively borrowed until the operation completes. An
// abandoned or partially failed transaction cannot be replayed on this owner.
class WorldMapLoad {
public:
  class Operation {
  public:
    ~Operation();
    Operation(const Operation &) = delete;
    Operation &operator=(const Operation &) = delete;
    bool advance(unsigned work_budget = 256);
    WorldMapLoadStage stage() const noexcept;
    bool complete() const noexcept;
    std::unique_ptr<WorldRuntime::Operation> begin_palette_wait();
  private:
    friend class WorldMapLoad;
    Operation(WorldMapLoad &, CameraPosition, bool reload = false, WorldRuntime::Operation *parent = nullptr);
    WorldMapLoad &owner_;
    CameraPosition center_, selection_;
    WorldMapLoadStage stage_ = WorldMapLoadStage::Cleanup;
    bool executing_{}, reload_{};
    WorldRuntime::Operation *parent_{};
  };
  WorldMapLoad(WorldMapLoadState &, WorldMapLoadOwners);
  WorldMapLoad(const WorldMapLoad &) = delete;
  WorldMapLoad &operator=(const WorldMapLoad &) = delete;
  // Called at the actual initializer entry, before the first map transaction.
  void initialize_overworld();
  std::unique_ptr<Operation> begin(CameraPosition center);
  std::unique_ptr<Operation> begin_nested(CameraPosition center, WorldRuntime::Operation &parent);
  // Complete RELOAD_MAP_AT_POSITION content/camera phase. Retains actors,
  // enemy population and collision targets, and performs no activation.
  std::unique_ptr<Operation> begin_reload(CameraPosition center);
  std::unique_ptr<Operation> begin_reload_nested(CameraPosition center, WorldRuntime::Operation &parent);
  bool busy() const noexcept { return active_ != nullptr; }
  bool failed() const noexcept { return failed_; }
  bool uses(const WorldRuntime &, const ActorWorld &, const WorldEnemies &,
            const npcs::Interactions &, const WorldSpawnControls &,
            const dialogue::WindowHost &, const ScenePalette &) const noexcept;
  bool uses(const story::RandomState &) const noexcept;
  bool uses(const dialogue::WindowGraphics &) const noexcept;
private:
  void preflight(WorldRuntime::Operation *parent = nullptr) const;
  void require_bindings() const;
  WorldMapLoadState &state_;
  WorldMapLoadOwners owners_;
  Operation *active_{};
  bool failed_{};
};
} // namespace eb::native
