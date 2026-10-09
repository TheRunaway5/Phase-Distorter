#pragma once
#include "eb/native/cutscenes/credits.hpp"
#include "eb/native/party_trail.hpp"
#include "eb/native/battle/psi_animation.hpp"
#include "eb/native/story/source_nmi.hpp"
#include "eb/native/world_runtime.hpp"
namespace eb::native::story { class InterruptCallback; }
namespace eb::native::cutscenes::ending {
// Literal callback work borrows the actual staff-text composition ring, its
// PartyTrail queue alias, and the physical scroll transport. It does not run
// a processor or retain a compatibility register file. Ordinary untimed text
// calls preserve their existing behavior until this owner is explicitly bound.
struct NameBoundaryOwners {
  // These live providers borrow the adjacent real owner. They are needed only
  // when a source read reaches byte24 before checking its glyph limit.
  std::function<std::optional<std::uint8_t>()> after_encoded_name;
  std::function<std::optional<std::uint8_t>()> after_converted_name;
};
class CreditsWork final : public CreditsCallbackWork {
public:
  CreditsWork(CreditsTextScene&,PartyTrail&,std::span<std::uint8_t> composition,
              battle::PsiDisplayState&,NameBoundaryOwners = {});
  ~CreditsWork();
  CreditsWork(const CreditsWork&)=delete;
  CreditsWork& operator=(const CreditsWork&)=delete;
  unsigned maximum_master_clocks(std::span<const std::uint8_t> player_name,bool fast_rom) const;
  void with_source_work(story::SourceWorkService&,const std::function<void()>& actual_callback);
  void advance(CreditsTextScene &actual_text,std::span<const std::uint8_t> player_name) override;
  bool uses(const battle::PsiDisplayState& video) const noexcept {return &video==&video_;}
  bool uses_clock(const story::SourceWorkClock& clock) const noexcept {return clock.uses_video(video_);}
  std::uint16_t queue_start() const noexcept {return text_.source_queue_start_;}
  std::uint16_t queue_end() const noexcept {return text_.source_queue_end_;}
  bool failed() const noexcept {return failed_;}
  unsigned retired_atoms() const noexcept {return retired_;}
private:
  enum class Effect {None,Row,Next,Composition,Name,QueueByte,QueueWord,QueueStart,
                     QueuePublish,Cursor,Wipe,Fraction,Integer,Scroll,LowPort,HighPort,Return};
  struct Atom {story::SourceWorkCost cost;Effect effect{};unsigned operand{},value{};};
  std::vector<Atom> plan(std::span<const std::uint8_t>) const;
  void apply(const Atom&);
  CreditsTextScene &text_;
  PartyTrail &trail_;
  std::span<std::uint8_t> composition_;
  battle::PsiDisplayState &video_;
  story::SourceWorkService *clock_{};
  NameBoundaryOwners boundaries_;
  unsigned retired_{};
  bool active_{},failed_{};
};
// Exact installed callback identity; the name provider reads its real party
// owner during preflight and again when the installed callback executes.
class SourceCreditsCallbackWork final : public story::SourceCallbackWork {
public:
  SourceCreditsCallbackWork(WorldRuntime&,const story::InterruptCallback&,CreditsWork&,
      std::function<std::span<const std::uint8_t>()> actual_player_name);
  bool bound_to(const WorldRuntime& runtime) const noexcept {return &runtime==&runtime_;}
  bool uses(const WorldRuntime&) const noexcept override;
  unsigned maximum_master_clocks(bool,std::uint8_t) const override;
  void execute(story::SourceWorkClock&,const std::function<void()>&) override;
private:
  WorldRuntime &runtime_;
  const story::InterruptCallback &callback_;
  CreditsWork &work_;
  std::function<std::span<const std::uint8_t>()> name_;
};
// Bound once to NMI. The actual runtime callback identity chooses a borrowed
// body; an unknown owner is rejected instead of inheriting the other body's cost.
class SourceCallbackDispatcher final : public story::SourceCallbackWork {
public:
  SourceCallbackDispatcher(WorldRuntime&,story::SourceCallbackWork& world);
  bool bound_to(const WorldRuntime& runtime) const noexcept {return &runtime==&runtime_;}
  void bind_credits(SourceCreditsCallbackWork&);
  // Permanently revoke the actual installed callback and release its borrowed
  // dispatcher slot together. The callback/text result may remain alive.
  void revoke_credits(SourceCreditsCallbackWork&,WorldRuntime::Operation *parent = nullptr);
  void clear_credits(const SourceCreditsCallbackWork&) noexcept;
  bool uses(const WorldRuntime&) const noexcept override;
  unsigned maximum_master_clocks(bool,std::uint8_t) const override;
  void execute(story::SourceWorkClock&,const std::function<void()>&) override;
private:
  story::SourceCallbackWork& selected() const;
  WorldRuntime &runtime_;
  story::SourceCallbackWork &world_;
  SourceCreditsCallbackWork *credits_{};
};
}
