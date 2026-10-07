#pragma once

#include "eb/direct_scene.hpp"
#include "eb/native/sprite_resources.hpp"
#include "eb/native/sprite_fragment.hpp"
#include <array>
#include <limits>
#include <optional>

namespace eb::native {
using ActorId = std::uint64_t;
inline constexpr unsigned authored_palette = std::numeric_limits<unsigned>::max();
using SpritePalettes = std::array<std::array<std::uint32_t, 16>, 8>;

struct SpriteActor {
    unsigned sprite{}, pose{}, palette = authored_palette;
    SpriteSurface surface = SpriteSurface::Normal;
    // Authored anchor before final pixel registration; drawing subtracts one
    // pixel from Y, matching the source spritemap placement convention.
    float x{}, y{};
    // World Y controls overlap independently of a scripted render offset or
    // jump. Ordinary actors omit this and use their render-anchor Y as depth.
    std::optional<float> depth_y;
    // Source draw groups: world actors sort front to back by world Y in group 1;
    // other groups retain creation order. Smaller groups draw first.
    unsigned draw_group = 1;
    int upper_layer = 10, lower_layer = 10;
    bool visible = true;
    SpriteFrameFormat format = SpriteFrameFormat::FourDirection;
    // Drawn before this actor's body, with the same motion and depth identity.
    // Timed playback belongs to the world draw phase, never to presentation.
    std::vector<SpriteFragment> overlays;
    // Explicit generation-owned uploaded artwork, retained until its owner
    // performs another real appearance upload. Catalog actors leave this null.
    std::shared_ptr<const SpriteImage> image{};
};
struct SpriteCamera {
    float left{}, top{};
    unsigned width = 256;
    // Keep commands ready outside the viewport during fractional camera motion.
    unsigned overscan = 64;
};

// Owns graphical actors in host memory. Creating an actor acquires its artwork
// even outside the view. Camera changes only cull draw commands, never allocate,
// delete, move or activate gameplay actors. No clock or gameplay callback exists
// here. A future native world simulation supplies positions and appearance.
class SpriteActors {
  public:
    explicit SpriteActors(std::shared_ptr<SpriteResources> resources);
    ~SpriteActors();
    SpriteActors(const SpriteActors &) = delete;
    SpriteActors &operator=(const SpriteActors &) = delete;

    ActorId create(const SpriteActor &actor);
    // Host identity allocation without acquiring any artwork. ActorWorld uses
    // this for script-only controllers; the ID is never a graphics slot.
    ActorId allocate_identity();
    void update(ActorId id, const SpriteActor &actor);
    bool erase(ActorId id);
    const SpriteActor &get(ActorId id) const;
    std::size_t size() const;

    // Palettes are numeric ARGB; index zero always stays transparent. Artwork
    // and camera/actor state are captured into an immutable host draw list.
    // No framebuffer sampling, video-memory upload or CPU execution is involved.
    std::shared_ptr<const DirectSceneFrame> draw(const SpriteCamera &camera, const SpritePalettes &palettes,
                                                 std::uint64_t frame, std::uint64_t scene) const;

  private:
    struct State;
    std::unique_ptr<State> state_;
};
} // namespace eb::native
