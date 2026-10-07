#include "internal.hpp"
namespace eb::native::battle {
CommandMenu::Operation::Execution::Routine
CommandMenu::Operation::Execution::goods() {
  auto &o = owner;
  auto &w = o.windows;
  auto &m = o.turns.menu;
  if (!o.party.character(m.user).items[0])
    co_return 0;
  for (;;) {
    co_await window(
        {dialogue::WindowAction::Open, dialogue::WindowId{2}, {}, 0});
    auto inventory = o.menus.inventory().begin(dialogue::WindowId{2}, m.user);
    for (;;) {
      const auto p = inventory->advance(1);
      if (p == dialogue::Progress::Finished)
        break;
      if (p == dialogue::Progress::Suspended) {
        co_await effect(*inventory->effect());
        inventory->respond(w.prompt_state().pressed);
      } else
        co_await Yield{};
    }
    inventory.reset();
    const auto selected = co_await select();
    w.output().policy().instant = true;
    co_await window({dialogue::WindowAction::CloseFocus, {}, {}, 0});
    if (!selected)
      co_return 0;
    if (jp()) {
      co_await window(
          {dialogue::WindowAction::Open, dialogue::WindowId{0x26}, {}, 0});
      palette(6);
      const auto item = o.party.character(m.user).items.at(selected - 1);
      co_await text({dialogue::SubstitutionAction::ItemName, item, {}, 0xffff});
      palette(0);
      w.output().policy().instant = false;
    }
    m.param = std::uint8_t(selected);
    const auto item = o.party.character(m.user).items.at(m.param - 1);
    const auto properties = o.text->item_properties(item);
    m.action = 2;
    m.targeting = 1;
    m.target = m.user;
    std::uint16_t result = 255;
    bool needs_target =
        (properties.type & 0x30) == 0x10 || (properties.type & 0x30) == 0x20;
    if ((properties.type & 0x30) == 0x30 &&
        ((properties.type & 12) == 0 || (properties.type & 12) == 4)) {
      if (properties.flags & o.content->usable_flag(m.user))
        needs_target = true;
      else
        m.action = 3;
    }
    if (needs_target) {
      const auto action = o.content->item_action(item);
      result = co_await target(action, m.user);
      if (result & 255) {
        m.action = action;
        m.targeting = std::uint8_t(result >> 8);
        m.target = std::uint8_t(result);
      } else
        result = 0;
    }
    co_await window(
        {dialogue::WindowAction::Close, dialogue::WindowId{0x26}, {}, 0});
    if (result)
      co_return result;
  }
}
} // namespace eb::native::battle
