#include "eb/native/world_scheduler.hpp"
#include "eb/native/world_maintenance.hpp"
#include "native_interaction_test_assets.hpp"
#include <functional>
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
using Callback = WorldScheduledCallback;
unsigned checks{};
void check(bool value, const char *why) {
  ++checks;
  if (!value) throw std::runtime_error(why);
}
template <class F> void rejects(F &&f, const char *why) {
  bool rejected = false;
  try { f(); } catch (const std::exception &) { rejected = true; }
  check(rejected, why);
}
struct Callbacks : WorldSchedulerCallbacks {
  std::vector<Callback> calls;
  std::function<void(Callback, WorldScheduler &)> action;
  void run(Callback c, WorldScheduler &s) {
    calls.push_back(c);
    if (action) action(c, s);
  }
  void escalator_enter(WorldScheduler &s) override { run(Callback::EscalatorEnter, s); }
  void escalator_exit(WorldScheduler &s) override { run(Callback::EscalatorExit, s); }
  void stairs_enter(WorldScheduler &s) override { run(Callback::StairsEnter, s); }
  void stairs_exit(WorldScheduler &s) override { run(Callback::StairsExit, s); }
};
struct Fixture {
  dialogue::State text;
  dialogue::TextOutput output;
  dialogue::WindowHost windows;
  story::TickState clock;
  npcs::DadPhoneState phone;
  AppearanceSceneContext appearance;
  WorldMaintenanceState maintenance;
  Callbacks callbacks;
  WorldScheduler scheduler;
  explicit Fixture(eb::GameVersion version)
      : output(interaction_test_assets::assets(version).fonts, text),
        windows(interaction_test_assets::assets(version).input.import(), text, output),
        scheduler(windows, clock, phone, appearance, maintenance) {
    scheduler.bind_callbacks(callbacks);
    clock.frame_counter = 23;
  }
  void open() {
    auto op = windows.begin({dialogue::WindowAction::Open, dialogue::WindowId{0}, {}, 0});
    check(op->advance() == dialogue::OutputProgress::Suspended, "Window fixture did not open");
    op->respond();
    check(op->advance() == dialogue::OutputProgress::Complete, "Window fixture did not finish");
  }
};
void basic(eb::GameVersion region) {
  Fixture f(region);
  check(f.scheduler.uses(f.windows, f.clock, f.phone, f.appearance, f.maintenance), "Scheduler lost owner identities");
  Fixture other(region);
  check(!f.scheduler.uses(other.windows, f.clock, f.phone, f.appearance, f.maintenance), "Foreign window host accepted");
  check(!f.scheduler.uses(f.windows, other.clock, f.phone, f.appearance, f.maintenance), "Foreign frame counter accepted");
  check(!f.scheduler.uses(f.windows, f.clock, other.phone, f.appearance, f.maintenance), "Foreign phone timer accepted");
  check(!f.scheduler.uses(f.windows, f.clock, f.phone, other.appearance, f.maintenance), "Foreign swirl owner accepted");
  check(!f.scheduler.uses(f.windows, f.clock, f.phone, f.appearance, other.maintenance), "Foreign battle/enemy owner accepted");
  f.scheduler.bind_callbacks(f.callbacks);
  rejects([&] { f.scheduler.bind_callbacks(other.callbacks); }, "Foreign callback owner replaced live binding");
  f.scheduler.clear_callbacks(other.callbacks);
  check(f.scheduler.bound_to(f.callbacks), "Foreign callback teardown cleared owner");
  rejects([&] { f.scheduler.schedule(1, static_cast<Callback>(99)); }, "Unsupported callback accepted");
  check(f.scheduler.schedule(0, Callback::StairsExit) == 0, "Zero delay did not write first free slot");
  check(f.scheduler.tasks()[0] == WorldScheduledTask{0, Callback::StairsExit}, "Zero delay lost callback payload");
  check(f.scheduler.schedule(1, Callback::EscalatorEnter) == 0, "Zero delay blocked slot reuse");
  check(f.scheduler.schedule(2, Callback::EscalatorExit) == 1, "Second slot ordering changed");
  check(f.scheduler.schedule(0xffff, Callback::StairsEnter) == 2, "Third slot ordering changed");
  check(f.scheduler.schedule(1, Callback::StairsExit) == 3, "Fourth slot ordering changed");
  const auto full = f.scheduler.tasks();
  check(!f.scheduler.schedule(1, Callback::EscalatorEnter) && f.scheduler.tasks() == full,
        "Capacity rejection changed scheduled records");
  f.phone = {7, 9};
  check(f.scheduler.process_frame() && f.callbacks.calls == std::vector<Callback>{Callback::EscalatorEnter, Callback::StairsExit},
        "Callbacks did not run immediately in slot order");
  check(f.scheduler.tasks()[1].frames_left == 1 && f.scheduler.tasks()[2].frames_left == 0xfffe,
        "16-bit task countdown changed");
  check(f.clock.frame_counter == 23 && f.phone == npcs::DadPhoneState{7, 9}, "Scheduler advanced a clock or phone at a nonzero frame");
  check(f.scheduler.available_slot() == 0, "Expired task did not free its slot");
  f.scheduler.process_frame();
  check(f.callbacks.calls.back() == Callback::EscalatorExit && f.scheduler.tasks()[2].frames_left == 0xfffd,
        "Later frame callback delay changed");
}
void gates(eb::GameVersion region) {
  for (unsigned gate = 0; gate < 16; ++gate)
    for (unsigned frame : {0u, 1u, 255u})
      for (unsigned timer : {0u, 1u, 65535u}) {
        Fixture f(region);
        f.clock.frame_counter = frame;
        f.phone = {std::uint16_t(timer), 7};
        if (gate & 1) f.open();
        f.maintenance.battle_mode_flag = gate & 2;
        f.appearance.battle_swirl_ticks = gate & 4;
        f.maintenance.enemy_touched = gate & 8;
        // The distinct prompt battle mode is not this source gate.
        f.windows.prompt_state().battle_mode = 0xffff;
        f.scheduler.schedule(1, Callback::EscalatorEnter);
        f.scheduler.process_frame();
        check(f.phone.timer == (frame == 0 && timer ? timer - 1 : timer) && f.phone.queued == 7,
              "Phone cadence or ordering relative to pause gates changed");
        check(f.clock.frame_counter == frame, "Scheduler incremented the source counter");
        check(f.callbacks.calls.size() == unsigned(!gate) && f.scheduler.tasks()[0].frames_left == unsigned(bool(gate)),
              "Scheduler used the wrong live pause gate");
      }
}
void live_scan(eb::GameVersion region) {
  Fixture f(region);
  f.scheduler.schedule(1, Callback::EscalatorEnter);
  f.callbacks.action = [&](Callback c, WorldScheduler &s) {
    if (c != Callback::EscalatorEnter) return;
    check(s.schedule(1, Callback::StairsEnter) == 0, "Callback did not reuse current freed slot");
    check(s.schedule(1, Callback::StairsExit) == 1, "Callback did not use later free slot");
    f.maintenance.battle_mode_flag = 1;
    check(!s.process_frame(), "Recursive scheduler entry ran another frame");
  };
  f.clock.frame_counter = 0;
  f.phone.timer = 5;
  f.scheduler.process_frame();
  check(f.callbacks.calls == std::vector<Callback>{Callback::EscalatorEnter, Callback::StairsExit},
        "Live scan deferred a newly inserted later task or rechecked pause gates mid-scan");
  check(f.scheduler.tasks()[0].frames_left == 1 && f.scheduler.tasks()[1].frames_left == 0,
        "Current slot was decremented again or later slot was skipped");
  check(f.phone.timer == 4, "Recursive callback consumed phone cadence twice");
  f.maintenance.battle_mode_flag = 0;
  ++f.clock.frame_counter;
  f.scheduler.process_frame();
  check(f.callbacks.calls.back() == Callback::StairsEnter, "Rescheduled current slot did not wait for next frame");

  Fixture later(region);
  later.scheduler.schedule(1, Callback::EscalatorEnter);
  later.scheduler.schedule(1, Callback::EscalatorExit);
  later.callbacks.action = [&](Callback c, WorldScheduler &s) {
    if (c == Callback::EscalatorExit)
      check(s.schedule(1, Callback::StairsEnter) == 0, "Earlier expired slot was not reused");
  };
  later.scheduler.process_frame();
  check(later.callbacks.calls.size() == 2 && later.scheduler.tasks()[0].frames_left == 1,
        "Callback insertion into earlier slot ran twice in one scan");
}
void lifecycle(eb::GameVersion region) {
  Fixture f(region);
  f.scheduler.clear_callbacks(f.callbacks);
  check(!f.scheduler.failed() && !f.scheduler.bound_to(f.callbacks), "Idle callback detachment poisoned scheduler");
  rejects([&] { f.scheduler.schedule(1, Callback::StairsEnter); }, "Schedule succeeded without real callback owner");
  f.scheduler.bind_callbacks(f.callbacks);
  f.scheduler.schedule(1, Callback::StairsEnter);
  f.scheduler.clear_callbacks(f.callbacks);
  const auto saved = f.scheduler.tasks();
  f.clock.frame_counter = 0;
  f.phone.timer = 7;
  check(f.scheduler.failed(), "Abandoned scheduled callbacks did not poison owner");
  rejects([&] { f.scheduler.process_frame(); }, "Poisoned scheduler advanced");
  check(f.scheduler.tasks() == saved && f.phone.timer == 7, "Poisoned processing mutated state");
  rejects([&] { f.scheduler.bind_callbacks(f.callbacks); }, "Poisoned scheduler rebound callbacks");

  Fixture throwing(region);
  throwing.scheduler.schedule(1, Callback::EscalatorEnter);
  throwing.scheduler.schedule(1, Callback::EscalatorExit);
  throwing.callbacks.action = [](Callback, WorldScheduler &) { throw std::runtime_error("Callback failed"); };
  rejects([&] { throwing.scheduler.process_frame(); }, "Callback exception was swallowed");
  check(throwing.scheduler.failed() && !throwing.scheduler.processing() && throwing.callbacks.calls.size() == 1 &&
            throwing.scheduler.tasks()[0].frames_left == 0 && throwing.scheduler.tasks()[1].frames_left == 1,
        "Callback failure replayed or consumed a later task");
  rejects([&] { throwing.scheduler.schedule(1, Callback::StairsExit); }, "Failed scheduler accepted more work");
}
}
int main() {
  try {
    for (auto version : {eb::GameVersion::US, eb::GameVersion::JP}) {
      basic(version); gates(version); live_scan(version); lifecycle(version);
    }
    std::cout << "Native world scheduler checks: " << checks << '\n';
    return 0;
  } catch (const std::exception &e) { std::cerr << e.what() << '\n'; return 1; }
}
