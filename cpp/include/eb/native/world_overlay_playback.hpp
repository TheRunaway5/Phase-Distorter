#pragma once
#include "eb/native/actor_world.hpp"
#include "eb/native/overlay_sprites.hpp"

namespace eb::native {
struct OverlayTrackState {
  unsigned next_step{};
  std::uint16_t remaining{};
  std::optional<std::uint32_t> frame;
  bool operator==(const OverlayTrackState &) const = default;
};
using ActorOverlayState = std::array<OverlayTrackState, 4>;
// Live drawing animation, independent of physics and display refresh rate.
// The world invokes advance_draw once at its source DrawWorld phase. Repeated
// native captures consume the retained fragments without advancing a clock.
class WorldOverlayPlayback {
public:
  WorldOverlayPlayback(ActorWorld &, const OverlaySprites &);
  ~WorldOverlayPlayback();
  WorldOverlayPlayback(const WorldOverlayPlayback &) = delete;
  WorldOverlayPlayback &operator=(const WorldOverlayPlayback &) = delete;
  bool uses(const ActorWorld &world) const noexcept {
    return &world_ == &world;
  }
  void reset_after_map_load();
  std::vector<OverlayPlanarRow> raw_uploads() const { return data_.raw_uploads(); }
  void retire_host_actor(ActorId id) noexcept { untagged_.erase(id); }
  void advance_draw(ActorId);
  std::span<const SpriteFragment> fragments(ActorId) const;
  std::span<const OverlayObjectMap> object_maps(ActorId) const;
  const ActorOverlayState &state(ActorId) const;
  const ActorOverlayState &authored_state(unsigned role) const;
  bool failed() const noexcept { return failed_; }

private:
  struct ActorState {
    ActorOverlayState tracks;
    std::vector<SpriteFragment> fragments;
    std::vector<OverlayObjectMap> object_maps;
  };
  void check() const;
  ActorState &state_for(ActorId);
  const ActorState *find(ActorId) const;
  void step(ActorState &, OverlayKind, unsigned offset, int vertical);
  ActorWorld &world_;
  const OverlaySprites &data_;
  std::array<ActorState, 30> roles_;
  std::map<ActorId, ActorState> untagged_;
  bool failed_{};
};
} // namespace eb::native
