#pragma once
#include "eb/native/entities/graphics/objects.hpp"
#include "eb/native/sprite_resources.hpp"
#include "eb/native/entities/graphics/source_map.hpp"
namespace eb::native::entities::graphics {
struct ObjectMapRecord {
  std::uint16_t pointer{},size{};
  bool allocated{};
};
struct ObjectMapState {
  std::array<std::uint8_t,896> bytes{};
  std::array<ObjectMapRecord,30> roles{};
};
// CREATE_ENTITY's distinct FIND_FREE_7E4682/C01D38 allocation. Raw graphics
// cells and this179-record map pool have separate lifetimes and capacities.
class ObjectMaps {
public:
  ObjectMaps(std::span<const std::uint8_t>,GameVersion,ObjectMapState &,const SpriteResources &);
  ObjectMaps(const ObjectMaps&)=delete;
  ObjectMaps &operator=(const ObjectMaps&)=delete;
  bool uses(const SpriteResources &sprites) const noexcept {return &sprites_==&sprites;}
  void reset() noexcept;
  ObjectMapRecord allocate(unsigned sprite,unsigned cell);
  void attach(unsigned role,ObjectMapRecord record);
  void release(unsigned role);
  ObjectMap prepare(unsigned role,unsigned sprite,bool mirrored,std::uint16_t surface);
  const ObjectMapRecord &role(unsigned role) const {return state_.roles.at(role);}
  const ObjectMapState &state() const noexcept {return state_;}
  std::uint16_t origin() const noexcept {return origin_;}
private:
  friend class ObjectDisplay;
  SourceObjectMap source_map(unsigned role,bool mirrored) const;
  std::shared_ptr<const void> lifetime_=std::make_shared<int>(0);
  std::array<std::shared_ptr<const void>,30> allocations_;
  ObjectMapState &state_;
  const SpriteResources &sprites_;
  std::array<std::uint16_t,88> tiles_{};
  std::uint16_t origin_{};
};
}
