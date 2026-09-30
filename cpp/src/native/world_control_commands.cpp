#include "eb/native/world_control_commands.hpp"
#include "eb/native/world_automatic.hpp"
#include <stdexcept>

namespace eb::native {
bool WorldControlCommands::uses(const ActorWorld &actors) const noexcept {
  return automatic_.uses(actors);
}
void WorldControlCommands::apply(const WorldControlCommand &command) {
  switch (command.kind) {
  case WorldControlCommandKind::FocusNpc:
    automatic_.start_follow_npc(command.selector);
    return;
  case WorldControlCommandKind::FocusSprite:
    automatic_.start_follow_sprite(command.selector);
    return;
  case WorldControlCommandKind::StopAutomatic:
    automatic_.stop_follow();
    return;
  }
  throw std::invalid_argument("Unknown native world control command");
}
} // namespace eb::native
