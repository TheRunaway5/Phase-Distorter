#include "eb/native/world_scene_presentation.hpp"
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
template<std::size_t N>
std::array<bool, N> layers(unsigned bits) {
  std::array<bool, N> result{};
  for (unsigned i = 0; i < N; ++i) result[i] = (bits & (1u << i)) != 0;
  return result;
}
}
WorldLayerConfigurations::WorldLayerConfigurations(
    std::span<const std::uint8_t> image, GameVersion version) {
  if (version != GameVersion::US && version != GameVersion::JP)
    throw std::invalid_argument("Invalid layer configuration region");
  const unsigned start = version == GameVersion::US ? 0xaff1 : 0xafd0;
  if (image.size() < start + 41)
    throw std::invalid_argument("Truncated layer configuration content");
  for (unsigned i = 0; i < configurations_.size(); ++i) {
    auto &c = configurations_[i];
    const auto main = image[start + i], sub = image[start + 11 + i];
    const auto window = image[start + 21 + i], math = image[start + 31 + i];
    if ((main & ~31) || (sub & ~31) || (window & 1))
      throw std::invalid_argument("Unsupported authored layer configuration");
    c.main = layers<5>(main); c.sub = layers<5>(sub);
    c.math = layers<6>(math);
    c.use_subscreen = (window & 2) != 0;
    c.clip = ColorWindowPolicy((window >> 6) & 3);
    c.prevent = ColorWindowPolicy((window >> 4) & 3);
    c.subtract = (math & 128) != 0; c.half = (math & 64) != 0;
  }
}
const WorldLayerConfiguration &WorldLayerConfigurations::at(unsigned id) const {
  return configurations_.at(id);
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
  effects_ = &effects;
}
std::shared_ptr<const DirectSceneFrame> WorldScenePresentation::capture(const DirectSceneFrame &source) const {
  if (effects_ && effects_->failed()) throw std::logic_error("Cannot capture failed encounter effects");
  if (!source.palette_indices.empty() && source.palette_indices.size() != source.atlas.size())
    throw std::invalid_argument("Palette identity atlas has different dimensions");
  auto frame = std::make_shared<DirectSceneFrame>(source);
  for (unsigned i = 0; i < frame->palette_indices.size(); ++i) {
    const unsigned id = frame->palette_indices[i];
    if (id > 256) throw std::out_of_range("Invalid captured palette identity");
    if (id != 256 && (frame->atlas[i] >> 24)) frame->atlas[i] = palette_argb(colors_[id]);
  }
  auto &out = frame->effects.emplace();
  out.main = visual_.visible_layers; out.sub = visual_.subscreen_layers;
  out.math = visual_.color_math_layers; out.masked = visual_.window_layers;
  out.invert = visual_.window_invert; out.use_subscreen = visual_.use_subscreen;
  out.subtract = visual_.subtract; out.half = visual_.half_intensity;
  out.clip = DirectSceneFrame::WindowPolicy(visual_.clip_colors);
  out.prevent = DirectSceneFrame::WindowPolicy(visual_.prevent_math);
  out.fixed = {visual_.fixed_color.red, visual_.fixed_color.green, visual_.fixed_color.blue};
  out.backdrop = palette_argb(colors_[0]);
  EncounterWindowMask windows;
  if (effects_) windows = effects_->windows();
  else if (visual_.window_pattern) {
    windows = *visual_.window_pattern;
    if (!visual_.writes_second_window)
      for (auto &row : windows) row[1] = {visual_.window_left[1], visual_.window_right[1]};
  } else for (auto &row : windows)
    for (unsigned i = 0; i < 2; ++i) row[i] = {visual_.window_left[i], visual_.window_right[i]};
  for (unsigned y = 0; y < 224; ++y)
    out.windows[y] = {windows[y][0].left, windows[y][0].right, windows[y][1].left, windows[y][1].right};
  return frame;
}
void WorldScenePresentation::complete_publication() {
  if (effects_) effects_->complete_publication();
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
                                                  std::span<const std::uint16_t> values) {
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
  const auto &c = configurations_.at(selection_.value);
  visual_.visible_layers = c.main; visual_.subscreen_layers = c.sub;
  visual_.color_math_layers = c.math; visual_.use_subscreen = c.use_subscreen;
  visual_.subtract = c.subtract; visual_.half_intensity = c.half;
  visual_.clip_colors = c.clip; visual_.prevent_math = c.prevent;
}
} // namespace eb::native
