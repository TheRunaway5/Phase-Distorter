#include "eb/native/world_scene_presentation.hpp"
#include "eb/native/world_display_fade.hpp"
#include "eb/native/battle/frame_display.hpp"
#include "eb/native/scene_effects.hpp"
#include "eb/native/battle_background_scene.hpp"
#include <stdexcept>

namespace eb::native {
namespace {
PaletteColor packed(unsigned value) {
  return {std::uint8_t(value & 31), std::uint8_t((value >> 5) & 31),
          std::uint8_t((value >> 10) & 31)};
}
PaletteColor argb(std::uint32_t value) {
  return {std::uint8_t((value >> 19) & 31), std::uint8_t((value >> 11) & 31),
          std::uint8_t((value >> 3) & 31)};
}
}
WorldScenePresentation::WorldScenePresentation(
    ScenePalette &colors, WorldEncounterVisualState &visual,
    const WorldLayerConfigurations &configurations, WorldLayerSelection &selection)
    : colors_(colors), visual_(visual), configurations_(configurations), selection_(selection) {
  (void)configurations_.at(selection_.value);
}
void WorldScenePresentation::bind_encounter_effects(WorldEncounterEffects &effects) {
  if ((effects_ && effects_ != &effects) || !effects.uses(*this) || effects.failed())
    throw std::logic_error("Encounter effects must use this actual scene restoration owner");
  if (frame_display_) effects.bind_display(*frame_display_);
  effects_ = &effects;
}
void WorldScenePresentation::bind_display_fade(WorldDisplayFade &fade) {
  if (fade_ && fade_ != &fade)
    throw std::logic_error("World publication already has another display fade owner");
  fade_ = &fade;
}
void WorldScenePresentation::bind_frame_display(battle::FrameDisplay &display) {
  if (!fade_ || (frame_display_ && frame_display_ != &display))
    throw std::logic_error("World display transport requires its stable actual fade owner");
  if (effects_) effects_->bind_display(display);
  frame_display_ = &display;
}
std::shared_ptr<const DirectSceneFrame> WorldScenePresentation::capture(const DirectSceneFrame &source) const {
  const unsigned brightness = !fade_ ? 15 : fade_->state().brightness & 0x80 ? 0 : fade_->state().brightness & 15;
  const auto rows = frame_display_ ? std::optional{frame_display_->windows(visual_,
      fade_->state().brightness & 0x80 ? 0 : frame_display_->displayed_hdma_enable, false)} : std::nullopt;
  return capture_with(source, brightness, false, rows ? &*rows : nullptr);
}
std::shared_ptr<const DirectSceneFrame> WorldScenePresentation::capture_next(const DirectSceneFrame &source) {
  if (!fade_) return capture(source);
  const auto fade = fade_->preview_next_frame();
  const bool forced_blank = fade.state().brightness & 0x80;
  const auto rows = frame_display_ ? std::optional{frame_display_->windows(visual_,
      fade.disables_row_streams() || forced_blank ? 0 : frame_display_->hdma_enable, true)} : std::nullopt;
  auto frame = capture_with(source, fade.intensity(), fade.disables_row_streams(), rows ? &*rows : nullptr);
  fade_->commit_frame(fade);
  if (frame_display_)
    frame_display_->publish_hdma(fade.disables_row_streams(), forced_blank);
  if (fade.disables_row_streams() && visual_.window_rows_enabled) {
    visual_.window_rows_enabled = false;
    ++visual_.window_revision;
  }
  if (rows) {
    bool changed = false;
    for (unsigned i = 0; i < 2; ++i) {
      changed |= visual_.window_left[i] != rows->back()[i].left ||
                 visual_.window_right[i] != rows->back()[i].right;
      visual_.window_left[i] = rows->back()[i].left;
      visual_.window_right[i] = rows->back()[i].right;
    }
    if (changed) ++visual_.window_revision;
  }
  return frame;
}
std::shared_ptr<const DirectSceneFrame> WorldScenePresentation::capture_with(
    const DirectSceneFrame &source, unsigned brightness, bool disable_rows,
    const EncounterWindowMask *published_rows) const {
  if (effects_ && effects_->failed()) throw std::logic_error("Cannot capture failed encounter effects");
  if (!source.palette_indices.empty() && source.palette_indices.size() != source.atlas.size())
    throw std::invalid_argument("Palette identity atlas has different dimensions");
  auto frame = std::make_shared<DirectSceneFrame>(source);
  for (unsigned i = 0; i < frame->palette_indices.size(); ++i) {
    const unsigned id = frame->palette_indices[i];
    if (id > 256) throw std::out_of_range("Invalid captured palette identity");
    if (id != 256 && (frame->atlas[i] >> 24)) frame->atlas[i] = palette_argb(colors_[id]);
  }
  std::optional<EncounterWindowMask> rows;
  if (published_rows) rows = *published_rows;
  else if (effects_) rows = effects_->windows(false, disable_rows);
  auto visual = visual_;
  if (disable_rows) visual.window_rows_enabled = false;
  frame->effects = capture_scene_effects(visual, palette_argb(colors_[0]),
                                         rows ? &*rows : nullptr);
  frame->effects->brightness = brightness;
  return frame;
}
void WorldScenePresentation::complete_publication() {
  if (effects_ && !frame_display_) effects_->complete_publication();
}
void WorldScenePresentation::bind_battle_background(BattleBackgroundScene &battle) {
  if (battle_ && battle_ != &battle)
    throw std::logic_error("Scene already has another battle background owner");
  battle_ = &battle;
}
void WorldScenePresentation::clear_battle_background(const BattleBackgroundScene &battle) noexcept {
  if (battle_ == &battle) battle_ = nullptr;
}
bool WorldScenePresentation::uses(const ScenePalette &colors) const noexcept {
  return &colors_ == &colors;
}
bool WorldScenePresentation::uses(const ScenePalette &colors,
                                  const WorldEncounterVisualState &visual) const noexcept {
  return uses(colors) && &visual_ == &visual;
}
void WorldScenePresentation::publish_scenery(const AreaPalettes &area) {
  for (unsigned p = 0; p < 6; ++p)
    for (unsigned i = 0; i < 16; ++i)
      colors_[32 + p * 16 + i] = i ? argb(area.scenery[p][i]) : packed(area.scenery_zero[p]);
  visual_.palette_dirty = true;
}
void WorldScenePresentation::publish_area(const AreaPalettes &area) {
  publish_scenery(area);
  for (unsigned p = 0; p < 8; ++p)
    for (unsigned i = 0; i < 16; ++i)
      colors_[128 + p * 16 + i] = i ? argb(area.sprites[p][i]) : packed(area.sprite_zero[p]);
}
void WorldScenePresentation::publish_window_range(unsigned first,
                                                  std::span<const std::uint16_t> values,
                                                  dialogue::WindowPaletteUpload) {
  if (first > 32 || values.size() > 32 - first)
    throw std::out_of_range("Window palette publication exceeds its32 colors");
  for (unsigned i = 0; i < values.size(); ++i) colors_[first + i] = packed(values[i]);
  visual_.palette_dirty = true;
}
void WorldScenePresentation::restore_overworld_layers() {
  visual_.visible_layers = {true, true, true, false, true};
}
void WorldScenePresentation::restore_battle_palettes() {
  if (!battle_) throw std::logic_error("Palette restoration requires the actual retained battle owner");
  battle_->restore_palette(colors_);
  visual_.palette_dirty = true;
}
void WorldScenePresentation::restore_selected_layer_configuration() {
  apply_world_layer_configuration(configurations_, selection_, visual_);
}
} // namespace eb::native
