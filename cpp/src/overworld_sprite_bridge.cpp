#include "eb/overworld_sprite_bridge.hpp"
#include "eb/native/sprite_appearance.hpp"
#include <array>
#include <algorithm>
#include <map>
#include <set>
#include <stdexcept>
#include <vector>

namespace eb {
namespace {
// Source PCs and work-RAM fields belong only to this compatibility adapter.
// The imported catalog and retained images have no machine dependencies.
struct Layout {
    unsigned create, created, append, destroy, release_current, release, reset, reset_maps, custom, four,
        eight, mutable_upload;
    unsigned graphics_low, graphics_high, graphics_bank, sprite, byte_width, tile_height, shape, direction,
        animation, surface, second, update_offset, current_slot;
};
constexpr Layout us{0xc01e49, 0xc020f0, 0xc09c57, 0xc09c3b, 0xc020f1, 0xc02140, 0xc0927c, 0xc01a86, 0xc09b4d,
                    0xc0a4c4, 0xc0a794, 0xc429ae, 0x29ca,   0x2a06,   0x2a42,   0x2cd6,   0x2a7e,   0x2aba,
                    0x2b6e,   0x2af6,   0x10f2,   0x2baa,   0x2892,   0x2896,   0x1a42};
constexpr Layout jp{0xc01e5f, 0xc020fe, 0xc09c36, 0xc09c1a, 0xc020ff, 0xc0214e, 0xc0925e, 0xc01a9c, 0xc09b2c,
                    0xc0a4a3, 0xc0a773, 0xc428ec, 0x2dc8,   0x2e04,   0x2e40,   0x30d4,   0x2e7c,   0x2eb8,
                    0x2f6c,   0x2ef4,   0x10e8,   0x2fa8,   0x2c90,   0x2c94,   0x1a38};
unsigned word(std::span<const std::uint8_t> bytes, unsigned at) {
    if (at >= bytes.size() || bytes.size() - at < 2)
        throw std::out_of_range("Truncated host sprite bridge state");
    return bytes[at] | unsigned(bytes[at + 1]) << 8;
}
unsigned index(unsigned byte_slot) {
    if ((byte_slot & 1) || byte_slot >= 60)
        throw std::out_of_range("Invalid host sprite actor slot");
    return byte_slot / 2;
}
unsigned code_address(unsigned address) {
    const unsigned bank = address >> 16;
    return bank != 0x7e && bank != 0x7f && ((bank & 0x40) || (address & 0x8000))
               ? address | 0xc00000 : address;
}
unsigned far_return(std::span<const std::uint8_t> ram, unsigned stack, unsigned offset) {
    return code_address(ram[std::uint16_t(stack + offset)] |
                        unsigned(ram[std::uint16_t(stack + offset + 1)]) << 8 |
                        unsigned(ram[std::uint16_t(stack + offset + 2)]) << 16);
}
native::SpriteSurface surface(unsigned flags) {
    return flags & 8 ? (flags & 4 ? native::SpriteSurface::Deep : native::SpriteSurface::Shallow)
                     : native::SpriteSurface::Normal;
}
} // namespace

struct OverworldSpriteBridge::State {
    struct Actor {
        std::optional<HostSpritePose> pose;
        std::optional<unsigned> geometry;
        std::uint64_t generation{};
        bool custom{};
    };
    struct Creation {
        unsigned stack, sprite;
    };
    struct Patch {
        std::uint64_t generation{};
        std::shared_ptr<const native::SpriteImage> target;
        unsigned first_tile{}, tile_count{}, source{}, destination{}, bytes{}, mode{};
        std::uint64_t job{};
        bool final{};
    };
    struct Loader {
        unsigned stack{}, rows{}, columns{}, padding{}, next_row{};
        bool eight{};
        std::uint64_t generation{};
        std::uint64_t job{};
        std::shared_ptr<const native::SpriteImage> target;
    };
    struct Row {
        unsigned stack{}, first_tile{}, bytes{}, consumed{}, destination{};
        std::uint64_t generation{};
        std::uint64_t job{};
        bool last{};
        std::shared_ptr<const native::SpriteImage> target;
    };
    struct Copy {
        unsigned stack{};
        std::optional<Patch> patch;
    };
    Layout layout;
    std::shared_ptr<native::SpriteResources> resources;
    std::vector<unsigned> graphics_banks;
    std::array<Actor, 30> actors;
    std::vector<Creation> creations;
    std::vector<Loader> loaders;
    std::vector<Row> rows;
    std::vector<Copy> copies;
    std::array<std::optional<Patch>, 32> queued;
    std::optional<Patch> transferring;
    std::map<std::uint64_t, native::SpriteArtwork> artwork;
    // Unsupported/mutable payloads cannot keep displaying a stale ordinary
    // image. Only a complete later ordinary job can restore that generation.
    std::map<std::uint64_t, std::uint64_t> invalidated;
    std::uint64_t next_job{};
    std::uint64_t artwork_revision{};
    std::uint64_t next_generation{1};
    HostSpriteDiagnostics counts;

