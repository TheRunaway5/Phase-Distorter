#pragma once

#include "eb/native/battle/psi_animation.hpp"
#include "eb/native/battle_combatants.hpp"
#include "eb/native/world_encounter.hpp"
#include "eb/native/entities/graphics/objects.hpp"

namespace eb::native::story {class SourceScreenUpdate; class SourceWindowPublication;}
namespace eb::native::battle {
// UPDATE_SCREEN's one pending OAM publication and its simultaneous four-plane
// scroll snapshot. The shared PSI display remains the sole owner of current
// staged and displayed scroll words. No operation here advances a clock.
class FrameDisplay {
public:
  struct Screen {
    std::optional<BattleCombatantFrame> objects;
    std::array<PsiScroll, 4> scroll{};
    std::uint8_t display_id{};
    std::shared_ptr<const DirectSceneFrame> world_objects{};
    std::shared_ptr<const entities::graphics::ObjectFrame> raw_objects{};
  };
  explicit FrameDisplay(PsiDisplayState &display) : display_(display) {}
  FrameDisplay(const FrameDisplay &) = delete;
  FrameDisplay &operator=(const FrameDisplay &) = delete;
  FrameDisplay(FrameDisplay &&) = delete;
  FrameDisplay &operator=(FrameDisplay &&) = delete;
  PeripheralState* peripherals() const noexcept { return display_.peripherals(); }
  bool uses(const PsiDisplayState &display) const noexcept { return &display == &display_; }
  const PsiDisplayState &video_transport() const noexcept { return display_; }
  std::weak_ptr<const void> source_lifetime() const noexcept { return lifetime_; }
  // A second UPDATE_SCREEN before NMI replaces the pending selection. Its
  // borrowed input is copied before buffer IDs or any pending state change.
  void update_screen(const BattleCombatantFrame &);
  // World actors are retained in the actual Scene capture. UPDATE_SCREEN
  // still selects its real OAM buffer and latches the same four scroll words.
  void update_world_screen(std::shared_ptr<const DirectSceneFrame> objects = {});
  void bind_object_source(entities::graphics::ObjectSource &);
  void clear_object_source(const entities::graphics::ObjectSource &) noexcept;
  bool uses_object_source(const entities::graphics::ObjectSource &source) const noexcept {
    return object_source_==&source;
  }
  // C0878B requests the retained buffer selected by the original wrapping
  // word. It neither draws actors nor creates a replacement scroll snapshot.
  void request_retained_screen() noexcept { ++display_request_; }
  std::uint16_t display_request() const noexcept { return display_request_; }
  bool pending() const noexcept { return std::uint8_t(display_request_) != 0; }
  std::uint8_t next_buffer_id() const noexcept { return next_buffer_; }
  std::uint8_t pending_display_id() const noexcept { return std::uint8_t(display_request_); }
  Screen screen() const;
  Screen preview_screen() const;
  const Screen &source_buffer(std::uint8_t) const;
  // Called after successful NMI frame construction. A fade underflow clears
  // the complete HDMA mirror; forced blank alone merely keeps hardware off.
  void commit_publication(bool disable_hdma = false, bool forced_blank = false) noexcept;
  // HDMA-only update for callers that are not executing the shared NMI.
  // Both world and battle NMI publishers use commit_publication instead.
  void publish_hdma(bool disable_hdma, bool forced_blank) noexcept;
  void install_background(unsigned ordinal);
  void install_letterbox() noexcept { hdma_enable |= 1u << 2; }
  void install_oval() noexcept { hdma_enable |= 1u << 3; }
  void install_oval(const EncounterWindowMask &);
  void replace_swirl(unsigned previous_offset, unsigned next_offset);
  void replace_swirl(unsigned previous_offset, unsigned next_offset,
                     const EncounterWindowMask &, bool second_window);
  void disable_swirl(unsigned offset);
  EncounterWindowMask windows(const WorldEncounterVisualState &, std::uint8_t enabled,
                               bool reset_second) const;

  struct Letterbox {
    std::uint16_t top_end{}, bottom_start = 224, visible{}, nonvisible{};
  } letterbox;

  // The actual HDMAEN mirror and last boundary's hardware enable selection.
  // Loaders explicitly install their streams; construction fabricates none.
  std::uint8_t hdma_enable{}, displayed_hdma_enable{};
  // Actual MOSAIC mirror. The synchronous Y=0 fade clears it each step.
  std::uint8_t mosaic{};
  std::uint8_t object_size{};

private:
  friend class story::SourceScreenUpdate;
  friend class story::SourceWindowPublication;
  std::shared_ptr<const void> lifetime_ = std::make_shared<const unsigned>(0);
  // Only the leased literal helper can perform these stores. The actual
  // latches remain visible to NMI between scroll, selection and toggle stores.
  void source_scroll_word(std::uint8_t buffer,unsigned word,std::uint16_t value);
  void source_object_snapshot(std::uint8_t buffer,
      std::shared_ptr<const entities::graphics::ObjectFrame>,std::shared_ptr<const DirectSceneFrame>);
  void source_display_id(std::uint8_t);
  void source_next_buffer_id(std::uint8_t);
  PsiDisplayState &display_;
  std::optional<BattleCombatantFrame> objects_;
  std::shared_ptr<const DirectSceneFrame> world_objects_;
  std::shared_ptr<const entities::graphics::ObjectFrame> raw_objects_;
  entities::graphics::ObjectSource *object_source_{};
  std::array<Screen, 2> buffers_{};
  std::uint16_t display_request_{};
  std::uint8_t next_buffer_ = 1;
  std::uint8_t displayed_buffer_{};
  struct WindowStream { EncounterWindowMask rows; bool second{}; };
  std::array<std::optional<WindowStream>, 2> window_streams_;
};
} // namespace eb::native::battle
