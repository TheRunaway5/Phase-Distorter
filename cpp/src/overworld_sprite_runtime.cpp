#include "eb/overworld_sprite_runtime.hpp"
#include "eb/actor_surface_service.hpp"
#include "eb/actor_draw_order_service.hpp"
#include "eb/map_strip_service.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/native/sprite_appearance.hpp"
#include "eb/snes_bus.hpp"
#include "eb/snapshot_archive.hpp"
#include "eb/source_entity_admission.hpp"
#include "generated_profile.hpp"
#include <array>
#include <stdexcept>
#include <string>
#include <vector>

namespace eb {
namespace {
struct Layout {
    unsigned create, created, append, remove, reset, reset_maps, graphics_allocate, map_allocate, map_build;
    unsigned release_current, release_actor, map_free, graphics_free, four, eight, custom, mutable_upload;
    unsigned sprite, graphics_low, graphics_high, graphics_bank, byte_width, tile_height, shape;
    unsigned direction, animation, surface, second, update_offset, current_slot;
};
constexpr Layout us{0xc01e49, 0xc020f0, 0xc09c57, 0xc09c3b, 0xc0927c, 0xc01a86, 0xc01c52, 0xc01a9d,
                    0xc01d38, 0xc020f1, 0xc02140, 0xc01b15, 0xc01c11, 0xc0a4c4, 0xc0a794, 0xc09b4d,
                    0xc429ae, 0x2cd6,   0x29ca,   0x2a06,   0x2a42,   0x2a7e,   0x2aba,   0x2b6e,
                    0x2af6,   0x10f2,   0x2baa,   0x2892,   0x2896,   0x1a42};
constexpr Layout jp{0xc01e5f, 0xc020fe, 0xc09c36, 0xc09c1a, 0xc0925e, 0xc01a9c, 0xc01c68, 0xc01ab3,
                    0xc01d4e, 0xc020ff, 0xc0214e, 0xc01b2b, 0xc01c27, 0xc0a4a3, 0xc0a773, 0xc09b2c,
                    0xc428ec, 0x30d4,   0x2dc8,   0x2e04,   0x2e40,   0x2e7c,   0x2eb8,   0x2f6c,
                    0x2ef4,   0x10e8,   0x2fa8,   0x2c90,   0x2c94,   0x1a38};
unsigned word(std::span<const std::uint8_t> data, unsigned at) {
    if (at >= data.size() || data.size() - at < 2)
        throw std::out_of_range("Truncated native sprite runtime content/state");
    return data[at] | unsigned(data[at + 1]) << 8;
}
unsigned normalized_pc(unsigned pc) {
    const unsigned bank = pc >> 16;
    return bank != 0x7e && bank != 0x7f && ((bank & 0x40) || (pc & 0x8000)) ? pc | 0xc00000 : pc;
}
unsigned index(unsigned byte_slot) {
    if (byte_slot >= 60 || (byte_slot & 1))
        throw std::out_of_range("Invalid native sprite logical slot");
    return byte_slot / 2;
}
void write_word(MainCpu65816 &cpu, unsigned at, unsigned value) {
    cpu.write_byte(0x7e0000 | at, value);
    cpu.write_byte(0x7e0000 | (at + 1), value >> 8);
}
void return_service(MainCpu65816 &cpu, bool far) {
    if (far)
        cpu.execute_instruction<0x6b>(0, 1);
    else
        cpu.execute_instruction<0x60>(0, 1);
}
} // namespace
struct OverworldSpriteRuntime::State {
    struct Actor {
        OverworldSpriteAllocation::ResourceId id{};
        unsigned geometry{};
        std::shared_ptr<const native::SpriteImage> override_image;
        bool custom{};
    };
    struct Creation {
        unsigned stack{}, sprite{};
        OverworldSpriteAllocation::CreationLease lease;
    };
    struct Release {
        unsigned stack{}, slot{};
    };
    Layout layout;
    GameVersion version;
    const SourceTaskContentProof task_content;
    std::shared_ptr<native::SpriteResources> resources;
    OverworldSpriteAllocation allocations;
    ActorSurfaceService surfaces;
    std::vector<std::vector<std::uint16_t>> frame_refs;
    std::vector<unsigned> graphics_banks;
    std::array<Actor, 30> actors;
    std::vector<Creation> creations;
    std::vector<Release> releases;
    NativeSpriteRuntimeDiagnostics counts;

