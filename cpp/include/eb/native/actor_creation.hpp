#pragma once

#include "eb/native/actor_world.hpp"

namespace eb::native {
namespace story {class SourceWorkService;}

// Explicit input to native actor creation, replacing ambient prepared globals.
// Coordinates/variables retain the authored 16-bit domain; phase_id is only an
// animation phase offset, never an allocation slot or actor identity.
struct PreparedActorState {
    std::uint16_t x{}, y{}, height{}, direction{};
    std::array<std::uint16_t, 8> variables{};
    std::uint16_t phase_id{};
    // INIT_ENTITY input. Graphical CREATE_ENTITY sets priority to one itself.
    std::uint16_t priority{};
};

// Builds the CREATE_ENTITY + prepared-facing contract. The world supplies a
// fresh logical identity and schedules the actor; this factory runs no script,
// projection or animation and imposes no legacy actor/graphics slot limit.
// Undefined leftovers from reused source task/actor slots are not creation
// inputs. Fresh native objects retain deterministic typed defaults for them.
WorldActorSpec make_actor_spec(unsigned sprite, unsigned script, const PreparedActorState &prepared,
                               const SpriteResources &sprites, const ActionScriptData &scripts,
                               std::optional<NpcId> npc = std::nullopt);

struct ActorCreationData {
    // Authored per-shape collision selector, preserved as a full word. Values
    // are not booleans; the future collision service consumes this metadata.
    std::array<std::uint16_t, 17> collision_profiles{};
};
ActorCreationData import_actor_creation_data(std::span<const std::uint8_t> assets, GameVersion version);

struct ActorCreationMetadata {
    SpriteDefinition sprite;
    std::uint16_t collision_profile{};
    unsigned lower_parts{};
};

// Optional authored raw-graphics creation continuation. The engine owns the
// semantic actor, while a deeper display service supplies actual allocation
// and COPY_TO_VRAM publication waits before INIT_ENTITY. It never uploads a
// frame merely because an actor was created.
class RawActorCreation {
  public:
    class Operation {
      public:
        virtual ~Operation() = default;
        virtual bool advance() = 0;
        virtual bool needs_publication() const noexcept = 0;
        virtual void respond_publication() = 0;
        virtual ActorId actor() const = 0;
    };
    virtual ~RawActorCreation() = default;
    virtual bool uses(const ActorWorld &) const noexcept = 0;
    virtual bool owns(ActorId) const noexcept = 0;
    virtual std::unique_ptr<Operation> begin_create(const WorldActorSpec &,
                                                   AuthoredActorRoles) = 0;
    struct SourceCall {
        std::uint8_t direct_page_low{};
        bool bank_zero_code{};
    };
    // A proved caller may retire the complete allocation-tag helpers through
    // its real work clock. This does not imply timing for INIT/entity programs.
    virtual std::unique_ptr<Operation> begin_create_with_source_work(const WorldActorSpec &,
        AuthoredActorRoles,story::SourceWorkService &,SourceCall) {
        throw std::logic_error("Raw creation has no source tag-work owner");
    }
    virtual void reset_allocations() = 0;
    virtual void release(unsigned role) = 0;
};
// Resource/collision facts initialized by CREATE_ENTITY but not yet owned by
// ActorWorld's movement solver. Returning them explicitly avoids a hidden
// compatibility allocation or pretending collision has been implemented.
ActorCreationMetadata actor_creation_metadata(SpriteResources &sprites, const ActorCreationData &data,
                                              unsigned sprite);

} // namespace eb::native
