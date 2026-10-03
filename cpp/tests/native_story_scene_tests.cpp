// Real native ActorWorld + imported synthetic map/sprite/palette content.
// No original code or authored assets, mock actor advancement, or GPU proof.
#include "eb/native/story/scene.hpp"
#include "eb/native/story/battle_publication.hpp"
#include "eb/native/battle/animation_commands.hpp"
#include "eb/native/battle/roster.hpp"
#include "eb/native/battle/action_state.hpp"
#include "eb/native/world_display_fade.hpp"
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
BattleBackgroundScene battle_background(unsigned depth) {
    std::vector<std::uint8_t> bytes(0x110000);
    const auto layout=battle_background_layout(eb::GameVersion::US);
    for(unsigned i=0;i<327;++i) bytes[layout.configurations+i*17+2]=std::uint8_t(depth);
    for(unsigned i=0;i<103;++i) {
        pointer(bytes,layout.graphics+i*4,0x1000);
        pointer(bytes,layout.arrangements+i*4,0x1100);
    }
    for(unsigned i=0;i<114;++i) pointer(bytes,layout.palettes+i*4,0x1200);
    unsigned at=0x1000;zero_run(bytes,at,32);
    at=0x1100;zero_run(bytes,at,2048);
    return BattleBackgroundScenes(bytes,eb::GameVersion::US).prepare(BattleBackgroundPair{0,0,0});
}
BattleCombatants battle_catalog() {
    std::vector<std::uint8_t> bytes(84);
    BattleCombatantLayout layout{0,16,48,56,64,68,4,0,2,1,1,1,1};
    pointer(bytes,0,80);bytes[4]=1;
    put(bytes,48,1);pointer(bytes,56,64);
    bytes[64]=1;bytes[67]=255;
    // One actual compressed512-byte4bpp sprite; every texel is color15.
    bytes[80]=0xe5;bytes[81]=0xff;bytes[82]=0xff;bytes[83]=0xff;
    return BattleCombatants(bytes,layout);
}
BattleCombatantScene battle_objects() { return battle_catalog().prepare(0); }
void battle_publication(eb::GameVersion version, unsigned depth) {
    Fixture f(version); f.start();
    auto background=battle_background(depth);
    battle::PaletteBankState colors;
    auto objects=battle_objects();
    battle::PsiScratch scratch;
    battle::PsiDisplayState display;
    eb::DirectSceneFrame::Effects policy;
    policy.main={true,true,true,true,true};
    const unsigned psi_base=depth==2?48:64;
    for(unsigned bank=0;bank<16;++bank) {
        colors.staged[bank].fill(0x7fff);
        colors.displayed[bank].fill(0x7c00);
    }
    colors.displayed[0][0]=0;
    colors.displayed[psi_base/16][2]=0x3e0;
    colors.staged[psi_base/16][2]=0x1f;
    // Retain tile0 with index1 and tile1 with index2 in the actual plane.
    for(unsigned y=0;y<8;++y) {
        display.graphics[y*2]=255;
        display.graphics[depth*8+y*2+1]=255;
    }
    display.tilemap.fill(0x3000);
    story::BattlePublication publisher(colors,scratch,display,background,objects,f.windows,policy);
    f.scene->bind_publication(publisher);
    std::array<BattleCombatantPresentation,1> rows{{{8,0,0,888,128,112}}};
    objects.publish(rows);
    f.scene->refresh_world_capture();
    const auto old=f.scene->frame();
    const auto old_pixels=eb::rasterize_direct_scene({old,{}});
    f.windows.publish_palette(1);
    check(colors.upload_mode==8 && colors.staged[0][0]==0,
          "Full window theme lost its background-only source upload request");
    f.windows.animate_palette(1,4);
    check(colors.upload_mode==24,"Animated window colors lost the full upload request");
    display.queue_frame(100);
    scratch.bytes.fill(1);
    // Source's later enemy effect replaces the full request, including the
    // PSI colors. The map still uploads and reads the current source bytes.
    colors.upload_mode=16;
    auto frame=f.scene->begin(story::TickKind::Frame);
    service(*frame,story::SceneService::Frame);
    const auto before=publisher.capture(*old);
    check(display.tilemap[0]==0x3000 && colors.upload_mode==16 &&
          eb::rasterize_direct_scene({before,{}})==old_pixels,
          "Read-only battle sampling consumed pending state");
    colors.upload_mode=7;
    rejects([&]{frame->complete_frame({0x4000,0});},
            "Scene consumed an invalid battle palette transfer");
    check(f.scene->completed_frames()==0 && f.clock.frame_counter==255 &&
          f.input.held[0]==0 && f.scene->frame()==old && !display.pending().empty() &&
          colors.upload_mode==7,
          "Failed frame publication consumed the clock, input or queued battle transfers");
    colors.upload_mode=16;
    const auto input_before=f.input;
    frame->complete_publication();
    check(f.clock.new_frame_started==1 && f.clock.input_polls==0 && f.input==input_before &&
          display.pending().empty() && frame->frame_requirement()==story::FrameRequirement::InputOnly,
          "Battle transfer publication consumed input or failed its actual queue");
    const auto transfer_frame=f.scene->frame();
    frame->complete_frame({0x8000,0}); finish(*frame);
    check(f.scene->frame()==transfer_frame && f.clock.new_frame_started==0 && f.clock.input_polls==1,
          "Battle WAIT republished an already completed transfer boundary");
    check(f.scene->completed_frames()==1 && f.clock.frame_counter==0 &&
          f.input.held[0]==0x8000 && f.actors.ticks()==0,
          "Battle publication changed actor cadence or missed the real input/frame boundary");
    check(display.pending().empty() && display.tilemap[0]==0x3001 &&
          colors.upload_mode==0 && colors.displayed[psi_base/16][2]==0x3e0 &&
          colors.displayed[8][15]==0x7fff,
          "Battle boundary merged upload ranges or failed to publish live map/object colors");
    const auto published=f.scene->frame();
    const auto pixels=eb::rasterize_direct_scene({published,{}});
    check(pixels[95*320+160]==0xff00ff00,
          "High PSI priority did not cover the real enemy level2 object");
    bool found=false;
    for(const auto &quad:published->quads) if(quad.object) {
        found=true;
        check(quad.priority==(depth==2?8:7) &&
              published->atlas[std::size_t(quad.v)*published->atlas_width+quad.u]==0xffffffff,
              "Composed object retained old palette colors or used the wrong display-mode priority");
    }
    check(found,"Battle publication dropped its nonempty object commands");
    check(eb::rasterize_direct_scene({old,{}})==old_pixels,
          "Later battle publication mutated an earlier immutable scene");
    const auto staged_before=colors.staged;
    const auto displayed_before=colors.displayed;
    const auto map_before=display.tilemap;
    display.queue_clear();colors.upload_mode=24;
    auto invalid_stamp=*published;invalid_stamp.width=255;
    rejects([&]{publisher.capture_next(invalid_stamp);},"Invalid battle capture was accepted");
    check(colors.staged==staged_before && colors.displayed==displayed_before &&
          colors.upload_mode==24 && display.tilemap==map_before && !display.pending().empty(),
          "Failed battle capture consumed palette or map transfers");
    // The next actual frame consumes the same retained transfer once.
    auto retry=f.scene->begin(story::TickKind::Frame);service(*retry,story::SceneService::Frame);
    retry->complete_frame({0,0});finish(*retry);
    check(display.tilemap[0]==0 && display.pending().empty() && colors.upload_mode==0 &&
          f.scene->completed_frames()==2,"Retry lost or duplicated the battle publication");
    display.queue_frame(200);scratch.bytes[200]=2;colors.upload_mode=24;
    const auto old_serial=display.publication_serial();
    const auto old_clock=f.clock.frame_counter;
    f.clock.interrupt_mask=0;f.clock.new_frame_started=255;
    auto vblank=f.scene->begin(story::TickKind::Frame);service(*vblank,story::SceneService::Frame);
    vblank->complete_frame({0,0});finish(*vblank);
    check(!display.pending().empty() && display.tilemap[0]==0 && colors.upload_mode==24 &&
          display.publication_serial()==old_serial && f.clock.frame_counter==old_clock &&
          f.clock.new_frame_started==0 && f.clock.input_polls==3,
          "NMI-disabled VBlank consumed queued battle DMA or a source frame counter");
    f.clock.interrupt_mask=0x80;
    auto publish=f.scene->begin(story::TickKind::Frame);service(*publish,story::SceneService::Frame);
    publish->complete_frame({0,0});finish(*publish);
    check(display.tilemap[0]==0x3002 && display.pending().empty() && colors.upload_mode==0 &&
          display.publication_serial()==old_serial+1,
          "Restored NMI did not consume the retained live battle queue exactly once");
    Fixture other(version);other.start();
    rejects([&]{other.scene->bind_publication(publisher);},
            "A scene accepted another window host's battle publication");
    // Bind failure must not pin an unrelated combatant renderer's owner.
    battle::PaletteBankState candidate,third;auto spare=battle_objects();
    rejects([&]{story::BattlePublication rejected(candidate,scratch,display,background,spare,f.windows,policy);},
            "Battle publication replaced a live window publisher");
    spare.bind_palette_state(third);
    // Reject a competing object owner and roll back the provisional UI binding.
    auto other_objects=battle_objects();other_objects.bind_palette_state(third);
    rejects([&]{story::BattlePublication rejected(candidate,scratch,display,background,other_objects,other.windows,policy);},
            "Battle publication replaced another combatant palette owner");
    auto final_objects=battle_objects();
    story::BattlePublication accepted(candidate,scratch,display,background,final_objects,other.windows,policy);
    other.scene->bind_publication(accepted);
    // Scene borrows publisher; release scenes before their local publishers.
    other.scene.reset();f.scene.reset();
}
std::shared_ptr<const battle::PsiResources> animation_resources(eb::GameVersion version) {
    std::vector<std::uint8_t> bytes(0xd0000);
    const unsigned shift=version==eb::GameVersion::JP?0x117:0;
    const std::array<unsigned,4> graphics{0xcac25+shift,0xcb613+shift,0xcdb27+shift,0xce31d+shift};
    for(unsigned at:graphics) {
        bytes[at++]=15;
        for(unsigned n=0;n<16;++n) bytes[at++]=std::uint8_t(n*13+1);
        zero_run(bytes,at,4096-16);
    }
    for(unsigned id=0;id<34;++id) {
        const unsigned config=0xcf04d+shift+id*12;
        put(bytes,config,graphics[0]);bytes[config+2]=2;bytes[config+3]=3;
        bytes[config+4]=1;bytes[config+5]=3;bytes[config+6]=1;
        pointer(bytes,0xcf58f+shift+id*4,0x2000);
        for(unsigned color=0;color<4;++color) put(bytes,0xcf47f+shift+id*8+color*2,color*0x421);
    }
    bytes[0x2000]=0xe7;bytes[0x2001]=0xff;bytes[0x2002]=1;bytes[0x2003]=0xff;
    return battle::PsiResources::import(bytes,version);
}
struct AnimationFixture {
    Fixture f;
    std::shared_ptr<const battle::PsiResources> resources;
    BattleBackgroundScene background;
    BattleCombatants catalog=battle_catalog();
    battle::PaletteBankState colors;
    BattleCombatantScene objects=catalog.prepare(0);
    battle::PsiAnimationState state;
    battle::PsiScratch scratch;
    battle::PsiDisplayState display;
    battle::PaletteEffectState ramps;
    battle::PaletteEffects effects{colors,ramps};
    battle::Roster roster;
    battle::ActionState action;
    WorldDisplayFade fade;
    WorldSwirlData swirl_data;
    WorldSwirlState swirl;
    WorldEncounterVisualState visual;
    battle::PsiSetup setup;
    battle::AnimationCommands commands;
    story::BattlePublication publication;
    explicit AnimationFixture(eb::GameVersion version,unsigned depth,bool blank=false,bool bind=true)
        : f(version),resources(animation_resources(version)),background(battle_background(depth)),
          roster(battle::EnemyResources::import(std::vector<std::uint8_t>(0x160000),version)),
          fade(WorldDisplayFadeState{std::uint8_t(blank?0x80:15)}),
          setup(resources,state,scratch,display,effects,background,roster,action,catalog,fade,f.clock),
          commands(setup,*resources,roster,action,background,colors,swirl_data,swirl,visual),
          publication(colors,scratch,display,background,objects,f.windows,visual,fade) {
        action.target=8;
        auto &target=roster.at(8);target.consciousness=1;target.side=1;
        target.sprite=1;target.x=99;target.y=111;
        visual.visible_layers.fill(true);
        scratch.bytes.fill(0x5c);display.graphics.fill(0xa7);
        f.start();
        if(bind) {f.scene->bind_publication(publication);f.scene->bind_battle_animations(commands);}
    }
    ~AnimationFixture(){f.scene.reset();}
};
void animation_continuations(eb::GameVersion version,unsigned depth) {
    for(bool blank:{false,true}) {
        AnimationFixture a(version,depth,blank);auto &f=a.f;
        const auto random=f.random;const auto input=f.input;
        // Begin with255 so the first transfer NMI exercises actual byte wrap.
        f.clock.new_frame_started=255;
        auto operation=f.scene->begin_animation(0,0);
        unsigned uploads=0;
        while(next(*operation)==dialogue::Progress::Suspended && operation->service()==story::SceneService::Publication) {
            ++uploads;
            check(uploads<=2 && f.input==input && f.clock.input_polls==0 && a.state.total_frames==0,
                  "Setup acknowledged input or finished before its transfer completed");
            const auto serial=a.display.publication_serial();
            const auto prior=f.scene->frame();
            operation->complete_publication();
            check(a.display.publication_serial()==serial+1 && f.scene->frame()!=prior &&
                  a.display.pending().empty() && f.input==input && f.clock.input_polls==0 &&
                  f.actors.ticks()==0 && f.random==random,
                  "Setup transfer did not use the actual Scene publication without input");
            if(uploads==1) check(f.clock.new_frame_started==0,"NMI did not wrap the raw pending byte");
        }
        check(operation->service()==story::SceneService::Frame && uploads==(blank?0u:depth==2?1u:2u),
              "SHOW transfer chunks or explicit WAIT boundary were lost");
        const auto expected=blank || depth==4?story::FrameRequirement::InputOnly:story::FrameRequirement::NmiPublication;
        check(operation->frame_requirement()==expected,"SHOW explicit WAIT ignored real pending-byte state");
        const auto frames=f.scene->completed_frames();
        operation->complete_frame({0x80,0});finish(*operation);
        check(f.clock.input_polls==1 && f.clock.new_frame_started==0 && f.input.held[0]==0x80 &&
              f.scene->completed_frames()==frames+(expected==story::FrameRequirement::NmiPublication) &&
              f.actors.ticks()==0 && f.random==random && a.state.total_frames==1 &&
              a.state.palette_base==(depth==2?48:64) && a.roster.at(8).alternate==1 &&
              a.display.graphics[0]==1 && a.display.graphics[1]==14,
              "Real setup completion lost imported graphics, state, input or gameplay isolation");
        check(a.display.staged_scroll[depth==2?1:0]==battle::PsiScroll{29,33},
              "Real setup lost its target-dependent scroll tail");
        // A completed Scene operation may remain retained while a new call starts.
        auto second=f.scene->begin_animation(48,48);finish(*second);
        check(f.clock.input_polls==1,"Immediate complete dispatch invented a WAIT");
    }
    {
        AnimationFixture a(version,depth);auto &f=a.f;
        a.colors.displayed[0][0]=0x7fff;
        a.visual.window_rows_enabled=true;
        f.scene->refresh_world_capture();
        const auto old=f.scene->frame();
        const auto old_pixels=eb::rasterize_direct_scene({old,{}});
        check(std::ranges::any_of(old_pixels,[](auto pixel){return pixel!=0xff000000;}),
              "Active fade fixture did not expose any illuminated pixels");
        a.fade.begin_out(16,0);
        auto operation=f.scene->begin_animation(0,0);service(*operation,story::SceneService::Publication);
        const auto fade_before=a.fade.state();
        a.colors.upload_mode=7;
        rejects([&]{operation->complete_publication();},"Bad palette publication consumed active fade");
        check(a.fade.state()==fade_before && a.visual.window_rows_enabled &&
              a.display.publication_serial()==0 && f.scene->completed_frames()==0 &&
              f.clock.input_polls==0 && !a.display.pending().empty() && f.scene->frame()==old,
              "Rejected capture advanced fade, input or live graphics transport");
        a.colors.upload_mode=0;operation->complete_publication();
        check(a.fade.state().brightness==0x80 && !a.fade.active() && !a.visual.window_rows_enabled &&
              f.clock.new_frame_started==1 && f.clock.input_polls==0 && a.display.publication_serial()==1,
              "Actual setup publication did not commit fade and disable its row stream");
        const auto black=f.scene->frame();
        const auto pixels=eb::rasterize_direct_scene({black,{}});
        check(std::ranges::all_of(pixels,[](auto pixel){return pixel==0xff000000;}),
              "Forced blank was not reflected in the actual immutable battle frame");
        service(*operation,story::SceneService::Frame);
        check(a.display.pending().empty() && a.display.publication_serial()==1 &&
              operation->frame_requirement()==story::FrameRequirement::InputOnly &&
              a.display.graphics[depth==2?4095:8191]==0,
              "Black-screen transition did not make remaining SHOW graphics transfer immediately");
        const auto fade_after=a.fade.state();
        operation->complete_frame({0,0});finish(*operation);
        check(a.fade.state()==fade_after && f.scene->completed_frames()==1 && f.scene->frame()==black &&
              f.clock.input_polls==1 && eb::rasterize_direct_scene({old,{}})==old_pixels,
              "Input-only WAIT advanced fade or mutated a retained earlier frame");
    }
    {
        AnimationFixture a(version,depth,false,false);auto &f=a.f;
        const auto scratch=a.scratch.bytes;const auto state=a.state;const auto fade=a.fade.state();
        rejects([&]{f.scene->bind_battle_animations(a.commands);},"Scene bound animation without its real publisher");
        rejects([&]{f.scene->begin_animation(0,0);},"Scene began animation without admission");
        check(a.scratch.bytes==scratch && a.state==state && a.fade.state()==fade &&
              f.scene->completed_frames()==0 && !f.scene->failed() && !a.commands.failed(),
              "Rejected animation binding mutated source state or poisoned the idle scene");
        f.scene->bind_publication(a.publication);
        story::TickState foreign_clock;
        battle::PsiSetup wrong_clock(a.resources,a.state,a.scratch,a.display,a.effects,a.background,
            a.roster,a.action,a.catalog,a.fade,foreign_clock);
        battle::AnimationCommands wrong_clock_commands(wrong_clock,*a.resources,a.roster,a.action,a.background,
            a.colors,a.swirl_data,a.swirl,a.visual);
        rejects([&]{f.scene->bind_battle_animations(wrong_clock_commands);},
                "Scene admitted animation using another input/frame receipt owner");
        battle::PsiDisplayState foreign_display;
        battle::PsiSetup wrong_display(a.resources,a.state,a.scratch,foreign_display,a.effects,a.background,
            a.roster,a.action,a.catalog,a.fade,f.clock);
        battle::AnimationCommands wrong_display_commands(wrong_display,*a.resources,a.roster,a.action,a.background,
            a.colors,a.swirl_data,a.swirl,a.visual);
        rejects([&]{f.scene->bind_battle_animations(wrong_display_commands);},
                "Scene admitted setup whose actual display is not published here");
        check(a.scratch.bytes==scratch && a.state==state && a.fade.state()==fade &&
              f.scene->completed_frames()==0 && f.clock.input_polls==0 && !f.scene->failed(),
              "Wrong-owner setup admission mutated source state");
        f.scene->bind_battle_animations(a.commands);f.scene->bind_battle_animations(a.commands);
        auto instant=f.scene->begin_animation(48,48);finish(*instant);
    }
    {
        AnimationFixture a(version,depth);auto &f=a.f;
        const auto blocked=f.actors.create(actor(1)),later=f.actors.create(actor());
        auto parent=f.scene->begin(story::TickKind::WorldFrame);service(*parent,story::SceneService::ActorEngine);
        check(parent->actor_request()->actor==blocked && f.clock.action_scripts_disabled==1,
              "Nested setup fixture lacks its actual suspended ActorWorld callback");
        f.output.policy().prompt_mode=1;
        dialogue::Conversation script(program(version,{0x1c,0x13,1,1,0x02}),f.windows);
        script.start(dialogue::EntryId{0});auto nested=f.scene->begin_nested(script,*parent);
        unsigned uploads=0;
        while(next(*nested)==dialogue::Progress::Suspended && nested->service()==story::SceneService::Publication) {
            ++uploads;check(uploads<=2,"Nested setup failed to finish its real upload queue");
            rejects([&]{parent->advance();},"Parent advanced behind the active authored animation");
            nested->complete_publication();
        }
        check(nested->service()==story::SceneService::Frame && !script.finished() &&
              f.actors.ticks()==0 && f.clock.action_scripts_disabled==1 &&
              f.actors.actor(later).action().variables[0]==0,
              "Authored CC setup escaped its live parent actor guard");
        nested->complete_frame({0x40,0});finish(*nested);
        check(script.finished() && f.text.window().active.working==1 && f.clock.input_polls==1 &&
              parent->service()==story::SceneService::ActorEngine && a.state.total_frames==1 &&
              f.actors.ticks()==0 && f.clock.action_scripts_disabled==1,
              "CC responded before actual setup finished or lost its typed source result");
        check(f.actors.erase(blocked),"Nested setup could not finish the actual parent callback");
        service(*parent,story::SceneService::Frame);parent->complete_frame({0,0});finish(*parent);
        check(f.actors.ticks()==1 && f.actors.actor(later).action().variables[0]==1 &&
              f.clock.action_scripts_disabled==0,"Setup nesting replayed or skipped actors after return");
    }
}
// Actual raw WAIT admission and callbacks. Publication-only service executes
// IRQ work; input consumption owns no second IRQ, actor tick or random draw.
void raw_frame_phases(eb::GameVersion version) {
    struct Boundary : story::FrameBoundaryService {
        Fixture &f;
        mutable unsigned publication_checks{}, input_checks{};
        unsigned publications{}, reads{};
        bool reject_publication{}, reject_input{}, fail_input{};
        std::optional<std::uint8_t> pending_after_irq;
        explicit Boundary(Fixture &fixture):f(fixture) {}
        void validate_publication() const override {
            ++publication_checks;
            if (reject_publication) throw std::logic_error("publication prerequisite");
        }
        void validate_input() const override {
            ++input_checks;
            if (reject_input) throw std::logic_error("input prerequisite");
        }
        void after_publication() override {
            ++publications;
            check(f.clock.input_polls==0 && f.input.state[0]==0,
                  "Transfer IRQ polled input before its real WAIT");
            if (pending_after_irq) f.clock.new_frame_started=*pending_after_irq;
        }
        std::array<std::uint16_t,2> read_input(std::array<std::uint16_t,2> raw) override {
            ++reads;
            check(f.clock.new_frame_started==0,"WAIT polled before clearing the source pending byte");
            if (fail_input) throw std::runtime_error("input service failed");
            return {raw[1],raw[0]};
        }
    };
    for (unsigned mask : {0u, 1u, 0x10u, 0x20u, 0x30u, 0x80u, 0x81u, 0xb0u}) {
        for (unsigned pending : {0u, 1u, 255u}) {
            Fixture f(version); f.start(); Boundary boundary(f);
            f.clock.interrupt_mask=std::uint8_t(mask);
            f.clock.new_frame_started=std::uint8_t(pending);
            const auto random=f.random;
            auto operation=f.scene->begin(story::TickKind::Frame);
            service(*operation,story::SceneService::Frame);
            const auto requirement=!(mask&0xb0)?story::FrameRequirement::VBlank:
                pending?story::FrameRequirement::InputOnly:story::FrameRequirement::NmiPublication;
            check(operation->frame_requirement()==requirement,"WAIT chose the wrong raw NMITIMEN/pending path");
            if ((mask&0xb0) && !(mask&0x80) && !pending) {
                const auto frame=f.scene->frame();
                rejects([&]{operation->complete_frame({0x40,0x80},boundary);},
                        "IRQ-only WAIT fabricated an unsupported interrupt boundary");
                check(!f.scene->failed() && f.scene->completed_frames()==0 && f.scene->frame()==frame &&
                      f.clock.frame_counter==255 && f.clock.new_frame_started==0 &&
                      f.clock.input_polls==0 && boundary.publications==0 && boundary.reads==0,
                      "Unsupported interrupt admission consumed source state");
                // A real already-pending source frame now permits the same WAIT.
                f.clock.new_frame_started=7;
            }
            operation->complete_frame({0x40,0x80},boundary); finish(*operation);
            const bool nmi=(mask&0x80) && pending==0;
            const bool vblank=!(mask&0xb0);
            check(boundary.publications==unsigned(nmi) && boundary.reads==1 &&
                  f.scene->completed_frames()==unsigned(nmi||vblank) &&
                  f.clock.frame_counter==(nmi?0:255) && f.clock.new_frame_started==0 &&
                  f.clock.input_polls==1 && f.input.held[0]==0xc0 && f.input.held[1]==0x40 &&
                  f.actors.ticks()==0 && f.random==random,
                  "Raw WAIT conflated publication, input, source clocks or gameplay work");
            rejects([&]{operation->complete_publication(boundary);},"Completed WAIT accepted an extra publication");
        }
    }
    {
        Fixture f(version);f.start();Boundary boundary(f);
        auto operation=f.scene->begin(story::TickKind::Frame);service(*operation,story::SceneService::Frame);
        boundary.reject_input=true;boundary.reject_publication=true;
        const auto old=f.scene->frame();
        rejects([&]{operation->complete_publication(boundary);},"Publication preflight did not reject");
        check(!f.scene->failed() && f.scene->frame()==old && f.scene->completed_frames()==0 &&
              f.clock.frame_counter==255 && f.clock.new_frame_started==0 && boundary.publications==0,
              "Publication preflight consumed a source boundary");
        boundary.reject_publication=false;
        // A transfer-driven NMI must not ask for the unrelated input service.
        operation->complete_publication(boundary);
        check(boundary.input_checks==0 && boundary.publications==1 && boundary.reads==0 &&
              f.clock.new_frame_started==1 && f.clock.input_polls==0 &&
              operation->frame_requirement()==story::FrameRequirement::InputOnly,
              "Publication-only boundary required or consumed input");
        const auto published=f.scene->frame();
        rejects([&]{operation->complete_frame({0,0},boundary);},"Pending input prerequisite was ignored");
        check(f.scene->frame()==published && f.clock.new_frame_started==1 && !f.scene->failed(),
              "Input preflight consumed a pending frame");
        rejects([&]{operation->complete_publication(boundary);},"Pending input allowed a duplicate NMI");
        boundary.reject_input=false;
        operation->complete_frame({0x40,0x80},boundary);finish(*operation);
        check(f.scene->completed_frames()==1 && boundary.publications==1 && boundary.reads==1 &&
              f.scene->frame()==published && f.clock.input_polls==1,
              "Pending frame consumption republished or replayed IRQ work");
    }
    {
        Fixture f(version);f.start();Boundary boundary(f);
        auto operation=f.scene->begin(story::TickKind::Frame);service(*operation,story::SceneService::Frame);
        // A real IRQ callback can clear the byte. WAIT remains pending and does
        // not invent successful input merely because one NMI has elapsed.
        boundary.pending_after_irq=0;
        operation->complete_frame({0,0},boundary);
        check(operation->service()==story::SceneService::Frame && f.clock.input_polls==0 &&
              f.scene->completed_frames()==1 && boundary.reads==0,
              "WAIT escaped a zero pending byte after the publication callback");
        boundary.pending_after_irq.reset();
        operation->complete_frame({0,0},boundary);finish(*operation);
        check(f.scene->completed_frames()==2 && boundary.publications==2 && f.clock.input_polls==1,
              "Resumed WAIT lost its next real NMI");
    }
    {
        Fixture f(version);f.start();Boundary boundary(f);
        f.clock.new_frame_started=3;boundary.fail_input=true;
        auto operation=f.scene->begin(story::TickKind::Frame);service(*operation,story::SceneService::Frame);
        rejects([&]{operation->complete_frame({0,0},boundary);},"Input failure was acknowledged");
        check(f.scene->failed() && f.scene->completed_frames()==0 && f.clock.new_frame_started==0 &&
              f.clock.input_polls==0 && boundary.reads==1 && boundary.publications==0,
              "Failed pending-frame input lost its consumed/poisoned state");
        rejects([&]{operation->complete_frame({0,0},boundary);},"Failed input was replayed");
        check(boundary.reads==1,"Poisoned scene repeated its input service");
    }
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
            battle_publication(region,2);battle_publication(region,4);
            raw_frame_phases(region);
            animation_continuations(region,2);animation_continuations(region,4);
        }
        std::cout<<"Native story scene: "<<checks<<" checks passed (real actor scripts, software rendering only)\n";
        return 0;
    } catch(const std::exception& error) {
        std::cerr<<"Native story scene after "<<checks<<" checks: "<<error.what()<<"\n";return 1;
    }
}
