#pragma once
#include "eb/native/battle/actions/executor.hpp"
#include "eb/native/battle_background_scene.hpp"
#include <coroutine>
#include <exception>
#include <utility>

namespace eb::native::battle::actions {
namespace detail {
struct Control { std::coroutine_handle<> next; std::exception_ptr error; };
// A native C++ call stack retained across actual child Scene work. This has no
// opcode stream, source registers, address dispatch or synthetic completion.
class Routine {
public:
    struct promise_type {
        Control* control{};
        std::coroutine_handle<> caller{};
        std::uint16_t result{};
        Routine get_return_object() { return Routine{std::coroutine_handle<promise_type>::from_promise(*this)}; }
        std::suspend_always initial_suspend() noexcept { return {}; }
        struct Final {
            bool await_ready() noexcept { return false; }
            void await_suspend(std::coroutine_handle<promise_type> handle) noexcept {
                handle.promise().control->next = handle.promise().caller;
            }
            void await_resume() noexcept {}
        };
        Final final_suspend() noexcept { return {}; }
        void return_value(std::uint16_t value) noexcept { result = value; }
        void unhandled_exception() noexcept { control->error = std::current_exception(); }
    };
    explicit Routine(std::coroutine_handle<promise_type> value) : handle_(value) {}
    Routine(Routine&& other) noexcept : handle_(std::exchange(other.handle_, {})) {}
    Routine(const Routine&) = delete;
    ~Routine() { if (handle_) handle_.destroy(); }
    void start(Control& control) { handle_.promise().control = &control; control.next = handle_; }
    bool await_ready() const noexcept { return false; }
    void await_suspend(std::coroutine_handle<promise_type> caller) {
        auto& promise = handle_.promise();
        promise.control = caller.promise().control;
        promise.caller = caller;
        promise.control->next = handle_;
    }
    std::uint16_t await_resume() const { return handle_.promise().result; }
private:
    std::coroutine_handle<promise_type> handle_;
};
}
struct Executor::State {
    explicit State(Owners owners) : owners(owners), meter(owners.roster, owners.party, owners.guests) {}
    Owners owners;
    Meters meter;
    Operation::Execution* active{};
    bool failed{};
};
struct Executor::Operation::Execution {
    explicit Execution(Executor::State&, std::optional<Kind> = {});
    ~Execution();
    Executor::State& owner;
    Owners& o;
    detail::Control control;
    detail::Routine root;
    OutcomeRoute route = OutcomeRoute::NormalCheck;
    bool complete{};
    enum class Child { Direct, Text, Shield, Meters, Window } child{};
    std::unique_ptr<story::Scene::Operation> scene;
    std::unique_ptr<story::BattleDialogue::Operation> message;
    std::unique_ptr<Shields::Operation> shield;
    std::unique_ptr<party::MeterWindows::Operation> meter;
    std::unique_ptr<DeadPlayers::Operation> dead;
    std::unique_ptr<dialogue::WindowHost::Operation> window_op;
    std::unique_ptr<party::Inventory::Operation> inventory_op;
    std::unique_ptr<story::TeddyParty::Operation> teddy_op;
    std::unique_ptr<story::PartyMembership::Operation> membership;
    std::uint16_t shield_result{};
    bool nullifying{};
    unsigned attacker_slot() const;
    unsigned target_slot() const;
    Battler& attacker() const { return o.roster.at(attacker_slot()); }
    Battler& target() const { return o.roster.at(target_slot()); }
    dialogue::Progress advance(unsigned);
    dialogue::Progress pump(unsigned);
    std::suspend_always text(Text, std::optional<std::uint32_t> = {});
    std::suspend_always text(const dialogue::ReferenceKey&, std::optional<std::uint32_t> = {});
    std::suspend_always raw_text(const dialogue::ReferenceKey&);
    std::suspend_always tick();
    std::suspend_always check_dead();
    std::suspend_always show_meters();
    std::suspend_always clear_selection();
    detail::Routine wait(unsigned);
    detail::Routine wait_animation();
    detail::Routine each_target(Kind);
    void resolve_targets(unsigned);
    void target_all(int side = -1);
    void target_row(unsigned);
    void remove_npcs();
    void remove_dead();
    void remove_untargettable();
    void strange_targets();
    std::uint32_t random_target(std::uint32_t);
    void reset_meters();
    detail::Routine shield_nullify();
    detail::Routine weaken_shield();
    detail::Routine reject_npc();
    detail::Routine heal_strangeness();
    detail::Routine recover_hp(unsigned, std::uint16_t);
    detail::Routine recover_pp(unsigned, std::uint16_t);
    detail::Routine revive(unsigned, std::uint16_t);
    detail::Routine ko(unsigned);
    detail::Routine damage(unsigned, std::uint16_t);
    detail::Routine resist_damage(std::uint16_t, std::uint16_t);
    detail::Routine miss(bool shoot);
    detail::Routine smash();
    detail::Routine physical(unsigned multiplier, bool shooting = false, unsigned added_status = 0);
    detail::Routine physical_damage(unsigned multiplier);
    detail::Routine psi_damage(unsigned family, std::uint16_t amount);
    detail::Routine thunder(std::uint16_t amount, unsigned hits);
    detail::Routine flash(unsigned level);
    detail::Routine healing(unsigned level);
    detail::Routine status_psi(unsigned group, unsigned status, std::uint8_t Battler::* resistance, Text);
    detail::Routine shield_apply(unsigned kind, Text added, Text fresh);
    detail::Routine status_action(Kind);
    detail::Routine stat_action(Kind);
    detail::Routine special(Kind);
    detail::Routine replace_background(std::uint16_t group, std::uint16_t music);
    detail::Routine prayer_scene(Text, std::uint16_t group, std::uint16_t music);
    detail::Routine prayer_focus(Text, std::uint16_t music);
    detail::Routine prayer_hurt(std::uint16_t);
    detail::Routine fade_wait();
    detail::Routine close_hide();
    detail::Routine window(dialogue::WindowCommand);
    detail::Routine bomb(std::uint16_t);
    detail::Routine bottle_rockets(unsigned);
    detail::Routine item_effect(Kind);
    detail::Routine boost(unsigned);
    detail::Routine utility(Kind);
    detail::Routine neutralize();
    detail::Routine call_help(bool sow);
    detail::Routine pray();
    detail::Routine pray_effect(unsigned);
    detail::Routine eat_food();
    detail::Routine equipment(Kind);
    detail::Routine execute(Kind);
    detail::Routine actor();
    detail::Routine recovery();
    detail::Routine consume_item();
    detail::Routine remove_item(unsigned character, unsigned position);
    detail::Routine take_item(unsigned selector, unsigned item);
};
} // namespace eb::native::battle::actions
