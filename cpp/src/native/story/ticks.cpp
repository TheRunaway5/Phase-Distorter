#include "eb/native/story/ticks.hpp"
#include "eb/native/party/condition.hpp"
#include <stdexcept>

namespace eb::native::story {
namespace {
void require(bool value, const char *message) { if (!value) throw std::logic_error(message); }
}
struct Ticks::Execution {
    dialogue::WindowHost &windows;
    party::State &party;
    RandomState &random;
    party::MeterWindows &meters;
    TickState &state;
    std::vector<std::uint64_t> stack;
    std::uint64_t next{};
    bool poisoned{};
    std::function<void(TickCheckpoint)> observer;
    void check(std::uint64_t owner) const {
        require(!poisoned, "An abandoned tick invalidated the scene continuation");
        require((stack.empty() ? 0 : stack.back()) == owner, "A child tick owns the scene continuation");
    }
    void observed(TickCheckpoint checkpoint) const { if (observer) observer(checkpoint); }
    void roll() {
        const auto &prompt = windows.prompt_state();
        party::advance_meters(party, state.frame_counter,
            {prompt.rolling_disabled, prompt.half_meter_speed, state.fastest_hp_increase,
             state.flipout, state.hp_speed});
        observed(TickCheckpoint::RollMeters);
    }
};
struct Ticks::Operation::Execution {
    Ticks::Execution &shared;
    TickKind kind;
    std::uint64_t owner{};
    bool done{}, actor_guard{};
    std::optional<TickService> pending;
    enum class Stage {
        Start, Gates, Draw, Roll, MeterArea, UpdateMeters, Palette, Publish,
        World, ClearObjects, Actors, Screen, Frame, Battle, Finish
    } stage = Stage::Start;
    Execution(Ticks::Execution &s, TickKind k, std::uint64_t token) : shared(s), kind(k), owner(token) {}
    void effect(TickService service, Stage next) { pending = service; stage = next; }
    void step() {
        auto &s = shared;
        auto &state = s.state;
        auto &meters = s.meters.state();
        switch (stage) {
        case Stage::Start:
            if (kind == TickKind::Frame) stage = Stage::Frame;
            else if (kind == TickKind::ActorFrame) stage = Stage::ClearObjects;
            else if (kind == TickKind::WorldFrame) stage = Stage::World;
            else if (kind == TickKind::World) stage = Stage::Roll;
            else {
                (void)next_random(s.random);
                s.observed(TickCheckpoint::Random);
                stage = Stage::Gates;
            }
            break;
        case Stage::Gates:
            if (s.windows.version() == GameVersion::US && s.windows.menu_state().early_tick_exit) {
                s.windows.menu_state().early_tick_exit = 0;
                s.observed(TickCheckpoint::EarlyReturn);
                stage = Stage::Finish;
            } else if (s.windows.output().policy().instant) {
                s.observed(TickCheckpoint::InstantReturn);
                stage = Stage::Finish;
            } else stage = Stage::Draw;
            break;
        case Stage::Draw:
            if (s.windows.output().redraw_pending() && meters.render) s.meters.draw_all();
            s.windows.draw_tick();
            s.observed(TickCheckpoint::DrawWindows);
            stage = Stage::Roll;
            break;
        case Stage::Roll:
            s.roll();
            stage = kind == TickKind::Window ? Stage::UpdateMeters : Stage::MeterArea;
            break;
        case Stage::MeterArea:
            if (meters.area_dirty) {
                s.windows.queue_meter_area();
                meters.area_dirty = 0;
                meters.upload = 1;
                s.observed(TickCheckpoint::MeterAreaPublication);
            }
            stage = Stage::UpdateMeters;
            break;
        case Stage::UpdateMeters:
            if (kind == TickKind::Window) meters.upload = 1;
            s.meters.update(state.frame_counter);
            s.observed(TickCheckpoint::UpdateMeters);
            stage = kind == TickKind::Window ? Stage::Palette : Stage::World;
            break;
        case Stage::Palette:
            if (!state.disabled_transitions &&
                party::refresh_last_controlled_status(s.party, state.last_controlled_status)) {
                s.windows.publish_palette(state.flavor, party::last_controlled_status(s.party) != 0);
                s.observed(TickCheckpoint::StatusPalette);
            }
            stage = Stage::Publish;
            break;
        case Stage::Publish:
            meters.area_dirty = 0;
            s.windows.queue_scene();
            s.observed(TickCheckpoint::WindowPublication);
            stage = Stage::World;
            break;
        case Stage::World:
            if (meters.render) {
                s.windows.animate_palette(state.flavor, state.frame_counter);
                s.observed(TickCheckpoint::MeterPalette);
            }
            if (s.windows.prompt_state().battle_mode)
                effect(TickService::FrameBoundary, Stage::Battle);
            else stage = Stage::ClearObjects;
            break;
        case Stage::ClearObjects:
            effect(TickService::ClearObjects, Stage::Actors);
            break;
        case Stage::Actors:
            if (state.action_scripts_disabled) {
                s.observed(TickCheckpoint::ActorsSuppressed);
                stage = Stage::Screen;
            } else {
                ++state.action_scripts_disabled;
                actor_guard = true;
                effect(TickService::RunActors, Stage::Screen);
            }
            break;
        case Stage::Screen: effect(TickService::UpdateScreen, Stage::Frame); break;
        case Stage::Frame: effect(TickService::FrameBoundary, Stage::Finish); break;
        case Stage::Battle: effect(TickService::BattleHelper, Stage::Finish); break;
        case Stage::Finish:
            s.stack.pop_back();
            done = true;
            s.observed(TickCheckpoint::Complete);
            break;
        }
    }
};
Ticks::Ticks(dialogue::WindowHost &windows, party::State &party, RandomState &random,
             party::MeterWindows &meters, TickState &state)
    : execution_(std::make_unique<Execution>(Execution{windows, party, random, meters, state, {}, 0, false, {}})) {
    require(windows.version() == party.version(), "Tick owners must share a region");
    require(meters.bound_to(windows, party), "Tick and meter services must share their window and party owners");
}
Ticks::~Ticks() = default;
Ticks::Operation::Operation(std::unique_ptr<Execution> execution) : execution_(std::move(execution)) {}
Ticks::Operation::~Operation() {
    if (!execution_->done) execution_->shared.poisoned = true;
}
std::unique_ptr<Ticks::Operation> Ticks::begin(TickKind kind, std::uint64_t parent) {
    auto &e = *execution_;
    e.check(parent);
    const auto owner = ++e.next;
    auto operation = std::unique_ptr<Operation>(new Operation(std::make_unique<Operation::Execution>(e, kind, owner)));
    e.stack.push_back(owner);
    return operation;
}
std::unique_ptr<Ticks::Operation> Ticks::begin(TickKind kind) { return begin(kind, 0); }
std::unique_ptr<Ticks::Operation> Ticks::begin_nested(TickKind kind, Operation &parent) {
    const auto &p = *parent.execution_;
    require(&p.shared == execution_.get() && !p.done && p.pending == TickService::RunActors,
            "Nested ticks require this host's suspended actor service");
    return begin(kind, p.owner);
}
void Ticks::observe(std::function<void(TickCheckpoint)> observer) {
    execution_->check(0);
    execution_->observer = std::move(observer);
}
dialogue::Progress Ticks::Operation::advance(unsigned budget) {
    auto &e = *execution_;
    if (e.done) return dialogue::Progress::Finished;
    e.shared.check(e.owner);
    if (e.pending) return dialogue::Progress::Suspended;
    while (budget--) {
        e.step();
        if (e.done) return dialogue::Progress::Finished;
        if (e.pending) return dialogue::Progress::Suspended;
    }
    return dialogue::Progress::BudgetExhausted;
}
const std::optional<TickService> &Ticks::Operation::service() const { return execution_->pending; }
void Ticks::Operation::respond() {
    auto &e = *execution_;
    e.shared.check(e.owner);
    require(e.pending.has_value(), "Tick has no pending scene service");
    if (e.actor_guard) {
        require(e.pending == TickService::RunActors, "Tick actor guard outlived its service");
        e.shared.state.action_scripts_disabled = 0;
        e.actor_guard = false;
    }
    e.pending.reset();
}
bool Ticks::Operation::complete() const { return execution_->done; }
} // namespace eb::native::story