    State(std::span<const std::uint8_t> assets, GameVersion version)
        : layout(version == GameVersion::JP ? jp : us), resources(std::make_shared<native::SpriteResources>(
                                                            assets, native::sprite_catalog_layout(version))) {
        const auto catalog = native::sprite_catalog_layout(version);
        for (unsigned group = 0; group < catalog.group_count; ++group) {
            const unsigned entry = catalog.groups + group * 4;
            const unsigned at = (word(assets, entry) | unsigned(assets[entry + 2]) << 16) - 0xc00000;
            graphics_banks.push_back(assets[at + 8]);
        }
    }
    void invalidate(std::uint64_t generation) {
        if (generation && artwork.contains(generation)) {
            const auto [entry, inserted] = invalidated.try_emplace(generation, next_job);
            entry->second = next_job;
            artwork_revision += inserted;
        }
    }
    void discard(unsigned byte_slot, bool custom = false) {
        if (byte_slot >= 60 || (byte_slot & 1))
            return;
        auto &actor = actors[byte_slot / 2];
        invalidate(actor.generation);
        actor.pose.reset();
        actor.custom |= custom;
        ++counts.unsupported;
    }
    void release(unsigned byte_slot) {
        if (byte_slot >= 60 || (byte_slot & 1))
            return;
        auto &actor = actors[byte_slot / 2];
        if (actor.generation) {
            ++counts.releases;
            // A released source allocation may be reused before another OAM
            // buffer is published. Its retained descriptors must follow source
            // pixels during this adapter phase, rather than keep old artwork.
            invalidate(actor.generation);
        }
        actor = {};
    }
    void append(unsigned byte_slot) {
        if (byte_slot >= 60 || (byte_slot & 1))
            return;
        invalidate(actors[byte_slot / 2].generation);
        actors[byte_slot / 2] = Actor{{}, {}, next_generation++, false};
    }
    bool geometry_matches(unsigned group, unsigned slot, std::span<const std::uint8_t> ram) const {
        const auto &def = resources->definition(group);
        return word(ram, layout.byte_width + slot) == def.width * 4 &&
               word(ram, layout.tile_height + slot) == def.height / 8 &&
               word(ram, layout.shape + slot) == def.shape;
    }
    void select(unsigned slot, bool eight, std::span<const std::uint8_t> ram) {
        if (slot >= 60 || (slot & 1)) {
            ++counts.unsupported;
            return;
        }
        auto &actor = actors[slot / 2];
        if (actor.custom) {
            discard(slot);
            return;
        }
        const unsigned sprite = word(ram, layout.sprite + slot);
        if (sprite >= resources->size()) {
            discard(slot);
            return;
        }
        // This also permits safe attachment to an already running scene.
        if (!actor.geometry) {
            actor.geometry = sprite;
            if (!actor.generation)
                actor.generation = next_generation++;
        }
        const unsigned bank = word(ram, layout.graphics_high + slot);
        const unsigned pointer = (bank << 16) | word(ram, layout.graphics_low + slot);
        const auto group =
            bank >= 0xc0 && bank < 0xf0 ? resources->group_for_frame_table(pointer - 0xc00000) : std::nullopt;
        if (!group || !geometry_matches(*actor.geometry, slot, ram) || !geometry_matches(*group, slot, ram) ||
            word(ram, layout.graphics_bank + slot) != graphics_banks[*group]) {
            discard(slot);
            return;
        }
        try {
            const unsigned direction = word(ram, layout.direction + slot);
            const unsigned frame =
                eight ? native::eight_direction_pose(direction, word(ram, layout.animation + slot))
                      : native::four_direction_pose(direction, word(ram, layout.second));
            const auto treatment = surface(word(ram, layout.surface + slot));
            const auto format =
                eight ? native::SpriteFrameFormat::EightDirection : native::SpriteFrameFormat::FourDirection;
            auto image = resources->acquire(*group, frame, treatment, format);
            actor.pose = HostSpritePose{std::move(image),
                                        actor.generation,
                                        resources->definition(*actor.geometry).palette,
                                        *group,
                                        frame,
                                        format,
                                        treatment};
            ++counts.selections;
        } catch (const std::out_of_range &) {
            // An undeclared/custom pose must not keep unrelated ordinary art.
            discard(slot);
        }
    }
    void start_loader(unsigned slot, bool eight, unsigned stack, std::span<const std::uint8_t> ram) {
        select(slot, eight, ram);
        Loader load;
        load.stack = stack;
        load.eight = eight;
        load.job = ++next_job;
        if (slot < 60 && !(slot & 1)) {
            const auto &actor = actors[slot / 2];
            if (actor.pose) {
                const auto &definition = resources->definition(*actor.geometry);
                load.rows = definition.height / 8;
                load.columns = definition.width / 8;
                load.padding = load.rows & 1;
                load.generation = actor.generation;
                load.target = actor.pose->image;
                if (artwork.try_emplace(load.generation, *load.target).second)
                    ++artwork_revision;
            }
        }
        loaders.push_back(std::move(load));
    }
    void start_row(unsigned stack, std::span<const std::uint8_t> ram) {
        Row row;
        row.stack = stack;
        const auto caller = far_return(ram, stack, 1);
        const unsigned shift = layout.four == us.four ? 0 : 0x21;
        if (!loaders.empty()) {
            auto &load = loaders.back();
            const auto &sites = load.eight ? std::array{0xc0a7e6u, 0xc0a7f5u, 0xc0a81au}
                                          : std::array{0xc0a526u, 0xc0a535u, 0xc0a559u};
            const bool from_loader = std::any_of(sites.begin(), sites.end(),
                [&](unsigned site) { return caller == site - shift + 3; });
            if (from_loader && load.target && load.next_row < load.rows && stack + 3 == load.stack) {
                row.generation = load.generation;
                row.job = load.job;
                row.target = load.target;
                row.first_tile = (load.padding + load.next_row++) * (load.target->layout->canvas_width / 8);
                row.last = load.next_row == load.rows;
                row.bytes = load.columns * 32;
                row.destination = word(ram, 0x97);
                if (word(ram, 0x92) != row.bytes)
                    throw std::runtime_error("Host sprite row size differs from imported geometry");
            }
        }
        // Even an unrelated nested row masks the suspended outer row's owner.
        rows.push_back(std::move(row));
    }
    void start_copy(unsigned stack, std::span<const std::uint8_t> ram) {
        Copy copy;
        copy.stack = stack;
        if (!rows.empty()) {
            auto &row = rows.back();
            const unsigned shift = layout.four == us.four ? 0 : 0x21;
            const auto caller = far_return(ram, stack, 7);
            const std::array sites{0xc0a59bu, 0xc0a5bcu, 0xc0a5ceu};
            const bool from_row = std::any_of(sites.begin(), sites.end(),
                [&](unsigned site) { return caller == site - shift + 3; });
            // C0A56E pushes scratch values around a split copy, so validate the
            // actual PREPARE call chain rather than assuming one stack delta.
            if (from_row && row.target && stack < row.stack && word(ram, std::uint16_t(stack + 1)) == 0x8656) {
                const unsigned bytes = word(ram, 0x92), mode = ram[0x91];
                if (!bytes || bytes % 32 || row.consumed + bytes > row.bytes || (mode != 0 && mode != 3))
                    throw std::runtime_error("Invalid host sprite tile-copy segment");
                const unsigned linear = row.destination + row.consumed / 2;
                const unsigned expected = linear + (((linear ^ row.destination) & 0x100) ? 0x100 : 0);
                if (word(ram, 0x97) != std::uint16_t(expected))
                    throw std::runtime_error("Host sprite split-copy destination differs");
                copy.patch = Patch{row.generation, row.target, row.first_tile + row.consumed / 32,
                                   bytes / 32, word(ram, 0x94) | unsigned(ram[0x96]) << 16,
                                   word(ram, 0x97), bytes, mode, row.job,
                                   row.last && row.consumed + bytes == row.bytes};
                row.consumed += bytes;
            }
        }
        copies.push_back(std::move(copy));
    }
};

OverworldSpriteBridge::OverworldSpriteBridge(std::span<const std::uint8_t> assets, GameVersion version)
    : state_(std::make_unique<State>(assets, version)) {}
OverworldSpriteBridge::~OverworldSpriteBridge() = default;
OverworldSpriteBridge::OverworldSpriteBridge(const OverworldSpriteBridge &other)
    : state_(std::make_unique<State>(*other.state_)) {}
OverworldSpriteBridge &OverworldSpriteBridge::operator=(const OverworldSpriteBridge &other) {
    if (this != &other)
        state_ = std::make_unique<State>(*other.state_);
    return *this;
}
OverworldSpriteBridge::OverworldSpriteBridge(OverworldSpriteBridge &&) noexcept = default;
OverworldSpriteBridge &OverworldSpriteBridge::operator=(OverworldSpriteBridge &&) noexcept = default;

void OverworldSpriteBridge::before_instruction(std::uint32_t pc, std::uint16_t a, std::uint16_t x,
                                               std::uint16_t y, std::uint16_t s, std::uint16_t d,
                                               std::span<const std::uint8_t> ram) {
    auto &state = *state_;
    const auto &l = state.layout;
    pc = code_address(pc);
    const unsigned shift = l.four == us.four ? 0 : 0x21;
    const auto unwind = [s](auto &scopes) {
        while (!scopes.empty() && s > scopes.back().stack)
            scopes.pop_back();
    };
    unwind(state.loaders);
    unwind(state.rows);
    unwind(state.copies);
    if (pc == l.four || pc == l.eight) {
        while (!state.loaders.empty() && s == state.loaders.back().stack)
            state.loaders.pop_back();
        state.start_loader(pc == l.four ? unsigned(y) : word(ram, l.update_offset), pc == l.eight, s, ram);
    } else if ((pc == 0xc0a56d - shift || pc == 0xc0a82e - shift) &&
               !state.loaders.empty() && state.loaders.back().stack == s) {
        state.loaders.pop_back();
    } else if (pc == 0xc0a56e - shift) {
        state.start_row(s, ram);
    } else if ((pc == 0xc0a5e4 - shift || pc == 0xc0a601 - shift || pc == 0xc0a60a - shift) &&
               !state.rows.empty() && state.rows.back().stack == s) {
        const auto &row = state.rows.back();
        if (row.target && row.consumed != row.bytes)
            throw std::runtime_error("Host sprite row returned before tagging every tile");
        state.rows.pop_back();
    } else if (pc == 0xc0865f) {
        state.start_copy(s, ram);
    } else if (pc == 0xc086a1) {
        const unsigned slot = ((unsigned(y) - 8) & 255) / 8;
        state.queued[slot].reset();
        if (!state.copies.empty() && s + 3u == state.copies.back().stack) {
            state.queued[slot] = state.copies.back().patch;
            state.counts.queued_patches += state.queued[slot].has_value();
        }
    } else if (pc == 0xc08240) {
        const unsigned slot = (unsigned(x) & 255) / 8;
        state.transferring = state.queued[slot];
        state.queued[slot].reset();
    } else if (pc == 0xc086c9) {
        state.transferring.reset();
        if (!state.copies.empty() && s + 3u == state.copies.back().stack)
            state.transferring = state.copies.back().patch;
    } else if (pc == (l.four == us.four ? 0xc086ddu : 0xc086d6u)) {
        if (!state.copies.empty() && s == state.copies.back().stack)
            state.copies.pop_back();
    } else if (pc == l.create)
        state.creations.push_back({s, a});
    else if (pc == l.created) {
        if (!state.creations.empty() && state.creations.back().stack == s) {
            const auto creation = state.creations.back();
            state.creations.pop_back();
            if (a < state.actors.size() && creation.sprite < state.resources->size() &&
                word(ram, l.sprite + a * 2) == creation.sprite) {
                auto &actor = state.actors[a];
                if (!actor.generation)
                    actor.generation = state.next_generation++;
                actor.geometry = creation.sprite;
                actor.pose.reset();
                actor.custom = false;
                ++state.counts.creations;
            }
        }
    } else if (pc == l.append)
        state.append(x);
    else if (pc == l.destroy)
        state.release(x);
    else if (pc == l.release_current)
        state.release(word(ram, l.current_slot) * 2);
    else if (pc == l.release)
        state.release(unsigned(a) * 2);
    else if (pc == l.reset || pc == l.reset_maps) {
        for (const auto &actor : state.actors)
            state.invalidate(actor.generation);
        state.actors = {};
        state.creations.clear();
        state.loaders.clear();
        state.rows.clear();
        state.copies.clear();
        ++state.counts.resets;
    } else if (pc == l.custom)
        state.discard(word(ram, std::uint16_t(d + 0x88)), true);
    else if (pc == l.mutable_upload)
        state.discard(unsigned(x) * 2);
}
void OverworldSpriteBridge::complete_graphics_dma(unsigned source, unsigned destination, unsigned bytes,
                                                  unsigned control, unsigned port, unsigned vmain) {
    auto &state = *state_;
    if (!state.transferring)
        return;
    const auto patch = std::move(*state.transferring);
    state.transferring.reset();
    if (source != patch.source || destination != patch.destination || bytes != patch.bytes ||
        control != (patch.mode == 3 ? 9u : 1u) || port != 0x18 || vmain != 0x80)
        throw std::runtime_error("Completed host sprite transfer differs from its tagged command");
    const auto found = state.artwork.find(patch.generation);
    if (found == state.artwork.end())
        throw std::runtime_error("Completed host sprite transfer lost its retained generation");
    found->second.apply_tiles(*patch.target, patch.first_tile, patch.tile_count);
    if (const auto invalid = state.invalidated.find(patch.generation);
        invalid != state.invalidated.end() && patch.final && patch.job > invalid->second)
        state.invalidated.erase(invalid);
    ++state.artwork_revision;
    ++state.counts.committed_patches;
}

std::shared_ptr<const native::SpriteImage> OverworldSpriteBridge::committed_image(
    std::uint64_t generation, native::SpriteOrientation orientation) const {
    if (state_->invalidated.contains(generation))
        return nullptr;
    const auto found = state_->artwork.find(generation);
    return found == state_->artwork.end() ? nullptr : found->second.snapshot(orientation);
}
std::uint64_t OverworldSpriteBridge::artwork_revision() const { return state_->artwork_revision; }
void OverworldSpriteBridge::collect_artwork(std::span<const std::uint64_t> retained) {
    std::set<std::uint64_t> live(retained.begin(), retained.end());
    const auto add_patch = [&](const auto &patch) { if (patch) live.insert(patch->generation); };
    for (const auto &actor : state_->actors) live.insert(actor.generation);
    for (const auto &load : state_->loaders) live.insert(load.generation);
    for (const auto &row : state_->rows) live.insert(row.generation);
    for (const auto &copy : state_->copies) add_patch(copy.patch);
    for (const auto &patch : state_->queued) add_patch(patch);
    add_patch(state_->transferring);
    std::erase_if(state_->artwork, [&](const auto &item) { return !live.contains(item.first); });
    std::erase_if(state_->invalidated, [&](const auto &item) { return !live.contains(item.first); });
}

const std::optional<HostSpritePose> &OverworldSpriteBridge::pose(unsigned byte_slot) const {
    return state_->actors[index(byte_slot)].pose;
}
HostSpriteDiagnostics OverworldSpriteBridge::diagnostics() const {
    auto result = state_->counts;
    for (const auto &actor : state_->actors)
        result.live_poses += actor.pose.has_value();
    return result;
}
} // namespace eb
