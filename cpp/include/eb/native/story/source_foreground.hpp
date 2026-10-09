#pragma once
#include "eb/native/story/scene.hpp"
#include <functional>
namespace eb::native::story {
struct SourceForegroundContext {
  bool native_mode{},upper_rom_caller{},low_wram_stack{},low_wram_data_bank{};
};
enum class SourceForegroundStage { Prefix, SuppressedActors, Return };
struct SourceForegroundReceipt {
private:
  friend class Scene::Operation;
  friend class SourceForegroundWork;
  SourceWorkService *work{};
  TickState *ticks{};
  const std::uint8_t *render{};
  const std::uint16_t *battle{};
  SourceForegroundStage stage{};
  std::function<void()> validate,poison;
  bool live=true,completed{},consumed{},executing{};
};
// Three literal boundaries of the explicitly admitted C1004E continuation.
// Its outer caller JSL and the existing CLEAR/SCREEN/WAIT leaves are separate.
class SourceForegroundWork final {
public:
  ~SourceForegroundWork();
  SourceForegroundWork(const SourceForegroundWork&)=delete;
  SourceForegroundWork &operator=(const SourceForegroundWork&)=delete;
  SourceForegroundStage stage() const noexcept;
  bool advance(unsigned work_budget=4096);
  bool complete() const noexcept;
  std::uint64_t retired_instructions() const noexcept;
private:
  friend class Scene;
  friend class Scene::Operation;
  friend class eb::native::WorldRuntime;
  static void validate_owner(SourceWorkClock&,TickState&,const battle::FrameDisplay&,const Scene&);
  static void validate_operation_owner(SourceWorkClock&,TickState&,const battle::FrameDisplay&,const Scene::Operation&);
  SourceForegroundWork(SourceWorkClock&,std::shared_ptr<SourceForegroundReceipt>);
  struct Execution;
  std::shared_ptr<SourceForegroundReceipt> receipt_;
  std::unique_ptr<Execution> execution_;
};
}
