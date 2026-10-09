#pragma once
#include "eb/native/entities/graphics/source_actor_draw.hpp"
namespace eb::native::story {
struct SourceRoleDrawFacts {std::uint16_t map_high{},callback{};};
// Explicit missing raw source fields and one actual shared C-stack page1D00.
// These are declared component inputs, with no helper/predecessor initializer.
class SourceGlobalDrawEntry final {
public:
  SourceGlobalDrawEntry(std::array<SourceRoleDrawFacts,30> rows,std::array<std::uint8_t,256> page)
      :rows_(rows),page_(page){}
  SourceGlobalDrawEntry(const SourceGlobalDrawEntry&)=delete;
  SourceGlobalDrawEntry &operator=(const SourceGlobalDrawEntry&)=delete;
  const std::array<SourceRoleDrawFacts,30> &rows() const noexcept{return rows_;}
  const std::array<std::uint8_t,256> &page() const noexcept{return page_;}
  void set_role(unsigned,SourceRoleDrawFacts);
  void set_page(std::array<std::uint8_t,256>);
private:
  friend class SourceGlobalDraw;
  friend struct SourceGlobalDrawCall;
  std::shared_ptr<const void> lifetime_=std::make_shared<int>(0);
  std::array<SourceRoleDrawFacts,30> rows_;
  std::array<std::uint8_t,256> page_;
  bool claimed_{};
};
struct SourceGlobalDrawContext {
  bool native_mode{},low_wram_stack{},wide_indexes{},decimal_clear{};
  std::uint8_t program_bank{},data_bank{};
  std::uint16_t direct_page{},stack_pointer{};
};
struct SourceGlobalDrawCall {
  SourceGlobalDrawCall(SourceGlobalDrawEntry &owner):entry(owner),lifetime_(owner.lifetime_){}
  SourceGlobalDrawEntry &entry;
private:
  friend class SourceGlobalDraw;
  std::weak_ptr<const void> lifetime_;
};
// Actual bank80 DB0F/JP DAD7 REP31 through near RTS. Its external indirect
// JSR is separate. This independently declared entry is not whole RUN timing.
class SourceGlobalDraw final {
public:
  ~SourceGlobalDraw();
  SourceGlobalDraw(const SourceGlobalDraw&)=delete;
  SourceGlobalDraw &operator=(const SourceGlobalDraw&)=delete;
  bool advance(unsigned work_budget=4096);
  bool complete() const noexcept;
  std::uint64_t retired_instructions() const noexcept;
private:
  friend class Scene::Operation;
  struct Admission;
  static void validate_owner(SourceWorkClock&,TickState&,const battle::FrameDisplay&,const InputState&,const ActorWorld&);
  static std::shared_ptr<Admission> admit(SourceWorkClock&,const InputState&,SourceGlobalDrawCall);
  SourceGlobalDraw(SourceWorkClock&,std::shared_ptr<SourceObjectReceipt>,SourceGlobalDrawContext,
      SourceGlobalDrawCall,std::shared_ptr<Admission>);
  struct Execution;
  std::shared_ptr<SourceObjectReceipt> receipt_;
  std::unique_ptr<Execution> execution_;
};
}
