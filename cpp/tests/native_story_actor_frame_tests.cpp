// Native scene prerequisite for C03CFD: raw OAM/action/screen/wait order.
// Uses actual Scene/ActorWorld and imported synthetic content. This does not
// implement or claim the complete bicycle, music, original-source or GPU path.
// Synthetic resource builders adapted from native_story_scene_tests.cpp.
#include "eb/native/story/scene.hpp"
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
WorldMapArea make_area() {
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
WorldActorSpec actor(unsigned script=0) {
    WorldActorSpec result;
    result.script=script;
    result.action.position={100*65536+0x8000,100*65536+0x8000,0x8000};
    result.action.velocity[0]=65536;
    result.action.animation=0;
    result.action.priority=3;
    return result;
}

struct Assets {
    dialogue_test_assets::WindowInput input;
    std::shared_ptr<const dialogue::FontResources> fonts;
    std::shared_ptr<const party::MeterWindowResources> meters;
    explicit Assets(eb::GameVersion version) : input(version) {
        dialogue_test_assets::add_text_fonts(input);
        input.put(input.configs,1); input.put(input.configs+2,1);
        input.put(input.configs+4,28); input.put(input.configs+6,6);
        fonts=dialogue::FontResources::import(input.image,version);
        meters=party::MeterWindowResources::import(input.image,version);
    }
};
const Assets& assets(eb::GameVersion version) {
    static const Assets us(eb::GameVersion::US), jp(eb::GameVersion::JP);
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
    story::RandomState random{1,2};
    story::TickState clock;
    story::InputState input;
    ActorWorld actors;
    WorldMapArea area=make_area();
    AreaPalettes palettes=make_palettes();
    std::unique_ptr<story::Scene> scene;
    explicit Fixture(eb::GameVersion region,bool meter_art=false):version(region),party(region),output(assets(region).fonts,text),
        windows(assets(region).input.import(),text,output),meters(windows,party,assets(region).meters),
        actors(make_sprites(),make_scripts(),region) {
        party.controlled_count=1;party.controlled_order[0]=0;party.party_order[0]=1;
        clock.frame_counter=255;
        if (meter_art) {
            std::array<dialogue::WindowArtwork,1184> retained;
            for (unsigned cell=0;cell<retained.size();++cell) retained[cell]=dialogue_test_assets::pattern(cell);
            graphics=std::make_shared<dialogue::WindowGraphics>(
                dialogue::WindowInitializationResources::import(assets(region).input.image,region),output,retained);
            windows.set_graphics(graphics);
            auto publication=graphics->begin_publication(region==eb::GameVersion::US ?
                dialogue::ArtworkPublication::CommonThenGenerated : dialogue::ArtworkPublication::All);
            while (publication->advance()!=dialogue::Progress::Finished) {
                check(publication->effect().has_value(),"Meter scene artwork did not expose its actual publication");
                publication->respond();
            }
        }
        auto open=windows.begin({dialogue::WindowAction::Open,dialogue::WindowId{0},{},0});
        check(open->advance()==dialogue::OutputProgress::Suspended && open->effect() &&
              open->effect()->kind==dialogue::WindowEffectKind::ClearPartyBlink,
              "Fixture opening did not retain its real party-blink service");
        auto clear=meters.begin_clear_selection();
        check(clear->advance()==dialogue::OutputProgress::Complete,"Initially unselected meters unexpectedly waited");
        open->respond();
        check(open->advance()==dialogue::OutputProgress::Complete && open->succeeded(),"Fixture window did not finish after its real service");
        output.policy().instant=true;
        output.begin_glyph(0x71);
        check(output.advance()==dialogue::OutputProgress::Complete,"Instant fixture glyph unexpectedly yielded");
        output.policy().instant=false;output.policy().sound_mode=3;
    }
    void start() {
        // Scene activation supplies the first displayed pose; the real actor
        // script and physics still own every subsequent tick/movement here.
        for(auto id:actors.actors()) actors.actor(id).appearance.select_four(0,0,0);
        scene=std::make_unique<story::Scene>(windows,party,random,meters,clock,input,actors,area,palettes,
                                            story::SceneView{320,64,917,0xff000000,true});
    }
};
dialogue::Progress next(story::Scene::Operation& op,unsigned budget=1) {
    for(unsigned i=0;i<10000;++i) {
        const auto p=op.advance(budget);
        if(p!=dialogue::Progress::BudgetExhausted) return p;
    }
    throw std::runtime_error("Scene failed to reach a concrete service within its work bound");
}
void service(story::Scene::Operation& op,story::SceneService wanted) {
    check(next(op)==dialogue::Progress::Suspended && op.service()==wanted,"Scene yielded the wrong service");
}
void finish(story::Scene::Operation& op) {
    check(next(op)==dialogue::Progress::Finished && op.complete() && !op.service(),"Scene continuation did not finish exactly once");
    check(op.advance(0)==dialogue::Progress::Finished,"Completed scene operation resumed work");
}
unsigned object_quads(const eb::DirectSceneFrame& frame) {
    return std::count_if(frame.quads.begin(),frame.quads.end(),[](const auto& q){return q.object;});
}

std::vector<std::pair<float,float>> object_positions(const eb::DirectSceneFrame& frame) {
    std::vector<std::pair<float,float>> result;
    for(const auto& q:frame.quads) if(q.object) result.emplace_back(q.x,q.y);
    return result;
}

struct Unrelated {
    story::RandomState random;
    std::array<std::uint16_t,32> palette;
    std::vector<std::uint16_t> meters;
    std::uint16_t status{};
    explicit Unrelated(Fixture& f):random(f.random),palette(f.windows.palette()),status(f.clock.last_controlled_status) {
        const auto& m=f.meters.state();
        meters={m.render,m.drawn_mask,m.selected_phase,m.area_dirty,m.upload};
        for(unsigned i=1;i<=6;++i) {
            const auto& p=f.party.character(i);
            meters.insert(meters.end(),{p.hp_fraction,p.current_hp,p.target_hp,p.pp_fraction,p.current_pp,p.target_pp});
        }
    }
    void unchanged(Fixture& f) const {
        const Unrelated after(f);
        check(after.random==random,"Raw frame advanced dialogue random state");
        check(after.palette==palette,"Raw frame animated or published the window/meter palette");
        check(after.meters==meters,"Raw frame rolled, redrew, or published meters");
        check(after.status==status,"Raw frame refreshed party status palette state");
    }
};
void poison_unrelated(Fixture& f,std::uint16_t battle) {
    f.windows.prompt_state().battle_mode=battle;
    f.meters.state()={1,0xa5a5,0xffff,0x1234,0x5a};
    f.clock.hp_speed=0x18000;
    f.clock.last_controlled_status=0xbeef;
    // Force the meter-palette phase to differ from the raw frame's clock.
    f.windows.animate_palette(f.clock.flavor,0);
    const auto colors=f.windows.palette();
    f.windows.animate_palette(f.clock.flavor,4);
    check(colors!=f.windows.palette(),"Synthetic palette does not distinguish accidental animation");
    f.windows.animate_palette(f.clock.flavor,0);
    for(unsigned i=1;i<=6;++i) {
        auto& p=f.party.character(i);
        p.current_hp=100+i;p.target_hp=200+i;p.hp_fraction=0xf000;
        p.current_pp=200+i;p.target_pp=100+i;p.pp_fraction=0x8000;
    }
}
void repeat_pending(story::Scene::Operation& op,Fixture& f) {
    const auto frames=f.scene->completed_frames(),ticks=f.actors.ticks();
    const auto input=f.input;const auto capture=f.scene->frame();const Unrelated other(f);
    for(unsigned i=0;i<4;++i) check(op.advance(i)==dialogue::Progress::Suspended,
                                  "Pending frame consumed another scheduling budget");
    check(f.scene->completed_frames()==frames && f.actors.ticks()==ticks && f.input==input &&
          f.scene->frame()==capture,"Repeated pending advance changed frame, actor, input or capture");
    other.unchanged(f);
}
void raw_frames(eb::GameVersion region,std::uint16_t battle,unsigned budget) {
    Fixture f(region);const auto id=f.actors.create(actor());poison_unrelated(f,battle);f.start();
    const Unrelated before(f);const auto held=f.scene->frame();
    const auto held_pixels=eb::rasterize_direct_scene({held,{}});
    const auto publications=f.windows.pending_publications();
    auto op=f.scene->begin(story::TickKind::ActorFrame);
    check(op->advance(0)==dialogue::Progress::BudgetExhausted && !op->service() && f.actors.ticks()==0,
          "Zero budget ran raw actor work");
    check(next(*op,budget)==dialogue::Progress::Suspended && op->service()==story::SceneService::Frame,
          "ActorFrame did not reach raw frame boundary (or yielded BattleHelper)");
    check(f.actors.ticks()==1 && f.actors.actor(id).action().variables[0]==1 &&
          f.actors.actor(id).action().position[0]==101*65536+0x8000,
          "Raw frame did not run real actor script and physics exactly once");
    check(f.clock.action_scripts_disabled==0 && f.clock.frame_counter==255 &&
          f.scene->completed_frames()==0 && f.scene->frame()==held,
          "ActorFrame consumed a frame or retained its actor guard early");
    check(f.windows.pending_publications()==publications,"ActorFrame enqueued window/meter publication");
    before.unchanged(f);repeat_pending(*op,f);
    rejects([&]{op->respond_battle();},"Battle response incorrectly consumed raw frame");
    rejects([&]{op->respond_actor();},"Actor response incorrectly consumed raw frame");
    op->complete_frame({0x008f,0x010f});finish(*op);
    check(f.clock.frame_counter==0 && f.scene->completed_frames()==1 && f.actors.ticks()==1,
          "Raw frame did not wrap low-byte clock exactly once");
    check(f.input.state==std::array<std::uint16_t,2>{0x0180,0x0100} &&
          f.input.pressed==std::array<std::uint16_t,2>{0x0180,0x0100} &&
          f.input.held==std::array<std::uint16_t,2>{0x0180,0x0100} &&
          f.input.repeat_timer==std::array<std::uint16_t,2>{20,20} &&
          f.input.player_activity==1 && f.windows.prompt_state().pressed==0x0180,
          "Raw boundary did not poll/mask/merge both supplied controller words");
    check(f.windows.pending_publications()==0,"Frame boundary did not publish previously queued windows");
    check(object_quads(*f.scene->frame())>0 && f.scene->frame()->frame==1,
          "ActorFrame did not publish actual completed actor graphics");
    check(object_positions(*held)!=object_positions(*f.scene->frame()),
          "Raw actor movement did not reach the updated screen capture");
    check(held->frame==0 && eb::rasterize_direct_scene({held,{}})==held_pixels,
          "Raw frame mutated an immutable prior capture");
    before.unchanged(f);
    rejects([&]{op->complete_frame({0,0});},"Completed raw frame accepted duplicate input");
}
void frame_only_pair(eb::GameVersion region,std::uint16_t battle) {
    Fixture f(region);const auto id=f.actors.create(actor());poison_unrelated(f,battle);f.start();
    f.windows.prompt_state().debug=0x8000;
    const Unrelated before(f);const auto held=f.scene->frame();
    const auto pixels=eb::rasterize_direct_scene({held,{}});
    const auto position=f.actors.actor(id).action().position;
    for(unsigned frame=0;frame<2;++frame) {
        auto op=f.scene->begin(story::TickKind::Frame);service(*op,story::SceneService::Frame);
        check(f.actors.ticks()==0 && f.actors.actor(id).action().position==position,
              "Frame-only wait ran actors or movement");
        repeat_pending(*op,f);op->complete_frame({0x008f,0x010f});finish(*op);
        check(f.input.state==std::array<std::uint16_t,2>{0x0080,0x0100},
              "Debug raw wait incorrectly merged controllers");
        check(f.input.pressed==std::array<std::uint16_t,2>{std::uint16_t(frame?0:0x80),std::uint16_t(frame?0:0x100)} &&
              f.input.held==f.input.pressed && f.input.repeat_timer==std::array<std::uint16_t,2>{std::uint16_t(20-frame),std::uint16_t(20-frame)},
              "Separate frame waits lost edge/repeat input processing");
        check(f.scene->completed_frames()==frame+1 && f.clock.frame_counter==frame && f.input.player_activity==1,
              "Two frame waits collapsed, replayed input activity, or lost clock wrap");
        before.unchanged(f);
        check(object_positions(*f.scene->frame())==object_positions(*held),
              "Frame-only wait changed the captured actor geometry");
    }
    check(f.actors.ticks()==0 && f.actors.actor(id).action().variables[0]==0 &&
          eb::rasterize_direct_scene({held,{}})==pixels,"Frame-only waits changed actors or prior capture");
}
void nested_actor_callback(eb::GameVersion region,std::uint16_t battle) {
    Fixture f(region);auto spec=actor();spec.behavior.tick=ActorTickCallback::WorldMaintenance;
    const auto caller=f.actors.create(spec),later=f.actors.create(actor());poison_unrelated(f,battle);f.start();
    const auto held=f.scene->frame();const auto pixels=eb::rasterize_direct_scene({held,{}});const Unrelated before(f);
    auto parent=f.scene->begin(story::TickKind::ActorFrame);service(*parent,story::SceneService::ActorEngine);
    check(parent->actor_request()->actor==caller && parent->actor_request()->origin==WorldActionOrigin::TickCallback &&
          parent->actor_request()->binding.operation==NativeAction::RunWorldMaintenance &&
          f.clock.action_scripts_disabled==1 && f.actors.ticks()==0,
          "Fixture did not suspend in actual maintenance tick callback with real actor guard");
    check(f.actors.actor(caller).action().variables[0]==1 && f.actors.actor(later).action().variables[0]==0,
          "Callback suspension did not retain authored traversal order");
    auto child=f.scene->begin_nested(story::TickKind::ActorFrame,*parent);
    rejects([&]{parent->advance();},"Parent advanced during nested raw frame");
    rejects([&]{parent->respond_actor();},"Parent callback response bypassed nested ownership");
    service(*child,story::SceneService::Frame);repeat_pending(*child,f);
    check(f.clock.action_scripts_disabled==1 && f.actors.ticks()==0 && f.actors.actor(later).action().variables[0]==0,
          "Nested raw actor-frame pumped actors or released parent guard");
    rejects([&]{f.scene->begin_nested(story::TickKind::ActorFrame,*child);},
            "Nested raw frame accepted a non-actor parent");
    child->complete_frame({0x0040,0});finish(*child);
    check(f.scene->completed_frames()==1 && f.clock.frame_counter==0 && object_quads(*f.scene->frame())==0,
          "Suppressed raw frame failed to clear objects, screen and wait");
    check(f.clock.action_scripts_disabled==1 && parent->service()==story::SceneService::ActorEngine &&
          parent->actor_request()->actor==caller,"Nested completion lost callback or parent guard");
    auto wait=f.scene->begin_nested(story::TickKind::Frame,*parent);service(*wait,story::SceneService::Frame);
    wait->complete_frame({0x0040,0});finish(*wait);
    check(f.scene->completed_frames()==2 && f.clock.frame_counter==1 && f.actors.ticks()==0 &&
          f.clock.action_scripts_disabled==1 && object_quads(*f.scene->frame())==0,
          "Nested frame-only wait re-entered actors or restored cleared objects");
    before.unchanged(f);
    // Complete the actual pending callback with its typed empty result; no
    // fabricated dismount/music or script return is used in this prerequisite.
    parent->respond_actor();service(*parent,story::SceneService::Frame);
    check(f.actors.ticks()==1 && f.clock.action_scripts_disabled==0 &&
          f.actors.actor(caller).action().variables[0]==1 && f.actors.actor(later).action().variables[0]==1 &&
          f.actors.actor(caller).action().position[0]==101*65536+0x8000 &&
          f.actors.actor(later).action().position[0]==101*65536+0x8000,
          "Parent did not resume actual remaining actors and physics exactly once");
    parent->complete_frame({0,0});finish(*parent);
    check(f.scene->completed_frames()==3 && f.clock.frame_counter==2 && object_quads(*f.scene->frame())>0,
          "Resumed parent did not recover complete visible objects");
    check(held->frame==0 && eb::rasterize_direct_scene({held,{}})==pixels,
          "Nested raw frames changed prior immutable capture");
    before.unchanged(f);
}
void already_suppressed(eb::GameVersion region) {
    Fixture f(region);const auto id=f.actors.create(actor());f.start();
    f.clock.action_scripts_disabled=0x8000;
    const auto held=f.scene->frame();
    auto op=f.scene->begin(story::TickKind::ActorFrame);service(*op,story::SceneService::Frame);
    op->complete_frame({0,0});finish(*op);
    check(f.clock.action_scripts_disabled==0x8000 && f.actors.ticks()==0 &&
          f.actors.actor(id).action().variables[0]==0 && object_quads(*f.scene->frame())==0,
          "Raw actor-frame did not preserve an existing full-word suppression guard");
    check(object_quads(*held)>0,"Suppression test lacked an initial actor capture");
}
void camera_and_ownership(eb::GameVersion region) {
    Fixture f(region);auto spec=actor();spec.behavior.tick=ActorTickCallback::CenterCamera;
    spec.action.position[0]=200*65536+0x8000;
    const auto camera=f.actors.create(spec),later=f.actors.create(actor());poison_unrelated(f,0x8000);f.start();
    const Unrelated before(f);auto op=f.scene->begin(story::TickKind::ActorFrame);
    service(*op,story::SceneService::CameraRefresh);
    check(op->camera_request()->actor==camera && op->camera_request()->camera_x==72 &&
          f.clock.action_scripts_disabled==1 && f.actors.actor(later).action().variables[0]==0,
          "Raw camera boundary did not suspend before later actor");
    rejects([&]{f.scene->begin_nested(story::TickKind::Frame,*op);},"Camera request incorrectly authorized nested actor frame");
    rejects([&]{op->complete_frame({0,0});},"Camera request accepted frame completion");
    repeat_pending(*op,f);op->respond_camera();service(*op,story::SceneService::Frame);
    op->complete_frame({0,0});finish(*op);before.unchanged(f);
    check(f.actors.ticks()==1 && f.actors.actor(later).action().variables[0]==1,"Camera response repeated/skipped later actor");
    rejects([&]{f.scene->begin_nested(story::TickKind::Frame,*op);},"Completed parent authorized nesting");
    Fixture a(region),b(region);auto caller=actor();caller.behavior.tick=ActorTickCallback::WorldMaintenance;
    a.actors.create(caller);a.start();b.start();
    auto parent=a.scene->begin(story::TickKind::ActorFrame);service(*parent,story::SceneService::ActorEngine);
    rejects([&]{b.scene->begin_nested(story::TickKind::ActorFrame,*parent);},"Foreign scene parent authorized nesting");
    parent->respond_actor();service(*parent,story::SceneService::Frame);parent->complete_frame({0,0});finish(*parent);
    auto abandoned=b.scene->begin(story::TickKind::ActorFrame);service(*abandoned,story::SceneService::Frame);abandoned.reset();
    rejects([&]{b.scene->begin(story::TickKind::Frame);},"Abandoned raw actor-frame continuation replayed");
}
} // namespace
int main() {
    try {
        for(auto region:{eb::GameVersion::US,eb::GameVersion::JP}) {
            for(auto battle:{std::uint16_t(0),std::uint16_t(1),std::uint16_t(0x8000)}) {
                for(unsigned budget:{1u,4096u}) raw_frames(region,battle,budget);
                frame_only_pair(region,battle);
                nested_actor_callback(region,battle);
            }
            camera_and_ownership(region);
            already_suppressed(region);
        }
        std::cout<<"native raw actor-frame scene checks="<<checks<<"\n";
    } catch(const std::exception& e) { std::cerr<<e.what()<<"\n";return 1; }
}
