#pragma once

#include "eb/native/battle/psi_animation.hpp"
#include "eb/native/battle/psi_resources.hpp"
#include <memory>
#include <optional>

namespace eb::native {
class BattleCombatants;
class WorldDisplayFade;
namespace story {
struct TickState;
}
} // namespace eb::native
namespace eb::native::battle {
class Roster;
struct ActionState;
enum class PsiSetupService { Publication, FrameWait };

// Complete SHOW_PSI_ANIMATION. The enclosing Scene continuation performs the
// actual transfer publications and explicit WAIT/input poll. All owners stay
// alive and stable; target and background selection are read after that wait.
class PsiSetup {
public:
  class Operation {
  public:
    ~Operation();
    Operation(const Operation &) = delete;
    Operation &operator=(const Operation &) = delete;
    bool advance();
    const std::optional<PsiSetupService> &service() const noexcept {
      return service_;
    }
    // Publication requires an actual display commit; FrameWait requires an
    // actual input poll. Neither service can be acknowledged without work.
    void respond();
    bool complete() const noexcept { return complete_; }

  private:
    friend class PsiSetup;
    Operation(PsiSetup &, unsigned);
    void finish_setup();
    void wait_for(PsiSetupService);
    PsiSetup &owner_;
    unsigned id_{}, phase_{};
    std::uint16_t remaining_{}, source_{}, destination_{};
    unsigned initial_depth_{};
    std::uint64_t receipt_{};
    std::optional<PsiSetupService> service_;
    std::unique_ptr<PsiDisplayState::TransferOperation> transfer_;
    bool complete_{};
  };

  PsiSetup(std::shared_ptr<const PsiResources>, PsiAnimationState &,
           PsiScratch &, PsiDisplayState &, PaletteEffects &,
           BattleBackgroundScene &, Roster &, ActionState &,
           const BattleCombatants &, const WorldDisplayFade &,
           const story::TickState &);
  PsiSetup(const PsiSetup &) = delete;
  PsiSetup &operator=(const PsiSetup &) = delete;
  PsiSetup(PsiSetup &&) = delete;
  PsiSetup &operator=(PsiSetup &&) = delete;
  GameVersion version() const noexcept { return resources_->version(); }
  std::unique_ptr<Operation> begin(unsigned id);
  bool uses(const Roster &, const ActionState &, const BattleBackgroundScene &,
            const PaletteBankState &, const PsiResources &) const noexcept;
  bool uses(const PsiAnimation &) const noexcept;
  bool uses(const story::TickState &) const noexcept;
  bool uses(const WorldDisplayFade &) const noexcept;
  bool uses(const PsiDisplayState &, const PsiScratch &,
            const PaletteBankState &,
            const BattleBackgroundScene &) const noexcept;

private:
  std::shared_ptr<const PsiResources> resources_;
  PsiAnimationState &state_;
  PsiScratch &scratch_;
  PsiDisplayState &display_;
  PaletteEffects &effects_;
  BattleBackgroundScene &background_;
  Roster &roster_;
  ActionState &action_;
  const BattleCombatants &sprites_;
  const WorldDisplayFade &fade_;
  const story::TickState &clock_;
  bool active_{}, abandoned_{};
};
} // namespace eb::native::battle
