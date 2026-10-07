#include "eb/native/battle/encounter.hpp"
#include <stdexcept>
namespace eb::native::battle {
namespace {
void require(bool value, const char* message) { if (!value) throw std::logic_error(message); }
OutcomeRoute route(actions::OutcomeRoute value) {
    switch (value) {
    case actions::OutcomeRoute::NormalCheck: return OutcomeRoute::NormalCheck;
    case actions::OutcomeRoute::ForcedVictory: return OutcomeRoute::ForcedVictory;
    case actions::OutcomeRoute::DirectWin: return OutcomeRoute::DirectWin;
    case actions::OutcomeRoute::DirectEscape: return OutcomeRoute::DirectEscape;
    }
    throw std::logic_error("Invalid native actor outcome route");
}
}
Encounter::Encounter(Admission& admission, Startup& startup, Rounds& rounds,
    CommandMenu& menu, actions::Executor& actions, Outcomes& outcomes,
    story::Scene& scene, dialogue::WindowHost& windows)
    : admission_(admission), startup_(startup), rounds_(rounds), menu_(menu),
      actions_(actions), outcomes_(outcomes), scene_(scene), windows_(windows) {
    require(startup.uses(admission, scene, windows) && rounds.uses(admission, scene, windows),
            "Encounter phases must borrow the same admission, scene and window owners");
    require(menu_.uses(admission.turns(), admission.roster(), admission.party(), scene, windows),
            "Encounter menu must borrow its actual scheduling, scene and party owners");
    require(scene.uses(windows, admission.party()) && scene.uses(admission.clock()),
            "Encounter requires the actual party, window and clock owners");
    require(actions.uses(admission.roster(), admission.party(), admission.action(), admission.turns(),
                         admission.state(), scene, windows),
            "Encounter actions must borrow its actual live battle and scene owners");
    require(outcomes.uses(admission.roster(), admission.party(), admission.encounter(), admission.state(),
                         admission.turns(), scene, windows),
            "Encounter outcomes must borrow its actual live battle and scene owners");
}
std::unique_ptr<Encounter::Operation> Encounter::begin() {
    require(!failed_ && !active_ && !startup_.failed() && !rounds_.failed() && !menu_.failed() &&
            !actions_.failed() && !outcomes_.failed() && !scene_.failed(), "Encounter dependency has failed");
    require(!startup_.busy() && !rounds_.busy() && !menu_.busy() && !actions_.busy() &&
            !outcomes_.busy() && !scene_.busy(), "Encounter dependency is already active");
    admission_.validate();
    auto operation = std::unique_ptr<Operation>(new Operation(*this));
    active_ = operation.get(); return operation;
}
Encounter::Operation::Operation(Encounter& owner) : owner_(owner) {}
Encounter::Operation::~Operation() {
    if (owner_.active_ == this) {
        if (!complete_) owner_.failed_ = true;
        owner_.active_ = nullptr;
    }
}
story::Scene::Operation* Encounter::Operation::scene() noexcept {
    if (menu_) return menu_->scene();
    if (action_) return action_->scene();
    if (outcome_) return outcome_->scene();
    if (round_) return round_->scene();
    return startup_ ? startup_->scene() : nullptr;
}
story::PartyFormation::Operation* Encounter::Operation::party_update() noexcept {
    if (action_) return action_->party_update();
    if (outcome_) return outcome_->party_update();
    return round_ ? round_->party_update() : nullptr;
}
story::TeddyParty::Operation* Encounter::Operation::teddy_update() noexcept {
    return action_ ? action_->teddy_update() : nullptr;
}
story::PartyMembership::Operation* Encounter::Operation::membership_update() noexcept {
    return action_ ? action_->membership_update() : nullptr;
}
CommandMenu::Operation* Encounter::Operation::menu_audio() noexcept {
    return menu_ && menu_->audio() ? menu_.get() : nullptr;
}
std::uint16_t Encounter::Operation::result() const {
    require(complete_, "Encounter has not returned"); return result_;
}
dialogue::Progress Encounter::Operation::advance(unsigned budget) {
    if (complete_) return dialogue::Progress::Finished;
    require(!owner_.failed_ && owner_.active_ == this, "Encounter operation is not active");
    try {
        while (budget--) {
            auto& o = owner_;
            if (startup_) {
                const auto progress = startup_->advance(budget + 1);
                if (progress != dialogue::Progress::Finished) return progress;
                require(startup_->complete(), "Encounter startup is unfinished"); startup_.reset();
            }
            if (menu_) {
                const auto progress = menu_->advance(budget + 1);
                if (progress != dialogue::Progress::Finished) return progress;
                require(menu_->complete() && round_, "Encounter command has no suspended round");
                const auto selected = menu_->result(); menu_.reset();
                round_->submit_menu(selected, o.admission_.turns().menu, o.admission_.turns().item_used);
            }
            if (round_) {
                const auto progress = round_->advance(budget + 1);
                if (round_->menu()) {
                    const auto request = *round_->menu();
                    menu_ = o.menu_.begin(request.character, request.selected_count, request.party_list_index);
                    continue;
                }
                if (progress != dialogue::Progress::Finished) return progress;
                require(round_->complete(), "Encounter scheduling is unfinished");
                if (phase_ == 2) {
                    const auto outcome = round_->command_outcome(); round_.reset();
                    switch (outcome) {
                    case CommandOutcome::Ready: phase_ = 3; break;
                    case CommandOutcome::Escaped: result_ = 0; phase_ = 7; break;
                    case CommandOutcome::CancelBattle: result_ = 0; phase_ = 7; break;
                    case CommandOutcome::PartyDefeated:
                        outcome_ = o.outcomes_.begin_check(); phase_ = 6; break;
                    case CommandOutcome::RestartBattle:
                        // This return exists only in the original mode0 debug
                        // viewer; ordinary Startup rejects that separate caller.
                        throw std::logic_error("Debug battle restart reached an ordinary encounter");
                    }
                } else {
                    const auto actor = round_->actor(); const bool permitted = round_->action_permitted(); round_.reset();
                    switch (actor.step) {
                    case ActorStep::RoundComplete: phase_ = 1; break;
                    case ActorStep::PartyDefeated:
                        outcome_ = o.outcomes_.begin_check(); phase_ = 6; break;
                    case ActorStep::EnemiesDefeated:
                        outcome_ = o.outcomes_.begin_check(); phase_ = 6; break;
                    case ActorStep::Actor:
                        if (permitted) { action_ = o.actions_.begin(); phase_ = 5; }
                        else phase_ = 3;
                        break;
                    }
                }
            }
            if (action_) {
                const auto progress = action_->advance(budget + 1);
                if (progress != dialogue::Progress::Finished) return progress;
                require(action_->complete(), "Encounter action is unfinished");
                const auto next = route(action_->outcome()); action_.reset();
                outcome_ = o.outcomes_.begin_check(next); phase_ = 6;
            }
            if (outcome_) {
                const auto progress = outcome_->advance(budget + 1);
                if (progress != dialogue::Progress::Finished) return progress;
                const auto result = outcome_->result(); outcome_.reset();
                if (phase_ == 8) {
                    result_ = result.value; complete_ = true; o.active_ = nullptr;
                    return dialogue::Progress::Finished;
                }
                if (result.finished) { result_ = result.value; phase_ = 7; }
                else phase_ = 3;
            }
            switch (phase_) {
            case 0: startup_ = o.startup_.begin(); phase_ = 1; break;
            case 1: round_ = o.rounds_.begin_commands(); phase_ = 2; break;
            case 3: round_ = o.rounds_.begin_actor(); phase_ = 4; break;
            case 7: outcome_ = o.outcomes_.begin_finish(result_); phase_ = 8; break;
            default: break;
            }
        }
        return dialogue::Progress::BudgetExhausted;
    } catch (...) { owner_.failed_ = true; throw; }
}
} // namespace eb::native::battle
