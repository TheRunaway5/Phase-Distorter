#include "internal.hpp"
#include <stdexcept>
namespace eb::native::battle {
unsigned CommandMenu::Operation::Execution::row_count(unsigned row) const {
  const auto &r = owner.targets.rows();
  return row ? r.back_count : r.front_count;
}
unsigned CommandMenu::Operation::Execution::row_slot(unsigned row,
                                                     unsigned col) const {
  const auto &r = owner.targets.rows();
  return row ? r.back.at(col) : r.front.at(col);
}
unsigned CommandMenu::Operation::Execution::row_x(unsigned row,
                                                  unsigned col) const {
  const auto &r = owner.targets.rows();
  return row ? r.back_x.at(col) : r.front_x.at(col);
}
int CommandMenu::Operation::Execution::next_column(unsigned row, unsigned x,
                                                   bool forward) const {
  const auto n = row_count(row);
  if (forward) {
    for (unsigned i = 0; i < n; ++i)
      if (row_x(row, i) > x)
        return int(i);
  } else
    for (unsigned i = n; i > 0; --i)
      if (row_x(row, i - 1) < x)
        return int(i - 1);
  // C11FD4 calls C2FAD2 for physical attacks in the back row; that complete
  // source helper returns1, so it never filters an otherwise valid position.
  return -1;
}
void CommandMenu::Operation::Execution::unflash_enemy() {
  auto &s = owner.state;
  if (s.flashing_enemy == 0xffff)
    return;
  owner.roster.at(row_slot(s.flashing_enemy_row, s.flashing_enemy)).targeted =
      0;
  owner.frame.targeting_flash = 0;
  s.flashing_enemy = 0xffff;
  owner.windows.request_redraw();
}
void CommandMenu::Operation::Execution::flash_enemy(unsigned row,
                                                    unsigned column) {
  unflash_enemy();
  owner.state.flashing_enemy = std::uint16_t(column);
  owner.state.flashing_enemy_row = std::uint16_t(row);
  owner.roster.at(row_slot(row, column)).targeted = 1;
  owner.frame.targeting_flash = 1;
  owner.windows.request_redraw();
}
void CommandMenu::Operation::Execution::unflash_row() {
  auto &s = owner.state;
  if (s.flashing_row == 0xffff)
    return;
  for (unsigned i = 0; i < row_count(s.flashing_row); ++i)
    owner.roster.at(row_slot(s.flashing_row, i)).targeted = 0;
  owner.frame.targeting_flash = 0;
  s.flashing_row = 0xffff;
  owner.windows.request_redraw();
}
void CommandMenu::Operation::Execution::flash_row(unsigned row) {
  unflash_row();
  owner.state.flashing_row = std::uint16_t(row);
  for (unsigned i = 0; i < row_count(row); ++i)
    owner.roster.at(row_slot(row, i)).targeted = 1;
  owner.frame.targeting_flash = 1;
  owner.windows.request_redraw();
}
CommandMenu::Operation::Execution::Routine
CommandMenu::Operation::Execution::target_name(unsigned row, unsigned column) {
  auto &w = owner.windows;
  w.output().policy().instant = true;
  co_await window(
      {dialogue::WindowAction::Open, dialogue::WindowId{0x31}, {}, 0});
  co_await string(owner.content->to_text(), jp() ? 8 : 3);
  if (column == 0xffff)
    co_await string(owner.content->row_text(row), jp() ? 4 : 13);
  else {
    const auto slot = row_slot(row, column);
    owner.names.fix_menu_name(slot);
    // C120D6 explicitly calls the lower-case article helper, then plain string.
    const auto *message = w.prepared_message();
    if (!message)
      throw std::logic_error("Target menu requires shared prepared names");
    if (!jp()) {
      const auto &meta = message->metadata(dialogue::PreparedName::Attacker);
      if (!meta.article && owner.text->enemy_article(meta.enemy_id))
        co_await string(owner.text->article_text(false), 4);
    }
    co_await text({dialogue::SubstitutionAction::String, 0,
                   [&w] {
                     return w.prepared_message()->name(
                         dialogue::PreparedName::Attacker);
                   },
                   255});
    position(jp() ? 19 : 17, 0);
    const auto glyph =
        owner.content->status_character(owner.roster.at(slot).afflictions);
    if (jp())
      co_await text(
          {dialogue::SubstitutionAction::Character, glyph, {}, 0xffff});
    else {
      auto op = owner.menus.begin_print(
          {dialogue::MenuPrintAction::FixedGlyph, 0, 0, glyph, 0xffff, true});
      while (op->advance() != dialogue::OutputProgress::Complete) {
        co_await effect(*op->effect());
        op->respond();
      }
    }
  }
  w.output().policy().instant = false;
  co_return 0;
}
CommandMenu::Operation::Execution::Routine
CommandMenu::Operation::Execution::enemy_target(bool whole_row,
                                                unsigned action) {
  (void)action;
  auto &w = owner.windows;
  unsigned row = row_count(0) ? 0 : 1, column = 0;
  std::uint16_t printed = 0;
  if (!whole_row && owner.frame.giygas_phase)
    row = 1;
  for (;;) {
    if (whole_row) {
      flash_row(row);
      w.output().policy().instant = false;
      co_await target_name(row, 0xffff);
    } else {
      flash_enemy(row, column);
      if (jp() || !printed)
        co_await target_name(row, column);
      // US retains a wrapping source word; JP redraws on every pass.
      ++printed;
    }
    co_await tick(story::TickKind::Window);
    for (;;) {
      co_await tick(story::TickKind::World);
      const auto pressed = w.prompt_state().pressed;
      if (whole_row) {
        if (pressed & 0x0800) {
          if (row_count(1)) {
            co_await sound(3);
            row = 1;
          }
          break;
        }
        if (pressed & 0x0400) {
          if (row_count(0)) {
            co_await sound(3);
            row = 0;
          }
          break;
        }
        if (pressed & 0x00a0) {
          unflash_row();
          co_await sound(1);
          co_await window({dialogue::WindowAction::CloseFocus, {}, {}, 0});
          co_return std::uint16_t(row + 1);
        }
        if (pressed & 0xa000) {
          unflash_row();
          co_await sound(2);
          co_await window({dialogue::WindowAction::CloseFocus, {}, {}, 0});
          co_return 0;
        }
        continue;
      }
      const auto x = row_x(row, column);
      unsigned candidate_row = row, sfx = 2;
      int candidate = -1;
      const bool switch_row =
          ((pressed & 0x0800) && row == 0 && row_count(1)) ||
          ((pressed & 0x0400) && row == 1 && row_count(0));
      if (switch_row) {
        sfx = 3;
        candidate_row = row ^ 1;
        candidate = next_column(candidate_row, std::uint16_t(x - 1), true);
        if (candidate < 0)
          candidate = next_column(candidate_row, std::uint16_t(x + 1), false);
      } else if (pressed & 0x0200) {
        candidate = next_column(row, x, false);
        if (candidate < 0) {
          candidate_row = row ^ 1;
          candidate = next_column(candidate_row, x, false);
        }
      } else if (pressed & 0x0100) {
        candidate = next_column(row, x, true);
        if (candidate < 0) {
          candidate_row = row ^ 1;
          candidate = next_column(candidate_row, x, true);
        }
      } else if (pressed & 0x00a0) {
        unflash_enemy();
        const auto result =
            std::uint16_t(row * owner.targets.rows().front_count + column + 1);
        co_await sound(1);
        co_await window({dialogue::WindowAction::CloseFocus, {}, {}, 0});
        co_return result;
      } else if (pressed & 0xa000) {
        unflash_enemy();
        co_await sound(2);
        co_await window({dialogue::WindowAction::CloseFocus, {}, {}, 0});
        co_return 0;
      } else
        continue;
      if (candidate >= 0) {
        if (!jp()) {
          printed = 0;
          w.output().policy().instant = false;
          co_await window(
              {dialogue::WindowAction::Open, dialogue::WindowId{0x31}, {}, 0});
          co_await tick(story::TickKind::Window);
          w.output().policy().instant = true;
        }
        column = unsigned(candidate);
        row = candidate_row;
        co_await sound(sfx);
      }
      break;
    }
  }
}
CommandMenu::Operation::Execution::Routine
CommandMenu::Operation::Execution::ally_target(unsigned user) {
  auto &w = owner.windows;
  if (owner.party.controlled_count == 1)
    co_return std::uint16_t(user);
  ambient();
  w.save_text_context();
  w.output().policy().instant = true;
  co_await window(
      {dialogue::WindowAction::Open, dialogue::WindowId{0x28}, {}, 0});
  co_await string(owner.content->ally_prompt(), jp() ? 4 : 10);
  w.output().policy().instant = false;
  ambient();
  w.restore_text_context();
  ambient();
  w.save_text_context();
  const auto n = owner.party.controlled_count;
  if (n > 4 || !n)
    throw std::out_of_range(
        "Character target menu has invalid controlled count");
  const dialogue::WindowId id{std::uint16_t(n == 1 ? 0x33 : 0x28 + n - 1)};
  co_await window({dialogue::WindowAction::Open, id, {}, 0});
  for (unsigned i = 0; i < n; ++i) {
    const auto c = owner.party.party_order.at(i);
    auto name = owner.party.name_field(c);
    owner.model.append_value(name, {}, c, std::uint16_t(i * 6), 0, false);
  }
  co_await print();
  const auto result = co_await select();
  co_await window({dialogue::WindowAction::Close, id, {}, 0});
  ambient();
  w.restore_text_context();
  co_await window(
      {dialogue::WindowAction::Close, dialogue::WindowId{0x28}, {}, 0});
  co_return result;
}
CommandMenu::Operation::Execution::Routine
CommandMenu::Operation::Execution::target(unsigned action, unsigned user) {
  const auto a = owner.actions.action(action);
  std::uint16_t kind = 0, target_value = 255;
  if (a.direction == 0) {
    kind = 16;
    if (a.target == 0) {
      kind |= 1;
      target_value = std::uint16_t(user);
    } else if (a.target == 1) {
      kind |= 1;
      target_value = co_await enemy_target(false, action);
    } else if (a.target == 2) {
      kind |= 1;
      const auto n = owner.targets.count(1);
      const auto random = story::next_random(owner.random);
      target_value = std::uint8_t((n ? random % n : random) + 1);
    } else if (a.target == 3) {
      kind |= 2;
      target_value = co_await enemy_target(true, action);
    } else
      kind |= 4;
  } else if (a.direction == 1) {
    if (a.target == 0) {
      kind = 1;
      target_value = std::uint16_t(user);
    } else if (a.target == 1) {
      kind = 1;
      target_value = co_await ally_target(user);
    } else if (a.target == 2) {
      kind = 1;
      const auto n = owner.targets.count(0);
      const auto random = story::next_random(owner.random);
      // LDA8_STRUCT_MEMBER indexes GAME_STATE.unknown96 with RAND_MOD's
      // returned accumulator. Reading neighboring state is outside this owner.
      target_value = owner.party.display_order.at(n ? random % n : random);
    } else
      kind = 4;
  }
  co_return std::uint16_t(kind << 8 | target_value);
}
} // namespace eb::native::battle
