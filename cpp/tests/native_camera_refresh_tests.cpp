#include "eb/native/camera_refresh.hpp"
#include <iostream>
#include <stdexcept>

namespace {
using namespace eb::native;
void require(bool value, const char *message) {
  if (!value)
    throw std::runtime_error(message);
}
void planning() {
  using S = CameraRefreshService;
  using A = CameraStripAxis;
  const auto diagonal = plan_camera_refresh({10, 20}, {96, 176});
  const std::vector<CameraRefreshIntent> expected{
      {S::Npcs, A::Column, 45, 21}, {S::Enemies, A::Column, 51, 14},
      {S::Npcs, A::Column, 46, 21}, {S::Enemies, A::Column, 52, 14},
      {S::Npcs, A::Row, 12, 50},    {S::Enemies, A::Row, 4, 57},
      {S::Npcs, A::Row, 12, 51},    {S::Enemies, A::Row, 4, 58}};
  require(
      diagonal.origin == CameraStreamOrigin{12, 22} &&
          diagonal.intents == expected,
      "Camera traversal lost column-first, target-axis or NPC/enemy ordering");
  const auto reverse = plan_camera_refresh({12, 22}, {80, 160});
  const std::vector<CameraRefreshIntent> backward{
      {S::Npcs, A::Column, 8, 19}, {S::Enemies, A::Column, 3, 12},
      {S::Npcs, A::Column, 7, 19}, {S::Enemies, A::Column, 2, 12},
      {S::Npcs, A::Row, 10, 20},   {S::Enemies, A::Row, 2, 13},
      {S::Npcs, A::Row, 10, 19},   {S::Enemies, A::Row, 2, 12}};
  require(reverse.intents == backward, "Reverse camera traversal differs");
  require(plan_camera_refresh({10, 20}, {87, 167}).intents.empty(),
          "Subcell camera movement repeated activation queries");
  require(camera_stream_origin({65535, 65528}) == CameraStreamOrigin{-1, -1} &&
              camera_stream_origin({65527, 32768}) ==
                  CameraStreamOrigin{-2, -4096},
          "Signed camera cell conversion truncates negative pixels");
  const auto seam = plan_camera_refresh({-1, -1}, {0, 0});
  require(seam.intents.size() == 4 &&
              seam.intents.front() ==
                  CameraRefreshIntent{S::Npcs, A::Column, 34, -1},
          "Camera zero crossing omitted or reordered a strip");
  const auto long_move = plan_camera_refresh({0, 0}, {8000, 8000});
  require(long_move.intents.size() == 4000 &&
              long_move.origin == CameraStreamOrigin{1000, 1000},
          "Large camera move silently skipped intermediate activation");
  const auto half_turn = plan_camera_refresh({-32768, 0}, {0, 0});
  require(
      half_turn.intents.size() == 65536 &&
          half_turn.intents.front().x == -32733,
      "Wrapped stream-origin difference chose the wrong authored direction");
  require(plan_camera_refresh(diagonal.origin, {96, 176}).intents.empty(),
          "Completed refresh repeated activation");
}
void gates() {
  using S = CameraRefreshService;
  using A = CameraStripAxis;
  CameraRefreshGates gates;
  const CameraRefreshIntent npc{S::Npcs, A::Column, 0, 0};
  require(eligible_camera_refresh_intent(npc, gates) == npc,
          "NPC intent was changed by enemy stride gate");
  gates.npcs_enabled = false;
  require(!eligible_camera_refresh_intent(npc, gates),
          "Disabled NPC activation still queried");
  const CameraRefreshIntent enemy{S::Enemies, A::Column, 8, -8};
  require(eligible_camera_refresh_intent(enemy, gates) == enemy,
          "NPC flag suppressed independent enemy intent");
  for (unsigned flag = 0; flag < 3; ++flag) {
    CameraRefreshGates blocked;
    if (flag == 0)
      blocked.enemies_enabled = false;
    if (flag == 1)
      blocked.monsters_disabled = true;
    if (flag == 2)
      blocked.final_boss_defeated = true;
    require(!eligible_camera_refresh_intent(enemy, blocked),
            "Enemy global gate was ignored");
  }
  for (auto axis : {A::Column, A::Row}) {
    const int extent = axis == A::Column ? 1024 : 1280;
    for (int coordinate : {-24, -16, -8, -1, 0, 1, 7, 8, extent - 8, extent}) {
      CameraRefreshIntent intent{S::Enemies, axis, 16, 24};
      (axis == A::Column ? intent.x : intent.y) = coordinate;
      const auto query = eligible_camera_refresh_intent(intent, {});
      const bool expected =
          coordinate >= -16 && coordinate < extent && !(coordinate & 7);
      require(query.has_value() == expected,
              "Enemy alignment/map-border eligibility differs");
      if (query)
        require((axis == A::Column ? query->x : query->y) ==
                    (coordinate < 0 ? 0 : coordinate),
                "Enemy negative-edge query was not normalized");
    }
  }
  bool rejected = false;
  try {
    (void)eligible_camera_refresh_intent({S::Npcs, A(99), 0, 0}, {});
  } catch (const std::invalid_argument &) {
    rejected = true;
  }
  require(rejected, "Invalid strip axis was accepted");
}
} // namespace
int main() {
  try {
    planning();
    gates();
    std::cout << "PASS native camera refresh order, signed cells, large moves "
                 "and activation gates\n";
  } catch (const std::exception &error) {
    std::cerr << error.what() << '\n';
    return 1;
  }
}
