#include "executor_internal.hpp"
#include "eb/native/battle/actions/special.hpp"
#include <stdexcept>
namespace eb::native::battle::actions {
namespace {
void require(bool value, const char* message) { if (!value) throw std::logic_error(message); }
}
Executor::Executor(Owners owners) : state_(std::make_unique<State>(owners)) {
    auto& o = state_->owners;
    require(o.roster.version() == o.party.version() && o.party.version() == o.resources.version() &&
            o.audio.version() == o.party.version() && o.items.version() == o.party.version() && o.actions.version() == o.party.version(),
            "Battle executor catalog regions differ");
    require(o.names.uses(o.roster, o.party, o.dialogue.prepared(), o.action) &&
            o.targets.uses(o.roster, o.party, o.random, o.actions) &&
            o.dead.uses(o.roster, o.party, o.action) && o.dead.uses(o.windows, o.scene, o.dialogue) &&
            o.scene.uses(o.clock) && o.scene.uses(o.windows, o.party) && o.scene.uses(o.dialogue) &&
            o.meters.bound_to(o.windows, o.party) &&
            o.shields.uses(o.action, o.roster, o.names, o.dialogue, o.actions) &&
            o.inventory.bound_to(o.party, o.random) && o.inventory.bound_to(o.party, o.items) &&
            o.frame.uses(o.roster, o.frame_state, o.palette_effects.palette_state(), o.psi.scratch()) &&
            o.frame.uses(o.clock, o.windows, o.party, o.meters) &&
            o.frame.uses(o.psi, o.palette_effects, o.swirl) &&
            o.psi.uses(o.psi.state(), o.psi.scratch(), o.psi.display(), o.palette_effects, o.background) &&
            &o.special.colors == &o.palette_effects.palette_state() &&
            o.frame.uses(o.special.loader) && o.frame.uses(o.special.blank) &&
            o.special.resources.version() == o.party.version(),
            "Battle executor requires the actual shared battle owners");
}
Executor::~Executor() = default;
bool Executor::uses(const Roster& roster, const party::State& party, const ActionState& action,
                    const TurnState& turns, const EncounterState& encounter, const story::Scene& scene,
                    const dialogue::WindowHost& windows) const noexcept {
    const auto& o = state_->owners;
    return &o.roster == &roster && &o.party == &party && &o.action == &action &&
        &o.turns == &turns && &o.encounter == &encounter && &o.scene == &scene && &o.windows == &windows;
}
bool Executor::busy() const noexcept { return state_->active != nullptr; }
bool Executor::failed() const noexcept { return state_->failed; }
std::unique_ptr<Executor::Operation> Executor::begin() { return begin({}); }
std::unique_ptr<Executor::Operation> Executor::begin_action(Kind kind) { return begin(kind); }
std::unique_ptr<Executor::Operation> Executor::begin(std::optional<Kind> kind) {
    auto& s = *state_;
    require(!s.failed && !s.active && !s.owners.scene.busy() && !s.owners.scene.failed() &&
            !s.owners.dead.busy() && !s.owners.dead.failed() && !s.owners.shields.busy() &&
            !s.owners.shields.failed() && !s.owners.inventory.busy() && !s.owners.inventory.failed() &&
            !s.owners.teddy.busy() && !s.owners.teddy.failed() &&
            !s.owners.special.membership.busy() && !s.owners.special.membership.failed() &&
            !s.owners.frame.busy() && !s.owners.frame.failed(), "Battle executor is unavailable");
    require(kind==Kind::BTLACT_NULL4 ||
            (s.owners.action.attacker && *s.owners.action.attacker < Roster::size),
            "Action execution requires an actual current attacker");
    s.owners.dialogue.validate_start();
    auto operation = std::unique_ptr<Operation>(new Operation(std::make_unique<Operation::Execution>(s, kind)));
    s.active = operation->execution_.get();
    return operation;
}
Executor::Operation::Operation(std::unique_ptr<Execution> execution) : execution_(std::move(execution)) {}
Executor::Operation::~Operation() = default;
bool Executor::Operation::complete() const noexcept { return execution_->complete; }
OutcomeRoute Executor::Operation::outcome() const {
    require(complete(), "Action outcome requires completed execution");
    return execution_->route;
}
story::Scene::Operation* Executor::Operation::scene() noexcept {
    auto& e = *execution_;
    return e.scene ? e.scene.get() : e.dead ? e.dead->scene() : nullptr;
}
story::PartyFormation::Operation* Executor::Operation::party_update() noexcept {
    return execution_->dead ? execution_->dead->party_update() : nullptr;
}
story::TeddyParty::Operation* Executor::Operation::teddy_update() noexcept { return execution_->teddy_op.get(); }
story::PartyMembership::Operation* Executor::Operation::membership_update() noexcept { return execution_->membership.get(); }
dialogue::Progress Executor::Operation::advance(unsigned budget) { return execution_->advance(budget); }
Executor::Operation::Execution::Execution(Executor::State& state, std::optional<Kind> kind)
    : owner(state), o(state.owners), root(kind ? execute(*kind) : actor()) { root.start(control); }
Executor::Operation::Execution::~Execution() {
    if (owner.active == this) {
        if (!complete) owner.failed = true;
        owner.active = nullptr;
    }
}
unsigned Executor::Operation::Execution::attacker_slot() const {
    require(o.action.attacker && *o.action.attacker < Roster::size, "Current attacker leaves the owned roster");
    return *o.action.attacker;
}
unsigned Executor::Operation::Execution::target_slot() const {
    require(o.action.target && *o.action.target < Roster::size, "Current target leaves the owned roster");
    return *o.action.target;
}
std::suspend_always Executor::Operation::Execution::text(Text id, std::optional<std::uint32_t> number) {
    return text(o.resources.text(id), number);
}
std::suspend_always Executor::Operation::Execution::text(const dialogue::ReferenceKey& key,
                                                       std::optional<std::uint32_t> number) {
    const auto location = o.dialogue.resolve(key);
    message = number ? o.dialogue.begin_number(location, *number) : o.dialogue.begin_text(location);
    return {};
}
std::suspend_always Executor::Operation::Execution::raw_text(const dialogue::ReferenceKey& key) {
    message = o.dialogue.begin_raw(o.dialogue.resolve(key));
    return {};
}
std::suspend_always Executor::Operation::Execution::tick() {
    child = Child::Direct; scene = o.scene.begin(story::TickKind::Window); return {};
}
std::suspend_always Executor::Operation::Execution::check_dead() { dead = o.dead.begin(); return {}; }
std::suspend_always Executor::Operation::Execution::show_meters() { meter = o.meters.begin_show(); return {}; }
std::suspend_always Executor::Operation::Execution::clear_selection() { meter = o.meters.begin_clear_selection(); return {}; }
detail::Routine Executor::Operation::Execution::wait(unsigned frames) {
    while (frames--) co_await tick();
    co_return 0;
}
detail::Routine Executor::Operation::Execution::window(dialogue::WindowCommand request) {
    window_op = o.windows.begin(std::move(request));
    co_await std::suspend_always{};
    co_return 0;
}
dialogue::Progress Executor::Operation::Execution::pump(unsigned budget) {
    if (scene) {
        const auto progress = scene->advance(budget);
        if (progress != dialogue::Progress::Finished) return progress;
        require(scene->complete(), "Action scene child did not complete");
        scene.reset();
        switch (child) {
        case Child::Direct: break;
        case Child::Text: message->respond(); break;
        case Child::Shield: shield->respond(); break;
        case Child::Meters: meter->respond(); break;
        case Child::Window: window_op->respond(); break;
        }
    }
    if (message) {
        const auto progress = message->advance(budget);
        if (progress == dialogue::Progress::BudgetExhausted) return progress;
        if (progress == dialogue::Progress::Suspended) {
            child = Child::Text; scene = o.scene.begin(message->conversation());
            return scene->advance(budget);
        }
        message.reset();
    }
    if (shield) {
        const auto progress = shield->advance(budget);
        if (progress == dialogue::Progress::BudgetExhausted) return progress;
        if (progress == dialogue::Progress::Suspended) {
            child = Child::Shield; scene = o.scene.begin(shield->conversation());
            return scene->advance(budget);
        }
        // The nullifier publishes its result before the helper handle is released.
        if (nullifying) shield_result = shield->nullified();
        shield.reset();
    }
    if (meter) {
        if (meter->advance() == dialogue::OutputProgress::Suspended) {
            child = Child::Meters; scene = o.scene.begin(*meter->effect());
            return scene->advance(budget);
        }
        meter.reset();
    }
    if (window_op) {
        if (window_op->advance() == dialogue::OutputProgress::Suspended) {
            child = Child::Window; scene = o.scene.begin(*window_op->effect());
            return scene->advance(budget);
        }
        window_op.reset();
    }
    if (teddy_op) {
        const auto progress = teddy_op->advance(budget);
        if (progress != dialogue::Progress::Finished) return progress;
        teddy_op.reset();
        inventory_op->respond();
    }
    if (inventory_op) {
        const auto progress = inventory_op->advance(budget);
        if (progress == dialogue::Progress::BudgetExhausted) return progress;
        if (progress == dialogue::Progress::Suspended) {
            if (inventory_op->service() == party::InventoryService::TeddyRemove)
                teddy_op = o.teddy.begin_remove(inventory_op->teddy_member());
            else if (inventory_op->service() == party::InventoryService::TeddyRefresh)
                teddy_op = o.teddy.begin();
            else throw std::logic_error("Unknown actual inventory child service");
            return teddy_op->advance(budget);
        }
        inventory_op.reset();
    }
    if (membership) {
        const auto progress = membership->advance(budget);
        if (progress != dialogue::Progress::Finished) return progress;
        membership.reset();
    }
    if (dead) {
        const auto progress = dead->advance(budget);
        if (progress != dialogue::Progress::Finished) return progress;
        dead.reset();
    }
    return dialogue::Progress::Finished;
}
dialogue::Progress Executor::Operation::Execution::advance(unsigned budget) {
    if (complete) return dialogue::Progress::Finished;
    require(!owner.failed && owner.active == this, "Action execution is not active");
    try {
        while (budget--) {
            const auto progress = pump(budget + 1);
            if (progress != dialogue::Progress::Finished) return progress;
            // A newly created synchronous Scene may have completed, but its
            // parent's real response still precedes resuming native action code.
            if (scene || message || shield || meter || window_op || dead || teddy_op || inventory_op || membership) continue;
            if (control.error) std::rethrow_exception(control.error);
            if (!control.next) {
                complete = true; owner.active = nullptr;
                return dialogue::Progress::Finished;
            }
            control.next.resume();
        }
        return dialogue::Progress::BudgetExhausted;
    } catch (...) { owner.failed = true; throw; }
}
} // namespace eb::native::battle::actions
