#include "eb/native/world_control_commands.hpp"
#include "eb/native/world_automatic.hpp"
#include "eb/native/world_character_visibility.hpp"
#include "eb/native/world_npc_commands.hpp"
#include "eb/native/world_floating_sprites.hpp"
#include "eb/native/world_hotspots.hpp"
#include <stdexcept>

namespace eb::native {
void WorldControlCommands::bind_interaction_commands(WorldInteractionQueue &queue,
    WorldHotspots &hotspots, const saves::ContinueResources &continuing) {
  if ((queue_ && queue_ != &queue) || (hotspots_ && hotspots_ != &hotspots) ||
      (continuing_ && continuing_ != &continuing))
    throw std::logic_error("World interaction command owners must remain stable");
  queue_=&queue;hotspots_=&hotspots;continuing_=&continuing;
}
bool WorldControlCommands::uses(const ActorWorld &actors) const noexcept {
  return automatic_.uses(actors) && (!visibility_ || visibility_->uses(actors)) &&
         (!npcs_ || npcs_->uses(actors)) && (!floating_ || floating_->uses(actors));
}
void WorldControlCommands::apply(const WorldControlCommand &command) {
  switch (command.kind) {
  case WorldControlCommandKind::QueueText: {
    if (!queue_ || !visibility_) throw std::logic_error("Queued text requires its actual queue and player lock owners");
    if(queue_->failed())throw std::logic_error("Queued text cannot use an abandoned interaction queue");
    const auto key=command.raw_reference;
    visibility_->set_player_lock(0xff);
    queue_->queue().enqueue(10,{std::uint8_t(key),std::uint8_t(key>>8),
        std::uint8_t(key>>16),std::uint8_t(key>>24)});
    return;
  }
  case WorldControlCommandKind::ActivateHotspot:
    if (!hotspots_ || !continuing_) throw std::logic_error("Hotspot text requires its actual rectangle and imported table owners");
    hotspots_->activate(command.selector,command.parameter,command.raw_reference,*continuing_);
    return;
  case WorldControlCommandKind::CreateFloatingNpc:
  case WorldControlCommandKind::DeleteFloatingNpc:
  case WorldControlCommandKind::CreateFloatingSprite:
  case WorldControlCommandKind::DeleteFloatingSprite:
    if (!floating_) throw std::logic_error("World control has no actual floating sprite owner");
    if (command.kind == WorldControlCommandKind::CreateFloatingNpc ||
        command.kind == WorldControlCommandKind::CreateFloatingSprite) {
      if (command.parameter > 255) throw std::invalid_argument("Floating sprite icon is a literal byte");
      if (command.kind == WorldControlCommandKind::CreateFloatingNpc)
        (void)floating_->create_at_npc(command.selector, std::uint8_t(command.parameter));
      else (void)floating_->create_at_sprite(command.selector, std::uint8_t(command.parameter));
    } else if (command.kind == WorldControlCommandKind::DeleteFloatingNpc)
      floating_->remove_at_npc(command.selector);
    else floating_->remove_at_sprite(command.selector);
    return;
  case WorldControlCommandKind::CreateSprite:
  case WorldControlCommandKind::CreateNpc:
  case WorldControlCommandKind::SetNpcDirection:
  case WorldControlCommandKind::SetSpriteDirection:
  case WorldControlCommandKind::SetNpcScript:
  case WorldControlCommandKind::SetSpriteScript:
    if (!npcs_) throw std::logic_error("World control has no actual NPC command owner");
    if (command.kind==WorldControlCommandKind::CreateSprite)
      (void)npcs_->create_sprite(command.selector,command.parameter,command.effect);
    else if (command.kind==WorldControlCommandKind::CreateNpc)
      (void)npcs_->create_npc(command.selector,command.parameter,command.effect);
    else if (command.kind==WorldControlCommandKind::SetNpcDirection)
      npcs_->set_direction(command.selector,command.parameter);
    else if (command.kind==WorldControlCommandKind::SetSpriteDirection)
      npcs_->set_sprite_direction(command.selector,command.parameter);
    else if (command.kind==WorldControlCommandKind::SetSpriteScript)
      npcs_->set_sprite_script(command.selector,command.parameter);
    else npcs_->set_script(command.selector,command.parameter);
    return;
  case WorldControlCommandKind::SetPlayerLock:
  case WorldControlCommandKind::ClearPlayerLock:
    if (!visibility_) throw std::logic_error("Player lock has no actual party role owner");
    if (command.selector > 255) throw std::invalid_argument("Player lock selector is a literal byte");
    if (command.kind==WorldControlCommandKind::SetPlayerLock)
      visibility_->set_player_lock(std::uint8_t(command.selector));
    else visibility_->clear_player_lock(std::uint8_t(command.selector));
    return;
  case WorldControlCommandKind::SetNpcLock:
  case WorldControlCommandKind::ClearNpcLock:
  case WorldControlCommandKind::SetSpriteLock:
  case WorldControlCommandKind::ClearSpriteLock:
    if (!visibility_) throw std::logic_error("Entity lock has no actual authored role owner");
    if (command.kind==WorldControlCommandKind::SetNpcLock)
      visibility_->set_npc_lock(command.selector);
    else if (command.kind==WorldControlCommandKind::ClearNpcLock)
      visibility_->clear_npc_lock(command.selector);
    else if (command.kind==WorldControlCommandKind::SetSpriteLock)
      visibility_->set_sprite_lock(command.selector);
    else visibility_->clear_sprite_lock(command.selector);
    return;
  case WorldControlCommandKind::FocusNpc:
    automatic_.start_follow_npc(command.selector);
    return;
  case WorldControlCommandKind::FocusSprite:
    automatic_.start_follow_sprite(command.selector);
    return;
  case WorldControlCommandKind::HideCharacter:
  case WorldControlCommandKind::ShowCharacter:
    if (!visibility_) throw std::logic_error("World control has no actual character visibility owner");
    if (command.selector > 255) throw std::invalid_argument("Character command selector is a literal byte");
    visibility_->apply(std::uint8_t(command.selector), command.effect,
                       command.kind == WorldControlCommandKind::ShowCharacter);
    return;
  case WorldControlCommandKind::StopAutomatic:
    automatic_.stop_follow();
    return;
  }
  throw std::invalid_argument("Unknown native world control command");
}
} // namespace eb::native
