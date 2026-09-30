#include "eb/native/entities/npc_collision.hpp"

namespace eb::native::entities {
namespace {
const CollisionHitbox& hitbox(const CollisionShape& shape) noexcept {
    return shape.direction == 2 || shape.direction == 6 ? shape.lateral : shape.vertical;
}

// The original tests wrapped start-minus-other-extent before start-plus-extent.
// Ordinary signed rectangle intersection would change wrap and zero-size cases.
bool overlaps(std::uint16_t start, std::uint16_t extent,
              std::uint16_t other_start, std::uint16_t other_extent) noexcept {
    return std::uint16_t(start - other_extent) < other_start &&
           std::uint16_t(start + extent) > other_start;
}
}

CollisionResult check_npc_collision(const CollisionQuery& query,
                                    std::span<const CollisionBody> bodies) noexcept {
    if (!query.moving.hitbox_enabled || (query.movement_flags & 2) ||
        query.walking_style == 12 || query.demo_frames)
        return {};

    const auto moving = hitbox(query.moving);
    const auto left = std::uint16_t(query.x - moving.half_width);
    const auto width = std::uint16_t(moving.half_width * 2);
    const auto top = std::uint16_t(query.y - moving.height);
    for (std::size_t index = 0; index < bodies.size(); ++index) {
        const auto& body = bodies[index];
        if (body.script == 0xffff || body.collision_marker == 0x8000 ||
            (query.intangibility_frames && std::uint16_t(body.npc_id + 1) >= 0x8001) ||
            !body.shape.hitbox_enabled)
            continue;

        const auto candidate = hitbox(body.shape);
        if (!overlaps(std::uint16_t(body.y - candidate.height), candidate.height,
                      top, moving.height))
            continue;
        if (overlaps(std::uint16_t(body.x - candidate.half_width),
                     std::uint16_t(candidate.half_width * 2), left, width))
            return {index};
    }
    return {};
}
} // namespace eb::native::entities
