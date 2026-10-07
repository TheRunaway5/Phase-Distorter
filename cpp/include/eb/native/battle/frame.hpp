#pragma once
#include "eb/native/battle/psi_animation.hpp"
#include "eb/native/world_encounter_effects.hpp"
#include <memory>

namespace eb::native {
class BattleCombatantScene;
class WorldDisplayFade;
class WorldLayerConfigurations;
class BattleSceneFrameReset;
struct WorldLayerSelection;
namespace dialogue { class WindowHost; }
namespace party { class State; class MeterWindows; }
namespace story { struct TickState; }
}
namespace eb::native::battle {
class FrameDisplay;
class AnimationCommands;
class Roster;
class BackgroundLoader;
class DisplaySetup;
struct FrameState {
  std::uint16_t targeting_flash{}, giygas_phase{};
  std::uint16_t hp_pp_blink_duration{}, hp_pp_blink_target{};
};
// Complete ordered C2DB3F body. C43568's initial WAIT belongs to the existing
// Scene tick. Only real transfer contention suspends this operation; it never
// adds input polls or owns a second game clock. Every dependency is shared.
class Frame final : public WorldEncounterRestoration {
public:
  class Operation {
  public:
    ~Operation();
    Operation(const Operation &) = delete;
    Operation &operator=(const Operation &) = delete;
    bool advance();
    bool needs_publication() const noexcept;
    void respond();
    bool complete() const noexcept { return complete_; }
  private:
    friend class Frame;
    explicit Operation(Frame &);
    Frame &owner_;
    unsigned phase_{};
    bool complete_{};
    std::unique_ptr<PsiAnimation::Operation> psi_;
  };
  Frame(FrameState &, BattleBackgroundScene &, Roster &, BattleCombatantScene &,
        PsiAnimation &, PaletteEffects &, PaletteBankState &, PsiDisplayState &,
        FrameDisplay &, const WorldDisplayFade &, story::TickState &,
        dialogue::WindowHost &, party::State &, party::MeterWindows &,
        const WorldSwirlData &, const WorldEncounterEffectData &, WorldSwirlState &,
        WorldEncounterVisualState &, const WorldLayerConfigurations &, WorldLayerSelection &);
  Frame(const Frame &) = delete;
  Frame &operator=(const Frame &) = delete;
  Frame(Frame &&) = delete;
  Frame &operator=(Frame &&) = delete;
  void validate_begin() const;
  // C2EACF reads the actual PSI counter and the same retained swirl owner.
  bool window_animation_active(const WorldEncounterEffects &) const;
  // Complete startup graphical callers, without the other C2DB3F phases.
  void reset_graphics(); // C2E0E7
  void publish_combatants(); // C2F8F9 / UPDATE_SCREEN
  void publish_window_palette(unsigned flavor, bool transitions_disabled); // C47F87
  std::unique_ptr<Operation> begin();
  bool failed() const noexcept { return failed_; }
  bool busy() const noexcept { return active_; }
  bool shares_animation(const AnimationCommands &) const noexcept;
  GameVersion version() const noexcept;
  bool uses(const Roster& roster, const FrameState& state, const PaletteBankState& colors, const PsiScratch& scratch) const noexcept {
    return &roster_==&roster && &state_==&state && &colors_==&colors && &psi_.scratch()==&scratch;
  }
  bool uses(const Roster &roster) const noexcept { return &roster_ == &roster; }
  bool uses(const PsiAnimation& psi, const PaletteEffects& effects,
            const WorldSwirlState& swirl) const noexcept {
    return &psi_ == &psi && &palette_effects_ == &effects && &swirl_state_ == &swirl;
  }
  bool uses(const BackgroundLoader&) const noexcept;
  bool uses(const DisplaySetup&) const noexcept;
  bool uses(const story::TickState &, const dialogue::WindowHost &,
            const party::State &, const party::MeterWindows &) const noexcept;
  bool uses(const PaletteBankState &, const PsiDisplayState &, const FrameDisplay &,
            const BattleBackgroundScene &, const BattleCombatantScene &,
            const WorldEncounterVisualState &, const WorldDisplayFade &) const noexcept;
  bool uses_graphics(const BattleCombatantScene &, const PaletteBankState &,
                    const PsiScratch &, const PsiDisplayState &, const WorldDisplayFade &,
                    const dialogue::WindowHost &, const party::State &) const noexcept;
  // Actual shared C4A7B0 restoration, also used by the ordered flash phase.
  bool uses(const ScenePalette &, const WorldEncounterVisualState &) const noexcept override { return false; }
  bool uses_battle_palette(const PaletteBankState &, const WorldEncounterVisualState &) const noexcept override;
  void restore_battle_palettes() override;
  void bind_palette_reset(BattleSceneFrameReset &);
  void restore_selected_layer_configuration() override;
private:
  void prefix();
  void tail();
  void check() const;
  void publish_combatants_owned();
  FrameState &state_;
  BattleBackgroundScene &background_;
  Roster &roster_;
  BattleCombatantScene &objects_;
  PsiAnimation &psi_;
  PaletteEffects &palette_effects_;
  PaletteBankState &colors_;
  PsiDisplayState &display_;
  FrameDisplay &frame_display_;
  const WorldDisplayFade &fade_;
  story::TickState &clock_;
  dialogue::WindowHost &windows_;
  party::State &party_;
  party::MeterWindows &meters_;
  WorldEncounterVisualState &visual_;
  const WorldLayerConfigurations &layers_;
  WorldLayerSelection &layer_;
  WorldSwirlState &swirl_state_;
  BattleSceneFrameReset *palette_reset_{};
  WorldEncounterEffects swirl_;
  bool active_{}, failed_{};
};
} // namespace eb::native::battle
