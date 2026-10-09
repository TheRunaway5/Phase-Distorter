// Real native ActorWorld + imported synthetic map/sprite/palette content.
// No original code or authored assets, mock actor advancement, or GPU proof.
#include "eb/native/story/scene.hpp"
#include "eb/native/npcs/talk.hpp"
#include "eb/native/dialogue/window_graphics.hpp"
#include "native_dialogue_test_assets.hpp"
#include <algorithm>
#include <cmath>
#include <iostream>
#include <set>
#include <stdexcept>

namespace {
using namespace eb::native;
namespace dialogue = eb::native::dialogue;
namespace story = eb::native::story;
unsigned checks{};
void check(bool ok, const char* message) { ++checks; if (!ok) throw std::runtime_error(message); }
template<class F> void rejects(F operation, const char* message) {
    bool rejected = false;
    try { operation(); } catch (const std::exception&) { rejected = true; }
    check(rejected, message);
}
void put(std::vector<std::uint8_t>& bytes, unsigned at, unsigned value) {
    bytes.at(at) = std::uint8_t(value); bytes.at(at + 1) = std::uint8_t(value >> 8);
}
void pointer(std::vector<std::uint8_t>& bytes, unsigned at, unsigned offset) {
    const unsigned value = 0xc00000 + offset;
    put(bytes,at,value); put(bytes,at+2,value>>16);
}
void zero_run(std::vector<std::uint8_t>& bytes, unsigned& at, unsigned count) {
    while (count) {
        const unsigned length = std::min(count,1024u), encoded = length - 1;
        bytes.at(at++) = std::uint8_t(0xe4 | (encoded >> 8));
        bytes.at(at++) = std::uint8_t(encoded); bytes.at(at++) = 0;
        count -= length;
    }
    bytes.at(at) = 0xff;
}
WorldMapArea make_area(std::uint8_t surface = 0) {
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
AreaPalettes make_palettes() {
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
std::shared_ptr<SpriteResources> make_sprites() {
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
std::shared_ptr<const ActionScriptData> make_scripts() {
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
    std::shared_ptr<const dialogue::Program> program(eb::GameVersion region)const {
        return std::make_shared<const dialogue::Program>(region,
            std::vector<dialogue::ContentBlock>{{0,0,{0x71,2}},{0,16,{0x72,2}},{0,32,{0x73,2}}},
            std::vector<dialogue::Location>{{0,0}},
            std::vector<dialogue::ReferenceBinding>{{key(1),dialogue::Location{0,0}},
                {key(2),dialogue::Location{0,16}},{key(3),dialogue::Location{0,32}}});
    }
};
WorldCollision make_collision() {
    std::array<std::uint8_t,256> bytes{};
    return WorldCollision(bytes,{0,34,68,102,136,170,182});
}
struct Assets {
    dialogue_test_assets::WindowInput input;
    std::shared_ptr<const dialogue::FontResources> fonts;
    std::shared_ptr<const party::MeterWindowResources> meters;
    explicit Assets(eb::GameVersion version):input(version) {
        dialogue_test_assets::add_text_fonts(input);
        for(unsigned id=0;id<2;++id) {
            const auto at=input.configs+id*8;
            input.put(at,2);input.put(at+2,2);input.put(at+4,28);input.put(at+6,6);
        }
        fonts=dialogue::FontResources::import(input.image,version);
        meters=party::MeterWindowResources::import(input.image,version);
    }
};
const Assets& assets(eb::GameVersion version) {
    static const Assets us(eb::GameVersion::US),jp(eb::GameVersion::JP);
    return version==eb::GameVersion::US?us:jp;
}
struct Fixture {
    eb::GameVersion version;
    party::State party;
    dialogue::State text;
    dialogue::TextOutput output;
    dialogue::WindowHost windows;
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
    npcs::Talk talk;
    std::unique_ptr<story::Scene> scene;
    explicit Fixture(eb::GameVersion region,bool map_text=false,unsigned second_type=1,std::uint8_t surface=0)
        :version(region),party(region),output(assets(region).fonts,text),
         windows(assets(region).input.import(),text,output),meters(windows,party,assets(region).meters),
         content(region,map_text,second_type),program(content.program(region)),actors(sprites,scripts,region),
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
    ActorId authored(unsigned npc,unsigned role,unsigned x=100,unsigned y=84) {
        PreparedActorState prepared;prepared.x=std::uint16_t(x);prepared.y=std::uint16_t(y);
        auto spec=make_actor_spec(0,0,prepared,*sprites,*scripts,std::optional<NpcId>(npc));
        const auto& box=metadata.sprite.hitbox;
        spec.hitbox=ActorHitbox{metadata.collision_profile,{box[0],box[1]},{box[2],box[3]}};
        const auto id=actors.create_authored(spec,{role,role+1});
        check(id.has_value(),"Authored Talk fixture could not acquire its actual role");
        actors.actor(*id).appearance.select_four(0,0,0);
        return *id;
    }
    void start() {
        scene=std::make_unique<story::Scene>(windows,party,random,meters,clock,input,actors,area,palettes,
                                            story::SceneView{320,64,714,0xff000000,true});
    }
    unsigned drive(dialogue::WindowEffect effect, bool prepared_sprite_service = false) {
        auto service=scene->begin(effect);unsigned frames{};
        for(unsigned i=0;i<10000;++i) {
            const auto result=service->advance(1);
            if(result==dialogue::Progress::Finished) {check(service->complete(),"Scene effect completed without release");return frames;}
            if(result==dialogue::Progress::Suspended) {
                if(service->service()==story::SceneService::PartySpriteBlink) {
                    check(prepared_sprite_service && actors.appearance_scene().intangibility_ticks,
                          "Unexpected party-sprite service outside a prepared selection fixture");
                    // These selection fixtures explicitly supply the external
                    // C07C5B boundary; they do not port native party blink flags.
                    const auto selected=meters.state().selected_phase;
                    service->respond_party_sprite_blink();
                    check(meters.state().selected_phase==selected,"Sprite service changed meter selection");
                } else {
                    check(service->service()==story::SceneService::Frame,"Synthetic effect requires an unexpected unported service");
                    service->complete_frame({0,0});++frames;
                }
            }
        }
        throw std::runtime_error("Window effect exceeded its real scene work bound");
    }
    void finish(npcs::Talk::Operation& operation) {
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
void ordered_search_and_dialogue(eb::GameVersion version) {
    Fixture f(version);const auto leader=f.leader();
    const auto second=f.add(2,20),first=f.add(1,10);
    f.actors.actor(first).action().velocity={0x12340000,0xffff0000,0x8000};
    f.actors.appearance_scene().intangibility_ticks=0x1234;
    f.talk.state().interacting_npc=0x3456;f.talk.state().collision_actor=second;
    f.start();const auto old=f.scene->frame();const auto old_atlas=old->atlas;
    const auto old_position=f.actors.actor(first).action().position;
    auto operation=f.talk.begin();
    check(operation->advance(0)==dialogue::Progress::BudgetExhausted && !operation->effect() &&
          f.talk.state().interacting_npc==0x3456 && !f.windows.slot_for({1}),"Zero Talk budget mutated search/window state");
    rejects([&]{operation->selection();},"Unfinished Talk exposed a completed selection");
    rejects([&]{operation->respond();},"Talk accepted a response without a window effect");
    rejects([&]{f.talk.begin();},"Two Talk operations acquired the same owner");
    check(operation->advance()==dialogue::Progress::Suspended && operation->effect()->kind==dialogue::WindowEffectKind::ClearPartyBlink,
          "Talk did not open standard window before target search");
    check(f.talk.state().interacting_npc==0x3456 && f.talk.state().collision_actor==second &&
          f.actors.appearance_scene().intangibility_ticks==0x1234,"Search began before source window setup completed");
    const auto pending=*operation->effect();
    for(unsigned i=0;i<8;++i)check(operation->advance()==dialogue::Progress::Suspended && *operation->effect()==pending,
                                   "Pending Talk window effect was repeated or replaced");
    f.drive(pending,true);operation->respond();f.finish(*operation);
    check(f.windows.slot_for({1}).has_value() && operation->selection().reference==Content::key(1) &&
          operation->selection().text==dialogue::Location{0,0},"Talk did not resolve first-precedence actor's actual imported reference");
    check(f.talk.state().interacting_actor==first && f.talk.state().collision_actor==first && f.talk.state().interacting_npc==1,
          "Talk selection followed ActorId/creation order instead of supplied source precedence");
    check(f.actors.actor(first).behavior.direction==4 && f.actors.actor(first).action().velocity==std::array<std::uint32_t,3>{} &&
          f.actors.actor(first).action().position==old_position,"Person Talk failed to face/stop actual actor or moved its coordinates");
    check(f.actors.actor(first).appearance.displayed()->pose==four_direction_pose(4,0) &&
          f.actors.actor(first).appearance.displayed()->format==SpriteFrameFormat::FourDirection,
          "Talk did not refresh actual target display pose");
    check(f.actors.actor(leader).behavior.direction==0 && f.actors.actor(second).behavior.direction==0 &&
          f.actors.appearance_scene().intangibility_ticks==0x1234 && f.actors.ticks()==0,
          "Synchronous Talk altered unrelated actor/tick/intangibility state");
    check(old->atlas==old_atlas && operation->advance(0)==dialogue::Progress::Finished,"Talk or sampling mutated a completed frame/operation");
    f.talk.set_actors_paused(true);
    dialogue::Conversation text(f.program,f.windows);text.start(*operation->selection().text);
    auto dialogue=f.scene->begin(text);unsigned frames{};
    for(unsigned i=0;i<10000 && !dialogue->complete();++i) {
        const auto result=dialogue->advance(1);
        if(result==dialogue::Progress::Suspended) {
            check(dialogue->service()==story::SceneService::Frame,"Selected native dialogue invented/ignored an external service");
            dialogue->complete_frame({0,0});++frames;
        }
    }
    check(dialogue->complete() && frames>0 && f.output.window({1}).cursor.column>0,
          "Imported Talk selection did not drive actual Conversation/Scene output");
    const auto frame=f.scene->frame();check(frame->atlas!=old_atlas && old->atlas==old_atlas,"Selected text was invisible or rewrote the old immutable frame");
    f.talk.set_actors_paused(false);
}
void facing_and_type(eb::GameVersion version) {
    Fixture f(version);const auto leader=f.leader(1);const auto target=f.add(1,0,116,100);f.start();
    auto operation=f.talk.begin();f.finish(*operation);
    check(f.talk.state().interacting_actor==target && f.talk.state().leader_direction==2 &&
          f.actors.actor(leader).behavior.direction==2 && f.actors.actor(leader).appearance.displayed()->format==SpriteFrameFormat::EightDirection &&
          f.actors.actor(leader).appearance.displayed()->pose==eight_direction_pose(2,0),
          "Failed first probe did not rotate leader through real eight-direction pose");
    check(f.actors.actor(target).behavior.direction==6,"East probe did not turn Person west");
    Fixture nonperson(version,false,2);nonperson.leader();const auto obstacle=nonperson.add(2,0);nonperson.add(1,1);nonperson.start();
    nonperson.actors.actor(obstacle).action().velocity={1,2,3};
    auto blocked=nonperson.talk.begin();nonperson.finish(*blocked);
    check(!blocked->selection().text && nonperson.talk.state().interacting_actor==obstacle &&
          nonperson.actors.actor(obstacle).action().velocity==std::array<std::uint32_t,3>{1,2,3},
          "Nonperson collision was filtered before selection or incorrectly turned/stopped");
}
void population_lifecycle(eb::GameVersion version) {
    Fixture f(version);f.leader();
    for(unsigned i=0;i<30;++i)f.add(10+i,i,100,180);
    const auto hit=f.add(100,30);f.start();auto operation=f.talk.begin();f.finish(*operation);
    check(f.actors.size()==32 && f.talk.state().collision_actor==hit,"Actual ActorWorld Talk retained a23actor scan limit");
    check(f.actors.erase(hit),"Fixture actor erase failed");
    rejects([&]{f.talk.body(hit);},"Erased actor retained accessible collision metadata");
    f.talk.detach(hit);const auto replacement=f.add(101,30);
    auto again=f.talk.begin();f.finish(*again);check(f.talk.state().interacting_actor==replacement,"Replaced live actor left a stale Talk target");
    const auto survivor=f.actors.actors().front();
    f.actors.actor(survivor).action().velocity={0x8000,0xffff0000,17};
    const auto survivor_position=f.actors.actor(survivor).action().position;
    const auto survivor_velocity=f.actors.actor(survivor).action().velocity;
    const auto survivor_pose=f.actors.actor(survivor).appearance.displayed();
    const auto survivor_npc=f.talk.body(survivor).npc_id;
    f.talk.set_actors_paused(true);
    for(auto id:f.actors.actors())check(!f.actors.actor(id).scripts_and_physics_enabled && !f.actors.actor(id).tick_callback_enabled,
                                      "Pause retained a source-era population cap");
    const auto position=f.actors.actor(replacement).action().position;
    const auto pose=f.actors.actor(replacement).appearance.displayed();
    f.actors.actor(replacement).action().velocity={17,19,23};
    check(f.actors.erase(replacement),"Paused target erase failed");f.talk.detach(replacement);
    const auto added=f.add(102,30);f.actors.actor(added).scripts_and_physics_enabled=false;
    f.actors.actor(added).tick_callback_enabled=false;
    f.talk.set_actors_paused(false);
    for(auto id:f.actors.actors())check(f.actors.actor(id).scripts_and_physics_enabled && f.actors.actor(id).tick_callback_enabled,
                                      "Resume restored stale saved flags instead of current live traversal");
    check(f.actors.actor(added).action().position==position && f.actors.actor(added).appearance.displayed()!=pose &&
          f.talk.body(added).npc_id==102,"Pause/resume corrupted motion, pose or creation metadata");
    check(f.actors.actor(survivor).action().position==survivor_position &&
          f.actors.actor(survivor).action().velocity==survivor_velocity &&
          f.actors.actor(survivor).appearance.displayed()==survivor_pose &&
          f.talk.body(survivor).npc_id==survivor_npc,
          "Pause/resume changed surviving actor motion, display or creation identity");
}
void live_actor_observations(eb::GameVersion version) {
    Fixture f(version);f.leader();const auto first=f.add(1,0),second=f.add(2,1);f.start();
    const auto choose=[&](ActorId expected) {
        auto op=f.talk.begin();f.finish(*op);
        check(f.talk.state().collision_actor==expected && f.talk.state().interacting_actor==expected,
              "Talk reused attachment-time position/liveness/collision state");
    };
    f.actors.actor(first).action().alive=false;choose(second);
    f.actors.actor(first).action().alive=true;
    f.actors.actor(first).behavior.collision_object=-32768;choose(second);
    f.actors.actor(first).behavior.collision_object=-1;
    f.actors.actor(first).action().position[1]=(180u<<16)|0x8000;choose(second);
    f.actors.actor(first).action().position[1]=(84u<<16)|0x8000;choose(first);
    // Creation hitboxes remain authoritative when the displayed direction
    // changes. Each query chooses the orientation from the live actor owner.
    f.talk.body(first).lateral={32,8};
    f.actors.actor(first).action().position[0]=(120u<<16)|0x8000;
    f.actors.actor(first).behavior.direction=0;choose(second);
    f.actors.actor(first).behavior.direction=2;choose(first);
}
void authored_metadata_lifecycle(eb::GameVersion version) {
    Fixture f(version);
    const auto leader=f.authored(0xffff,23,100,100);
    f.talk.state().leader=leader;f.talk.state().leader_x=100;f.talk.state().leader_y=100;
    const auto second=f.authored(2,4),first=f.authored(1,1);
    const auto reserved=f.authored(3,24);
    f.start();
    const auto choose=[&](ActorId expected,unsigned npc) {
        auto operation=f.talk.begin();f.finish(*operation);
        if(f.talk.state().interacting_actor!=expected || f.talk.state().interacting_npc!=npc)
            std::cerr<<"Authored Talk expected actor="<<expected<<" npc="<<npc<<" actual actor="
                     <<f.talk.state().interacting_actor.value_or(0)<<" npc="<<f.talk.state().interacting_npc<<'\n';
        check(f.talk.state().interacting_actor==expected && f.talk.state().interacting_npc==npc,
              "Authored Talk did not observe its current role/NPC/hitbox owners");
    };
    choose(first,1);
    check(f.actors.ticks()==0,"Deriving Talk metadata introduced a gameplay tick");
    f.actors.actor(first).hitbox->enabled=0;choose(second,2);
    f.actors.actor(second).hitbox->enabled=0;
    auto miss=f.talk.begin();f.finish(*miss);
    check(!f.talk.state().interacting_actor,"Reserved party role became an authored NPC collision candidate");
    f.actors.actor(second).hitbox->enabled=1;
    f.actors.actor(first).hitbox->enabled=1;
    f.actors.actor(first).hitbox->lateral={32,8};
    f.actors.actor(first).action().position[0]=120u<<16;
    f.actors.actor(first).behavior.direction=0;choose(second,2);
    f.actors.actor(first).behavior.direction=2;choose(first,1);
    f.actors.actor(first).action().position[0]=100u<<16;
    check(f.actors.retire(first),"Authored Talk target did not retire");
    check(f.actors.authored_npc_selector(1)==1,"Retirement did not retain the actual NPC selector");
    rejects([&]{f.talk.body(first);},"Retired authored target exposed a surviving Talk observation");
    PreparedActorState prepared;prepared.x=100;prepared.y=84;
    const auto inherited=f.actors.create_authored_script(0,prepared,{1,2});
    check(inherited.has_value() && f.actors.actor(*inherited).script_only(),
          "Bare INIT_ENTITY did not reuse its actual retained role");
    check(f.actors.authored_npc_selector(1)==1,"Bare INIT_ENTITY did not retain its actual NPC selector");
    choose(*inherited,1);
    check(f.talk.body(*inherited).lateral.half_width==32,
          "Role reuse replaced the retained authoritative hitbox with displayed artwork geometry");
    // Explicit lifecycle callers retain their attachment API, while bound
    // authored actors continue reading the actual mutable geometry owner.
    f.talk.attach(*inherited,1,f.metadata,1);
    f.actors.actor(*inherited).hitbox->enabled=0;choose(second,2);
    check(f.actors.actor(reserved).action().alive,"Ignoring reserved collision roles retired a real actor");
}
void map_and_budget(eb::GameVersion version) {
    Fixture map(version,true);map.leader();map.start();auto operation=map.talk.begin();map.finish(*operation);
    check(map.talk.state().interacting_npc==0xfffe && !map.talk.state().interacting_actor &&
          map.talk.state().map_text.door_found==0x200 && map.talk.state().map_text.unread_type==6 &&
          operation->selection().text==dialogue::Location{0,32},"Real map fallback did not resolve its imported door text");
    Fixture empty(version);const auto leader=empty.leader(3);empty.start();auto miss=empty.talk.begin();empty.finish(*miss);
    check(!miss->selection().text && empty.talk.state().interacting_npc==0xffff &&
          empty.talk.state().leader_direction==2 && empty.actors.actor(leader).behavior.direction==3,
          "Exhausted probe order did not restore the masked global base independently of displayed pose");
    Fixture counter(version,false,1,0x82);counter.leader();counter.start();
    counter.actors.appearance_scene().intangibility_ticks=7;
    auto search=counter.talk.begin();
    check(search->advance()==dialogue::Progress::Suspended,"Counter fixture lost window initialization effect");
    counter.drive(*search->effect(),true);search->respond();
    check(search->advance(600)==dialogue::Progress::BudgetExhausted && !search->effect() && !search->complete() &&
          counter.talk.state().surface_flags==0x82 && counter.actors.appearance_scene().intangibility_ticks==1,
          "Long counter search fabricated a bounded no-hit or acknowledged a frame");
    const auto first=counter.talk.state().checked_surface_origin;
    const auto frames=counter.scene->completed_frames();const auto random=counter.random;
    check(search->advance(0)==dialogue::Progress::BudgetExhausted && counter.talk.state().checked_surface_origin==first,
          "Zero counter budget changed its search continuation");
    check(search->advance(600)==dialogue::Progress::BudgetExhausted && counter.talk.state().checked_surface_origin!=first &&
          counter.scene->completed_frames()==frames && counter.random==random && counter.actors.ticks()==0,
          "Counter continuation repeated an origin or advanced unrelated world/frame state");
    const auto frame=counter.scene->frame();search.reset();
    rejects([&]{counter.talk.begin();},"Abandoned counter search allowed unsafe owner reuse");
    check(counter.scene->frame()==frame,"Abandonment invalidated immutable frame sampling");
}
void invalid_and_abandon(eb::GameVersion version) {
    Fixture f(version);f.leader();const auto rogue=f.add(1,0,100,84,0,false);f.start();
    auto operation=f.talk.begin();
    check(operation->advance()==dialogue::Progress::Suspended,"Unregistered actor test skipped window initialization");
    f.drive(*operation->effect());operation->respond();
    rejects([&]{operation->advance();},"Live unregistered ActorWorld actor silently disappeared from collision");
    operation.reset();rejects([&]{f.talk.begin();},"Failed abandoned search reused invalid continuation");
    Fixture association(version);association.leader();const auto named=association.add(2,0,100,84,0,false);
    rejects([&]{association.talk.attach(named,0,association.metadata,1);},"Talk accepted a different NPC identity than the actual actor owner");
    association.talk.attach(named,0,association.metadata,2);
    rejects([&]{association.talk.attach(named,1,association.metadata,2);},"One actor acquired duplicate creation metadata");
    const auto other=association.add(3,1,100,84,0,false);
    rejects([&]{association.talk.attach(other,0,association.metadata,3);},"Two actors acquired ambiguous precedence");
    auto bad=association.metadata;bad.sprite.shape=1;
    rejects([&]{association.talk.attach(other,1,bad,3);},"Talk accepted collision metadata from a different creation shape");
    (void)rogue;
    Fixture pending(version);pending.leader();pending.start();auto abandoned=pending.talk.begin();
    check(abandoned->advance()==dialogue::Progress::Suspended,"Pending-abandon fixture lacks an owned window effect");
    abandoned.reset();rejects([&]{pending.talk.begin();},"Abandoned window operation did not poison Talk owner");
    rejects([&]{pending.output.begin_glyph(0x71);},"Abandoned Talk window owner left raw execution usable");
    check(bool(pending.windows.frame()),"Abandonment blocked safe frame sampling");
}
void standalone_window_effects(eb::GameVersion version) {
    Fixture f(version);const auto leader=f.leader();f.start();
    const auto original=f.scene->frame();const auto atlas=original->atlas;const auto random=f.random;
    check(f.drive({dialogue::WindowEffectKind::FrameWait})==1 && f.actors.ticks()==0 && f.random==random,
          "Standalone FrameWait ran gameplay instead of exactly one frame/input boundary");
    check(f.drive({dialogue::WindowEffectKind::WindowTick})==1 && f.actors.ticks()==1 &&
          f.actors.actor(leader).action().variables[0]==1 && f.random!=random,
          "Standalone WindowTick omitted real actor/random work");
    f.meters.state().selected_phase=0;f.meters.state().drawn_mask=1;
    const auto before=f.actors.ticks();const auto seed=f.random;
    check(f.drive({dialogue::WindowEffectKind::ClearPartyBlink})==0 &&
          f.meters.state().selected_phase==0 && f.actors.ticks()==before && f.random==seed,
          "Zero-intangibility sprite-blink clear changed meters or invented a frame");
    f.meters.state().render=1;f.meters.state().drawn_mask=1;
    f.party.character(1).current_hp=12;f.party.character(1).target_hp=37;
    check(f.drive({dialogue::WindowEffectKind::HideMeters})==(version==eb::GameVersion::US?1u:0u) &&
          !f.meters.state().render && f.meters.state().selected_phase==0xffff &&
          f.party.character(1).current_hp==37 && f.actors.ticks()==before,
          "Standalone HideMeters failed its selected-meter wait or party lifecycle");
    check(original->atlas==atlas,"Standalone scene effects mutated an earlier frame");
    auto abandoned=f.scene->begin(dialogue::WindowEffect{dialogue::WindowEffectKind::FrameWait});
    check(abandoned->advance(0)==dialogue::Progress::BudgetExhausted,"Zero standalone effect budget advanced a frame");
    abandoned.reset();rejects([&]{f.scene->begin(story::TickKind::Window);},"Abandoned standalone effect left scene owner reusable");
    check(bool(f.scene->frame()),"Poisoned scene blocked immutable frame sampling");
}
}
int main() {
    try {
        for(auto version:{eb::GameVersion::US,eb::GameVersion::JP}) {
            ordered_search_and_dialogue(version);facing_and_type(version);population_lifecycle(version);live_actor_observations(version);
            authored_metadata_lifecycle(version);
            map_and_budget(version);invalid_and_abandon(version);standalone_window_effects(version);
        }
        std::cout<<"PASS native NPC Talk integration: "<<checks<<" checks\n";
    }catch(const std::exception& error){std::cerr<<error.what()<<'\n';return 1;}
}
