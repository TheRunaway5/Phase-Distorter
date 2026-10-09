#pragma once
#include "eb/native/action_scripts.hpp"
#include <cstdint>
namespace eb::native {
// Complete TEST_PLAYER_IN_AREA. Bounds use the running actor's four script
// variables; leader and active PSI destination are borrowed current inputs.
// Coordinate subtraction/absolute magnitude wraps at the source word width.
bool test_player_in_area(const ActionActorState &,std::uint16_t leader_x,
                         std::uint16_t leader_y,std::uint16_t teleport_destination) noexcept;
}
