#include "eb/native/world_party_relocation.hpp"
#include <stdexcept>
namespace eb::native {
namespace {
void require(bool condition,const char *message) { if(!condition) throw std::logic_error(message); }
int signed_word(std::uint16_t value) { return value<0x8000 ? int(value) : int(value)-65536; }
}
WorldPartyRelocation::WorldPartyRelocation(WorldPartyRelocationOwners owners):owners_(owners) {
  const auto &w=owners_.world;
  require(owners_.following.uses(w.actors),"Relocation must share actual party following");
}
bool WorldPartyRelocation::uses(const WorldRuntime &runtime,const ActorWorld &actors,const party::State &party) const noexcept {
  return &owners_.world.runtime==&runtime && &owners_.world.actors==&actors && &owners_.world.party==&party;
}
std::unique_ptr<WorldPartyRelocation::Operation> WorldPartyRelocation::begin(CameraPosition center,std::uint16_t direction) {
  require(!failed_ && !active_,"Relocation is failed or already active");
  owners_.world.runtime.require_idle();
  require(direction<8,"Relocation facing is outside authored directions");
  auto operation=std::unique_ptr<Operation>(new Operation(*this,center,direction));
  active_=operation.get();return operation;
}
std::unique_ptr<WorldPartyRelocation::Operation> WorldPartyRelocation::begin_nested(CameraPosition center,std::uint16_t direction,WorldRuntime::Operation &parent) {
  require(!failed_ && !active_,"Relocation is failed or already active");
  owners_.world.runtime.require_content_boundary(&parent);
  require(direction<8,"Relocation facing is outside authored directions");
  auto operation=std::unique_ptr<Operation>(new Operation(*this,center,direction,&parent));
  active_=operation.get();return operation;
}
WorldPartyRelocation::Operation::Operation(WorldPartyRelocation &owner,CameraPosition center,std::uint16_t direction,WorldRuntime::Operation *parent)
    :owner_(owner),center_(center),direction_(direction),parent_(parent) {}
WorldPartyRelocation::Operation::~Operation() {
  if(owner_.active_==this) {owner_.active_=nullptr;owner_.failed_=true;}
}
bool WorldPartyRelocation::Operation::advance(unsigned budget) {
  require(!owner_.failed_ && !executing_,"Relocation is failed or reentrant");
  if(done_) return true;
  executing_=true;
  try {
    auto &o=owner_.owners_;auto &w=o.world;
    while(budget--) {
      w.runtime.require_content_boundary(parent_);
      if(door_) {
        require(door_->advance(),"Relocation requires the actual bound door transition owner");
        door_.reset();
      }
      if(phase_==0) {
        auto &leader=w.interactions.state();
        leader.leader_x=center_.x; leader.leader_y=center_.y; leader.leader_direction=direction_;
        const auto leader_id=w.actors.actor_for_role(w.formation.current_leader_role);
        require(bool(leader_id), "Teleport relocation requires its live party leader");
        const auto shape=w.actors.actor(*leader_id).appearance_context.shape;
        leader.checked_surface_origin=o.collision.origin({leader.leader_x,leader.leader_y},shape);
        leader.surface_flags=o.collision.vertical_surfaces([&](CollisionCell cell){return o.area.collision(cell.x,cell.y);},
            {leader.leader_x,leader.leader_y},shape);
        w.control.trodden_surface_flags=leader.surface_flags;
        const auto sector_x=o.map_state.teleport_tile_x || o.map_state.teleport_tile_y ? std::uint16_t(o.map_state.teleport_tile_x<<3) : leader.leader_x;
        const auto sector_y=o.map_state.teleport_tile_x || o.map_state.teleport_tile_y ? std::uint16_t(o.map_state.teleport_tile_y<<3) : leader.leader_y;
        w.session.current_sector_attributes=o.map.sector(sector_x/256,sector_y/128).attributes;
        w.area_character_style=w.session.current_sector_attributes&7;
        w.actors.appearance_scene().footstep_kind=w.area_character_style;
        w.actors.appearance_scene().footstep_override.reset();
        leader.walking_style=w.area_character_style==3 ? 10 : 0;
        for(unsigned position=0;position<6;++position) {
          const auto member=w.party.display_order[position]; if(!member) continue;
          const auto role=w.formation.roles[position];
          const auto old_id=w.actors.actor_for_role(role);
          require(bool(old_id), "Teleport party recreation lacks its authored role");
          const auto &old=w.actors.actor(*old_id);
          const auto pause=w.actors.authored_pause(role);
          const auto hidden=w.actors.authored_sprite_hidden(role);
          const auto callback=old.behavior.tick;
          w.spawn.prepared.variables[0]=old.action().variables[0];
          w.spawn.prepared.variables[1]=old.action().variables[1];
          w.spawn.prepared.variables[5]=std::uint16_t(position*2);
          unsigned sprite=0xffff, pose=0; std::uint16_t overlays=0;
          const auto &character=w.party.character(position+1);
          if(member==1 && !w.clock.disabled_transitions && w.following.pajamas) sprite=437;
          else if(w.party.party_status==1) sprite=w.area_character_style==3 ? 37 : 13;
          else if(character.afflictions[0]==2) sprite=w.area_character_style==3 ? 36 : 12;
          else {
            if(character.afflictions[0]==1) pose=1;
            else if(character.afflictions[0]==4) overlays|=0x8000;
            if(character.afflictions[1]==1) overlays|=0x4000;
            else if(character.afflictions[1]==2) ++w.maintenance.possessed_players;
            if(w.area_character_style==6) sprite=7;
            else if(w.area_character_style==4 && !w.formation.character_startup[position].member_index) sprite=6;
            else {
              if(w.area_character_style==3) {pose+=4;overlays=0;}
              else if(w.area_character_style==5 && !pose) pose=6;
              std::uint16_t var3=w.party.party_status==3 ? 5 : character.afflictions[0]==1 ? 16 :
                  (old.behavior.surface_flags&12)==12 ? 24 : old.behavior.surface_flags&8 ? 16 : 8;
              if(character.afflictions[0]==3) var3=56;
              w.actors.set_authored_variable(role,3,var3);
              sprite=o.following_data.graphics.at(member-1).at(pose);
            }
          }
          auto prepared=w.spawn.prepared; prepared.x=leader.leader_x;prepared.y=leader.leader_y;prepared.direction=0;
          auto spec=w.actors.prepare_actor(sprite,w.party_data.initial(member).script,prepared);
          spec.appearance_context.overlay_flags=overlays;
          w.interactions.detach(*old_id);w.actors.erase(*old_id);
          const auto id=w.actors.create_authored(spec,{unsigned(role),unsigned(role)+1});
          require(bool(id), "Teleport party recreation failed its released role");
          w.interactions.attach(*id,role,actor_creation_metadata(o.sprites,o.creation_data,sprite),0xffff);
          w.actors.set_authored_pause(role,pause.scripts_and_physics_enabled,pause.tick_callback_enabled);
          w.actors.set_authored_sprite_hidden(role,hidden);
          auto &actor=w.actors.actor(*id);actor.behavior.tick=callback;actor.behavior.direction=direction_;actor.action().animation=0;
          actor.appearance.select_eight(direction_,0,actor.behavior.surface_flags);
          actor.behavior.projected_x=signed_word(std::uint16_t(leader.leader_x-w.actors.scene().camera_x));
          actor.behavior.projected_y=signed_word(std::uint16_t(leader.leader_y-w.actors.scene().camera_y));
          if(role==w.formation.current_leader_role) leader.leader=*id;
        }
        // Complete C05B7B with the caller's explicit down probe and pending=0.
        const auto probe=o.movement.resolve(o.collision,o.area,{{leader.leader_x,leader.leader_y},
            CollisionDirection::South,false,{0xffff,o.navigation.ladder_stairs.y},o.navigation.vertical_obstacles});
        leader.checked_surface_origin=probe.probes.origin;leader.surface_flags=probe.surface_flags;
        o.navigation.surface_write_counter=probe.probes.surface_write_counter;
        o.navigation.vertical_obstacles=probe.probes.vertical_obstacles;
        o.navigation.ladder_stairs=probe.probes.ladder_stairs;
        o.navigation.final_direction=std::uint16_t(probe.final_direction);
        w.formation.projection.movement_mismatch=probe.redirected ? 1 : 0;
        if(o.navigation.ladder_stairs.x!=0xffff) door_=o.doors.begin(o.navigation.ladder_stairs);
        phase_=1;continue;
      }
        auto &leader=w.interactions.state();
        w.trail.next_write=0;
        const PartyTrailPoint point{leader.leader_x,leader.leader_y,w.control.trodden_surface_flags,
            leader.walking_style,leader.leader_direction,0};
        w.trail.points[0]=point;w.trail.points[255]=point;leader.movement_flags=0;
        for(unsigned i=0;i<w.party.party_count;++i) {
          const auto record=w.party.controlled_order[i];
          w.formation.trail_cursors.at(record)=0;
          w.formation.last_trail_styles.at(record)=0xffff;w.formation.selected_styles.at(record)=0xffff;
          const auto role=w.formation.roles[i];
          w.actors.set_authored_coordinate(role,0,leader.leader_x);w.actors.set_authored_coordinate(role,1,leader.leader_y);
          w.actors.set_authored_direction(role,leader.leader_direction);
          if(const auto id=w.actors.actor_for_role(role))w.actors.actor(*id).behavior.surface_flags=w.control.trodden_surface_flags;
        }
        for(unsigned role=24;role<30;++role) if(const auto id=w.actors.actor_for_role(role))
          w.actors.actor(*id).appearance.invalidate_animation_fingerprint();
        w.maintenance.possession_actor.reset();o.map_state.teleport_tile_x=o.map_state.teleport_tile_y=0;
        w.following.pajamas=w.windows.state().flag(o.bootstrap_data.pajamas_flag()) ? 1 : 0;
        o.following.position_after_pause();
      done_=true;owner_.active_=nullptr;executing_=false;return true;
    }
    executing_=false;return false;
  } catch(...) {executing_=false;owner_.failed_=true;throw;}
}
}
