#include "eb/native/world_battle_return.hpp"
#include "eb/native/world_scene_presentation.hpp"
#include "eb/native/world/party/placement.hpp"
#include <stdexcept>
namespace eb::native {
namespace {
void require(bool condition, const char *message) {
  if (!condition) throw std::logic_error(message);
}
}
struct WorldBattleReturn::Operation::State {
  WorldBattleReturn &owner;
  WorldBattleReturnKind kind;
  std::uint16_t returned{}, result{};
  unsigned phase{};
  CameraPosition destination{};
  std::unique_ptr<WorldPartyRelocation::Operation> relocate;
  std::unique_ptr<world::PartyPlacement> placement;
  bool done{}, executing{};
  std::unique_ptr<WorldRuntime::Operation> runtime;
  std::unique_ptr<story::PartyFormation::Operation> party;
  std::unique_ptr<WorldMapLoad::Operation> map;
  State(WorldBattleReturn &o, WorldBattleReturnKind k, std::uint16_t r)
      : owner(o), kind(k), returned(r), phase(k == WorldBattleReturnKind::InstantWin ? 8 : 0) {}
};
WorldBattleReturn::WorldBattleReturn(WorldBattleReturnOwners owners) : owners_(owners) {
  auto &o = owners_; auto &w = o.world;
  require(w.refresh.bound_to(w.party,w.actors,w.interactions,w.clock) &&
          w.runtime.uses(w.windows,w.party,w.actors,w.clock,w.spawn) &&
          o.following.uses(w.actors) && o.npc_commands.uses(w.actors) &&
          o.blank.uses(o.fade,w.clock,w.runtime.scene()),
          "Battle return requires the actual runtime and formation owners");
  require(o.presentation.display_fade() == &o.fade && o.presentation.frame_display() == &o.frames,
          "World return publisher must share the actual display owners");
}
std::unique_ptr<WorldBattleReturn::Operation> WorldBattleReturn::begin(
    std::uint16_t result, WorldBattleReturnKind kind) {
  require(!failed_ && !active_, "Battle return is failed or already active");
  owners_.world.runtime.require_idle();
  require(!owners_.map_load.busy() && !owners_.map_load.failed(), "Map loader is unavailable");
  require(!owners_.world.actors.appearance_scene().teleport_destination || owners_.world.session.teleport_style == 3,
          "Travel teleport requires its complete movement owner");
  require(!owners_.world.windows.prompt_state().debug, "Debug battle return needs its actual debug owner");
  auto operation = std::unique_ptr<Operation>(new Operation(std::make_unique<Operation::State>(*this,kind,result)));
  active_ = operation.get(); return operation;
}
WorldBattleReturn::Operation::Operation(std::unique_ptr<State> state) : state_(std::move(state)) {}
WorldBattleReturn::Operation::~Operation() {
  if (state_->owner.active_ == this) { state_->owner.active_ = nullptr; state_->owner.failed_ = true; }
}
WorldRuntime::Operation *WorldBattleReturn::Operation::runtime_operation() noexcept {
  if(state_->placement)return state_->placement->runtime_operation();
  if(state_->relocate)return state_->relocate->runtime_operation();
  if(state_->map)return state_->map->runtime_operation();
  return state_->runtime.get();
}
story::PartyFormation::Operation *WorldBattleReturn::Operation::party_update() noexcept { return state_->party.get(); }
bool WorldBattleReturn::Operation::complete() const noexcept { return state_->done; }
std::uint16_t WorldBattleReturn::Operation::result() const {
  require(complete(), "Battle return result requested before completion"); return state_->result;
}
dialogue::Progress WorldBattleReturn::Operation::advance(unsigned budget) {
  auto &s = *state_; auto &o = s.owner.owners_; auto &w = o.world;
  require(!s.owner.failed_ && !s.executing, "Battle return is failed or reentrant");
  if (s.done) return dialogue::Progress::Finished;
  s.executing = true;
  try {
    while (budget--) {
      if (s.runtime) {
        const auto p = s.runtime->advance(1);
        if (p == dialogue::Progress::Suspended) { s.executing = false; return p; }
        if (p != dialogue::Progress::Finished) continue;
        s.runtime.reset();
      }
      if (s.party) {
        const auto p = s.party->advance(1);
        if (p == dialogue::Progress::Suspended) { s.executing = false; return p; }
        if (p != dialogue::Progress::Finished) continue;
        s.party.reset();
      }
      if (s.map) {
        if (!s.map->advance(1)) {
          if(s.map->runtime_operation()){s.executing=false;return dialogue::Progress::Suspended;}
          continue;
        }
        s.map.reset();
      }
      if (s.relocate) {
        if(!s.relocate->advance(1)) {
          if(s.relocate->runtime_operation()){s.executing=false;return dialogue::Progress::Suspended;}
          continue;
        }
        s.relocate.reset();
      }
      if (s.placement) {
        const auto p=s.placement->advance(1);
        if(p==dialogue::Progress::Suspended){s.executing=false;return p;}
        if(p!=dialogue::Progress::Finished)continue;
        s.placement.reset();
      }
      switch (s.phase) {
      case 0: s.party = w.refresh.begin(); ++s.phase; break;
      case 1:
        w.session.party_members_alive_overworld = 1;
        w.control.encounter.mode = 0;
        if (s.kind == WorldBattleReturnKind::Overworld) {
          s.placement=std::make_unique<world::PartyPlacement>(o.following,w.actors,w.runtime);
        }
        s.phase=10;break;
      case 10:
        if(s.kind==WorldBattleReturnKind::Overworld)w.maintenance.overworld_status_suppression=0;
        if (w.actors.appearance_scene().teleport_destination) {
          s.phase = 20; break;
        }
        if (s.returned) { s.result = s.kind == WorldBattleReturnKind::Scripted ? 1 : s.returned; s.phase = 99; break; }
        o.map_state.loaded_combination.reset(); o.map_state.loaded_palette.reset();
        w.actors.scene().camera_x &= 0xfff8; w.actors.scene().camera_y &= 0xfff8;
        o.blank.begin(battle::DisplayBlankKind::Reset);
        s.runtime = w.runtime.begin_publication(); s.phase = 2; break;
      case 2:
        o.blank.finish();
        w.runtime.return_world_publication(o.battle_publication,o.presentation,o.fade);
        o.music_state.current_map_track = 0xffff;
        o.music.select(w.interactions.state().leader_x,w.interactions.state().leader_y);
        o.layer.value = 9; apply_world_layer_configuration(o.layers,o.layer,o.visual);
        o.layout.mode = 1; o.layout.maps = {0x71,0xb1,0xf8,o.layout.maps[3]};
        o.layout.graphics = {0x20,std::uint8_t((o.layout.graphics[1]&0xf0)|6)};
        s.map = o.map_load.begin_reload({w.interactions.state().leader_x,w.interactions.state().leader_y});
        s.phase = 3; break;
      case 3:
        if (w.interactions.state().walking_style == 3) o.audio.change_music(82,w.clock.disabled_transitions);
        else o.music.apply_sector();
        o.visual.visible_layers = {true,true,true,false,true};
        o.blank.begin(battle::DisplayBlankKind::Retain);
        s.runtime = w.runtime.begin_publication(); s.phase = 4; break;
      case 4: o.blank.finish(); o.fade.begin_in(1,1); s.phase = s.kind == WorldBattleReturnKind::Scripted ? 5 : 8; break;
      case 5: s.party = w.refresh.begin(); ++s.phase; break;
      case 6:
        s.placement=std::make_unique<world::PartyPlacement>(o.following,w.actors,w.runtime);
        s.phase=11;break;
      case 11:
        s.runtime = w.runtime.begin(story::TickKind::WorldFrame);s.phase=7;break;
      case 7:
        w.interactions.set_actors_paused(true);
        if (w.session.fading_actor) {
          const auto &target = *w.session.fading_actor;
          if (const auto *role = std::get_if<AuthoredRoleRef>(&target)) w.actors.set_authored_pause(role->value(),true,true);
          else { auto &actor = w.actors.actor(std::get<ActorId>(target)); actor.scripts_and_physics_enabled = actor.tick_callback_enabled = true; }
        }
        if (o.encounter.group < 448) w.actors.appearance_scene().intangibility_ticks = 120;
        s.phase = 99; break;
      case 8:
        if (s.kind == WorldBattleReturnKind::InstantWin) w.control.encounter.mode = 0;
        w.actors.reset_encounter_objects();
        w.maintenance.overworld_status_suppression = 0;
        w.interactions.set_actors_paused(false);
        w.actors.appearance_scene().intangibility_ticks = 120;
        o.encounter.touched.reset(); s.phase = 99; break;
      case 20:
        o.audio.stop_music(); s.runtime = w.runtime.begin(story::TickKind::Frame); s.phase = 21; break;
      case 21: {
        for (unsigned role=0; role<23; ++role) w.actors.set_authored_pause(role,false,false);
        w.session.effect_in_progress = 1; o.teleport.speed = 0; w.session.teleport_speed = 0; o.teleport.state = 0;
        clear_party_sprite_blink(w.actors);
        for (unsigned role=24; role<30; ++role) {
          w.actors.set_authored_variable(role,3,8);
          w.actors.set_authored_variable(role,7,std::uint16_t(w.actors.authored_variable(role,7)|0x800));
        }
        o.teleport.beta_angle = std::uint16_t(story::next_random(w.random)<<8);
        o.teleport.beta_progress = 8; o.teleport.better_progress = 0;
        o.teleport.beta_x_adjustment = w.interactions.state().leader_x;
        o.teleport.beta_y_adjustment = w.interactions.state().leader_y;
        o.teleport.state = 1;
        const auto &target=o.teleports.destination(w.actors.appearance_scene().teleport_destination);
        for(unsigned flag=1; flag<=10; ++flag) w.windows.state().set_flag(flag,false);
        o.map_state.teleport_tile_x=target.tile_x; o.map_state.teleport_tile_y=target.tile_y;
        s.destination={std::uint16_t(target.tile_x<<3),std::uint16_t(target.tile_y<<3)};
        o.music_state.current_map_track=0xffff;
        o.map_state.loaded_combination.reset(); o.map_state.loaded_palette.reset();
        w.runtime.return_world_publication(o.battle_publication,o.presentation,o.fade);
        o.music.select(s.destination.x,s.destination.y);
        s.map=o.map_load.begin(s.destination); s.phase=22; break;
      }
      case 22:
        s.relocate=o.relocation.begin(s.destination,6);s.phase=23;break;
      case 23: {
        o.music.apply_sector();
        const auto &leader=w.interactions.state();
        w.runtime.begin_refresh({std::uint16_t(leader.leader_x-128),std::uint16_t(leader.leader_y-112)});
        s.phase=25;break;
      }
      case 25:
        if(!w.runtime.advance_streaming(1)) break;
        // TELEPORT drains C06578's retained pairs only after relocation and
        // map placement. C065A3 uses the live prepared globals in LIFO order.
        o.npc_commands.drain_created();
        w.runtime.refresh_world_capture();o.fade.begin_in(1,1);s.phase=24;break;
      case 24:
        if(o.fade.active()) {s.runtime=w.runtime.begin(story::TickKind::ActorFrame);break;}
        for(unsigned role=23;role<30;++role) if(const auto id=w.actors.actor_for_role(role))
          w.actors.actor(*id).behavior.tick=role==23 ? ActorTickCallback::WorldMaintenance : ActorTickCallback::PartyFollower;
        for(unsigned role=24;role<30;++role) {
          w.actors.set_authored_variable(role,3,8);
          w.actors.set_authored_variable(role,7,std::uint16_t(w.actors.authored_variable(role,7)&0xf7ff));
          if(const auto id=w.actors.actor_for_role(role))w.actors.actor(*id).behavior.collision_object&=0x7fff;
          w.formation.selected_styles[role-24]=0xffff;
        }
        o.audio.change_music(o.music_state.next_track,w.clock.disabled_transitions);
        w.interactions.set_actors_paused(false);w.session.effect_in_progress=0;o.teleport.speed=0;w.session.teleport_speed=0;
        w.actors.appearance_scene().intangibility_ticks=0;w.actors.appearance_scene().teleport_destination=0;
        if(s.kind==WorldBattleReturnKind::Scripted && s.returned) {s.result=1;s.phase=99;}
        else s.phase=s.kind==WorldBattleReturnKind::Scripted ? 5 : 8;
        break;
      case 99:
        s.done = true; s.owner.active_ = nullptr; s.executing = false;
        return dialogue::Progress::Finished;
      default: throw std::logic_error("Invalid battle return phase");
      }
    }
    s.executing = false; return dialogue::Progress::BudgetExhausted;
  } catch (...) { s.executing = false; s.owner.failed_ = true; throw; }
}
} // namespace eb::native
