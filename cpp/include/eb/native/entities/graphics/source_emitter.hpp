#pragma once
#include "eb/native/entities/graphics/object_display.hpp"
#include "eb/native/story/source_work.hpp"
namespace eb::native::story {
// Private composition primitive for the already pinned UPDATE_SCREEN caller.
// It owns C08CD5 entry/body/RTL; the caller owns the actual JSL separately.
class SourceObjectEmitter final {
public:
  ~SourceObjectEmitter();
  SourceObjectEmitter(const SourceObjectEmitter&)=delete;
  SourceObjectEmitter &operator=(const SourceObjectEmitter&)=delete;
  void step();
  bool complete() const noexcept;
private:
  friend class SourceScreenUpdate;
  SourceObjectEmitter(SourceWorkService&,entities::graphics::ObjectDisplayState&,
      entities::graphics::SourceObjectMap,std::uint16_t pointer,std::uint16_t x,std::uint16_t y);
  struct Execution;
  std::unique_ptr<Execution> execution_;
};
}
