#pragma once
#include "eb/native/actor_creation.hpp"
#include "eb/native/entities/graphics/transport.hpp"
namespace eb::native::entities::graphics {
class ObjectMaps;
struct RoleGraphics {
  std::uint16_t geometry_sprite{},allocation_cell{},destination{},displayed_reference{};
  // CREATE_ENTITY's actual upper-count high byte and lower-count low byte.
  std::uint16_t body_divide{};
  bool allocated{};
  bool operator==(const RoleGraphics &) const = default;
};
struct LifecycleState {
  std::array<RoleGraphics,30> roles{};
  bool continuation_abandoned{};
};
// CREATE_ENTITY's raw allocation precedes the real INIT_ENTITY. The record
// retains creation geometry/reference across bare script retirement; C02140
// explicitly releases its allocation. Selection is a separate actual upload.
class Lifecycle final : public RawActorCreation {
public:
  Lifecycle(LifecycleState &,ActorWorld &,const SpriteResources &,Transport &);
  ~Lifecycle();
  Lifecycle(const Lifecycle &)=delete;
  bool uses(const ActorWorld &) const noexcept override;
  bool owns(ActorId) const noexcept override;
  void bind_object_maps(ObjectMaps &);
  bool uses(const ObjectMaps &maps) const noexcept {return maps_==&maps;}
  std::unique_ptr<RawActorCreation::Operation> begin_create(const WorldActorSpec &,
      AuthoredActorRoles) override;
  std::unique_ptr<RawActorCreation::Operation> begin_create_with_source_work(const WorldActorSpec &,
      AuthoredActorRoles,story::SourceWorkService &,RawActorCreation::SourceCall) override;
  void reset_allocations() override;
  void release(unsigned role) override;
  std::unique_ptr<Transport::Operation> begin_upload(ActorId,unsigned direction,
      std::uint16_t animation,SpriteFrameFormat,std::uint16_t surface);
  std::unique_ptr<Transport::Operation> begin_selected_upload(ActorId,const SpriteFrameSelection &,
      std::uint16_t surface);
  const RoleGraphics &role(unsigned index) const {return state_.roles.at(index);}
  bool busy() const noexcept {return active_!=nullptr||transport_.busy();}
  bool failed() const noexcept {return state_.continuation_abandoned||transport_.failed();}
private:
  class Creation;
  void idle() const;
  std::unique_ptr<RawActorCreation::Operation> create(const WorldActorSpec &,AuthoredActorRoles,
      story::SourceWorkService *,RawActorCreation::SourceCall);
  LifecycleState &state_;
  ActorWorld &actors_;
  const SpriteResources &sprites_;
  Transport &transport_;
  std::array<std::optional<ActorId>,30> created_actors_;
  Creation *active_{};
  ObjectMaps *maps_{};
};
}
