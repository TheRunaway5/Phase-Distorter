#include "eb/overworld_sprite_allocation.hpp"
#include <limits>
#include <map>
#include <stdexcept>

namespace eb {
struct OverworldSpriteAllocation::CreationLease::State {
    std::shared_ptr<const void> owner;
    std::shared_ptr<native::SpriteResources> resources;
    native::ActorCreationMetadata creation;
    native::SpriteAppearance appearance;
    State(std::shared_ptr<const void> identity, std::shared_ptr<native::SpriteResources> catalog,
          const native::ActorCreationData &data, unsigned sprite)
        : owner(std::move(identity)), resources(std::move(catalog)),
          creation(native::actor_creation_metadata(*resources, data, sprite)), appearance(resources, sprite) {
    }
};
struct OverworldSpriteAllocation::State {
    std::shared_ptr<const void> identity = std::make_shared<const int>(0);
    std::shared_ptr<native::SpriteResources> resources;
    native::ActorCreationData creation;
    ResourceId next_id{1};
    std::map<ResourceId, std::unique_ptr<CreationLease::State>> actors;
};
OverworldSpriteAllocation::CreationLease::CreationLease(std::unique_ptr<State> state)
    : state_(std::move(state)) {}
OverworldSpriteAllocation::CreationLease::~CreationLease() = default;
OverworldSpriteAllocation::CreationLease::CreationLease(CreationLease &&) noexcept = default;
OverworldSpriteAllocation::CreationLease &
OverworldSpriteAllocation::CreationLease::operator=(CreationLease &&) noexcept = default;
OverworldSpriteAllocation::CreationLease::operator bool() const { return bool(state_); }

OverworldSpriteAllocation::OverworldSpriteAllocation(std::shared_ptr<native::SpriteResources> resources,
                                                     native::ActorCreationData creation)
    : state_(std::make_unique<State>()) {
    if (!resources)
        throw std::invalid_argument("Native sprite allocation requires imported resources");
    state_->resources = std::move(resources);
    state_->creation = creation;
}
OverworldSpriteAllocation::~OverworldSpriteAllocation() = default;
OverworldSpriteAllocation::OverworldSpriteAllocation(const OverworldSpriteAllocation &other)
    : state_(std::make_unique<State>()) {
    state_->resources = other.state_->resources;
    state_->creation = other.state_->creation;
    state_->next_id = other.state_->next_id;
    for (const auto &[id, actor] : other.state_->actors) {
        auto copy = std::make_unique<CreationLease::State>(*actor);
        copy->owner = state_->identity;
        state_->actors.emplace(id, std::move(copy));
    }
}
OverworldSpriteAllocation &OverworldSpriteAllocation::operator=(const OverworldSpriteAllocation &other) {
    if (this != &other) {
        OverworldSpriteAllocation copy(other);
        state_.swap(copy.state_);
    }
    return *this;
}
OverworldSpriteAllocation::CreationLease OverworldSpriteAllocation::prepare(unsigned sprite) const {
    return CreationLease(std::make_unique<CreationLease::State>(state_->identity, state_->resources,
                                                                state_->creation, sprite));
}
OverworldSpriteAllocation::ResourceId OverworldSpriteAllocation::commit(CreationLease &&lease) {
    if (!lease.state_ || lease.state_->owner != state_->identity)
        throw std::invalid_argument("Missing or incompatible native sprite creation lease");
    if (state_->next_id == std::numeric_limits<ResourceId>::max())
        throw std::overflow_error("Native sprite resource identity exhausted");
    const auto id = state_->next_id;
    // Allocate the map entry before consuming the lease. Allocation failure
    // leaves the caller's prepared resource available for cancellation/retry.
    auto [entry, inserted] = state_->actors.try_emplace(id);
    if (!inserted)
        throw std::logic_error("Native sprite resource identity was reused");
    entry->second = std::move(lease.state_);
    ++state_->next_id;
    return id;
}
bool OverworldSpriteAllocation::release(ResourceId id) { return state_->actors.erase(id) != 0; }
void OverworldSpriteAllocation::reset() { state_->actors.clear(); }
std::size_t OverworldSpriteAllocation::size() const { return state_->actors.size(); }
OverworldSpriteAllocation::Snapshot OverworldSpriteAllocation::snapshot(ResourceId id) const {
    const auto &actor = *state_->actors.at(id);
    Snapshot result{id, actor.creation, actor.appearance.displayed(), {}};
    if (result.selection) {
        const auto &frame = *result.selection;
        result.image = state_->resources->acquire(frame.sprite, frame.pose, frame.surface, frame.format);
    }
    return result;
}
void OverworldSpriteAllocation::set_sprite(ResourceId id, unsigned sprite) {
    state_->actors.at(id)->appearance.set_sprite(sprite);
}
void OverworldSpriteAllocation::select_four(ResourceId id, unsigned direction, std::uint16_t animation,
                                            std::uint16_t surface_flags) {
    state_->actors.at(id)->appearance.select_four(direction, animation, surface_flags);
}
void OverworldSpriteAllocation::select_eight(ResourceId id, unsigned direction,
                                             std::uint16_t animation_byte_offset,
                                             std::uint16_t surface_flags) {
    state_->actors.at(id)->appearance.select_eight(direction, animation_byte_offset, surface_flags);
}
} // namespace eb
