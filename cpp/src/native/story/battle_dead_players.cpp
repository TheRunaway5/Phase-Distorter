// Source: CHECK_DEAD_PLAYERS, including opening-window preservation,
// MSG_BTL_KIZETU_ON, the concentration normalization and UPDATE_PARTY tail.
#include "eb/native/battle/dead_players.hpp"
#include <stdexcept>

namespace eb::native::battle {
namespace {
void require(bool value, const char* message) { if (!value) throw std::logic_error(message); }
constexpr dialogue::WindowId battle_text{14};
}
DeadPlayers::DeadPlayers(std::shared_ptr<const EncounterResources> resources, Roster& roster,
    party::State& party, ActionState& action, Names& names, story::BattleDialogue& dialogue,
    dialogue::WindowHost& windows, story::Scene& scene, story::PartyFormation& formation)
    : resources_(std::move(resources)), roster_(roster), party_(party), action_(action), names_(names),
      dialogue_(dialogue), windows_(windows), scene_(scene), formation_(formation) {
    require(resources_ && resources_->version() == roster_.version() &&
                party_.version() == roster_.version() && windows_.version() == roster_.version(),
            "Dead-player owners have different regions");
    require(&dialogue_.party() == &party_ && names_.uses(roster_, party_, dialogue_.prepared(), action_),
            "Dead-player names and dialogue must use the actual party and selectors");
    require(scene_.uses(windows_, party_) && scene_.uses(dialogue_) && scene_.uses(formation_),
            "Dead-player scene and formation must borrow the actual party and windows");
    (void)dialogue_.resolve(resources_->message(EncounterMessage::Unconscious));
}
bool DeadPlayers::uses(const Roster& roster, const party::State& party,
    const ActionState& action) const noexcept {
    return &roster == &roster_ && &party == &party_ && &action == &action_;
}
bool DeadPlayers::uses(const dialogue::WindowHost& windows, const story::Scene& scene,
    const story::BattleDialogue& dialogue) const noexcept {
    return &windows == &windows_ && &scene == &scene_ && &dialogue == &dialogue_;
}
std::unique_ptr<DeadPlayers::Operation> DeadPlayers::begin() {
    require(!failed_ && !active_ && !scene_.failed() && !scene_.busy(), "Dead-player check is unavailable");
    dialogue_.validate_start();
    auto operation = std::unique_ptr<Operation>(new Operation(*this));
    active_ = operation.get(); return operation;
}
DeadPlayers::Operation::Operation(DeadPlayers& owner) : owner_(owner) {}
DeadPlayers::Operation::~Operation() {
    if (owner_.active_ == this) {
        if (!complete_) owner_.failed_ = true;
        owner_.active_ = nullptr;
    }
}
bool DeadPlayers::Operation::pump(unsigned budget) {
    if (scene_) {
        if (scene_->advance(budget) != dialogue::Progress::Finished) return false;
        require(scene_->complete(), "Dead-player scene child has not completed");
        scene_.reset();
        if (child_ == Child::Window) window_->respond();
        else dialogue_->respond();
        child_.reset();
    }
    if (window_) {
        if (window_->advance() == dialogue::OutputProgress::Suspended) {
            child_ = Child::Window; scene_ = owner_.scene_.begin(*window_->effect()); return false;
        }
        window_.reset();
    }
    if (dialogue_) {
        const auto result = dialogue_->advance(budget);
        if (result == dialogue::Progress::BudgetExhausted) return false;
        if (result == dialogue::Progress::Suspended) {
            child_ = Child::Dialogue; scene_ = owner_.scene_.begin(dialogue_->conversation()); return false;
        }
        dialogue_.reset();
    }
    if (update_) {
        if (update_->advance(budget) != dialogue::Progress::Finished) return false;
        require(update_->complete(), "Dead-player party update has not completed");
        update_.reset();
    }
    return true;
}
dialogue::Progress DeadPlayers::Operation::advance(unsigned budget) {
    if (complete_) return dialogue::Progress::Finished;
    require(!owner_.failed_ && owner_.active_ == this, "Dead-player operation is not active");
    try {
        while (budget--) {
            if (!pump(budget + 1)) {
                if (scene_) {
                    const auto result = scene_->advance(budget + 1);
                    if (result == dialogue::Progress::Finished) continue;
                    return result;
                }
                if (update_ && update_->service()) return dialogue::Progress::Suspended;
                return dialogue::Progress::BudgetExhausted;
            }
            if (slot_ == 6) {
                complete_ = true; owner_.active_ = nullptr; return dialogue::Progress::Finished;
            }
            auto& b = owner_.roster_.at(slot_);
            switch (phase_) {
            case 0:
                if (!b.consciousness || b.side || b.npc) { ++slot_; break; }
                {
                    // Source LOCAL02 retains this party record across KO text
                    // callbacks, even if the live battler's row changes.
                    character_ = unsigned(b.row) + 1;
                    const auto& p = owner_.party_.character(character_);
                    b.hp = p.current_hp; b.pp = p.current_pp;
                }
                if (!b.hp && b.afflictions[0] != 1) {
                    owner_.action_.target = slot_;
                    b.afflictions.fill(0); b.afflictions[0] = 1;
                    owner_.names_.fix_target();
                    close_ = !owner_.windows_.slot_for(battle_text);
                    window_ = owner_.windows_.begin({dialogue::WindowAction::Open, battle_text, {}, 0});
                    phase_ = 1;
                } else phase_ = 3;
                break;
            case 1:
                dialogue_ = owner_.dialogue_.begin_text(owner_.dialogue_.resolve(
                    owner_.resources_->message(EncounterMessage::Unconscious)));
                phase_ = 2; break;
            case 2:
                if (close_) window_ = owner_.windows_.begin({dialogue::WindowAction::CloseFocus, {}, {}, 0});
                phase_ = 3; break;
            case 3: {
                auto& p = owner_.party_.character(character_);
                p.afflictions = b.afflictions;
                if (p.afflictions[4]) p.afflictions[4] = 1;
                update_ = owner_.formation_.begin();
                phase_ = 4; break;
            }
            case 4: ++slot_; phase_ = 0; break;
            default: throw std::logic_error("Unknown dead-player continuation");
            }
        }
        return dialogue::Progress::BudgetExhausted;
    } catch (...) { owner_.failed_ = true; throw; }
}
} // namespace eb::native::battle
