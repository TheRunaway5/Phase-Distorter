#pragma once

#include "eb/native/action_scripts.hpp"
#include "eb/native/sprite_actors.hpp"
#include <optional>

namespace eb::native {

// Direction is the authored clockwise direction (up=0, right=2, down=4,
// left=6). Four-direction content additionally admits authored poses 8..11.
unsigned four_direction_pose(unsigned direction, std::uint16_t animation);
// Eight-direction source animation selects a byte offset in the frame table:
// the ordinary two phases are 0 and 2. Misaligned offsets are rejected.
unsigned eight_direction_pose(unsigned direction, std::uint16_t animation_byte_offset);

struct SpriteFrameSelection {
    unsigned sprite{}, pose{};
    SpriteSurface surface = SpriteSurface::Normal;
    SpriteFrameFormat format = SpriteFrameFormat::FourDirection;
    bool operator==(const SpriteFrameSelection &) const = default;
};

struct FourDirectionWalk {
    unsigned direction{};
    std::uint16_t movement_counter{}, phase_id{}, walking_style{}, surface_flags{};
};

struct EightDirectionAnimation {
    unsigned direction{};
    std::uint16_t walking_style{}, surface_flags{}, battle_swirl_ticks{}, intangibility_ticks{};
    bool teleporting = false;
    bool footstep_owner = false;
};
struct SpriteAnimationUpdate {
    bool refreshed = false;
    // Intent only: the owning native audio/world service applies its sound-ID
    // override and transition policy. This module never schedules audio.
    bool footstep = false;
};

// Owns display latching and animation, independent of rendering frequency.
// The world calls explicit updates on logic ticks and draw() for presentation.
// Changing a requested sprite/direction/surface does not change displayed
// artwork until its authored animation operation refreshes the frame.
class SpriteAppearance {
  public:
    SpriteAppearance(std::shared_ptr<SpriteResources> resources, unsigned sprite);
    // Script-only actors own no graphical appearance. Retained authored
    // selection keys belong to ActorWorld, not to this unavailable object.
    SpriteAppearance(std::shared_ptr<SpriteResources> resources, std::nullopt_t);

    // Changes artwork while retaining the actor's creation geometry. A change
    // of dimensions/shape needs a newly created appearance, as in the source.
    void set_sprite(unsigned sprite);
    unsigned sprite() const { return requested_sprite_; }
    const std::optional<SpriteFrameSelection> &displayed() const { return displayed_; }
    std::uint16_t fingerprint() const { return fingerprint_; }
    bool flashing_hidden() const { return flashing_hidden_; }
    void clear_flashing() noexcept { flashing_hidden_ = false; }
    bool available() const { return available_; }
    unsigned geometry_width() const { return resources_->definition(geometry_sprite_).width; }

    // Explicit authored startup invalidates only the animation key; retained
    // display/flashing state changes only through the following operation.
    void invalidate_animation_fingerprint() { fingerprint_ = 0xffff; }
    void select_four(unsigned direction, std::uint16_t animation, std::uint16_t surface_flags = 0);
    void select_eight(unsigned direction, std::uint16_t animation_byte_offset,
                      std::uint16_t surface_flags = 0);
    bool step_four_walk(const FourDirectionWalk &input);
    SpriteAnimationUpdate step_eight(ActionActorState &actor, const EightDirectionAnimation &input);

    // Uses the latched frame/surface, current scenery priority and authored
    // visibility. Positions are supplied by the world's projection; overlap
    // depth uses world Y. Repeated presentation calls never advance animation.
    SpriteActor draw(const ActionActorState &actor, float x, float y,
                      std::uint16_t current_surface_flags = 0) const;

  private:
    friend class ActorWorld;
    // Only the world owner can release artwork together with its published
    // graphics entry and NPC identity. Previously issued frames keep copies.
    void release();
    void latch(unsigned pose, std::uint16_t surface_flags, SpriteFrameFormat format);
    std::shared_ptr<SpriteResources> resources_;
    unsigned geometry_sprite_{}, requested_sprite_{};
    std::optional<SpriteFrameSelection> displayed_;
    std::shared_ptr<const SpriteImage> image_;
    std::uint16_t fingerprint_ = 0xffff;
    bool flashing_hidden_ = false;
    bool available_ = true;
};
} // namespace eb::native
