#pragma once
#include "eb/native/entities/graphics/source_objects.hpp"
#include "eb/native/entities/graphics/object_display.hpp"
namespace eb::native::story {
// Private composition of C08C58 through its actual RTS. Its caller owns any
// JSR/JMP/far redirect wrapper, and validates the exact lease before each atom.
class SourceObjectInsertion final {
public:
  ~SourceObjectInsertion();
  SourceObjectInsertion(const SourceObjectInsertion&)=delete;
  SourceObjectInsertion &operator=(const SourceObjectInsertion&)=delete;
  void step();
  bool complete() const noexcept;
  std::uint64_t retired_instructions() const noexcept;
private:
  friend class SourceObjectPreparation;
  friend class SourceActorDraw;
  friend class SourceActorDrawKernel;
  SourceObjectInsertion(SourceWorkService&,entities::graphics::ObjectDisplayState&,
      SourceObjectCall,std::function<void(unsigned,unsigned,const entities::graphics::SourceObjectMap&)>);
  struct Execution;
  std::unique_ptr<Execution> execution_;
};
}
