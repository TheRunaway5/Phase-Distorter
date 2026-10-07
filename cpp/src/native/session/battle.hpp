#pragma once
#include "eb/native/battle/sprite_reads.hpp"
#include "world.hpp"
#include "eb/native/battle/encounter.hpp"
#include "eb/native/battle/animation_commands.hpp"
#include "eb/native/story/battle_publication.hpp"
#include "eb/native/story/party_membership.hpp"

namespace eb::native::session {
struct BattleContent {
    std::shared_ptr<const battle::EnemyResources> enemies;
    std::shared_ptr<const battle::EncounterResources> encounters;
    std::shared_ptr<const battle::ActionResources> actions;
    std::shared_ptr<const battle::PsiResources> psi;
    std::shared_ptr<const battle::OutcomeResources> outcomes;
    std::shared_ptr<const battle::MenuContent> menu;
    std::shared_ptr<const battle::actions::Resources> execution;
    BattleBackgroundScenes backgrounds;
    BattleCombatants combatants;
    battle::actions::SpecialResources special;
    BattleContent(std::span<const std::uint8_t>, GameVersion);
};
// Session battle owners borrow the actual world Scene, party, text, palettes,
// input and audio. They are constructed once and retain source work arrays
// between encounters. No copied world or compatibility session exists here.
struct Battle {
    World &world;
    const BattleContent &content;
    story::Scene &scene;
    BattleBackgroundScene background;
    battle::BackgroundDisplayState video;
    battle::FrameState frame_state;
    battle::PaletteEffectState effect_state;
    battle::PaletteEffects effects;
    battle::PsiAnimationState psi_state;
    battle::PsiAnimation animation;
    battle::Roster roster;
    BattleCombatantScene objects;
    battle::Frame frame;
    battle::BackgroundLoader loader;
    story::BattlePublication publication;
    battle::DisplaySetup blank;
    battle::BattleSpriteAllocation allocation;
    battle::SpriteReads sprite_reads;
    battle::StartupGraphics graphics;
    dialogue::PreparedMessage prepared;
    battle::ActionState action;
    battle::Names names;
    story::BattleDialogue dialogue;
    battle::EncounterState &state;
    battle::TurnState turns;
    battle::Admission admission;
    battle::RowState rows;
    battle::StealState steals;
    battle::TargetSelection targets;
    battle::TurnScheduler scheduler;
    battle::DeadPlayers dead;
    battle::Rounds rounds;
    VisibleCharacterGrowth visible_growth;
    story::GrowthDialogue growth;
    battle::Outcomes outcomes;
    battle::InstantVictoryContext instant;
    battle::InstantWinState instant_check;
    battle::Shields shields;
    battle::PsiSetup setup;
    battle::AnimationCommands animations;
    battle::CommandMenuState menu_state;
    battle::CommandMenu menu;
    story::PartyMembership membership;
    battle::actions::SpecialOwners special;
    battle::actions::Executor executor;
    battle::Startup startup;
    battle::Encounter encounter;
    Battle(const BattleContent &, World &, std::span<const std::uint8_t>);
};
} // namespace eb::native::session
