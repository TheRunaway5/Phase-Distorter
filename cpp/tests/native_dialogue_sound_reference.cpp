// Original CC1F02 -> PLAY_SOUND_AND_UNKNOWN -> complete PLAY_SOUND, compared
// with typed native audio intent and the subsequent mandatory world request.
// C12E42 is the explicit frontier here: its real native execution is exercised
// by native_dialogue_sound_tests, and its original body by the tick reference.
// This fixture proves service order/queue writes, not native playback or PCM.
#include "eb/asset_store.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/native/dialogue/runtime.hpp"
#include "eb/snes_bus.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <string>

namespace {
using namespace eb::native::dialogue;
void check(bool value,const char* message){if(!value)throw std::runtime_error(message);}
struct Layout{unsigned handler,play,world,head,focus,table,window,queue,end,flip;};
Layout layout(eb::GameVersion version) {
    // Original linked regional symbols; window_stats.argument_memory is27.
    if(version==eb::GameVersion::US)return{0xc147ab,0xc0abe0,0xc12e42,0x88e0,0x8958,0x88e4,0x8650,0x1ac2,0xca,0x1aca};
    return{0xc14bab,0xc0abbf,0xc1355e,0x8c22,0x8c96,0x8c26,0x89c2,0x1b30,0xc8,0x1b38};
}
struct Original {
    Layout p;
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    std::vector<std::pair<unsigned,std::uint8_t>> writes;
    std::uint64_t instructions{};
    unsigned calls{},queued{},direct{},worlds{};
    explicit Original(const eb::GameAssets& assets):p(layout(assets.version)),
        bus(std::make_unique<eb::SnesBus>(assets.image,assets.version)),cpu(*bus) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        cpu.observe_memory_write=[&](unsigned at,std::uint8_t value){writes.emplace_back(at,value);};
    }
    void word(unsigned at,unsigned value){bus->work_ram.at(at)=std::uint8_t(value);bus->work_ram.at(at+1)=std::uint8_t(value>>8);}
    void seed(unsigned literal,std::uint32_t argument,unsigned end,unsigned flip) {
        bus->work_ram.fill(0);word(p.head,0);word(p.focus,1);word(p.table+2,0);
        word(p.window+23,0x5678);word(p.window+25,0x1234);
        word(p.window+27,argument);word(p.window+29,argument>>16);word(p.window+31,0xabcd);
        for(unsigned i=0;i<8;++i)bus->work_ram[p.queue+i]=std::uint8_t(0x20+i);
        bus->work_ram[p.end]=std::uint8_t(end);bus->work_ram[p.flip]=std::uint8_t(flip);
        cpu.emulation_mode=false;cpu.status_register=eb::MainCpu65816::InterruptDisable;
        cpu.direct_page=0x1e00;cpu.stack_pointer=0x1fff;cpu.data_bank=0x7e;
        cpu.accumulator=0xbeef;cpu.x_index=std::uint16_t(literal);cpu.y_index=0x1234;
        cpu.program_counter=0xc1ff00;cpu.execute_instruction<0x20>(p.handler&0xffff,3);writes.clear();
    }
    void step(){cpu.step_instruction();++instructions;}
    void until(unsigned pc) {
        for(unsigned i=0;i<1000;++i){if(cpu.program_counter==pc)return;step();}
        throw std::runtime_error("Original sound failed to reach its bounded continuation");
    }
};
void one(Original& source,eb::GameVersion version,unsigned literal,std::uint32_t argument,unsigned end,unsigned flip) {
    State state;state.dummy.active={0x12345678,argument,0xabcd};
    auto program=std::make_shared<Program>(version,std::vector<ContentBlock>{{0,0,{0x1f,2,std::uint8_t(literal),2}}},
                                         std::vector<Location>{{0,0}});
    Runtime vm(program,state);vm.start(EntryId{0});
    while(vm.advance(1)==Progress::BudgetExhausted){}
    check(vm.request() && vm.request()->kind==RequestKind::ScriptSound && vm.request()->script_sound,
          "Native decoder omitted typed sound request");
    const auto sound=*vm.request()->script_sound;
    source.seed(literal,argument,end,flip);
    const auto before=source.bus->work_ram;
    source.until(source.p.play);
    check(source.cpu.accumulator==sound.source_value,"Native operand differs from original resolved sound word");
    const auto stack=source.cpu.stack_pointer,dp=source.cpu.direct_page;
    std::vector<std::uint8_t> driver;
    source.until(source.p.world); // Complete original queue/direct-port algorithm.
    for(const auto& [at,value]:source.writes)if(at==0x2143)driver.push_back(value);
    check(source.cpu.stack_pointer==stack && source.cpu.direct_page==dp,"Audio helper changed caller stack/directpage");
    auto expected=before;
    if(!driver.empty()) {
        check(sound.kind==ScriptSoundKind::DirectDriverCommand && driver.size()==1 && driver.front()==sound.value,
              "Native direct-driver command differs from actual original APUIO3 write");
        ++source.direct;
    } else {
        check(sound.kind==ScriptSoundKind::QueueEffect,"Native omitted original queued sound");
        expected[source.p.queue+end]=std::uint8_t(sound.value|flip);
        expected[source.p.end]=std::uint8_t((end+1)&7);expected[source.p.flip]=std::uint8_t(flip^0x80);
        ++source.queued;
    }
    // Hardware multiply registers and C ABI scratch are outside the audio
    // owner. All game-state bytes, queue residue and registers remain checked.
    for(unsigned i=0;i<expected.size();++i) {
        if(i>=0x1c00 && i<0x2000)continue;
        check(source.bus->work_ram[i]==expected[i],"Original audio state cannot be reproduced from typed intent");
    }
    vm.respond();check(vm.request()->kind==RequestKind::SoundWorldTick && vm.snapshot().consumed_bytes==3,
                       "Native audio acknowledgment skipped required world boundary");
    ++source.worlds;
    // Explicit unexecuted C12E42 frontier. Its return touches no native state;
    // the complete source body is independently covered by the tick oracle.
    source.cpu.execute_instruction<0x6b>(0,1);
    source.until(0xc1ff03);
    check(source.cpu.stack_pointer==0x1fff && source.cpu.direct_page==0x1e00 && source.cpu.data_bank==0x7e &&
          source.cpu.accumulator==0,"Original handler failed to restore C ABI/return null handler");
    vm.respond();check(vm.advance()==Progress::Finished && state.dummy.active==Registers{0x12345678,argument,0xabcd},
                       "Native sound altered text registers or failed to finish");
    ++source.calls;
}
void run(const char* path) {
    auto assets=eb::load_game_assets(path,eb::asset_profiles());Original source(assets);
    try {
        for(unsigned literal=1;literal<256;++literal)for(unsigned end:{0u,7u})for(unsigned flip:{0u,0x80u,0xa5u})
            one(source,assets.version,literal,0x12345678,end,flip);
        for(auto argument:{0u,0x100u,0x10000u,0xabcd0000u,1u,0xffu,0x180u,0xffff0080u,0xffffffffu})
            for(unsigned end:{0u,7u})for(unsigned flip:{0u,0x80u,0xa5u})one(source,assets.version,0,argument,end,flip);
    }catch(const std::exception& e){throw std::runtime_error(std::string(assets.version==eb::GameVersion::US?"US":"JP")+
        " case="+std::to_string(source.calls)+": "+e.what());}
    std::cout<<(assets.version==eb::GameVersion::US?"US":"JP")<<" handlers="<<source.calls<<" original_queued="<<source.queued
             <<" original_direct_port="<<source.direct<<" world_frontiers="<<source.worlds
             <<" source_instructions="<<source.instructions<<'\n';
}
}
int main(int argc,char** argv) {
    if(argc==1){std::cout<<"Provide validated local .ebpak files for the original sound reference\n";return 77;}
    try{for(int i=1;i<argc;++i)run(argv[i]);return 0;}catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}
}
