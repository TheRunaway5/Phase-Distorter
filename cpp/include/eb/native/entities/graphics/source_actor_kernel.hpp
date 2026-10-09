#pragma once
#include "eb/native/entities/graphics/source_actor_draw.hpp"
#include "eb/native/entities/graphics/object_display.hpp"
namespace eb::native::story {
// Private literal near role component. A pinned parent owns its shared C-stack
// page and all input/allocation lifetimes, and validates before every step.
class SourceActorDrawKernel final {
public:
  ~SourceActorDrawKernel();
  SourceActorDrawKernel(const SourceActorDrawKernel&)=delete;
  SourceActorDrawKernel &operator=(const SourceActorDrawKernel&)=delete;
  void step();
  bool complete() const noexcept;
  std::uint64_t retired_instructions() const noexcept;
private:
  friend class SourceActorDraw;
  friend class SourceGlobalDraw;
  SourceActorDrawKernel(SourceWorkClock&,entities::graphics::ObjectDisplay&,
      entities::graphics::ObjectDisplayState&,SourceActorDrawContext,ActorId,unsigned,
      entities::graphics::SourceObjectMap,std::uint16_t&,std::uint16_t&,
      std::array<std::uint8_t,256>&,
      std::function<void(unsigned,unsigned,const entities::graphics::SourceObjectMap&)>);
  struct Execution;
  std::unique_ptr<Execution> execution_;
};
}
