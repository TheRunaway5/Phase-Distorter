#pragma once

#include <array>
#include <cstdint>
#include <optional>

namespace eb::native {
class WorldScheduler;
struct AppearanceSceneContext;
struct WorldMaintenanceState;
namespace dialogue { class WindowHost; }
namespace npcs { struct DadPhoneState; }
namespace story { struct TickState; }

// These are named native operations, never original function addresses. Other
// source scheduler clients require their own real native operations before
// they can enter this catalog.
enum class WorldScheduledCallback { EscalatorEnter, EscalatorExit, StairsEnter, StairsExit };
struct WorldScheduledTask {
  std::uint16_t frames_left{};
  WorldScheduledCallback callback{};
  bool operator==(const WorldScheduledTask &) const = default;
};
class WorldSchedulerCallbacks {
public:
  virtual ~WorldSchedulerCallbacks() = default;
  virtual void escalator_enter(WorldScheduler &) = 0;
  virtual void escalator_exit(WorldScheduler &) = 0;
  virtual void stairs_enter(WorldScheduler &) = 0;
  virtual void stairs_exit(WorldScheduler &) = 0;
};

// SCHEDULE_OVERWORLD_TASK / PROCESS_OVERWORLD_TASKS. Owns only four task
// records; the clock, phone and all pause gates remain with their real owners.
// The frame owner invokes process_frame once after frame publication/counter
// increment and before the next raw-input sample. Work budgets, actor passes
// and extra display samples do not invoke it. It never advances those phases.
// Borrowed state owners must remain at stable addresses and outlive this
// owner. A callback service stays alive while bound and clears its binding
// on teardown.
class WorldScheduler {
public:
  WorldScheduler(dialogue::WindowHost &, story::TickState &,
                 npcs::DadPhoneState &, AppearanceSceneContext &,
                 WorldMaintenanceState &);
  WorldScheduler(const WorldScheduler &) = delete;
  WorldScheduler &operator=(const WorldScheduler &) = delete;
  void bind_callbacks(WorldSchedulerCallbacks &);
  // Clearing the matching owner with live tasks invalidates the scheduler;
  // silently discarding scheduled work would report a false completion.
  void clear_callbacks(const WorldSchedulerCallbacks &) noexcept;
  bool bound_to(const WorldSchedulerCallbacks &) const noexcept;
  bool uses(const dialogue::WindowHost &, const story::TickState &,
            const npcs::DadPhoneState &, const AppearanceSceneContext &,
            const WorldMaintenanceState &) const noexcept;
  // The full source array writes outside its owner. Native capacity failure
  // returns nullopt without writing any slot. Delay zero is a real inactive
  // record write and therefore can be reused by the next scheduling call.
  std::optional<unsigned> schedule(std::uint16_t delay, WorldScheduledCallback);
  std::optional<unsigned> available_slot() const noexcept;
  const std::array<WorldScheduledTask, 4> &tasks() const noexcept { return tasks_; }
  // False means suppressed recursive entry, mirroring the IRQ callback guard;
  // gates that pause live tasks still count as a processed frame/phone phase.
  bool process_frame();
  bool processing() const noexcept { return processing_; }
  bool failed() const noexcept { return failed_; }

private:
  void check() const;
  dialogue::WindowHost &windows_;
  story::TickState &clock_;
  npcs::DadPhoneState &phone_;
  AppearanceSceneContext &appearance_;
  WorldMaintenanceState &maintenance_;
  std::array<WorldScheduledTask, 4> tasks_{};
  WorldSchedulerCallbacks *callbacks_{};
  bool processing_{}, failed_{};
};
} // namespace eb::native
