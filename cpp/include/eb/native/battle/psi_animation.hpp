#pragma once

#include "eb/native/battle/palette_effects.hpp"
#include "eb/native/peripheral_state.hpp"
#include "eb/game_version.hpp"
#include <cstddef>
#include <memory>
#include <span>
#include <vector>

namespace eb::native {
class BattleBackgroundScene;
class WorldDisplayFade;
struct WorldSwirlState;
} // namespace eb::native
namespace eb::native::battle {
// Retained BUFFER scratch. Decompression writes only the actual output bytes;
// callers share this owner across graphics conversion and arrangement loading.
struct PsiScratch {
  PsiScratch() = default;
  PsiScratch(const PsiScratch &) = delete;
  PsiScratch &operator=(const PsiScratch &) = delete;
  PsiScratch(PsiScratch &&) = delete;
  PsiScratch &operator=(PsiScratch &&) = delete;
  std::array<std::uint8_t, 65536> bytes{};
};
struct PsiAnimationState {
  std::uint8_t time_until_next_frame{}, frame_hold{}, total_frames{};
  std::uint16_t frame_offset{};
  std::uint8_t palette_lower{}, palette_upper{}, palette_index{},
      palette_hold{}, palette_countdown{};
  PackedPalette palette{};
  // Global color identity of the source displayed_palette destination.
  std::uint16_t palette_base{};
  std::uint16_t enemy_start{}, enemy_end{}, enemy_red{}, enemy_green{},
      enemy_blue{};
  std::array<std::uint16_t, 4> enemy_targets{};
  std::uint16_t x_offset{}, y_offset{};
  bool operator==(const PsiAnimationState &) const = default;
};
struct PsiScroll {
  std::uint16_t x{}, y{};
  bool operator==(const PsiScroll &) const = default;
};
enum class PsiTransferKind { FrameLowBytes, FrameHighBytes, Clear, Graphics, Vram };
struct PsiTransfer {
  PsiTransferKind kind{};
  std::uint16_t source_offset{};
  std::uint16_t byte_count{}, destination{};
  // Vram uses a raw DMA_TABLE offset (0/3/6/9/12/15), a word-addressed
  // destination and a raw count (zero performs65536 hardware bytes).
  // Its source is the borrowed live scratch bank. Existing PSI kinds retain
  // their fixed addresses and Graphics retains its byte-addressed destination.
  std::uint8_t mode{};
  bool operator==(const PsiTransfer &) const = default;
};
// Actual visible PSI artwork/map and ordered pending source DMA operations.
// Queueing a frame retains a scratch reference by offset, not a byte snapshot:
// a real transfer reads live scratch, with16-bit source-bank wrap.
class PsiDisplayState {
public:
  void bind_peripherals(PeripheralState&, GameVersion);
  PeripheralState* peripherals() const noexcept { return peripherals_; }
  using VramImage = std::array<std::uint8_t, 65536>;
  PsiDisplayState() = default;
  PsiDisplayState(const PsiDisplayState &) = delete;
  PsiDisplayState &operator=(const PsiDisplayState &) = delete;
  PsiDisplayState(PsiDisplayState &&) = delete;
  PsiDisplayState &operator=(PsiDisplayState &&) = delete;
  class TransferOperation {
  public:
    ~TransferOperation();
    TransferOperation(const TransferOperation &) = delete;
    TransferOperation &operator=(const TransferOperation &) = delete;
    bool advance();
    bool needs_publication() const noexcept { return waiting_; }
    void respond();
    bool complete() const noexcept { return complete_; }

