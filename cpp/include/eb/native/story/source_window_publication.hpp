#pragma once
#include "eb/native/story/scene.hpp"
#include <array>
#include <functional>
namespace eb::native::story {
struct SourceWindowPublicationContext {
  bool native_mode{},low_wram_stack{},decimal_clear{};
  std::uint8_t program_bank=0xc2,data_bank=0x7e;
  std::uint16_t direct_page=0x1e00,stack_pointer=0x1ffc;
};
// Declared component C-stack locals only. This is not a whole WRAM facade;
// actual BG2, parameters, heap, fade and DMA bytes stay in their real owners.
class SourceWindowPublicationEntry final {
public:
  SourceWindowPublicationEntry() = default;
  SourceWindowPublicationEntry(const SourceWindowPublicationEntry &) = delete;
  SourceWindowPublicationEntry &operator=(const SourceWindowPublicationEntry &) = delete;
  std::span<const std::uint8_t,256> page() const noexcept { return page_; }
  void set_page(std::span<const std::uint8_t,256>);
private:
  friend class SourceWindowPublication;
  friend class Scene::Operation;
  friend struct SourceWindowPublicationCall;
  std::array<std::uint8_t,256> page_{};
  bool claimed_{};
  std::shared_ptr<const void> lifetime_=std::make_shared<const unsigned>(0);
};
struct SourceWindowPublicationCall {
  explicit SourceWindowPublicationCall(SourceWindowPublicationEntry &entry):entry(&entry),lifetime(entry.lifetime_) {}
private:
  friend class SourceWindowPublication;
  friend class Scene::Operation;
  SourceWindowPublicationEntry *entry{};
  std::weak_ptr<const void> lifetime;
};
struct SourceWindowPublicationReceipt {
private:
  friend class Scene::Operation;
  friend class SourceWindowPublication;
  SourceWorkService *work{};
  dialogue::WindowHost *windows{};
  const WorldDisplayFade *fade{};
  std::function<void()> validate,poison,release;
  bool live=true,completed{},consumed{},executing{};
};
// Literal C2038B/JP C2036C two-copy forced-blank helper. Its outer JSL,
// prior WindowTick prefix, cold producer timing and subsequent world tick
// are excluded. Publication metadata commits at each actual MDMAEN.
class SourceWindowPublication final {
public:
  ~SourceWindowPublication();
  SourceWindowPublication(const SourceWindowPublication &) = delete;
  SourceWindowPublication &operator=(const SourceWindowPublication &) = delete;
  bool advance(unsigned work_budget=4096);
  bool complete() const noexcept;
  std::uint64_t retired_instructions() const noexcept;
private:
  friend class Scene;
  friend class Scene::Operation;
  friend class eb::native::WorldRuntime;
  struct Admission;
  struct Execution;
  static void validate_context(SourceWindowPublicationContext);
  static void validate_host(dialogue::WindowHost &, const void *lease=nullptr);
  static void validate_owner(SourceWorkClock&,TickState&,const battle::FrameDisplay&,dialogue::WindowHost&,
      const WorldDisplayFade&,const Scene&);
  static void validate_operation_owner(SourceWorkClock&,TickState&,const battle::FrameDisplay&,dialogue::WindowHost&,
      const WorldDisplayFade&,const Scene::Operation&);
  SourceWindowPublication(SourceWorkClock&,std::shared_ptr<SourceWindowPublicationReceipt>,
      SourceWindowPublicationContext,SourceWindowPublicationCall);
  std::shared_ptr<SourceWindowPublicationReceipt> receipt_;
  std::unique_ptr<Execution> execution_;
};
}
