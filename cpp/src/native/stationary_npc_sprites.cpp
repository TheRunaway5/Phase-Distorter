#include "eb/native/stationary_npc_sprites.hpp"
#include "eb/native/action_scripts.hpp"
#include "eb/native/sprite_appearance.hpp"
#include "eb/native/stationary_npc_policy.hpp"
#include "eb/native/world_collision.hpp"
#include "eb/snapshot_archive.hpp"
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
    Expected fixed_surface{scripts, scripts.entry(7)};
    fixed_surface.byte(0x25); fixed_surface.word(stationary);
    fixed_surface.byte(0x3b); fixed_surface.byte(0); fixed_surface.byte(0x39);
    fixed_surface.call(jp ? 0xc0a658 : 0xc0a679); fixed_surface.byte(0);
    fixed_surface.call(first_pose); fixed_surface.byte(0x19); fixed_surface.word(retention);
    Expected box{scripts, scripts.entry(9)};
    box.byte(0x25); box.word(stationary);
    box.byte(0x3b); box.byte(0); box.byte(0x39); box.call(surface);
    box.call(jp ? 0xc0c335 : 0xc0c353); // Closed/down or opened/up from its event flag.
    box.byte(0x19); box.word(retention);
    Expected marker{scripts, scripts.entry(693)};
    initialize(marker);
    const auto rotation = marker.at;
    for (unsigned direction : {0u, 2u, 4u, 6u}) {
        marker.call(jp ? 0xc0aa4d : 0xc0aa6e); marker.byte(direction); marker.byte(0);
        marker.byte(6); marker.byte(8);
    }
    marker.call(jp ? 0xc0c698 : 0xc0c6b6);
    marker.byte(0x0b); marker.word(rotation); marker.byte(0x19); marker.word(scripts.entry(35));
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
    Expected animated{scripts, scripts.entry(606)};
    initialize(animated); animated.byte(7); animated.word(child); animated.byte(0x19);
    const unsigned animation_loop = (animated.at & 0xff0000) | scripts.byte(animated.at) |
                                    unsigned(scripts.byte(animated.at + 1)) << 8;
    animated.word(animation_loop);
    Expected blink{scripts, animation_loop};
    blink.byte(6); blink.byte(24); blink.byte(0x3b); blink.byte(1);
    blink.call(jp ? 0xc0a491 : 0xc0a4b2);
    blink.byte(6); blink.byte(24); blink.call(0xc40015);
    blink.byte(0x0b); blink.word(animation_loop); blink.byte(0x19); blink.word(scripts.entry(35));
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
          NpcSpriteReadinessLimits limits, bool restore_threed_npcs)
        : npcs(assets, npc_catalog_layout(version, restore_threed_npcs)), map(assets, world_map_layout(version)),
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
                                         NpcSpriteReadinessLimits limits, bool restore_threed_npcs)
    : state_(std::make_shared<State>(assets, version, std::move(sprites), limits,
                                     restore_threed_npcs)) {}
bool StationaryNpcSprites::supports(NpcId npc) const {
    if (npc >= state_->npcs.size()) return false;
    const auto &definition = state_->npcs.definition(npc);
    return supports_stationary_npc_preview(definition.type, definition.script);
}
bool StationaryNpcSprites::supports(NpcId npc, unsigned current_script) const {
    return supports(npc) && state_->npcs.definition(npc).script == current_script;
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
        const auto flags = definition.script == 7 ? 0u :
            state_->collision.edge(*preparation.area_, origin, sprite.shape, CollisionEdge::Right, left);
        SpriteAppearance appearance(state_->sprites, definition.sprite);
        unsigned direction = definition.direction;
        if (definition.type == NpcType::ItemBox) {
            const unsigned flag = definition.event_flag;
            if (flag && (flag - 1) / 8 >= visibility.event_flags.size())
                throw std::invalid_argument("Missing item-box opened flag state");
            const bool opened = flag && (visibility.event_flags[(flag - 1) / 8] & (1u << ((flag - 1) & 7)));
            direction = opened ? 0 : 4;
        } else if (definition.script == 693) direction = 0;
        // Verified programs publish this first pose without moving. Later
        // animation belongs to the active owner; preparation runs no timeline.
        appearance.select_four(direction, 0, flags);
        const auto &selected = *appearance.displayed();
        result.push_back({candidate.placement,
            state_->sprites->acquire(selected.sprite, selected.pose, selected.surface, selected.format),
            sprite.palette, flags});
    }
    return result;
}
void StationaryNpcSprites::snapshot_preparation_io(SnapshotArchive &archive,
                                                   StationaryNpcPreparation &preparation) const {
    auto &p = preparation;
    archive(p.area_preparations_, p.resource_queries_, p.resource_failures_, p.resource_failure_, p.flags_);
    bool area = p.area_.has_value();
    archive(area);
    if (area) {
        unsigned combination = archive.loading() ? 0 : p.area_->combination();
        archive(combination);
        if (archive.loading()) {
            p.area_ = state_->map.prepare(combination, p.flags_);
            p.owner_ = state_;
        }
    } else if (archive.loading()) {
        p.area_.reset();
        p.owner_.reset();
    }
    bool resources = p.resources_.has_value();
    archive(resources);
    if (archive.loading()) {
        if (resources) {
            p.resources_.emplace(std::shared_ptr<const NpcCatalog>(state_, &state_->npcs),
                                  state_->sprites, state_->resource_limits);
            p.resource_owner_ = state_;
        } else {
            p.resources_.reset();
            p.resource_owner_.reset();
        }
    }
    if (resources) archive(*p.resources_);
    bool request = p.resource_request_.has_value();
    archive(request);
    if (archive.loading()) {
        if (request) p.resource_request_.emplace();
        else p.resource_request_.reset();
    }
    if (request) {
        auto &r = *p.resource_request_;
        archive(r.bounds.left, r.bounds.top, r.bounds.right, r.bounds.bottom,
                r.tileset, r.objects_only, r.photograph, r.flags);
        if (archive.loading()) {
            if (r.tileset >= 32 || r.bounds.left > r.bounds.right || r.bounds.top > r.bounds.bottom)
                throw std::runtime_error("Invalid snapshot NPC preparation request");
            r.owner = state_;
        }
    }
    if (archive.loading() && (p.resource_failure_ < NpcResourcePreparationFailure::None ||
                              p.resource_failure_ > NpcResourcePreparationFailure::Allocation))
        throw std::runtime_error("Invalid snapshot NPC preparation failure");
}
} // namespace eb::native
