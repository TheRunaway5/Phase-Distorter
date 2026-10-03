// Source: BATTLE_ROUTINE @UNKNOWN71..150 in both regional builds. Display,
// party synchronization and action execution stay with their actual callers.
#include "eb/native/battle/turn_scheduler.hpp"
#include <algorithm>
#include <set>
#include <stdexcept>
#include <tuple>

namespace eb::native::battle {
namespace {
void require(bool value, const char *message) {
  if (!value)
    throw std::invalid_argument(message);
}
void set_initiative(Battler &actor, std::uint16_t value) {
  actor.initiative = std::uint8_t(value);
  actor.unknown71 = std::uint8_t(value >> 8);
}
constexpr std::uint16_t guard = 8, steal = 66, on_guard = 103, extender = 245,
                        run_away = 279;
} // namespace
TurnScheduler::TurnScheduler(TurnState &state, Roster &roster,
                             party::State &party, ActionState &action,
                             story::RandomState &random,
                             const ActionResources &resources,
                             EncounterState &encounter,
                             TargetSelection &targets)
    : state_(state), roster_(roster), party_(party), action_(action),
      random_(random), encounter_(encounter), targets_(targets) {
  require(targets.uses(roster, party, random, resources),
          "Turn scheduler has foreign targeting owners");
}
bool TurnScheduler::uses(const TurnState &state, const Roster &roster,
                         const party::State &party, const ActionState &action,
                         const story::RandomState &random,
                         const EncounterState &encounter) const noexcept {
  return &state_ == &state && &roster_ == &roster && &party_ == &party &&
         &action_ == &action && &random_ == &random &&
         &encounter_ == &encounter;
}
std::uint16_t TurnScheduler::initiative(const Battler &actor) {
  return std::uint16_t(actor.initiative | unsigned(actor.unknown71) << 8);
}
void TurnScheduler::begin_round() {
  require(phase_ == Phase::Idle || phase_ == Phase::Complete,
          "Previous turn selection is still active");
  targets_.rebuild_rows();
  ++state_.round_number;
  for (unsigned slot = 0; slot < Roster::size; ++slot) {
    auto &actor = roster_.at(slot);
    actor.taken_turn = 0;
    if (actor.consciousness) {
      const auto value = fifty_percent_variance(random_, actor.speed);
      set_initiative(actor, value ? value : 1);
    }
  }
  for (unsigned id = 1; id <= 4; ++id)
    party_.character(id).battle_selection = 0;
  state_.selected_count = 0;
  player_index_ = player_character_ = 0;
  selected_actor_.reset();
  flee_attempted_ = false;
  phase_ = Phase::Players;
}
PlayerStep TurnScheduler::inspect_player() {
  require(phase_ == Phase::Players,
          "Turn scheduler is not visiting a party slot");
  if (player_index_ == party_.party_order.size()) {
    phase_ = Phase::OtherActions;
    return PlayerStep::Finished;
  }
  if (!targets_.count(0))
    return PlayerStep::PartyDefeated;
  player_character_ = party_.party_order[player_index_];
  choice_index_ = std::uint16_t(player_character_);
  if (!player_character_ || player_character_ > 4) {
    ++player_index_;
    return PlayerStep::Continue;
  }
  const auto &character = party_.character(player_character_);
  const bool disabled =
      state_.initiative == 2 || state_.initiative == 3 ||
      state_.initiative == 4 ||
      (player_character_ == 4 && state_.mirror_enemy) ||
      character.afflictions[0] == 1 || character.afflictions[0] == 2 ||
      character.afflictions[2] == 1 || character.afflictions[2] == 4;
  if (disabled) {
    state_.item_used = 0;
    publish_player(0);
    return PlayerStep::Continue;
  }
  phase_ = Phase::Menu;
  return PlayerStep::Selection;
}
SelectionResult TurnScheduler::submit_player(std::uint16_t result) {
  require(phase_ == Phase::Menu, "No battle menu selection is pending");
  require(state_.selected_count <= state_.selected_party_slots.size(),
          "Selected party history leaves its owner");
  if (result == 0xffff) {
    phase_ = Phase::Complete;
    return encounter_.mode ? SelectionResult::CancelBattle
                           : SelectionResult::RestartBattle;
  }
  if (result == run_away) {
    result = 1;
    state_.initiative = state_.initiative == 1 ? 4 : 3;
    state_.flee_requested = true;
  }
  phase_ = Phase::Players;
  if (!result) {
    if (state_.selected_count) {
      const auto prior = state_.selected_party_slots[state_.selected_count - 1];
      require(prior < party_.party_order.size(),
              "Backtracking leaves the owned party list");
      --state_.selected_count;
      player_index_ = prior;
    }
    return SelectionResult::Continue;
  }
  require(state_.selected_count < state_.selected_party_slots.size(),
          "Selected party history is full");
  state_.selected_party_slots[state_.selected_count++] =
      std::uint16_t(player_index_);
  publish_player(result == 1 ? 0 : result);
  return SelectionResult::Continue;
}
void TurnScheduler::publish_player(std::uint16_t selected_action) {
  for (unsigned slot = 0; slot < Roster::size; ++slot) {
    auto &actor = roster_.at(slot);
    if (!actor.consciousness || actor.side || actor.id != player_character_)
      continue;
    actor.action = selected_action;
    actor.action_item_slot = state_.item_used ? state_.menu.param : 0;
    actor.action_argument =
        state_.item_used ? state_.item_used : state_.menu.param;
    actor.targeting = state_.menu.targeting;
    actor.target = state_.menu.target;
    if (state_.menu.targeting == 1) {
      for (unsigned target = 0; target < 6; ++target) {
        const auto &candidate = roster_.at(target);
        if (candidate.consciousness && !candidate.npc &&
            candidate.id == state_.menu.target) {
          actor.target = std::uint8_t(target + 1);
          break;
        }
      }
    }
    actor.guarding = actor.action == guard;
    break;
  }
  ++player_index_;
}
void TurnScheduler::choose_action(unsigned slot) {
  auto &actor = roster_.at(slot);
  if (!((actor.consciousness && actor.side == 1) || actor.npc ||
        (actor.id == 4 && state_.mirror_enemy)))
    return;
  if (((state_.initiative == 1 || state_.initiative == 4) && actor.side == 1) ||
      (state_.initiative == 2 && actor.side == 0)) {
    actor.action = 0;
    return;
  }
  using Visit = std::tuple<std::uint16_t, std::uint16_t, std::uint8_t,
                           std::uint16_t, std::uint16_t, std::uint16_t>;
  std::set<Visit> visited;
  for (;;) {
    require(visited
                .emplace(actor.id, state_.mirror_enemy, actor.action_order,
                         choice_index_, random_.primary_word,
                         random_.secondary_word)
                .second,
            "Enemy extender repeats a nonterminating selection state");
    const bool mirror = actor.side == 0 && actor.id == 4;
    const unsigned enemy = mirror ? state_.mirror_enemy : actor.id;
    switch (roster_.resources().enemy(enemy).action_pattern) {
    case 0:
      choice_index_ = story::next_random(random_) & 3;
      break;
    case 1: {
      const auto choice = story::next_random(random_) & 7;
      choice_index_ = choice == 0 ? 3 : choice == 1 ? 2 : choice <= 3 ? 1 : 0;
      break;
    }
    case 2:
      choice_index_ = actor.action_order;
      actor.action_order = std::uint8_t((actor.action_order + 1) & 3);
      break;
    case 3:
      choice_index_ = std::uint16_t(actor.action_order * 2 +
                                    (story::next_random(random_) & 1));
      actor.action_order = std::uint8_t((actor.action_order + 1) & 1);
      break;
    default:
      break; // Source retains LOCAL08 for an unrecognized pattern.
    }
    const auto [selected_action, argument] =
        roster_.resources().action(enemy, choice_index_);
    actor.action = selected_action;
    actor.action_argument = argument;
    if (selected_action != extender)
      break;
    if (mirror)
      state_.mirror_enemy = argument;
    else
      actor.id = argument;
  }
  if (actor.action == steal) {
    actor.action_argument = targets_.select_stealable_item();
    set_initiative(actor, 0);
  }
  actor.guarding = actor.action == on_guard;
  targets_.choose(slot);
}
void TurnScheduler::choose_other_actions() {
  require(phase_ == Phase::OtherActions, "Party selection has not finished");
  for (unsigned slot = 0; slot < Roster::size; ++slot)
    choose_action(slot);
  phase_ = Phase::Flee;
}
FleeResult TurnScheduler::attempt_flee() {
  require(phase_ == Phase::Flee && !flee_attempted_,
          "Escape decision is not pending");
  flee_attempted_ = true;
  if (!state_.flee_requested)
    return FleeResult::None;
  unsigned enemy_speed{}, party_speed{};
  bool boss{};
  for (unsigned slot = 0; slot < Roster::size; ++slot) {
    const auto &actor = roster_.at(slot);
    if (!actor.consciousness || actor.npc)
      continue;
    if (actor.side != 1) {
      party_speed = std::max(party_speed, unsigned(actor.speed));
      continue;
    }
    if (roster_.resources().enemy(actor.id).boss) {
      boss = true;
      break;
    }
    const auto persistent = actor.afflictions[0],
               temporary = actor.afflictions[2];
    if (persistent == 1 || persistent == 2 || persistent == 3 ||
        temporary == 1 || temporary == 3 || temporary == 4)
      continue;
    enemy_speed = std::max(enemy_speed, unsigned(actor.speed));
  }
  bool escaped = !boss && (!enemy_speed || state_.initiative == 4);
  if (!boss && !escaped) {
    const auto threshold =
        std::uint16_t(state_.round_number * 10u + party_speed);
    if (threshold >= enemy_speed)
      escaped =
          random_limit(random_, 100) < std::uint16_t(threshold - enemy_speed);
  }
  if (escaped) {
    phase_ = Phase::Complete;
    return FleeResult::Escaped;
  }
  state_.flee_requested = false;
  return FleeResult::Failed;
}
void TurnScheduler::finish_selection() {
  require(phase_ == Phase::Flee && flee_attempted_,
          "Escape decision must precede initiative reset");
  state_.initiative = 0;
  phase_ = Phase::Actors;
}
ActorSelection TurnScheduler::next_actor() {
  require(phase_ == Phase::Actors && !selected_actor_,
          "Previous actor selection is still pending");
  if (!targets_.count(0))
    return {ActorStep::PartyDefeated, {}};
  if (!targets_.count(1))
    return {ActorStep::EnemiesDefeated, {}};
  std::uint16_t best{};
  for (unsigned slot = 0; slot < Roster::size; ++slot) {
    const auto &actor = roster_.at(slot);
    if (actor.consciousness && !actor.taken_turn && initiative(actor) >= best) {
      selected_actor_ = slot;
      best = initiative(actor);
    }
  }
  if (!selected_actor_) {
    phase_ = Phase::Complete;
    return {ActorStep::RoundComplete, {}};
  }
  return {ActorStep::Actor, selected_actor_};
}
bool TurnScheduler::dispatch_actor() {
  require(phase_ == Phase::Actors && selected_actor_.has_value(),
          "No selected actor to dispatch");
  action_.attacker = *selected_actor_;
  roster_.at(*selected_actor_).taken_turn = 1;
  selected_actor_.reset();
  const auto status = roster_.at(*action_.attacker).afflictions[0];
  return status != 1 && status != 2;
}
} // namespace eb::native::battle
