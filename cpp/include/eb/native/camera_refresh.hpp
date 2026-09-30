#pragma once

#include <cstdint>
#include <optional>
#include <vector>

namespace eb::native {

struct CameraPosition {
  std::uint16_t x{}, y{};
  bool operator==(const CameraPosition &) const = default;
};
struct CameraStreamOrigin {
  // Signed 8-pixel cells. This is the last completed activation traversal,
  // not the previous camera pixel position or a graphics-cache index.
  std::int16_t x{}, y{};
  bool operator==(const CameraStreamOrigin &) const = default;
};
enum class CameraStripAxis { Column, Row };
enum class CameraRefreshService { Npcs, Enemies };
struct CameraRefreshIntent {
  CameraRefreshService service{};
  CameraStripAxis axis{};
  // Authored query origin in 8-pixel world cells, before service gating.
  std::int16_t x{}, y{};
  bool operator==(const CameraRefreshIntent &) const = default;
};
struct CameraRefreshPlan {
  CameraStreamOrigin origin;
  std::vector<CameraRefreshIntent> intents;
};

CameraStreamOrigin camera_stream_origin(CameraPosition position);

// Plans REFRESH_MAP_AT_POSITION's ordered activation queries: every crossed
// column before every crossed row, with NPCs before enemies on each strip.
// Subcell movement produces no queries. Large moves retain all intermediate
// strips; scene loading/teleport initialization must supply its own origin.
// Direct native map/collision sampling needs none of the source upload caches.
// No actor creation, flags, randomness, clocks or supplied state are changed.
CameraRefreshPlan plan_camera_refresh(CameraStreamOrigin origin,
                                      CameraPosition target);

struct CameraRefreshGates {
  bool npcs_enabled = true;
  bool enemies_enabled = true;
  bool monsters_disabled = false;
  bool final_boss_defeated = false;
};

// Evaluate at consumption time, so host state may change between intents.
// Returns the eligible query, including authored enemy edge normalization.
// NPC initial-load mode, appearance/object/photo gates and viewport exclusion
// remain the activation service's responsibility. No candidate is an actor.
std::optional<CameraRefreshIntent>
eligible_camera_refresh_intent(const CameraRefreshIntent &intent,
                               const CameraRefreshGates &gates);

} // namespace eb::native
