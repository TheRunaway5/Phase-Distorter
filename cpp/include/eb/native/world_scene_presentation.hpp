#pragma once
#include "eb/native/dialogue/window_host.hpp"
#include "eb/native/story/scene.hpp"
#include "eb/native/world_encounter_effects.hpp"
#include "eb/native/world_palettes.hpp"
#include "eb/native/world_layers.hpp"
#include "eb/native/battle_background_scene.hpp"
namespace eb::native::battle { class PsiDisplayState; struct PsiScratch; }

namespace eb::native {
class BattleBackgroundScene;
// Scene-owned publication of actual palette/display writes. Captures consume
// these owners; map colors and window templates are never competing live
// palettes. This service does not tick an effect, actor, input or clock.
class WorldScenePresentation final : public WorldEncounterRestoration,
                                     public BattleSceneFrameReset,
                                     public dialogue::WindowPalettePublication,
                                     public story::ScenePublication {
public:
  WorldScenePresentation(ScenePalette &, WorldEncounterVisualState &,
                         const WorldLayerConfigurations &, WorldLayerSelection &);
  void bind_encounter_effects(WorldEncounterEffects &);
  void bind_display_fade(WorldDisplayFade &);
  void bind_frame_display(battle::FrameDisplay &);
  // Share the actual palette transport across world, instant-win and battle
  // routing. Imported semantic world colors are staged explicitly; capture
  // samples only displayed colors, and NMI consumes the last upload mode.
  void bind_palette_transport(battle::PaletteBankState &);
  bool uses_palette_transport(const battle::PaletteBankState &) const noexcept override;
  void stage_world_palette();
  // Explicit source MEMSET16 palette write, preserving bit15 in transport.
  void fill_palette(std::uint16_t raw);
  // Dedicated source scenes stage their own immutable screen while retaining
  // this same NMI, palette, fade and OAM-buffer transport. No capture ticks it.
  void bind_video_transport(battle::PsiDisplayState &, const battle::PsiScratch &);
  void begin_distinct_scene(const void *owner);
  void stage_distinct_scene(const void *owner, std::shared_ptr<const DirectSceneFrame>);
  void end_distinct_scene(const void *owner);
  void publish_scene_palette_range(unsigned first, std::span<const std::uint16_t>, std::uint8_t mode);
  const battle::FrameDisplay *frame_display() const noexcept override { return frame_display_; }
  const WorldDisplayFade *display_fade() const noexcept override { return fade_; }
  const WorldEncounterVisualState *publication_visual() const noexcept override { return &visual_; }
  bool uses_visual(const WorldEncounterVisualState &visual) const noexcept override { return &visual_ == &visual; }
  std::shared_ptr<const DirectSceneFrame> capture(const DirectSceneFrame &) const override;
  std::shared_ptr<const DirectSceneFrame> capture_next(const DirectSceneFrame &) override;
  void complete_publication() override;
  dialogue::WindowPalettePublication *window_palette_publication() noexcept override { return this; }
  void bind_battle_background(BattleBackgroundScene &);
  void bind_scene_frame_state(story::TickState &, story::Scene &,
                              battle::BackgroundDisplayState &);
  void validate_scene_and_frame_reset() const override;
  void reset_scene_and_frame_state() override;
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
  void stage_palette_range(unsigned first, unsigned count, std::uint8_t mode);
  std::shared_ptr<const DirectSceneFrame> capture_with(const DirectSceneFrame &, unsigned brightness,
                                                       bool disable_rows,
                                                       const EncounterWindowMask * = nullptr,
                                                       const battle::PaletteBankState * = nullptr) const;
  WorldDisplayFade *fade_{};
  battle::FrameDisplay *frame_display_{};
  ScenePalette &colors_;
  WorldEncounterVisualState &visual_;
  const WorldLayerConfigurations &configurations_;
  WorldLayerSelection &selection_;
  BattleBackgroundScene *battle_{};
  story::TickState *clock_{};
  story::Scene *scene_{};
  battle::BackgroundDisplayState *background_layout_{};
  WorldEncounterEffects *effects_{};
  battle::PaletteBankState *palette_transport_{};
  battle::PsiDisplayState *video_transport_{};
  const battle::PsiScratch *scratch_{};
  const void *distinct_owner_{};
  std::shared_ptr<const DirectSceneFrame> distinct_staged_, distinct_displayed_;
};
} // namespace eb::native
