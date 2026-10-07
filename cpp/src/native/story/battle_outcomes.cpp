// Original BATTLE_ROUTINE @UNKNOWN225..244. Child operations execute against
// the existing native owners; no dialogue/window/frame result is synthesized.
#include "eb/native/battle/outcomes.hpp"
#include <stdexcept>
#include <algorithm>

namespace eb::native::battle {
namespace {
void require(bool value, const char* message) { if (!value) throw std::logic_error(message); }
std::uint32_t share_experience(std::uint32_t value, unsigned count) {
    value += std::uint16_t(count - 1);
    const bool negative = (value & 0x80000000u) != 0;
    const auto magnitude = negative ? std::uint32_t(0u - value) : value;
    const auto quotient = count ? magnitude / count : 0xffffffffu;
    return negative ? std::uint32_t(0u - quotient) : quotient;
}
}
Outcomes::Outcomes(std::shared_ptr<const OutcomeResources> resources, Roster& roster,
    party::State& party, WorldEncounterState& encounter, EncounterState& state, TurnState& turns,
    BattleBackgroundScene& background, story::TickState& clock, dialogue::WindowHost& windows,
    party::MeterWindows& meters, story::BattleDialogue& dialogue, story::GrowthDialogue& growth,
    DeadPlayers& dead, story::Scene& scene, Frame& frame, DisplaySetup& blank,
    WorldDisplayFade& fade, WorldEncounterMusic music)
    : resources_(std::move(resources)), roster_(roster), party_(party), encounter_(encounter),
      state_(state), turns_(turns), background_(background), clock_(clock), windows_(windows),
      meters_(meters), dialogue_(dialogue), growth_(growth), dead_(dead), scene_(scene), frame_(frame),
      blank_(blank), fade_(fade), music_(std::move(music)) {
    require(resources_ && resources_->version() == party.version() && party.version() == roster.version(),
            "Outcome owners require matching regions");
    require(bool(music_) && &dialogue.party() == &party && growth.uses(party) && meters.bound_to(windows, party) &&
            dead.uses(windows, scene, dialogue) && scene.uses(windows, party) && scene.uses(dialogue) &&
            scene.uses(clock) && frame.uses(clock, windows, party, meters) && frame.uses(roster) &&
            frame.uses(blank) && blank.uses(fade, clock, scene),
            "Outcomes require actual shared party, scene, meter and display owners");
    for (unsigned i = 0; i < 5; ++i) (void)dialogue.resolve(resources_->message(OutcomeMessage(i)));
}
bool Outcomes::uses(const Roster& roster, const party::State& party, const WorldEncounterState& encounter,
    const EncounterState& state, const TurnState& turns, const story::Scene& scene,
    const dialogue::WindowHost& windows) const noexcept {
    return &roster == &roster_ && &party == &party_ && &encounter == &encounter_ && &state == &state_ &&
           &turns == &turns_ && &scene == &scene_ && &windows == &windows_;
}
void Outcomes::validate() const {
    require(!failed_ && !scene_.failed() && !frame_.failed() && !dialogue_.failed() &&
            !growth_.failed() && !dead_.failed(), "Outcome dependency has failed");
}
unsigned Outcomes::count(unsigned side) const {
    unsigned count = 0;
    for (unsigned i = 0; i < Roster::size; ++i) {
        const auto& b = roster_.at(i);
        if (b.consciousness && b.side == side && !b.npc && b.afflictions[0] != 1 && b.afflictions[0] != 2) ++count;
    }
    return count;
}
std::unique_ptr<Outcomes::Operation> Outcomes::begin(OutcomeRoute route, bool finish, std::uint16_t result) {
    validate();
    require(!active_ && !scene_.busy() && !frame_.busy() && !blank_.pending() &&
            !growth_.busy() && !dead_.busy(), "Outcome child owner is already active");
    require(state_.mode != 0, "Battle debug viewer does not enter ordinary outcome teardown");
    dialogue_.validate_start();
    auto operation = std::unique_ptr<Operation>(new Operation(*this, route, finish, result));
    active_ = operation.get(); return operation;
}
std::unique_ptr<Outcomes::Operation> Outcomes::begin_check(OutcomeRoute route) { return begin(route, false, 0); }
std::unique_ptr<Outcomes::Operation> Outcomes::begin_finish(std::uint16_t result) {
    return begin(OutcomeRoute::NormalCheck, true, result);
}
void Outcomes::bind_instant_victory(InstantVictoryContext& context) {
    require(!active_ && !failed_ && (!instant_ || instant_ == &context), "Instant victory is already bound or active");
    require(context.resources.version() == party_.version() && bool(context.restore_sector_music) &&
            growth_.uses(party_, context.random) &&
            &context.interactions.windows() == &windows_, "Instant victory requires its actual world owners");
    instant_ = &context;
}
std::unique_ptr<Outcomes::Operation> Outcomes::begin_instant_victory() {
    require(instant_, "Instant victory has no world bindings");
    require(scene_.publication() && scene_.publication()->uses_palette_transport(instant_->colors),
            "Instant victory requires its actual raw palette publication owner");
    require(!encounter_.roster.empty() && encounter_.roster.size() <= 16,
            "Instant victory requires the actual collected enemy list");
    for (const auto id : encounter_.roster) {
        (void)roster_.resources().enemy(id); (void)instant_->resources.enemy(id);
    }
    auto operation = begin(OutcomeRoute::NormalCheck, false, 0);
    operation->instant_ = true; return operation;
}
Outcomes::Operation::Operation(Outcomes& owner, OutcomeRoute route, bool finish, std::uint16_t result)
    : owner_(owner), route_(route), finish_(finish), result_{finish, result} {}
Outcomes::Operation::~Operation() {
    if (owner_.active_ == this) {
        if (!complete_) owner_.failed_ = true;
        owner_.active_ = nullptr;
    }
}
story::Scene::Operation* Outcomes::Operation::scene() noexcept {
    return scene_ ? scene_.get() : dead_ ? dead_->scene() : nullptr;
}
story::PartyFormation::Operation* Outcomes::Operation::party_update() noexcept {
    return dead_ ? dead_->party_update() : nullptr;
}
OutcomeResult Outcomes::Operation::result() const {
    require(complete_, "Outcome result is not available before completion"); return result_;
}
void Outcomes::Operation::text(OutcomeMessage message, std::optional<std::uint32_t> number) {
    const auto location = owner_.dialogue_.resolve(owner_.resources_->message(message));
    text_ = number ? owner_.dialogue_.begin_number(location, *number) : owner_.dialogue_.begin_text(location);
}
bool Outcomes::Operation::pump(unsigned budget) {
    if (scene_) {
        if (scene_->advance(budget) != dialogue::Progress::Finished) return false;
        require(scene_->complete(), "Outcome scene child is unfinished"); scene_.reset();
        switch (*child_) {
        case Child::Tick: break;
        case Child::Window: window_->respond(); break;
        case Child::Meters: meters_->respond(); break;
        case Child::Dialogue: text_->respond(); break;
        case Child::Growth: growth_->respond(); break;
        case Child::Blank: owner_.blank_.finish(); break;
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
    if (text_) {
        const auto progress = text_->advance(budget);
        if (progress == dialogue::Progress::BudgetExhausted) return false;
        if (progress == dialogue::Progress::Suspended) {
            child_ = Child::Dialogue; scene_ = owner_.scene_.begin(text_->conversation()); return false;
        }
        text_.reset();
    }
    if (growth_) {
        const auto progress = growth_->advance(budget);
        if (progress == dialogue::Progress::BudgetExhausted) return false;
        if (progress == dialogue::Progress::Suspended) {
            if (growth_->service() == story::GrowthDialogueService::LevelUpMusic) {
                owner_.music_({6}); growth_->respond();
            } else { child_ = Child::Growth; scene_ = owner_.scene_.begin(growth_->conversation()); }
            return false;
        }
        growth_.reset();
    }
    if (dead_) {
        if (dead_->advance(budget) != dialogue::Progress::Finished) return false;
        require(dead_->complete(), "Outcome dead-player child is unfinished"); dead_.reset();
    }
    return true;
}
dialogue::Progress Outcomes::Operation::advance(unsigned budget) {
    if (complete_) return dialogue::Progress::Finished;
    owner_.validate(); require(owner_.active_ == this, "Outcome operation is not active");
    try {
        while (budget--) {
            if (!pump(budget + 1)) {
                if (auto* child = scene()) {
                    const auto progress = child->advance(budget + 1);
                    if (progress == dialogue::Progress::Finished) continue;
                    return progress;
                }
                if (party_update() && party_update()->service()) return dialogue::Progress::Suspended;
                return dialogue::Progress::BudgetExhausted;
            }
            auto& o = owner_;
            if (instant_) {
                auto& world = *o.instant_;
                switch (phase_) {
                case 0:
                    o.encounter_.initiative = WorldBattleInitiative::Normal;
                    o.music_({183});
                    world.swirl.update_in = 0;
                    world.frames.disable_swirl(world.swirl.hdma_channel_offset);
                    world.visual.fixed_color = {};
                    world.visual.window_layers.fill(false); world.visual.window_invert = false;
                    ++phase_; break;
                case 1: {
                    constexpr std::array<std::uint16_t,7> colors{0x03e0,0x001f,0x7c00,0x03e0,0x001f,0x7c00,0};
                    for (unsigned bank = 0; bank < 16; ++bank) world.colors.staged_palette(bank).fill(colors[slot_]);
                    world.colors.upload_mode = 24;
                    child_ = Child::Tick; scene_ = o.scene_.begin(story::TickKind::Frame);
                    if (++slot_ == colors.size()) { slot_ = 0; ++phase_; }
                    break;
                }
                case 2:
                    // MEMCPY24 copies backwards; these disjoint ranges retain
                    // all bytes outside the exact512-byte destination.
                    std::copy_n(world.scratch.bytes.begin() + 0x2000, 0x200, world.scratch.bytes.begin());
                    prepare_palette_transition(world.scratch, world.colors, 6, 0xffff);
                    ++phase_; break;
                case 3:
                    advance_palette_transition(world.scratch, world.colors);
                    child_ = Child::Tick; scene_ = o.scene_.begin(story::TickKind::Frame);
                    if (++slot_ == 6) { slot_ = 0; ++phase_; }
                    break;
                case 4:
                    finish_palette_transition(world.scratch, world.colors);
                    world.interactions.set_actors_paused(true);
                    window_ = o.windows_.begin({dialogue::WindowAction::Open, dialogue::WindowId{14}, {}, 0});
                    ++phase_; break;
                case 5:
                    o.state_.money_gained = 0;
                    for (const auto id : o.encounter_.roster)
                        o.state_.money_gained = std::uint16_t(o.state_.money_gained + o.roster_.resources().enemy(id).money);
                    o.party_.battle_money_deposited += deposit_into_atm(o.party_, o.state_.money_gained);
                    o.roster_.clear_records();
                    for (unsigned i = 0; i < o.party_.party_order.size(); ++i) {
                        const auto id = o.party_.party_order[i];
                        if (id >= 1 && id <= 4) o.roster_.initialize_player(i, o.party_, id);
                    }
                    o.state_.experience_gained = 0;
                    for (const auto id : o.encounter_.roster) o.state_.experience_gained += o.roster_.resources().enemy(id).experience;
                    o.state_.experience_gained = share_experience(o.state_.experience_gained, o.count(0));
                    text(OutcomeMessage::InstantVictory, o.state_.experience_gained);
                    ++phase_; break;
                case 6:
                    if (slot_ == Roster::size) { ++phase_; break; }
                    {
                        const auto& b = o.roster_.at(slot_++);
                        if (b.consciousness && !b.side && !b.npc && b.afflictions[0] != 1 && b.afflictions[0] != 2)
                            growth_ = o.growth_.begin_experience(b.id, o.state_.experience_gained);
                    }
                    break;
                case 7: {
                    const auto index = random_limit(world.random, std::uint16_t(o.encounter_.roster.size()));
                    const auto& e = world.resources.enemy(o.encounter_.roster.at(index));
                    o.state_.item_dropped = e.item;
                    if (e.drop_rate < 7 && (story::next_random(world.random) & (0x7fu >> e.drop_rate))) o.state_.item_dropped = 0;
                    if (o.state_.item_dropped) {
                        o.dialogue_.prepared().set_item(std::uint8_t(o.state_.item_dropped)); text(OutcomeMessage::Present);
                    }
                    ++phase_; break;
                }
                case 8:
                    window_ = o.windows_.begin({dialogue::WindowAction::CloseAll, {}, {}, 0}); ++phase_; break;
                case 9:
                    child_ = Child::Tick; scene_ = o.scene_.begin(story::TickKind::Window); ++phase_; break;
                case 10:
                    meters_ = o.meters_.begin_hide(o.windows_.prompt_state().battle_mode != 0); ++phase_; break;
                case 11:
                    child_ = Child::Tick; scene_ = o.scene_.begin(story::TickKind::Window); ++phase_; break;
                case 12:
                    if (world.interactions.state().walking_style == 3) o.music_({82});
                    else world.restore_sector_music();
                    world.interactions.set_actors_paused(false);
                    result_ = {true, 0}; complete_ = true; o.active_ = nullptr;
                    return dialogue::Progress::Finished;
                default: throw std::logic_error("Invalid instant-victory continuation");
                }
            } else if (!finish_) {
                switch (phase_) {
                case 0:
                    if (route_ == OutcomeRoute::DirectWin || route_ == OutcomeRoute::DirectEscape) {
                        result_ = {true, std::uint16_t(route_ == OutcomeRoute::DirectEscape ? 2 : 0)};
                        phase_ = 7; break;
                    }
                    if (route_ == OutcomeRoute::ForcedVictory) { phase_ = 2; break; }
                    if (!o.count(0)) {
                        result_ = {true, 1}; reset_rolling(o.party_, o.clock_); text(OutcomeMessage::Defeat);
                    }
                    phase_ = 1; break;
                case 1:
                    phase_ = o.count(1) == 0 ? 2 : 6; break;
                case 2:
                    result_ = {true, 0}; reset_rolling(o.party_, o.clock_);
                    o.background_.open_letterbox(); o.background_.darken();
                    o.party_.battle_money_deposited += deposit_into_atm(o.party_, o.state_.money_gained);
                    o.state_.experience_gained = share_experience(o.state_.experience_gained, o.count(0));
                    text(o.encounter_.group >= 0x1c0 ? OutcomeMessage::BossVictory : OutcomeMessage::Victory,
                         o.state_.experience_gained);
                    ++phase_; break;
                case 3:
                    if (o.state_.item_dropped) {
                        o.dialogue_.prepared().set_item(std::uint8_t(o.state_.item_dropped)); text(OutcomeMessage::Present);
                    }
                    ++phase_; break;
                case 4:
                    if (slot_ == Roster::size) { phase_ = 6; break; }
                    {
                        const auto& b = o.roster_.at(slot_++);
                        if (b.consciousness && !b.side && !b.npc && b.afflictions[0] != 1 && b.afflictions[0] != 2)
                            growth_ = o.growth_.begin_experience(b.id, o.state_.experience_gained);
                    }
                    break;
                case 6:
                    if (result_.finished)
                        window_ = o.windows_.begin({dialogue::WindowAction::CloseFocus, {}, {}, 0});
                    phase_ = 7; break;
                case 7:
                    complete_ = true; o.active_ = nullptr; return dialogue::Progress::Finished;
                default: throw std::logic_error("Invalid outcome continuation");
                }
            } else {
                switch (phase_) {
                case 0:
                    reset_rolling(o.party_, o.clock_); ++phase_; break;
                case 1:
                    child_ = Child::Tick; scene_ = o.scene_.begin(story::TickKind::Window); ++phase_; break;
                case 2:
                    if (!meters_settled(o.party_, o.clock_)) { phase_ = 1; break; }
                    phase_ = 3; break;
                case 3:
                    if (o.turns_.mirror_enemy) {
                        for (unsigned i = 0; i < Roster::size; ++i) {
                            auto& b = o.roster_.at(i);
                            if (b.consciousness && !b.side && b.id == 4) {
                                const auto status = b.afflictions[0]; o.turns_.mirror_enemy = 0;
                                o.roster_.mirror(i, o.turns_.mirror_backup); b.afflictions[0] = status;
                                dead_ = o.dead_.begin(); break;
                            }
                        }
                    }
                    ++phase_; break;
                case 4:
                    reset_post_battle_stats(o.roster_, o.party_); o.party_.auto_fight = 0;
                    o.windows_.prompt_state().battle_mode = 0;
                    o.fade_.begin_out(1, 1); ++phase_; break;
                case 5:
                    if (o.fade_.active()) {
                        child_ = Child::Tick; scene_ = o.scene_.begin_battle_frame();
                    } else ++phase_;
                    break;
                case 6:
                    o.windows_.clear_auto_fight_indicator(); o.blank_.begin(DisplayBlankKind::Reset);
                    child_ = Child::Blank; scene_ = o.scene_.begin_publication(); ++phase_; break;
                case 7:
                    window_ = o.windows_.begin({dialogue::WindowAction::CloseAll, {}, {}, 0}); ++phase_; break;
                case 8:
                    child_ = Child::Tick; scene_ = o.scene_.begin(story::TickKind::Window); ++phase_; break;
                case 9:
                    meters_ = o.meters_.begin_hide(false); ++phase_; break;
                case 10:
                    child_ = Child::Tick; scene_ = o.scene_.begin(story::TickKind::Window); ++phase_; break;
                case 11:
                    o.frame_.reset_graphics(); complete_ = true; o.active_ = nullptr;
                    return dialogue::Progress::Finished;
                default: throw std::logic_error("Invalid outcome teardown continuation");
                }
            }
        }
        return dialogue::Progress::BudgetExhausted;
    } catch (...) { owner_.failed_ = true; throw; }
}
} // namespace eb::native::battle
