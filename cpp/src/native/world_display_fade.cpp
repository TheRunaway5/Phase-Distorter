#include "eb/native/world_display_fade.hpp"
#include <stdexcept>
namespace eb::native {
void WorldDisplayFade::begin_in(std::uint16_t step, std::uint16_t delay) {
  state_.step = std::uint8_t(step);
  state_.delay = state_.remaining = std::uint8_t(delay);
  ++revision_;
}
void WorldDisplayFade::begin_out(std::uint16_t magnitude, std::uint16_t delay) {
  begin_in(std::uint8_t(0u - magnitude), delay);
}
WorldDisplayFade::Frame WorldDisplayFade::preview_next_frame() const noexcept {
  Frame result;
  result.owner_ = this;
  result.revision_ = revision_;
  auto &next = result.next_ = state_;
  if (!next.step) return result;
  --next.remaining;
  if (!(next.remaining & 0x80)) return result;
  next.remaining = next.delay;
  const auto brightness = std::uint8_t((next.brightness & 15) + next.step);
  if (brightness & 0x80) {
    next.brightness = 0x80;
    next.step = 0;
    result.disable_rows_ = true;
  } else if (brightness >= 16) {
    next.brightness = 15;
    next.step = 0;
  } else next.brightness = brightness;
  return result;
}
void WorldDisplayFade::commit_frame(const Frame &frame) {
  if (frame.owner_ != this || frame.revision_ != revision_)
    throw std::logic_error("Display fade publication is foreign, stale or already committed");
  state_ = frame.next_;
  ++revision_;
}
} // namespace eb::native
