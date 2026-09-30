#pragma once
// Shared synthetic imported data; no authored story content or reference runtime.
// Real native ActorWorld + imported synthetic map/sprite/palette content.
// No original code or authored assets, mock actor advancement, or GPU proof.
#include "eb/native/story/scene.hpp"
#include "eb/native/story/interaction_calls.hpp"
#include "eb/native/dialogue/window_graphics.hpp"
#include "native_dialogue_test_assets.hpp"
#include <algorithm>
#include <cmath>
#include <iostream>
#include <set>
#include <stdexcept>

namespace interaction_test_assets {
using namespace eb::native;
namespace dialogue = eb::native::dialogue;
namespace story = eb::native::story;
inline unsigned checks{};
inline void check(bool ok, const char* message) { ++checks; if (!ok) throw std::runtime_error(message); }
template<class F> void rejects(F operation, const char* message) {
    bool rejected = false;
    try { operation(); } catch (const std::exception&) { rejected = true; }
    check(rejected, message);
}
inline void put(std::vector<std::uint8_t>& bytes, unsigned at, unsigned value) {
    bytes.at(at) = std::uint8_t(value); bytes.at(at + 1) = std::uint8_t(value >> 8);
}
inline void pointer(std::vector<std::uint8_t>& bytes, unsigned at, unsigned offset) {
    const unsigned value = 0xc00000 + offset;
    put(bytes,at,value); put(bytes,at+2,value>>16);
}
inline void zero_run(std::vector<std::uint8_t>& bytes, unsigned& at, unsigned count) {
    while (count) {
        const unsigned length = std::min(count,1024u), encoded = length - 1;
        bytes.at(at++) = std::uint8_t(0xe4 | (encoded >> 8));
        bytes.at(at++) = std::uint8_t(encoded); bytes.at(at++) = 0;
        count -= length;
    }
    bytes.at(at) = 0xff;
}
inline WorldMapArea make_area(std::uint8_t surface = 0) {
    // Same bounded source data shapes exercised by native_world_map_tests,
    // reduced to one visible arrangement with no external event dependencies.
    std::vector<std::uint8_t> bytes(0x20000);
    WorldMapLayout layout{{},0x1a000,0x1aa00,0x1c000,0x1c100,0x1c104,0x1c108,
                          0x1c400,0x1c430,0x1c600,0x1c10c,0x1c110,1};
    for (unsigned i=0;i<10;++i) layout.block_chunks[i]=i*0x2800;
    pointer(bytes,layout.graphics,0x1d000);
    pointer(bytes,layout.arrangements,0x1d500);
    pointer(bytes,layout.collision_pointers,0x1e000);
    pointer(bytes,layout.animation_properties,0x1c800);
    put(bytes,layout.event_pointers,0xc700);
    unsigned at=0x1d000;
    bytes[at++]=31;
    for(unsigned y=0;y<8;++y) { bytes[at++]=std::uint8_t(y&1?0xaa:0x55);bytes[at++]=0; }
    for(unsigned i=0;i<16;++i) bytes[at++]=0;
    zero_run(bytes,at,0x7001-32);
    at=0x1d500;bytes[at++]=31;
    for(unsigned tile=0;tile<16;++tile) { put(bytes,at,0x0800);at+=2; }
    bytes[at++]=31;
    for(unsigned tile=0;tile<16;++tile) { put(bytes,at,0x0801);at+=2; }
    bytes[at]=0xff;
    std::fill_n(bytes.begin()+layout.collision_patterns,16,surface);
    bytes[layout.block_chunks[0]]=1; // Origin uses blank block1; out-of-map uses striped block0.
    return WorldMap(bytes,layout).prepare(0,{});
}
inline AreaPalettes make_palettes() {
    std::vector<std::uint8_t> bytes(0x6000);
    WorldPaletteLayout layout{0x1000,0x200,0x4000+32*192,0x2000};
    for(unsigned group=0;group<32;++group) {
        const unsigned first=0x4000+group*192;
        pointer(bytes,layout.groups+group*4,first);
        for(unsigned i=1;i<96;++i) put(bytes,first+i*2,i%16?0x421:0);
    }
    for(unsigned p=0;p<8;++p)
        for(unsigned color=1;color<16;++color)
            put(bytes,layout.sprites+(p*16+color)*2,0x0010+color+(color<<10));
    return WorldPalettes(bytes,layout).resolve({0,0},{});
}
inline std::shared_ptr<SpriteResources> make_sprites() {
    // Local adaptation of native_sprite_fixture's two-part synthetic sprite.
    std::vector<std::uint8_t> bytes(4096);
    SpriteCatalogLayout layout{0,73,8,2,1};
    pointer(bytes,0,32);pointer(bytes,4,32);pointer(bytes,8,128);
    bytes[32]=3;bytes[33]=0x20;bytes[34]=0;bytes[35]=0x1a;bytes[40]=0xc0;
    bytes[36]=4;bytes[37]=8;bytes[38]=4;bytes[39]=8;
    for(unsigned i=0;i<16;++i) put(bytes,41+i*2,512|(i&1));
    bytes[128]=2;bytes[129]=1;
    for(unsigned mirror=0;mirror<2;++mirror)
        for(unsigned part=0;part<2;++part) {
            const unsigned at=130+(mirror*2+part)*5;
            bytes[at]=std::uint8_t(-24+part*16);bytes[at+2]=mirror?0x40:0;
            bytes[at+3]=std::uint8_t(-8);bytes[at+4]=part?0x80:0;
        }
    for(unsigned y=0;y<24;++y) for(unsigned x=0;x<16;++x) {
        const unsigned color=(x+y*3)%16;
        for(unsigned plane=0;plane<4;++plane) if(color&(1u<<plane))
            bytes[512+((y/8)*2+x/8)*32+(y&7)*2+(plane/2)*16+(plane&1)]|=1u<<(7-(x&7));
    }
    return std::make_shared<SpriteResources>(bytes,layout);
}
inline std::shared_ptr<const ActionScriptData> make_scripts() {
    // Increment variable0, wait one tick, jump to entry0. The second entry
    // exposes an opaque real engine instruction whose continuation is unknown.
    const std::vector<std::uint8_t> bytes{0x14,0,2,1,0,0x06,1,0x19,0,0,
                                         0x42,0x34,0x12,0xc0,0x06,1,0x09};
    return std::make_shared<ActionScriptData>(bytes,0,std::vector<std::uint32_t>{0,10,14});
}
// These content builders import the entire declared synthetic tables. NPC
// references are resolved through Program, never chosen by the test driver.
struct Content {
    std::vector<std::uint8_t> bytes=std::vector<std::uint8_t>(0x101400);
    unsigned definitions,offsets,door_offsets;
    static dialogue::ReferenceKey key(unsigned id) { return {std::uint8_t(id),0,0xdd,0}; }
    std::vector<std::uint8_t> first_text{0x71,2};
    explicit Content(eb::GameVersion version,bool map_text=false,unsigned second_type=1)
        :definitions(version==eb::GameVersion::US?0xf8985:0xf89c1),
         offsets(version==eb::GameVersion::US?0x3e148:0x3e132),
         door_offsets(version==eb::GameVersion::US?0x3e230:0x3e21a) {
        for(unsigned id=0;id<npcs::InteractionResources::npc_count;++id) {
            bytes[definitions+id*17]=std::uint8_t(id==2?second_type:1);
            const auto value=key(id==2?2:1);
            std::copy(value.begin(),value.end(),bytes.begin()+definitions+id*17+9);
        }
        constexpr std::array<int,8> x{0,16,16,16,0,-16,-16,-16};
        constexpr std::array<int,8> y{-16,-16,0,16,16,16,0,-16};
        for(unsigned i=0;i<8;++i) {
            put(bytes,offsets+i*2,std::uint16_t(x[i]));
            put(bytes,offsets+16+i*2,std::uint16_t(y[i]));
            put(bytes,offsets+32+i*2,(i+4)&7);
            put(bytes,door_offsets+i*2,0);put(bytes,door_offsets+16+i*2,0);
        }
        for(unsigned cell=0;cell<1280;++cell) pointer(bytes,0x100000+cell*4,0xf0000);
        if(map_text) {
            pointer(bytes,0x100000,0xf0100);put(bytes,0xf0100,1);
            bytes[0xf0102]=12;bytes[0xf0103]=12;bytes[0xf0104]=6;
            put(bytes,0xf0105,0x0200);
            const auto value=key(3);std::copy(value.begin(),value.end(),bytes.begin()+0xf0200);
        }
    }
    void npc(unsigned id,unsigned type,unsigned gift=0,unsigned flag=0,unsigned text=1) {
        bytes.at(definitions+id*17)=std::uint8_t(type);
        put(bytes,definitions+id*17+6,flag);put(bytes,definitions+id*17+13,gift);
        const auto value=text?key(text):dialogue::ReferenceKey{};
        std::copy(value.begin(),value.end(),bytes.begin()+definitions+id*17+9);
    }
    void doors(std::initializer_list<std::array<unsigned,4>> records) {
        pointer(bytes,0x100000,0xf0100);put(bytes,0xf0100,unsigned(records.size()));
        unsigned at=0xf0102;
        for(const auto& r:records) {
            bytes.at(at)=std::uint8_t(r[1]);bytes.at(at+1)=std::uint8_t(r[0]);bytes.at(at+2)=std::uint8_t(r[2]);
            put(bytes,at+3,0x0200+r[3]*4);
            const auto value=key(r[3]);std::copy(value.begin(),value.end(),bytes.begin()+0xf0200+r[3]*4);at+=5;
        }
    }
    std::shared_ptr<const dialogue::Program> program(eb::GameVersion region)const {
        return std::make_shared<const dialogue::Program>(region,
            std::vector<dialogue::ContentBlock>{{0,0,first_text},{0,64,{0x72,2}},{0,96,{0x73,2}},{0,128,{0x74,2}}},
            std::vector<dialogue::Location>{{0,0}},
            std::vector<dialogue::ReferenceBinding>{{key(1),dialogue::Location{0,0}},
                {key(2),dialogue::Location{0,64}},{key(3),dialogue::Location{0,96}},
                {region==eb::GameVersion::US?dialogue::ReferenceKey{0x9e,0xc5,0xc7,0}:dialogue::ReferenceKey{0xb8,0x25,0xc9,0},dialogue::Location{0,128}}});
    }
};
inline WorldCollision make_collision() {
    std::array<std::uint8_t,256> bytes{};
    return WorldCollision(bytes,{0,34,68,102,136,170,182});
}
struct Assets {
    dialogue_test_assets::WindowInput input;
    std::shared_ptr<const dialogue::FontResources> fonts;
    std::shared_ptr<const party::MeterWindowResources> meters;
    explicit Assets(eb::GameVersion version):input(version) {
        dialogue_test_assets::add_text_fonts(input);
        for(unsigned id=0;id<10;++id) {
            const auto at=input.configs+id*8;
            input.put(at,2);input.put(at+2,2);input.put(at+4,28);input.put(at+6,6);
        }
        fonts=dialogue::FontResources::import(input.image,version);
        meters=party::MeterWindowResources::import(input.image,version);
    }
};
inline const Assets& assets(eb::GameVersion version) {
    static const Assets us(eb::GameVersion::US),jp(eb::GameVersion::JP);
    return version==eb::GameVersion::US?us:jp;
}
inline Content make_content(eb::GameVersion region,const std::function<void(Content&)>& edit) {
    Content content(region);if(edit)edit(content);return content;
}
struct Fixture {
    eb::GameVersion version;
    party::State party;
    dialogue::State text;
    dialogue::TextOutput output;
    dialogue::WindowHost windows;
    dialogue::PromptHost prompts;
    std::shared_ptr<dialogue::WindowGraphics> graphics;
    party::MeterWindows meters;
    story::RandomState random{1,2};story::TickState clock;story::InputState input;
    Content content;
    std::shared_ptr<const dialogue::Program> program;
    std::shared_ptr<SpriteResources> sprites=make_sprites();
    std::shared_ptr<const ActionScriptData> scripts=make_scripts();
    ActorWorld actors;
    WorldMapArea area;
    AreaPalettes palettes=make_palettes();
    WorldCollision collision=make_collision();
    ActorCreationMetadata metadata;
    npcs::Interactions talk;
    std::unique_ptr<story::Scene> scene;
    explicit Fixture(eb::GameVersion region,const std::function<void(Content&)>& edit={},std::uint8_t surface=0)
        :version(region),party(region),output(assets(region).fonts,text),
         windows(assets(region).input.import(),text,output),prompts(windows),meters(windows,party,assets(region).meters),
         content(make_content(region,edit)),program(content.program(region)),actors(sprites,scripts,region),
         area(make_area(surface)),metadata{sprites->definition(0),1,1},
         talk(npcs::InteractionResources::import(content.bytes,region),npcs::MapTextResources::import(content.bytes,region),
              program,windows,actors,collision,area) {
        party.controlled_count=1;party.controlled_order[0]=0;party.party_order[0]=1;
        party.character(1).current_hp=party.character(1).target_hp=123;
        party.character(1).current_pp=party.character(1).target_pp=45;
        std::array<dialogue::WindowArtwork,1184> retained;
        for(unsigned cell=0;cell<retained.size();++cell)retained[cell]=dialogue_test_assets::pattern(cell);
        graphics=std::make_shared<dialogue::WindowGraphics>(
            dialogue::WindowInitializationResources::import(assets(region).input.image,region),output,retained);
        windows.set_graphics(graphics);
        auto publication=graphics->begin_publication(region==eb::GameVersion::US?
            dialogue::ArtworkPublication::CommonThenGenerated:dialogue::ArtworkPublication::All);
        while(publication->advance()!=dialogue::Progress::Finished) {
            check(publication->effect().has_value(),"Fixture artwork publication lost its effect");publication->respond();
        }
        output.policy().sound_mode=3;
    }
    ActorId add(unsigned npc,unsigned precedence,unsigned x=100,unsigned y=84,unsigned direction=0,bool attach=true) {
        PreparedActorState prepared;prepared.x=std::uint16_t(x);prepared.y=std::uint16_t(y);
        prepared.direction=std::uint16_t(direction);
        auto spec=make_actor_spec(0,0,prepared,*sprites,*scripts,std::optional<NpcId>(npc));
        spec.action.animation=0;
        const auto id=actors.create(spec);actors.actor(id).appearance.select_four(direction,0,0);
        if(attach)talk.attach(id,precedence,metadata,std::uint16_t(npc));
        return id;
    }
    ActorId leader(unsigned direction=0) {
        const auto id=add(0xffff,100000,100,100,direction);
        talk.state().leader=id;talk.state().leader_x=100;talk.state().leader_y=100;
        talk.state().leader_direction=std::uint16_t(direction);return id;
    }
    void start() {
        scene=std::make_unique<story::Scene>(windows,party,random,meters,clock,input,actors,area,palettes,
                                            story::SceneView{320,64,714,0xff000000,true});
    }
    unsigned drive(dialogue::WindowEffect effect) {
        auto service=scene->begin(effect);unsigned frames{};
        for(unsigned i=0;i<10000;++i) {
            const auto result=service->advance(1);
            if(result==dialogue::Progress::Finished) {check(service->complete(),"Scene effect completed without release");return frames;}
            if(result==dialogue::Progress::Suspended) {
                check(service->service()==story::SceneService::Frame,"Synthetic effect requires an unexpected unported service");
                service->complete_frame({0,0});++frames;
            }
        }
        throw std::runtime_error("Window effect exceeded its real scene work bound");
    }
    void window(dialogue::WindowCommand command) {
        auto op=windows.begin(command);
        while(op->advance()!=dialogue::OutputProgress::Complete) {
            check(op->effect().has_value(),"Window fixture lacked an effect");drive(*op->effect());op->respond();
        }
    }
    void finish(npcs::Interactions::Operation& operation) {
        for(unsigned i=0;i<10000;++i) {
            const auto result=operation.advance(1);
            if(result==dialogue::Progress::Finished) {check(operation.complete(),"Talk failed to mark completion");return;}
            if(result==dialogue::Progress::Suspended) {
                check(operation.effect().has_value(),"Talk suspended without an actual window effect");
                drive(*operation.effect());operation.respond();
            }
        }
        throw std::runtime_error("Talk failed to finish its bounded synthetic search");
    }
};
}
