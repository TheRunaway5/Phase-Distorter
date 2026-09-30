#include "eb/native/world_overlay_playback.hpp"
#include <stdexcept>

namespace eb::native {
WorldOverlayPlayback::WorldOverlayPlayback(ActorWorld &world,
                                           const OverlaySprites &data)
    : world_(world), data_(data) {
  if (world.version() != data.version())
    throw std::invalid_argument("Overlay playback regional owners differ");
}
WorldOverlayPlayback::~WorldOverlayPlayback() { world_.clear_overlays(*this); }
void WorldOverlayPlayback::check() const {
  if (failed_)
    throw std::logic_error("Native overlay playback failed");
}
WorldOverlayPlayback::ActorState &WorldOverlayPlayback::state_for(ActorId id) {
  const auto role = world_.actor(id).authored_role();
  return role ? roles_.at(*role) : untagged_[id];
}
const WorldOverlayPlayback::ActorState *
WorldOverlayPlayback::find(ActorId id) const {
  const auto role = world_.actor(id).authored_role();
  if (role)
    return &roles_.at(*role);
  const auto found = untagged_.find(id);
  return found == untagged_.end() ? nullptr : &found->second;
}
void WorldOverlayPlayback::reset_after_map_load() {
  check();
  // LOAD_OVERLAY_SPRITES rewinds the four cursors only. Countdown and last
  // selected frame survive even for vacant authored roles.
  for (auto &actor : roles_)
    for (auto &track : actor.tracks)
      track.next_step = 0;
  for (auto &[id, actor] : untagged_)
    for (auto &track : actor.tracks)
      track.next_step = 0;
}
void WorldOverlayPlayback::step(ActorState &state, OverlayKind kind,
                                unsigned offset, int vertical) {
  auto &track = state.tracks.at(static_cast<unsigned>(kind));
  const auto clip = data_.clip(kind);
  if (!track.remaining) {
    if (track.next_step == clip.size())
      track.next_step = 0;
    const auto &selected = clip[track.next_step];
    track.frame = selected.frame;
    track.remaining = selected.duration;
    ++track.next_step;
  }
  --track.remaining;
  if (!track.frame)
    return;
  for (auto fragment : data_.frame(*track.frame + offset)) {
    fragment.top += vertical;
    state.fragments.push_back(std::move(fragment));
  }
}
void WorldOverlayPlayback::advance_draw(ActorId id) {
  try {
    check();
    const auto &actor = world_.actor(id);
    auto &state = state_for(id);
    state.fragments.clear();
    const auto surface = actor.behavior.surface_flags;
    const unsigned offset = surface & 1 ? 5 : 0;
    const auto water = surface & 12;
    if (water && water != 4) {
      if (actor.appearance.geometry_width() == 16)
        step(state, OverlayKind::Ripple, offset, 0);
      else
        step(state, OverlayKind::BigRipple, offset * 2, 8);
    }
    // Original party-only status effects use authored roles23..29. Native
    // untagged actors do not acquire party identity through their host ID.
    const auto role = actor.authored_role();
    if (!role || *role < 23)
      return;
    const auto flags = actor.appearance_context.overlay_flags;
    if (water == 4 || (flags & 0x8000))
      step(state, OverlayKind::Sweat, offset, 0);
    if (flags & 0x4000)
      step(state, OverlayKind::Mushroom, offset, 0);
  } catch (...) {
    failed_ = true;
    throw;
  }
}
std::span<const SpriteFragment>
WorldOverlayPlayback::fragments(ActorId id) const {
  check();
  const auto *actor = find(id);
  return actor ? std::span<const SpriteFragment>(actor->fragments)
               : std::span<const SpriteFragment>{};
}
const ActorOverlayState &WorldOverlayPlayback::state(ActorId id) const {
  check();
  const auto *actor = find(id);
  if (!actor)
    throw std::logic_error("Native actor has no overlay playback state");
  return actor->tracks;
}
const ActorOverlayState &
WorldOverlayPlayback::authored_state(unsigned role) const {
  check();
  return roles_.at(role).tracks;
}
} // namespace eb::native
