#include "eb/native/world_map_load.hpp"
#include "eb/native/world_scene_presentation.hpp"
#include "eb/native/party/condition.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native {
namespace {
void require(bool condition, const char *message) {
  if (!condition) throw std::logic_error(message);
}
}
WorldMapLoad::WorldMapLoad(WorldMapLoadState &state, WorldMapLoadOwners owners)
    : state_(state), owners_(owners) { preflight(); }
void WorldMapLoad::require_bindings() const {
  const auto &o = owners_;
  require(o.runtime.uses(o.windows, o.party, o.actors, o.clock, o.spawn) &&
          o.runtime.uses_map_load(o.actors, o.enemies, o.area, o.palettes,
              o.map_content, o.palette_content, o.animation_content, o.spawn,
              o.random, o.windows, o.presentation) &&
              o.runtime.uses(o.interactions) &&
              o.presentation.uses(o.scene_colors) && o.windows.uses(o.window_graphics) &&
              o.overlays.uses(o.actors) && o.actors.uses_overlays(o.overlays) &&
              !o.overlays.failed() &&
              o.actors.uses_enemies(o.enemies),
          "Map loading requires the runtime's actual content and live owners");
}
void WorldMapLoad::preflight() const {
  require(!failed_ && !active_, "Map loader is failed or already active");
  require_bindings();
  owners_.runtime.require_idle();
  require(!owners_.actors.in_tick() && !owners_.enemies.busy(),
          "Map loading cannot interrupt actor or enemy work");
  require(!owners_.spawn.photograph && !owners_.windows.prompt_state().debug,
          "Photograph and debug palette loading require their actual services");
  const auto &flags = owners_.windows.state().event_flags;
  require(flags.size() == 128 && owners_.actors.scene().event_flags.data() == flags.data(),
          "Map loading lost its authoritative story flags");
  require(state_.loaded_combination.has_value() == state_.loaded_palette.has_value(),
          "Map loader selection is incomplete");
  if (state_.loaded_combination)
    require(*state_.loaded_combination == owners_.area.combination(),
            "Map loader selection no longer owns the active artwork");
}
bool WorldMapLoad::uses(const WorldRuntime &runtime, const ActorWorld &actors,
    const WorldEnemies &enemies, const npcs::Interactions &interactions,
    const WorldSpawnControls &spawn, const dialogue::WindowHost &windows,
    const ScenePalette &colors) const noexcept {
  return &owners_.runtime == &runtime && &owners_.actors == &actors &&
      &owners_.enemies == &enemies && &owners_.interactions == &interactions &&
      &owners_.spawn == &spawn && &owners_.windows == &windows &&
      &owners_.scene_colors == &colors;
}
bool WorldMapLoad::uses(const story::RandomState &random) const noexcept {
  return &owners_.random == &random;
}
bool WorldMapLoad::uses(const dialogue::WindowGraphics &graphics) const noexcept {
  return &owners_.window_graphics == &graphics;
}
void WorldMapLoad::initialize_overworld() {
  preflight();
  owners_.runtime.clear_world_capture();
  state_.loaded_combination.reset();
  state_.loaded_palette.reset();
}
std::unique_ptr<WorldMapLoad::Operation> WorldMapLoad::begin(CameraPosition center) {
  preflight();
  auto operation = std::unique_ptr<Operation>(new Operation(*this, center));
  active_ = operation.get();
  return operation;
}
WorldMapLoad::Operation::Operation(WorldMapLoad &owner, CameraPosition center)
    : owner_(owner), center_(center), selection_(center) {
  const auto &s = owner_.state_;
  if (s.teleport_tile_x || s.teleport_tile_y) {
    require(s.teleport_tile_x / 32 < 32 && s.teleport_tile_y / 16 < 80,
            "Map teleport sector is outside imported content");
    selection_ = {std::uint16_t((s.teleport_tile_x / 32) * 256),
                  std::uint16_t((s.teleport_tile_y / 16) * 128)};
  }
  (void)owner_.owners_.map_content.sector(selection_.x / 256, selection_.y / 128);
  (void)owner_.owners_.palette_content.area_at(selection_.x, selection_.y);
}
WorldMapLoad::Operation::~Operation() {
  if (owner_.active_ == this) {
    owner_.active_ = nullptr;
    owner_.failed_ = true;
  }
}
WorldMapLoadStage WorldMapLoad::Operation::stage() const noexcept { return stage_; }
bool WorldMapLoad::Operation::complete() const noexcept {
  return stage_ == WorldMapLoadStage::Complete;
}
bool WorldMapLoad::Operation::advance(unsigned budget) {
  require(budget != 0, "Map loading work budget must be positive");
  require(!owner_.failed_ && !executing_, "Map loading is failed or reentrant");
  if (complete()) return true;
  require(owner_.active_ == this, "Map operation lost its owner");
  executing_ = true;
  try {
    auto &o = owner_.owners_;
    auto &s = owner_.state_;
    owner_.require_bindings();
    while (budget--) {
      if (stage_ != WorldMapLoadStage::Activate || !o.runtime.streaming())
        o.runtime.require_idle();
      switch (stage_) {
      case WorldMapLoadStage::Cleanup:
        o.enemies.reset_population_for_map();
        // Source increments the word before comparing with6: styles0..5 and
        // vacantFFFF survive; every other authored role releases in order.
        for (unsigned role = 0; role < 30; ++role)
          if (const auto id = o.actors.actor_for_role(role))
            if (std::uint16_t(o.actors.actor(*id).script_style() + 1) > 6) {
              o.interactions.detach(*id);
              o.enemies.erase(o.actors, *id);
            }
        o.actors.clear_collision_targets();
        stage_ = WorldMapLoadStage::PrepareArea;
        break;
      case WorldMapLoadStage::PrepareArea: {
        const auto combination = o.map_content.sector(selection_.x / 256, selection_.y / 128).combination;
        const bool retained = s.loaded_combination == combination;
        o.runtime.prepare_area(selection_, retained);
        if (!retained) {
          std::array<dialogue::WindowArtwork, 1184> staging{};
          require(o.area.graphics().size() * 2 >= staging.size(),
                  "Map artwork does not cover shared window staging");
          // Each native4bpp map tile supplies two native2bpp artwork cells.
          // This is the actual shared decompression result consumed later by
          // LOAD_WINDOW_GFX's retained-cell composition, not a memory image.
          for (unsigned i = 0; i < staging.size(); ++i)
            for (unsigned pixel = 0; pixel < 64; ++pixel)
              staging[i][pixel] = (o.area.graphics()[i / 2][pixel] >> ((i % 2) * 2)) & 3;
          o.window_graphics.retain_prepared_artwork(0, staging);
        }
        stage_ = WorldMapLoadStage::PublishColors;
        break;
      }
      case WorldMapLoadStage::PublishColors:
        o.overlays.reset_after_map_load();
        o.windows.publish_palette(o.clock.flavor,
            party::last_controlled_status(o.party) != 0,
            o.clock.disabled_transitions != 0);
        o.presentation.publish_area(o.palettes);
        std::copy(o.scene_colors.begin() + 32, o.scene_colors.end(), s.map_palette_backup.begin());
        if (s.wipe_palettes) {
          s.map_palette_scratch = o.scene_colors;
          std::array<dialogue::WindowArtwork, 32> scratch_artwork{};
          for (unsigned cell = 0; cell < scratch_artwork.size(); ++cell)
            for (unsigned row = 0; row < 8; ++row) {
              const unsigned color = cell * 8 + row;
              const auto rgb = o.scene_colors[color];
              unsigned packed = rgb.red | unsigned(rgb.green) << 5 | unsigned(rgb.blue) << 10;
              if (color < 32) packed = o.windows.palette()[color];
              else if (!(color % 16)) packed |= (color < 128 ?
                  o.palettes.scenery_zero[color / 16 - 2] : o.palettes.sprite_zero[color / 16 - 8]) & 0x8000;
              for (unsigned x = 0; x < 8; ++x)
                scratch_artwork[cell][row * 8 + x] = ((packed >> (7 - x)) & 1) |
                    (((packed >> (15 - x)) & 1) << 1);
            }
          o.window_graphics.retain_prepared_artwork(0, scratch_artwork);
          o.scene_colors.fill({31, 31, 31});
          s.wipe_palettes = false;
        }
        s.loaded_combination = o.area.combination();
        // The source remembers the requested sector variant, independently of
        // the resolved palette's event-conditional selection.
        s.loaded_palette = o.palette_content.area_at(selection_.x, selection_.y).variant;
        o.presentation.restore_overworld_layers();
        o.runtime.begin_initial_activation(center_);
        stage_ = WorldMapLoadStage::Activate;
        break;
      case WorldMapLoadStage::Activate:
        if (o.runtime.advance_streaming(1)) stage_ = WorldMapLoadStage::Capture;
        break;
      case WorldMapLoadStage::Capture:
        o.runtime.refresh_world_capture();
        stage_ = WorldMapLoadStage::Complete;
        owner_.active_ = nullptr;
        executing_ = false;
        return true;
      case WorldMapLoadStage::Complete:
        executing_ = false;
        return true;
      }
    }
    executing_ = false;
    return false;
  } catch (...) {
    executing_ = false;
    owner_.failed_ = true;
    throw;
  }
}
} // namespace eb::native
