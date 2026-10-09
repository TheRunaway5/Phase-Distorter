#pragma once
#include "eb/direct_scene.hpp"
#include "eb/native/battle/psi_animation.hpp"
#include "eb/native/entities/graphics/objects.hpp"
namespace eb::native::cutscenes {
struct DisplayView {
  std::span<const std::uint8_t,65536> video;
  std::array<battle::PsiScroll,4> scroll;
  std::array<std::uint16_t,256> palette;
  std::uint8_t hdma{};
  std::uint64_t frame{};
  std::uint8_t display_id{};
  bool publishing_objects{};
  std::shared_ptr<const DirectSceneFrame> world_objects{};
  std::shared_ptr<const entities::graphics::ObjectFrame> raw_objects{};
  std::uint8_t object_size{};
};
// Read-only composition of the real display transport at capture. The owner
// latches its own sprite/text state at source UPDATE_SCREEN; this view cannot
// advance scene work, callbacks, audio, input or an animation controller.
class DisplaySource {
public:
  virtual ~DisplaySource() = default;
  virtual std::shared_ptr<const DirectSceneFrame> capture_display(const DisplayView &) const = 0;
  // Latch only after a successful real OAM-gated publication. Working
  // double buffers may be reused while the hardware keeps its prior sprites.
  virtual void complete_object_publication(std::uint8_t) const noexcept {}
};
}
