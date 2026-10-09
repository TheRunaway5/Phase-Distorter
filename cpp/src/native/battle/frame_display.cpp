#include "eb/native/battle/frame_display.hpp"
#include <stdexcept>
#include <utility>

namespace eb::native::battle {
const FrameDisplay::Screen &FrameDisplay::source_buffer(std::uint8_t buffer) const {
  if(buffer<1||buffer>2)throw std::out_of_range("Source screen buffer exceeds its actual two latches");
  return buffers_[buffer-1];
}
void FrameDisplay::source_scroll_word(std::uint8_t buffer,unsigned word,std::uint16_t value) {
  (void)source_buffer(buffer);
  if(word>=8)throw std::out_of_range("Source screen scroll word exceeds its four planes");
  auto &scroll=buffers_[buffer-1].scroll[word/2];
  if(word&1)scroll.y=value;else scroll.x=value;
}
void FrameDisplay::source_object_snapshot(std::uint8_t buffer,
    std::shared_ptr<const entities::graphics::ObjectFrame> raw,std::shared_ptr<const DirectSceneFrame> world) {
  (void)source_buffer(buffer);
  if(!raw)throw std::invalid_argument("Source selection requires its actual immutable OAM descriptor");
  auto &screen=buffers_[buffer-1];screen.objects.reset();screen.raw_objects=std::move(raw);
  screen.world_objects=std::move(world);screen.display_id=buffer;
}
void FrameDisplay::source_display_id(std::uint8_t value) {
  if(value<1||value>2)throw std::out_of_range("Source display selection exceeds its actual two buffers");
  display_request_=std::uint16_t((display_request_&0xff00)|value);
}
void FrameDisplay::source_next_buffer_id(std::uint8_t value) {
  if(value<1||value>2)throw std::out_of_range("Source drawing selection exceeds its actual two buffers");
  next_buffer_=value;
}
void FrameDisplay::update_screen(const BattleCombatantFrame &objects) {
  Screen next{objects, display_.staged_scroll, next_buffer_};
  buffers_[next_buffer_-1] = std::move(next);
  display_request_ = next_buffer_;
  next_buffer_ ^= 3;
}
void FrameDisplay::update_world_screen(std::shared_ptr<const DirectSceneFrame> objects) {
  Screen next{std::nullopt, display_.staged_scroll, next_buffer_,std::move(objects)};
  if(object_source_)next.raw_objects=object_source_->capture_objects(next_buffer_);
  buffers_[next_buffer_-1] = std::move(next);
  display_request_ = next_buffer_;
  next_buffer_ ^= 3;
}
void FrameDisplay::bind_object_source(entities::graphics::ObjectSource &source) {
  if(object_source_||pending())throw std::logic_error("Object source requires its idle unbound screen owner");
  object_source_=&source;
}
void FrameDisplay::clear_object_source(const entities::graphics::ObjectSource &source) noexcept {if(object_source_==&source)object_source_=nullptr;}
FrameDisplay::Screen FrameDisplay::screen() const {
  return {objects_, display_.scroll, displayed_buffer_,world_objects_,raw_objects_};
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
    displayed_buffer_ = pending_display_id();
    objects_ = next.objects;
    world_objects_ = next.world_objects;
    raw_objects_ = next.raw_objects;
    display_.publish_source_scroll(next.scroll);
  }
  display_request_ &= 0xff00;
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
