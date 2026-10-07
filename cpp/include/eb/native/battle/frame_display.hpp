#pragma once

#include "eb/native/battle/psi_animation.hpp"
#include "eb/native/battle_combatants.hpp"
#include "eb/native/world_encounter.hpp"

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
  };
  explicit FrameDisplay(PsiDisplayState &display) : display_(display) {}
  FrameDisplay(const FrameDisplay &) = delete;
  FrameDisplay &operator=(const FrameDisplay &) = delete;
  FrameDisplay(FrameDisplay &&) = delete;
  FrameDisplay &operator=(FrameDisplay &&) = delete;
  PeripheralState* peripherals() const noexcept { return display_.peripherals(); }
  bool uses(const PsiDisplayState &display) const noexcept { return &display == &display_; }
  // A second UPDATE_SCREEN before NMI replaces the pending selection. Its
  // borrowed input is copied before buffer IDs or any pending state change.
  void update_screen(const BattleCombatantFrame &);
  // World actors are retained in the actual Scene capture. UPDATE_SCREEN
  // still selects its real OAM buffer and latches the same four scroll words.
  void update_world_screen();
  // C0878B requests the retained buffer selected by the original wrapping
  // word. It neither draws actors nor creates a replacement scroll snapshot.
  void request_retained_screen() noexcept { ++display_request_; }
  std::uint16_t display_request() const noexcept { return display_request_; }
  bool pending() const noexcept { return std::uint8_t(display_request_) != 0; }
  std::uint8_t next_buffer_id() const noexcept { return next_buffer_; }
  std::uint8_t pending_display_id() const noexcept { return std::uint8_t(display_request_); }
  Screen screen() const;
  Screen preview_screen() const;
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

private:
  PsiDisplayState &display_;
  std::optional<BattleCombatantFrame> objects_;
  std::array<Screen, 2> buffers_{};
  std::uint16_t display_request_{};
  std::uint8_t next_buffer_ = 1;
  struct WindowStream { EncounterWindowMask rows; bool second{}; };
  std::array<std::optional<WindowStream>, 2> window_streams_;
};
} // namespace eb::native::battle
