#pragma once

#include "eb/game_version.hpp"
#include <cstdint>
#include <memory>
#include <span>
#include <vector>

namespace eb::native {
using NpcId = std::uint16_t;

// Offsets in imported content, never executable routine addresses.
struct NpcCatalogLayout {
    std::uint32_t cell_pointers, placements, placements_end, definitions, map_tilesets;
    unsigned definition_count, photograph_script;
    bool restore_threed_npcs = false;
};
// Retail gameplay restores the two broken Threed conditions. Source oracles
// can explicitly request the unmodified SNES definitions.
NpcCatalogLayout npc_catalog_layout(GameVersion version, bool restore_threed_npcs = true);

enum class NpcType { Person = 1, ItemBox = 2, Object = 3 };
enum class NpcAppearance { Always, FlagOff, FlagOn };

struct NpcDefinition {
    NpcType type{};
    unsigned sprite{}, direction{}, script{}, event_flag{};
    NpcAppearance appearance{};
};

struct NpcPlacement {
    // Stable catalog identity in row-major cell order and authored list order.
    // Gameplay handoff uses npc, not the temporary source entity slot.
    std::uint32_t identity{};
    NpcId npc{};
    unsigned x{}, y{}, tileset{};
    bool operator==(const NpcPlacement &) const = default;
};

struct NpcRectangle {
    int left{}, top{}, right{}, bottom{}; // Inclusive left/top, exclusive right/bottom.
};

struct NpcVisibility {
    unsigned tileset{};
    // Authored flag IDs are one-based. Flag zero denotes no flag and is off.
    // Insufficient flag storage is rejected when a candidate needs that flag.
    std::span<const std::uint8_t> event_flags;
    std::span<const NpcId> active_npcs;
    bool objects_only = false;
    bool photograph = false;
};

struct NpcCandidate {
    NpcPlacement placement;
    unsigned script{}; // Photograph scenes select the authored still-pose script.
    bool operator==(const NpcCandidate &) const = default;
};

// Authored NPC content and graphical-preparation queries. Owns its imported
// data. It has no clock, RNG, gameplay allocation, callback or writable state.
// A candidate supplies initial content, not a simulated actor or guaranteed
// current pose: movement, item-box state and scripted animation belong to the
// native world owner. Procedural enemy placement is a separate subsystem.
class NpcCatalog {
  public:
    NpcCatalog(std::span<const std::uint8_t> assets, NpcCatalogLayout layout);
    ~NpcCatalog();
    NpcCatalog(NpcCatalog &&) noexcept;
    NpcCatalog &operator=(NpcCatalog &&) noexcept;
    NpcCatalog(const NpcCatalog &) = delete;
    NpcCatalog &operator=(const NpcCatalog &) = delete;

    unsigned size() const;
    const NpcDefinition &definition(NpcId id) const;
    // The 32x40 placement grid uses 256-pixel cells. List order is preserved.
    std::span<const NpcPlacement> cell(unsigned x, unsigned y) const;
    // Bounds describe graphical readiness only, independent of activation.
    // Results retain row-major cell order and each original list's order.
    std::vector<NpcCandidate> query(NpcRectangle bounds, const NpcVisibility &visibility) const;

  private:
    struct State;
    std::unique_ptr<State> state_;
};
} // namespace eb::native
