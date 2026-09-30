// CPU-free, opt-in local-pack probe. Imported dialogue is executed unchanged.
// This explicitly prepared native scene is not a natural NPC/save bootstrap.
#include "eb/asset_store.hpp"
#include "eb/native/story/scene.hpp"
#include "eb/native/story/interaction_calls.hpp"
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
    std::unique_ptr<npcs::Interactions> interactions;
    std::unique_ptr<s::Scene> scene;
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
    void prepare(unsigned npc) {
        PreparedActorState prepared;prepared.x=100;prepared.y=100;prepared.direction=2;
        auto spec=make_actor_spec(1,8,prepared,*resources.sprites,*resources.actions);
        spec.action.animation=0;leader=actors.create(spec);
        actors.actor(leader).appearance.select_eight(2,0);
        interactions=std::make_unique<npcs::Interactions>(resources.interactions,resources.map_text,resources.imported.program,
                                         windows,actors,resources.collision,area);
        interactions->attach(leader,0,actor_creation_metadata(*resources.sprites,resources.creation,1),0x8000);
        if(npc) {
            const auto& definition=resources.npcs.definition(std::uint16_t(npc));
            prepared.y=90;prepared.direction=std::uint16_t(definition.direction);
            spec=make_actor_spec(definition.sprite,definition.script,prepared,*resources.sprites,*resources.actions,
                                 std::uint16_t(npc));
            spec.action.animation=0;target=actors.create(spec);auto& actor=actors.actor(target);
            actor.appearance.select_four(definition.direction,0);
            actor.action().velocity={0x12345,0x6789a,0xabcdef};target_position=actor.action().position;
            interactions->attach(target,1,actor_creation_metadata(*resources.sprites,resources.creation,definition.sprite),std::uint16_t(npc));
        }
        interactions->state().leader=leader;interactions->state().leader_x=100;interactions->state().leader_y=100;
        interactions->state().leader_direction=0;
    }

};
d::ReferenceKey key(unsigned address) {
    return {std::uint8_t(address),std::uint8_t(address>>8),std::uint8_t(address>>16),std::uint8_t(address>>24)};
}
void execute(Resources& r,const char* label,unsigned address,unsigned first_party,unsigned npc,unsigned queued=0) {
    Run f(r,first_party);f.prepare(npc);
    unsigned setup_effects{};
    if(queued) {
        // The queue caller's upstream window is an explicit precondition.
        auto open=f.windows.begin({d::WindowAction::Open,d::WindowId{1},{},0});
        while(open->advance()!=d::OutputProgress::Complete) {
            auto service=f.scene->begin(*open->effect());
            require(service->advance()==d::Progress::Finished,"Queued setup window unexpectedly required a frame");
            ++setup_effects;open->respond();
        }
    }
    unsigned fade_reads{};std::optional<ActorId> fading_actor;
    s::InteractionCalls calls(r.imported.program,*f.interactions,f.prompts,*f.scene,[&]{++fade_reads;return fading_actor.has_value();});
    npcs::InteractionQueueState queue_state;npcs::DadPhoneState phone{1234,1};
    npcs::InteractionQueue queue(r.assets.version,queue_state,f.actors.appearance_scene().intangibility_ticks,phone);
    if(queued==2) {
        f.actors.appearance_scene().intangibility_ticks=1;
        require(queue.enqueue(address?0:8,key(address)),"Prepared queue event was suppressed");
    }
    auto operation=queued==2?calls.begin_process_queue(queue):queued?calls.begin_queued_text(key(address)):calls.begin_check_talk();
    unsigned audio_intents{},caller_sounds{},boundaries{},work_calls{},last_working{},visible_text_frames{};
    std::string stop="work_limit",last_text_frame;std::optional<d::Request> unhandled;
    while(work_calls++<100000) {
        const auto progress=operation->advance(work_calls&1?1:4096);
        if(progress==d::Progress::Finished){stop="finished";break;}
        if(progress==d::Progress::BudgetExhausted)continue;
        require(operation->service().has_value(),"Interaction caller omitted its service");
        if(operation->service()==s::InteractionCallService::Sound) {
            require(operation->sound()==1,"CheckTalk caller requested a different cursor sound");
            ++caller_sounds;operation->respond_sound();continue;
        }
        auto& service=operation->scene_operation();
        if(service.service()==s::SceneService::Frame) {
            service.complete_frame({std::uint16_t((boundaries++&1)?0:0x0080),0});
            if(f.windows.slot_for({1})) {
                last_working=f.text.windows.at({1}).active.working;
                const auto window=f.windows.frame();
                if(std::any_of(window->pixels.begin(),window->pixels.end(),[](auto pixel){return pixel!=0;})) {
                    ++visible_text_frames;last_text_frame=pixels(*f.scene->frame());
                }
            }
        } else if(service.service()==s::SceneService::Dialogue) {
            const auto& event=*service.dialogue_event();
            if(const auto* effect=std::get_if<d::TextEffect>(&event);
               effect&&effect->kind==d::TextEffectKind::TextSound) {
                ++audio_intents;service.respond_dialogue({0,f.windows.prompt_state().pressed,f.input.held[0]});
            } else {
                stop="unhandled_dialogue";
                if(const auto* request=std::get_if<d::Request>(&event))unhandled=*request;
                break;
            }
        } else {stop="unhandled_scene_service";break;}
    }
    const auto frame=f.scene->frame();require(bool(frame),"Caller omitted its completed scene frame");
    const auto objects=std::count_if(frame->quads.begin(),frame->quads.end(),[](const auto& q){return q.object;});
    std::cout<<"{\"region\":\""<<(r.assets.version==eb::GameVersion::US?"US":"JP")<<"\",\"entry\":\""<<label
      <<"\",\"queued\":"<<queued<<",\"npc\":"<<npc<<",\"first_party\":"<<first_party
      <<",\"stop\":\""<<stop<<"\",\"frames\":"<<f.scene->completed_frames()<<",\"actor_ticks\":"<<f.actors.ticks()
      <<",\"actor_count\":"<<f.actors.size()<<",\"object_quads\":"<<objects<<",\"caller_sounds\":"<<caller_sounds
      <<",\"audio_intents\":"<<audio_intents<<",\"fade_reads\":"<<fade_reads<<",\"visible_text_frames\":"<<visible_text_frames
      <<",\"last_working\":"<<last_working<<",\"windows_left\":"<<f.windows.draw_order().size()<<",\"setup_effects\":"<<setup_effects
      <<",\"text_frame_sha256\":\""<<last_text_frame<<"\",\"final_frame_sha256\":\""<<pixels(*frame)<<"\"";
    if(unhandled)std::cout<<",\"request_kind\":"<<unsigned(unhandled->kind)<<",\"source\":"<<offset(unhandled->source)
                         <<",\"command\":"<<unsigned(unhandled->command)<<",\"selector\":"<<unsigned(unhandled->selector);
    std::cout<<"}\n";
    require(stop=="finished","Imported interaction did not finish; its pending service was preserved");
    require(operation->selected_reference()==key(address),"Caller did not select the expected original reference");
    require(fade_reads==1 && boundaries>0 && objects>0,"Caller omitted post-dialogue tick/fade read or actual actor artwork");
    if(queued==2)require(queue_state.current==1 && queue_state.next==1 && queue_state.pending==0 &&
                         queue_state.current_type==0xffff && f.actors.appearance_scene().intangibility_ticks==0 &&
                         phone==npcs::DadPhoneState{1234,1},"Connected queue did not publish original consumer state");
    require(caller_sounds==unsigned(!queued),"Quick/queued caller sound policy differs");
    require(queued?!f.windows.draw_order().empty():f.windows.draw_order().empty(),"Quick/queued window cleanup policy differs");
    if(address)require(visible_text_frames>0 && audio_intents>0,"Authored text had no visible or sound-intent path");
    for(auto id:f.actors.actors())require(f.actors.actor(id).scripts_and_physics_enabled&&f.actors.actor(id).tick_callback_enabled,
                                        "Caller did not resume live actor controls");
    if(npc) {
        const auto& actor=f.actors.actor(f.target);
        require(actor.action().position==f.target_position,"Paused actor moved during interaction");
        require(f.interactions->state().interacting_actor==f.target,"Quick interaction did not use the actual target actor");
        if(r.interactions->npc(npc).raw_type==1)require(actor.action().velocity==std::array<std::uint32_t,3>{}&&actor.behavior.direction==4,
                                                       "Talk did not turn/stop its person");
        else require(actor.action().velocity==std::array<std::uint32_t,3>{0x12345,0x6789a,0xabcdef},"Check changed object velocity");
    }
    if(std::string_view(label)=="MSG_ONET_DRUG_BOY")require(last_working==unsigned(first_party==1),"DrugBoy caller branch differs");
}
} // namespace
int main(int argc,char** argv) {
    try {
        if(argc<2)throw std::invalid_argument("native_interaction_calls_assets pack.ebpak ...");
        for(int i=1;i<argc;++i) {
            const auto a=eb::load_game_assets(argv[i],eb::asset_profiles());Resources r(a);
            const bool us=a.version==eb::GameVersion::US;
            std::cout<<"{\"region\":\""<<(us?"US":"JP")<<"\",\"original_image_sha256\":\""<<eb::sha256(a.image)<<"\"}\n";
            execute(r,"MSG_ONET_DRUG_BOY",us?0xc74e8f:0xc58288,1,10);
            execute(r,"MSG_ONET_DRUG_BOY",us?0xc74e8f:0xc58288,2,10);
            execute(r,"MSG_ONET_SHARK_INFO_FRANK",us?0xc74ba9:0xc58000,1,163);
            execute(r,"MSG_ONET_CHECK_DONTENTER",us?0xc67bad:0xc5e2a6,1,185);
            execute(r,"MSG_SYS_NOPROBLEM",us?0xc7c59e:0xc925b8,1,0);
            execute(r,"MSG_SYS_NOPROBLEM",us?0xc7c59e:0xc925b8,1,0,true);
            execute(r,"NULL",0,1,0,true);
            execute(r,"MSG_SYS_NOPROBLEM",us?0xc7c59e:0xc925b8,1,0,2);
            execute(r,"NULL",0,1,0,2);
        }
    }catch(const std::exception& e){std::cerr<<e.what()<<'\n';return 1;}
}
