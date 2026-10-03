#include "eb/native/battle/animation_commands.hpp"
#include "eb/native/battle/action_state.hpp"
#include "eb/native/battle/roster.hpp"
#include "eb/native/battle_background_scene.hpp"
#include "eb/native/world_encounter_effects.hpp"
#include <stdexcept>

namespace eb::native::battle {
namespace {
void require(bool condition, const char* message) {
    if (!condition) throw std::logic_error(message);
}
}
AnimationCommands::AnimationCommands(PsiSetup& setup, const PsiResources& resources,
    Roster& roster, ActionState& action, BattleBackgroundScene& background,
    PaletteBankState& colors, const WorldSwirlData& swirl_data, WorldSwirlState& swirl,
    WorldEncounterVisualState& visual)
    : setup_(setup), resources_(resources), roster_(roster), action_(action),
      background_(background), colors_(colors), swirl_data_(swirl_data), swirl_(swirl), visual_(visual) {
    require(resources.version() == roster.version() &&
                setup.uses(roster, action, background, colors, resources),
            "Battle animations must share the actual regional setup owners");
}
bool AnimationCommands::uses(const PsiAnimation& animation, const Roster& roster,
    const WorldEncounterEffects& swirl) const noexcept {
    return &roster == &roster_ && setup_.uses(animation) &&
           swirl.uses(swirl_data_, swirl_, colors_, visual_);
}
bool AnimationCommands::uses(const story::TickState& clock) const noexcept {
    return setup_.uses(clock);
}
bool AnimationCommands::uses(const WorldDisplayFade& fade) const noexcept {
    return setup_.uses(fade);
}
bool AnimationCommands::uses(const PsiDisplayState& display, const PsiScratch& scratch,
    const PaletteBankState& colors, const BattleBackgroundScene& background) const noexcept {
    return setup_.uses(display, scratch, colors, background);
}
void AnimationCommands::check() const {
    require(!failed_, "Battle animation dispatch was abandoned or failed");
}
std::unique_ptr<AnimationCommands::Operation> AnimationCommands::begin(
    std::uint16_t ally, std::uint16_t enemy) {
    check();
    require(!active_, "Battle animation dispatch is already active");
    auto operation = std::unique_ptr<Operation>(new Operation(*this, ally, enemy));
    active_ = operation.get();
    return operation;
}
AnimationCommands::Operation::Operation(AnimationCommands& owner,
    std::uint16_t ally, std::uint16_t enemy) : owner_(owner), ally_(ally), enemy_(enemy) {}
AnimationCommands::Operation::~Operation() {
    if (owner_.active_ == this) {
        if (!complete_) owner_.failed_ = true;
        owner_.active_ = nullptr;
    }
}
void AnimationCommands::Operation::finish() noexcept {
    complete_ = true;
    owner_.active_ = nullptr;
}
bool AnimationCommands::Operation::advance() {
    if (complete_) return true;
    owner_.check();
    require(owner_.active_ == this, "Battle animation operation is not active");
    if (pending_) return false;
    try {
        if (!started_) {
            require(owner_.action_.target.has_value(), "Battle animation has no current target");
            const auto& target = owner_.roster_.at(*owner_.action_.target);
            // Original npc_id is an unsigned byte, distinct from battler ID.
            if (target.npc == 213) { result_ = true; finish(); return true; }
            result_ = target.side != 0;
            const auto animation = result_ ? enemy_ : ally_;
            if (animation < 35) setup_ = owner_.setup_.begin(animation);
            else { owner_.dispatch_effect(animation); finish(); return true; }
            started_ = true;
        }
        if (setup_->advance()) {
            setup_.reset();
            finish();
            return true;
        }
        pending_ = setup_->service();
        return false;
    } catch (...) {
        owner_.failed_ = true;
        throw;
    }
}
void AnimationCommands::Operation::respond() {
    owner_.check();
    require(owner_.active_ == this && pending_ && setup_,
            "Battle animation has no setup request to acknowledge");
    setup_->respond();
    pending_.reset();
}
bool AnimationCommands::Operation::result() const {
    require(complete_, "Battle animation result is not ready");
    return result_;
}
void AnimationCommands::dispatch_effect(unsigned id) {
    if (id == 46) { background_.wobble(144); return; }
    if (id == 47) { background_.shake(300); return; }
    if (id == 48 || id >= 54) return;
    const auto& rgb = id < 46 ? resources_.enemy_color(id - 35)
                             : resources_.misc_color(id - 49);
    const unsigned swirl = id < 46 ? 5 : id < 53 ? 4 : 2;
    const unsigned options = id < 46 ? 7 : id < 53 ? 5 : 4;
    (void)swirl_data_.definitions.at(swirl);
    background_.halve_palette(colors_);
    visual_.fixed_color = {std::uint8_t(rgb[0] & 31), std::uint8_t(rgb[1] & 31),
                           std::uint8_t(rgb[2] & 31)};
    // SET_COLOUR_ADDSUB_MODE(0x10,0x3f), preserving unrelated layer/window state.
    visual_.use_subscreen = false;
    visual_.clip_colors = ColorWindowPolicy::Never;
    visual_.prevent_math = ColorWindowPolicy::Outside;
    visual_.color_math_layers.fill(true);
    visual_.subtract = false;
    visual_.half_intensity = false;
    configure_world_swirl(swirl_data_, swirl_, visual_, swirl, options);
}
} // namespace eb::native::battle
