#include "eb/game_debug.hpp"
#include "eb/snes_bus.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_audio_dsp.hpp"
#include "eb/spc700_audio_cpu.hpp"
#include "generated_assets.hpp"
#include "generated_profile.hpp"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <memory>
#include <set>
#include <sstream>
#include <stdexcept>
#include <vector>

namespace {
unsigned checks{};
void check(bool v,const char* text){++checks;if(!v)throw std::runtime_error(text);}
unsigned word(const eb::SnesBus& bus,unsigned a){return bus.work_ram[a]|(bus.work_ram[a+1]<<8);}
void put(eb::SnesBus& bus,unsigned a,unsigned v){bus.work_ram[a]=v;bus.work_ram[a+1]=v>>8;}
void destinations() {
    std::set<unsigned> ids;
    unsigned areas=0,warps=0,doors=0;
    for(const auto& place:eb::debug_destinations()) {
        check(ids.insert(place.id).second,"Duplicate teleport destination ID");
        check(place.x<8192 && place.y<10240 && !(place.x%8) && !(place.y%8),"Invalid teleport landing coordinate");
        areas+=std::string_view(place.name).starts_with("Area:");
        warps+=std::string_view(place.name).starts_with("Warp ");
        doors+=std::string_view(place.name).starts_with("Entrance ");
    }
    check(areas==385 && warps==233 && doors==841 && ids.size()==1472,"Teleport catalogue lost area or entrance coverage");
}
void fixtures(eb::GameVersion version) {
    auto bus=std::make_unique<eb::SnesBus>(std::array<std::uint8_t,1>{0},version);
    eb::MainCpu65816 cpu(*bus);eb::GameDebug debug(*bus,cpu);
    const auto& p=eb::source_profile(version);const auto& character=p.character_layout;const auto& battler=p.battler_layout;
    for(unsigned i=0;i<4;++i) {
        unsigned base=character.table_address+i*character.entry_size;bus->work_ram[base+character.level]=10;
        put(*bus,base+character.max_hp,100+i);put(*bus,base+character.max_pp,20+i);
        put(*bus,base+character.current_hp,50);put(*bus,base+character.current_hp_target,50);
        put(*bus,base+character.current_pp,10);put(*bus,base+character.current_pp_target,10);
    }
    bus->work_ram[p.party_state.members]=1;bus->work_ram[p.party_state.count]=1;
    cpu.emulation_mode=false;cpu.program_counter=p.gameplay_routines.main_loop;cpu.stack_pointer=0x1eff;
    const auto original=bus->work_ram;debug.before_step();debug.configure({});
    check(bus->work_ram==original && !bus->debug_read_wram && !bus->debug_write_wram,"Disabled debug tools changed the game");
    check(debug.snapshot().ready && debug.snapshot().party[0],"Loaded party snapshot is wrong");
    debug.configure({true,true,true,true});
    for(unsigned i=0;i<4;++i) {
        unsigned base=character.table_address+i*character.entry_size;
        check(word(*bus,base+character.max_hp)==999 && word(*bus,base+character.current_hp)==999 && word(*bus,base+character.current_hp_target)==999,"Health is not 999/999");
        check(word(*bus,base+character.max_pp)==999 && word(*bus,base+character.current_pp)==999 && word(*bus,base+character.current_pp_target)==999,"PP is not 999/999");
        for(unsigned field:{character.current_hp,character.current_hp_target,character.current_pp,character.current_pp_target}) {
            bus->write_byte(0x7e0000+base+field,0);bus->write_byte(0x7e0000+base+field+1,0);
            check(word(*bus,base+field)==999,"Damage or PSI spending escaped the cheat between frames");
        }
        bus->write_byte(0x7e0000+base+character.afflictions,1);
        check(bus->work_ram[base+character.afflictions]==0,"Instant KO escaped infinite health");
    }
    put(*bus,p.wram_battle_mode_flag,1);
    for(unsigned slot:{0u,6u}) {
        const unsigned base=battler.table_address+slot*battler.entry_size;
        bus->work_ram[base+battler.ally_or_enemy]=slot==6;
        bus->write_byte(0x7e0000+base+battler.hp_target,0);bus->write_byte(0x7e0000+base+battler.hp_target+1,0);
        check(word(*bus,base+battler.hp_target)==(slot==0?999u:0u),"Battle cheat affected an enemy or missed the player");
    }
    put(*bus,p.movement_state.flags,8);
    check(bus->read_byte(0x7e0000+p.movement_state.flags)==10 && word(*bus,p.movement_state.flags)==8,"Noclip did not preserve the game's movement flags");
    check(bus->read_byte(0x7e0000+p.movement_state.intangibility_frames)==1 && !word(*bus,p.movement_state.intangibility_frames),"Enemy avoidance changed the real timer");
    put(*bus,p.movement_state.intangibility_frames,30);
    check(bus->read_byte(0x7e0000+p.movement_state.intangibility_frames)==30,"Enemy avoidance replaced an existing timer");
    debug.configure({});
    check(!bus->debug_read_wram && !bus->debug_write_wram,"Disabled cheats retained access overrides");
    for(unsigned i=0;i<4;++i) {
        const unsigned base=character.table_address+i*character.entry_size;
        check(word(*bus,base+character.max_hp)==100+i && word(*bus,base+character.max_pp)==20+i,"Disabling cheats did not restore original maxima");
        check(word(*bus,base+character.current_hp)<=100+i && word(*bus,base+character.current_pp)<=20+i,"Disabling cheats left current stats above their maxima");
    }
    check(bus->read_byte(0x7e0000+p.movement_state.flags)==8,"Noclip remained enabled");
    debug.request({eb::GameDebugRequest::Kind::Party,0,{false,false,false,false}});
    check(!debug.snapshot().busy,"An empty playable party was accepted");
    debug.request({eb::GameDebugRequest::Kind::Teleport,255,{}});
    check(!debug.snapshot().busy,"Invalid teleport destination was accepted");
    debug.request({eb::GameDebugRequest::Kind::Teleport,5,{}});debug.before_step();
    check(debug.snapshot().busy && !word(*bus,p.teleport_state.destination),"Teleport interrupted battle");
    put(*bus,p.wram_battle_mode_flag,0);cpu.program_counter=p.gameplay_routines.main_loop+4;debug.before_step();
    check(!word(*bus,p.teleport_state.destination),"Teleport ran outside the safe main-loop boundary");
    cpu.program_counter=p.gameplay_routines.main_loop;debug.before_step();
    check(!word(*bus,p.teleport_state.destination) && !bus->debug_read_rom && debug.snapshot().busy,
          "Teleport started loading before its fade completed");
    check(cpu.program_counter==p.gameplay_routines.fade_out && cpu.accumulator==1 && cpu.x_index==1 && cpu.y_index==0,
          "Teleport did not start the game's gradual fade without mosaic");
    // Simulate the fade's RTL; the asset-backed route checks its actual pixels.
    cpu.program_counter=p.gameplay_routines.main_loop;cpu.stack_pointer=0x1eff;debug.before_step();
    check(!word(*bus,p.teleport_state.destination) && cpu.program_counter==p.gameplay_routines.wait_frames && cpu.accumulator==2,
          "Teleport did not allow the blackout to reach a complete display frame");
    cpu.program_counter=p.gameplay_routines.main_loop;cpu.stack_pointer=0x1eff;debug.before_step();
    check(word(*bus,p.teleport_state.destination)==16 && word(*bus,p.teleport_state.style)==3 && bool(bus->debug_read_rom),"Teleport did not request the native instant transition");
    for(unsigned axis=0;axis<2;++axis) {
        const auto address=p.teleport_state.destination_table+16*p.teleport_state.entry_size+(axis?p.teleport_state.destination_y:p.teleport_state.destination_x);
        const unsigned expected=(axis?4040:3040)/8;
        check(bus->debug_read_rom(address,0)==(expected&255) && bus->debug_read_rom(address+1,0)==(expected>>8),
              "Teleport coordinates use the wrong regional table layout");
        check(bus->debug_read_rom(address-p.teleport_state.entry_size,123)==123,"Teleport changed an ordinary PSI destination");
    }
    put(*bus,p.teleport_state.destination,0);debug.before_step();
    check(!bus->debug_read_rom && !debug.snapshot().busy,"Teleport retained its temporary destination after completion");
}
void route(const std::string& assets,const std::string& input_path) {
    const auto game=eb::load_game_assets(assets,eb::asset_profiles());
    auto bus=std::make_unique<eb::SnesBus>(game.image,game.version);
    bus->set_presentation_width(400);
    eb::Spc700AudioCpu spc(*bus);eb::SnesAudioDsp dsp(spc);eb::MainCpu65816 cpu(*bus);cpu.reset_from_vector();
    eb::GameDebug debug(*bus,cpu);const auto& p=eb::source_profile(game.version);
    bool trace_teleport=false, load_seen=false;
    std::uint64_t blank_frame=0;
    std::set<unsigned> fade_brightness;
    bus->on_presentation_frame=[&](auto pixels,unsigned width,auto frame_number) {
        if(!trace_teleport)return;
        if(debug.snapshot().status=="Fading out...")fade_brightness.insert(bus->ppu_registers()[0]&15);
        if(!word(*bus,p.teleport_state.destination) &&
           std::all_of(pixels.begin(),pixels.end(),[](auto color){return color==0xff000000;})) {
            check(width==400,"Teleport blackout lost its widescreen canvas");
            blank_frame=frame_number;
        }
        if(word(*bus,p.teleport_state.destination) && !load_seen) {
            check(blank_frame && blank_frame<frame_number,"Teleport loaded the next map before presenting a fully black frame");
            load_seen=true;
        }
    };
    std::vector<std::pair<unsigned,unsigned>> inputs;
    std::ifstream input(input_path);std::string line;
    while(std::getline(input,line)){std::istringstream words(line);std::string frame,buttons;if(words>>frame>>buttons && frame[0]!='#')inputs.emplace_back(std::stoul(frame),std::stoul(buttons,nullptr,0));}
    unsigned event=0;
    const auto frame=[&] {
        const auto previous=bus->completed_frames;
        do{check(!cpu.is_stopped,"CPU stopped during debug route");debug.before_step();cpu.step_instruction();}while(previous==bus->completed_frames);
        dsp.take_stereo_samples();
    };
    while(bus->completed_frames<21000) {
        while(event<inputs.size() && inputs[event].first<=bus->completed_frames)bus->set_buttons(inputs[event++].second);
        frame();
        if(bus->completed_frames>=20295)break;
    }
    check(debug.snapshot().ready,"Replay did not reach a loaded game");
    bus->set_buttons(0);debug.configure({true,true,false,true});
    std::cout<<game.title<<" ready at "<<bus->completed_frames<<"\n"<<std::flush;
    const auto complete=[&] {
        const auto end=bus->completed_frames+900;
        while(debug.snapshot().busy && bus->completed_frames<end) {
            const bool dialogue=debug.snapshot().status.starts_with("Waiting");
            bus->set_buttons(dialogue && bus->completed_frames%30<5?0x80:0);
            frame();
        }
        bus->set_buttons(0);
        if(debug.snapshot().busy) {
            std::cerr<<debug.snapshot().status<<" "<<cpu.describe_registers()<<" style="<<word(*bus,p.party_state.walking_style)<<" gates=";
            for(auto address:{p.action_gates.battle_mode,p.action_gates.battle_swirl_countdown,p.action_gates.enemy_touched,p.action_gates.teleport_destination,p.action_gates.using_door,p.action_gates.input_disable_frames,p.action_gates.pending_interactions})std::cerr<<word(*bus,address)<<',';
            std::cerr<<'\n';
        }
        check(!debug.snapshot().busy,"Debug request never reached a free-movement boundary");
    };
    debug.request({eb::GameDebugRequest::Kind::Party,0,{true,true,true,true}});complete();
    check(debug.snapshot().party==std::array<bool,4>{true,true,true,true},"Source party routines failed to add all four characters");
    debug.request({eb::GameDebugRequest::Kind::Party,0,{false,false,true,false}});complete();
    check(debug.snapshot().party==std::array<bool,4>{false,false,true,false},"Source party routines failed to change the leader");
    debug.request({eb::GameDebugRequest::Kind::Party,0,{true,true,true,true}});complete();
    for(unsigned destination:{5u,3u,1078u,1369u,1146u,1133u,1205u}) {
        trace_teleport=true;load_seen=false;blank_frame=0;fade_brightness.clear();
        debug.request({eb::GameDebugRequest::Kind::Teleport,destination,{}});complete();
        const auto end=bus->completed_frames+900;
        while((word(*bus,p.teleport_state.destination) || word(*bus,p.action_gates.using_door)) && bus->completed_frames<end)frame();
        check(!word(*bus,p.teleport_state.destination),"Instant teleport never completed");
        const auto places=eb::debug_destinations();
        const auto place=*std::find_if(places.begin(),places.end(),[&](auto entry){return entry.id==destination;});
        check(word(*bus,p.party_state.leader_x)==place.x && word(*bus,p.party_state.leader_y)==place.y,
              "Teleport finished at the wrong destination coordinates");
        check(load_seen && fade_brightness.size()>=8,"Teleport skipped the gradual fade to black");
        check(bus->ppu_registers()[0]==15,"Teleport did not fade back in after loading");
        trace_teleport=false;
        std::cout<<"teleport="<<destination<<" frame="<<bus->completed_frames<<" x="<<word(*bus,p.party_state.leader_x)<<" y="<<word(*bus,p.party_state.leader_y)
                 <<" fade_levels="<<fade_brightness.size()<<" black_before_load="<<blank_frame<<'\n'<<std::flush;
        for(unsigned i=0;i<30;++i)frame();
    }
    // Walk into scenery until blocked, then use noclip to cross that boundary.
    bus->set_buttons(0x200);
    unsigned blocked=word(*bus,p.party_state.leader_x);bool wall=false;
    for(unsigned group=0;group<30;++group) {
        for(unsigned i=0;i<60;++i)frame();
        const auto x=word(*bus,p.party_state.leader_x);
        if(x==blocked){wall=true;break;}
        blocked=x;
    }
    check(wall,"Noclip fixture did not reach a blocking wall");
    debug.configure({true,true,true,true});
    for(unsigned i=0;i<60;++i)frame();
    check(word(*bus,p.party_state.leader_x)!=blocked,"Noclip did not cross the blocking wall");
    bus->set_buttons(0);
    std::cout<<"PASS "<<game.title<<": real party add/remove/leader change, seven instant teleports, wall crossing, no CPU stop\n";
}
}
int main(int argc,char** argv) {
    try {
        destinations();fixtures(eb::GameVersion::US);fixtures(eb::GameVersion::JP);
        std::cout<<"PASS "<<checks<<" synthetic debug checks\n"<<std::flush;
        if(argc==4 && std::string(argv[1])=="--assets")route(argv[2],argv[3]);
    }catch(const std::exception& e){std::cerr<<"FAIL: "<<e.what()<<'\n';return 1;}
}
