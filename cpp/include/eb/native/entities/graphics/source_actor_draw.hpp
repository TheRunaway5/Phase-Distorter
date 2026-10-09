#pragma once
#include "eb/native/entities/graphics/source_objects.hpp"
namespace eb::native::story {
// Explicit component-entry owners for original fields not yet retained by
// the ordinary actor path. The page is the actual declared C-stack locals at
// 7E1D00, separate from global DP and the hardware stack at7E1F00..1FFF.
// No factory creates these predecessor bytes or imports an oracle result.
class SourceActorDrawEntry final {
public:
  SourceActorDrawEntry(std::uint16_t map_high,std::uint16_t callback,
      std::array<std::uint8_t,256> page):map_high_(map_high),callback_(callback),page_(page){}
  SourceActorDrawEntry(const SourceActorDrawEntry&)=delete;
  SourceActorDrawEntry &operator=(const SourceActorDrawEntry&)=delete;
  std::uint16_t map_high() const noexcept{return map_high_;}
  std::uint16_t callback() const noexcept{return callback_;}
  const std::array<std::uint8_t,256> &page() const noexcept{return page_;}
  void set_map_high(std::uint16_t);
  void set_callback(std::uint16_t);
  void set_page(std::array<std::uint8_t,256>);
private:
  friend class SourceActorDraw;
  friend struct SourceActorDrawCall;
  std::shared_ptr<const void> lifetime_=std::make_shared<int>(0);
  std::uint16_t map_high_{},callback_{};
  std::array<std::uint8_t,256> page_;
  bool claimed_{};
};
struct SourceActorDrawContext {
  bool native_mode{},low_wram_stack{},wide_indexes{},decimal_clear{};
  std::uint8_t program_bank{},data_bank{};
  std::uint16_t direct_page{},stack_pointer{};
};
struct SourceActorDrawCall {
  SourceActorDrawCall(ActorId id,SourceActorDrawEntry &owner):actor(id),entry(owner),entry_lifetime(owner.lifetime_){}
  ActorId actor{};
  SourceActorDrawEntry &entry;
private:
  friend class SourceActorDraw;
  std::weak_ptr<const void> entry_lifetime;
};
// Literal bank80 C0A0CA near entry through its RTS. The genuine external
// near JSR is the caller's work. This is not unsuppressed RUN integration.
class SourceActorDraw final {
public:
  ~SourceActorDraw();
  SourceActorDraw(const SourceActorDraw&)=delete;
  SourceActorDraw &operator=(const SourceActorDraw&)=delete;
  bool advance(unsigned work_budget=4096);
  bool complete() const noexcept;
  std::uint64_t retired_instructions() const noexcept;
private:
  friend class Scene::Operation;
  static void validate_owner(SourceWorkClock&,TickState&,const battle::FrameDisplay&);
  struct Admission;
  static std::shared_ptr<Admission> admit(SourceWorkClock&,SourceActorDrawContext,SourceActorDrawCall);
  SourceActorDraw(SourceWorkClock&,std::shared_ptr<SourceObjectReceipt>,SourceActorDrawContext,
      SourceActorDrawCall,std::shared_ptr<Admission>);
  struct Execution;
  std::shared_ptr<SourceObjectReceipt> receipt_;
  std::unique_ptr<Execution> execution_;
};
}
