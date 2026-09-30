#pragma once

#include <array>
#include <cstddef>
#include <cstdint>
#include <memory>

namespace eb::native {
class GeneratedInputSequence;
namespace npcs {
struct InteractionState;
}
namespace story {
struct InputState;
}

struct WorldRawInputState {
  std::array<std::uint16_t, 2> raw{};
  std::uint16_t flags{}, initial_pad{};
  bool operator==(const WorldRawInputState &) const = default;
};

enum class WorldInputInstall { Installed, AlreadyActive, Empty };

// Owns raw controller words and playback position before story::poll_input.
// The countdown is the actual InteractionState word read by walking/doors.
// Rendering and actor traversal never consume this owner implicitly.
class WorldInputPlayback {
public:
  static constexpr std::uint16_t playback_flag = 0x4000;
  static constexpr std::uint16_t recording_flag = 0x8000;

  WorldInputPlayback(npcs::InteractionState &, story::InputState &,
                     WorldRawInputState initial = {});
  WorldInputPlayback(const WorldInputPlayback &) = delete;
  WorldInputPlayback &operator=(const WorldInputPlayback &) = delete;

  bool uses(const npcs::InteractionState &,
            const story::InputState &) const noexcept;
  bool uses(const npcs::InteractionState &) const noexcept;
  const WorldRawInputState &state() const noexcept { return state_; }
  std::size_t run_index() const noexcept { return run_index_; }
  const std::shared_ptr<const GeneratedInputSequence> &
  sequence() const noexcept {
    return sequence_;
  }
  bool active() const noexcept { return state_.flags & playback_flag; }
  bool recording_required() const noexcept {
    return state_.flags & recording_flag;
  }

  // C083E3: an active install is a complete no-op, including content
  // inspection. Empty input clears every flag, retaining prior
  // raw/countdown/cursor state.
  WorldInputInstall install(std::shared_ptr<const GeneratedInputSequence>);
  // C083B8 is distinct from normal playback completion: it clears all flags.
  void clear_flags() noexcept;
  // READ_JOYPAD consumes exactly one raw-input phase. A terminator samples both
  // host pads in this same call; retained playback does not touch host values.
  void read(std::array<std::uint16_t, 2> host);
  // Complete C08496 when recording is inactive. Active recording is an explicit
  // unported dependency, rejected before raw/countdown/processed input changes.
  void poll(std::array<std::uint16_t, 2> host, std::uint16_t debug = 0);

private:
  npcs::InteractionState &interaction_;
  story::InputState &input_;
  WorldRawInputState state_;
  std::shared_ptr<const GeneratedInputSequence> sequence_;
  std::size_t run_index_{};
};
} // namespace eb::native
