// Whole original C190E6, C2239D and CHECK_STATUS_GROUP comparisons. Expected
// return values come from Legacy instructions, never a production lookup table.
// UPDATE_PARTY's real sorting/publication prefix is separately checked, with
// its three external entity/NPC/palette completion calls explicit boundaries.
#include "eb/native/party/queries.hpp"
#include "eb/main_cpu_65816.hpp"
#include "eb/snes_bus.hpp"
#include <algorithm>
#include <array>
#include <cstdint>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>

namespace {
using namespace eb::native::party;
void require(bool ok,const std::string& message) { if(!ok) throw std::runtime_error(message); }
struct Layout {
    unsigned lookup,membership,status,update,game,party,stride,afflictions,position;
    unsigned members,display,controlled,entities,count,global,current,var1,var5;
    std::array<unsigned,3> tails;
};
Layout layout(eb::GameVersion region) {
    if(region==eb::GameVersion::JP)
        return {0xc191a0,0xc2223b,0xc436ad,0xc036c7,0x9aa9,0x9c7f,94,13,60,
                119,147,153,159,171,72,145,0xe90,0xf80,{0xc034c7,0xc02e13,0xc45c1a}};
    return {0xc190e6,0xc2239d,0xc458af,0xc034d6,0x97f5,0x99ce,95,14,61,
            122,150,156,162,174,75,148,0xe9a,0xf8a,{0xc032ec,0xc02c3e,0xc47f87}};
}
struct Original {
    Layout p;
    std::unique_ptr<eb::SnesBus> bus;
    eb::MainCpu65816 cpu;
    std::uint64_t steps{};
    unsigned query_cases{},membership_cases{},lifecycle_cases{},diagnostics{};
    bool updating{};
    std::vector<unsigned> external;
    explicit Original(eb::GameVersion region)
        :p(layout(region)),bus(std::make_unique<eb::SnesBus>(std::vector<std::uint8_t>(0x300000),region)),cpu(*bus) {
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        cpu.observe_memory_write=[&](std::uint32_t address,std::uint8_t) {
            if(updating) return;
            const auto at=address&0xffff;
            require((at>=0x1c00&&at<0x2000)||at==0x4202||at==0x4203,
                    "Read-only original query wrote outside C stack/multiply registers: "+std::to_string(address));
        };
    }
    unsigned word(unsigned at)const {return bus->work_ram.at(at)|(unsigned(bus->work_ram.at(at+1))<<8);}
    void put(unsigned at,unsigned value) {bus->work_ram.at(at)=std::uint8_t(value);bus->work_ram.at(at+1)=std::uint8_t(value>>8);}
    unsigned call(unsigned entry,unsigned a=0,unsigned x=0,bool far=true,bool tails=false) {
        cpu.emulation_mode=false;cpu.status_register=eb::MainCpu65816::InterruptDisable;
        cpu.data_bank=0x7e;cpu.direct_page=0x1e00;cpu.stack_pointer=0x1fff;
        cpu.accumulator=std::uint16_t(a);cpu.x_index=std::uint16_t(x);cpu.y_index=0x9876;
        const auto trampoline=(entry&0xff0000)|0xff00;
        cpu.program_counter=trampoline;
        if(far)cpu.execute_instruction<0x22>(entry,4);
        else cpu.execute_instruction<0x20>(entry&0xffff,3);
        unsigned count=0;
        while(cpu.program_counter!=trampoline+(far?4:3)||cpu.stack_pointer!=0x1fff) {
            require(++count<20000,"Original party query/lifecycle failed to return");
            if(tails&&std::find(p.tails.begin(),p.tails.end(),cpu.program_counter)!=p.tails.end()) {
                external.push_back(cpu.program_counter);cpu.execute_instruction<0x6b>(0,1);
            } else {cpu.step_instruction();++steps;}
        }
        require(cpu.direct_page==0x1e00&&cpu.data_bank==0x7e,"Original query changed caller ABI");
        return cpu.accumulator;
    }
    void seed(const State& s) {
        bus->work_ram[p.game+p.count]=s.party_count;
        bus->work_ram[p.game+p.global]=s.party_status;
        for(unsigned i=0;i<6;++i) {
            bus->work_ram[p.game+p.members+i]=s.party_order[i];
            bus->work_ram[p.game+p.display+i]=s.display_order[i];
            bus->work_ram[p.game+p.controlled+i]=s.controlled_order[i];
            for(unsigned g=0;g<7;++g)
                bus->work_ram[p.party+i*p.stride+p.afflictions+g]=s.character(i+1).afflictions[g];
        }
    }
    void display(const State& s,unsigned position) {
        seed(s);const auto actual=call(p.lookup,position,0,false);
        require(actual==Queries(s).display_character(std::uint16_t(position)),"Display lookup mismatch");++query_cases;
    }
    void status(const State& s,unsigned id,unsigned group) {
        seed(s);const auto actual=call(p.status,id,group);
        require(actual==Queries(s).status(std::uint16_t(id),std::uint16_t(group)),
                "Status mismatch case="+std::to_string(query_cases)+" id="+std::to_string(id)+" group="+std::to_string(group));
        ++query_cases;
    }
    void lifecycle() {
        // Formation IDs7/6 are authored guests, while their entity record
        // indices remain within the six allocated native character records.
        constexpr std::array<unsigned,6> ids{4,2,7,1,3,6};
        constexpr std::array<unsigned,6> records{3,1,4,0,2,5};
        constexpr std::array<unsigned,6> sorted{3,1,4,0,5,2};
        bus->work_ram[p.game+p.count]=6;
        for(unsigned i=0;i<6;++i) {
            bus->work_ram[p.game+p.display+i]=std::uint8_t(ids[i]);
            bus->work_ram[p.game+p.controlled+i]=std::uint8_t(records[i]);
            bus->work_ram[p.game+p.members+i]=std::uint8_t(6-i); // must remain independent
            put(p.game+p.entities+i*2,10+i);
            put(p.var1+(10+i)*2,records[i]);
            put(p.var5+(10+i)*2,0xbeef);
            put(p.party+records[i]*p.stride+p.position,100+i*7);
            bus->work_ram[p.party+records[i]*p.stride+p.afflictions]=
                std::uint8_t(records[i]==3?1:records[i]==2?2:0);
        }
        updating=true;external.clear();call(p.update,0,0,true,true);updating=false;
        require(external==std::vector<unsigned>(p.tails.begin(),p.tails.end()),"UPDATE_PARTY external tail order differs");
        for(unsigned i=0;i<6;++i) {
            const auto previous=sorted[i];
            require(bus->work_ram[p.game+p.display+i]==ids[previous]&&
                    bus->work_ram[p.game+p.controlled+i]==records[previous]&&
                    word(p.game+p.entities+i*2)==10+previous,
                    "Original formation/entity/record association differs");
            require(word(p.party+records[previous]*p.stride+p.position)==100+i*7,
                    "Original reorder did not retain each formation rank's walking-history position");
            require(word(p.var5+(10+previous)*2)==2*i,"Original entity formation-rank publication differs");
            require(bus->work_ram[p.game+p.members+i]==6-i,"Original sort unexpectedly replaced membership order");
            const auto result=call(p.lookup,i+1,0,false);
            require(result==ids[previous],"Dialogue display lookup did not observe the source lifecycle order");
        }
        require(word(p.game+p.current)==13,"Original leader entity did not follow sorted first member");
        ++lifecycle_cases;
    }
    void malformed_source_boundaries() {
        // Record evidence of actual adjacent reads without manufacturing native
        // fields for malformed/source-corrupting input outside the owned domain.
        put(p.game+p.current,0xbcde);
        // US absolute-indexed X=ffff carries into bank7f. JP instead
        // truncates GAME_STATE+index before adding the field displacement.
        const auto zero_address=p.lookup==0xc190e6 ? 0x10000+p.game+p.display-1 : p.game+p.display-1;
        bus->work_ram[zero_address]=0xbc;
        bus->work_ram[p.game+p.controlled]=0xa7;
        require(call(p.lookup,0,0,false)==0xbc,"Zero display index regional adjacent/bank-carry read differs");
        require(call(p.lookup,7,0,false)==0xa7,"Seventh display index did not enter controlled-record bytes");
        bus->work_ram[p.game+p.count]=1;bus->work_ram[p.game+p.members]=1;
        bus->work_ram[p.party+p.afflictions-1]=0xb4;
        require(call(p.status,1,0)==0xb5,"Status group zero did not read the preceding source field");
        bus->work_ram[p.game+p.members]=7;
        bus->work_ram[p.party+6*p.stride+p.afflictions]=0xc2;
        require(call(p.status,7,1)==0xc3,"Present authored ID7 did not leave the allocated record array");
        diagnostics+=4;
    }
};
void run(eb::GameVersion region) {
    Original original(region);State state(region);state.party_order={6,2,4,1,5,3};
    state.controlled_order={0,5,2,4,1,3};state.party_count=6;
    for(unsigned byte=0;byte<256;++byte) {
        for(unsigned i=0;i<6;++i)state.display_order[i]=std::uint8_t(byte+i*37);
        state.party_count=std::uint8_t(byte%7);
        for(unsigned position=1;position<=6;++position)original.display(state,position);
    }
    for(unsigned count=0;count<=6;++count)for(unsigned id=1;id<=6;++id)for(unsigned group=1;group<=7;++group)
        for(unsigned raw=0;raw<256;++raw) {
            state.party_count=std::uint8_t(count);
            for(unsigned member=1;member<=6;++member)state.character(member).afflictions.fill(std::uint8_t(raw^member));
            state.character(id).afflictions[group-1]=std::uint8_t(raw);
            original.status(state,id,group);
        }
    for(unsigned raw=0;raw<256;++raw)for(unsigned id:{0u,1u,7u,0x100u,0xffffu}) {
        state.party_status=std::uint8_t(raw);state.party_count=255;original.status(state,id,8);
    }
    // A corrupt count does not leave owned storage if the source returns on
    // an early match; the guard belongs at the actual attempted byte access.
    for(unsigned count:{7u,255u}) for(unsigned position=0;position<6;++position) {
        state.party_count=std::uint8_t(count);state.party_order.fill(255);
        for(unsigned id=0;id<=6;++id) {
            state.party_order[position]=std::uint8_t(id);
            for(unsigned group=1;group<=7;++group) original.status(state,id,group);
        }
    }
    state.party_count=6;state.party_order={0,6,2,4,1,3};
    for(unsigned id:{0u,5u,7u,0x104u,0xffffu})for(unsigned group:{0u,1u,7u,9u,0x100u,0xffffu})original.status(state,id,group);
    // Membership helper returns the matched full word, not a bool or low-byte
    // alias. Compare every word without any native implementation of the helper.
    original.seed(state);
    for(unsigned id=0;id<=0xffff;++id) {
        const auto found=std::find(state.party_order.begin(),state.party_order.end(),id)!=state.party_order.end();
        require(original.call(original.p.membership,id)==(found?id:0),"Membership helper narrowed its argument");
        ++original.membership_cases;
    }
    original.lifecycle();original.malformed_source_boundaries();
    std::cout<<(region==eb::GameVersion::US?"US":"JP")<<": "<<original.query_cases<<" complete query comparisons, "
             <<original.membership_cases<<" complete membership cases, "<<original.lifecycle_cases<<" lifecycle-prefix case, "
             <<original.diagnostics<<" source-boundary diagnostics, "<<original.steps<<" original instructions\n";
}
}
int main() {
    try {run(eb::GameVersion::US);run(eb::GameVersion::JP);}
    catch(const std::exception& e) {std::cerr<<e.what()<<'\n';return 1;}
}
