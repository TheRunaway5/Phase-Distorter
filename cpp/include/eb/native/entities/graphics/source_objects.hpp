#pragma once
#include "eb/native/story/scene.hpp"
#include "eb/native/entities/graphics/source_map.hpp"
#include <functional>
namespace eb::native::story {
struct SourceObjectContext {
  bool native_mode{},upper_rom_caller{},low_wram_stack{},wide_indexes{},decimal_clear{};
  std::uint8_t data_bank{};
};
struct SourceObjectCall {
  entities::graphics::SourceObjectMap map;
  std::uint16_t x{},y{};
};
// Opaque lower-owner lease; no concrete work-clock implementation is needed
// by Scene or Runtime's orchestration archive.
struct SourceObjectReceipt {
private:
  friend class Scene::Operation;
  friend class SourceObjectPreparation;
  friend class SourceActorDraw;
  friend class SourceGlobalDraw;
  friend class SourceScreenUpdate;
  SourceWorkService *work{};
  std::function<void()> validate,poison,begin_emission,finish_emission;
  bool live=true,completed{},acknowledged{},consumed{},executing{},emitting{};
};
// Actual REDIRECT_C08C58 entry: JSR, literal insertion, RTL. Its external
// authored JSL belongs to the caller and is deliberately outside this leaf.
class SourceObjectPreparation final {
public:
  ~SourceObjectPreparation();
  SourceObjectPreparation(const SourceObjectPreparation&)=delete;
  SourceObjectPreparation &operator=(const SourceObjectPreparation&)=delete;
  bool advance(unsigned work_budget=4096);
  bool complete() const noexcept;
  std::uint64_t retired_instructions() const noexcept;
private:
  friend class Scene::Operation;
  friend class SourceScreenUpdate;
  using Receipt=SourceObjectReceipt;
  static void validate_owner(SourceWorkClock&,TickState&,const battle::FrameDisplay&);
  struct Admission;
  static std::shared_ptr<Admission> admit(SourceWorkClock&,const SourceObjectCall&);
  SourceObjectPreparation(SourceWorkClock&,std::shared_ptr<Receipt>,SourceObjectCall,std::shared_ptr<Admission>);
  struct Execution;
  std::shared_ptr<Receipt> receipt_;
  std::unique_ptr<Execution> execution_;
};
}
