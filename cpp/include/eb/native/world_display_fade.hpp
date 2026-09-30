#pragma once
#include <cstdint>
namespace eb::native {
struct WorldDisplayFadeState {
  // Exact authored brightness byte: bit7 forces blank; low4 is intensity.
  std::uint8_t brightness = 0x80, step{}, delay{}, remaining{};
  bool operator==(const WorldDisplayFadeState &) const = default;
};
// FADE_IN/FADE_OUT and the actual per-publication NMI brightness phase. It
// owns no palette, row stream, input or frame clock. The scene uses a preview
// while preparing output, then commits exactly once after publication. Merely
// sampling or retrying a capture cannot consume a fade step.
class WorldDisplayFade {
public:
  class Frame {
  public:
    const WorldDisplayFadeState &state() const noexcept { return next_; }
    bool disables_row_streams() const noexcept { return disable_rows_; }
    unsigned intensity() const noexcept { return next_.brightness & 0x80 ? 0 : next_.brightness & 15; }
  private:
    friend class WorldDisplayFade;
    const WorldDisplayFade *owner_{};
    std::uint64_t revision_{};
    WorldDisplayFadeState next_{};
    bool disable_rows_{};
  };
  explicit WorldDisplayFade(WorldDisplayFadeState initial = {}) : state_(initial) {}
  WorldDisplayFade(const WorldDisplayFade &) = delete;
  WorldDisplayFade &operator=(const WorldDisplayFade &) = delete;
  void begin_in(std::uint16_t step, std::uint16_t delay);
  void begin_out(std::uint16_t magnitude, std::uint16_t delay);
  bool active() const noexcept { return state_.step != 0; }
  const WorldDisplayFadeState &state() const noexcept { return state_; }
  Frame preview_next_frame() const noexcept;
  void commit_frame(const Frame &);
private:
  WorldDisplayFadeState state_;
  std::uint64_t revision_{};
};
} // namespace eb::native
