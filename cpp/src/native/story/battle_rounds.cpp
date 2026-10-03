#include "eb/native/battle/rounds.hpp"
#include <stdexcept>

namespace eb::native::battle {
namespace {
void require(bool value, const char* message) { if (!value) throw std::logic_error(message); }
constexpr dialogue::WindowId battle_text{14};
}
Rounds::Rounds(Admission& admission, TurnScheduler& scheduler, DeadPlayers& dead, story::Scene& scene,
    dialogue::WindowHost& windows, party::MeterWindows& meters, story::BattleDialogue& dialogue)
    : admission_(admission), scheduler_(scheduler), dead_(dead), scene_(scene), windows_(windows),
      meters_(meters), dialogue_(dialogue) {
    require(scheduler_.uses(admission_.turns(), admission_.roster(), admission_.party(), admission_.action(),
                admission_.random(), admission_.state()) &&
                dead_.uses(admission_.roster(), admission_.party(), admission_.action()) &&
                dead_.uses(windows_, scene_, dialogue_),
            "Round scheduling requires the actual encounter, roster, party, RNG and selectors");
    require(scene_.uses(admission_.clock()) && scene_.uses(windows_, admission_.party()) && scene_.uses(dialogue_) &&
                meters_.bound_to(windows_, admission_.party()) &&
                &dialogue_.party() == &admission_.party(), "Round display has foreign scene or party owners");
    for (const auto m : {EncounterMessage::EnemiesFirst, EncounterMessage::Fled, EncounterMessage::FleeFailed})
        (void)dialogue_.resolve(admission_.resources().message(m));
}
std::unique_ptr<Rounds::Operation> Rounds::begin(bool commands) {
    require(!failed_ && !active_ && !scene_.busy() && !scene_.failed() && !dead_.failed() && !dead_.busy(),
            "Round scheduling is unavailable");
    dialogue_.validate_start();
    auto operation = std::unique_ptr<Operation>(new Operation(*this, commands));
    active_ = operation.get(); return operation;
}
std::unique_ptr<Rounds::Operation> Rounds::begin_commands() { return begin(true); }
std::unique_ptr<Rounds::Operation> Rounds::begin_actor() { return begin(false); }
Rounds::Operation::Operation(Rounds& owner, bool commands)
    : owner_(owner), phase_(commands ? 0u : 20u), commands_(commands) {}
Rounds::Operation::~Operation() {
    if (owner_.active_ == this) {
        if (!complete_) owner_.failed_ = true;
        owner_.active_ = nullptr;
    }
}
story::Scene::Operation* Rounds::Operation::scene() noexcept {
    return scene_ ? scene_.get() : dead_ ? dead_->scene() : nullptr;
}
story::PartyFormation::Operation* Rounds::Operation::party_update() noexcept {
    return dead_ ? dead_->party_update() : nullptr;
}
void Rounds::Operation::submit_menu(std::uint16_t action, BattleMenuSelection menu, std::uint8_t item) {
    require(!owner_.failed_ && owner_.active_ == this && menu_.has_value() && commands_,
            "No actual command menu result is pending");
    owner_.admission_.turns().menu = menu;
    owner_.admission_.turns().item_used = item;
    returned_action_ = action;
    menu_.reset();
    meters_ = owner_.meters_.begin_clear_selection();
    phase_ = 3;
}
void Rounds::Operation::text(EncounterMessage message) {
    dialogue_ = owner_.dialogue_.begin_text(owner_.dialogue_.resolve(owner_.admission_.resources().message(message)));
}
bool Rounds::Operation::pump(unsigned budget) {
    if (scene_) {
        if (scene_->advance(budget) != dialogue::Progress::Finished) return false;
        require(scene_->complete(), "Round scene child has not completed");
        scene_.reset();
        switch (*child_) {
        case Child::Window: window_->respond(); break;
        case Child::Meters: meters_->respond(); break;
        case Child::Dialogue: dialogue_->respond(); break;
        }
        child_.reset();
    }
    if (window_) {
        if (window_->advance() == dialogue::OutputProgress::Suspended) {
            child_ = Child::Window; scene_ = owner_.scene_.begin(*window_->effect()); return false;
        }
        window_.reset();
    }
    if (meters_) {
        if (meters_->advance() == dialogue::OutputProgress::Suspended) {
            child_ = Child::Meters; scene_ = owner_.scene_.begin(*meters_->effect()); return false;
        }
        meters_.reset();
    }
    if (dialogue_) {
        const auto result = dialogue_->advance(budget);
        if (result == dialogue::Progress::BudgetExhausted) return false;
        if (result == dialogue::Progress::Suspended) {
            child_ = Child::Dialogue; scene_ = owner_.scene_.begin(dialogue_->conversation()); return false;
        }
        dialogue_.reset();
    }
    if (dead_) {
        if (dead_->advance(budget) != dialogue::Progress::Finished) return false;
        require(dead_->complete(), "Round dead-player check has not completed");
        dead_.reset();
    }
    return true;
}
dialogue::Progress Rounds::Operation::advance(unsigned budget) {
    if (complete_) return dialogue::Progress::Finished;
    require(!owner_.failed_ && owner_.active_ == this, "Round operation is not active");
    if (menu_) return dialogue::Progress::Suspended;
    try {
        while (budget--) {
            if (!pump(budget + 1)) {
                if (auto* child = scene()) {
                    const auto result = child->advance(budget + 1);
                    if (result == dialogue::Progress::Finished) continue;
                    return result;
                }
                if (auto* update = party_update(); update && update->service()) return dialogue::Progress::Suspended;
                return dialogue::Progress::BudgetExhausted;
            }
            switch (phase_) {
            case 0: owner_.scheduler_.begin_round(); phase_ = 1; break;
            case 1:
                // UNKNOWN106 tests the list bound before visiting another
                // player. Do not add a final HP synchronization/UPDATE_PARTY.
                if (owner_.scheduler_.player_list_index() != 6) dead_ = owner_.dead_.begin();
                phase_ = 2; break;
            case 2:
                switch (owner_.scheduler_.inspect_player()) {
                case PlayerStep::Continue: phase_ = 1; break;
                case PlayerStep::Selection:
                    meters_ = owner_.meters_.begin_select(owner_.scheduler_.player_list_index());
                    phase_ = 10; break;
                case PlayerStep::Finished:
                    owner_.scheduler_.choose_other_actions();
                    window_ = owner_.windows_.begin({dialogue::WindowAction::Open, battle_text, {}, 0});
                    phase_ = 5; break;
                case PlayerStep::PartyDefeated:
                    outcome_ = CommandOutcome::PartyDefeated;
                    window_ = owner_.windows_.begin({dialogue::WindowAction::Open, battle_text, {}, 0});
                    phase_ = 9; break;
                }
                break;
            case 10:
                menu_ = CommandMenuRequest{owner_.scheduler_.player_list_index(),
                    owner_.scheduler_.player_character(), owner_.admission_.turns().selected_count};
                return dialogue::Progress::Suspended;
            case 3:
                window_ = owner_.windows_.begin({dialogue::WindowAction::CloseFocus, {}, {}, 0});
                phase_ = 4; break;
            case 4:
                switch (owner_.scheduler_.submit_player(returned_action_)) {
                case SelectionResult::Continue: phase_ = 1; break;
                case SelectionResult::RestartBattle: outcome_ = CommandOutcome::RestartBattle; phase_ = 9; break;
                case SelectionResult::CancelBattle: outcome_ = CommandOutcome::CancelBattle; phase_ = 9; break;
                }
                break;
            case 5:
                if (owner_.admission_.turns().initiative == 2) text(EncounterMessage::EnemiesFirst);
                phase_ = 6; break;
            case 6:
                switch (owner_.scheduler_.attempt_flee()) {
                case FleeResult::None: phase_ = 8; break;
                case FleeResult::Failed: text(EncounterMessage::FleeFailed); phase_ = 8; break;
                case FleeResult::Escaped:
                    text(EncounterMessage::Fled); outcome_ = CommandOutcome::Escaped; phase_ = 9; break;
                }
                break;
            case 8: owner_.scheduler_.finish_selection(); phase_ = 9; break;
            case 9: case 23:
                complete_ = true; owner_.active_ = nullptr; return dialogue::Progress::Finished;
            case 20: dead_ = owner_.dead_.begin(); phase_ = 21; break;
            case 21:
                actor_ = owner_.scheduler_.next_actor();
                if (actor_.step == ActorStep::Actor) {
                    window_ = owner_.windows_.begin({dialogue::WindowAction::ClearFocus, {}, {}, 0});
                    phase_ = 22;
                } else {
                    if (actor_.step == ActorStep::RoundComplete)
                        window_ = owner_.windows_.begin({dialogue::WindowAction::CloseFocus, {}, {}, 0});
                    phase_ = 23;
                }
                break;
            case 22: permitted_ = owner_.scheduler_.dispatch_actor(); phase_ = 23; break;
            default: throw std::logic_error("Unknown round continuation");
            }
        }
        return dialogue::Progress::BudgetExhausted;
    } catch (...) { owner_.failed_ = true; throw; }
}
CommandOutcome Rounds::Operation::command_outcome() const {
    require(complete_ && commands_, "Command scheduling has not completed"); return outcome_;
}
const ActorSelection& Rounds::Operation::actor() const {
    require(complete_ && !commands_, "Actor scheduling has not completed"); return actor_;
}
bool Rounds::Operation::action_permitted() const {
    (void)actor(); return permitted_;
}
} // namespace eb::native::battle
