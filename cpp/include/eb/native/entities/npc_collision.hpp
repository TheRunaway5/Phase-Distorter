#pragma once

#include <cstddef>
#include <cstdint>
#include <optional>
#include <span>

namespace eb::native::entities {

struct CollisionHitbox {
    std::uint16_t half_width{}, height{};
    bool operator==(const CollisionHitbox&) const = default;
};

struct CollisionShape {
    std::uint16_t hitbox_enabled{}, direction{};
    CollisionHitbox lateral, vertical;
    bool operator==(const CollisionShape&) const = default;
};

// A synchronous observation of one authoritative actor, not an actor owner.
// Retain the full source words: only script ffff and collision_marker 8000
// disable a candidate. Exactly directions 2 and 6 select the lateral shape.
struct CollisionBody {
    std::uint16_t x{}, y{}, script{0xffff}, collision_marker{0xffff}, npc_id{};
    CollisionShape shape;
    bool operator==(const CollisionBody&) const = default;
};

struct CollisionQuery {
    std::uint16_t x{}, y{}; // Proposed position, rather than the actor's old position.
    CollisionShape moving;
    std::uint16_t movement_flags{}, walking_style{}, demo_frames{}, intangibility_frames{};
    bool operator==(const CollisionQuery&) const = default;
};

struct CollisionResult {
    // Index in the supplied order, with no source-era 23-body limit or 16-bit
    // sentinel collision. The caller maps the index to its live actor identity.
    std::optional<std::size_t> selected_index;
    bool operator==(const CollisionResult&) const = default;
};

// Source: src/overworld/npc_collision_check.asm (identical US/JP algorithm).
// The input must remain stable for this synchronous call. Ordered first-hit
// selection includes the moving actor if the caller includes it in the span.
// Coordinates, doubled widths and comparisons preserve source 16-bit wrap,
// including zero extents. This models behavior, not CPU cycles/interrupts.
// The caller must publish every returned result, including early gate/no-hit
// results: every source exit writes the separate collision-result global.
CollisionResult check_npc_collision(const CollisionQuery& query,
                                    std::span<const CollisionBody> bodies) noexcept;

} // namespace eb::native::entities
