// Complete frozen Legacy NPC_COLLISION_CHECK calls, with no internal stubs.
// Synthetic source-width actor fields are independently seeded at linked US/JP
// symbols. No old game::entities memory adapter or native production tables are
// used for expected results. Flat CPU memory isolates C scratch/stack from the
// game fields; this is behavior/publication proof, not interrupt/timing proof.
#include "eb/native/entities/npc_collision.hpp"
#include "eb/main_cpu_65816.hpp"

#include <algorithm>
#include <array>
#include <cstdint>
#include <iostream>
#include <optional>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

namespace {
using namespace eb::native::entities;
void require(bool value, const char* message) { if (!value) throw std::runtime_error(message); }
// src/overworld/npc_collision_check.asm, include/{structs,enums}.asm and
// regional linked symbols. walking_style is GAME_STATE+8e US / +8b JP.
struct Layout {
    unsigned entry,scripts,markers,npc_ids,directions,x,y,enabled;
    unsigned lateral_width,lateral_height,vertical_width,vertical_height;
    unsigned movement,intangibility,walking_style;
};
Layout layout(eb::GameVersion region) {
    if (region == eb::GameVersion::US) return {
        0xc05ff6,0x0a62,0x289e,0x2c9a,0x2af6,0x0b8e,0x0bca,0x332a,
        0x33de,0x1a4a,0x3366,0x33a2,0x5d56,0x5d58,0x9883};
    return {0xc06224,0x0a58,0x2c9c,0x3098,0x2ef4,0x0b84,0x0bc0,0x3728,
            0x37dc,0x1a40,0x3764,0x37a0,0x60dc,0x60de,0x9b34};
}
CollisionShape ordinary_shape() { return {1,0,{8,12},{8,12}}; }
struct Scene {
    std::array<CollisionBody,30> bodies;
    std::uint16_t x{100},y{100},moving_slot{23};
    std::uint16_t movement{},walking{},demo{},intangibility{};
    Scene() {
        for (auto& b : bodies) { b.x=100; b.y=100; b.shape=ordinary_shape(); }
        bodies[23].collision_marker=0x1234; // Early exits must replace old result too.
    }
    void active(unsigned slot) { bodies.at(slot).script=0; bodies.at(slot).npc_id=1; }
    CollisionQuery query() const {
        return {x,y,bodies.at(moving_slot).shape,movement,walking,demo,intangibility};
    }
};
using Write = std::pair<std::uint32_t,std::uint8_t>;
struct Oracle {
    eb::GameVersion region;
    Layout map;
    std::vector<std::uint8_t> memory=std::vector<std::uint8_t>(0x1000000);
    std::uint64_t steps{};
    unsigned comparisons{},hits{},misses{},publications{};
    explicit Oracle(eb::GameVersion version) : region(version),map(layout(version)) {}
    void compare(const Scene& scene, const std::string& label,
                 std::optional<std::uint16_t> expected={}) {
        std::array<std::uint8_t,0x20000> before{};
        const auto put=[&](unsigned at, std::uint16_t value) {
            before.at(at)=std::uint8_t(value); before.at(at+1)=std::uint8_t(value>>8);
        };
        for (unsigned i=0;i<scene.bodies.size();++i) {
            const auto& b=scene.bodies[i]; const auto& s=b.shape;
            put(map.scripts+2*i,b.script); put(map.markers+2*i,b.collision_marker);
            put(map.npc_ids+2*i,b.npc_id); put(map.x+2*i,b.x); put(map.y+2*i,b.y);
            put(map.enabled+2*i,s.hitbox_enabled); put(map.directions+2*i,s.direction);
            put(map.lateral_width+2*i,s.lateral.half_width); put(map.lateral_height+2*i,s.lateral.height);
            put(map.vertical_width+2*i,s.vertical.half_width); put(map.vertical_height+2*i,s.vertical.height);
        }
        put(map.movement,scene.movement); put(map.walking_style,scene.walking);
        put(map.intangibility,scene.intangibility); put(0x81,scene.demo);
        std::copy(before.begin(),before.end(),memory.begin()+0x7e0000);
        std::fill(memory.begin(),memory.begin()+0x10000,0);
        eb::MainCpu65816 cpu(memory,region);
        cpu.set_runtime(eb::MainCpuRuntime::Legacy);
        cpu.emulation_mode=false; cpu.status_register=eb::MainCpu65816::InterruptDisable;
        cpu.direct_page=0x1e00; cpu.data_bank=0x7e; cpu.stack_pointer=0x1fff;
        cpu.accumulator=scene.x; cpu.x_index=scene.y; cpu.y_index=scene.moving_slot;
        cpu.program_counter=0xc0ff00;
        cpu.execute_instruction<0x22>(map.entry,4); // Only synthetic outer host call.
        std::vector<Write> writes;
        cpu.observe_memory_write=[&](std::uint32_t at,std::uint8_t value) {
            if (at>=0x7e0000 && at<0x800000) writes.emplace_back(at,value);
        };
        unsigned retired{};
        while (cpu.program_counter!=0xc0ff04 || cpu.stack_pointer!=0x1fff) {
            require(++retired<10000,"Original complete collision routine did not return");
            cpu.step_instruction();
        }
        const auto q=scene.query();
        const auto result=check_npc_collision(q,std::span(scene.bodies).first(23));
        const auto native=result.selected_index ? std::uint16_t(*result.selected_index) : std::uint16_t(0xffff);
        try {
            require(cpu.accumulator==native,"Native collision result differs from complete original");
            if (expected) require(native==*expected,"Independent concrete edge expectation changed");
            const auto address=0x7e0000u+map.markers+46;
            require(writes==std::vector<Write>{{address,std::uint8_t(native)},{address+1,std::uint8_t(native>>8)}},
                    "Source did not publish exactly one ordered collision result, including early exits");
            put(map.markers+46,native);
            require(std::equal(before.begin(),before.end(),memory.begin()+0x7e0000),
                    "Source changed game memory outside collision result");
            require(cpu.direct_page==0x1e00 && cpu.data_bank==0x7e,"Original caller frame/bank changed");
        } catch (const std::exception& error) {
            throw std::runtime_error(std::string(region==eb::GameVersion::US ? "US " : "JP ")+label+
                " case="+std::to_string(comparisons)+" original="+std::to_string(cpu.accumulator)+
                " native="+std::to_string(native)+": "+error.what());
        }
        ++comparisons; ++publications; steps+=retired;
        if (result.selected_index) ++hits; else ++misses;
    }
};
void boundaries(Oracle& oracle) {
    Scene empty; oracle.compare(empty,"empty",0xffff);
    empty.active(23); empty.active(24); empty.active(29);
    oracle.compare(empty,"original scan excludes slots23..29",0xffff);
    for (unsigned slot=0;slot<23;++slot) {
        Scene s; s.active(slot); oracle.compare(s,"each source physical slot",std::uint16_t(slot));
        s.moving_slot=std::uint16_t(slot); oracle.compare(s,"self candidate is included",std::uint16_t(slot));
        s.active(0); oracle.compare(s,"first match precedence",0);
    }
    for (unsigned gate=0;gate<4;++gate) for (const auto value : {0u,1u,2u,12u,0x8000u,0xffffu}) {
        Scene s; s.active(0); bool blocked{};
        if (gate==0) { s.bodies[23].shape.hitbox_enabled=std::uint16_t(value); blocked=value==0; }
        if (gate==1) { s.movement=std::uint16_t(value); blocked=(value&2)!=0; }
        if (gate==2) { s.walking=std::uint16_t(value); blocked=value==12; }
        if (gate==3) { s.demo=std::uint16_t(value); blocked=value!=0; }
        oracle.compare(s,"early gate publication",blocked ? 0xffff : 0);
    }
    for (const auto word : {0u,1u,0x7fffu,0x8000u,0x8001u,0xfffeu,0xffffu}) {
        Scene s; s.active(0); s.active(1); s.bodies[0].script=std::uint16_t(word);
        oracle.compare(s,"script sentinel",word==0xffff ? 1 : 0);
        s.bodies[0].script=0; s.bodies[0].collision_marker=std::uint16_t(word);
        oracle.compare(s,"collision sentinel",word==0x8000 ? 1 : 0);
        s.bodies[0].collision_marker=0; s.bodies[0].shape.hitbox_enabled=std::uint16_t(word);
        oracle.compare(s,"hitbox enable word",word==0 ? 1 : 0);
    }
    for (unsigned x=82;x<=118;++x) for (unsigned y=86;y<=114;++y) {
        Scene s; s.active(0); s.bodies[0].x=std::uint16_t(x); s.bodies[0].y=std::uint16_t(y);
        oracle.compare(s,"strict edge grid",x>84 && x<116 && y>88 && y<112 ? 0 : 0xffff);
    }
    for (const auto direction : {0u,1u,2u,3u,4u,5u,6u,7u,8u,0x102u,0x8000u,0xffffu}) {
        Scene s; s.active(0); s.bodies[0].x=120; s.bodies[0].shape.lateral.half_width=32;
        s.bodies[0].shape.direction=std::uint16_t(direction);
        oracle.compare(s,"candidate directional shape",direction==2 || direction==6 ? 0 : 0xffff);
        s.bodies[0].shape=ordinary_shape(); s.bodies[0].x=125;
        s.bodies[23].shape.direction=std::uint16_t(direction); s.bodies[23].shape.lateral.half_width=32;
        oracle.compare(s,"moving directional shape",direction==2 || direction==6 ? 0 : 0xffff);
    }
    constexpr std::array words{0u,1u,7u,8u,15u,16u,0x7fffu,0x8000u,0x8001u,0xfff8u,0xffffu};
    for (const auto coordinate : words) for (const auto width : words) for (const auto height : words) {
        Scene s; s.active(0); s.x=s.y=s.bodies[0].x=s.bodies[0].y=std::uint16_t(coordinate);
        s.bodies[23].shape.vertical.half_width=std::uint16_t(width);
        s.bodies[0].shape.vertical.height=std::uint16_t(height);
        oracle.compare(s,"wrapped and zero-size hitboxes");
    }
    for (unsigned id=0;id<=0xffff;++id) {
        Scene s; s.active(0); s.active(1); s.intangibility=0x8000; s.bodies[0].npc_id=std::uint16_t(id);
        oracle.compare(s,"all full-word intangible NPC IDs",id>=0x8000 && id<0xffff ? 1 : 0);
    }
}
std::uint32_t draw(std::uint32_t& seed) { seed^=seed<<13; seed^=seed>>17; seed^=seed<<5; return seed; }
std::uint16_t varied(std::uint32_t& seed) {
    constexpr std::array<std::uint16_t,14> edges{0,1,2,7,8,15,16,0x7ffe,0x7fff,0x8000,0x8001,0xfff8,0xfffe,0xffff};
    const auto value=draw(seed); return value&1 ? edges[(value>>1)%edges.size()] : std::uint16_t(value>>8);
}
void population(Oracle& oracle) {
    std::uint32_t seed=0xb049613d;
    for (unsigned iteration=0;iteration<8192;++iteration) {
        Scene s; s.x=varied(seed); s.y=varied(seed); s.moving_slot=std::uint16_t(draw(seed)%30);
        s.movement=draw(seed)%40==0 ? 2 : 0; s.walking=draw(seed)%40==0 ? 12 : 0;
        s.demo=draw(seed)%40==0 ? varied(seed) : 0; s.intangibility=std::uint16_t(draw(seed)&1);
        for (auto& b : s.bodies) {
            b.script=draw(seed)%4==0 ? 0xffff : varied(seed);
            b.collision_marker=draw(seed)%8==0 ? 0x8000 : varied(seed); b.npc_id=varied(seed);
            b.shape.hitbox_enabled=draw(seed)%8==0 ? 0 : varied(seed);
            b.shape.direction=draw(seed)%4==0 ? varied(seed) : std::uint16_t(draw(seed)%8);
            b.shape.lateral={varied(seed),varied(seed)};
            b.shape.vertical={std::uint16_t(draw(seed)%32),std::uint16_t(draw(seed)%32)};
            b.x=draw(seed)&1 ? varied(seed) : std::uint16_t(s.x+draw(seed)%65-32);
            b.y=draw(seed)&1 ? varied(seed) : std::uint16_t(s.y+draw(seed)%65-32);
        }
        oracle.compare(s,"full population random");
    }
}
void run(eb::GameVersion version) {
    Oracle oracle(version); boundaries(oracle); population(oracle);
    require(oracle.hits>100 && oracle.misses>100,"Corpus lacks hits or misses");
    require(oracle.comparisons==oracle.publications,"A source collision result publication was skipped");
    std::cout << (version==eb::GameVersion::US ? "US" : "JP") << ": " << oracle.comparisons
              << " complete original comparisons, " << oracle.hits << " hits, " << oracle.misses
              << " misses, " << oracle.publications << " ordered result publications, " << oracle.steps
              << " original instructions\n";
}
}
int main() {
    try { run(eb::GameVersion::US); run(eb::GameVersion::JP); }
    catch (const std::exception& error) { std::cerr << error.what() << '\n'; return 1; }
}
