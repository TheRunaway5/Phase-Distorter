#include "eb/native/world_player_area.hpp"
namespace eb::native {
bool test_player_in_area(const ActionActorState &actor,std::uint16_t leader_x,
                         std::uint16_t leader_y,std::uint16_t teleport_destination) noexcept {
  if(teleport_destination)return false;
  const auto distance=[](std::uint16_t at,std::uint16_t leader) {
    const auto difference=std::uint16_t(at-leader);
    return difference&0x8000?std::uint16_t(0-difference):difference;
  };
  return distance(actor.variables[0],leader_x)<actor.variables[2]&&
      distance(actor.variables[1],leader_y)<actor.variables[3];
}
}
