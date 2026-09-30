// CPU-free, opt-in local-pack probe. Imported dialogue is executed unchanged.
// This explicitly prepared native scene is not a natural NPC/save bootstrap.
#include "eb/asset_store.hpp"
#include "eb/native/story/scene.hpp"
#include "eb/native/npcs/talk.hpp"
#include "eb/native/dialogue/import.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/window_graphics.hpp"
#include "eb/native/party/name_inputs.hpp"
#include "eb/native/party/dialogue_values.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <stdexcept>

namespace {
using namespace eb::native;
namespace d=eb::native::dialogue;
namespace s=eb::native::story;
void require(bool value,const char* message) { if(!value) throw std::runtime_error(message); }
unsigned offset(d::Location p) { return (p.page<<16)|p.offset; }
std::string prefix(const d::Program& p,d::Location at) {
    std::ostringstream result;result<<std::hex<<std::setfill('0');
    for(unsigned i=0;i<16;++i) { if(i)result<<' ';result<<std::setw(2)<<unsigned(p.byte(at));at=d::Program::advance(at); }
    return result.str();
}
d::Location resolve(const d::Program& p,unsigned address) {
    const unsigned pointer=0xc00000+address;
    const auto at=p.resolve({std::uint8_t(pointer),std::uint8_t(pointer>>8),std::uint8_t(pointer>>16),0});
    require(at && offset(*at)==address,"Named imported entry did not resolve through the content whitelist");
    return *at;
}
std::string pixels(const eb::DirectSceneFrame& frame) {
    const auto raw=eb::rasterize_direct_scene({std::make_shared<const eb::DirectSceneFrame>(frame),{}});
    return eb::sha256({reinterpret_cast<const std::uint8_t*>(raw.data()),raw.size()*sizeof(raw[0])});
}
struct Resources {
    const eb::GameAssets& assets;
    d::ImportedProgram imported;
    std::shared_ptr<const d::FontResources> fonts;
    std::shared_ptr<const d::WindowResources> windows;
    std::shared_ptr<const d::WindowInitializationResources> initialization;
    std::shared_ptr<const party::MeterWindowResources> meters;
    std::shared_ptr<const d::SubstitutionResources> substitutions;
    std::shared_ptr<SpriteResources> sprites;
    std::shared_ptr<const ActionScriptData> actions;
    NpcCatalog npcs;
    ActorCreationData creation;
    WorldCollision collision;
    std::shared_ptr<const npcs::InteractionResources> interactions;
    std::shared_ptr<const npcs::MapTextResources> map_text;
    WorldMap map;
    WorldPalettes palette_data;
    unsigned camera_x{},camera_y{},combination{};
    explicit Resources(const eb::GameAssets& a):assets(a),imported(d::import_program(a.image,a.version)),
        fonts(d::FontResources::import(a.image,a.version)),windows(d::WindowResources::import(a.image,a.version)),
        initialization(d::WindowInitializationResources::import(a.image,a.version)),
        meters(party::MeterWindowResources::import(a.image,a.version)),
        substitutions(d::SubstitutionResources::import(a.image,a.version)),
        sprites(std::make_shared<SpriteResources>(a.image,sprite_catalog_layout(a.version))),
        actions(import_action_scripts(a.image,a.version)),npcs(a.image,npc_catalog_layout(a.version)),
        creation(import_actor_creation_data(a.image,a.version)),collision(a.image,world_collision_layout(a.version)),
        interactions(npcs::InteractionResources::import(a.image,a.version)),
        map_text(npcs::MapTextResources::import(a.image,a.version)),map(a.image,world_map_layout(a.version)),
        palette_data(a.image,world_palette_layout(a.version)) {
        // A deterministic real imported sector, without claiming this is the
        // authored NPC's world location or that activation has been ported.
        combination=map.sector(0,0).combination;
        camera_x=0;camera_y=0;
    }
};
struct Run {
    Resources& resources;
    party::State party;
    d::State text;
    d::TextOutput output;
    d::WindowHost windows;
    d::PromptHost prompts;
    std::shared_ptr<d::WindowGraphics> graphics;
    party::MeterWindows meters;
    s::RandomState random{0x1234,0xfedc};
    s::TickState tick;
    s::InputState input;
    ActorWorld actors;
    WorldMapArea area;
    AreaPalettes palette;
    std::unique_ptr<s::Scene> scene;
    std::unique_ptr<npcs::Talk> talk;
    ActorId leader{}, target{};
    std::array<std::uint32_t,3> target_position{};
    unsigned setup_artwork_copies{}, talk_frames{}, talk_effects{};
    explicit Run(Resources& r,unsigned first_party):resources(r),party(r.assets.version),output(r.fonts,text),
        windows(r.windows,text,output),prompts(windows),
        graphics(std::make_shared<d::WindowGraphics>(r.initialization,output)),meters(windows,party,r.meters),
        actors(r.sprites,r.actions,r.assets.version),area(r.map.prepare(r.combination,std::vector<std::uint8_t>(8192))),
        palette(r.palette_data.resolve(r.palette_data.area_at(r.camera_x,r.camera_y),std::vector<std::uint8_t>(8192))) {
        text.event_flags.resize(8192);text.unfocused_register_slot=0xffff;
        party.party_count=1;party.controlled_count=1;party.party_order[0]=std::uint8_t(first_party);
        party.controlled_order[0]=std::uint8_t(first_party-1);
        // Formation/entity ownership is an explicit fixture precondition. It
        // is separate from membership and zero-based controlled records.
        party.display_order[0]=std::uint8_t(first_party);party.party_status=0;
        for(unsigned id=1;id<=party::State::character_count;++id) {
            auto& member=party.character(id);member.maximum_hp=member.current_hp=member.target_hp=100;
            member.maximum_pp=member.current_pp=member.target_pp=20;
        }
        windows.substitutions().configure(r.substitutions,party::dialogue_values(party));
        windows.set_graphics(graphics);
        party::PartyNameSnapshot names(party);graphics->prepare(names.inputs(),1);
        auto art=graphics->begin_publication(r.assets.version==eb::GameVersion::US?
            d::ArtworkPublication::GeneratedThenCommon:d::ArtworkPublication::All);
        while(art->advance()!=d::Progress::Finished) {
            require(art->effect().has_value(),"Unexpected setup artwork wait");
            ++setup_artwork_copies;art->respond(d::ArtworkDisposition::Published);
        }
        windows.publish_palette(1,false,false);
        output.policy().instant=false;output.policy().text_speed=0;output.policy().sound_mode=2;
        windows.draw_tick();windows.publish_scene();
        actors.scene().camera_x=std::uint16_t(r.camera_x);actors.scene().camera_y=std::uint16_t(r.camera_y);
        scene=std::make_unique<s::Scene>(windows,party,random,meters,tick,input,actors,area,palette,s::SceneView{320,64,1});
    }
    d::Location select(unsigned npc) {
        const auto& definition=resources.npcs.definition(std::uint16_t(npc));
        PreparedActorState prepared;prepared.x=100;prepared.y=100;prepared.direction=2;
        // An explicit pre-existing party actor, independent of party spawning.
        auto spec=make_actor_spec(1,8,prepared,*resources.sprites,*resources.actions);
        spec.action.animation=0;leader=actors.create(spec);
        actors.actor(leader).appearance.select_eight(2,0);
        prepared.y=90;prepared.direction=std::uint16_t(definition.direction);
        spec=make_actor_spec(definition.sprite,definition.script,prepared,*resources.sprites,*resources.actions,
                             std::uint16_t(npc));
        spec.action.animation=0;target=actors.create(spec);
        auto& person=actors.actor(target);
        person.appearance.select_four(definition.direction,0);
        person.action().velocity={0x12345,0x6789a,0xabcdef};
        target_position=person.action().position;
        talk=std::make_unique<npcs::Talk>(resources.interactions,resources.map_text,resources.imported.program,
                                         windows,actors,resources.collision,area);
        talk->attach(leader,0,actor_creation_metadata(*resources.sprites,resources.creation,1),0x8000);
        talk->attach(target,1,actor_creation_metadata(*resources.sprites,resources.creation,definition.sprite),std::uint16_t(npc));
        talk->state().leader=leader;talk->state().leader_x=100;talk->state().leader_y=100;
        talk->state().leader_direction=0;
        // This explicit source caller operation pauses the actual scripts and
        // physics before window ticks. TALK_TO itself does not own that policy.
        talk->set_actors_paused(true);
        auto operation=talk->begin();
        for(unsigned calls=0;calls<100000;++calls) {
            const auto progress=operation->advance(1);
            if(progress==d::Progress::Finished)break;
            if(progress==d::Progress::BudgetExhausted)continue;
            require(operation->effect().has_value(),"Talk omitted its pending window service");
            ++talk_effects;
            auto service=scene->begin(*operation->effect());
            bool done=false;
            for(unsigned work=0;work<100000;++work) {
                const auto status=service->advance(1);
                if(status==d::Progress::Finished){done=true;break;}
                if(status==d::Progress::BudgetExhausted)continue;
                require(service->service()==s::SceneService::Frame,"Talk window requested an unowned service");
                ++talk_frames;service->complete_frame({0,0});
            }
            require(done,"Talk window did not finish");operation->respond();
        }
        require(operation->complete(),"Talk selection did not finish");
        require(talk->state().interacting_npc==npc && talk->state().interacting_actor==target &&
                talk->state().collision_actor==target,"Talk did not select the actual named ActorWorld NPC");
        require(person.action().position==target_position && person.action().velocity==std::array<std::uint32_t,3>{} &&
                person.behavior.direction==4 && actors.actor(leader).behavior.direction==0,
                "Talk changed position or failed to turn/stop the selected actors");
        require(operation->selection().reference==resources.interactions->npc(npc).talk_reference,
                "Talk did not return the imported NPC record's text reference");
        require(operation->selection().text.has_value(),"Authored person returned no text");
        require(windows.slot_for({1}).has_value(),"Talk did not open the standard text window");
        return *operation->selection().text;
    }
};
void execute(Resources& r,const char* label,unsigned address,unsigned first_party,unsigned npc) {
    Run f(r,first_party);
    const auto entry=f.select(npc);
    require(entry==resolve(*r.imported.program,address),"Selected NPC text differs from expected source label");
    for(unsigned i=0;i<16;++i)
        require(r.imported.program->byte(d::Program::advance(entry,i))==r.assets.image.at(address+i),
                "Imported named-entry prefix differs from the validated local image");
    if(std::string_view(label)=="MSG_ONET_DRUG_BOY")
        require(r.imported.program->byte(entry)==0x19 && r.imported.program->byte(d::Program::advance(entry))==0x10 &&
                r.imported.program->byte(d::Program::advance(entry,2))==1,"DRUG_BOY regional query prefix differs");
    d::Conversation conversation(r.imported.program,f.prompts);
    unsigned registers{},jumps{},returns{};
    conversation.observe([&](const d::Event& event){
        registers+=event.kind==d::EventKind::RegisterChanged;jumps+=event.kind==d::EventKind::Jump;
        returns+=event.kind==d::EventKind::Return;
    });
    conversation.start(entry);auto operation=f.scene->begin(conversation);
    unsigned audio_intents{},boundaries{},work_calls{};std::string stop="work_limit";
    std::optional<d::Request> unhandled;
    while(work_calls<100000) {
        ++work_calls;
        const auto progress=operation->advance(4096);
        if(progress==d::Progress::Finished){stop="finished";break;}
        if(progress==d::Progress::BudgetExhausted)continue;
        require(operation->service().has_value(),"Suspended native scene omitted its service");
        if(operation->service()==s::SceneService::Frame) {
            // Scripted raw press/release at actual frame boundaries. This is
            // explicit test input, never a parser-budget or render-sample tick.
            operation->complete_frame({std::uint16_t((boundaries++&1)?0:0x0080),0});
        } else if(operation->service()==s::SceneService::Dialogue) {
            const auto& event=*operation->dialogue_event();
            if(const auto* effect=std::get_if<d::TextEffect>(&event);
               effect && effect->kind==d::TextEffectKind::TextSound) {
                // Records delivery of the audio intent only. No PCM/audio
                // engine is attached and no playback equivalence is claimed.
                ++audio_intents;
                operation->respond_dialogue({0,f.windows.prompt_state().pressed,f.input.held[0]});
            } else {
                stop="unhandled_dialogue";
                if(const auto* request=std::get_if<d::Request>(&event))unhandled=*request;
                break;
            }
        } else {stop="unhandled_scene_service";break;}
    }
    const auto snapshot=conversation.snapshot();
    require(f.actors.actor(f.target).action().position==f.target_position,"Paused target moved during dialogue");
    f.talk->set_actors_paused(false);
    for(auto id:f.actors.actors())require(f.actors.actor(id).scripts_and_physics_enabled &&
        f.actors.actor(id).tick_callback_enabled,"Explicit caller resume omitted a live actor");
    const auto frame=f.scene->frame();require(bool(frame),"Dialogue omitted its completed scene frame");
    const auto objects=std::count_if(frame->quads.begin(),frame->quads.end(),[](const auto& q){return q.object;});
    require(objects>0,"Actual NPC/leader sprites did not reach scene artwork");
    std::cout<<"{\"region\":\""<<(r.assets.version==eb::GameVersion::US?"US":"JP")<<"\",\"entry\":\""<<label
      <<"\",\"entry_offset\":"<<address<<",\"prefix16\":\""<<prefix(*r.imported.program,entry)<<"\",\"first_party\":"<<first_party
      <<",\"stop\":\""<<stop<<"\",\"consumed_bytes\":"<<snapshot.consumed_bytes<<",\"work_calls\":"<<work_calls
      <<",\"frames\":"<<f.scene->completed_frames()<<",\"actor_ticks\":"<<f.actors.ticks()<<",\"actor_count\":"<<f.actors.size()
      <<",\"npc\":"<<npc<<",\"target_actor\":"<<f.target<<",\"object_quads\":"<<objects
      <<",\"talk_effects\":"<<f.talk_effects<<",\"talk_frames\":"<<f.talk_frames
      <<",\"audio_intents\":"<<audio_intents<<",\"register_events\":"<<registers<<",\"jumps\":"<<jumps<<",\"returns\":"<<returns
      <<",\"working\":"<<f.text.window().active.working<<",\"setup_artwork_copies\":"<<f.setup_artwork_copies
      <<",\"map_combination\":"<<r.combination<<",\"frame_sha256\":\""<<pixels(*f.scene->frame())<<"\"";
    if(unhandled)std::cout<<",\"request_kind\":"<<unsigned(unhandled->kind)<<",\"request_source\":"<<offset(unhandled->source)
      <<",\"command\":"<<unsigned(unhandled->command)<<",\"selector\":"<<unsigned(unhandled->selector)<<",\"request_count\":"<<unhandled->count;
    if(!snapshot.frames.empty() && snapshot.frames.back().cursor)
        std::cout<<",\"cursor\":"<<offset(*snapshot.frames.back().cursor);
    if(snapshot.returned_cursor)std::cout<<",\"returned_cursor\":"<<offset(*snapshot.returned_cursor);
    std::cout<<"}\n";
    require(stop=="finished","Named imported dialogue did not complete; inspect the recorded pending service");
    require(returns==1 && boundaries>0 && audio_intents>0,
            "Named imported dialogue completion did not exercise its visible/tick/audio path");
    if(std::string_view(label)=="MSG_ONET_DRUG_BOY")
        require(registers==2 && f.text.window().active.working==unsigned(first_party==1) &&
                jumps==unsigned(first_party!=1),"DRUG_BOY did not execute the selected authored party-query branch");
    // Unsupported requests intentionally remain unacknowledged. Destruction
    // invalidates this local continuation, never invents a service result.
}
} // namespace
int main(int argc,char** argv) {
    try {
        if(argc<2)throw std::invalid_argument("native_npc_talk_assets pack.ebpak ...");
        for(int i=1;i<argc;++i) {
            const auto a=eb::load_game_assets(argv[i],eb::asset_profiles());Resources r(a);
            const bool us=a.version==eb::GameVersion::US;
            std::cout<<"{\"region\":\""<<(us?"US":"JP")<<"\",\"original_image_sha256\":\""<<eb::sha256(a.image)<<"\"}\n";
            execute(r,"MSG_ONET_DRUG_BOY",us?0x74e8f:0x58288,1,10);
            execute(r,"MSG_ONET_DRUG_BOY",us?0x74e8f:0x58288,2,10);
            execute(r,"MSG_ONET_SHARK_INFO_FRANK",us?0x74ba9:0x58000,1,163);
        }
    }catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}
}
