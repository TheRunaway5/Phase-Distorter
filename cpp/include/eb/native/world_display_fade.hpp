#pragma once
#include <cstdint>
#include <optional>
#include <memory>
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
  // Direct INIDISP mirror write used by the two original blank helpers.
  void force_blank(bool stop_fade = false) noexcept;
  // Synchronous fade helpers clear this word but retain the adjacent NMI
  // countdown. Their direct brightness writes do not start an NMI fade.
  void clear_parameters() noexcept;
  void write_brightness(std::uint8_t) noexcept;
  std::weak_ptr<const void> source_lifetime() const noexcept { return lifetime_; }
  bool active() const noexcept { return state_.step != 0; }
  const WorldDisplayFadeState &state() const noexcept { return state_; }
  // Established only by a completed real NMI commit. Mirror writes and
  // previews do not establish hardware state for physical work admission.
  std::optional<std::uint8_t> displayed_brightness() const noexcept {return displayed_brightness_;}
  Frame preview_next_frame() const noexcept;
  void commit_frame(const Frame &);
private:
  std::shared_ptr<const void> lifetime_ = std::make_shared<const unsigned>(0);
  WorldDisplayFadeState state_;
  std::optional<std::uint8_t> displayed_brightness_;
  std::uint64_t revision_{};
};
} // namespace eb::native
