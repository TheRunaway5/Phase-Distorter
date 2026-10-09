#pragma once
#include "eb/native/display/transient_memory.hpp"

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
  // Dedicated live native source (VWF/credits composition), bounded to its
  // actual owned bytes. Empty uses the ordinary retained BUFFER bank. The
  // source and its semantic DMA identity remain stable through publication.
  std::span<const std::uint8_t> source{};
  std::uint32_t source_identity{};
  bool operator==(const PsiTransfer &other) const noexcept {
    return kind==other.kind && source_offset==other.source_offset &&
        byte_count==other.byte_count && destination==other.destination && mode==other.mode &&
        source.data()==other.source.data() && source.size()==other.source.size() &&
        source_identity==other.source_identity;
  }
};
// Actual visible PSI artwork/map and ordered pending source DMA operations.
// Queueing a frame retains a scratch reference by offset, not a byte snapshot:
// a real transfer reads live scratch, with16-bit source-bank wrap.
class PsiDisplayState {
public:
  display::TransientMemory &transient_memory() noexcept { return transient_; }
  const display::TransientMemory &transient_memory() const noexcept { return transient_; }
  void bind_peripherals(PeripheralState&, GameVersion);
  PeripheralState* peripherals() const noexcept { return peripheral_lifetime_.expired() ? nullptr : peripherals_; }
  std::weak_ptr<const void> source_lifetime() const noexcept { return lifetime_; }
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
  // Projection of the actual eight-byte DMA_COPY parameter block. Timed
  // PREPARE stores retain its overlapping words before the complete call.
  PsiTransfer source_copy_parameters() const noexcept;
  void set_source_copy_parameters(PsiTransfer);
  // MDMAEN completes the actual borrowed transfer, independently of the
  // later source heap and regional flag stores. Normal immediate callers
  // retain their existing complete wrapper behavior.
  void complete_source_dma(const PsiScratch &, PsiTransfer, unsigned channel=1);
  // Persistent borrowed sources need no unrelated PSI scratch allocation.
  void complete_source_dma(PsiTransfer, unsigned channel=1);
  std::uint16_t dma_transfer_flag() const noexcept {return dma_transfer_flag_;}
  void set_source_dma_transfer_flag(std::uint16_t value) noexcept {dma_transfer_flag_=value;}
  // Last source setup writes, not a fabricated readable PPU register file.
  std::uint8_t source_vmain() const noexcept {return source_vmain_;}
  std::uint16_t source_vmadd() const noexcept {return source_vmadd_;}
  void set_source_vmain(std::uint8_t value) noexcept {source_vmain_=value;}
  void set_source_vmadd(std::uint16_t value) noexcept {source_vmadd_=value;}
  // Retained physical DMA_QUEUE bytes. Idle descriptors may be written by
  // the authored palette routine's adjacent 64-byte destination. Referenced
  // and not-yet-published records cannot be overwritten by this service.
  std::span<const std::uint8_t,256> descriptor_bytes() const noexcept { return descriptors_; }
  void write_descriptor_prefix(std::span<const std::uint8_t>);
  bool failed() const noexcept { return failed_; }
  bool admits_without_wait(std::span<const PsiTransfer>) const noexcept;
  std::uint64_t publication_serial() const noexcept {
    return publication_serial_;
  }
  std::span<const PsiTransfer> pending() const noexcept;
  // The shared PPU byte latch is distinct from the logical scroll mirrors.
  // Source callbacks can observe the intermediate low-byte write; vertical
  // hardware positions wrap at ten bits. Ordinary compositor offsets retain
  // their complete sixteen-bit values after a whole screen publication.
  std::uint8_t source_scroll_latch() const noexcept { return source_scroll_latch_; }
  const std::array<PsiScroll,4>& source_hardware_scroll() const noexcept {
    return source_hardware_scroll_;
  }
  void write_source_scroll_port(unsigned layer,bool vertical,std::uint8_t value) {
    if(layer>=source_hardware_scroll_.size())
      throw std::out_of_range("Source scroll write exceeds the actual four background ports");
    auto &position=source_hardware_scroll_[layer];
    if(vertical)position.y=std::uint16_t(((unsigned(value)<<8)|source_scroll_latch_)&0x3ff);
    else position.x=std::uint16_t((unsigned(value)<<8)|(source_scroll_latch_&0xf8)|((position.x>>8)&7));
    source_scroll_latch_=value;
    if(vertical)scroll[layer].y=position.y;
    else scroll[layer].x=position.x;
  }
  // Actual screen publisher writes BG1..BG4, X low/high then Y low/high.
  // Its final BG4 Y high byte becomes the next callback's shared latch.
  void publish_source_scroll(const std::array<PsiScroll,4>& positions) noexcept {
    const auto snapshot=positions;
    for(unsigned i=0;i<snapshot.size();++i) {
      write_source_scroll_port(i,false,std::uint8_t(snapshot[i].x));
      write_source_scroll_port(i,false,std::uint8_t(snapshot[i].x>>8));
      write_source_scroll_port(i,true,std::uint8_t(snapshot[i].y));
      write_source_scroll_port(i,true,std::uint8_t(snapshot[i].y>>8));
    }
    scroll=snapshot;
  }
  // Explicit display transport; queue draining does not latch scroll.
  void publish_scroll() noexcept { publish_source_scroll(staged_scroll); }
  std::array<std::uint8_t, 8192> graphics{};
  std::array<std::uint16_t, 1024> tilemap{};
  std::array<PsiScroll, 4> staged_scroll{}, scroll{};

private:
  std::shared_ptr<const void> lifetime_ = std::make_shared<const unsigned>(0);
  std::weak_ptr<const void> peripheral_lifetime_;
  void complete_source_dma_impl(const PsiScratch *, PsiTransfer, unsigned);
  display::TransientMemory transient_;
  PeripheralState* peripherals_{};
  std::uint32_t dma_constant_{};
  void complete_dma(unsigned channel, const PsiTransfer&) noexcept;
  std::array<std::uint8_t, 0xd800> remaining_vram_{};
  void store_vram(const VramImage &) noexcept;
  // The32 physical records and raw byte counter have one authoritative owner.
  // During full-ring admission its unpublished last record is already credited;
  // a real NMI can clear bytes before that producer index is finally published.
  std::array<PsiTransfer, 32> queue_{};
  std::array<std::uint8_t,256> descriptors_{};
  std::array<unsigned,32> held_{};
  void write_descriptor(unsigned, const PsiTransfer&) noexcept;
  mutable std::array<PsiTransfer, 31> view_{}; // Read-only ordered projection.
  PsiTransfer copy_{PsiTransferKind::Vram};
  std::uint16_t dma_transfer_flag_{},source_vmadd_{};
  std::uint8_t source_vmain_{};
  std::array<PsiScroll,4> source_hardware_scroll_{};
  std::uint8_t source_scroll_latch_{};
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
