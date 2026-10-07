#include "eb/native/battle/psi_setup.hpp"
#include "eb/native/battle/action_state.hpp"
#include "eb/native/battle/roster.hpp"
#include "eb/native/battle_background_scene.hpp"
#include "eb/native/battle_combatants.hpp"
#include "eb/native/story/ticks.hpp"
#include "eb/native/world_display_fade.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native::battle {
PsiSetup::PsiSetup(std::shared_ptr<const PsiResources> resources,
                   PsiAnimationState &state, PsiScratch &scratch,
                   PsiDisplayState &display, PaletteEffects &effects,
                   BattleBackgroundScene &background, Roster &roster,
                   ActionState &action, const BattleCombatants &sprites,
                   const WorldDisplayFade &fade, const story::TickState &clock)
    : resources_(std::move(resources)), state_(state), scratch_(scratch),
      display_(display), effects_(effects), background_(background),
      roster_(roster), action_(action), sprites_(sprites), fade_(fade),
      clock_(clock) {
  if (!resources_ || resources_->version() != roster_.version())
    throw std::invalid_argument("PSI setup owners use different regions");
}
bool PsiSetup::uses(const Roster &roster, const ActionState &action,
                    const BattleBackgroundScene &background,
                    const PaletteBankState &colors,
                    const PsiResources &resources) const noexcept {
  return &roster_ == &roster && &action_ == &action &&
         &background_ == &background && &effects_.palette_state() == &colors &&
         resources_.get() == &resources;
}
bool PsiSetup::uses(const PsiAnimation &animation) const noexcept {
  return animation.uses(state_, scratch_, display_, effects_, background_);
}
bool PsiSetup::uses(const story::TickState &clock) const noexcept {
  return &clock_ == &clock;
}
bool PsiSetup::uses(const WorldDisplayFade &fade) const noexcept {
  return &fade_ == &fade;
}
bool PsiSetup::uses(const PsiDisplayState &display, const PsiScratch &scratch,
                    const PaletteBankState &colors,
                    const BattleBackgroundScene &background) const noexcept {
  return &display_ == &display && &scratch_ == &scratch &&
         &effects_.palette_state() == &colors && &background_ == &background;
}
std::unique_ptr<PsiSetup::Operation> PsiSetup::begin(unsigned id) {
  if (active_ || abandoned_)
    throw std::logic_error("PSI setup already active or abandoned");
  (void)resources_->definition(id);
  if (!(clock_.effective_interrupt_mask() & 0x80) &&
      (!(fade_.state().brightness & 0x80) || display_.pending_bytes()))
    throw std::logic_error(
        "Queued PSI transfer requires the native NMI publication owner");
  auto operation = std::unique_ptr<Operation>(new Operation(*this, id));
  active_ = true;
  return operation;
}
PsiSetup::Operation::Operation(PsiSetup &owner, unsigned id)
    : owner_(owner), id_(id) {}
