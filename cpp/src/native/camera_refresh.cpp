#include "eb/native/camera_refresh.hpp"
#include <algorithm>
#include <stdexcept>

namespace eb::native {
namespace {
std::int16_t wrap(int value) {
  const auto word = unsigned(value) & 0xffff;
  return std::int16_t(word < 0x8000 ? int(word) : int(word) - 65536);
}
std::int16_t pixel_cell(std::uint16_t value) {
  const int signed_pixel = value < 0x8000 ? int(value) : int(value) - 65536;
  return std::int16_t(signed_pixel >= 0 ? signed_pixel / 8
                                        : (signed_pixel - 7) / 8);
}
unsigned distance(std::int16_t a, std::int16_t b) {
  const unsigned delta = unsigned(int(a) - b) & 0xffff;
  return std::min(delta, 65536 - delta);
}
void validate(const CameraRefreshIntent &intent) {
  if (intent.axis != CameraStripAxis::Column &&
      intent.axis != CameraStripAxis::Row)
    throw std::invalid_argument("Invalid native camera strip axis");
  if (intent.service != CameraRefreshService::Npcs &&
      intent.service != CameraRefreshService::Enemies)
    throw std::invalid_argument("Invalid native camera refresh service");
}
} // namespace

CameraStreamOrigin camera_stream_origin(CameraPosition position) {
  return {pixel_cell(position.x), pixel_cell(position.y)};
}

CameraRefreshPlan plan_camera_refresh(CameraStreamOrigin origin,
                                      CameraPosition target) {
  const auto destination = camera_stream_origin(target);
  CameraRefreshPlan plan{destination, {}};
  plan.intents.reserve(2 * (distance(origin.x, destination.x) +
                            distance(origin.y, destination.y)));
  while (origin.x != destination.x) {
    const bool increasing =
        (unsigned(int(origin.x) - destination.x) & 0x8000) != 0;
    origin.x = wrap(int(origin.x) + (increasing ? 1 : -1));
    plan.intents.push_back({CameraRefreshService::Npcs, CameraStripAxis::Column,
                            wrap(int(origin.x) + (increasing ? 34 : -3)),
                            wrap(int(destination.y) - 1)});
    plan.intents.push_back({CameraRefreshService::Enemies,
                            CameraStripAxis::Column,
                            wrap(int(origin.x) + (increasing ? 40 : -8)),
                            wrap(int(destination.y) - 8)});
  }
  while (origin.y != destination.y) {
    const bool increasing =
        (unsigned(int(origin.y) - destination.y) & 0x8000) != 0;
    origin.y = wrap(int(origin.y) + (increasing ? 1 : -1));
    plan.intents.push_back({CameraRefreshService::Npcs, CameraStripAxis::Row,
                            destination.x,
                            wrap(int(origin.y) + (increasing ? 29 : -1))});
    plan.intents.push_back({CameraRefreshService::Enemies, CameraStripAxis::Row,
                            wrap(int(destination.x) - 8),
                            wrap(int(origin.y) + (increasing ? 36 : -8))});
  }
  return plan;
}

std::optional<CameraRefreshIntent>
eligible_camera_refresh_intent(const CameraRefreshIntent &intent,
                               const CameraRefreshGates &gates) {
  validate(intent);
  if (intent.service == CameraRefreshService::Npcs)
    return gates.npcs_enabled ? std::optional(intent) : std::nullopt;
  if (!gates.enemies_enabled || gates.monsters_disabled ||
      gates.final_boss_defeated)
    return std::nullopt;
  auto result = intent;
  auto &fixed = result.axis == CameraStripAxis::Column ? result.x : result.y;
  const auto value = std::uint16_t(fixed);
  if (value & 7)
    return std::nullopt;
  if (value >= 0xfff0)
    fixed = 0;
  const unsigned extent = result.axis == CameraStripAxis::Column ? 1024 : 1280;
  if (std::uint16_t(fixed) >= extent)
    return std::nullopt;
  return result;
}
} // namespace eb::native
