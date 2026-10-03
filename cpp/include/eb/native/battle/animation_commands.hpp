#pragma once

#include "eb/native/battle/psi_setup.hpp"
#include "eb/native/world_encounter.hpp"

namespace eb::native { class WorldEncounterEffects; }
namespace eb::native::battle {
// Complete C3FAC9/C3F981 dispatch. The current target chooses one of the two
// literal animation IDs; setup may yield, but this call does not wait for the
// resulting animation to end. Every dependency is the actual shared owner.
class AnimationCommands {
public:
    class Operation {
    public:
        ~Operation();
        Operation(const Operation&) = delete;
        Operation& operator=(const Operation&) = delete;
        bool advance();
        const std::optional<PsiSetupService>& service() const noexcept { return pending_; }
        // Acknowledges only a completed real setup publication/input request.
        void respond();
        bool complete() const noexcept { return complete_; }
        bool result() const;
    private:
        friend class AnimationCommands;
        Operation(AnimationCommands&, std::uint16_t, std::uint16_t);
        AnimationCommands& owner_;
        std::uint16_t ally_{}, enemy_{};
        bool started_{}, complete_{}, result_{};
        std::optional<PsiSetupService> pending_;
        std::unique_ptr<PsiSetup::Operation> setup_;
        void finish() noexcept;
    };
    AnimationCommands(PsiSetup&, const PsiResources&, Roster&, ActionState&,
                      BattleBackgroundScene&, PaletteBankState&, const WorldSwirlData&,
                      WorldSwirlState&, WorldEncounterVisualState&);
    AnimationCommands(const AnimationCommands&) = delete;
    AnimationCommands& operator=(const AnimationCommands&) = delete;
    AnimationCommands(AnimationCommands&&) = delete;
    AnimationCommands& operator=(AnimationCommands&&) = delete;
    std::unique_ptr<Operation> begin(std::uint16_t ally, std::uint16_t enemy);
    GameVersion version() const noexcept { return resources_.version(); }
    bool uses(const PsiAnimation&, const Roster&, const WorldEncounterEffects&) const noexcept;
    bool uses(const story::TickState&) const noexcept;
    bool uses(const WorldDisplayFade&) const noexcept;
    bool uses(const PsiDisplayState&, const PsiScratch&, const PaletteBankState&,
              const BattleBackgroundScene&) const noexcept;
    bool uses_visual(const WorldEncounterVisualState& visual) const noexcept {
        return &visual_ == &visual;
    }
    bool failed() const noexcept { return failed_; }
    bool busy() const noexcept { return active_ != nullptr; }
private:
    PsiSetup& setup_;
    const PsiResources& resources_;
    Roster& roster_;
    ActionState& action_;
    BattleBackgroundScene& background_;
    PaletteBankState& colors_;
    const WorldSwirlData& swirl_data_;
    WorldSwirlState& swirl_;
    WorldEncounterVisualState& visual_;
    Operation* active_{};
    bool failed_{};
    void check() const;
    void dispatch_effect(unsigned);
};
} // namespace eb::native::battle
