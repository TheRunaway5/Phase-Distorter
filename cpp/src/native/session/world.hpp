#pragma once

#include "content.hpp"
#include "eb/native/world/menu/commands.hpp"
#include "eb/native/story/interaction_calls.hpp"
#include "eb/native_audio.hpp"
#include "eb/native/peripheral_state.hpp"
#include "eb/native/dialogue/menu_host.hpp"
#include "eb/native/world_control_commands.hpp"
#include "eb/native/world_character_visibility.hpp"
#include "eb/native/world_sprite_fade.hpp"
#include "eb/native/world_npc_commands.hpp"
#include "eb/native/world_input_playback.hpp"
#include "eb/native/world_battle_entry.hpp"
#include "eb/native/world_enemy_behavior.hpp"
#include "eb/native/world_enemy_contact.hpp"
#include "eb/native/world_scene_presentation.hpp"
#include "eb/native/world_display_fade.hpp"
#include "eb/native/battle/frame_display.hpp"
#include "eb/native/story/teddy_party.hpp"
#include "eb/native/world_food_status.hpp"
#include "eb/native/world_party_relocation.hpp"
#include "eb/native/party/meter_flipout.hpp"

namespace eb::native::session {
// The session's authoritative live world. Declaration order expresses the
// stable borrow graph; continuations belong to the session and are destroyed
// first. Every gameplay field resides in its existing native owner.
struct World {
    const Content &content;
    NativeAudio &audio;
    party::State party;
    dialogue::State text;
    dialogue::TextOutput output;
    // WindowHost borrows both retained scratch regions; keep them alive first.
    battle::PaletteBankState palette;
    battle::PsiScratch scratch;
    WorldMapLoadState map_state;
    dialogue::WindowHost windows;
    std::shared_ptr<dialogue::WindowGraphics> window_graphics;
    dialogue::PromptHost prompts;
    dialogue::MenuHost menus;
    party::MeterWindows meters;
    // RESET's authored seed; Continue does not replace the live random words.
    story::RandomState random{0x1234,0x5678};
    story::TickState clock;
    story::InputState input;
    party::MeterFlipout meter_flipout;
    party::ItemTransformationState item_timers;
    party::Inventory inventory;
    ActorWorld actors;
    WorldActivation activation;
    WorldEnemies enemies;
    WorldMapArea area;
    AreaPalettes area_colors;
    WorldSpawnControls spawn;
    npcs::Interactions interactions;
    WorldPartyState formation;
    PartyTrail trail;
    WorldControlState control;
    WorldMaintenanceState maintenance;
    WorldPartyFollowingState following_state;
    WorldParty updater;
    WorldPartyCreation creation;
    party::MovementPolicyState movement_policy;
    story::PartyFormation refresh_party;
    story::TeddyParty teddy;
    WorldBootstrap bootstrap;
    npcs::InteractionQueueState queued;
    npcs::DadPhoneState phone;
    WorldInteractionQueue queue;
    WorldHotspotState hotspot_state;
    WorldHotspots hotspots;
    WorldSessionState session;
    WorldControl controller;
    WorldNavigationState navigation;
    WorldDoors doors;
    WorldWalking walking;
    WorldInputPlayback playback;
    WorldScheduler scheduler;
    WorldFoodStatus food_status;
    WorldDoorTransitionState transition_state;
    WorldDoorTransitions transitions;
    WorldEscalator escalator;
    WorldBicycle bicycle;
    WorldAutomatic automatic;
    WorldSpriteFade sprite_fade;
    WorldCharacterVisibility character_visibility;
    WorldNpcCommands npc_commands;
    WorldFloatingSpriteState floating_state;
    WorldFloatingSprites floating_sprites;
    WorldControlCommands focus;
    WorldPartyMovement party_motion;
    WorldPartyFollowing following;
    WorldEncounterState encounter;
    WorldPathfinding paths;
    std::unique_ptr<WorldRuntime> runtime;
    WorldEnemyMovement enemy_movement;
    WorldEnemyBehavior enemy_behavior;
    ScenePalette scene_colors;
    ScenePalette contact_backup;
    PaletteColor swirl_backup;
    WorldSwirlState swirl;
    WorldEncounterVisualState visual;
    WorldEncounter swirl_setup;
    WorldBattleEntry entry;
    WorldEnemyContact contact;
    WorldLayerSelection layer;
    WorldDisplayFade fade;
    PeripheralState peripherals;
    battle::PsiDisplayState display;
    battle::FrameDisplay frame_display;
    WorldScenePresentation presentation;
    WorldEncounterEffects effects;
    WorldOverlayPlayback overlays;
    WorldMusicState music_state;
    WorldMusic music;
    std::unique_ptr<WorldMapLoad> map_load;
    std::unique_ptr<WorldPartyRelocation> relocation;
    std::unique_ptr<WorldStartup> startup;
    std::unique_ptr<world::menu::Commands> command_menu;
    std::unique_ptr<story::InteractionCalls> interaction_calls;
    World(const Content &, NativeAudio &, unsigned view_width = 1024);
    ~World();
    WorldStartupOwners startup_owners();
};
} // namespace eb::native::session
