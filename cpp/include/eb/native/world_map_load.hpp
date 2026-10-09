#pragma once

#include "eb/native/world_runtime.hpp"
#include "eb/native/palette_transition.hpp"
#include "eb/native/dialogue/window_graphics.hpp"
#include "eb/native/world_overlay_playback.hpp"
#include "eb/native/world/collision_window.hpp"
#include "eb/native/battle/psi_animation.hpp"
#include "eb/native/battle/frame_display.hpp"

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
  // LOAD_MAP writes only its first224 words. SHIFT_MAP_PALETTE reads256,
  // including the retained32-word tail adjacent to that source destination.
  std::array<std::uint16_t, 256> map_palette_backup{};
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
  story::TickState &clock;
  WorldScenePresentation &presentation;
  ScenePalette &scene_colors;
  dialogue::WindowGraphics &window_graphics;
  WorldOverlayPlayback &overlays;
};
enum class WorldMapLoadStage { Cleanup, PrepareArea, PublishColors, LoadOverlays, Activate, Capture, Complete };

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
    WorldRuntime::Operation *runtime_operation() noexcept {return runtime_.get();}
  private:
    friend class WorldMapLoad;
    Operation(WorldMapLoad &, CameraPosition, bool reload = false, WorldRuntime::Operation *parent = nullptr);
    WorldMapLoad &owner_;
    CameraPosition center_, selection_;
    WorldMapLoadStage stage_ = WorldMapLoadStage::Cleanup;
    bool executing_{}, reload_{};
    WorldRuntime::Operation *parent_{};
    std::span<const std::uint8_t> photograph_palettes_;
    std::uint16_t photograph_palette_offset_{};
    unsigned transport_phase_{},transport_row_{},transport_copy_{};
    std::vector<OverlayPlanarRow> overlay_uploads_;
    unsigned overlay_row_{};
    bool photograph_{},transport_finished_{};
    std::optional<display::TransientMemory::Allocation> row_;
    std::unique_ptr<battle::PsiDisplayState::TransferOperation> transfer_;
    std::unique_ptr<WorldRuntime::Operation> runtime_;
    bool advance_transport();
    void wait_transport();
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
  void bind_display_transport(battle::PsiScratch &, battle::PsiDisplayState &,
      battle::PaletteBankState &, battle::FrameDisplay &, WorldDisplayFade &);
  // The ending caller must hold its actual photograph mode and disabled
  // enemies. No ordinary or debug map path inherits this palette capability.
  std::unique_ptr<Operation> begin_photograph(CameraPosition,
      std::span<const std::uint8_t> decoded_palettes, std::uint16_t palette_offset,
      WorldRuntime::Operation *parent=nullptr);
  bool busy() const noexcept { return active_ != nullptr; }
  bool failed() const noexcept { return failed_; }
  bool uses(const WorldRuntime &, const ActorWorld &, const WorldEnemies &,
            const npcs::Interactions &, const WorldSpawnControls &,
            const dialogue::WindowHost &, const ScenePalette &) const noexcept;
  bool uses(const story::RandomState &) const noexcept;
  bool uses(const dialogue::WindowGraphics &) const noexcept;
  bool uses_display_transport(const battle::PsiScratch &, const battle::PsiDisplayState &,
      const WorldDisplayFade &) const noexcept;
private:
  void preflight(WorldRuntime::Operation *parent = nullptr, bool photograph=false) const;
  void require_bindings() const;
  WorldMapLoadState &state_;
  WorldMapLoadOwners owners_;
  Operation *active_{};
  bool failed_{};
  battle::PsiScratch *scratch_{};
  battle::PsiDisplayState *video_{};
  battle::PaletteBankState *palette_{};
  battle::FrameDisplay *frames_{};
  WorldDisplayFade *fade_{};
};
} // namespace eb::native