PsiSetup::Operation::~Operation() {
  if (!complete_) {
    owner_.abandoned_ = true;
    owner_.active_ = false;
  }
}
void PsiSetup::Operation::wait_for(PsiSetupService service) {
  service_ = service;
  receipt_ = service == PsiSetupService::Publication
                 ? owner_.display_.publication_serial()
                 : owner_.clock_.input_polls;
}
void PsiSetup::Operation::respond() {
  if (!service_ || complete_)
    throw std::logic_error("PSI setup has no pending service");
  const auto current = *service_ == PsiSetupService::Publication
                           ? owner_.display_.publication_serial()
                           : owner_.clock_.input_polls;
  if (current == receipt_)
    throw std::logic_error("PSI setup service has not completed its real work");
  if (*service_ == PsiSetupService::FrameWait)
    phase_ = 3;
  else if (transfer_ && transfer_->needs_publication())
    transfer_->respond();
  service_.reset();
}
bool PsiSetup::Operation::advance() {
  if (complete_)
    return true;
  if (service_)
    return false;
  auto &o = owner_;
  const auto &definition = o.resources_->definition(id_);
  if (!phase_) {
    initial_depth_ = o.background_.primary().definition().bitdepth;
    const auto graphics = o.resources_->graphics(definition.graphics);
    const unsigned first = initial_depth_ == 2 ? 0x8000 : 0;
    std::copy(graphics.begin(), graphics.end(),
              o.scratch_.bytes.begin() + first);
    if (initial_depth_ != 2)
      for (unsigned tile = 0; tile < 256; ++tile) {
        const auto destination = o.scratch_.bytes.begin() + 0x8000 + tile * 32;
        std::copy_n(o.scratch_.bytes.begin() + tile * 16, 16, destination);
        std::fill_n(destination + 16, 16, 0);
      }
    source_ = 0x8000;
    destination_ = 0;
    remaining_ = initial_depth_ == 2 ? 0x1000 : 0x2000;
    phase_ = 1;
  }
  while (phase_ == 1) {
    if (transfer_) {
      if (!transfer_->advance()) {
        if (!(o.clock_.effective_interrupt_mask() & 0x80))
          throw std::logic_error(
              "Queued PSI transfer requires the native NMI publication owner");
        wait_for(PsiSetupService::Publication);
        return false;
      }
      transfer_.reset();
      const auto size = std::uint16_t(std::min<unsigned>(remaining_, 0x1200));
      source_ = std::uint16_t(source_ + size);
      destination_ = std::uint16_t(destination_ + size);
      remaining_ = std::uint16_t(remaining_ - size);
    }
    // An IRQ callback may have queued new work after the preceding drain.
    if (o.display_.pending_bytes()) {
      if (!(o.clock_.effective_interrupt_mask() & 0x80))
        throw std::logic_error(
            "Queued PSI transfer requires the native NMI publication owner");
      wait_for(PsiSetupService::Publication);
      return false;
    }
    if (!remaining_) {
      o.state_.palette_base = initial_depth_ == 2 ? 48 : 64;
      phase_ = 2;
      wait_for(PsiSetupService::FrameWait);
      return false;
    }
    const auto size = std::uint16_t(std::min<unsigned>(remaining_, 0x1200));
    transfer_ = o.display_.begin_transfer(
        {PsiTransferKind::Graphics, source_, size, destination_}, o.scratch_,
        o.fade_);
  }
  if (phase_ == 3) {
    finish_setup();
    complete_ = true;
    o.active_ = false;
  }
  return complete_;
}
void PsiSetup::Operation::finish_setup() {
  auto &o = owner_;
  const auto &definition = o.resources_->definition(id_);
  // Validate the live tail before mutating its owners. Earlier real transfers
  // are already complete and are not undone by an unsupported late domain.
  if (const auto dependency = o.background_.palette_restoration_dependency())
    throw BattlePaletteRestorationRequired(*dependency);
  if (!o.action_.target || *o.action_.target >= Roster::size)
    throw std::out_of_range("PSI setup requires the live current target");
  const auto &target = o.roster_.at(*o.action_.target);
  const bool enemy = target.consciousness && target.side == 1;
  std::array<bool, Roster::size> selected{};
  bool tall = false;
  if (enemy) {
    if (definition.target_mode == 0 || definition.target_mode == 3) {
      selected[*o.action_.target] = true;
      tall = o.sprites_.height(target.sprite) == 8;
    } else if (definition.target_mode == 1 || definition.target_mode == 2) {
      for (unsigned slot = 8; slot < Roster::size; ++slot) {
        const auto &actor = o.roster_.at(slot);
        if (!actor.consciousness || actor.side != 1 ||
            actor.afflictions[0] == 1 ||
            (definition.target_mode == 1 && actor.y != target.y))
          continue;
        selected[slot] = true;
        if (definition.target_mode == 1)
          tall |= o.sprites_.height(actor.sprite) == 8;
      }
    }
    for (unsigned slot = 0; slot < Roster::size; ++slot)
      if (selected[slot] && o.roster_.at(slot).resource >= 4)
        throw std::out_of_range(
            "PSI target uses an unowned enemy palette bank");
  }
  auto &s = o.state_;
  auto &colors = o.effects_.palette_state();
  if (unsigned(s.palette_base) + definition.palette.size() > 256)
    throw std::out_of_range("PSI displayed palette exceeds its owner");
  std::copy(definition.palette.begin(), definition.palette.end(),
            s.palette.begin());
  for (unsigned i = 0; i < definition.palette.size(); ++i)
    colors.staged_color(s.palette_base + i) = definition.palette[i];
  s.frame_offset = 0;
  s.time_until_next_frame = 1;
  s.frame_hold = definition.frame_hold;
  s.total_frames = definition.frames;
  s.palette_hold = definition.palette_hold;
  s.palette_lower = definition.palette_lower;
  s.palette_upper = definition.palette_upper;
  s.palette_index = 0;
  s.palette_countdown = 1;
  s.enemy_start = definition.enemy_start;
  s.enemy_end = definition.enemy_end;
  s.enemy_red = definition.enemy_color & 31;
  s.enemy_green = (definition.enemy_color >> 5) & 31;
  s.enemy_blue = (definition.enemy_color >> 10) & 31;
  std::copy(definition.frame_data.begin(), definition.frame_data.end(),
            o.scratch_.bytes.begin());
  o.background_.halve_palette(colors);
  for (unsigned bank = 0; bank < 4; ++bank)
    colors.staged_palette(12 + bank) = colors.staged_palette(8 + bank);
  s.enemy_targets.fill(0);
  if (!enemy)
    return;
  s.x_offset = 0;
  if (definition.target_mode == 0 || definition.target_mode == 3) {
    s.x_offset = std::uint16_t(128 - unsigned(target.x));
    s.y_offset = std::uint16_t(144 - unsigned(target.y) + (tall ? 16 : 0));
  } else if (definition.target_mode == 1)
    s.y_offset = std::uint16_t(144 - unsigned(target.y) + (tall ? 16 : 0));
  else if (definition.target_mode == 2)
    s.y_offset = 16;
  for (unsigned slot = 0; slot < Roster::size; ++slot)
    if (selected[slot]) {
      auto &actor = o.roster_.at(slot);
      actor.alternate = 1;
      s.enemy_targets[actor.resource] = 1;
    }
  const unsigned layer =
      o.background_.primary().definition().bitdepth == 2 ? 1 : 0;
  o.display_.staged_scroll[layer] = {s.x_offset, s.y_offset};
}
} // namespace eb::native::battle
