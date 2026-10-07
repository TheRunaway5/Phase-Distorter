#include "internal.hpp"
namespace eb::native::battle {
CommandMenu::Operation::Execution::Routine
CommandMenu::Operation::Execution::psi_list(
    unsigned category, dialogue::MenuHost::Operation *parent) {
  auto &o = owner;
  auto &w = o.windows;
  auto &output = w.output();
  const auto list_character =
      o.party.party_order.at(o.state.current_party_slot);
  if (jp())
    output.policy().instant = true;
  co_await window({dialogue::WindowAction::Open, dialogue::WindowId{1}, {}, 0},
                  parent);
  if (!jp()) {
    output.policy().instant = false;
    co_await tick(story::TickKind::Window);
    output.policy().instant = true;
  }
  output.policy().instant = true;
  co_await window({dialogue::WindowAction::ResetMenu, w.state().focus, {}, 0},
                  parent);
  const unsigned mask = 1u << (category - 1);
  unsigned last_name = 0;
  auto print_name = [&](unsigned name) {
    dialogue::TextReader reader = name == 1 ? dialogue::TextReader([&o] {
      return o.party.name_field(party::NameField::FavouriteThing);
    })
                                            : dialogue::TextReader([&o, name] {
                                                return o.text->psi_name(name);
                                              });
    return text({jp() ? dialogue::SubstitutionAction::String
                      : dialogue::SubstitutionAction::WrappedString,
                 0, reader, 0xffff},
                parent);
  };
  if (list_character == 4 && (mask & 1)) {
    if (o.party.party_psi & 2) {
      const auto &a = o.content->psi(21);
      position(0, a.y);
      co_await print_name(a.name);
      o.model.append_value(o.text->psi_suffix(a.level), {}, 21, a.x, a.y,
                           false);
    }
    if (o.party.party_psi & 4) {
      const auto &a = o.content->psi(22);
      o.model.append_value(o.text->psi_suffix(a.level), {}, 22, a.x, a.y,
                           false);
    }
  }
  for (unsigned i = 1; i < 54 && o.content->psi(i).name; ++i) {
    const auto &a = o.content->psi(i);
    if (!knows(i, list_character) || !(a.usability & 2) || !(a.category & mask))
      continue;
    if (a.name != last_name) {
      position(0, a.y);
      co_await print_name(a.name);
      last_name = a.name;
    }
    o.model.append_value(o.text->psi_suffix(a.level), {}, std::uint16_t(i), a.x,
                         a.y, false);
  }
  co_await print(parent);
  output.policy().instant = false;
  co_return 0;
}
CommandMenu::Operation::Execution::Routine
CommandMenu::Operation::Execution::psi_detail(
    unsigned ability, dialogue::MenuHost::Operation *parent) {
  auto &o = owner;
  auto &w = o.windows;
  auto &output = w.output();
  if (jp())
    output.policy().instant = true;
  co_await window({dialogue::WindowAction::Open, dialogue::WindowId{4}, {}, 0},
                  parent);
  if (!jp()) {
    output.policy().instant = false;
    co_await tick(story::TickKind::Window);
    output.policy().instant = true;
    w.state().word_wrap = false;
  }
  const auto &psi = o.content->psi(ability);
  const auto action = o.actions.action(psi.action);
  const auto target_index =
      psi.name == 4 ? 0 : action.direction * 5 + action.target;
  co_await string(o.content->target(target_index), jp() ? 9 : 20, parent);
  if (!jp())
    w.state().word_wrap = true;
  position(0, 1);
  co_await string(o.content->pp_text(), jp() ? 0xffff : 8, parent);
  if (jp())
    w.metadata(*w.state().focus).number_padding = 1;
  else {
    co_await text({dialogue::SubstitutionAction::Character, 0x50, {}, 0xffff},
                  parent);
    w.metadata(*w.state().focus).number_padding = 129;
    position(5, 1);
  }
  co_await text(
      {dialogue::SubstitutionAction::Number, action.pp_cost, {}, 0xffff},
      parent);
  output.policy().instant = false;
  co_return 0;
}
CommandMenu::Operation::Execution::Routine
CommandMenu::Operation::Execution::psi() {
  auto &o = owner;
  auto &w = o.windows;
  auto &output = w.output();
  auto &m = o.turns.menu;
  for (;;) {
    co_await window(
        {dialogue::WindowAction::Open, dialogue::WindowId{0x10}, {}, 0});
    for (unsigned i = 0; i < 3; ++i) {
      const auto slot = o.model.append(o.content->category(i));
      w.menu_options()[slot].flags = 2;
      w.menu_options()[slot].userdata = std::uint16_t(i + 1);
    }
    o.model.prepare_selection(1, false, 0, o.menu_resources->next_page_label());
    co_await print();
    bool printed = false;
    bool rebuild = false;
    for (;;) {
      co_await window(
          {dialogue::WindowAction::Focus, dialogue::WindowId{0x10}, {}, 0});
      if (jp() || !printed) {
        co_await print();
        printed = true;
      }
      const auto category = co_await select(1);
      if (!category) {
        co_await window(
            {dialogue::WindowAction::Close, dialogue::WindowId{1}, {}, 0});
        co_await window(
            {dialogue::WindowAction::Close, dialogue::WindowId{0x10}, {}, 0});
        co_return 0;
      }
      if (!has_psi(1u << (category - 1)))
        continue;
      for (;;) {
        co_await window(
            {dialogue::WindowAction::Open, dialogue::WindowId{1}, {}, 0});
        co_await psi_list(category);
        const auto ability = co_await select(2);
        if (!ability) {
          co_await window(
              {dialogue::WindowAction::Close, dialogue::WindowId{4}, {}, 0});
          break;
        }
        const auto a = o.content->psi(ability);
        const auto action = o.actions.action(a.action);
        if (jp()) {
          output.policy().instant = true;
          const auto y = output.window(*w.state().focus).cursor.line;
          position(0, y);
          palette(6);
          dialogue::TextReader reader =
              a.name == 1 ? dialogue::TextReader([&o] {
                return o.party.name_field(party::NameField::FavouriteThing);
              })
                          : dialogue::TextReader(
                                [&o, a] { return o.text->psi_name(a.name); });
          co_await text(
              {dialogue::SubstitutionAction::String, 0, reader, 0xffff});
          palette(0);
          output.policy().instant = false;
        }
        if (action.pp_cost > o.party.character(m.user).target_pp) {
          co_await window(
              {dialogue::WindowAction::Open, dialogue::WindowId{0x0e}, {}, 0});
          output.policy().prompt_mode = 2;
          co_await authored(o.content->cannot_use_psi());
          output.policy().prompt_mode = 0;
          co_await window({dialogue::WindowAction::CloseFocus, {}, {}, 0});
          continue;
        }
        if ((action.target == 1 || action.target == 3) &&
            action.direction == 0) {
          for (unsigned id : {0x10u, 4u, 1u})
            co_await window({dialogue::WindowAction::Close,
                             dialogue::WindowId{std::uint16_t(id)},
                             {},
                             0});
          co_await window(
              {dialogue::WindowAction::Open, dialogue::WindowId{0x26}, {}, 0});
          output.policy().instant = true;
          palette(6);
          co_await text(
              {dialogue::SubstitutionAction::PsiName, ability, {}, 0xffff});
          palette(0);
        }
        const auto chosen = co_await target(a.action, m.user);
        if (action.direction == 0)
          co_await window(
              {dialogue::WindowAction::Close, dialogue::WindowId{0x26}, {}, 0});
        else
          for (unsigned id : {0x10u, 4u, 1u})
            co_await window({dialogue::WindowAction::Close,
                             dialogue::WindowId{std::uint16_t(id)},
                             {},
                             0});
        if (!(chosen & 255)) {
          rebuild = true;
          break;
        }
        co_await window(
            {dialogue::WindowAction::Close, dialogue::WindowId{4}, {}, 0});
        m.param = std::uint8_t(ability);
        m.action = a.action;
        m.targeting = std::uint8_t(chosen >> 8);
        m.target = std::uint8_t(chosen);
        co_await window(
            {dialogue::WindowAction::Close, dialogue::WindowId{1}, {}, 0});
        co_await window(
            {dialogue::WindowAction::Close, dialogue::WindowId{0x10}, {}, 0});
        co_return 1;
      }
      if (rebuild)
        break;
    }
  }
}
} // namespace eb::native::battle
