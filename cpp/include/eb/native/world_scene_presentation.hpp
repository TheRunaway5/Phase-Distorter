#pragma once
#include "eb/native/dialogue/window_host.hpp"
#include "eb/native/story/scene.hpp"
#include "eb/native/world_encounter_effects.hpp"
#include "eb/native/world_palettes.hpp"
#include "eb/native/world_layers.hpp"

namespace eb::native {
class BattleBackgroundScene;
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
  void bind_display_fade(WorldDisplayFade &);
  void bind_frame_display(battle::FrameDisplay &);
  const battle::FrameDisplay *frame_display() const noexcept override { return frame_display_; }
  const WorldDisplayFade *display_fade() const noexcept override { return fade_; }
  const WorldEncounterVisualState *publication_visual() const noexcept override { return &visual_; }
  bool uses_visual(const WorldEncounterVisualState &visual) const noexcept override { return &visual_ == &visual; }
  std::shared_ptr<const DirectSceneFrame> capture(const DirectSceneFrame &) const override;
  std::shared_ptr<const DirectSceneFrame> capture_next(const DirectSceneFrame &) override;
  void complete_publication() override;
  dialogue::WindowPalettePublication *window_palette_publication() noexcept override { return this; }
  void bind_battle_background(BattleBackgroundScene &);
  void clear_battle_background(const BattleBackgroundScene &) noexcept;
  void publish_area(const AreaPalettes &);
  void publish_scenery(const AreaPalettes &);
  void publish_window_range(unsigned first, std::span<const std::uint16_t>,
                            dialogue::WindowPaletteUpload = dialogue::WindowPaletteUpload::Full) override;
  void restore_overworld_layers();
  void restore_battle_palettes() override;
  void restore_selected_layer_configuration() override;
  bool uses(const ScenePalette &) const noexcept;
  bool uses(const ScenePalette &, const WorldEncounterVisualState &) const noexcept override;
  const ScenePalette &colors() const noexcept { return colors_; }
  const WorldEncounterVisualState &visual() const noexcept { return visual_; }
private:
  std::shared_ptr<const DirectSceneFrame> capture_with(const DirectSceneFrame &, unsigned brightness,
                                                       bool disable_rows,
                                                       const EncounterWindowMask * = nullptr) const;
  WorldDisplayFade *fade_{};
  battle::FrameDisplay *frame_display_{};
  ScenePalette &colors_;
  WorldEncounterVisualState &visual_;
  const WorldLayerConfigurations &configurations_;
  WorldLayerSelection &selection_;
  BattleBackgroundScene *battle_{};
  WorldEncounterEffects *effects_{};
};
} // namespace eb::native
