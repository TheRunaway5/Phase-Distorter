// CPU-free, opt-in gift probe. Imported dialogue/NPC/item content is unchanged.
// This explicitly prepared native scene is not a natural NPC/save bootstrap.
#include "eb/asset_store.hpp"
#include "eb/native/story/scene.hpp"
#include "eb/native/story/interaction_calls.hpp"
#include "eb/native/dialogue/import.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/window_graphics.hpp"
#include "eb/native/party/name_inputs.hpp"
#include "eb/native/party/dialogue_values.hpp"
#include "eb/native/party/inventory.hpp"
#include <set>
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
    std::shared_ptr<const party::ItemTransformationResources> transformations;
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
        transformations(party::ItemTransformationResources::import(a.image,a.version)),
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
    party::ItemTransformationState timers;
    party::Inventory inventory;
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
    explicit Run(Resources& r,unsigned members):resources(r),party(r.assets.version),output(r.fonts,text),
        windows(r.windows,text,output),prompts(windows),
        graphics(std::make_shared<d::WindowGraphics>(r.initialization,output)),meters(windows,party,r.meters),
        inventory(party,r.substitutions,r.transformations,timers,random),
        actors(r.sprites,r.actions,r.assets.version),area(r.map.prepare(r.combination,std::vector<std::uint8_t>(8192))),
        palette(r.palette_data.resolve(r.palette_data.area_at(r.camera_x,r.camera_y),std::vector<std::uint8_t>(8192))) {
        text.event_flags.resize(8192);text.unfocused_register_slot=0xffff;
        party.party_count=party.controlled_count=std::uint8_t(members);
        for(unsigned i=0;i<members;++i){party.party_order[i]=std::uint8_t(i+1);
            party.controlled_order[i]=std::uint8_t(i);party.display_order[i]=std::uint8_t(i+1);}
        // Formation/entity ownership is an explicit fixture precondition. It
        // is separate from membership and zero-based controlled records.
        party.party_status=0;party.money_carried=100;
        for(unsigned id=1;id<=party::State::character_count;++id) {
            // Explicit prepared names, not imported default save data. Three valid
            // regional encoded glyphs followed by zero retain exact raw fields.
            auto name=party.name_field(id);name[0]=std::uint8_t(0x61+id);
            name[1]=0x62;name[2]=0x63;name[3]=0;
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
        scene->bind_inventory(inventory);
    }
    void prepare(unsigned npc,bool already_open) {
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
            text.set_flag(resources.interactions->npc(npc).event_flag,already_open);
            actor.behavior.direction=already_open?0:definition.direction;
            actor.appearance.select_four(actor.behavior.direction,0);
            actor.action().velocity={0x12345,0x6789a,0xabcdef};target_position=actor.action().position;
            interactions->attach(target,1,actor_creation_metadata(*resources.sprites,resources.creation,definition.sprite),std::uint16_t(npc));
        }
        interactions->state().leader=leader;interactions->state().leader_x=100;interactions->state().leader_y=100;
        interactions->state().leader_direction=0;
    }

};
enum class Capacity { Room, Full, FirstFull };
struct Case {
    const char* label;
    unsigned npc, members;
    Capacity capacity = Capacity::Room;
    bool already_open = false;
};
struct Counts { unsigned completed{}, teddy_pending{}, formation_pending{}; };
std::array<std::array<std::uint8_t,14>,6> items(const party::State& state) {
    std::array<std::array<std::uint8_t,14>,6> result;
    for(unsigned i=0;i<result.size();++i)result[i]=state.character(i+1).items;
    return result;
}
std::string byte_hex(std::span<const std::uint8_t> bytes) {
    std::ostringstream result;result<<std::hex<<std::setfill('0');
    for(auto b:bytes)result<<std::setw(2)<<unsigned(b);
    return result.str();
}
void execute(Resources& r,const Case& c,Counts& counts) {
    Run f(r,c.members);f.prepare(c.npc,c.already_open);
    const auto& record=r.interactions->npc(c.npc);
    require(record.raw_type==2,"Selected imported NPC is not a gift object");
    if(c.capacity!=Capacity::Room)f.party.character(1).items.fill(90);
    if(c.capacity==Capacity::Full)
        for(unsigned i=2;i<=c.members;++i)f.party.character(i).items.fill(90);
    const auto before=items(f.party);const auto flags_before=f.text.event_flags;
    const auto random_before=f.random;
    const auto wallet_before=f.party.money_carried;
    const auto fingerprint=f.actors.actor(f.target).appearance.fingerprint();
    unsigned fade_reads{};
    // Actual fade/lifetime ownership is outside this prepared scene. The
    // explicit fixture state contains no actor with an active fade operation.
    std::optional<ActorId> fading_actor;
    s::InteractionCalls calls(r.imported.program,*f.interactions,f.prompts,*f.scene,
                             [&]{++fade_reads;return fading_actor.has_value();});
    auto operation=calls.begin_check_talk();
    unsigned caller_sounds{},glyph_sounds{},frames{},iterations{},visible_frames{},open_frames{},closed_frames{};
    std::vector<unsigned> command_sounds;
    std::set<std::string> window_images;
    std::string stop="work_limit",last_visible_frame;
    std::optional<d::Request> unhandled;
    std::optional<s::SceneService> pending;
    while(iterations++<100000 && frames<10000) {
        const auto progress=operation->advance(iterations&1?1:4096);
        if(progress==d::Progress::Finished){stop="finished";break;}
        if(progress==d::Progress::BudgetExhausted)continue;
        require(operation->service().has_value(),"Gift caller omitted its pending service");
        if(operation->service()==s::InteractionCallService::Sound) {
            require(operation->sound()==1,"Gift caller requested an unexpected cursor sound");
            ++caller_sounds;operation->respond_sound();continue;
        }
        auto& service=operation->scene_operation();
        if(service.service()==s::SceneService::Frame) {
            service.complete_frame({std::uint16_t((frames++&1)?0:0x0080),0});
            const auto& actor=f.actors.actor(f.target);
            if(actor.behavior.direction==0)++open_frames;else if(actor.behavior.direction==4)++closed_frames;
            if(!f.windows.draw_order().empty()) {
                const auto frame=f.windows.frame();
                if(std::any_of(frame->pixels.begin(),frame->pixels.end(),[](auto p){return p!=0;})) {
                    ++visible_frames;
                    window_images.insert(eb::sha256({reinterpret_cast<const std::uint8_t*>(frame->pixels.data()),
                                                    frame->pixels.size()*sizeof(frame->pixels[0])}));
                    last_visible_frame=pixels(*f.scene->frame());
                }
            }
        } else if(service.service()==s::SceneService::ScriptSound) {
            const auto sound=service.script_sound();
            require(sound.kind==d::ScriptSoundKind::QueueEffect && sound.value!=0,
                    "Authored common box requested an unexpected direct sound-driver command");
            // Record the audio intent only. Scene owns the following source
            // WorldTick; this probe supplies no audio playback or extra tick.
            command_sounds.push_back(sound.value);service.respond_script_sound();
        } else if(service.service()==s::SceneService::Dialogue) {
            const auto& event=*service.dialogue_event();
            if(const auto* effect=std::get_if<d::TextEffect>(&event);
               effect && effect->kind==d::TextEffectKind::TextSound) {
                ++glyph_sounds;service.respond_dialogue({0,f.windows.prompt_state().pressed,f.input.held[0]});
            } else {
                stop="pending_dialogue";
                if(const auto* request=std::get_if<d::Request>(&event))unhandled=*request;
                break;
            }
        } else {stop="pending_scene_service";pending=service.service();break;}
    }
    const auto& actor=f.actors.actor(f.target);
    const auto after=items(f.party);
    const bool finished=stop=="finished";
    const bool teddy=record.gift_value<256 && r.substitutions->item_properties(record.gift_value).type==4 &&
                     !c.already_open && c.capacity!=Capacity::Full;
    const bool jp_money=r.assets.version==eb::GameVersion::JP && record.gift_value>256 && !c.already_open;
    const bool refused=c.capacity==Capacity::Full && record.gift_value<256 && !c.already_open;
    const unsigned recipient=c.capacity==Capacity::FirstFull?2:1;
    if(!finished) {
        // These actual missing owners are left pending. Polling is not an
        // acknowledgment and may not grant the item twice or advance time.
        const auto flag_snapshot=f.text.event_flags;
        const auto frame_snapshot=f.scene->frame();
        const auto random_snapshot=f.random;
        for(unsigned budget:{0u,1u,4096u})
            require(operation->advance(budget)==d::Progress::Suspended && items(f.party)==after &&
                    f.text.event_flags==flag_snapshot && f.scene->frame()==frame_snapshot && f.random==random_snapshot,
                    "Pending gift service was silently acknowledged or performed twice");
    }
    const auto frame=f.scene->frame();
    const auto objects=std::count_if(frame->quads.begin(),frame->quads.end(),[](const auto& q){return q.object;});
    std::cout<<"{\"region\":\""<<(r.assets.version==eb::GameVersion::US?"US":"JP")<<"\",\"case\":\""<<c.label
      <<"\",\"npc\":"<<c.npc<<",\"authored_reference\":\""<<byte_hex(record.talk_reference)
      <<"\",\"gift\":"<<record.gift_value<<",\"flag\":"<<record.event_flag
      <<",\"stop\":\""<<stop<<"\",\"completed\":"<<(finished?"true":"false")
      <<",\"frames\":"<<frames<<",\"actor_ticks\":"<<f.actors.ticks()<<",\"visible_text_frames\":"<<visible_frames
      <<",\"distinct_window_images\":"<<window_images.size()<<",\"open_pose_frames\":"<<open_frames
      <<",\"closed_pose_frames\":"<<closed_frames<<",\"object_quads\":"<<objects
      <<",\"caller_sound_intents\":"<<caller_sounds<<",\"glyph_sound_intents\":"<<glyph_sounds
      <<",\"command_sound_intents\":[";
    for(unsigned i=0;i<command_sounds.size();++i)std::cout<<(i?",":"")<<command_sounds[i];
    std::cout<<"],\"fade_reads\":"<<fade_reads<<",\"wallet_before\":"<<wallet_before
      <<",\"wallet_after\":"<<f.party.money_carried<<",\"final_flag\":"<<(f.text.flag(record.event_flag)?"true":"false")
      <<",\"final_direction\":"<<actor.behavior.direction<<",\"final_pose\":"<<actor.appearance.displayed()->pose
      <<",\"loaded_transformations\":"<<f.timers.loaded_count<<",\"inventories\":[";
    for(unsigned i=0;i<after.size();++i)std::cout<<(i?",":"")<<'"'<<byte_hex(after[i])<<'"';
    std::cout<<"],\"prepared_names\":[";
    for(unsigned i=1;i<=c.members;++i)std::cout<<(i>1?",":"")<<'"'<<byte_hex(f.party.name_field(i))<<'"';
    std::cout<<"],\"last_visible_frame_sha256\":\""<<last_visible_frame
      <<"\",\"final_frame_sha256\":\""<<pixels(*frame)<<'"';
    if(pending)std::cout<<",\"pending_scene_service\":"<<unsigned(*pending);
    if(unhandled)std::cout<<",\"pending_request\":"<<unsigned(unhandled->kind)
                         <<",\"source\":"<<offset(unhandled->source)<<",\"command\":"<<unsigned(unhandled->command)
                         <<",\"selector\":"<<unsigned(unhandled->selector);
    std::cout<<"}\n"<<std::flush;

    require(operation->selected_reference()==record.talk_reference,"Gift caller changed the actual NPC's authored script");
    require(frames>0 && visible_frames>0 && window_images.size()>1 && objects>0 && glyph_sounds>0,
            "Gift script did not produce changing visible native text/actor frames");
    require(!command_sounds.empty(),"Authored gift omitted its explicit present-opening sound intent");
    // Original SFX::PRESENT_OPENED=16, SFX::TOOK_ITEM=116. The latter occurs
    // only after receipt/money wording completes, including its real services.
    const bool took=finished && !c.already_open && !refused && record.gift_value!=256;
    require(command_sounds==(took?std::vector<unsigned>{16,116}:std::vector<unsigned>{16}),
            "Authored gift emitted sound intents in a different source order");
    require(f.interactions->state().interacting_actor==f.target && f.interactions->state().current_event_flag==record.event_flag,
            "Gift script lost the actual selected actor/event flag");
    require(actor.action().position==f.target_position && actor.action().velocity==std::array<std::uint32_t,3>{0x12345,0x6789a,0xabcdef} &&
            actor.appearance.fingerprint()==fingerprint && actor.action().animation==0,
            "Gift route altered unrelated paused actor motion/animation state");
    auto expected=before;
    if(record.gift_value<256 && !c.already_open && !refused)expected[recipient-1][0]=std::uint8_t(record.gift_value);
    require(after==expected,"Authored gift receipt/capacity branch changed the wrong inventory");
    require(f.party.money_carried==wallet_before+((record.gift_value>256&&!c.already_open)?record.gift_value-256:0),
            "Authored gift money branch changed the wrong amount");
    require(f.text.flag(record.event_flag)==!refused && actor.behavior.direction==(refused?4:0),
            "Gift flag/actual actor pose did not follow open/refusal source commands");
    require(f.timers.loaded_count==0,"An ordinary authored box fabricated a transformation timer");
    // RAND advances through genuine ticks; this is not a timer-draw count proof.
    require(f.random!=random_before,"Full dialogue tick path omitted native random progression");
    if(teddy) {
        require(pending==s::SceneService::TeddyRefresh && !finished,"Teddy route fabricated complete formation work");
        ++counts.teddy_pending;
    } else if(jp_money) {
        require(unhandled && unhandled->command==0x1c && unhandled->selector==0x11 && !finished,
                "JP money route did not preserve its actual unowned formation/name command");
        ++counts.formation_pending;
    } else {
        require(finished,"Imported gift route stopped at an unexpected unhandled service");
        require(fade_reads==1 && f.windows.draw_order().empty(),"Completed gift omitted caller cleanup/post-tick/fade check");
        for(auto id:f.actors.actors())require(f.actors.actor(id).scripts_and_physics_enabled && f.actors.actor(id).tick_callback_enabled,
                                            "Completed caller did not resume its actual actors");
        auto expected_flags=flags_before;
        const unsigned bit=record.event_flag-1;
        if(!refused)expected_flags[bit/8]|=std::uint8_t(1u<<(bit&7));
        require(f.text.event_flags==expected_flags,"Completed gift leaked temporary script flags");
        ++counts.completed;
    }
}
} // namespace
int main(int argc,char** argv) {
    try {
        if(argc<2)throw std::invalid_argument("native_npc_gift_assets pack.ebpak ...");
        Counts counts;
        for(int i=1;i<argc;++i) {
            const auto a=eb::load_game_assets(argv[i],eb::asset_profiles());Resources r(a);
            unsigned gift_records{},transforming_boxes{};
            for(unsigned id=0;id<npcs::InteractionResources::npc_count;++id) {
                const auto& gift=r.interactions->npc(id);if(gift.raw_type!=2)continue;++gift_records;
                for(unsigned j=0;j<4;++j)if(r.transformations->record(j).item &&
                   gift.gift_value==r.transformations->record(j).item)++transforming_boxes;
            }
            std::cout<<"{\"region\":\""<<(a.version==eb::GameVersion::US?"US":"JP")
                     <<"\",\"original_image_sha256\":\""<<eb::sha256(a.image)
                     <<"\",\"authored_gift_records\":"<<gift_records
                     <<",\"authored_transforming_gifts\":"<<transforming_boxes<<"}\n";
            require(gift_records==177 && transforming_boxes==0,"Imported gift corpus changed; review its scope");
            for(const Case c:{Case{"present_item",1407,1},Case{"trash_item",1408,1},
                Case{"empty_trash",1410,1},Case{"chest_item",1474,1},Case{"casket_item",1434,1},
                Case{"already_open",1407,1,Capacity::Room,true},Case{"no_room",1407,1,Capacity::Full},
                Case{"first_full_second_room",1407,2,Capacity::FirstFull},Case{"money",1495,1},
                Case{"teddy_pending",1417,1}})execute(r,c,counts);
        }
        std::cout<<"{\"completed\":"<<counts.completed<<",\"teddy_pending\":"<<counts.teddy_pending
                 <<",\"formation_pending\":"<<counts.formation_pending<<"}\n";
    }catch(const std::exception& error){std::cerr<<error.what()<<'\n';return 1;}
}
