#include "eb/native/world_scene_presentation.hpp"
#include "eb/native/world_display_fade.hpp"
#include "eb/native/battle/frame_display.hpp"
#include "eb/native/battle/background_loader.hpp"
#include "eb/native/battle/palette_effects.hpp"
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
void WorldScenePresentation::bind_palette_transport(battle::PaletteBankState &colors) {
  if (palette_transport_ && palette_transport_ != &colors)
    throw std::logic_error("World publication has another palette transport owner");
  palette_transport_ = &colors;
}
bool WorldScenePresentation::uses_palette_transport(const battle::PaletteBankState &colors) const noexcept {
  return palette_transport_ == &colors;
}
void WorldScenePresentation::stage_world_palette() { stage_palette_range(0,256,24); }
void WorldScenePresentation::bind_video_transport(battle::PsiDisplayState &display, const battle::PsiScratch &scratch) {
  if (!frame_display_ || !frame_display_->uses(display) ||
      (video_transport_ && video_transport_ != &display) || (scratch_ && scratch_ != &scratch))
    throw std::logic_error("World video transport requires its actual stable display and scratch owners");
  video_transport_ = &display; scratch_ = &scratch;
}
void WorldScenePresentation::begin_distinct_scene(const void *owner) {
  if (!owner || distinct_owner_ || !frame_display_ || !palette_transport_ || !video_transport_)
    throw std::logic_error("Distinct scene requires idle actual world publication transports");
  distinct_owner_ = owner;
}
void WorldScenePresentation::stage_distinct_scene(const void *owner, std::shared_ptr<const DirectSceneFrame> frame) {
  if (owner != distinct_owner_ || !frame || frame->width != 256 ||
      frame->atlas.size() != std::size_t(frame->atlas_width) * frame->atlas_height ||
      frame->palette_indices.size() != frame->atlas.size())
    throw std::logic_error("Distinct scene must stage its valid immutable authored screen");
  distinct_staged_ = std::move(frame);
}
void WorldScenePresentation::end_distinct_scene(const void *owner) {
  if (!owner || owner != distinct_owner_) throw std::logic_error("Distinct scene lost its publication owner");
  distinct_owner_ = nullptr; distinct_staged_.reset(); distinct_displayed_.reset();
}
void WorldScenePresentation::publish_scene_palette_range(unsigned first, std::span<const std::uint16_t> values, std::uint8_t mode) {
  if (!palette_transport_ || first > 256 || values.size() > 256 - first ||
      (mode != 8 && mode != 16 && mode != 24))
    throw std::out_of_range("Scene palette write exceeds its actual transport");
  for (unsigned i = 0; i < values.size(); ++i) {
    colors_[first+i] = packed(values[i]); palette_transport_->staged_color(first+i) = values[i];
  }
  palette_transport_->upload_mode = mode; visual_.palette_dirty = true;
}
void WorldScenePresentation::fill_palette(std::uint16_t raw) {
  colors_.fill(packed(raw));
  if(palette_transport_) {
    for(auto &bank:palette_transport_->staged) bank.fill(raw);
    palette_transport_->upload_mode=24;
  }
  visual_.palette_dirty=true;
}
void WorldScenePresentation::stage_palette_range(unsigned first,unsigned count,std::uint8_t mode) {
  if (!palette_transport_)
    throw std::logic_error("World palette staging requires the actual transport owner");
  for (unsigned i = first; i < first+count; ++i) {
    const auto color = colors_[i];
    palette_transport_->staged_color(i) = color.red | unsigned(color.green) << 5 | unsigned(color.blue) << 10;
  }
  palette_transport_->upload_mode = mode;
}
std::shared_ptr<const DirectSceneFrame> WorldScenePresentation::capture(const DirectSceneFrame &source) const {
  const unsigned brightness = !fade_ ? 15 : fade_->state().brightness & 0x80 ? 0 : fade_->state().brightness & 15;
  const auto rows = frame_display_ ? std::optional{frame_display_->windows(visual_,
      fade_->state().brightness & 0x80 ? 0 : frame_display_->displayed_hdma_enable, false)} : std::nullopt;
  auto result = capture_with(distinct_displayed_ ? *distinct_displayed_ : source,
                            brightness, false, rows ? &*rows : nullptr, palette_transport_);
  if (distinct_displayed_) {
    auto stamped = std::make_shared<DirectSceneFrame>(*result); stamped->frame = source.frame;
    return stamped;
  }
  return result;
}
std::shared_ptr<const DirectSceneFrame> WorldScenePresentation::capture_next(const DirectSceneFrame &source) {
  battle::PaletteBankState colors;
  if (palette_transport_) {
    colors.staged = palette_transport_->staged;
    colors.displayed = palette_transport_->displayed;
    colors.upload_mode = palette_transport_->upload_mode;
    colors.publish_pending();
  }
  const auto fade = fade_ ? std::optional{fade_->preview_next_frame()} : std::nullopt;
  const bool forced_blank = fade && (fade->state().brightness & 0x80);
  const bool disable_rows = fade && fade->disables_row_streams();
  const auto rows = frame_display_ ? std::optional{frame_display_->windows(visual_,
      disable_rows || forced_blank ? 0 : frame_display_->hdma_enable, true)} : std::nullopt;
  const auto distinct = distinct_staged_ && frame_display_->pending() ? distinct_staged_ : distinct_displayed_;
  auto frame = capture_with(distinct ? *distinct : source, fade ? fade->intensity() : 15, disable_rows,
                            rows ? &*rows : nullptr, palette_transport_ ? &colors : nullptr);
  if (distinct) {
    auto stamped = std::make_shared<DirectSceneFrame>(*frame); stamped->frame = source.frame;
    frame = std::move(stamped);
  }
  if (frame_display_) if (auto* registers = frame_display_->peripherals()) {
    registers->publish_oam(frame_display_->pending_display_id());
    registers->publish_palette(palette_transport_ ? palette_transport_->upload_mode : 0);
  }
  if (video_transport_) video_transport_->publish_pending(*scratch_);
  if (fade) fade_->commit_frame(*fade);
  if (palette_transport_) {
    palette_transport_->displayed = colors.displayed;
    palette_transport_->upload_mode = colors.upload_mode;
  }
  if (frame_display_)
    frame_display_->commit_publication(disable_rows, forced_blank);
  if (distinct) distinct_displayed_ = distinct;
  if (disable_rows && visual_.window_rows_enabled) {
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
    const EncounterWindowMask *published_rows, const battle::PaletteBankState *transport) const {
  if (effects_ && effects_->failed()) throw std::logic_error("Cannot capture failed encounter effects");
  if (!source.palette_indices.empty() && source.palette_indices.size() != source.atlas.size())
    throw std::invalid_argument("Palette identity atlas has different dimensions");
  auto frame = std::make_shared<DirectSceneFrame>(source);
  const auto color = [&](unsigned id) {
    return transport ? packed(transport->displayed_palette(id / 16)[id % 16]) : colors_[id];
  };
  for (unsigned i = 0; i < frame->palette_indices.size(); ++i) {
    const unsigned id = frame->palette_indices[i];
    if (id > 256) throw std::out_of_range("Invalid captured palette identity");
    if (id != 256 && (frame->atlas[i] >> 24)) frame->atlas[i] = palette_argb(color(id));
  }
  std::optional<EncounterWindowMask> rows;
  if (published_rows) rows = *published_rows;
  else if (effects_) rows = effects_->windows(false, disable_rows);
  auto visual = visual_;
  if (disable_rows) visual.window_rows_enabled = false;
  frame->effects = capture_scene_effects(visual, palette_argb(color(0)),
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
void WorldScenePresentation::bind_scene_frame_state(story::TickState &clock,
    story::Scene &scene, battle::BackgroundDisplayState &layout) {
  if (!scene.uses(clock) || (clock_ && clock_ != &clock) ||
      (scene_ && scene_ != &scene) || (background_layout_ && background_layout_ != &layout))
    throw std::logic_error("Palette reset requires its stable actual scene/frame owners");
  clock_ = &clock; scene_ = &scene; background_layout_ = &layout;
}
void WorldScenePresentation::validate_scene_and_frame_reset() const {
  if (!clock_ || !scene_ || !scene_->uses(*clock_) || !background_layout_ ||
      !fade_ || !frame_display_ || !video_transport_ || !frame_display_->uses(*video_transport_))
    throw std::logic_error("Unset palette destination requires actual scene/frame reset owners");
}
void WorldScenePresentation::reset_scene_and_frame_state() {
  validate_scene_and_frame_reset();
  // C2DE96's32-byte zero copy ends at HDMAEN_MIRROR. Fade parameters,
  // pending-frame bytes, selected OAM buffers, scroll, palette upload intent,
  // queued DMA descriptors and all already displayed data are beyond it.
  video_transport_->reset_queue_indices();
  clock_->frame_counter = 0;
  scene_->reset_object_builder();
  fade_->write_brightness(0);
  *background_layout_ = {};
  frame_display_->mosaic = 0;
  frame_display_->hdma_enable = 0;
  visual_.window_left[1] = 0;
  visual_.visible_layers.fill(false);
  visual_.subscreen_layers.fill(false);
  clock_->retain_interrupt_hardware();
  clock_->interrupt_mask = 0;
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
  if (palette_transport_) {
    for(unsigned p=0;p<6;++p)for(unsigned i=0;i<16;++i)
      palette_transport_->staged_color(32+p*16+i)=area.scenery_word(p,i);
    palette_transport_->upload_mode=8;
  }
}
void WorldScenePresentation::publish_area(const AreaPalettes &area) {
  publish_scenery(area);
  for (unsigned p = 0; p < 8; ++p)
    for (unsigned i = 0; i < 16; ++i)
      colors_[128 + p * 16 + i] = i ? argb(area.sprites[p][i]) : packed(area.sprite_zero[p]);
  if (palette_transport_) {
    for(unsigned p=0;p<8;++p)for(unsigned i=0;i<16;++i)
      palette_transport_->staged_color(128+p*16+i)=area.sprite_word(p,i);
    palette_transport_->upload_mode=24;
  }
}
void WorldScenePresentation::publish_window_range(unsigned first,
                                                  std::span<const std::uint16_t> values,
                                                  dialogue::WindowPaletteUpload mode) {
  if (first > 32 || values.size() > 32 - first)
    throw std::out_of_range("Window palette publication exceeds its32 colors");
  for (unsigned i = 0; i < values.size(); ++i) colors_[first + i] = packed(values[i]);
  if (palette_transport_) {
    for (unsigned i = 0; i < values.size(); ++i)
      palette_transport_->staged_color(first + i) = values[i];
    palette_transport_->upload_mode = std::uint8_t(mode);
  }
  visual_.palette_dirty = true;
}
void WorldScenePresentation::restore_overworld_layers() {
  visual_.visible_layers = {true, true, true, false, true};
}
void WorldScenePresentation::restore_battle_palettes() {
  if (!battle_) throw std::logic_error("Palette restoration requires the actual retained battle owner");
  if (palette_transport_) {
    battle_->restore_palette(*palette_transport_,*this);
    // Preserve raw retained palette words in the transport; the legacy world
    // color cache is only its decoded projection for these restored banks.
    if(const auto first=battle_->layer_metadata(0).palette_base)
      for(unsigned i=*first;i<*first+16;++i)colors_[i]=packed(palette_transport_->staged_color(i));
    if(battle_->secondary())if(const auto first=battle_->layer_metadata(1).palette_base)
      for(unsigned i=*first;i<*first+16;++i)colors_[i]=packed(palette_transport_->staged_color(i));
  } else battle_->restore_palette(colors_);
  visual_.palette_dirty = true;
}
void WorldScenePresentation::restore_selected_layer_configuration() {
  apply_world_layer_configuration(configurations_, selection_, visual_);
}
} // namespace eb::native
