#pragma once

#include "eb/native/dialogue/import.hpp"
#include "eb/native/sprite_effects.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/initialization_resources.hpp"
#include "eb/native/dialogue/menu_resources.hpp"
#include "eb/native/dialogue/substitution_resources.hpp"
#include "eb/native/world_startup.hpp"
#include "eb/native/world/menu/resources.hpp"
#include "eb/native/world/townmap/resources.hpp"
#include "eb/native/world_generated_input.hpp"
#include "eb/native/world_door_transitions.hpp"
#include "eb/native/world_party_movement.hpp"
#include "eb/native/world_party_following.hpp"
#include "eb/native/world_enemy_movement.hpp"
#include "eb/native/world_movement.hpp"
#include "eb/native/world_music.hpp"
#include "eb/native/world_integrity.hpp"
#include "eb/native/dialogue/text_animation_resources.hpp"
#include "eb/native/world_teleport.hpp"
#include "eb/native/world_teleport_resources.hpp"
#include "eb/native/world_floating_sprites.hpp"
#include "eb/native/battle/startup.hpp"
#include "eb/native/battle/rounds.hpp"
#include "eb/native/battle/outcomes.hpp"
#include "eb/native/battle/menu/resources.hpp"
#include "eb/native/battle/actions/resources.hpp"
#include "eb/native/character_growth.hpp"

namespace eb::native::session {
// Imported immutable content for one regional session. Mutable owners borrow
// these catalogs; no source instruction dispatcher or ROM address reads exist
// after construction. The desktop retains ownership of the verified donor.
struct Content {
    GameVersion version;
    const std::uint16_t integrity_difference;
    std::shared_ptr<const dialogue::TextAnimationResources> text_animations;
    std::shared_ptr<const dialogue::Program> program;
    std::shared_ptr<const dialogue::FontResources> fonts;
    std::shared_ptr<const dialogue::WindowResources> windows;
    std::shared_ptr<const dialogue::WindowInitializationResources> window_art;
    std::shared_ptr<const dialogue::MenuResources> menus;
    std::shared_ptr<const world::menu::Resources> world_menus;
    std::shared_ptr<const dialogue::SubstitutionResources> substitutions;
    std::shared_ptr<const party::MeterWindowResources> meters;
    std::shared_ptr<const party::ItemTransformationResources> transformations;
    std::shared_ptr<const npcs::InteractionResources> interactions;
    std::shared_ptr<const npcs::MapTextResources> map_text;
    std::shared_ptr<SpriteResources> sprites;
    SpriteEffectContent sprite_effects;
    std::shared_ptr<const ActionScriptData> scripts;
    std::shared_ptr<NpcCatalog> npcs;
    std::shared_ptr<EnemySpawnData> enemies;
    WorldMap map;
    WorldPalettes palettes;
    WorldPaletteAnimations animations;
    WorldCollision collision;
    WorldMovement movement;
    WalkingData walking;
    WorldPartyData party;
    WorldBootstrapData bootstrap;
    std::shared_ptr<const saves::ContinueResources> continuing;
    WorldStartupData startup;
    std::shared_ptr<const WorldDoorResources> doors;
    WorldDoorTransitionData transitions;
    GeneratedInputData generated_input;
    WorldPartyMovementData party_motion;
    WorldPartyFollowingData party_following;
    EnemyMovementData enemy_motion;
    AppearanceData appearances;
    ActorCreationData creation;
    std::shared_ptr<const CharacterGrowth> growth;
    WorldSwirlData swirl;
    WorldEncounterEffectData encounter_effects;
    WorldLayerConfigurations layers;
    WorldMusicData music;
    WorldTeleportData teleports;
    WorldTeleportResources teleport_resources;
    world::townmap::Resources town_map;
    WorldFloatingSpriteData floating_sprites;
    OverlaySprites overlays;
    explicit Content(std::span<const std::uint8_t>, GameVersion);
};
} // namespace eb::native::session
