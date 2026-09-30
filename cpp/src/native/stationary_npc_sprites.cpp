#include "eb/native/stationary_npc_sprites.hpp"
#include "eb/native/action_scripts.hpp"
#include "eb/native/sprite_appearance.hpp"
#include "eb/native/world_collision.hpp"
#include <algorithm>
#include <new>
#include <stdexcept>

namespace eb::native {
namespace {
// Import-time proof of the declared programs, including their only child task.
// These identifiers validate content calls; no machine routine is executed.
void verify_stationary_programs(const ActionScriptData &scripts, GameVersion version) {
    const bool jp = version == GameVersion::JP;
    struct Expected {
        const ActionScriptData &scripts;
        unsigned at;
        void byte(unsigned value) {
            if (scripts.byte(at++) != value)
                throw std::invalid_argument("Unsupported stationary NPC action program");
        }
        void word(unsigned value) { byte(value & 255); byte((value >> 8) & 255); }
        void call(unsigned id) { byte(0x42); word(id); byte(id >> 16); }
    };
    const unsigned stationary = jp ? 0x9fcf : 0x9ff0,
                   surface = jp ? 0xc0c7bd : 0xc0c7db,
                   first_pose = jp ? 0xc0a49e : 0xc0a4bf;
    const auto initialize = [&](Expected &code) {
        code.byte(0x25); code.word(stationary);
        code.byte(0x3b); code.byte(0); code.byte(0x39);
        code.call(surface); code.call(first_pose);
    };
    Expected idle{scripts, scripts.entry(8)};
    initialize(idle);
    const auto retention = idle.at;
    idle.byte(6); idle.byte(8);
    idle.call(jp ? 0xc0c698 : 0xc0c6b6);
    idle.byte(0x0b); idle.word(retention);
    idle.call(jp ? 0xc020ff : 0xc020f1); idle.byte(0);
    Expected facing{scripts, scripts.entry(605)};
    initialize(facing); facing.byte(7);
    const unsigned child = (facing.at & 0xff0000) | scripts.byte(facing.at) |
                           unsigned(scripts.byte(facing.at + 1)) << 8;
    facing.word(child); facing.byte(0x19); facing.word(retention);
    Expected restore{scripts, child};
    restore.call(0xc40023); // Scheduling phase only, no motion/artwork mutation.
    const auto repeat = restore.at;
    restore.call(jp ? 0xc44690 : 0xc46914); // Read authored NPC direction.
    restore.call(jp ? 0xc446d3 : 0xc46957); // Restore it only if changed.
    restore.byte(6); restore.byte(0x50); restore.byte(0x19); restore.word(repeat);
}
}
struct StationaryNpcSprites::State {
    NpcCatalog npcs;
    WorldMap map;
    WorldCollision collision;
    std::shared_ptr<SpriteResources> sprites;
    NpcSpriteReadinessLimits resource_limits;
    std::vector<std::optional<NpcPlacement>> placements;
    State(std::span<const std::uint8_t> assets, GameVersion version, std::shared_ptr<SpriteResources> resources,
          NpcSpriteReadinessLimits limits)
        : npcs(assets, npc_catalog_layout(version)), map(assets, world_map_layout(version)),
          collision(assets, world_collision_layout(version)), sprites(std::move(resources)), resource_limits(limits) {
        if (!sprites) throw std::invalid_argument("Missing stationary NPC sprite resources");
        if (!limits.images || !limits.image_bytes)
            throw std::invalid_argument("NPC resource preparation requires positive limits");
        verify_stationary_programs(*import_action_scripts(assets, version), version);
        placements.resize(npcs.size());
        for (unsigned y = 0; y < 40; ++y)
            for (unsigned x = 0; x < 32; ++x)
                for (const auto &placement : npcs.cell(x, y)) {
                    auto &stored = placements[placement.npc];
                    if (stored) throw std::invalid_argument("Ambiguous stationary NPC placement identity");
                    stored = placement;
                }
    }
};
StationaryNpcSprites::StationaryNpcSprites(std::span<const std::uint8_t> assets, GameVersion version,
                                         std::shared_ptr<SpriteResources> sprites,
                                         NpcSpriteReadinessLimits limits)
    : state_(std::make_shared<State>(assets, version, std::move(sprites), limits)) {}
bool StationaryNpcSprites::supports(NpcId npc) const {
    if (npc >= state_->npcs.size()) return false;
    const auto &definition = state_->npcs.definition(npc);
    return definition.type == NpcType::Person && (definition.script == 8 || definition.script == 605);
}
std::optional<NpcPlacement> StationaryNpcSprites::placement(NpcId npc) const {
    return supports(npc) ? state_->placements[npc] : std::nullopt;
}
void StationaryNpcPreparation::clear_resources() noexcept {
    resources_.reset(); resource_owner_.reset(); resource_request_.reset();
    resource_failure_ = NpcResourcePreparationFailure::None;
}
bool StationaryNpcSprites::prepare_resources(NpcRectangle bounds, const NpcVisibility &visibility,
                                            StationaryNpcPreparation &preparation) const {
    const auto &last = preparation.resource_request_;
    if (last && last->owner.lock() == state_ && last->bounds.left == bounds.left &&
        last->bounds.top == bounds.top && last->bounds.right == bounds.right && last->bounds.bottom == bounds.bottom &&
        last->tileset == visibility.tileset && last->objects_only == visibility.objects_only &&
        last->photograph == visibility.photograph &&
        std::equal(last->flags.begin(), last->flags.end(), visibility.event_flags.begin(), visibility.event_flags.end()) &&
        preparation.resource_failure_ != NpcResourcePreparationFailure::Allocation)
        return preparation.resource_failure_ == NpcResourcePreparationFailure::None;
    std::optional<StationaryNpcPreparation::ResourceRequest> request;
    try {
        request.emplace(StationaryNpcPreparation::ResourceRequest{bounds, visibility.tileset,
            visibility.objects_only, visibility.photograph,
            std::vector<std::uint8_t>(visibility.event_flags.begin(), visibility.event_flags.end()), state_});
        ++preparation.resource_queries_;
        if (!preparation.resources_ || preparation.resource_owner_.lock() != state_) {
            // The alias keeps exactly the same imported catalog/state alive;
            // it creates no second catalog and cannot form an ownership cycle.
            NpcSpriteReadiness next(std::shared_ptr<const NpcCatalog>(state_, &state_->npcs),
                                   state_->sprites, state_->resource_limits);
            next.prepare(bounds, visibility);
            preparation.resources_ = std::move(next);
            preparation.resource_owner_ = state_;
        } else preparation.resources_->prepare(bounds, visibility);
        preparation.resource_request_ = std::move(request);
        preparation.resource_failure_ = NpcResourcePreparationFailure::None;
        return true;
    } catch (const std::length_error &) {
        // Remember a bounded rejection to avoid rebuilding the same excessive
        // request every frame. Changing flags/area/footprint retries it.
        preparation.resource_request_ = std::move(request);
        preparation.resource_failure_ = NpcResourcePreparationFailure::Budget;
    } catch (const std::bad_alloc &) {
        preparation.resource_failure_ = NpcResourcePreparationFailure::Allocation;
    }
    ++preparation.resource_failures_;
    return false;
}
std::vector<StationaryNpcSprite> StationaryNpcSprites::prepare(NpcRectangle bounds,
    const NpcVisibility &visibility, StationaryNpcPreparation &preparation) const {
    std::vector<StationaryNpcSprite> result;
    if (visibility.photograph) return result;
    const auto candidates = state_->npcs.query(bounds, visibility);
    for (const auto &candidate : candidates) {
        if (!supports(candidate.placement.npc)) continue;
        const auto &definition = state_->npcs.definition(candidate.placement.npc);
        if (!preparation.area_ || preparation.owner_.lock() != state_ ||
            preparation.area_->combination() != visibility.tileset ||
            !std::equal(preparation.flags_.begin(), preparation.flags_.end(),
                        visibility.event_flags.begin(), visibility.event_flags.end())) {
            auto area = state_->map.prepare(visibility.tileset, visibility.event_flags);
            std::vector<std::uint8_t> flags(visibility.event_flags.begin(), visibility.event_flags.end());
            preparation.area_ = std::move(area);
            preparation.flags_ = std::move(flags);
            preparation.owner_ = state_;
            ++preparation.area_preparations_;
        }
        const auto &sprite = state_->sprites->definition(definition.sprite);
        const auto origin = state_->collision.origin(
            {std::uint16_t(candidate.placement.x), std::uint16_t(candidate.placement.y)}, sprite.shape);
        const auto left = state_->collision.edge(*preparation.area_, origin, sprite.shape, CollisionEdge::Left);
        const auto flags = state_->collision.edge(*preparation.area_, origin, sprite.shape, CollisionEdge::Right, left);
        SpriteAppearance appearance(state_->sprites, definition.sprite);
        appearance.select_four(definition.direction, 0, flags);
        const auto &selected = *appearance.displayed();
        result.push_back({candidate.placement,
            state_->sprites->acquire(selected.sprite, selected.pose, selected.surface, selected.format),
            sprite.palette, flags});
    }
    return result;
}
} // namespace eb::native
