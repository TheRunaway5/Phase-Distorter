#pragma once

#include "eb/game_version.hpp"
#include "eb/logical_clock_policy.hpp"
#include "eb/presentation_frame.hpp"
#include <cstdint>
#include <functional>
#include <memory>
#include <span>
#include <string>
#include <vector>

namespace eb {
class GameDebug;

struct SessionDiagnostics {
    std::uint64_t frames{}, steps{}, master_clocks{};
    std::uint64_t cpu_instructions{}, audio_cpu_instructions{}, audio_frames{};
    std::uint64_t native_gameplay_batches{};
    unsigned source_width{};
    std::string cpu_state, audio_cpu_state;
};

// Owns one game's hardware, translated processors, audio synthesis and debug
// commands. Simulation receives explicit controller input and has no host clock,
// SDL window, physical input polling, file access, or presentation-rate policy.
class GameSession {
  public:
    using FrameObserver = std::function<void(PresentationFrame)>;

    GameSession(std::span<const std::uint8_t> cartridge, GameVersion version,
                bool enhanced_gameplay_timing = true);
    ~GameSession();
    GameSession(const GameSession &) = delete;
    GameSession &operator=(const GameSession &) = delete;

    // Advance until the next hardware frame or the absolute instruction-step
    // limit. A single DMA stall may complete several frames; observers receive
    // every frame before its pixels can be overwritten. Zero means no limit.
    std::uint64_t advance_frame(std::uint16_t buttons, std::uint64_t step_limit = 0);
    std::uint64_t frames() const;
    std::uint64_t steps() const;
    GameVersion game_version() const;

    // Borrowed pictures remain valid only until the next simulation/configure
    // call. Completed-frame observers must consume/copy the view synchronously
    // and must not re-enter or mutate the session.
    PresentationFrame presentation_frame() const;
    std::span<const std::uint32_t, 256 * 224> native_pixels() const;
    void configure_presentation(unsigned width, bool identify_flashing_effects, bool direct_rendering = false);
    // Use owned sprite artwork after validated game content has been loaded.
    // This does not change the actor scheduler, animation cadence or input.
    void enable_host_sprite_resources(bool enabled = true);
    // Select host-owned overworld graphics at startup. The frontend enables
    // this except with --original-timing; isolated sessions opt in explicitly.
    void enable_native_sprite_runtime(bool enabled = true);
    // Explicit startup policy, independent of native artwork. The default
    // preserves source timing; selecting artwork alone does not change it.
    void set_logical_clock_policy(LogicalClockPolicy policy);
    LogicalClockPolicy logical_clock_policy() const;
    void observe_completed_frames(FrameObserver observer);

    std::vector<std::int16_t> take_audio_samples();
    std::span<std::uint8_t> save_memory();
    std::span<const std::uint8_t> save_memory() const;
    SessionDiagnostics diagnostics(bool include_registers = false) const;
    GameDebug &debug();

    // Persistent, versioned complete machine state. Loading validates the
    // cartridge and complete archive into a new owner before replacing play.
    // The current completed-frame observer remains attached after restoration.
    std::vector<std::uint8_t> save_snapshot() const;
    void load_snapshot(std::span<const std::uint8_t> snapshot);

  private:
    struct State;
    std::unique_ptr<State> state_;
};
} // namespace eb
