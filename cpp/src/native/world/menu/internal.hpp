#pragma once
#include "eb/native/world/menu/commands.hpp"
#include "eb/native/dialogue/menu_model.hpp"
#include "eb/native/dialogue/window_commands.hpp"
#include "eb/native/dialogue/substitutions.hpp"
#include "eb/native/dialogue/inventory.hpp"
#include <coroutine>
#include <exception>
#include <utility>
#include <functional>

namespace eb::native::world::menu::detail {
struct Context {std::coroutine_handle<> leaf{};};
class Routine {
public:
    struct promise_type {
        Context *context{};std::coroutine_handle<> parent{};std::uint16_t value{};std::exception_ptr error;
        Routine get_return_object() {return Routine{std::coroutine_handle<promise_type>::from_promise(*this)};}
        std::suspend_always initial_suspend() noexcept {return {};}
        struct Final {
            bool await_ready() noexcept {return false;}
            std::coroutine_handle<> await_suspend(std::coroutine_handle<promise_type> h) noexcept {
                auto &p=h.promise();p.context->leaf=p.parent;return p.parent?p.parent:std::noop_coroutine();
            }
            void await_resume() noexcept {}
        };
        Final final_suspend() noexcept {return {};}
        void return_value(std::uint16_t v) noexcept {value=v;}
        void unhandled_exception() noexcept {error=std::current_exception();}
    };
    using Handle=std::coroutine_handle<promise_type>;
    explicit Routine(Handle h):handle(h){}
    Routine(Routine &&r) noexcept:handle(std::exchange(r.handle,{})){}
    Routine(const Routine &)=delete;
    ~Routine(){if(handle)handle.destroy();}
    bool await_ready() const noexcept{return false;}
    std::coroutine_handle<> await_suspend(Handle parent) noexcept {
        handle.promise().context=parent.promise().context;handle.promise().parent=parent;
        handle.promise().context->leaf=handle;return handle;
    }
    std::uint16_t await_resume(){if(handle.promise().error)std::rethrow_exception(handle.promise().error);return handle.promise().value;}
    Handle handle;
};
struct Yield {
    bool await_ready() const noexcept{return false;}
    void await_suspend(Routine::Handle h) const noexcept{h.promise().context->leaf=h;}
    void await_resume() const noexcept{}
};
} // namespace eb::native::world::menu::detail

namespace eb::native::world::menu {
struct Commands::Execution {
    std::shared_ptr<const Resources> content;
    std::shared_ptr<const dialogue::Program> program;
    std::shared_ptr<const dialogue::FontResources> fonts;
    dialogue::MenuHost &menus;dialogue::WindowHost &windows;
    party::State &party;party::Inventory &inventory;party::MeterWindows &meters;npcs::Interactions &interactions;
    story::Scene &scene;story::InputState &input;WorldSpriteFade &fade;
    dialogue::MenuModel model;bool active{},failed{};
    const WorldMap *field_map{};
    WorldPartyState *formation{};WorldSessionState *session{};
    Execution(std::shared_ptr<const Resources> c,std::shared_ptr<const dialogue::Program> p,
              std::shared_ptr<const dialogue::FontResources> f,dialogue::MenuHost &m,party::State &ps,party::Inventory &iv,
              party::MeterWindows &mw,npcs::Interactions &i,story::Scene &s,story::InputState &in,WorldSpriteFade &sf)
      :content(std::move(c)),program(std::move(p)),fonts(std::move(f)),menus(m),windows(m.windows()),
       party(ps),inventory(iv),meters(mw),interactions(i),scene(s),input(in),fade(sf),model(windows,*fonts){}
};
struct Commands::Operation::Execution {
    using Routine=detail::Routine;using Yield=detail::Yield;
    Commands::Execution &owner;Entry entry;bool done{};
    std::unique_ptr<story::Scene::Operation> child;
    std::optional<std::uint16_t> audio;
    std::optional<Choice> unported;
    std::optional<ItemUse> use;
    std::optional<AbilityUse> ability;
    std::optional<TargetSelect> targeting;
    std::uint16_t use_result{};
    std::unique_ptr<party::Inventory::Operation> mutation;
    dialogue::MenuHost::Operation *callback_parent{};
    std::function<Routine(std::uint16_t)> selection_callback;
    std::function<Routine(unsigned)> character_callback;
    std::function<bool(unsigned)> character_filter;
    detail::Context context;Routine routine;
    Execution(Commands::Execution &o,Entry e):owner(o),entry(e),routine(run()) {
        routine.handle.promise().context=&context;context.leaf=routine.handle;
    }
    bool jp() const noexcept{return owner.party.version()==GameVersion::JP;}
    Routine run();Routine main();Routine command_text();Routine cleanup(bool wait_fade);Routine tick(story::TickKind);
    Routine sound(unsigned);Routine window(dialogue::WindowCommand);
    Routine fixed(unsigned);
    Routine effect(const dialogue::MenuPrintEffect &);Routine print();Routine select();
    Routine interact(npcs::InteractionAction,bool fallback_to_check=false);
    Routine meter(std::unique_ptr<party::MeterWindows::Operation>);
    Routine wallet(dialogue::MenuHost::Operation *parent=nullptr);
    Routine context_command(dialogue::Request,dialogue::MenuHost::Operation *parent=nullptr);
    Routine goods();Routine inventory(unsigned who,unsigned window=2);
    Routine text(dialogue::SubstitutionCommand);Routine target_prompt(unsigned index);
    Routine authored(dialogue::ReferenceKey);
    Routine character_select(unsigned mode,unsigned inventory_window=0);
    Routine mutate(std::unique_ptr<party::Inventory::Operation>);
    Routine give(unsigned who,unsigned position);
    Routine use_item(unsigned who,unsigned position);
    Routine target(unsigned action,unsigned user);
    Routine equipment();Routine equipment_display(unsigned);Routine equipment_stats(unsigned,bool compare=false);
    Routine equipment_select(unsigned);
    std::array<std::uint8_t,4> preview_equipment{};
    Routine status();Routine status_display(unsigned);
    Routine psi_list(unsigned,unsigned,unsigned);Routine psi_display(unsigned);Routine psi_help(unsigned);
    Routine psi_description(unsigned);Routine psi();Routine psi_highlight(unsigned,unsigned,unsigned);
    Routine psi_name(unsigned);
    Routine teleport_destinations();
    Routine window_tick_without_instant();
    unsigned last_psi_description=0xff;
};
} // namespace eb::native::world::menu
