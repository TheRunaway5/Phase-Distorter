#pragma once
#include "native_world_startup_fixture.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <iostream>

namespace startup_oracle {
using namespace eb::native;
std::uint64_t checks{}, instructions{}, cases{};
std::string context;
void check(bool ok,const char *message) {
  ++checks;if(!ok)throw std::runtime_error(std::string(message)+": "+context);
}
struct Layout {
  unsigned boot,position,game,characters,stride,delta,flags,chosen,script,x,fraction,
    velocity,velocity_fraction,variables,animation,priority,direction,screen_x,screen_y,
    sprite,new_height,new_variables,new_priority,prepared_x,prepared_y,prepared_direction,
    trail,pajamas,mushroom_timer,mushroom_modifier,mushroom,battle,input,npcs,enemies,maximum,
    swirl,pending,auto_music,phone,teleport_style,teleport_destination,fade,disabled;
};
constexpr Layout us{0xc0b67f,0xc039e5,0x97f5,0x99ce,95,0,0x9c08,0x4dc8,0xa62,
 0xb8e,0xc42,0xcf6,0xdaa,0xe5e,0x10f2,0x103e,0x2af6,0xb16,0xb52,0x2cd6,
 0xa48,0xa38,0xa4a,0x9e2d,0x9e2f,0x9e31,0x5156,0x9f71,0x5d9c,0x5d9e,0x5da0,
 0x4dc2,0x5d74,0x4a58,0x4a5a,0x4a5e,0x5d60,0x5d9a,0xb549,0x9e54,0x9f41,0x9f3f,0xb4a8,0xb4b6};
constexpr Layout jp{0xc0b652,0xc03c2b,0x9aa9,0x9c7f,94,3,0x9eb3,0x514e,0xa58,
 0xb84,0xc38,0xcec,0xda0,0xe54,0x10e8,0x1034,0x2ef4,0xb0c,0xb48,0x30d4,
 0xa3e,0xa2e,0xa40,0xa033,0xa035,0xa037,0x54dc,0xa173,0x6122,0x6124,0x6126,
 0x5148,0x60fa,0x4dde,0x4de0,0x4de4,0x60e6,0x6120,0xb6fa,0xa05a,0xa143,0xa141,0xb67c,0xb68a};
struct Oracle {
 Layout l; std::unique_ptr<eb::SnesBus> bus;eb::MainCpu65816 cpu;
 explicit Oracle(const eb::GameAssets &a):l(a.version==eb::GameVersion::JP?jp:us),
 bus(std::make_unique<eb::SnesBus>(a.image,a.version)),cpu(*bus){cpu.set_runtime(eb::MainCpuRuntime::Legacy);}
 unsigned game(unsigned offset)const{return l.game+offset-(offset>=60?l.delta:0);}
 unsigned character(unsigned i,unsigned offset)const{return l.characters+i*l.stride+offset-(l.delta?1:0);}
 void put(unsigned at,unsigned value){bus->work_ram.at(at)=value;bus->work_ram.at(at+1)=value>>8;}
 unsigned get(unsigned at)const{return bus->work_ram.at(at)|unsigned(bus->work_ram.at(at+1))<<8;}
 void seed(const startup_test::Fixture &f,const saves::SaveArchive &archive){
  bus->work_ram.fill(0);bus->work_ram[0xd]=0x80;
  const auto layout=saves::layout(f.r.version);
  std::copy_n(archive.bytes().begin()+saves::SaveArchive::header_size,layout.persisted_bytes(),bus->work_ram.begin()+l.game);
  std::copy(f.text.event_flags.begin(),f.text.event_flags.end(),bus->work_ram.begin()+l.flags);
  for(unsigned i=0;i<6;++i)put(l.chosen+i*2,l.characters+i*l.stride);
  put(l.new_height,f.spawn.prepared.height);put(l.new_priority,f.spawn.prepared.priority);
  for(unsigned i=0;i<8;++i)put(l.new_variables+i*2,f.spawn.prepared.variables[i]);
  for(unsigned i=0;i<256;++i){const auto &p=f.trail.points[i];const unsigned v[]{p.x,p.y,p.surface_flags,p.walking_style,p.direction,p.reserved};
   for(unsigned j=0;j<6;++j)put(l.trail+i*12+j*2,v[j]);}
  put(l.disabled,f.clock.disabled_transitions);put(l.mushroom,f.movement.mushroomized);
  put(l.delta?0x993b:0x9643,f.windows.prompt_state().battle_mode);
  put(l.battle,f.control.encounter.mode);
  put(l.mushroom_timer,f.movement.timer);put(l.mushroom_modifier,f.movement.modifier);
  put(0x24,f.random.primary_word);put(0x26,f.random.secondary_word);
 }
 void start(unsigned at){cpu.emulation_mode=false;cpu.status_register=eb::MainCpu65816::InterruptDisable;
  cpu.data_bank=0x7e;cpu.direct_page=0x1e00;cpu.stack_pointer=0x1fff;cpu.accumulator=cpu.x_index=cpu.y_index=0;
  cpu.program_counter=0xc0ff00;cpu.execute_instruction<0x22>(at,4);}
 void run(unsigned stop){for(unsigned i=0;i<2000000;++i){if(cpu.program_counter==stop)return;cpu.step_instruction();++instructions;}
  throw std::runtime_error("Source startup exceeded boundary: "+cpu.describe_registers());}
 void compare(const startup_test::Fixture &f)const{
  check(bus->work_ram[game(174)]==f.party.party_count &&bus->work_ram[game(175)]==f.party.controlled_count,"Party counts differ");
  for(unsigned i=0;i<6;++i){check(bus->work_ram[game(122)+i]==f.party.party_order[i] &&bus->work_ram[game(150)+i]==f.party.display_order[i]&&bus->work_ram[game(156)+i]==f.party.controlled_order[i],"Live party lists differ");
   check(get(game(162)+i*2)==f.formation.roles[i]&&get(character(i,61))==f.formation.trail_cursors[i],"Role/trail indices differ");}
  check(get(game(148))==f.formation.current_leader_role&&get(game(136))==f.trail.next_write,"Bootstrap current leader/trail differs");
  check(get(game(176))==f.control.automatic_mode&&get(game(178))==f.control.automatic_ticks&&get(game(180))==f.control.automatic_restore_style,"Automatic reset differs");
  check(get(game(144))==f.control.moved_this_tick&&get(game(146))==f.talk.state().area_character_style&&
        get(l.delta?0x993b:0x9643)==f.windows.prompt_state().battle_mode,"Independent restored/preserved movement and battle fields differ");
  check(get(l.pajamas)==f.following.pajamas&&get(l.mushroom)==f.movement.mushroomized&&get(l.mushroom_timer)==f.movement.timer&&get(l.mushroom_modifier)==f.movement.modifier,"Actual movement/pajamas tails differ");
  check(!get(l.battle)&&!get(l.input)&&get(l.npcs)==1&&get(l.enemies)==0xffff&&get(l.maximum)==f.enemies.population().maximum&&!get(l.swirl)&&!get(l.pending)&&get(l.auto_music)==f.maintenance.auto_sector_music&&get(l.phone)==f.phone.timer&&!get(l.teleport_style)&&!get(l.teleport_destination)&&get(l.fade)==0xffff,"World prefix flags differ");
  for(unsigned i=0;i<256;++i){auto c=f.scene_colors[i];check(get(0x200+i*2)==(unsigned(c.red)|unsigned(c.green)<<5|unsigned(c.blue)<<10),"Scene palette publication differs");}
  for(unsigned role=0;role<30;++role){const auto b=f.actors.authored_behavior(role);
   check(b.movement_speed==get((l.delta?0x2f30:0x2b32)+role*2)&&
         std::uint16_t(b.collision_object)==get((l.delta?0x2c9c:0x289e)+role*2)&&
         f.actors.authored_npc_selector(role)==get((l.delta?0x3098:0x2c9a)+role*2),
         "All-role scene object metadata differs");}
  for(const auto id:f.actors.actors()){const auto &a=f.actors.actor(id);unsigned role=*a.authored_role(),index=role*2;
   check(get(l.script+index)==a.script_style(),"Authored script differs");
   for(unsigned axis=0;axis<3;++axis){check(a.action().position[axis]==(get(l.x+axis*60+index)<<16|get(l.fraction+axis*60+index)),"Live actor pose differs");
    check(a.action().velocity[axis]==(get(l.velocity+axis*60+index)<<16|get(l.velocity_fraction+axis*60+index)),"Live actor velocity differs");}
   for(unsigned i=0;i<8;++i)check(a.action().variables[i]==get(l.variables+i*60+index),"Actor variable differs");
   check(a.action().priority==get(l.priority+index)&&a.action().animation==get(l.animation+index)&&a.behavior.direction==get(l.direction+index),"Actor priority/animation/direction differs");
   check(std::uint16_t(a.behavior.projected_x)==get(l.screen_x+index)&&std::uint16_t(a.behavior.projected_y)==get(l.screen_y+index),"Actor projection differs");
  }
 }
};
} // namespace startup_oracle
