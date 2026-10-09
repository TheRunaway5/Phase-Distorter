#pragma once
#include "eb/native_session.hpp"
#include "battle.hpp"
#include "eb/native/world/menu/item_action.hpp"
#include "eb/native/world/townmap/scene.hpp"
#include "eb/native/world_bicycle_lifecycle.hpp"
#include "eb/native/world/doors/entry.hpp"
#include "eb/native/world_battle_return.hpp"
#include "eb/native/world_fade_out.hpp"
#include "eb/native/world_screen_transition.hpp"
#include "eb/native/world_script_teleport.hpp"
#include "eb/native/world/teleport/travel.hpp"
#include "eb/native/world/music/transition.hpp"
#include "eb/native/story/audio_clock.hpp"
#include "eb/native/story/special_events.hpp"
#include "eb/direct_scene.hpp"
#include "eb/native/party/queries.hpp"
#include <algorithm>
#include <array>
#include <sstream>
#include <stdexcept>

namespace eb {
namespace n = native;
std::shared_ptr<const DirectSceneFrame> crop_native_scene(const DirectSceneFrame &,unsigned);
struct NativeSession::State {
    n::session::Content content;
    NativeAudio audio;
    n::cutscenes::DisplayState cinematic_display_state;
    n::session::World world;
    n::story::AudioFrameClock physical_clock;
    n::session::BattleContent battle_content;
    n::session::Battle battle;
    n::world::menu::ItemAction item_action;
    std::unique_ptr<n::world::menu::ItemAction::Operation> using_item;
    bool using_ability{};
    std::unique_ptr<n::story::TeddyParty::Operation> menu_teddy;
    n::WorldFadeOut entry_fade;
    n::WorldScreenTransitionState screen_transition_state;
    n::WorldScreenTransition screen_transition;
    n::WorldScriptTeleportState script_teleport_state;
    n::WorldScriptTeleport script_teleport;
    std::unique_ptr<n::WorldScriptTeleport::Operation> teleporting;
    n::WorldRuntime::Operation *teleport_parent{};
    n::WorldDoorEntry door_entry;
    std::unique_ptr<n::WorldDoorEntry::Operation> entering_door;
    std::unique_ptr<n::world::menu::Commands::Operation> world_menu;
    std::unique_ptr<n::battle::CommandMenu::Operation> world_target;
    n::world::townmap::State town_map_state;
    n::world::townmap::Scene town_map;
    std::unique_ptr<n::world::townmap::Scene::Operation> showing_map;
    n::WorldBicycleLifecycle bicycle;
    n::WorldTeleportState teleport;
    n::world::teleport::MovementState teleport_movement;
    n::world::teleport::Travel travel;
    std::unique_ptr<n::world::teleport::Travel::Operation> traveling;
    n::WorldBattleReturn battle_return;
    n::cutscenes::Display cinematic_display;
    n::cutscenes::Services cinematics;
    n::story::SpecialEvents special_events;
    n::saves::Session persistence;
    std::unique_ptr<n::WorldBattleReturn::Operation> returning;
    std::unique_ptr<n::WorldFadeOut::Operation> fading;
    std::unique_ptr<n::WorldBicycleLifecycle::Operation> dismount;
    std::unique_ptr<n::story::SpecialEvents::Operation> special_event;
    std::unique_ptr<n::WorldRuntime::Operation> special_runtime;
    n::WorldRuntime::Operation *special_parent{};
    std::function<void()> finish_dismount;
    std::unique_ptr<n::WorldStartup::Operation> startup;
    std::unique_ptr<n::WorldRuntime::Operation> runtime;
    std::unique_ptr<n::world::music::SectorTransition> sector_music;
    n::WorldRuntime::Operation *sector_music_parent{};
    std::unique_ptr<n::battle::Encounter::Operation> encounter;
    std::unique_ptr<n::battle::Outcomes::Operation> instant;
    std::unique_ptr<n::story::Scene::Operation> scene;
    std::unique_ptr<n::npcs::InteractionQueue::Operation> queue;
    std::unique_ptr<n::story::InteractionCalls::Operation> queued_text;
    unsigned phase{}, width=256;
    std::uint64_t work{}, physical_frames{};
    std::uint64_t encounters_started{}, encounters_completed{};
    std::uint64_t travel_started{}, travel_completed{};
    std::uint64_t menus_opened{}, menus_completed{}, doors_started{}, doors_completed{}, maps_started{}, maps_completed{};
    std::uint64_t item_uses_started{}, item_uses_completed{};
    bool failed{}, observing{};
    FrameObserver observer;
    std::shared_ptr<const DirectSceneFrame> captured;
    std::vector<std::uint32_t> pixels=std::vector<std::uint32_t>(256*224,0xff000000);
    std::array<std::uint32_t,256*224> canonical{};
    State(std::span<const std::uint8_t>,GameVersion,std::span<const std::uint8_t>,unsigned);
    ~State();
    void require() const;
    void capture();
    void advance_boundary();
    bool service(n::WorldRuntime::Operation &,std::uint16_t);
    bool pump_runtime(std::uint16_t);
    void drive_scene(n::story::Scene::Operation *);
    void queued();
    void main_tail();
    bool pump(std::uint16_t);
};
} // namespace eb
