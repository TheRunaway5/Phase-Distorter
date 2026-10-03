// Source: BATTLE_ROUTINE's reset, player/NPC/enemy initialization,
// Buzz Buzz/possession, item-drop/consolation and initiative prefixes.
#include "eb/native/battle/admission.hpp"
#include "eb/native/battle/turn_scheduler.hpp"
#include <stdexcept>

namespace eb::native::battle {
Admission::Admission(std::shared_ptr<const EncounterResources> resources, Roster& roster,
    party::State& party, const WorldPartyState& formation, WorldEncounterState& encounter,
    dialogue::State& dialogue, ActionState& action, EncounterState& state, FrameState& frame,
    TurnState& turns, story::RandomState& random, story::TickState& clock)
    : resources_(std::move(resources)), roster_(roster), party_(party), formation_(formation),
      encounter_(encounter), dialogue_(dialogue), action_(action), state_(state), frame_(frame),
      turns_(turns), random_(random), clock_(clock) {
    if (!resources_ || resources_->version() != roster_.version() || party_.version() != roster_.version())
        throw std::invalid_argument("Encounter owners must share their regional resources");
}
bool Admission::uses(const Roster& roster, const party::State& party,
    const ActionState& action, const FrameState& frame) const noexcept {
    return &roster == &roster_ && &party == &party_ && &action == &action_ && &frame == &frame_;
}
void Admission::validate() const {
    if (!state_.mode) throw std::invalid_argument("An encounter requires the caller's real battle mode");
    if (encounter_.group >= 484 || encounter_.roster.empty() || encounter_.roster.size() > 24)
        throw std::invalid_argument("Encounter group or collected roster is outside the battle domain");
    for (const auto id : encounter_.roster) (void)resources_->enemy(id);
    unsigned guests{};
    for (const auto id : party_.party_order) {
        if (id >= 5) { (void)resources_->npc(id); ++guests; }
    }
    if (guests > 2) throw std::invalid_argument("The source has exactly two guest HP fields");
    if (!party_.controlled_count || party_.controlled_count > party_.controlled_order.size())
        throw std::invalid_argument("Battle requires a valid controlled party list");
    if (party_.controlled_order[party_.controlled_count - 1] >= party::State::character_count)
        throw std::invalid_argument("The last controlled party record is absent");
    if (clock_.flavor < 1 || clock_.flavor > 5)
        throw std::invalid_argument("Encounter text flavor is outside the imported window themes");
    (void)dialogue_.flag(18);
}
void Admission::reset() {
    validate();
    frame_.giygas_phase = encounter_.group == 475 ? 1 : 0;
    turns_.mirror_enemy = 0;
    turns_.item_used = 0;
    turns_.round_number = 0;
    turns_.flee_requested = false;
    state_.money_gained = 0;
    state_.experience_gained = 0;
}
void Admission::initialize_party() {
    validate();
    roster_.clear();
    unsigned guest{};
    for (unsigned slot = 0; slot < party_.party_order.size(); ++slot) {
        const auto id = party_.party_order[slot];
        if (id >= 1 && id <= 4) roster_.initialize_player(slot, party_, id);
        else if (id >= 5) {
            roster_.initialize_enemy(slot, resources_->npc(id).enemy);
            auto& b = roster_.at(slot);
            b.side = 0; b.npc = id; b.row = std::uint8_t(guest);
            b.hp = b.target_hp = guest == 0 ? formation_.first_guest.hp : formation_.second_guest.hp;
            b.pp = b.target_pp = 0;
            ++guest;
        }
    }
}
void Admission::initialize_enemies(unsigned count) {
    if (count > encounter_.roster.size() || count > 24)
        throw std::invalid_argument("Admitted enemy count exceeds the actual collected IDs");
    action_.enemy_count = std::uint16_t(count);
    for (unsigned i = 0; i < count; ++i) roster_.initialize_enemy(i + 8, encounter_.roster[i]);
}
void Admission::augment_party() {
    if (dialogue_.flag(18)) {
        roster_.initialize_enemy(6, 215);
        auto& buzz = roster_.at(6); buzz.row = 1; buzz.side = 0; buzz.npc = 215;
    }
    // A possessed player overwrites the same slot6, even when Buzz Buzz was
    // just installed. The ghost retains the initializer's enemy side.
    for (const auto id : party_.party_order) {
        if (id >= 1 && id <= 4 && party_.character(id).afflictions[1] == 2) {
            roster_.initialize_enemy(6, 213); roster_.at(6).npc = 213; break;
        }
    }
}
void Admission::choose_item_drop() {
    const unsigned selected = (unsigned(story::next_random(random_)) * action_.enemy_count) >> 8;
    const auto& enemy = resources_->enemy(encounter_.roster.at(selected));
    state_.item_dropped = enemy.item;
    if (enemy.drop_rate < 7) {
        const unsigned mask = (1u << (7 - enemy.drop_rate)) - 1;
        if (story::next_random(random_) & mask) state_.item_dropped = 0;
    }
    if (state_.item_dropped) return;
    for (const auto& row : resources_->consolation()) {
        for (unsigned slot = 8; slot < Roster::size; ++slot) {
            const auto& b = roster_.at(slot);
            if (b.consciousness && b.id == row.enemy) {
                const unsigned index = (unsigned(story::next_random(random_)) * 7) >> 8;
                // No early exit: subsequent matching records/rows overwrite.
                state_.item_dropped = row.items[index];
            }
        }
    }
}
void Admission::consume_initiative() {
    switch (encounter_.initiative) {
    case WorldBattleInitiative::PartyFirst: turns_.initiative = 1; break;
    case WorldBattleInitiative::EnemiesFirst: turns_.initiative = 2; break;
    default: turns_.initiative = 0; break;
    }
    encounter_.initiative = WorldBattleInitiative::Normal;
}
} // namespace eb::native::battle
