#include "eb/native/world_hotspots.hpp"
#include "eb/native/appearance_service.hpp"
#include "eb/native/npcs/interaction.hpp"
#include "eb/native/story/ticks.hpp"
#include <stdexcept>

namespace eb::native {
namespace {
unsigned slot_index(unsigned slot) {
  if (slot < 1 || slot > 2)
    throw std::out_of_range("Native hotspot slot must be 1 or 2");
  return slot - 1;
}
bool inside(const saves::Hotspot &h, std::uint16_t x, std::uint16_t y) {
  return x > h.x1 && x < h.x2 && y > h.y1 && y < h.y2;
}
dialogue::ReferenceKey reference(std::uint32_t value) {
  return {static_cast<std::uint8_t>(value),
          static_cast<std::uint8_t>(value >> 8),
          static_cast<std::uint8_t>(value >> 16),
          static_cast<std::uint8_t>(value >> 24)};
}
} // namespace
WorldHotspots::WorldHotspots(GameVersion version, WorldHotspotState &state,
                             npcs::InteractionState &leader,
                             story::TickState &clock,
                             AppearanceSceneContext &appearance,
                             WorldInteractionQueue &queue)
    : version_(version), state_(state), leader_(leader), clock_(clock),
      appearance_(appearance), queue_(queue) {
  if (!queue_.shares_world(version_, appearance_.intangibility_ticks))
    throw std::invalid_argument(
        "Native hotspots require the actual scene interaction queue");
  check();
}
bool WorldHotspots::uses(const npcs::InteractionState &leader,
                         const story::TickState &clock,
                         const AppearanceSceneContext &appearance,
                         const WorldInteractionQueue &queue) const noexcept {
  return &leader_ == &leader && &clock_ == &clock &&
         &appearance_ == &appearance && &queue_ == &queue;
}
void WorldHotspots::validate(const saves::ContinueResources &resources) const {
  check();
  if (resources.version() != version_)
    throw std::invalid_argument("Native hotspot content region mismatch");
}
void WorldHotspots::check() const {
  if (queue_.failed())
    throw std::logic_error(
        "Native hotspots cannot use an abandoned interaction queue");
}
bool WorldHotspots::evaluate(unsigned slot) {
  check();
  if (slot >= state_.live.size())
    throw std::out_of_range("Native hotspot index must be 0 or 1");
  if (appearance_.teleport_destination)
    return false;
  auto &h = state_.live[slot];
  const auto x = leader_.leader_x, y = leader_.leader_y;
  const bool fire = h.mode == 1 ? x < h.x1 || x > h.x2 || y < h.y1 || y > h.y2
                                : inside(h, x, y);
  if (!fire)
    return false;
  h.mode = 0;
  queue_.queue().enqueue(9, reference(h.content_reference));
  state_.saved_modes[slot] = 0;
  return true;
}
bool WorldHotspots::evaluate_tick() {
  check();
  const auto slot = clock_.frame_counter & 1u;
  return state_.live[slot].mode && evaluate(slot);
}
void WorldHotspots::activate(unsigned slot, unsigned id, std::uint32_t key,
                             const saves::ContinueResources &resources) {
  const auto index = slot_index(slot);
  validate(resources);
  if (id >= saves::ContinueResources::hotspot_count)
    throw std::out_of_range("Native hotspot ID is outside authored content");
  auto h = resources.hotspot(static_cast<std::uint8_t>(id), 0, key);
  h.mode = inside(h, leader_.leader_x, leader_.leader_y) ? 1 : 2;
  state_.live[index] = h;
  state_.saved_modes[index] = static_cast<std::uint8_t>(h.mode);
  state_.saved_ids[index] = static_cast<std::uint8_t>(id);
  state_.saved_references[index] = key;
}
void WorldHotspots::disable(unsigned slot) {
  check();
  const auto index = slot_index(slot);
  state_.live[index].mode = 0;
  state_.saved_modes[index] = 0;
}
void WorldHotspots::reload(const saves::ContinueResources &resources) {
  validate(resources);
  auto live = state_.live;
  for (unsigned i = 0; i < live.size(); ++i)
    if (state_.saved_modes[i])
      live[i] = resources.hotspot(state_.saved_ids[i], state_.saved_modes[i],
                                  state_.saved_references[i]);
  // Reject malformed imported IDs before replacing any live rectangle.
  state_.live = live;
}
void WorldHotspots::capture(saves::GameState &snapshot) const {
  snapshot.hotspot_modes = state_.saved_modes;
  snapshot.hotspot_ids = state_.saved_ids;
  snapshot.hotspot_content_references = state_.saved_references;
}
void WorldHotspots::restore(const saves::GameState &snapshot,
                            const saves::ContinueResources &resources) {
  validate(resources);
  auto live = state_.live;
  for (unsigned i = 0; i < live.size(); ++i)
    if (snapshot.hotspot_modes[i])
      live[i] =
          resources.hotspot(snapshot.hotspot_ids[i], snapshot.hotspot_modes[i],
                            snapshot.hotspot_content_references[i]);
  state_.saved_modes = snapshot.hotspot_modes;
  state_.saved_ids = snapshot.hotspot_ids;
  state_.saved_references = snapshot.hotspot_content_references;
  state_.live = live;
}
} // namespace eb::native
