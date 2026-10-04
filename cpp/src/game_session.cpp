#include "eb/game_session.hpp"

#include "eb/game_debug.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_audio_dsp.hpp"
#include "eb/snes_bus.hpp"
#include "eb/spc700_audio_cpu.hpp"
#include "eb/snapshot_archive.hpp"
#include <algorithm>
#include <limits>
#include <stdexcept>
#include <utility>

namespace eb {
struct GameSession::State {
    // Declaration order is the hardware lifetime graph. Destruction first
    // removes debug/DSP/APU callbacks, then releases the memory they reference.
    SnesBus hardware;
    Spc700AudioCpu audio_cpu;
    SnesAudioDsp audio_dsp;
    MainCpu65816 main_cpu;
    GameDebug game_debug;
    std::uint64_t steps = 0;
    FrameObserver frame_observer;

    State(std::span<const std::uint8_t> cartridge, GameVersion version, bool enhanced_timing)
        : hardware(cartridge, version, true), audio_cpu(hardware), audio_dsp(audio_cpu), main_cpu(hardware),
          game_debug(hardware, main_cpu) {
        main_cpu.reset_from_vector();
        main_cpu.set_gameplay_timing(enhanced_timing);
    }

    PresentationFrame picture() const {
        return {hardware.presentation_pixels(),       hardware.presentation_width(),
                hardware.presentation_fixed_aspect(), hardware.completed_frames,
                hardware.presentation_effect_mask(),  hardware.presentation_effect_reference(), hardware.direct_scene()};
    }
};

GameSession::GameSession(std::span<const std::uint8_t> cartridge, GameVersion version,
                         bool enhanced_gameplay_timing)
    : state_(std::make_unique<State>(cartridge, version, enhanced_gameplay_timing)) {}
GameSession::~GameSession() = default;

std::uint64_t GameSession::advance_frame(std::uint16_t buttons, std::uint64_t step_limit) {
    auto &state = *state_;
    if (step_limit && state.steps >= step_limit)
        return 0;
    state.hardware.set_buttons(buttons);
    const auto previous_frame = state.hardware.completed_frames;
    // Keep this hot-loop counter local, as in the original desktop loop. A
    // member store on every translated instruction adds avoidable aliasing and
    // memory traffic. Observers consume frame views without re-entering us.
    auto completed_steps = state.steps;
    try {
        do {
            if (state.main_cpu.is_stopped)
                throw std::runtime_error("CPU executed STP before the requested run completed");
            state.game_debug.before_step();
            const auto available = step_limit ? std::min<std::uint64_t>(step_limit - completed_steps,
                std::numeric_limits<unsigned>::max()) : std::numeric_limits<unsigned>::max();
            completed_steps += state.main_cpu.advance_gameplay(static_cast<unsigned>(available));
        } while (state.hardware.completed_frames == previous_frame &&
                 (!step_limit || completed_steps < step_limit));
    } catch (...) {
        state.steps = completed_steps; // Preserve partial progress for diagnostics.
        throw;
    }
    state.steps = completed_steps;
    return state.hardware.completed_frames - previous_frame;
}

std::uint64_t GameSession::frames() const {
    return state_->hardware.completed_frames;
}
std::uint64_t GameSession::steps() const {
    return state_->steps;
}
GameVersion GameSession::game_version() const {
    return state_->hardware.game_version();
}
PresentationFrame GameSession::presentation_frame() const {
    return state_->picture();
}
std::span<const std::uint32_t, 256 * 224> GameSession::native_pixels() const {
    return state_->hardware.native_framebuffer;
}

void GameSession::configure_presentation(unsigned width, bool identify_flashing_effects, bool direct_rendering) {
    state_->hardware.set_presentation_width(width);
    // Static placements use host-owned artwork. Moving NPCs and enemies enter
    // the wider view through their source loaders with shared capacity checks.
    state_->main_cpu.set_world_preload_width(state_->hardware.native_sprite_runtime() ? width : 256);
    state_->hardware.set_presentation_effects_enabled(identify_flashing_effects);
    state_->hardware.set_direct_rendering_enabled(direct_rendering);
}

void GameSession::enable_host_sprite_resources(bool enabled) {
    state_->hardware.enable_host_sprite_resources(enabled);
}
void GameSession::enable_native_sprite_runtime(bool enabled) {
    state_->hardware.enable_native_sprite_runtime(enabled, enabled);
    state_->main_cpu.set_world_preload_width(enabled ? state_->hardware.presentation_width() : 256);
}
void GameSession::set_logical_clock_policy(LogicalClockPolicy policy) {
    state_->hardware.set_logical_clock_policy(policy);
}
LogicalClockPolicy GameSession::logical_clock_policy() const {
    return state_->hardware.logical_clock_policy();
}

void GameSession::observe_completed_frames(FrameObserver observer) {
    state_->frame_observer = std::move(observer);
    if (!state_->frame_observer) {
        state_->hardware.on_presentation_frame = {};
        return;
    }
    state_->hardware.on_presentation_frame = [state = state_.get()](std::span<const std::uint32_t> pixels,
                                                                    unsigned width, std::uint64_t frame) {
        auto picture = state->picture();
        picture.pixels = pixels;
        picture.width = width;
        picture.frame = frame;
        state->frame_observer(picture);
    };
}

std::vector<std::int16_t> GameSession::take_audio_samples() {
    return state_->audio_dsp.take_stereo_samples();
}
std::span<std::uint8_t> GameSession::save_memory() {
    return state_->hardware.save_ram;
}
std::span<const std::uint8_t> GameSession::save_memory() const {
    return state_->hardware.save_ram;
}

SessionDiagnostics GameSession::diagnostics(bool include_registers) const {
    SessionDiagnostics snapshot;
    snapshot.frames = frames();
    snapshot.steps = steps();
    snapshot.source_width = state_->hardware.presentation_width();
    snapshot.master_clocks = state_->hardware.master_clocks();
    snapshot.cpu_instructions = state_->main_cpu.instruction_count;
    snapshot.native_gameplay_batches = state_->main_cpu.native_gameplay_batches();
    snapshot.audio_cpu_instructions = state_->audio_cpu.instruction_count;
    snapshot.audio_frames = state_->audio_dsp.generated_stereo_frame_count();
    if (include_registers) {
        snapshot.cpu_state = state_->main_cpu.describe_registers();
        snapshot.audio_cpu_state = state_->audio_cpu.describe_registers();
    }
    return snapshot;
}

GameDebug &GameSession::debug() {
    return state_->game_debug;
}

std::vector<std::uint8_t> GameSession::save_snapshot() const {
    SnapshotArchive machine;
    machine(state_->hardware, state_->audio_cpu, state_->audio_dsp, state_->main_cpu,
            state_->game_debug, state_->steps);
    auto payload = machine.release_bytes();
    std::array<std::uint8_t, 8> magic{'P', 'D', 'S', 'N', 'A', 'P', '0', '1'};
    std::uint32_t format = 5;
    auto version = game_version();
    auto content = snapshot_checksum(state_->hardware.cartridge_image());
    auto checksum = snapshot_checksum(payload);
    SnapshotArchive file;
    file(magic, format, version, content, checksum);
    file.blob(payload);
    return file.release_bytes();
}

void GameSession::load_snapshot(std::span<const std::uint8_t> snapshot) {
    SnapshotArchive file(snapshot);
    std::array<std::uint8_t, 8> magic{};
    std::uint32_t format{};
    GameVersion version{};
    std::uint64_t content{}, checksum{};
    std::vector<std::uint8_t> payload;
    file(magic, format, version, content, checksum);
    if (magic != std::array<std::uint8_t, 8>{'P', 'D', 'S', 'N', 'A', 'P', '0', '1'} ||
        (format < 1 || format > 5))
        throw std::runtime_error("Snapshot format is not supported by this build");
    if (version != game_version() || content != snapshot_checksum(state_->hardware.cartridge_image()))
        throw std::runtime_error("Snapshot belongs to different game content");
    file.blob(payload);
    file.finish();
    if (checksum != snapshot_checksum(payload)) throw std::runtime_error("Snapshot checksum does not match");

    auto candidate = std::make_unique<State>(state_->hardware.cartridge_image(), version, false);
    SnapshotArchive machine(payload, format);
    machine(candidate->hardware, candidate->audio_cpu, candidate->audio_dsp, candidate->main_cpu,
            candidate->game_debug, candidate->steps);
    machine.finish();
    if (format < 3)
        candidate->main_cpu.set_world_preload_width(candidate->hardware.native_sprite_runtime()
                                                    ? candidate->hardware.presentation_width() : 256);
    // Host consumers belong to this session, not to the historical snapshot.
    // Prepare the callback before the no-throw ownership swap so any failure
    // leaves the current machine and its observer untouched.
    candidate->frame_observer = state_->frame_observer;
    if (candidate->frame_observer) {
        candidate->hardware.on_presentation_frame = [state = candidate.get()](std::span<const std::uint32_t> pixels,
                                                                            unsigned width, std::uint64_t frame) {
            auto picture = state->picture();
            picture.pixels = pixels;
            picture.width = width;
            picture.frame = frame;
            state->frame_observer(picture);
        };
    }
    state_.swap(candidate);
}
} // namespace eb
