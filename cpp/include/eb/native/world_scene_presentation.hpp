#pragma once
#include "eb/native/dialogue/window_host.hpp"
#include "eb/native/story/scene.hpp"
#include "eb/native/world_encounter_effects.hpp"
#include "eb/native/world_palettes.hpp"

namespace eb::native {
class BattleBackgroundScene;
struct WorldLayerConfiguration {
  std::array<bool, 5> main{}, sub{};
  std::array<bool, 6> math{};
  bool use_subscreen{}, subtract{}, half{};
  ColorWindowPolicy clip = ColorWindowPolicy::Never;
  ColorWindowPolicy prevent = ColorWindowPolicy::Never;
};
class WorldLayerConfigurations {
public:
  WorldLayerConfigurations(std::span<const std::uint8_t>, GameVersion);
  const WorldLayerConfiguration &at(unsigned selection) const;
private:
  std::array<WorldLayerConfiguration, 10> configurations_{};
};
struct WorldLayerSelection { unsigned value{}; };

// Scene-owned publication of actual palette/display writes. Captures consume
// these owners; map colors and window templates are never competing live
// palettes. This service does not tick an effect, actor, input or clock.
class WorldScenePresentation final : public WorldEncounterRestoration,
                                     public dialogue::WindowPalettePublication,
                                     public story::ScenePublication {
public:
  WorldScenePresentation(ScenePalette &, WorldEncounterVisualState &,
                         const WorldLayerConfigurations &, WorldLayerSelection &);
  void bind_encounter_effects(WorldEncounterEffects &);
  std::shared_ptr<const DirectSceneFrame> capture(const DirectSceneFrame &) const override;
  void complete_publication() override;
  void bind_battle_background(BattleBackgroundScene &);
  void clear_battle_background(const BattleBackgroundScene &) noexcept;
  void publish_area(const AreaPalettes &);
  void publish_scenery(const AreaPalettes &);
  void publish_window_range(unsigned first, std::span<const std::uint16_t>) override;
  void restore_overworld_layers();
  void restore_battle_palettes() override;
  void restore_selected_layer_configuration() override;
  bool uses(const ScenePalette &) const noexcept;
  bool uses(const ScenePalette &, const WorldEncounterVisualState &) const noexcept override;
  const ScenePalette &colors() const noexcept { return colors_; }
  const WorldEncounterVisualState &visual() const noexcept { return visual_; }
private:
  ScenePalette &colors_;
  WorldEncounterVisualState &visual_;
  const WorldLayerConfigurations &configurations_;
  WorldLayerSelection &selection_;
  BattleBackgroundScene *battle_{};
  WorldEncounterEffects *effects_{};
};
} // namespace eb::native
