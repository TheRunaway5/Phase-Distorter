#include "eb/native/battle/background_loader.hpp"
#include "eb/native/story/scene.hpp"
#include <stdexcept>

namespace eb::native::battle {
DisplaySetup::DisplaySetup(GameVersion version, WorldDisplayFade &fade,
                          FrameDisplay &frames, story::TickState &clock,
                          WorldEncounterVisualState &visual,
                          const story::Scene &scene)
    : version_(version), fade_(fade), frames_(frames), clock_(clock),
      visual_(visual), scene_(scene) {
  if (version != GameVersion::US && version != GameVersion::JP)
    throw std::invalid_argument("Display setup region");
}

bool DisplaySetup::uses(const WorldDisplayFade& fade, const story::TickState& clock,
    const story::Scene& scene) const noexcept {
  return &fade == &fade_ && &clock == &clock_ && &scene == &scene_;
}
void DisplaySetup::begin(DisplayBlankKind kind) {
  if (pending_)
    throw std::logic_error("Display setup already awaits publication");
  if (kind != DisplayBlankKind::Reset && kind != DisplayBlankKind::Retain)
    throw std::invalid_argument("Display setup blank kind");
  if (scene_.failed() || scene_.busy() || !scene_.uses(clock_))
    throw std::logic_error("Display setup requires its idle actual Scene clock");
  const auto *publication = scene_.publication();
  if (!publication || publication->display_fade() != &fade_ ||
      !publication->uses_frame_display(frames_) ||
      !publication->uses_visual(visual_))
    throw std::logic_error("Display setup requires its actual fade, display and visual publisher");
  if (!(clock_.effective_interrupt_mask() & 0x80))
    throw std::logic_error("Blank helper requires its native NMI owner");

  reset_ = kind == DisplayBlankKind::Reset;
  fade_.force_blank(reset_ && version_ == GameVersion::US);
  if (reset_) {
    frames_.hdma_enable = 0;
    if (visual_.window_rows_enabled) {
      visual_.window_rows_enabled = false;
      ++visual_.window_revision;
    }
  }
  clock_.new_frame_started = 0;
  receipt_ = clock_.publications;
  pending_ = true;
}

void DisplaySetup::finish() {
  if (!pending_ || clock_.publications == receipt_ || !clock_.new_frame_started)
    throw std::logic_error("Blank helper has no completed real NMI publication");
  if (reset_)
    frames_.displayed_hdma_enable = 0;
  pending_ = false;
}
} // namespace eb::native::battle
