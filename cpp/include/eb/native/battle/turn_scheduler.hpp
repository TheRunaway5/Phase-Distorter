#pragma once

#include "eb/native/battle/action_state.hpp"
#include "eb/native/battle/encounter_state.hpp"
#include "eb/native/battle/target_selection.hpp"
#include <optional>

namespace eb::native::battle {
struct BattleMenuSelection {
  std::uint8_t user{}, param{};
  std::uint16_t action{};
  std::uint8_t targeting{}, target{};
  bool operator==(const BattleMenuSelection &) const = default;
};
struct TurnState {
  std::uint16_t round_number{}, initiative{}, mirror_enemy{};
  std::uint16_t mirror_turns{};
  Battler mirror_backup;
  bool flee_requested{};
  std::array<std::uint16_t, 6> selected_party_slots{};
  std::uint16_t selected_count{};
  BattleMenuSelection menu;
  std::uint8_t item_used{};
};
enum class PlayerStep { Continue, Selection, Finished, PartyDefeated };
enum class SelectionResult { Continue, RestartBattle, CancelBattle };
enum class FleeResult { None, Failed, Escaped };
enum class ActorStep { Actor, RoundComplete, PartyDefeated, EnemiesDefeated };
struct ActorSelection {
  ActorStep step{};
  std::optional<unsigned> slot;
};

// BATTLE_ROUTINE's round preparation, selection result handling, enemy/guest
// decisions, escape decision and next-actor scheduling. The caller runs actual
// CHECK_DEAD_PLAYERS before every inspect_player/next_actor, displays the real
// selection messages and runs C10FA3 between next_actor and dispatch_actor.
// Command menus and action execution remain separate, explicit native owners.
class TurnScheduler {
public:
  TurnScheduler(TurnState &, Roster &, party::State &, ActionState &,
                story::RandomState &, const ActionResources &, EncounterState &,
                TargetSelection &);
  TurnScheduler(const TurnScheduler &) = delete;
  TurnScheduler &operator=(const TurnScheduler &) = delete;
  GameVersion version() const { return roster_.version(); }
  void begin_round();
  PlayerStep inspect_player();
  unsigned player_list_index() const { return player_index_; }
  unsigned player_character() const { return player_character_; }
  // The actual menu writes TurnState.menu/item_used and returns this word.
  SelectionResult submit_player(std::uint16_t result);
  void choose_other_actions();
  FleeResult attempt_flee();
  void finish_selection();
  ActorSelection next_actor();
  // Returns false for unconscious/diamondized actors, after marking taken.
  bool dispatch_actor();
  bool uses(const TurnState &, const Roster &, const party::State &,
            const ActionState &, const story::RandomState &,
            const EncounterState &) const noexcept;
  static std::uint16_t initiative(const Battler &);

private:
  enum class Phase {
    Idle,
    Players,
    Menu,
    OtherActions,
    Flee,
    Actors,
    Complete
  };
  void publish_player(std::uint16_t action);
  void choose_action(unsigned slot);
  TurnState &state_;
  Roster &roster_;
  party::State &party_;
  ActionState &action_;
  story::RandomState &random_;
  EncounterState &encounter_;
  TargetSelection &targets_;
  Phase phase_ = Phase::Idle;
  unsigned player_index_{}, player_character_{};
  std::uint16_t choice_index_{};
  std::optional<unsigned> selected_actor_;
  bool flee_attempted_{};
};
} // namespace eb::native::battle
