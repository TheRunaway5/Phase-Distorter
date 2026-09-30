// Real native ActorWorld + imported synthetic map/sprite/palette content.
// No original code or authored assets, mock actor advancement, or GPU proof.
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
std::shared_ptr<const dialogue::Program> program(eb::GameVersion version,std::vector<std::uint8_t> bytes) {
    return std::make_shared<const dialogue::Program>(version,
        std::vector<dialogue::ContentBlock>{{0,0,std::move(bytes)}},std::vector<dialogue::Location>{{0,0}});
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
void actor_frames_and_sampling(eb::GameVersion version) {
    Fixture f(version);const auto id=f.actors.create(actor());f.start();
    const auto initial=f.scene->frame();const auto initial_atlas=initial->atlas;
    const auto initial_pixels=eb::rasterize_direct_scene({initial,{}});
    const auto map_art=f.area.graphics();
    auto step=f.scene->begin(story::TickKind::Window);
    check(step->advance(0)==dialogue::Progress::BudgetExhausted && !step->service() && f.actors.ticks()==0,
          "Zero scheduling budget ran actor work");
    service(*step,story::SceneService::Frame);
    check(f.actors.ticks()==1 && f.actors.actor(id).action().variables[0]==1 &&
          f.actors.actor(id).action().position[0]==101*65536+0x8000,"Real actor script/physics did not run exactly once");
    check(f.scene->completed_frames()==0 && f.clock.frame_counter==255 && f.scene->frame()==initial,
          "Screen preparation consumed a frame before raw input/publication");
    check(f.windows.pending_publications()==2,"Window tick omitted visible/fixed-tail publications");
    const auto random=f.random;
    for(unsigned i=0;i<3;++i) check(step->advance()==dialogue::Progress::Suspended && f.actors.ticks()==1 && f.random==random,
                                    "Pending frame repeated actor or random work");
    rejects([&]{step->respond_actor();},"Frame boundary accepted an actor response");
    step->complete_frame({0x800f,0x010f});
    check(f.scene->completed_frames()==1 && f.clock.frame_counter==0 && f.input.state[0]==0x8100 &&
          f.input.pressed[0]==0x8100 && f.input.held[0]==0x8100 && f.windows.prompt_state().pressed==0x8100,
          "Frame did not poll/merge/mask input and wrap only the byte clock");
    check(!f.windows.pending_publications(),"Completed frame did not drain the ordered window queue");
    rejects([&]{step->complete_frame({0,0});},"One frame boundary accepted two input samples");
    finish(*step);
    const auto first=f.scene->frame();const auto first_atlas=first->atlas;
    check(first->width==320 && first->frame==1 && first->scene_identity==917 && object_quads(*first)>0,
          "Published scene lost widescreen actor output or identity");
    check(eb::rasterize_direct_scene({first,{}})!=initial_pixels,"Real actor/window work produced no visible scene change");
    const auto window=f.windows.frame();unsigned visible=0;
    const auto first_pixels=eb::rasterize_direct_scene({first,{}});
    for(unsigned y=0;y<72;++y) for(unsigned x=0;x<256;++x) if(window->pixels[y*256+x] && window->priority[y*256+x]) {
        ++visible;
        const auto color=f.windows.palette()[window->pixels[y*256+x]];
        const auto expand=[](unsigned value){return (value<<3)|(value>>2);};
        const auto rgba=0xff000000u|expand(color&31)<<16|expand((color>>5)&31)<<8|expand((color>>10)&31);
        check(first_pixels[y*320+x+32]==rgba,"Published window is not centered over the actual world scene");
    }
    check(visible>0,"Visible-window integration case was vacuous");
    auto second=f.scene->begin(story::TickKind::WorldFrame);service(*second,story::SceneService::Frame);
    second->complete_frame({0x800f,0x010f});finish(*second);
    check(f.actors.ticks()==2 && f.actors.actor(id).action().position[0]==102*65536+0x8000,
          "Second actor tick did not move by one native pixel");
    eb::DirectSceneMotion motion;motion.submit(first);motion.submit(f.scene->frame());
    const auto position=f.actors.actor(id).action().position;const auto input=f.input;
    std::set<float> moving_offsets;unsigned sampled=0;
    for(double fraction:{0.,1./144,1./300,0.07,0.31,0.5,0.73,0.98,1.}) {
        const auto& picture=motion.sample(fraction);const auto pixels=eb::rasterize_direct_scene(picture);
        for(unsigned i=0;i<picture.artwork->motions.size();++i) {
            if(picture.artwork->motions[i].identity==0)
                check(picture.offsets[i].x==0 && picture.offsets[i].y==0,"Presentation interpolated native UI/background identity0");
            else moving_offsets.insert(picture.offsets[i].x);
        }
        for(unsigned y=0;y<72;++y) for(unsigned x=0;x<256;++x)
            if(window->pixels[y*256+x] && window->priority[y*256+x])
                check(pixels[y*320+x+32]==first_pixels[y*320+x+32],"Fractional scene sample moved or blended published UI");
        ++sampled;
    }
    check(sampled==9 && moving_offsets.size()>2,"Interpolation corpus did not exercise actual actor motion");
    check(f.actors.actor(id).action().position==position && f.actors.ticks()==2 && f.input==input &&
          f.scene->completed_frames()==2 && f.area.graphics()==map_art,"Read-only sampling advanced gameplay/input/map artwork");
    check(first->atlas==first_atlas && initial->atlas==initial_atlas,"Later frames mutated held immutable artwork");
    const auto actor_frame=f.actors.draw(320,f.palettes.sprites,917,64);
    auto only=f.scene->begin(story::TickKind::Frame);service(*only,story::SceneService::Frame);
    const auto before_random=f.random;only->complete_frame({0,0});finish(*only);
    check(f.actors.ticks()==2 && f.random==before_random && f.scene->completed_frames()==3 && actor_frame->frame==2,
          "Frame-only wait advanced actor/RNG or retagged immutable actor capture");
    auto diverged=f.scene->begin(story::TickKind::WorldFrame);service(*diverged,story::SceneService::Frame);
    diverged->complete_frame({0,0});finish(*diverged);
    check(f.actors.ticks()==3 && f.scene->frame()->frame==4 && actor_frame->frame==2,
          "Scene and actor completion counters could not diverge safely");
}

void conversations(eb::GameVersion version) {
    Fixture f(version);const auto id=f.actors.create(actor());f.start();
    f.output.policy().sound_mode=2;
    dialogue::Conversation conversation(program(version,{0x71,0x02}),f.windows);conversation.start(dialogue::EntryId{0});
    auto op=f.scene->begin(conversation);service(*op,story::SceneService::Dialogue);
    check(std::get<dialogue::TextEffect>(*op->dialogue_event()).kind==dialogue::TextEffectKind::TextSound,
          "Glyph sound was acknowledged instead of exposed to the audio owner");
    const auto event=*op->dialogue_event();const auto bytes=conversation.snapshot().consumed_bytes;
    for(unsigned i=0;i<3;++i) check(op->advance()==dialogue::Progress::Suspended && *op->dialogue_event()==event &&
                                  conversation.snapshot().consumed_bytes==bytes && f.actors.ticks()==0,
                                  "Pending text sound advanced the interpreter or actors");
    op->respond_dialogue({});service(*op,story::SceneService::Frame);
    op->complete_frame({0,0});
    // A synchronous callback may update the authoritative shared PAD_PRESS
    // after raw sampling, before the interpreter receives the tick response.
    f.windows.prompt_state().pressed=0x8000;
    finish(*op);
    check(conversation.finished() && f.actors.actor(id).action().variables[0]==1 &&
          f.input.pressed[0]==0 && f.windows.prompt_state().pressed==0x8000,
          "Automatic Conversation acknowledgment overwrote callback-updated shared input");
    f.output.policy().sound_mode=3;
    dialogue::Conversation early(program(version,{0x72,0x02}),f.windows);early.start(dialogue::EntryId{0});
    auto fast=f.scene->begin(early);bool found=false;
    for(unsigned i=0;i<1000 && !found;++i) {
        check(fast->advance(1)==dialogue::Progress::BudgetExhausted,"Unexpected external service before glyph WindowTick");
        found=early.event() && std::holds_alternative<dialogue::TextEffect>(*early.event());
    }
    check(found && std::get<dialogue::TextEffect>(*early.event()).kind==dialogue::TextEffectKind::WindowTick,
          "Early-gate regression did not reach glyph WindowTick");
    f.output.policy().instant=true;f.windows.prompt_state().pressed=0x4000;
    finish(*fast);
    check(f.actors.ticks()==1 && f.scene->completed_frames()==1 && f.windows.prompt_state().pressed==0x4000,
          "Instant tick gate consumed a frame or overwrote live shared input");
}

void authored_meters_and_party_query(eb::GameVersion version) {
    Fixture f(version,true);
    const auto actor_id=f.actors.create(actor());
    f.party.party_count=1;
    f.party.display_order[0]=2; // Intentionally distinct from member/record1.
    auto& character=f.party.character(1);
    character.current_hp=character.target_hp=123;
    character.current_pp=character.target_pp=45;
    f.party.name_field(1)[0]=0x61;
    f.meters.state().selected_phase=0;
    f.text.window().active.working=0xdeadbeef;
    f.start(); // Binds this actual party owner to the dialogue service.
    const auto initial=f.scene->frame();
    const auto initial_atlas=initial->atlas;
    const auto initial_windows=f.windows.frame();
    const auto initial_random=f.random;
    // SHOW_HPPP_WINDOWS, a real glyph WindowTick, then a live display-order
    // query. No test-side response supplies the Show or PartyQuery result.
    dialogue::Conversation conversation(program(version,{0x1c,0x04,0x71,0x19,0x10,0x01,0x02}),f.windows);
    conversation.start(dialogue::EntryId{0});
    auto operation=f.scene->begin(conversation);
    service(*operation,story::SceneService::Frame);
    if (version==eb::GameVersion::US) {
        check(!f.meters.state().render && f.meters.state().selected_phase==0 &&
              f.actors.ticks()==0 && f.random==initial_random && f.windows.pending_publications()==0,
              "US selected meter blink did not suspend at its real frame-only wait");
        check(f.text.window().active.working==0xdeadbeef,"US blink wait executed the later party query");
        operation->complete_frame({0,0});
        service(*operation,story::SceneService::Frame);
        check(f.scene->completed_frames()==1,"US ShowMeters added or omitted a blink frame");
    } else {
        check(f.scene->completed_frames()==0 && f.actors.ticks()==1,
              "JP ShowMeters added a frame wait instead of reaching the glyph's actual WindowTick");
    }
    check(f.meters.state().render==1 && f.meters.state().selected_phase==0xffff &&
          f.meters.state().drawn_mask==0xffff && f.actors.ticks()==1 &&
          f.actors.actor(actor_id).action().variables[0]==1,
          "Authored ShowMeters failed to clear selection/show the real meters before actor work");
    check(f.text.window().active.working==0xdeadbeef && f.windows.pending_publications()==2,
          "Pending glyph frame consumed the later query or missed ordered window publication");
    const auto staged=f.windows.scene();
    const auto count_meter=[](const dialogue::TextFrame& frame) {
        return std::count_if(frame.pixels.begin()+19*8*256,frame.pixels.begin()+27*8*256,
                             [](auto pixel){return pixel!=0;});
    };
    check(count_meter(*initial_windows)==0 && count_meter(*f.windows.frame())==0 && count_meter(*staged)>0,
          "Meter visibility case was empty or published staging before the frame boundary");
    const auto digits=f.meters.digit_cells(0);
    check(digits[0].artwork_cell==0x204 && digits[1].artwork_cell==0x208 && digits[2].artwork_cell==0x20c,
          "Shown meter did not compose the live party member's123HP digits");
    // The suspended frame supplies no query result. Replace the same bound
    // owner's formation byte immediately before the authored lookup resumes.
    f.party.display_order[0]=6;
    operation->complete_frame({0,0});
    finish(*operation);
    check(conversation.finished() && f.text.window().active.working==6 &&
          f.scene->completed_frames()==(version==eb::GameVersion::US?2u:1u) && f.actors.ticks()==1,
          "Scene did not route the later party query to the live bound owner with32-bit zero extension");
    const auto shown=f.windows.frame();
    const auto pixels=eb::rasterize_direct_scene({f.scene->frame(),{}});
    unsigned visible=0;
    for(unsigned y=19*8;y<27*8;++y) for(unsigned x=0;x<256;++x)
        if(shown->pixels[y*256+x] && shown->priority[y*256+x]) {
            const auto color=f.windows.palette()[shown->pixels[y*256+x]];
            const auto expand=[](unsigned value){return (value<<3)|(value>>2);};
            const auto rgba=0xff000000u|expand(color&31)<<16|expand((color>>5)&31)<<8|expand((color>>10)&31);
            check(pixels[y*320+x+32]==rgba,"Actual scene failed to publish centered visible meter artwork");
            ++visible;
        }
    check(visible>0 && count_meter(*shown)>0 && initial->atlas==initial_atlas,
          "Meter integration produced no visible pixels or mutated a prior scene capture");
}

void nested_actor_callbacks(eb::GameVersion version) {
    Fixture f(version);const auto blocked=f.actors.create(actor(1));const auto later=f.actors.create(actor());f.start();
    auto parent=f.scene->begin(story::TickKind::WorldFrame);service(*parent,story::SceneService::ActorEngine);
    check(parent->actor_request()->actor==blocked && parent->actor_request()->diagnostic.authored_identifier==0xc01234 &&
          !parent->actor_request()->diagnostic.inline_length_known && f.clock.action_scripts_disabled==1,
          "Opaque source action did not expose its real suspended actor guard");
    const auto held=f.scene->frame();const auto at=f.actors.actor(blocked).action().position;
    for(unsigned i=0;i<3;++i) check(parent->advance()==dialogue::Progress::Suspended && f.actors.ticks()==0 &&
          f.actors.actor(blocked).action().position==at && f.actors.actor(later).action().variables[0]==0,
          "Pending opaque action advanced the actor list");
    rejects([&]{parent->respond_actor();},"Unknown inline extent was silently acknowledged");
    dialogue::Conversation child(program(version,{0x71,0x02}),f.windows);child.start(dialogue::EntryId{0});
    auto nested=f.scene->begin_nested(child,*parent);
    rejects([&]{parent->advance();},"Parent scene advanced while child owned its continuation");
    rejects([&]{parent->respond_actor();},"Parent actor response bypassed nested scene ownership");
    service(*nested,story::SceneService::Frame);
    check(f.actors.ticks()==0 && f.clock.action_scripts_disabled==1 && f.actors.actor(later).action().variables[0]==0,
          "Recursive dialogue WindowTick pumped the suspended ActorWorld");
    nested->complete_frame({0x0080,0});finish(*nested);
    check(object_quads(*f.scene->frame())==0 && f.scene->completed_frames()==1,
          "Suppressed nested screen published stale/partial actor quads instead of cleared objects");
    check(parent->service()==story::SceneService::ActorEngine && parent->actor_request()->actor==blocked &&
          held->frame==0,"Child completion lost parent request or mutated held scene");
    check(f.actors.erase(blocked),"Could not remove suspended actor");
    service(*parent,story::SceneService::Frame);
    check(f.actors.ticks()==1 && f.actors.actor(later).action().variables[0]==1 &&
          f.actors.actor(later).action().position[0]==101*65536+0x8000 && f.clock.action_scripts_disabled==0,
          "Erased engine request failed to continue remaining actors exactly once");
    parent->complete_frame({0,0});finish(*parent);
    check(f.scene->completed_frames()==2 && object_quads(*f.scene->frame())>0,"Parent did not recover a complete actor scene after nesting");
}

void camera_and_battle(eb::GameVersion version) {
    Fixture f(version);auto spec=actor();spec.action.position={200*65536+0x8000,112*65536+0x8000,0x8000};
    spec.behavior.tick=ActorTickCallback::CenterCamera;
    const auto camera=f.actors.create(spec), later=f.actors.create(actor());f.start();
    auto op=f.scene->begin(story::TickKind::WorldFrame);service(*op,story::SceneService::CameraRefresh);
    check(op->camera_request()->actor==camera && op->camera_request()->camera_x==72 && f.actors.ticks()==0 &&
          f.actors.actor(later).action().variables[0]==0,"Camera refresh boundary ran after later actor/physics");
    check(op->advance()==dialogue::Progress::Suspended && f.scene->completed_frames()==0,
          "Unacknowledged map refresh progressed the scene");
    rejects([&]{op->respond_actor();},"Actor response consumed a camera request");
    op->respond_camera();service(*op,story::SceneService::Frame);op->complete_frame({0,0});finish(*op);
    check(f.actors.actor(later).action().variables[0]==1 && f.actors.ticks()==1,"Camera acknowledgment skipped/repeated later actors");
    f.windows.prompt_state().battle_mode=1;
    auto battle=f.scene->begin(story::TickKind::WorldFrame);service(*battle,story::SceneService::Frame);
    battle->complete_frame({0,0});service(*battle,story::SceneService::BattleHelper);
    check(f.actors.ticks()==1 && f.scene->completed_frames()==2,"Battle path ran overworld actors or skipped its frame");
    check(battle->advance()==dialogue::Progress::Suspended && !battle->complete(),"Unported battle helper was silently completed");
    battle->respond_battle();finish(*battle);
}

void signed_camera(eb::GameVersion version) {
    Fixture f(version);f.actors.scene().camera_x=0xffff;f.actors.scene().camera_y=0xffff;
    f.start();
    const auto expected=draw_world_scene(f.area,f.palettes,{-1,-1,320,64,0,917,0xff000000},
                                        f.actors.draw(320,f.palettes.sprites,917,64));
    const auto wrapped=draw_world_scene(f.area,f.palettes,{65535,65535,320,64,0,917,0xff000000},
                                       f.actors.draw(320,f.palettes.sprites,917,64));
    const auto actual=eb::rasterize_direct_scene({f.scene->frame(),{}});
    check(actual==eb::rasterize_direct_scene({expected,{}}),"Scene interpreted wrapped source camera words as positive world coordinates");
    check(actual!=eb::rasterize_direct_scene({wrapped,{}}),"Signed-camera fixture did not distinguish the incorrect unsigned view");
}
void rejection_and_poison(eb::GameVersion version) {
    Fixture failed(version);
    const dialogue::PartyQueryRequest count_query{dialogue::PartyQueryKind::ControlledCount};
    check(!failed.windows.query_party(count_query),"Fresh window host unexpectedly retained a scene party binding");
    rejects([&]{story::Scene invalid(failed.windows,failed.party,failed.random,failed.meters,failed.clock,
        failed.input,failed.actors,failed.area,failed.palettes,{4097});},
        "Scene accepted an oversized native render view");
    check(!failed.windows.query_party(count_query),"Failed Scene capture committed its borrowed party binding");
    failed.start();
    check(failed.windows.query_party(count_query)==1,"Valid Scene could not bind after failed construction");
    Fixture f(version);f.start();
    rejects([&]{story::Scene invalid(f.windows,f.party,f.random,f.meters,f.clock,f.input,f.actors,f.area,f.palettes,{255});},
            "Scene accepted a viewport narrower than the canonical screen");
    Fixture foreign(version);dialogue::Conversation stranger(program(version,{0x02}),foreign.windows);stranger.start(dialogue::EntryId{0});
    rejects([&]{f.scene->begin(stranger);},"Scene accepted a conversation borrowing another output owner");
    check(stranger.advance()==dialogue::Progress::Finished,"Rejected foreign conversation lost its independent lifetime");
    auto abandoned=f.scene->begin(story::TickKind::Frame);service(*abandoned,story::SceneService::Frame);
    const auto held=f.scene->frame();abandoned.reset();
    rejects([&]{f.scene->begin(story::TickKind::Frame);},"Abandoned scene continuation was silently resumed");
    check(f.scene->frame()==held && f.scene->completed_frames()==0,"Poisoning rewound or destroyed published scene");
    Fixture unknown(version);unknown.start();
    dialogue::Conversation script(program(version,{0x1f,0xff,0x02}),unknown.windows);script.start(dialogue::EntryId{0});
    auto pending=unknown.scene->begin(script);service(*pending,story::SceneService::Dialogue);
    const auto request=std::get<dialogue::Request>(*pending->dialogue_event());
    check(request.kind==dialogue::RequestKind::UnsupportedCommand,"Unknown story command was swallowed by Scene");
    for(unsigned i=0;i<4;++i) check(pending->advance()==dialogue::Progress::Suspended &&
        std::get<dialogue::Request>(*pending->dialogue_event())==request && !script.finished() &&
        unknown.scene->completed_frames()==0,"Unsupported request did not remain stable and unfinished");
    // Deliberate destruction proves fail-closed abandonment; no fake callback
    // result is invented merely to make the fixture finish.
}
} // namespace
int main() {
    try {
        for(auto region:{eb::GameVersion::US,eb::GameVersion::JP}) {
            actor_frames_and_sampling(region);conversations(region);nested_actor_callbacks(region);
            authored_meters_and_party_query(region);
            camera_and_battle(region);signed_camera(region);rejection_and_poison(region);
        }
        std::cout<<"Native story scene: "<<checks<<" checks passed (real actor scripts, software rendering only)\n";
        return 0;
    } catch(const std::exception& error) {
        std::cerr<<"Native story scene after "<<checks<<" checks: "<<error.what()<<"\n";return 1;
    }
}
