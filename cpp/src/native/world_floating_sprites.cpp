#include "eb/native/world_floating_sprites.hpp"
#include <stdexcept>

namespace eb::native {
WorldFloatingSpriteData import_world_floating_sprite_data(
    std::span<const std::uint8_t> image, GameVersion version) {
    if (version != GameVersion::US && version != GameVersion::JP)
        throw std::invalid_argument("Unsupported floating sprite region");
    const unsigned icons = version == GameVersion::JP ? 0x40d34 : 0x40de8;
    const unsigned widths = version == GameVersion::JP ? 0x4295d : 0x42a1f;
    const unsigned heights = version == GameVersion::JP ? 0x4297f : 0x42a41;
    const auto byte = [&](unsigned at) {
        if (at >= image.size()) throw std::invalid_argument("Truncated floating sprite resource table");
        return image[at];
    };
    const auto word = [&](unsigned at) {
        return std::uint16_t(byte(at) | unsigned(byte(at + 1)) << 8);
    };
    const auto signed_byte = [](std::uint8_t value) {
        return std::int8_t(value < 0x80 ? int(value) : int(value) - 256);
    };
    WorldFloatingSpriteData result;
    for (unsigned i = 0; i < result.icons.size(); ++i) {
        const auto at = icons + i * 5;
        result.icons[i] = {word(at), byte(at + 2), signed_byte(byte(at + 3)), signed_byte(byte(at + 4))};
    }
    for (unsigned i = 0; i < result.half_widths.size(); ++i) {
        result.half_widths[i] = word(widths + i * 2);
        result.heights[i] = word(heights + i * 2);
    }
    return result;
}
WorldFloatingSprites::WorldFloatingSprites(const WorldFloatingSpriteData &data,
    ActorWorld &actors, PreparedActorState &prepared, WorldFloatingSpriteState &state)
    : data_(data), actors_(actors), prepared_(prepared), state_(state) {}
bool WorldFloatingSprites::uses(const ActorWorld &actors) const noexcept { return &actors_ == &actors; }
std::optional<ActorId> WorldFloatingSprites::create_at_npc(std::uint16_t npc, std::uint8_t icon) {
    for (unsigned role = 0; role < 30; ++role)
        if (actors_.authored_npc_selector(role) == npc)
            return create_at_role(std::uint16_t(role), icon);
    return std::nullopt;
}
std::optional<ActorId> WorldFloatingSprites::create_at_role(std::uint16_t role, std::uint8_t icon) {
    if (role == 0xffff) return std::nullopt;
    if (role >= 30) throw std::out_of_range("Floating sprite parent leaves the authored role domain");
    const auto parent = actors_.actor_for_role(role);
    if (!parent) return std::nullopt;
    const auto &definition = data_.icons.at(icon);
    const auto &actor = actors_.actor(*parent);
    const auto shape = actor.appearance_context.shape;
    const auto width = data_.half_widths.at(shape);
    const auto height = data_.heights.at(shape);
    const auto position = actor.action().position;
    auto x = std::uint16_t(position[0] >> 16);
    auto y = std::uint16_t(position[1] >> 16);
    // UNKNOWN_C4B329 has intentional fallthrough for the two corner cases.
    switch (definition.placement) {
    case 1:
        y = std::uint16_t(y - std::uint16_t(height + 8));
        x = std::uint16_t(x - std::uint16_t(width - 8));
        break;
    case 4: x = std::uint16_t(x - std::uint16_t(width - 8)); break;
    case 2: y = std::uint16_t(y - std::uint16_t(height - 8)); break;
    case 3:
        y = std::uint16_t(y - std::uint16_t(height + 8));
        x = std::uint16_t(x - std::uint16_t(width + 8));
        break;
    case 6: x = std::uint16_t(x - std::uint16_t(width + 8)); break;
    default: break; // Placement 0, 5 and unknown bytes leave the anchor alone.
    }
    x = std::uint16_t(int(x) + definition.offset_x);
    y = std::uint16_t(int(y) + definition.offset_y);
    auto input = prepared_;
    input.x = x;
    input.y = y;
    // This helper calls CREATE_ENTITY directly; its graphical tail resets
    // facing to zero and does not run CREATE_PREPARED_ENTITY's facing setter.
    input.direction = 0;
    const auto spec = actors_.prepare_actor(definition.sprite, data_.event_script, input);
    bool available = false;
    for (unsigned candidate = 0; candidate < 22; ++candidate)
        available |= !actors_.actor_for_role(candidate).has_value();
    if (!available) throw std::runtime_error("Floating sprite creation exhausted its actual authored roles");
    state_ = {x, y};
    prepared_.priority = 1;
    const auto created = actors_.create_authored(spec);
    if (!created) throw std::runtime_error("Floating sprite creation exhausted its actual authored roles");
    auto &child = actors_.actor(*created);
    child.action().priority = std::uint16_t(role | 0xc000);
    child.behavior.surface_flags = actor.behavior.surface_flags;
    return created;
}
std::optional<ActorId> WorldFloatingSprites::create_at_sprite(std::uint16_t sprite, std::uint8_t icon) {
    const auto role=actors_.first_authored_role_with_sprite(sprite);
    return role?create_at_role(std::uint16_t(*role),icon):std::nullopt;
}
void WorldFloatingSprites::remove_at_npc(std::uint16_t npc) {
    for (unsigned role = 0; role < 30; ++role)
        if (actors_.authored_npc_selector(role) == npc) {
            remove_at_role(std::uint16_t(role));
            return;
        }
}
void WorldFloatingSprites::remove_at_role(std::uint16_t role) {
    if (role == 0xffff) return;
    if (role >= 30) throw std::out_of_range("Floating sprite parent leaves the authored role domain");
    const auto priority = std::uint16_t(role | 0xc000);
    for (unsigned candidate = 0; candidate < 30; ++candidate) {
        if (actors_.authored_draw_priority(candidate) != priority) continue;
        actors_.set_authored_draw_priority(candidate, 0);
        if (const auto id = actors_.actor_for_role(candidate)) actors_.erase(*id);
        else actors_.release_authored_appearance(candidate);
    }
}
void WorldFloatingSprites::remove_at_sprite(std::uint16_t sprite) {
    if (const auto role=actors_.first_authored_role_with_sprite(sprite))
        remove_at_role(std::uint16_t(*role));
}
} // namespace eb::native
