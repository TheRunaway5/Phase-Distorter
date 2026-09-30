#pragma once

#include "eb/game_version.hpp"
#include "eb/overworld_sprite_allocation.hpp"
#include <cstdint>
#include <memory>
#include <optional>
#include <span>

namespace eb {
class MainCpu65816;
class SnesBus;

struct NativeSpriteRuntimeDiagnostics {
    std::uint64_t creations{}, releases{}, resets{}, selections{};
    std::uint64_t graphics_allocations_bypassed{}, map_allocations_bypassed{}, map_builds_bypassed{};
    std::uint64_t graphics_releases_bypassed{}, map_releases_bypassed{}, unsupported_services{};
    unsigned live_resources{};
};

// Opt-in compatibility boundary. Logical actors/tasks continue through the
// existing scheduler; their ordinary artwork and descriptors belong to C++.
// No ResourceId is written into source arrays, addresses or return registers.
class OverworldSpriteRuntime {
  public:
    using Snapshot = OverworldSpriteAllocation::Snapshot;
    OverworldSpriteRuntime(std::span<const std::uint8_t> assets, GameVersion version);
    ~OverworldSpriteRuntime();
    OverworldSpriteRuntime(const OverworldSpriteRuntime &);
    OverworldSpriteRuntime &operator=(const OverworldSpriteRuntime &);
    OverworldSpriteRuntime(OverworldSpriteRuntime &&) noexcept;
    OverworldSpriteRuntime &operator=(OverworldSpriteRuntime &&) noexcept;

    // Called after interrupt arbitration, before source instruction execution.
    // True retires a replaced service; false only observes logical lifecycle.
    // Unknown resource operations fail explicitly, never use an original pool.
    bool try_execute(MainCpu65816 &cpu, SnesBus &bus);
    std::optional<Snapshot> snapshot(unsigned byte_slot) const;
    // Authored opcode 1C replaces the actor's draw description with a custom
    // content pointer. Renderers must choose that declared custom path rather
    // than treat neutral ordinary transport metadata as a descriptor.
    bool custom_descriptor(unsigned byte_slot) const;
    NativeSpriteRuntimeDiagnostics diagnostics() const;

    // Native effect services share imported content and publish an immutable
    // image with the actor's retained geometry. A normal pose clears the effect.
    std::shared_ptr<native::SpriteResources> resources() const;
    void replace_image(unsigned byte_slot, std::shared_ptr<const native::SpriteImage> image);

  private:
    struct State;
    std::unique_ptr<State> state_;
};
} // namespace eb
