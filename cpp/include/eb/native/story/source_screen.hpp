#pragma once
#include "eb/native/story/scene.hpp"
#include <functional>
namespace eb::native::story {
struct SourceScreenContext {
  bool native_mode{},upper_rom_caller{},low_wram_stack{},low_wram_data_bank{};
  // Nonempty emission also requires its actual7E/X16/binary caller facts.
  std::uint8_t data_bank{};
  bool wide_indexes{},decimal_clear{};
};
struct SourceScreenReceipt {
private:
  friend class Scene::Operation;
  friend class SourceScreenUpdate;
  SourceWorkService *work{};
  std::shared_ptr<SourceObjectReceipt> objects;
  std::shared_ptr<const DirectSceneFrame> world_objects;
  std::function<void()> validate,poison;
  bool live=true,completed{},consumed{},executing{};
};
// Literal UPDATE_SCREEN with empty queues or one exact owned preparation. OAM, scroll
// latches and selection remain the actual shared display owners throughout.
class SourceScreenUpdate final {
public:
  ~SourceScreenUpdate();
  SourceScreenUpdate(const SourceScreenUpdate&)=delete;
  SourceScreenUpdate &operator=(const SourceScreenUpdate&)=delete;
  bool advance(unsigned work_budget=4096);
  bool complete() const noexcept;
  std::uint64_t retired_instructions() const noexcept;
private:
  friend class Scene::Operation;
  using Receipt=SourceScreenReceipt;
  static void validate_owner(SourceWorkClock&,TickState&,const battle::FrameDisplay&,SourceObjectReceipt*);
  static void validate_entry(SourceWorkClock&,const battle::FrameDisplay&);
  SourceScreenUpdate(SourceWorkClock&,std::shared_ptr<Receipt>);
  struct Execution;
  std::shared_ptr<Receipt> receipt_;
  std::unique_ptr<Execution> execution_;
};
}