    State(std::span<const std::uint8_t> assets, GameVersion region)
        : layout(region == GameVersion::JP ? jp : us), version(region),
          task_content(verify_source_task_content(assets, region)),
          resources(std::make_shared<native::SpriteResources>(assets, native::sprite_catalog_layout(region))),
          allocations(resources, native::import_actor_creation_data(assets, region)), surfaces(assets, region) {
        const auto catalog = native::sprite_catalog_layout(region);
        for (unsigned group = 0; group < resources->size(); ++group) {
            const unsigned entry = catalog.groups + group * 4;
            const unsigned at = (word(assets, entry) | unsigned(assets[entry + 2]) << 16) - 0xc00000;
            graphics_banks.push_back(assets[at + 8]);
            std::vector<std::uint16_t> refs;
            for (unsigned frame = 0; frame < resources->definition(group).frames; ++frame)
                refs.push_back(word(assets, at + 9 + frame * 2));
            frame_refs.push_back(std::move(refs));
        }
    }
    State(const State &other)
        : layout(other.layout), version(other.version), task_content(other.task_content), resources(other.resources),
          allocations(other.allocations), surfaces(other.surfaces), frame_refs(other.frame_refs), graphics_banks(other.graphics_banks),
          actors(other.actors), releases(other.releases), counts(other.counts) {
        for (const auto &creation : other.creations)
            creations.push_back({creation.stack, creation.sprite, allocations.prepare(creation.sprite)});
    }
    [[noreturn]] void unsupported(const char *reason, unsigned pc) {
        ++counts.unsupported_services;
        throw std::runtime_error(std::string("Unsupported native sprite service: ") + reason + " at " +
                                 std::to_string(pc));
    }
    void release(unsigned byte_slot) {
        auto &actor = actors[index(byte_slot)];
        if (actor.id) {
            allocations.release(actor.id);
            ++counts.releases;
        }
        actor = {};
    }
    void reset() {
        allocations.reset();
        actors = {};
        creations.clear();
        releases.clear();
        ++counts.resets;
    }
    void select(MainCpu65816 &cpu, SnesBus &bus, unsigned byte_slot, bool eight) {
        auto &actor = actors[index(byte_slot)];
        if (!actor.id)
            unsupported("pose has no committed ordinary resource", cpu.program_counter);
        const auto &l = layout;
        const auto ram = std::span<const std::uint8_t>(bus.work_ram);
        const unsigned high = word(ram, l.graphics_high + byte_slot);
        const unsigned address = (high << 16) | word(ram, l.graphics_low + byte_slot);
        const auto group =
            high >= 0xc0 && high < 0xf0 ? resources->group_for_frame_table(address - 0xc00000) : std::nullopt;
        if (!group || word(ram, l.graphics_bank + byte_slot) != graphics_banks[*group])
            unsupported("pose artwork is not declared imported content", cpu.program_counter);
        const auto previous = allocations.snapshot(actor.id);
        const auto &geometry = previous.creation.sprite;
        if (word(ram, l.byte_width + byte_slot) != geometry.width * 4 ||
            word(ram, l.tile_height + byte_slot) != geometry.height / 8 ||
            word(ram, l.shape + byte_slot) != geometry.shape)
            unsupported("pose changed retained geometry", cpu.program_counter);
        const unsigned direction = word(ram, l.direction + byte_slot);
        const unsigned animation = word(ram, eight ? l.animation + byte_slot : l.second);
        const unsigned flags = word(ram, l.surface + byte_slot);
        unsigned reference;
        if (eight && animation == 0xffff) {
            // INIT_ENTITY leaves new party members hidden with animation -1.
            // C0A6E3 can still refresh them before their action selects a pose;
            // C0A0E3 suppresses drawing until that sentinel is replaced. Keep
            // C0A794's raw frame-reference latch without decoding hidden bytes
            // as an ordinary image. Its two ADCs retain carry and wrap the low
            // pointer within the original graphics-table bank.
            const unsigned sum = (address & 0xffff) + native::eight_direction_pose(direction, 0) * 2;
            const auto low = std::uint16_t(sum + animation + unsigned(sum > 0xffff));
            const unsigned offset = ((address & 0xff0000) | low) - 0xc00000;
            reference = word(bus.scene_read_view().cartridge_rom, offset);
        } else {
            const unsigned frame = eight ? native::eight_direction_pose(direction, animation)
                                         : native::four_direction_pose(direction, animation);
            reference = frame_refs.at(*group).at(frame);
            allocations.set_sprite(actor.id, *group);
            if (eight)
                allocations.select_eight(actor.id, direction, animation, flags);
            else
                allocations.select_four(actor.id, direction, animation, flags);
            actor.override_image.reset();
        }
        // A fully submerged short sprite exits before source displayed-frame
        // metadata changes. Preserve that authored visibility/orientation latch.
        const unsigned blank_rows = (reference & 2) || !(flags & 8) ? 0 : (flags & 4) ? 2 : 1;
        if (geometry.height / 8 > blank_rows)
            write_word(cpu, source_profile(version).wram_entity_displayed_sprites + byte_slot, reference);
        ++counts.selections;
        // Audited consumers only observe successful refresh as nonzero. This
        // is a native success predicate, never a fabricated graphics address.
        cpu.accumulator = 1;
        cpu.status_register =
            (cpu.status_register & ~(MainCpu65816::Accumulator8Bit | MainCpu65816::Negative)) |
            MainCpu65816::Zero;
        return_service(cpu, !eight);
    }
};
OverworldSpriteRuntime::OverworldSpriteRuntime(std::span<const std::uint8_t> assets, GameVersion version)
    : state_(std::make_unique<State>(assets, version)) {}
OverworldSpriteRuntime::~OverworldSpriteRuntime() = default;
OverworldSpriteRuntime::OverworldSpriteRuntime(const OverworldSpriteRuntime &other)
    : state_(std::make_unique<State>(*other.state_)) {}
OverworldSpriteRuntime &OverworldSpriteRuntime::operator=(const OverworldSpriteRuntime &other) {
    if (this != &other) {
        OverworldSpriteRuntime copy(other);
        state_.swap(copy.state_);
    }
    return *this;
}
OverworldSpriteRuntime::OverworldSpriteRuntime(OverworldSpriteRuntime &&) noexcept = default;
OverworldSpriteRuntime &OverworldSpriteRuntime::operator=(OverworldSpriteRuntime &&) noexcept = default;
std::optional<OverworldSpriteRuntime::Snapshot> OverworldSpriteRuntime::snapshot(unsigned byte_slot) const {
    const auto &actor = state_->actors[index(byte_slot)];
    if (!actor.id)
        return std::nullopt;
    auto result = state_->allocations.snapshot(actor.id);
    if (actor.override_image)
        result.image = actor.override_image;
    return result;
}
bool OverworldSpriteRuntime::custom_descriptor(unsigned byte_slot) const {
    return state_->actors[index(byte_slot)].custom;
}
NativeSpriteRuntimeDiagnostics OverworldSpriteRuntime::diagnostics() const {
    auto result = state_->counts;
    result.live_resources = state_->allocations.size();
    return result;
}
SourceTaskContentProof OverworldSpriteRuntime::source_task_content_proof() const {
    return state_->task_content;
}
std::shared_ptr<native::SpriteResources> OverworldSpriteRuntime::resources() const {
    return state_->resources;
}
void OverworldSpriteRuntime::replace_image(unsigned byte_slot,
                                           std::shared_ptr<const native::SpriteImage> image) {
    auto &actor = state_->actors[index(byte_slot)];
    if (!actor.id || !image || !image->layout)
        throw std::invalid_argument("Native sprite effect requires a committed actor and complete image");
    const auto expected = state_->resources->acquire(actor.geometry, 0);
    if (*image->layout != *expected->layout)
        throw std::invalid_argument("Native sprite effect changed retained geometry");
    actor.override_image = std::move(image);
}

bool OverworldSpriteRuntime::try_execute(MainCpu65816 &cpu, SnesBus &bus) {
    auto &state = *state_;
    const auto &l = state.layout;
    const unsigned pc = normalized_pc(cpu.program_counter), stack = cpu.stack_pointer;
    if (cpu.game_version != state.version || bus.game_version() != state.version)
        throw std::invalid_argument("Native sprite runtime region mismatch");
    if (state.surfaces.try_execute(cpu, bus))
        return true;
    if (try_native_actor_draw_order(cpu, bus))
        return true;
    if (try_native_map_strip(cpu, bus))
        return true;
    while (!state.creations.empty() && stack > state.creations.back().stack)
        state.creations.pop_back();
    while (!state.releases.empty() && stack > state.releases.back().stack)
        state.releases.pop_back();
    if (pc == l.create) {
        state.creations.push_back({stack, cpu.accumulator, state.allocations.prepare(cpu.accumulator)});
    } else if (pc == l.created) {
        if (state.creations.empty() || state.creations.back().stack != stack)
            state.unsupported("creation return has no resource transaction", pc);
        auto creation = std::move(state.creations.back());
        state.creations.pop_back();
        const unsigned slot = cpu.accumulator;
        if (slot >= state.actors.size() || word(bus.work_ram, l.sprite + slot * 2) != creation.sprite)
            state.unsupported("creation did not produce its logical actor", pc);
        state.release(slot * 2);
        state.actors[slot].id = state.allocations.commit(std::move(creation.lease));
        state.actors[slot].geometry = creation.sprite;
        ++state.counts.creations;
    } else if (pc == l.append || pc == l.remove) {
        state.release(cpu.x_index);
    } else if (pc == l.release_current || pc == l.release_actor) {
        const unsigned slot = pc == l.release_current ? word(bus.work_ram, l.current_slot) : cpu.accumulator;
        state.release(slot * 2);
        state.releases.push_back({stack, slot});
    } else if (pc == l.reset) {
        state.reset();
    } else if (pc == l.reset_maps) {
        state.reset();
        cpu.accumulator = (cpu.accumulator & 0xff00) | 0xff;
        cpu.x_index = 0x380;
        cpu.status_register = (cpu.status_register & ~(MainCpu65816::Accumulator8Bit |
                                                       MainCpu65816::Index8Bit | MainCpu65816::Negative)) |
                              MainCpu65816::Zero | MainCpu65816::Carry;
        return_service(cpu, true);
        return true;
    } else if (pc == l.graphics_allocate || pc == l.map_allocate || pc == l.map_build) {
        if (state.creations.empty() || stack >= state.creations.back().stack)
            state.unsupported("allocation outside an ordinary creation transaction", pc);
        if (pc == l.graphics_allocate)
            ++state.counts.graphics_allocations_bypassed;
        else if (pc == l.map_allocate)
            ++state.counts.map_allocations_bypassed;
        else
            ++state.counts.map_builds_bypassed;
        cpu.accumulator = 0; // In-range compatibility metadata; never an allocated source descriptor.
        return_service(cpu, pc != l.map_build);
        return true;
    } else if (pc == l.map_free) {
        if (state.releases.empty() || stack >= state.releases.back().stack)
            state.unsupported("descriptor release outside logical actor cleanup", pc);
        ++state.counts.map_releases_bypassed;
        cpu.accumulator = 0;
        return_service(cpu, true);
        return true;
    } else if (pc == l.graphics_free) {
        if (cpu.accumulator == 0x8000 && cpu.x_index == 0) {
            state.reset();
        } else if (!state.creations.empty() && cpu.accumulator == 0xffff) {
            // Source CREATE associates the pending allocation with its logical
            // actor. The external commit performs that association instead.
        } else if (!state.releases.empty() && cpu.accumulator == state.releases.back().slot &&
                   cpu.x_index == 0) {
            ++state.counts.graphics_releases_bypassed;
        } else {
            state.unsupported("unrecognized graphics ownership operation", pc);
        }
        cpu.accumulator = 0;
        return_service(cpu, true);
        return true;
    } else if (pc == l.four || pc == l.eight) {
        state.select(cpu, bus, pc == l.four ? cpu.y_index : word(bus.work_ram, l.update_offset),
                     pc == l.eight);
        return true;
    } else if (pc == l.custom) {
        state.actors[index(word(bus.work_ram, std::uint16_t(cpu.direct_page + 0x88)))].custom = true;
    } else if (pc == l.mutable_upload) {
        state.unsupported("mutable artwork requires a native effect service", pc);
    }
    return false;
}
void OverworldSpriteRuntime::snapshot_io(SnapshotArchive &archive) {
    auto &state = *state_;
    archive(state.allocations);
    for (auto &actor : state.actors) {
        archive(actor.id, actor.geometry, actor.override_image, actor.custom);
        if (archive.loading() && actor.id) {
            const auto retained = state.allocations.snapshot(actor.id);
            const auto &definition = state.resources->definition(actor.geometry);
            if (definition.width != retained.creation.sprite.width ||
                definition.height != retained.creation.sprite.height ||
                definition.shape != retained.creation.sprite.shape)
                throw std::runtime_error("Invalid snapshot native actor geometry");
            if (actor.override_image &&
                *actor.override_image->layout != *state.resources->acquire(actor.geometry, 0)->layout)
                throw std::runtime_error("Invalid snapshot native actor effect image");
        }
    }
    auto count = archive.count(state.creations.size());
    archive(count);
    archive.check_count(count);
    if (archive.loading()) {
        state.creations.clear();
        for (std::uint32_t i = 0; i < count; ++i) {
            unsigned stack{}, sprite{};
            archive(stack, sprite);
            auto lease = state.allocations.prepare(sprite);
            state.allocations.snapshot_lease_io(archive, lease);
            if (!lease || stack > 0xffff)
                throw std::runtime_error("Invalid snapshot native actor creation");
            state.creations.push_back({stack, sprite, std::move(lease)});
        }
    } else {
        for (auto &creation : state.creations) {
            archive(creation.stack, creation.sprite);
            state.allocations.snapshot_lease_io(archive, creation.lease);
        }
    }
    archive.sequence(state.releases, [](SnapshotArchive &io, State::Release &release) {
        io(release.stack, release.slot);
        if (io.loading() && (release.stack > 0xffff || release.slot >= 30))
            throw std::runtime_error("Invalid snapshot native actor release");
    });
    auto &c = state.counts;
    archive(c.creations, c.releases, c.resets, c.selections, c.graphics_allocations_bypassed,
            c.map_allocations_bypassed, c.map_builds_bypassed, c.graphics_releases_bypassed,
            c.map_releases_bypassed, c.unsupported_services);
}
} // namespace eb
