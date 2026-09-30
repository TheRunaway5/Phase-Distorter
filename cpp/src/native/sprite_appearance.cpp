#include "eb/native/sprite_appearance.hpp"
#include <array>
#include <stdexcept>

namespace eb::native {
namespace {
constexpr std::array<unsigned, 12> four_directions{0, 0, 1, 2, 2, 2, 3, 0, 4, 5, 6, 7};
constexpr std::array<unsigned, 8> eight_directions{0, 4, 1, 5, 2, 6, 3, 7};
std::uint16_t style_key(std::uint16_t style) { return std::uint16_t((style << 8) | (style >> 8)); }
SpriteSurface surface(std::uint16_t flags) {
    return flags & 8 ? (flags & 4 ? SpriteSurface::Deep : SpriteSurface::Shallow) : SpriteSurface::Normal;
}
} // namespace

unsigned four_direction_pose(unsigned direction, std::uint16_t animation) {
    if (direction >= four_directions.size())
        throw std::out_of_range("Invalid four-direction sprite direction");
    return four_directions[direction] * 2 + (animation != 0);
}
unsigned eight_direction_pose(unsigned direction, std::uint16_t animation_byte_offset) {
    if (direction >= eight_directions.size() || (animation_byte_offset & 1))
        throw std::out_of_range("Invalid eight-direction sprite frame");
    return eight_directions[direction] * 2 + animation_byte_offset / 2;
}

SpriteAppearance::SpriteAppearance(std::shared_ptr<SpriteResources> resources, unsigned sprite)
    : resources_(std::move(resources)), geometry_sprite_(sprite), requested_sprite_(sprite) {
    if (!resources_)
        throw std::invalid_argument("Missing sprite appearance resources");
    resources_->definition(sprite); // Validate before the world publishes an actor.
}
SpriteAppearance::SpriteAppearance(std::shared_ptr<SpriteResources> resources, std::nullopt_t)
    : resources_(std::move(resources)), available_(false) {
    if (!resources_)
        throw std::invalid_argument("Missing sprite appearance resources");
}
void SpriteAppearance::set_sprite(unsigned sprite) {
    if (!available_)
        throw std::logic_error("Cannot replace released sprite appearance");
    const auto &geometry = resources_->definition(geometry_sprite_);
    const auto &replacement = resources_->definition(sprite);
    if (replacement.width != geometry.width || replacement.height != geometry.height ||
        replacement.shape != geometry.shape)
        throw std::invalid_argument("Sprite appearance change requires new geometry");
    requested_sprite_ = sprite;
}
void SpriteAppearance::latch(unsigned pose, std::uint16_t surface_flags, SpriteFrameFormat format) {
    if (!available_)
        throw std::logic_error("Cannot refresh released sprite appearance");
    const auto submerged = surface(surface_flags);
    auto image = resources_->acquire(requested_sprite_, pose, submerged, format);
    displayed_ = SpriteFrameSelection{requested_sprite_, pose, submerged, format};
    image_ = std::move(image);
}
void SpriteAppearance::select_four(unsigned direction, std::uint16_t animation, std::uint16_t surface_flags) {
    latch(four_direction_pose(direction, animation), surface_flags, SpriteFrameFormat::FourDirection);
}
void SpriteAppearance::select_eight(unsigned direction, std::uint16_t animation_byte_offset,
                                    std::uint16_t surface_flags) {
    latch(eight_direction_pose(direction, animation_byte_offset), surface_flags, SpriteFrameFormat::EightDirection);
}
bool SpriteAppearance::step_four_walk(const FourDirectionWalk &input) {
    if (!available_)
        throw std::logic_error("Cannot animate released sprite appearance");
    const auto phase = (std::uint16_t(input.movement_counter + input.phase_id) >> 3) & 1;
    const auto pose = four_direction_pose(input.direction, phase);
    const auto key = std::uint16_t(style_key(input.walking_style) | (input.direction << 1) | phase);
    if (fingerprint_ == key)
        return false;
    latch(pose, input.surface_flags, SpriteFrameFormat::FourDirection);
    fingerprint_ = key;
    return true;
}
SpriteAnimationUpdate SpriteAppearance::step_eight(ActionActorState &actor,
                                                    const EightDirectionAnimation &input) {
    if (!available_)
        throw std::logic_error("Cannot animate released sprite appearance");
    if (input.direction >= eight_directions.size())
        throw std::out_of_range("Invalid eight-direction sprite direction");
    const auto key = std::uint16_t(style_key(input.walking_style) | input.direction);
    if (fingerprint_ != key) {
        select_eight(input.direction, actor.animation, input.surface_flags);
        fingerprint_ = key;
        return {true, false}; // A changed fingerprint skips timers and flashing.
    }
    auto updated = actor;
    SpriteAnimationUpdate result;
    if (updated.variables[7] & 0x8000) {
        updated.variables[7] &= 0x7fff;
        result.refreshed = true;
    } else if (updated.variables[7] & 0x2000) {
        if (updated.animation) {
            updated.animation = 0;
            result.refreshed = true;
        }
    } else if (!input.battle_swirl_ticks) {
        --updated.variables[2];
        if (!updated.variables[2] || (updated.variables[2] & 0x8000)) {
            updated.variables[2] = updated.variables[3];
            updated.animation ^= 2;
            result.refreshed = true;
            result.footstep = !updated.animation && input.footstep_owner;
        }
    }
    if (result.refreshed)
        select_eight(input.direction, updated.animation, input.surface_flags);
    actor = updated;
    if (!input.teleporting && input.intangibility_ticks) {
        flashing_hidden_ = input.intangibility_ticks >= 45 ? !(input.intangibility_ticks & 1)
                                                          : !(input.intangibility_ticks & 3);
    }
    return result;
}
void SpriteAppearance::release() {
    available_ = false;
    displayed_.reset();
    image_.reset();
}
SpriteActor SpriteAppearance::draw(const ActionActorState &actor, float x, float y,
                                    std::uint16_t current_surface_flags) const {
    SpriteActor picture;
    picture.sprite = displayed_ ? displayed_->sprite : requested_sprite_;
    picture.pose = displayed_ ? displayed_->pose : 0;
    // Appearance swaps change the source artwork pointer, not the palette
    // encoded when the actor's spritemap was created.
    picture.palette = resources_->definition(geometry_sprite_).palette;
    picture.surface = displayed_ ? displayed_->surface : SpriteSurface::Normal;
    picture.format = displayed_ ? displayed_->format : SpriteFrameFormat::FourDirection;
    picture.x = x;
    picture.y = y;
    picture.depth_y = float(std::int16_t(actor.position[1] >> 16));
    picture.draw_group = actor.priority;
    picture.upper_layer = current_surface_flags & 2 ? 7 : 10;
    picture.lower_layer = current_surface_flags & 1 ? 7 : 10;
    picture.visible = available_ && actor.alive && !(actor.animation & 0x8000) &&
                      displayed_.has_value() && !flashing_hidden_;
    return picture;
}
} // namespace eb::native
