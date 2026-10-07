#include "eb/native/battle/frame.hpp"
#include "eb/native/battle/background_loader.hpp"
#include "eb/native/battle/animation_commands.hpp"
#include "eb/native/battle/frame_display.hpp"
#include "eb/native/battle/roster.hpp"
#include "eb/native/battle_background_scene.hpp"
#include "eb/native/party/meter_windows.hpp"
#include "eb/native/story/ticks.hpp"
#include "eb/native/world_layers.hpp"
#include <stdexcept>
#include <vector>

namespace eb::native::battle {
Frame::Frame(FrameState &state, BattleBackgroundScene &background, Roster &roster,
    BattleCombatantScene &objects, PsiAnimation &psi, PaletteEffects &palette_effects,
    PaletteBankState &colors, PsiDisplayState &display, FrameDisplay &frame_display,
    const WorldDisplayFade &fade, story::TickState &clock, dialogue::WindowHost &windows,
    party::State &party, party::MeterWindows &meters, const WorldSwirlData &swirl_data,
    const WorldEncounterEffectData &swirl_effects, WorldSwirlState &swirl,
    WorldEncounterVisualState &visual, const WorldLayerConfigurations &layers,
    WorldLayerSelection &layer)
    : state_(state), background_(background), roster_(roster), objects_(objects),
      psi_(psi), palette_effects_(palette_effects), colors_(colors), display_(display),
      frame_display_(frame_display), fade_(fade), clock_(clock), windows_(windows),
      party_(party), meters_(meters), visual_(visual), layers_(layers), layer_(layer), swirl_state_(swirl),
      swirl_(swirl_data, swirl_effects, swirl, colors, visual, *this) {
  if (windows.version() != party.version() || roster.version() != party.version() ||
      !meters.bound_to(windows, party) || !frame_display.uses(display) ||
      &palette_effects.palette_state() != &colors ||
      !psi.uses(psi.state(), psi.scratch(), display, palette_effects, background))
    throw std::invalid_argument("Battle frame owners or regions do not match");
  objects_.bind_palette_state(colors_);
  swirl_.bind_display(frame_display_);
}
bool Frame::shares_animation(const AnimationCommands &commands) const noexcept {
  return commands.uses(psi_, roster_, swirl_);
}
bool Frame::uses(const BackgroundLoader& loader) const noexcept {
  return loader.uses(background_, colors_, psi_.scratch(), display_, frame_display_) &&
      &loader.fade_ == &fade_ && &loader.clock_ == &clock_ && &loader.state_ == &state_ &&
      &loader.swirl_ == &swirl_state_ && &loader.visual_ == &visual_ &&
      &loader.layers_ == &layers_ && &loader.selection_ == &layer_;
}
bool Frame::uses(const DisplaySetup& blank) const noexcept {
  return &blank.frames_ == &frame_display_ && &blank.fade_ == &fade_ &&
      &blank.clock_ == &clock_ && &blank.visual_ == &visual_ && blank.version_ == version();
}
GameVersion Frame::version() const noexcept { return party_.version(); }
bool Frame::uses(const story::TickState &clock, const dialogue::WindowHost &windows,
                 const party::State &party, const party::MeterWindows &meters) const noexcept {
  return &clock == &clock_ && &windows == &windows_ && &party == &party_ &&
         &meters == &meters_ && meters_.bound_to(windows_, party_);
}
bool Frame::uses(const PaletteBankState &colors, const PsiDisplayState &display,
    const FrameDisplay &frame_display, const BattleBackgroundScene &background,
    const BattleCombatantScene &objects, const WorldEncounterVisualState &visual,
    const WorldDisplayFade &fade) const noexcept {
  return &colors == &colors_ && &display == &display_ && &frame_display == &frame_display_ &&
         &background == &background_ && &objects == &objects_ && &visual == &visual_ &&
         &fade == &fade_;
}
bool Frame::uses_battle_palette(const PaletteBankState &colors,
    const WorldEncounterVisualState &visual) const noexcept {
  return &colors == &colors_ && &visual == &visual_;
}
void Frame::bind_palette_reset(BattleSceneFrameReset &reset) {
  if (palette_reset_ && palette_reset_ != &reset)
    throw std::logic_error("Battle frame already has another palette reset owner");
  palette_reset_ = &reset;
}
void Frame::restore_battle_palettes() {
  if (palette_reset_) background_.restore_palette(colors_,*palette_reset_);
  else background_.restore_palette(colors_);
}
void Frame::restore_selected_layer_configuration() {
  apply_world_layer_configuration(layers_, layer_, visual_);
}
void Frame::check() const {
  if (active_ || failed_ || display_.failed() || swirl_.failed())
    throw std::logic_error("Battle frame is active or failed");
  if (!meters_.bound_to(windows_, party_))
    throw std::logic_error("Battle frame meter owners changed");
  if (state_.hp_pp_blink_duration && state_.hp_pp_blink_target >= 4)
    throw std::out_of_range("Battle frame meter target exceeds owned windows");
  const auto &effects = background_.effects();
  if (background_.primary().definition().bitdepth == 2 && !background_.secondary() &&
      !background_.can_brighten_inactive_secondary() && (effects.darkening || effects.reflect_duration || effects.green_background_duration))
    throw BattlePaletteRestorationRequired(BattlePaletteDependency::InactiveSecondaryDestination);
  psi_.validate_begin();
}
void Frame::validate_begin() const { check(); }
bool Frame::window_animation_active(const WorldEncounterEffects &effects) const {
  if (failed_ || psi_.failed() || !effects.uses_swirl(swirl_state_) ||
      !effects.uses_visual(visual_))
    throw std::logic_error("Window animation status requires the actual PSI and swirl owners");
  return effects.animation_active(psi_.state());
}
std::unique_ptr<Frame::Operation> Frame::begin() {
  check();
  auto operation = std::unique_ptr<Operation>(new Operation(*this));
  active_ = true;
  return operation;
}
Frame::Operation::Operation(Frame &owner) : owner_(owner) {}
Frame::Operation::~Operation() {
  if (!complete_) {
    owner_.failed_ = true;
    owner_.active_ = false;
  }
}
bool Frame::Operation::needs_publication() const noexcept {
  return psi_ && psi_->needs_publication();
}
void Frame::Operation::respond() {
  if (complete_ || owner_.failed_ || !needs_publication())
    throw std::logic_error("Battle frame has no pending publication");
  psi_->respond();
}
bool Frame::Operation::advance() {
  if (complete_) return true;
  if (owner_.failed_) throw std::logic_error("Battle frame is failed");
  if (needs_publication()) return false;
  try {
    if (phase_ == 0) {
      owner_.prefix();
      psi_ = owner_.psi_.begin(owner_.fade_);
      phase_ = 1;
    }
    if (phase_ == 1) {
      if (!psi_->advance()) return false;
      psi_.reset();
      phase_ = 2;
    }
    owner_.tail();
    complete_ = true;
    owner_.active_ = false;
    return true;
  } catch (...) {
    owner_.failed_ = true;
    throw;
  }
}
bool Frame::uses_graphics(const BattleCombatantScene &objects, const PaletteBankState &colors,
    const PsiScratch &scratch, const PsiDisplayState &display, const WorldDisplayFade &fade,
    const dialogue::WindowHost &windows, const party::State &party) const noexcept {
  return &objects == &objects_ && &colors == &colors_ && &scratch == &psi_.scratch() && &display == &display_ &&
         &fade == &fade_ && &windows == &windows_ && &party == &party_;
}
void Frame::reset_graphics() {
  if (active_ || failed_) throw std::logic_error("Battle graphics reset requires an idle frame");
  if (state_.hp_pp_blink_duration && state_.hp_pp_blink_target >= 4)
    throw std::out_of_range("Battle graphics reset meter target exceeds owned windows");
  (void)layers_.at(1);
  background_.flash_green(0);
  background_.flash_red(0);
  swirl_state_.update_in = 0;
  if (state_.hp_pp_blink_duration) {
    meters_.state().drawn_mask |= std::uint16_t(1u << state_.hp_pp_blink_target);
    meters_.draw(state_.hp_pp_blink_target);
    meters_.state().area_dirty = 1;
    state_.hp_pp_blink_duration = 0;
  }
  visual_.fixed_color = {};
  layer_.value = 1;
  restore_selected_layer_configuration();
}
void Frame::publish_window_palette(unsigned flavor, bool disabled) {
  if (active_ || failed_) throw std::logic_error("Battle palette setup requires an idle frame");
  if (!party_.controlled_count || party_.controlled_count > party_.controlled_order.size())
    throw std::out_of_range("Battle palette requires the actual final controlled character");
  const auto id = unsigned(party_.controlled_order[party_.controlled_count - 1]) + 1;
  const auto status = party_.character(id).afflictions[0];
  windows_.publish_palette(flavor, status == 1 || status == 2, disabled);
}
void Frame::publish_combatants() {
  if (active_ || failed_) throw std::logic_error("Battle object publication requires an idle frame");
  publish_combatants_owned();
}
void Frame::publish_combatants_owned() {
  const auto &e = background_.effects();
    std::vector<BattleCombatantPresentation> records;
    records.reserve(24);
    for (unsigned slot = 8; slot < Roster::size; ++slot) {
      const auto &b = roster_.at(slot);
      // Source row passes never inspect resource/palette fields of skipped
      // records. Retain that gate before the presentation owner's validation.
      if (!b.consciousness || b.afflictions[0] == 1 || b.side != 1 || b.row > 1 || !b.sprite)
        continue;
      records.push_back({slot, b.resource, b.row, roster_.identity(slot), b.x, b.y,
                        true, false, true, true, b.blink, b.alternate_flash,
                        b.alternate != 0, b.targeted != 0});
    }
    objects_.publish(records, {e.horizontal_offset, e.vertical_offset,
                              clock_.frame_counter, state_.targeting_flash != 0});
    for (const auto &record : records) {
      auto &b = roster_.at(record.slot);
      b.blink = record.blink;
      b.alternate_flash = record.alternate_flash;
    }
    // UPDATE_SCREEN latches all four current scroll words before GENERATE or
    // PSI writes new staging. Its pending OAM replaces any earlier selection.
    frame_display_.update_screen(objects_.snapshot());
}
void Frame::prefix() {
  background_.advance_effects(&colors_);
  const auto &e = background_.effects();
  const unsigned depth = background_.primary().definition().bitdepth;
  const bool battle = windows_.prompt_state().battle_mode != 0;
  if (depth == 2 || battle)
    display_.staged_scroll[depth == 2 ? 0 : 2] = {e.horizontal_offset, e.vertical_offset};
  if (battle) publish_combatants_owned();
  const bool defeated = state_.giygas_phase == 0xffff;
  const auto changes = background_.advance_backgrounds({unsigned(clock_.frame_counter & 1), defeated}, &colors_);
  const auto generated = background_.snapshot();
  if (!defeated) {
    display_.staged_scroll[depth == 4 ? 1 : 2] =
        {generated.primary.horizontal_scroll, generated.primary.vertical_scroll};
    if (generated.secondary && !generated.shared_artwork)
      display_.staged_scroll[depth == 4 ? 0 : 3] =
          {generated.secondary->horizontal_scroll, generated.secondary->vertical_scroll};
  }
  for (unsigned i = 0; i < changes.size(); ++i)
    if (changes[i].distortion_installed) frame_display_.install_background(i);
}
void Frame::tail() {
  const bool red = background_.effects().red_duration != 0;
  const bool green = background_.effects().green_duration != 0;
  background_.advance_flashes();
  const auto flash = [&](bool active, std::uint16_t duration, PaletteColor color) {
    if (!active) return;
    // DIVISION16S_DIVISOR_POSITIVE enters after sign handling: raw words here.
    if ((duration / 12) & 1) {
      visual_.fixed_color = color;
      visual_.use_subscreen = false;
      visual_.clip_colors = visual_.prevent_math = ColorWindowPolicy::Never;
      visual_.color_math_layers.fill(true);
      visual_.subtract = visual_.half_intensity = false;
    } else {
      visual_.fixed_color = {};
      restore_selected_layer_configuration();
    }
  };
  flash(red, background_.effects().red_duration, {31, 0, 4});
  flash(green, background_.effects().green_duration, {0, 31, 4});
  if (state_.hp_pp_blink_duration) {
    // A transfer callback may have replaced the live target since admission.
    if (state_.hp_pp_blink_target >= 4)
      throw std::out_of_range("Battle frame meter target exceeds owned windows");
    if ((--state_.hp_pp_blink_duration / 3) & 1) {
      meters_.undraw(state_.hp_pp_blink_target);
    } else {
      meters_.state().drawn_mask |= std::uint16_t(1u << state_.hp_pp_blink_target);
      meters_.draw(state_.hp_pp_blink_target);
      meters_.state().area_dirty = 1;
    }
  }
  swirl_.advance();
  palette_effects_.advance();
  const bool letterbox = background_.effects().opening_letterbox && background_.effects().top_end;
  background_.advance_letterbox();
  if (letterbox) {
    frame_display_.letterbox.top_end = std::uint16_t(background_.effects().top_end);
    frame_display_.letterbox.bottom_start = std::uint16_t(background_.effects().bottom_start);
  }
}
} // namespace eb::native::battle
