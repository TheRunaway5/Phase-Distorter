#pragma once
#include "eb/native/cutscenes/ending/resources.hpp"
#include "eb/native/story/work_clock.hpp"
#include "eb/native/battle/psi_animation.hpp"
#include "eb/native/world_display_fade.hpp"
#include "eb/native/dialogue/runtime.hpp"

namespace eb::native::cutscenes::ending {
// Actual DECOMP globals, retained between calls. Remaining is the little-
// endian DECOMP_TEMP_LENGTH/UNREAD pair; command is its following byte.
struct DecodeWorkState {
  std::uint32_t source{};
  std::uint16_t destination{},remaining{};
  std::uint8_t command{};
};
// DECOMP's caller has M/X16 and DB7E; PREPARE's authored macro enters M8 and
// its first REP establishes M/X16 (with the actual mode's high byte zero).
// Argument slots contain the real BUFFER destination and immutable pointer.
// The caller supplies its actual direct-page alignment, never a fitted time.
struct AssetCall {
  bool unaligned_direct_page{};
  std::uint16_t destination{};
};
class AssetWork {
public:
  class Operation {
  public:
    ~Operation();
    Operation(const Operation &)=delete;
    dialogue::Progress advance(unsigned work_budget=4096);
    bool complete() const noexcept {return complete_;}
    unsigned source_line() const noexcept;
    unsigned retired_atoms() const noexcept {return cursor_;}
  private:
    friend class AssetWork;
    enum class Effect {
      None, SourceLow, SourceBank, Destination, LengthLow, LengthHigh,
      LengthIncrement, LengthDecrement, Command, ReadEncodedByte,
      ReadEncodedWord, ReadOutput, StoreByte, StoreWord, IncrementValue,
      ShiftCommand, RotateValue, CopyMode, CopySize, CopySourceLow,
      CopySourceBank, CopyDestination, ReadCopyMode, ReadCopySize,
      ReadCopySource, ReadCopyBank, ReadCopyDestination, ReadDmaTable,
      ReadDmaVmain, StoreDmaWord, StoreDmaByte, StoreVmain, StoreVmadd,
      ReadHeapBase, Dma, HeapReset, FlagClear
    };
    struct Atom {
      story::SourceWorkCost cost;
      Effect effect=Effect::None;
      unsigned operand{},line{};
    };
    explicit Operation(AssetWork &);
    void decode(CompressedAsset,AssetCall);
    void copy(battle::PsiTransfer,AssetCall);
    void effect(const Atom &);
    AssetWork &owner_;
    CompressedAsset source_{};
    battle::PsiTransfer transfer_{};
    std::vector<Atom> atoms_;
    unsigned cursor_{};
    std::uint16_t value_{};
    unsigned dma_mode_{};
    bool carry_{},complete_{},executing_{};
  };
  AssetWork(GameVersion,story::SourceWorkClock &,DecodeWorkState &,
      battle::PsiScratch &,battle::PsiDisplayState &,WorldDisplayFade &);
  std::unique_ptr<Operation> begin_decode(CompressedAsset,AssetCall);
  // Exact PREPARE_VRAM_COPY normal entry + forced-blank COPY_TO_VRAM only.
  // A visible queued caller stays with the actual Psi transfer continuation.
  std::unique_ptr<Operation> begin_copy(battle::PsiTransfer,AssetCall);
  bool uses(GameVersion, const battle::PsiScratch &, const battle::PsiDisplayState &,
      const WorldDisplayFade &) const noexcept;
  story::SourceWorkClock &clock() const noexcept {return clock_;}
  bool busy() const noexcept {return active_!=nullptr;}
  bool failed() const noexcept {return failed_;}
private:
  GameVersion version_;
  story::SourceWorkClock &clock_;
  DecodeWorkState &decode_;
  battle::PsiScratch &scratch_;
  battle::PsiDisplayState &video_;
  WorldDisplayFade &fade_;
  Operation *active_{};
  bool failed_{};
};
}
