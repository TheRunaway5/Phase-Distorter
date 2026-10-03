// Source: BATTLE_ROUTINE's ordinary nonzero BATTLE_MODE startup. The original
// background/PSI debug viewer (mode0) is a different caller, not an encounter.
#include "eb/native/battle/startup.hpp"
#include "eb/native/battle/turn_scheduler.hpp"
#include <stdexcept>

namespace eb::native::battle {
namespace {
void require(bool value, const char* message) {
    if (!value) throw std::logic_error(message);
}
constexpr dialogue::WindowId battle_text{14};
}
Startup::Startup(Admission& admission, StartupGraphics& graphics,
    BackgroundLoader& background, DisplaySetup& blank, const BattleCombatants& catalog,
    BattleCombatantScene& objects, Frame& frame, PaletteBankState& colors,
    WorldDisplayFade& fade, dialogue::WindowHost& windows, party::MeterWindows& meters,
    Names& names, story::BattleDialogue& dialogue, story::Scene& scene,
    story::BattlePublication& publication, WorldEncounterMusic music, AnimationCommands* animations)
    : admission_(admission), graphics_(graphics), background_(background), blank_(blank),
      catalog_(catalog), objects_(objects), frame_(frame), colors_(colors), fade_(fade),
      windows_(windows), meters_(meters), names_(names), dialogue_(dialogue), scene_(scene),
      publication_(publication), music_(std::move(music)), animations_(animations) {
    require(bool(music_), "Encounter startup requires its real music adapter");
    require(windows_.version() == admission_.version() && frame_.version() == admission_.version() &&
                dialogue_.version() == admission_.version(), "Encounter startup regions differ");
    require(&dialogue_.party() == &admission_.party() &&
                names_.uses(admission_.roster(), admission_.party(), dialogue_.prepared(), admission_.action()),
            "Encounter startup requires the actual battle name, party and action owners");
    require(meters_.bound_to(windows_, admission_.party()) &&
                frame_.uses(admission_.clock(), windows_, admission_.party(), meters_) &&
                frame_.uses(admission_.roster()) && scene_.uses(admission_.clock()) &&
                scene_.uses(windows_, admission_.party()) && scene_.uses(dialogue_) &&
                graphics_.uses(windows_, admission_.party(), fade_) &&
                graphics_.uses(catalog_, objects_, colors_, frame_) && graphics_.uses(background_) &&
                frame_.uses(blank_) && blank_.uses(fade_, admission_.clock(), scene_),
            "Encounter startup requires the actual graphics, frame, scene and meter owners");
    require(publication_.supports_battle_frame(frame_) &&
                publication_.display_fade() == &fade_ && publication_.window_host() == &windows_,
            "Encounter publication does not borrow the startup display owners");
    windows_.bind_battle(admission_.roster(), admission_.action());
}
void Startup::validate() const {
    require(!failed_ && !graphics_.failed() && !background_.failed() && !frame_.failed() &&
                !scene_.failed() && !dialogue_.failed(), "Encounter startup owner is failed");
    admission_.validate();
}
std::unique_ptr<Startup::Operation> Startup::begin() {
    validate();
    require(!active_ && !scene_.busy() && !frame_.busy() && !blank_.pending(),
            "Encounter startup is already active");
    dialogue_.validate_start();
    (void)dialogue_.resolve(admission_.resources().enemy(admission_.encounter().roster.front()).opening);
    for (unsigned i = 0; i < 4; ++i)
        (void)dialogue_.resolve(admission_.resources().message(static_cast<EncounterMessage>(i)));
    require(scene_.publication(), "Encounter startup requires the caller's actual publication");
    auto operation = std::unique_ptr<Operation>(new Operation(*this));
    active_ = operation.get();
    return operation;
}
Startup::Operation::Operation(Startup& owner) : owner_(owner) {}
Startup::Operation::~Operation() {
    if (owner_.active_ == this) {
        if (!complete_) owner_.failed_ = true;
        owner_.active_ = nullptr;
    }
}
void Startup::Operation::text(const dialogue::ReferenceKey& reference) {
    dialogue_ = owner_.dialogue_.begin_text(owner_.dialogue_.resolve(reference));
}
bool Startup::Operation::pump_children(unsigned budget) {
    if (scene_) {
        if (scene_->advance(budget) != dialogue::Progress::Finished) return false;
        require(scene_->complete(), "Encounter scene child has not completed");
        scene_.reset();
        switch (*child_) {
        case Child::ResetBlank: case Child::RetainBlank: owner_.blank_.finish(); break;
        case Child::Window: window_->respond(); break;
        case Child::Meters: meters_->respond(); break;
        case Child::Dialogue: dialogue_->respond(); break;
        }
        child_.reset();
    }
    if (window_) {
        if (window_->advance() == dialogue::OutputProgress::Suspended) {
            require(window_->effect().has_value(), "Startup window has no actual effect");
            child_ = Child::Window; scene_ = owner_.scene_.begin(*window_->effect()); return false;
        }
        window_.reset();
    }
    if (meters_) {
        if (meters_->advance() == dialogue::OutputProgress::Suspended) {
            require(meters_->effect().has_value(), "Startup meters have no actual effect");
            child_ = Child::Meters; scene_ = owner_.scene_.begin(*meters_->effect()); return false;
        }
        meters_.reset();
    }
    if (dialogue_) {
        const auto result = dialogue_->advance(budget);
        if (result == dialogue::Progress::BudgetExhausted) return false;
        if (result == dialogue::Progress::Suspended) {
            child_ = Child::Dialogue;
            scene_ = owner_.scene_.begin(dialogue_->conversation()); return false;
        }
        dialogue_.reset();
    }
    return true;
}
dialogue::Progress Startup::Operation::advance(unsigned budget) {
    if (complete_) return dialogue::Progress::Finished;
    owner_.validate();
    require(owner_.active_ == this, "Encounter startup operation is not active");
    try {
        while (budget--) {
            if (!pump_children(budget + 1)) {
                if (scene_) {
                    const auto result = scene_->advance(budget + 1);
                    if (result == dialogue::Progress::Finished) continue;
                    return result;
                }
                return dialogue::Progress::BudgetExhausted;
            }
            auto& admission = owner_.admission_;
            switch (phase_) {
            case 0:
                admission.reset();
                background_ = owner_.background_.selection(admission.encounter().group);
                owner_.blank_.begin(DisplayBlankKind::Reset);
                child_ = Child::ResetBlank; scene_ = owner_.scene_.begin_publication();
                ++phase_; break;
            case 1: {
                owner_.graphics_.load_common(admission.clock().flavor);
                owner_.background_.load(background_, admission.encounter().group == 478
                    ? BattleArtworkPublication::GiygasPrayer : BattleArtworkPublication::Ordinary);
                owner_.graphics_.load_enemies(admission.encounter().group);
                admission.initialize_party();
                admission.initialize_enemies(owner_.graphics_.admit_enemies(admission.encounter().roster));
                Formation formation(admission.roster(), admission.encounter().group,
                    admission.action().enemy_count, owner_.catalog_, owner_.objects_.resources(), admission.random());
                formation.apply();
                if (owner_.scene_.publication() != &owner_.publication_)
                    owner_.scene_.handoff_publication(*const_cast<story::ScenePublication*>(owner_.scene_.publication()),
                        owner_.publication_, owner_.fade_, {&owner_.frame_, owner_.animations_});
                owner_.graphics_.publish_initial();
                owner_.graphics_.publish_window_palette(admission.clock().flavor,
                    admission.clock().disabled_transitions != 0);
                owner_.colors_.upload_mode = 24;
                owner_.windows_.prompt_state().battle_mode = 1;
                owner_.music_({admission.resources().enemy(admission.encounter().roster.front()).music});
                owner_.blank_.begin(DisplayBlankKind::Retain);
                child_ = Child::RetainBlank; scene_ = owner_.scene_.begin_publication();
                ++phase_; break;
            }
            case 2:
                owner_.fade_.begin_in(1, 1);
                admission.augment_party();
                meters_ = owner_.meters_.begin_show(); ++phase_; break;
            case 3:
                admission.choose_item_drop(); admission.consume_initiative();
                window_ = owner_.windows_.begin({dialogue::WindowAction::Open, battle_text, {}, 0});
                ++phase_; break;
            case 4:
                admission.action().attacker = 8; owner_.names_.fix_attacker(1);
                text(admission.resources().enemy(admission.encounter().roster.front()).opening);
                ++phase_; break;
            case 5:
                if (admission.turns().initiative == 1)
                    text(admission.resources().message(EncounterMessage::PartyFirst));
                ++phase_; break;
            case 6:
                if (!status_ && enemy_ >= admission.action().enemy_count) {
                    window_ = owner_.windows_.begin({dialogue::WindowAction::CloseFocus, {}, {}, 0});
                    ++phase_; break;
                }
                if (!status_) {
                    admission.action().target = enemy_ + 8;
                    owner_.names_.fix_target();
                }
                {
                    require(admission.action().target.has_value(), "Opening status text requires its current target");
                    const auto& b = admission.roster().at(*admission.action().target);
                    if (status_ == 0 && b.afflictions[2] == 1)
                        text(admission.resources().message(EncounterMessage::Asleep));
                    else if (status_ == 1 && b.afflictions[4])
                        text(admission.resources().message(EncounterMessage::CannotConcentrate));
                    else if (status_ == 2 && b.afflictions[3] == 1)
                        text(admission.resources().message(EncounterMessage::Strange));
                    if (++status_ == 3) { ++enemy_; status_ = 0; }
                }
                break;
            case 7:
                admission.state().special_defeat = 0;
                complete_ = true; owner_.active_ = nullptr;
                return dialogue::Progress::Finished;
            default: throw std::logic_error("Unknown startup continuation");
            }
        }
        return dialogue::Progress::BudgetExhausted;
    } catch (...) { owner_.failed_ = true; throw; }
}
} // namespace eb::native::battle
