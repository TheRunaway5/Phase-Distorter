#include "eb/native/sprite_appearance.hpp"
#include "eb/snapshot_archive.hpp"
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
    image_override_ = false;
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
void SpriteAppearance::replace_image(std::shared_ptr<const SpriteImage> image) {
    if (!available_ || !displayed_ || !image || !image->layout || !image->canvas ||
        !image_ || !image_->layout || *image->layout != *image_->layout ||
        image->canvas->size() != image_->canvas->size())
        throw std::invalid_argument("Retained sprite upload requires current appearance geometry");
    image_ = std::move(image);
    image_override_ = true;
}
void SpriteAppearance::release() {
    available_ = false;
    displayed_.reset();
    image_.reset();
    image_override_ = false;
    fade_hidden_ = false;
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
    picture.image = image_;
    picture.visible = available_ && !fade_hidden_ && actor.alive && !(actor.animation & 0x8000) &&
                      displayed_.has_value() && !flashing_hidden_;
    return picture;
}
void SpriteFrameSelection::snapshot_io(SnapshotArchive &archive) {
    archive(sprite, pose, surface, format);
    if (archive.loading() &&
        (surface < SpriteSurface::Normal || surface > SpriteSurface::Deep ||
         format < SpriteFrameFormat::FourDirection || format > SpriteFrameFormat::EightDirection))
        throw std::runtime_error("Invalid snapshot sprite selection");
}
void SpriteAppearance::snapshot_io(SnapshotArchive &archive) {
    if (image_override_ || fade_hidden_)
        throw std::logic_error("Snapshot of live sprite fade requires its retained fade owner");
    archive(geometry_sprite_, requested_sprite_, displayed_, fingerprint_, flashing_hidden_, available_);
    if (archive.loading()) {
        const auto &geometry = resources_->definition(geometry_sprite_);
        const auto &requested = resources_->definition(requested_sprite_);
        if (geometry.width != requested.width || geometry.height != requested.height ||
            geometry.shape != requested.shape || (!available_ && displayed_))
            throw std::runtime_error("Invalid snapshot sprite appearance geometry");
        image_.reset();
        if (displayed_) {
            const auto &definition = resources_->definition(displayed_->sprite);
            if (definition.width != geometry.width || definition.height != geometry.height ||
                definition.shape != geometry.shape)
                throw std::runtime_error("Invalid snapshot displayed sprite geometry");
            image_ = resources_->acquire(displayed_->sprite, displayed_->pose,
                                         displayed_->surface, displayed_->format);
        }
    }
}
} // namespace eb::native
