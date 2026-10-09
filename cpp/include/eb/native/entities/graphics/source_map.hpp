#pragma once
#include "eb/native/entities/graphics/objects.hpp"
#include <functional>
#include <memory>
namespace eb::native::story { class SourceActorDraw; class SourceActorDrawKernel; class SourceGlobalDraw; }
namespace eb::native::entities::graphics {
class ObjectDisplay;
class ObjectMaps;
// A borrowed actual creation allocation or imported overlay extent. Register
// inputs remain caller facts; this handle neither prepares nor copies a map.
class SourceObjectMap {
public:
  std::uint16_t pointer() const noexcept {return pointer_;}
  std::uint8_t bank() const noexcept {return bank_;}
  void validate() const;
  // Conservative pure entry bound, including clipped records. Links must
  // stay in this actual bank extent and terminate without a cycle.
  void validate_path(unsigned maximum_entries) const;
  std::uint8_t read(std::uint16_t address) const;
  bool uses(const ObjectDisplay &owner) const noexcept {return display_==&owner;}
  std::uint64_t identity() const noexcept {return identity_;}
  ObjectAnchor anchor() const noexcept {return anchor_;}
private:
  friend class ObjectDisplay;
  friend class ObjectMaps;
  friend class eb::native::story::SourceActorDraw;
  friend class eb::native::story::SourceActorDrawKernel;
  friend class eb::native::story::SourceGlobalDraw;
  const ObjectDisplay *display_{};
  std::uint16_t pointer_{},origin_{};
  std::uint8_t bank_{};
  std::uint64_t identity_{};
  ObjectAnchor anchor_;
  std::span<const std::uint8_t> bytes_;
  std::function<void()> validate_;
  std::function<void(std::uint16_t,std::uint8_t)> write_;
};
}