  private:
    friend class PsiDisplayState;
    TransferOperation(PsiDisplayState &, PsiTransfer, const PsiScratch &,
                      const WorldDisplayFade &);
    void wait();
    PsiDisplayState &owner_;
    PsiTransfer command_;
    const PsiScratch &scratch_;
    const WorldDisplayFade &fade_;
    unsigned phase_{}, next_{};
    std::uint64_t receipt_{};
    bool waiting_{}, complete_{};
  };
  std::unique_ptr<TransferOperation>
  begin_transfer(PsiTransfer, const PsiScratch &, const WorldDisplayFade &);
  // Raw descriptor staging for callers that already admitted their transfer.
  // COPY_TO_VRAM callers use begin_transfer for its budget and ring waits.
  void queue_frame(std::uint16_t source_offset);
  void queue_clear();
  // Graphics destinations are byte offsets in the owned visible plane.
  // SHOW drains earlier transfers before each at-most1200-byte chunk.
  void queue_graphics(std::uint16_t source_offset, std::uint16_t byte_count,
                      std::uint16_t destination);
  void transfer_graphics_immediate(const PsiScratch &,
                                   std::uint16_t source_offset,
                                   std::uint16_t byte_count,
                                   std::uint16_t destination);
  std::array<std::uint8_t, 8192> preview_graphics(const PsiScratch &) const;
  std::array<std::uint16_t, 1024> preview_pending(const PsiScratch &) const;
  // Physical VRAM is one segmented authority: graphics covers0000..1FFF,
  // tilemap coversB000..B7FF, and the private remainder covers every other
  // byte. These methods preserve their aliases without a second mutable copy.
  std::uint8_t vram_byte(std::uint16_t byte_address) const noexcept;
  void set_vram_byte(std::uint16_t byte_address, std::uint8_t) noexcept;
  VramImage vram() const noexcept;
  VramImage preview_vram(const PsiScratch &) const;
  void publish_pending(const PsiScratch &);
  // Unset C2DE96 destination clears only the two byte ring cursors. The
  // descriptors, pending byte credit and physical VRAM remain retained.
  void reset_queue_indices() noexcept { read_ = write_ = 0; }
  std::uint16_t pending_bytes() const noexcept { return bytes_; }
  std::uint8_t producer_index() const noexcept {
    return std::uint8_t(write_ * 8);
  }
  std::uint8_t consumer_index() const noexcept {
    return std::uint8_t(read_ * 8);
  }
  const PsiTransfer &copy_parameters() const noexcept { return copy_; }
  bool failed() const noexcept { return failed_; }
  bool admits_without_wait(std::span<const PsiTransfer>) const noexcept;
  std::uint64_t publication_serial() const noexcept {
    return publication_serial_;
  }
  std::span<const PsiTransfer> pending() const noexcept;
  // Explicit display transport; queue draining does not latch scroll.
  void publish_scroll() noexcept { scroll = staged_scroll; }
  std::array<std::uint8_t, 8192> graphics{};
  std::array<std::uint16_t, 1024> tilemap{};
  std::array<PsiScroll, 4> staged_scroll{}, scroll{};

private:
  PeripheralState* peripherals_{};
  std::uint32_t dma_constant_{};
  void complete_dma(unsigned channel, const PsiTransfer&) noexcept;
  std::array<std::uint8_t, 0xd800> remaining_vram_{};
  void store_vram(const VramImage &) noexcept;
  // The32 physical records and raw byte counter have one authoritative owner.
  // During full-ring admission its unpublished last record is already credited;
  // a real NMI can clear bytes before that producer index is finally published.
  std::array<PsiTransfer, 32> queue_{};
  mutable std::array<PsiTransfer, 31> view_{}; // Read-only ordered projection.
  PsiTransfer copy_{};
  unsigned read_{}, write_{};
  std::uint16_t bytes_{};
  bool failed_{};
  void stage(PsiTransfer);
  void check() const;
  void apply_immediate(const PsiScratch &, PsiTransfer);
  std::uint64_t publication_serial_{};
};
// Complete C2E6B6 and C2EACF. This owner does not run SHOW's setup, waits,
// advance palette ramps, or publish pending DMA. Its actual frame caller does
// those operations in source order using these same shared owners.
class PsiAnimation {
public:
  PsiAnimation(PsiAnimationState &, PsiScratch &, PsiDisplayState &,
               PaletteEffects &, BattleBackgroundScene &);
  PsiAnimation(const PsiAnimation &) = delete;
  PsiAnimation &operator=(const PsiAnimation &) = delete;
  PsiAnimation(PsiAnimation &&) = delete;
  PsiAnimation &operator=(PsiAnimation &&) = delete;
  class Operation {
  public:
    ~Operation();
    Operation(const Operation &) = delete;
    Operation &operator=(const Operation &) = delete;
    bool advance();
    bool needs_publication() const noexcept;
    void respond();
    bool complete() const noexcept { return complete_; }

  private:
    friend class PsiAnimation;
    Operation(PsiAnimation &, const WorldDisplayFade &);
    PsiAnimation &owner_;
    const WorldDisplayFade &fade_;
    std::unique_ptr<PsiDisplayState::TransferOperation> transfer_;
    unsigned phase_{};
    bool entered_{}, complete_{};
  };
  std::unique_ptr<Operation> begin(const WorldDisplayFade &);
  void validate_begin() const;
  void validate_advance() const;
  // Only completes nonblocking displayed admission. Required publication is
  // rejected before mutation; the real frame caller uses begin instead.
  void advance();
  bool busy(const WorldSwirlState &) const noexcept;
  const PsiAnimationState &state() const noexcept { return state_; }
  bool failed() const noexcept { return failed_; }
  const PsiScratch &scratch() const noexcept { return scratch_; }
  const PsiDisplayState &display() const noexcept { return display_; }
  bool uses(const PsiAnimationState &, const PsiScratch &,
            const PsiDisplayState &, const PaletteEffects &,
            const BattleBackgroundScene &) const noexcept;

private:
  PsiAnimationState &state_;
  PsiScratch &scratch_;
  PsiDisplayState &display_;
  PaletteEffects &effects_;
  BattleBackgroundScene &background_;
  bool active_{}, failed_{};
  void advance_tail(bool entered);
  void validate_palette() const;
};
} // namespace eb::native::battle
