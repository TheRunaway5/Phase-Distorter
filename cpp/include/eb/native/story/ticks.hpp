#pragma once

#include "eb/native/dialogue/window_host.hpp"
#include "eb/native/party/meter_windows.hpp"
#include "eb/native/party/meters.hpp"
#include "eb/native/story/random.hpp"
#include <functional>
#include <optional>

namespace eb::native::story {
enum class TickKind {
    Window, World, WorldFrame, Frame,
    // C03CFD's OAM_CLEAR -> RUN_ACTIONSCRIPT_FRAME -> UPDATE_SCREEN ->
    // WAIT_UNTIL_NEXT_FRAME sequence. It bypasses world/meter work and the
    // battle branch, but retains the live recursive-actor guard.
    ActorFrame
};
enum class TickService { ClearObjects, RunActors, UpdateScreen, FrameBoundary, BattleHelper };
enum class TickCheckpoint {
    Random, EarlyReturn, InstantReturn, DrawWindows, RollMeters,
    MeterAreaPublication, UpdateMeters, StatusPalette, WindowPublication,
    MeterPalette, ActorsSuppressed, Complete
};
struct TickState {
    // Source NMI increments only the low byte. The scene owns its clock and
    // input boundary; neither parser work nor a service response advances it.
    std::uint8_t frame_counter{}, flavor = 1, fastest_hp_increase{};
    std::uint16_t disabled_transitions{}, flipout{}, last_controlled_status{}, action_scripts_disabled{};
    std::uint32_t hp_speed{};
    // NMI increments the original byte with wrap. WAIT consumes it without
    // forcing a second publication. IRQ-only timing needs its actual H/V
    // interrupt owner; Scene currently admits NMI or an already-pending byte.
    std::uint8_t new_frame_started{}, interrupt_mask = 0x80;
    // The low-WRAM mirror can be overwritten without a hardware write.
    // Ordinary callers keep one synchronized value; null-destination palette
    // restoration retains the real hardware enable before clearing the mirror.
    std::optional<std::uint8_t> retained_hardware_interrupt_mask{};
    std::uint8_t effective_interrupt_mask() const noexcept {
        return retained_hardware_interrupt_mask.value_or(interrupt_mask);
    }
    void retain_interrupt_hardware() noexcept {
        retained_hardware_interrupt_mask=effective_interrupt_mask();
    }
    // Receipt for a completed real input poll, distinct from display IRQs.
    std::uint64_t input_polls{};
    // Completion receipt for accepted native NMI publication, independent of
    // the original wrapping pending/counter bytes. Never advanced by sampling.
    std::uint64_t publications{};
};

// WINDOW_TICK / C12E42 / C1004E and the raw actor-frame sequence in source order.
// The actual native scene owns
// actor work, immutable screen output and frame/input completion. A pending
// service must finish before responding; repeated advance leaves it unchanged.
// All borrowed owners remain alive and stable through every operation.
class Ticks {
  public:
    class Operation {
      public:
        ~Operation();
        Operation(const Operation &) = delete;
        Operation &operator=(const Operation &) = delete;
        dialogue::Progress advance(unsigned work_budget = 4096);
        const std::optional<TickService> &service() const;
        // True only at C43568's WAIT reached after the actual window/world
        // gates. This admits its native body without speculating past exits.
        bool battle_body_pending() const noexcept;
        void respond();
        bool complete() const;
      private:
        friend class Ticks;
        struct Execution;
        explicit Operation(std::unique_ptr<Execution>);
        std::unique_ptr<Execution> execution_;
    };
    Ticks(dialogue::WindowHost &, party::State &, RandomState &, party::MeterWindows &, TickState &);
    ~Ticks();
    Ticks(const Ticks &) = delete;
    Ticks &operator=(const Ticks &) = delete;
    std::unique_ptr<Operation> begin(TickKind);
    // Actor services can synchronously call dialogue, whose ticks preserve the
    // suspended parent. Source DISABLE_ACTIONSCRIPT suppresses recursive pumps.
    std::unique_ptr<Operation> begin_nested(TickKind, Operation &parent);
    // Diagnostic read-only checkpoints. Observers must not mutate scene state
    // or execute callbacks; only the explicit service boundaries permit that.
    void observe(std::function<void(TickCheckpoint)>);
  private:
    struct Execution;
    std::unique_ptr<Execution> execution_;
    std::unique_ptr<Operation> begin(TickKind, std::uint64_t parent);
};
} // namespace eb::native::story
