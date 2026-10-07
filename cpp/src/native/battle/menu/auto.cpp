#include "internal.hpp"
#include <algorithm>
namespace eb::native::battle {
bool CommandMenu::Operation::Execution::knows(unsigned id, unsigned who) const {
  if (!who)
    who = character;
  if (who == 3)
    return false;
  const auto &a = owner.content->psi(id);
  const auto level = a.learned_at.at(who == 4 ? 2 : who - 1);
  return level && level <= owner.party.character(who).level;
}
bool CommandMenu::Operation::Execution::has_psi(unsigned category) const {
  const auto user = owner.turns.menu.user;
  if (user == 3)
    return false;
  for (unsigned i = 1; i < 54 && owner.content->psi(i).name; ++i)
    if (knows(i, user) && (owner.content->psi(i).usability & 2) &&
        (owner.content->psi(i).category & category))
      return true;
  return user == 4 && (category & 1) && (owner.party.party_psi & 6);
}
std::uint16_t CommandMenu::Operation::Execution::heal(unsigned group,
                                                      unsigned condition,
                                                      bool lifeup) {
  unsigned result = 0, least = 9999;
  for (auto id : owner.party.party_order) {
    if (id < 1 || id > 4)
      continue;
    const auto &c = owner.party.character(id);
    if (c.battle_selection)
      continue;
    if (lifeup) {
      if (c.afflictions[0] == 1 || c.target_hp >= c.maximum_hp / 4)
        continue;
    } else if (c.afflictions.at(group) != condition)
      continue;
    if (c.target_hp < least) {
      least = c.target_hp;
      result = id;
    }
  }
  if (result)
    owner.party.character(result).battle_selection = 1;
  return std::uint16_t(result);
}
std::optional<std::uint16_t>
CommandMenu::Operation::Execution::automatic(unsigned mode) {
  if (!owner.party.auto_fight)
    return {};
  const auto &c = owner.party.character(character);
  auto &m = owner.turns.menu;
  if (!c.afflictions[4] && c.afflictions[3] != 1 && c.afflictions[1] != 1 &&
      (character == 1 || character == 4)) {
    m.targeting = 1;
    for (unsigned ability = 26; ability >= 23; --ability) {
      m.param = std::uint8_t(ability);
      m.action = std::uint16_t(ability + 9);
      if (!knows(ability) ||
          owner.actions.action(m.action).pp_cost > c.target_pp)
        continue;
      if (ability == 26) {
        bool all = owner.targets.count(0) >= 2;
        for (auto id : owner.party.party_order)
          if (id >= 1 && id <= 4) {
            const auto &a = owner.party.character(id);
            if (a.maximum_hp / 4 <= a.target_hp)
              all = false;
          }
        if (all) {
          m.targeting = 4;
          m.user = std::uint8_t(character);
          return m.action;
        }
      } else if ((m.target = std::uint8_t(heal(0, 0, true)))) {
        m.user = std::uint8_t(character);
        return m.action;
      }
    }
    const std::array<std::vector<std::pair<unsigned, unsigned>>, 4> cases{
        {{{0, 7}, {0, 6}, {2, 1}},
         {{0, 5}, {0, 4}, {2, 2}, {3, 1}},
         {{0, 3}, {0, 2}, {0, 1}},
         {{0, 1}}}};
    for (unsigned ability = 30; ability >= 27; --ability) {
      m.param = std::uint8_t(ability);
      m.action = std::uint16_t(ability + 9);
      if (!knows(ability) ||
          owner.actions.action(m.action).pp_cost > c.target_pp)
        continue;
      for (auto [group, status] : cases[ability - 27])
        if ((m.target = std::uint8_t(heal(group, status, false)))) {
          m.user = std::uint8_t(character);
          return m.action;
        }
    }
  }
  if (mode == 2)
    return 1;
  m.user = std::uint8_t(character);
  m.param = 0;
  m.action = std::uint16_t(mode ? 5 : 4);
  m.targeting = 17;
  const auto count = std::uint16_t(owner.targets.rows().front_count +
                                   owner.targets.rows().back_count);
  // RAND_LIMIT is RAND multiplied by its exclusive bound, high product byte.
  m.target = std::uint8_t(
      (unsigned(story::next_random(owner.random)) * count >> 8) + 1);
  return m.action;
}
} // namespace eb::native::battle
