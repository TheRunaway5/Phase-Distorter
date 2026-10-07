#pragma once
#include "eb/native/battle/menu/command.hpp"
#include "eb/native/dialogue/inventory.hpp"
#include "eb/native/dialogue/substitutions.hpp"
#include <coroutine>
#include <exception>
#include <utility>
namespace eb::native::battle::menu_detail {
struct Context {
  std::coroutine_handle<> leaf{};
};
class Routine {
public:
  struct promise_type {
    Context *context{};
    std::coroutine_handle<> parent{};
    std::uint16_t value{};
    std::exception_ptr error;
    Routine get_return_object() {
      return Routine{std::coroutine_handle<promise_type>::from_promise(*this)};
    }
    std::suspend_always initial_suspend() noexcept { return {}; }
    struct Final {
      bool await_ready() noexcept { return false; }
      std::coroutine_handle<>
      await_suspend(std::coroutine_handle<promise_type> h) noexcept {
        auto &p = h.promise();
        if (p.parent) {
          p.context->leaf = p.parent;
          return p.parent;
        }
        p.context->leaf = {};
        return std::noop_coroutine();
      }
      void await_resume() noexcept {}
    };
    Final final_suspend() noexcept { return {}; }
    void return_value(std::uint16_t v) noexcept { value = v; }
    void unhandled_exception() noexcept { error = std::current_exception(); }
  };
  using Handle = std::coroutine_handle<promise_type>;
  explicit Routine(Handle h) : handle(h) {};
  Routine(Routine &&r) noexcept : handle(std::exchange(r.handle, {})) {}
  Routine(const Routine &) = delete;
  ~Routine() {
    if (handle)
      handle.destroy();
  }
  bool await_ready() const noexcept { return false; }
  std::coroutine_handle<> await_suspend(Handle parent) noexcept {
    handle.promise().context = parent.promise().context;
    handle.promise().parent = parent;
    handle.promise().context->leaf = handle;
    return handle;
  }
  std::uint16_t await_resume() {
    if (handle.promise().error)
      std::rethrow_exception(handle.promise().error);
    return handle.promise().value;
  }
  Handle handle;
};
struct Yield {
  bool await_ready() noexcept { return false; }
  void await_suspend(Routine::Handle h) noexcept {
    h.promise().context->leaf = h;
  }
  void await_resume() noexcept {}
};
} // namespace eb::native::battle::menu_detail
namespace eb::native::battle {
struct CommandMenu::Execution {
  std::shared_ptr<const MenuContent> content;
  std::shared_ptr<const dialogue::Program> program;
  std::shared_ptr<const dialogue::MenuResources> menu_resources;
  std::shared_ptr<const dialogue::FontResources> fonts;
  std::shared_ptr<const dialogue::SubstitutionResources> text;
  const ActionResources &actions;
  party::State &party;
  TurnState &turns;
  CommandMenuState &state;
  TargetSelection &targets;
  Roster &roster;
  Names &names;
  FrameState &frame;
  PaletteBankState &colors;
  const PsiScratch &scratch;
  story::RandomState &random;
  dialogue::MenuHost &menus;
  story::Scene &scene;
  story::InputState &input;
  dialogue::WindowHost &windows;
  dialogue::MenuModel model;
  bool active{}, failed{};
  Execution(std::shared_ptr<const MenuContent> c,
            std::shared_ptr<const dialogue::Program> p,
            std::shared_ptr<const dialogue::MenuResources> m,
            std::shared_ptr<const dialogue::FontResources> f,
            std::shared_ptr<const dialogue::SubstitutionResources> t,
            const ActionResources &a, party::State &party_, TurnState &turn,
            CommandMenuState &s, TargetSelection &target, Roster &r,
            Names &names_, FrameState &fr, PaletteBankState &col,
            const PsiScratch &buffer, story::RandomState &rng,
            dialogue::MenuHost &mh, story::Scene &sc, story::InputState &in)
      : content(std::move(c)), program(std::move(p)),
        menu_resources(std::move(m)), fonts(std::move(f)), text(std::move(t)),
        actions(a), party(party_), turns(turn), state(s), targets(target),
        roster(r), names(names_), frame(fr), colors(col), scratch(buffer),
        random(rng), menus(mh), scene(sc), input(in), windows(mh.windows()),
        model(windows, *fonts) {}
};
struct CommandMenu::Operation::Execution {
  using Routine = menu_detail::Routine;
  using Yield = menu_detail::Yield;
  CommandMenu::Execution &owner;
  unsigned character, selected_count;
  std::unique_ptr<story::Scene::Operation> child;
  std::optional<MenuAudio> audio_request;
  menu_detail::Context context;
  Routine routine;
  bool done{};
  std::uint16_t returned{};
  Execution(CommandMenu::Execution &o, unsigned c, unsigned n,std::optional<unsigned> action={})
      : owner(o), character(c), selected_count(n), routine(action?target(*action,c):run()) {
    routine.handle.promise().context = &context;
    context.leaf = routine.handle;
  }
  bool jp() const { return owner.party.version() == GameVersion::JP; }
  void ambient();
  Routine run();
  Routine sound(unsigned);
  Routine tick(story::TickKind);
  Routine window(dialogue::WindowCommand,
                 dialogue::MenuHost::Operation * = nullptr);
  Routine effect(const dialogue::MenuPrintEffect &);
  Routine text(dialogue::SubstitutionCommand,
               dialogue::MenuHost::Operation * = nullptr);
  Routine string(std::span<const std::uint8_t>, unsigned = 0xffff,
                 dialogue::MenuHost::Operation * = nullptr);
  Routine print(dialogue::MenuHost::Operation * = nullptr);
  Routine select(unsigned callback = 0);
  Routine psi();
  Routine goods();
  Routine target(unsigned action, unsigned user);
  Routine enemy_target(bool row, unsigned action);
  Routine ally_target(unsigned user);
  Routine target_name(unsigned row, unsigned column);
  Routine psi_list(unsigned category,
                   dialogue::MenuHost::Operation * = nullptr);
  Routine psi_detail(unsigned ability,
                     dialogue::MenuHost::Operation * = nullptr);
  Routine authored(std::uint32_t);
  std::optional<std::uint16_t> automatic(unsigned attack_mode);
  bool knows(unsigned ability, unsigned who = 0) const;
  bool has_psi(unsigned category) const;
  std::uint16_t heal(unsigned group, unsigned condition, bool lifeup);
  void flash_enemy(unsigned row, unsigned column);
  void unflash_enemy();
  void flash_row(unsigned row);
  void unflash_row();
  unsigned row_slot(unsigned row, unsigned column) const;
  unsigned row_count(unsigned row) const;
  unsigned row_x(unsigned row, unsigned column) const;
  int next_column(unsigned row, unsigned x, bool forward) const;
  void position(unsigned x, unsigned y, unsigned fraction = 0);
  void palette(unsigned);
  void resume() {
    auto &p = owner.windows.prompt_state();
    p.half_meter_speed = 0;
    p.rolling_disabled = 0;
  }
};
} // namespace eb::native::battle
