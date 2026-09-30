#pragma once

#include "eb/native/actor_creation.hpp"
#include <cstdint>
#include <memory>

namespace eb {

// Resource transaction for the ordinary overworld graphics cutover. A logical
// game actor/slot is deliberately not an allocation ID: the compatibility host
// owns that binding and preserves the existing game actor scheduler.
class OverworldSpriteAllocation {
  public:
    using ResourceId = std::uint64_t;
    class CreationLease {
      public:
        ~CreationLease();
        CreationLease(CreationLease &&) noexcept;
        CreationLease &operator=(CreationLease &&) noexcept;
        CreationLease(const CreationLease &) = delete;
        CreationLease &operator=(const CreationLease &) = delete;
        explicit operator bool() const;

      private:
        friend class OverworldSpriteAllocation;
        struct State;
        explicit CreationLease(std::unique_ptr<State> state);
        std::unique_ptr<State> state_;
    };
    struct Snapshot {
        ResourceId id{};
        // Creation palette is authoritative for the actor. Images selected
        // from a compatible group retain that group's catalog palette only as
        // content metadata; callers must use creation.sprite.palette.
        native::ActorCreationMetadata creation;
        std::optional<native::SpriteFrameSelection> selection;
        std::shared_ptr<const native::SpriteImage> image;
    };

    OverworldSpriteAllocation(std::shared_ptr<native::SpriteResources> resources,
                              native::ActorCreationData creation);
    ~OverworldSpriteAllocation();
    // Copies retain resource IDs but own independent actor state. Prepared
    // leases remain bound to their original owner and cannot cross the copy.
    OverworldSpriteAllocation(const OverworldSpriteAllocation &);
    OverworldSpriteAllocation &operator=(const OverworldSpriteAllocation &);

    // Prepare validates/imports all resource metadata before logical actor
    // creation. Abandoning an uncommitted lease releases it automatically.
    CreationLease prepare(unsigned sprite) const;
    // A lease belongs to this owner, even if another owner shares its catalog.
    // A rejected commit leaves the lease intact.
    ResourceId commit(CreationLease &&lease);
    bool release(ResourceId id);
    void reset();
    std::size_t size() const;
    Snapshot snapshot(ResourceId id) const;

    void set_sprite(ResourceId id, unsigned sprite);
    void select_four(ResourceId id, unsigned direction, std::uint16_t animation,
                     std::uint16_t surface_flags = 0);
    void select_eight(ResourceId id, unsigned direction, std::uint16_t animation_byte_offset,
                      std::uint16_t surface_flags = 0);

  private:
    struct State;
    std::unique_ptr<State> state_;
};
} // namespace eb
