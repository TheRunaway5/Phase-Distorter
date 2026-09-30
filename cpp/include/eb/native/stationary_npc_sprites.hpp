#pragma once
#include "eb/native/npc_catalog.hpp"
#include "eb/native/npc_sprite_readiness.hpp"
#include "eb/native/sprite_resources.hpp"
#include "eb/native/world_map.hpp"
#include <memory>
#include <optional>

namespace eb::native {
struct StationaryNpcSprite {
    NpcPlacement placement;
    std::shared_ptr<const SpriteImage> image;
    unsigned palette{}, surface{};
};
enum class NpcResourcePreparationFailure { None, Budget, Allocation };
// Per-scene cache. Copies own independent event-resolved areas and flag state;
// sampling a retained copied scene cannot mutate its original renderer.
class StationaryNpcPreparation {
  public:
    std::uint64_t area_preparations() const { return area_preparations_; }
    const NpcSpriteReadiness *resources() const { return resources_ ? &*resources_ : nullptr; }
    std::uint64_t resource_queries() const { return resource_queries_; }
    std::uint64_t resource_failures() const { return resource_failures_; }
    NpcResourcePreparationFailure resource_failure() const { return resource_failure_; }
    void clear_resources() noexcept;
  private:
    friend class StationaryNpcSprites;
    std::weak_ptr<const void> owner_;
    std::optional<WorldMapArea> area_;
    std::vector<std::uint8_t> flags_;
    std::uint64_t area_preparations_{};
    struct ResourceRequest {
        NpcRectangle bounds;
        unsigned tileset{};
        bool objects_only{}, photograph{};
        std::vector<std::uint8_t> flags;
        std::weak_ptr<const void> owner;
    };
    std::optional<NpcSpriteReadiness> resources_;
    std::weak_ptr<const void> resource_owner_;
    std::optional<ResourceRequest> resource_request_;
    std::uint64_t resource_queries_{}, resource_failures_{};
    NpcResourcePreparationFailure resource_failure_ = NpcResourcePreparationFailure::None;
};

// Graphical readiness only for the two verified stationary authored programs
// (8 and 605). Their inactive position/initial pose is invariant; wandering,
// enemy, gift-box and arbitrary scripted actors are deliberately not inferred.
// Active NPC identities always win, including hidden/unselected active actors.
// No logical actor is created, ticked, retained or deleted by this owner.
class StationaryNpcSprites {
  public:
    StationaryNpcSprites(std::span<const std::uint8_t> assets, GameVersion version,
                         std::shared_ptr<SpriteResources> sprites,
                         NpcSpriteReadinessLimits resource_limits = {});
    bool supports(NpcId npc) const;
    // Authored identity for an eligible stationary actor; shared by prepared
    // artwork and its eventual logical actor without allocating gameplay state.
    std::optional<NpcPlacement> placement(NpcId npc) const;
    // Retain all declared artwork near the viewport, including moving NPCs.
    // This does not broaden stationary draw eligibility or activate actors.
    // Resource exhaustion preserves prior leases and records a diagnostic;
    // malformed content and invalid query errors remain explicit exceptions.
    bool prepare_resources(NpcRectangle bounds, const NpcVisibility &visibility,
                           StationaryNpcPreparation &preparation) const;
    // Independent immutable draw resources; no borrowed event state is kept.
    std::vector<StationaryNpcSprite> prepare(NpcRectangle bounds, const NpcVisibility &visibility,
                                           StationaryNpcPreparation &preparation) const;
  private:
    struct State;
    std::shared_ptr<const State> state_;
};
} // namespace eb::native
