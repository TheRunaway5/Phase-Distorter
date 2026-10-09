#pragma once
#include "eb/native/battle/psi_animation.hpp"
#include "eb/native/sprite_resources.hpp"
#include "eb/native/story/source_work.hpp"
namespace eb::native::entities::graphics {
// Retained original sprite allocation tags. Host actor/image capacity remains
// separate; only callers executing the authored raw graphics path use these.
struct State {
  std::array<std::uint8_t,88> cells{};
  bool continuation_abandoned{};
};
// C01B96/C01C52/ALLOC_SPRITE_MEM and C0A443_ENTRY4/C0A794/C0A56E.
// Imports only declared tables/artwork, and transfers through the actual shared
// display. A suspended operation needs that display's real publication before
// respond(); no processor, fake completion or implicit frame lives here.
class Transport {
public:
  Transport(std::span<const std::uint8_t> assets,GameVersion,State &,
      const SpriteResources &,battle::PsiDisplayState &,const battle::PsiScratch &,
      const WorldDisplayFade &);
  class Operation;
  ~Transport();
  Transport(const Transport &)=delete;
  bool uses(const SpriteResources &sprites) const noexcept {return &sprites_==&sprites;}
  bool uses(const SpriteResources &sprites,const battle::PsiDisplayState &video,
      const battle::PsiScratch &scratch,const WorldDisplayFade &fade) const noexcept {
    return &sprites_==&sprites&&&video_==&video&&&scratch_==&scratch&&&fade_==&fade;
  }
  // Exact first-fit cell helper. Returns source -253 when no run fits.
  std::uint16_t reserve(unsigned cells,std::uint16_t role);
  // ALLOC_SPRITE_MEM remaps only matching tags; role8000 selects all cells.
  void remap(std::uint16_t role,std::uint16_t replacement);
  struct SourceCall {
    // Actual caller D low byte before the named C helper reserves its locals.
    // Code in bank00/40 has slow instruction fetches even with MEMSEL set.
    std::uint8_t direct_page_low{};
    bool bank_zero_code{},include_long_call{true};
  };
  // One real C01B96 or ALLOC_SPRITE_MEM call in its authored caller context.
  // Every instruction retires separately; each tag store mutates this owner
  // before its clocks. This covers allocation tags, not the larger CREATE or
  // rounded-geometry clear routine surrounding the allocation helper.
  void with_source_work(story::SourceWorkService &,const ActorWorld &,SourceCall,
      const std::function<void()> &actual_call);
  std::unique_ptr<Operation> begin_allocation(unsigned tile_width,unsigned tile_height,
      std::uint16_t role);
  // Selects the current frame, without stepping animation, walk fingerprint,
  // or sounds. The caller supplies its retained actual destination/reference.
  std::unique_ptr<Operation> begin_upload(unsigned sprite,unsigned direction,
      std::uint16_t animation,SpriteFrameFormat,std::uint16_t destination,
      std::uint16_t surface,std::uint16_t &displayed_reference);
  // Changed artwork retains the original creation dimensions; reads use the
  // actual complete imported source bank, including its wrapping word cursor.
  std::unique_ptr<Operation> begin_upload(unsigned sprite,unsigned geometry_sprite,
      unsigned direction,std::uint16_t animation,SpriteFrameFormat,
      std::uint16_t destination,std::uint16_t surface,std::uint16_t &displayed_reference);
  // Uses an already selected authored pose, preserving the caller's exact
  // animation decision without another update or inverse phase inference.
  std::unique_ptr<Operation> begin_upload_pose(unsigned sprite,unsigned geometry_sprite,
      unsigned pose,SpriteFrameFormat,std::uint16_t destination,std::uint16_t surface,
      std::uint16_t &displayed_reference);
  std::uint16_t destination(unsigned cell,unsigned tile_height) const;
  bool busy() const noexcept {return active_!=nullptr;}
  bool failed() const noexcept {return state_.continuation_abandoned;}
  class Operation {
  public:
    ~Operation();
    Operation(const Operation &)=delete;
    bool advance(unsigned work_budget=256);
    bool needs_publication() const noexcept;
    void respond();
    bool complete() const noexcept {return done_;}
    std::uint16_t result() const;
  private:
    friend class Transport;
    explicit Operation(Transport &);
    Transport &owner_;
    std::vector<battle::PsiTransfer> commands_;
    std::unique_ptr<battle::PsiDisplayState::TransferOperation> transfer_;
    std::uint16_t result_{};
    std::uint16_t *reference_{};
    std::uint16_t new_reference_{};
    unsigned command_{};
    bool reference_written_{},done_{},executing_{};
  };
private:
  void idle() const;
  void work(story::SourceWorkCost,const std::function<void()> &effect={});
  unsigned begin_tag_work(unsigned local_bytes);
  void end_tag_work();
  std::uint16_t reserve_unchecked(unsigned,std::uint16_t);
  std::uint16_t row(std::vector<battle::PsiTransfer> &,battle::PsiTransfer) const;
  State &state_;
  const SpriteResources &sprites_;
  battle::PsiDisplayState &video_;
  const battle::PsiScratch &scratch_;
  const WorldDisplayFade &fade_;
  std::array<std::uint16_t,88> destinations_{};
  std::array<std::uint8_t,512> blank_{};
  std::uint32_t blank_identity_{};
  Operation *active_{};
  story::SourceWorkService *source_work_{};
  SourceCall source_call_{};
  unsigned source_invocations_{};
};
}
