#pragma once

#include "eb/native/battle/psi_scene.hpp"
#include "eb/native/battle/frame_display.hpp"
#include "eb/native/battle_combatants.hpp"
#include "eb/native/story/scene.hpp"
#include <utility>

namespace eb::native { struct WorldEncounterVisualState; class WorldDisplayFade; }
namespace eb::native::story {
// Scene's actual display boundary for the retained battle planes, selected
// combatant commands and published windows. Every mutable owner is borrowed;
// sampling never runs animation, selects objects, polls input or advances time.
// The frame caller supplies its real layer/window/color-math policy. Graphics
// uploads and the OAM-gated scroll latch retain their explicit transport owners.
class BattlePublication final : public ScenePublication,
                                public dialogue::WindowPalettePublication {
public:
    enum class WindowBinding { Immediate, Deferred };
    BattlePublication(battle::PaletteBankState &, battle::PsiScratch &,
                      battle::PsiDisplayState &, BattleBackgroundScene &,
                      BattleCombatantScene &, dialogue::WindowHost &,
                      const DirectSceneFrame::Effects &, WindowBinding = WindowBinding::Immediate);
    BattlePublication(battle::PaletteBankState &, battle::PsiScratch &,
                      battle::PsiDisplayState &, BattleBackgroundScene &,
                      BattleCombatantScene &, dialogue::WindowHost &,
                      WorldEncounterVisualState &, WorldDisplayFade &, WindowBinding = WindowBinding::Immediate);
    ~BattlePublication() override;
    BattlePublication(const BattlePublication &) = delete;
    BattlePublication &operator=(const BattlePublication &) = delete;
    std::shared_ptr<const DirectSceneFrame> capture(const DirectSceneFrame &) const override;
    std::shared_ptr<const DirectSceneFrame> capture_next(const DirectSceneFrame &) override;
    const dialogue::WindowHost *window_host() const noexcept override { return &windows_; }
    bool supports_animation(const battle::AnimationCommands &) const noexcept override;
    bool supports_battle_frame(const battle::Frame &) const noexcept override;
    void bind_frame_display(battle::FrameDisplay &);
    // Prayer scenes retain the same NMI transport while BATTLE_MODE_FLAG
    // temporarily selects the actual world artwork. Battle-only publishers
    // remain unbound; the desktop owner binds its stable world presentation.
    void bind_world_presentation(ScenePublication &);
    void complete_publication() override {}
    void complete_interrupt() noexcept override {display_.transient_memory().after_interrupt();}
    void stage_world_objects(std::shared_ptr<const DirectSceneFrame> objects) override {
        if(!windows_.prompt_state().battle_mode && world_)world_->stage_world_objects(std::move(objects));
    }
    dialogue::WindowPalettePublication *window_palette_publication() noexcept override { return this; }
    const WorldDisplayFade *display_fade() const noexcept override { return fade_; }
    const WorldEncounterVisualState *publication_visual() const noexcept override { return visual_; }
    bool uses_visual(const WorldEncounterVisualState &visual) const noexcept override { return visual_ == &visual; }
    const battle::FrameDisplay *frame_display() const noexcept override { return frame_display_; }
    bool uses(const WorldEncounterVisualState &, const WorldDisplayFade &) const noexcept;
    bool uses_palette_transport(const battle::PaletteBankState &colors) const noexcept override {
        return &colors_ == &colors;
    }
    void publish_window_range(unsigned first, std::span<const std::uint16_t>,
                             dialogue::WindowPaletteUpload = dialogue::WindowPaletteUpload::Full) override;

private:
    std::shared_ptr<const DirectSceneFrame> capture_with(
        const DirectSceneFrame &, const battle::PaletteBankState &,
        const battle::PsiDisplayState &, const WorldEncounterVisualState * = nullptr,
        unsigned brightness = 15, const battle::FrameDisplay::Screen * = nullptr,
        std::uint8_t hdma = 0, const EncounterWindowMask * = nullptr) const;
    battle::PaletteBankState &colors_;
    battle::PsiScratch &scratch_;
    battle::PsiDisplayState &display_;
    BattleBackgroundScene &background_;
    BattleCombatantScene &combatants_;
    dialogue::WindowHost &windows_;
    const DirectSceneFrame::Effects *policy_{};
    WorldEncounterVisualState *visual_{};
    WorldDisplayFade *fade_{};
    battle::FrameDisplay *frame_display_{};
    ScenePublication *world_{};
    void bind(WindowBinding);
};
} // namespace eb::native::story
