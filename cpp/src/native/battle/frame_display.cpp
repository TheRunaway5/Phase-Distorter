#include "eb/native/battle/frame_display.hpp"
#include <stdexcept>
#include <utility>

namespace eb::native::battle {
void FrameDisplay::update_screen(const BattleCombatantFrame &objects) {
  Screen next{objects, display_.staged_scroll, next_buffer_};
  buffers_[next_buffer_-1] = std::move(next);
  display_request_ = next_buffer_;
  next_buffer_ ^= 3;
}
void FrameDisplay::update_world_screen() {
  Screen next{std::nullopt, display_.staged_scroll, next_buffer_};
  buffers_[next_buffer_-1] = std::move(next);
  display_request_ = next_buffer_;
  next_buffer_ ^= 3;
}
FrameDisplay::Screen FrameDisplay::screen() const {
  return {objects_, display_.scroll, 0};
}
FrameDisplay::Screen FrameDisplay::preview_screen() const {
  if (!pending()) return screen();
  auto next = buffers_[pending_display_id() == 1 ? 0 : 1];
  next.display_id = pending_display_id();
  return next;
}
void FrameDisplay::commit_publication(bool disable_hdma, bool forced_blank) noexcept {
  if (pending()) {
    const auto &next = buffers_[pending_display_id() == 1 ? 0 : 1];
    objects_ = next.objects;
    display_.scroll = next.scroll;
  }
  display_request_ = 0;
  publish_hdma(disable_hdma, forced_blank);
}
void FrameDisplay::publish_hdma(bool disable_hdma, bool forced_blank) noexcept {
  if (disable_hdma) hdma_enable = 0;
  displayed_hdma_enable = forced_blank ? 0 : hdma_enable;
}
void FrameDisplay::install_background(unsigned ordinal) {
  if (ordinal >= 2) throw std::out_of_range("Battle background HDMA ordinal");
  hdma_enable |= std::uint8_t(1u << (5 + ordinal));
}
void FrameDisplay::replace_swirl(unsigned previous_offset, unsigned next_offset) {
  if (previous_offset >= 2 || next_offset >= 2)
    throw std::out_of_range("Battle swirl HDMA offset");
  hdma_enable = std::uint8_t((hdma_enable & ~(1u << (3 + previous_offset))) |
                           (1u << (3 + next_offset)));
}
void FrameDisplay::install_oval(const EncounterWindowMask &rows) {
  window_streams_[0] = WindowStream{rows, false};
  install_oval();
}
void FrameDisplay::replace_swirl(unsigned previous_offset, unsigned next_offset,
                               const EncounterWindowMask &rows, bool second) {
  if (previous_offset >= 2 || next_offset >= 2)
    throw std::out_of_range("Battle swirl HDMA offset");
  window_streams_[next_offset] = WindowStream{rows, second};
  replace_swirl(previous_offset, next_offset);
}
void FrameDisplay::disable_swirl(unsigned offset) {
  if (offset >= 2) throw std::out_of_range("Battle swirl HDMA offset");
  hdma_enable &= std::uint8_t(~(1u << (3 + offset)));
}
EncounterWindowMask FrameDisplay::windows(const WorldEncounterVisualState &visual,
    std::uint8_t enabled, bool reset_second) const {
  EncounterWindowMask rows;
  for (auto &row : rows)
    for (unsigned i = 0; i < 2; ++i)
      row[i] = i == 1 && reset_second ? EncounterWindowInterval{255, 0}
          : EncounterWindowInterval{visual.window_left[i], visual.window_right[i]};
  for (unsigned channel = 0; channel < 2; ++channel) {
    if (!(enabled & (1u << (3 + channel)))) continue;
    if (!window_streams_[channel])
      throw std::logic_error("Enabled battle window HDMA has no installed stream");
    const auto &stream = *window_streams_[channel];
    for (unsigned y = 0; y < rows.size(); ++y) {
      rows[y][0] = stream.rows[y][0];
      if (stream.second) rows[y][1] = stream.rows[y][1];
    }
  }
  return rows;
}
} // namespace eb::native::battle
