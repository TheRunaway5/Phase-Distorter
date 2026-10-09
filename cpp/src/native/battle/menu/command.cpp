#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/party/view.hpp"
#include "internal.hpp"
#include <stdexcept>
namespace eb::native::battle {
namespace {
void require(bool v, const char *s) {
  if (!v)
    throw std::logic_error(s);
}
} // namespace
CommandMenu::CommandMenu(
    std::shared_ptr<const MenuContent> c,
    std::shared_ptr<const dialogue::Program> p,
    std::shared_ptr<const dialogue::MenuResources> m,
    std::shared_ptr<const dialogue::FontResources> f,
    std::shared_ptr<const dialogue::SubstitutionResources> t,
    const ActionResources &a, party::State &party, TurnState &turn,
    CommandMenuState &state, TargetSelection &target, Roster &r, Names &names,
    FrameState &fr, PaletteBankState &col, const PsiScratch &buffer,
    story::RandomState &rng, dialogue::MenuHost &mh, story::Scene &sc,
    story::InputState &in) {
  require(c && p && m && f && t, "Battle menu needs imported content");
  const auto v = party.version();
  require(c->version() == v && p->version() == v && m->version() == v &&
              f->version() == v && t->version() == v && a.version() == v &&
              r.version() == v,
          "Battle menu regions differ");
  require(sc.uses(mh.windows(), party) && sc.uses(in) && mh.uses(*p, *m) &&
              target.uses(r, party, rng, a),
          "Battle menu owners differ");
  execution_ = std::make_unique<Execution>(
      std::move(c), std::move(p), std::move(m), std::move(f), std::move(t), a,
      party, turn, state, target, r, names, fr, col, buffer, rng, mh, sc, in);
  mh.inventory().configure(execution_->text, party::View(party));
}
CommandMenu::~CommandMenu() = default;
CommandMenu::Operation::Operation(std::unique_ptr<Execution> e)
    : execution_(std::move(e)) {}
CommandMenu::Operation::~Operation() {
  if (!execution_->done)
    execution_->owner.failed = true;
}
bool CommandMenu::busy() const noexcept { return execution_->active; }
bool CommandMenu::failed() const noexcept { return execution_->failed; }
bool CommandMenu::uses(const TurnState &t, const Roster &r,
                       const party::State &p, const story::Scene &s,
                       const dialogue::WindowHost &w) const noexcept {
  const auto &e = *execution_;
  return &e.turns == &t && &e.roster == &r && &e.party == &p &&
         &e.scene == &s && &e.windows == &w;
}
std::unique_ptr<CommandMenu::Operation>
CommandMenu::begin(unsigned character, unsigned count, unsigned index) {
  auto &e = *execution_;
  require(!e.active && !e.failed && !e.scene.busy(),
          "Battle command menu requires idle owners");
  require(character >= 1 && character <= 4 && index < 6,
          "Battle menu character/party slot is outside owned records");
  require(e.party.party_order.at(index) == character,
          "Battle menu party slot does not identify its character");
  require(e.windows.prepared_message() &&
              e.names.uses(e.roster, e.party, *e.windows.prepared_message()) &&
              e.scene.uses_battle_menu(e.roster, e.frame, e.colors, e.scratch,
                                       e.random),
          "Battle menu names/frame/palette/random owners differ");
  dialogue::Conversation admission(e.program, e.menus);
  admission.validate_start();
  require(!e.windows.prompt_state().debug &&
              e.windows.prompt_state().battle_mode != 0,
          "Debug battle menu handlers require their real debug owner");
  auto op = std::unique_ptr<Operation>(new Operation(
      std::make_unique<Operation::Execution>(e, character, count)));
  e.state.current_party_slot = std::uint16_t(index);
  e.active = true;
  return op;
}
std::unique_ptr<CommandMenu::Operation> CommandMenu::begin_target(unsigned action,unsigned user) {
  auto &e=*execution_;
  require(!e.active && !e.failed && !e.scene.busy(),"Target menu requires idle actual owners");
  require(user>=1 && user<=party::State::character_count,"Target menu lost its source user selector");
  (void)e.actions.action(action);
  // World callers retain these same rows/flash fields before the battle
  // display is bound. Their window/world ticks must keep world scene routing.
  require(e.windows.prepared_message() && e.names.uses(e.roster,e.party,*e.windows.prepared_message()) &&
    e.scene.uses(e.random) && e.scene.uses(e.windows,e.party),"Target menu owners differ");
  dialogue::Conversation admission(e.program,e.menus);admission.validate_start();
  auto op=std::unique_ptr<Operation>(new Operation(std::make_unique<Operation::Execution>(e,user,0,action)));
  e.active=true;return op;
}
dialogue::Progress CommandMenu::Operation::advance(unsigned budget) {
  auto &e = *execution_;
  if (e.done)
    return dialogue::Progress::Finished;
  require(!e.owner.failed, "Battle menu was abandoned");
  while (budget--) {
    if (e.audio_request)
      return dialogue::Progress::Suspended;
    if (e.child) {
      const auto p = e.child->advance(1);
      if (p == dialogue::Progress::Suspended)
        return p;
      if (p != dialogue::Progress::Finished)
        continue;
      e.child.reset();
    }
    if (e.context.leaf)
      e.context.leaf.resume();
    if (e.routine.handle.done()) {
      if (e.routine.handle.promise().error) {
        e.owner.failed = true;
        std::rethrow_exception(e.routine.handle.promise().error);
      }
      e.returned = e.routine.handle.promise().value;
      e.done = true;
      e.owner.active = false;
      return dialogue::Progress::Finished;
    }
  }
  return dialogue::Progress::BudgetExhausted;
}
story::Scene::Operation *CommandMenu::Operation::scene() const noexcept {
  return execution_->child.get();
}
const std::optional<MenuAudio> &CommandMenu::Operation::audio() const noexcept {
  return execution_->audio_request;
}
void CommandMenu::Operation::respond_audio() {
  require(execution_->audio_request.has_value(),
          "Battle menu has no pending audio");
  execution_->audio_request.reset();
}
bool CommandMenu::Operation::complete() const noexcept {
  return execution_->done;
}
std::uint16_t CommandMenu::Operation::result() const {
  require(complete(), "Battle menu result is pending");
  return execution_->returned;
}
void CommandMenu::Operation::Execution::ambient() {
  auto &state = owner.windows.state();
  if (state.focus || state.windows.empty())
    return;
  // GET_ACTIVE_WINDOW_ADDRESS's absolute indexed read carries into BUFFER.
  // This is the actual retained lookup word, not a guessed tail/dummy bank.
  const unsigned at = jp() ? 0x8c24 : 0x88e2;
  const auto raw = std::uint16_t(owner.scratch.bytes[at] |
                                 unsigned(owner.scratch.bytes[at + 1]) << 8);
  const unsigned stride = jp() ? 76 : 82;
  const auto delta = std::uint16_t(unsigned(raw) * stride);
  if (delta == std::uint16_t(0 - stride))
    state.unfocused_register_slot = 0xffff;
  else if (delta % stride == 0 && delta / stride < 8)
    state.unfocused_register_slot = delta / stride;
  else
    throw std::out_of_range(
        "Unfocused battle window register address leaves owned window banks");
}
void CommandMenu::Operation::Execution::position(unsigned x, unsigned y,
                                                 unsigned fraction) {
  require(owner.windows.state().focus.has_value(),
          "Battle menu text has no focused window");
  owner.windows.output().set_cursor(*owner.windows.state().focus,
                                    {std::uint16_t(x), std::uint16_t(y)},
                                    fraction);
}
void CommandMenu::Operation::Execution::palette(unsigned index) {
  if (const auto f = owner.windows.state().focus) {
    auto s = owner.windows.output().window(*f).style;
    s.palette = std::uint8_t(index);
    s.priority = s.flip_horizontal = s.flip_vertical = false;
    owner.windows.output().set_style(*f, s);
  }
}
CommandMenu::Operation::Execution::Routine
CommandMenu::Operation::Execution::sound(unsigned value) {
  audio_request = MenuAudio{MenuAudioKind::Sound, std::uint16_t(value)};
  co_await Yield{};
  co_return 0;
}
CommandMenu::Operation::Execution::Routine
CommandMenu::Operation::Execution::tick(story::TickKind kind) {
  child = owner.scene.begin(kind);
  co_await Yield{};
  co_return 0;
}
CommandMenu::Operation::Execution::Routine
CommandMenu::Operation::Execution::effect(const dialogue::MenuPrintEffect &e) {
  if (const auto *w = std::get_if<dialogue::WindowEffect>(&e)) {
    child = owner.scene.begin(*w);
    co_await Yield{};
  } else if (std::get<dialogue::TextEffect>(e).kind ==
             dialogue::TextEffectKind::WindowTick)
    co_await tick(story::TickKind::Window);
  else {
    audio_request = MenuAudio{MenuAudioKind::TextSound, 0};
    co_await Yield{};
  }
  co_return 0;
}
CommandMenu::Operation::Execution::Routine
CommandMenu::Operation::Execution::window(
    dialogue::WindowCommand c, dialogue::MenuHost::Operation *parent) {
  // SET_WINDOW_FOCUS stores its explicit ID and never reads GET_ACTIVE.
  // The retained scratch lookup only belongs to commands that actually read
  // the active register bank before changing focus.
  if (c.action != dialogue::WindowAction::Focus)
    ambient();
  auto op = parent ? owner.menus.begin_window(std::move(c), *parent)
                   : owner.windows.begin(std::move(c));
  while (op->advance() != dialogue::OutputProgress::Complete) {
    co_await effect(*op->effect());
    op->respond();
  }
  co_return op->succeeded();
}
CommandMenu::Operation::Execution::Routine
CommandMenu::Operation::Execution::text(dialogue::SubstitutionCommand c,
                                        dialogue::MenuHost::Operation *parent) {
  ambient();
  auto &formatter = owner.windows.substitutions();
  auto op = parent ? formatter.begin_nested(std::move(c), *parent)
                   : formatter.begin(std::move(c));
  while (true) {
    auto p = op->advance(1);
    if (p == dialogue::Progress::Finished)
      break;
    if (p == dialogue::Progress::Suspended) {
      co_await effect(*op->effect());
      op->respond();
    } else
      co_await Yield{};
  }
  co_return 0;
}
CommandMenu::Operation::Execution::Routine
CommandMenu::Operation::Execution::string(
    std::span<const std::uint8_t> bytes, unsigned max,
    dialogue::MenuHost::Operation *parent) {
  co_await text({dialogue::SubstitutionAction::String, 0,
                 [bytes] { return bytes; }, std::uint16_t(max)},
                parent);
  co_return 0;
}
CommandMenu::Operation::Execution::Routine
CommandMenu::Operation::Execution::print(
    dialogue::MenuHost::Operation *parent) {
  ambient();
  auto op = parent ? owner.menus.begin_print({}, *parent)
                   : owner.menus.begin_print({});
  while (op->advance() != dialogue::OutputProgress::Complete) {
    co_await effect(*op->effect());
    op->respond();
  }
  co_return 0;
}
CommandMenu::Operation::Execution::Routine
CommandMenu::Operation::Execution::select(unsigned callback) {
  auto &windows = owner.windows;
  const auto id = *windows.state().focus;
  if (callback)
    windows.metadata(id).cursor_callback = dialogue::MenuCallbackId{callback};
  auto op = owner.menus.begin(1);
  while (true) {
    const auto p = op->advance(1);
    if (p == dialogue::Progress::Finished)
      break;
    if (p == dialogue::Progress::BudgetExhausted) {
      co_await Yield{};
      continue;
    }
    const auto event = *op->event();
    if (const auto *t = std::get_if<dialogue::TextEffect>(&event))
      co_await effect(*t);
    else if (const auto *w = std::get_if<dialogue::WindowEffect>(&event))
      co_await effect(*w);
    else if (std::holds_alternative<dialogue::PromptEffect>(event))
      co_await tick(story::TickKind::World);
    else if (const auto *m = std::get_if<dialogue::MenuEffect>(&event)) {
      switch (m->kind) {
      case dialogue::MenuEffectKind::Input:
        co_await tick(story::TickKind::World);
        break;
      case dialogue::MenuEffectKind::Sound:
        co_await sound(m->value);
        break;
      case dialogue::MenuEffectKind::Callback:
        require(m->callback.has_value(),
                "Battle menu callback lost its identity");
        if (m->callback->value == 1)
          co_await psi_list(m->value, op.get());
        else if (m->callback->value == 2)
          co_await psi_detail(m->value, op.get());
        else
          throw std::logic_error("Unknown battle menu callback");
        break;
      case dialogue::MenuEffectKind::ShowMoneyMeters:
        throw std::logic_error(
            "Battle selection reached an overworld money callback");
      }
    } else
      throw std::logic_error(
          "Battle menu option unexpectedly executed authored dialogue");
    op->respond({windows.prompt_state().pressed, owner.input.held[0], 0});
  }
  const auto value = op->result();
  if (callback)
    windows.metadata(id).cursor_callback.reset();
  co_return value;
}
CommandMenu::Operation::Execution::Routine
CommandMenu::Operation::Execution::authored(std::uint32_t reference) {
  dialogue::ReferenceKey key{};
  for (unsigned i = 0; i < 4; ++i)
    key[i] = std::uint8_t(reference >> (8 * i));
  const auto location = owner.program->resolve(key);
  require(location.has_value(),
          "Battle menu message is absent from imported content");
  dialogue::Conversation conversation(owner.program, owner.menus);
  conversation.start(*location);
  child = owner.scene.begin(conversation);
  co_await Yield{};
  co_return 0;
}
CommandMenu::Operation::Execution::Routine
CommandMenu::Operation::Execution::run() {
  auto &o = owner;
  auto &w = o.windows;
  auto &m = o.turns.menu;
  for (unsigned i = 128; i < 192; ++i)
    o.colors.staged_color(i + 64) =
        std::uint16_t((o.colors.staged_color(i) >> 2) & 0x1ce7);
  o.colors.upload_mode = 16;
  const auto &c = o.party.character(character);
  unsigned mode = (c.afflictions[0] == 3 || c.afflictions[2] == 3) ? 2 : 0;
  if (mode != 2) {
    auto slot = c.equipment[0];
    if (slot && (o.text->item_properties(c.items.at(slot - 1)).type & 3) == 1)
      mode = 1;
  }
  if (const auto a = automatic(mode))
    co_return *a;
  w.prompt_state().half_meter_speed = 1;
  const unsigned shape = (character == 2 || character == 4 ? 1 : 0) +
                         (selected_count == 0 ? 1 : 0);
  const auto window_id = dialogue::WindowId{o.content->command_window(shape)};
  co_await window({dialogue::WindowAction::Open, window_id, {}, 0});
  const auto name = o.party.name_field(character);
  // Keep the vector-owning command named across suspension. GCC 12 can
  // double-destroy the nested aggregate temporary in a co_await expression.
  dialogue::WindowCommand title{dialogue::WindowAction::Title,
                                window_id,
                                {name.begin(), name.end()},
                                jp() ? 4u : 5u};
  co_await window(std::move(title));
  auto add = [&](unsigned label, unsigned value, unsigned x, unsigned y) {
    o.model.append_value(o.content->command(label), {}, std::uint16_t(value),
                         std::uint16_t(x), std::uint16_t(y), false);
  };
  add(mode == 0 ? 0 : mode == 1 ? 6 : 10, 1, 0, 0);
  if (mode != 2) {
    add(1, 2, jp() ? 5 : 6, 0);
    add(4, 5, jp() ? 5 : 6, 1);
  }
  if (!selected_count) {
    unsigned x = shape == 2 ? (jp() ? 15 : 16) : (jp() ? 10 : 11);
    if (!jp() && (character == 2 || character == 4))
      x += 2;
    add(2, 3, x, 0);
    add(8, 6, x, 1);
  }
  if (character == 3)
    add(7, 4, 0, 1);
  else if (!c.afflictions[4])
    add(3, 4, 0, 1);
  if (character == 2)
    add(5, 7, jp() ? 10 : 11, 0);
  if (character == 4)
    add(9, 7, jp() ? 10 : 13, 0);
  bool printed = false;
  for (;;) {
    co_await window({dialogue::WindowAction::Focus, window_id, {}, 0});
    if (jp() || !printed) {
      co_await print();
      printed = true;
    }
    const auto choice = co_await select();
    if (!choice) {
      resume();
      co_return 0;
    }
    o.turns.item_used = 0;
    std::uint16_t action = 0;
    if (choice == 1 || (choice == 4 && character == 3) ||
        (choice == 7 && character == 4)) {
      action = choice == 1 ? std::uint16_t(mode == 0   ? 4
                                           : mode == 1 ? 5
                                                       : 1)
                           : std::uint16_t(choice == 4 ? 6 : 280);
      m.action = action;
      m.targeting = 17;
      if (mode != 2 || choice != 1) {
        m.target = std::uint8_t(co_await enemy_target(false, action));
        if (!m.target)
          continue;
      }
    } else if (choice == 2) {
      m.user = std::uint8_t(character);
      if (!(co_await goods()))
        continue;
      o.turns.item_used = o.party.character(character).items.at(m.param - 1);
      action = m.action;
    } else if (choice == 3) {
      o.party.auto_fight = 1;
      w.stage_auto_fight_indicator(o.content->auto_fight_cells());
      action = 0;
    } else if (choice == 4) {
      m.user = std::uint8_t(character);
      if (!(co_await psi()))
        continue;
      o.turns.item_used = 0;
      action = m.action;
    } else if (choice == 5) {
      m.action = action = 8;
      m.targeting = 0;
    } else if (choice == 6) {
      m.targeting = 1;
      m.target = std::uint8_t(character);
      m.action = action = 279;
    } else if (choice == 7) {
      m.targeting = 1;
      m.target = std::uint8_t(character);
      action = o.frame.giygas_phase >= 4 && o.frame.giygas_phase <= 12
                   ? std::uint16_t(291 + o.frame.giygas_phase - 4)
                   : 7;
      m.action = action;
    }
    co_await window({dialogue::WindowAction::Focus, window_id, {}, 0});
    resume();
    co_return action;
  }
}
} // namespace eb::native::battle
