// CPU-free opt-in acceptance of unchanged imported money-gift dialogue through
// actual party actors and UPDATE_PARTY. This is a prepared scene, not save/world
// startup, and audio responses record intents without claiming playback.
#include "eb/asset_store.hpp"
#include "eb/native/story/scene.hpp"
#include "eb/native/story/interaction_calls.hpp"
#include "eb/native/story/party_formation.hpp"
#include "eb/native/dialogue/import.hpp"
#include "eb/native/dialogue/fonts.hpp"
#include "eb/native/dialogue/window_graphics.hpp"
#include "eb/native/party/name_inputs.hpp"
#include "eb/native/party/dialogue_values.hpp"
#include "eb/native/party/inventory.hpp"
#include "eb/native/party/queries.hpp"
#include "generated_assets.hpp"
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <set>
#include <sstream>
#include <stdexcept>
#include <vector>

namespace {
using namespace eb::native;
namespace d=eb::native::dialogue;
namespace s=eb::native::story;
void require(bool condition,const char* message) {
    if(!condition)throw std::runtime_error(message);
}
std::string pixel_hash(const eb::DirectSceneFrame& frame) {
    const auto pixels=eb::rasterize_direct_scene({std::make_shared<const eb::DirectSceneFrame>(frame),{}});
    return eb::sha256({reinterpret_cast<const std::uint8_t*>(pixels.data()),pixels.size()*sizeof(pixels[0])});
}
std::string bytes_hex(std::span<const std::uint8_t> bytes) {
    std::ostringstream output;output<<std::hex<<std::setfill('0');
    for(auto value:bytes)output<<std::setw(2)<<unsigned(value);
    return output.str();
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
    WorldPartyData party_data;
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
        palette_data(a.image,world_palette_layout(a.version)),party_data(a.image,a.version) {
        // A deterministic real imported sector, without claiming this is the
        // authored NPC's world location or that activation has been ported.
        combination=map.sector(0,0).combination;
        camera_x=0;camera_y=0;
    }
};
struct Fixture {
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
    WorldPartyState formation_state;
    WorldParty updater;
    party::MovementPolicyState movement{1,0x1234,0x44};
    std::unique_ptr<npcs::Interactions> interactions;
    std::unique_ptr<s::PartyFormation> formation;
    // Bound owners above survive Scene destruction; no callback borrows a
    // later-destroyed Interactions, party, actor or formation object.
    std::unique_ptr<s::Scene> scene;
    std::vector<ActorId> members;
    ActorId target{};
    std::array<std::uint32_t,3> target_position{};
    unsigned artwork_copies{};

    Fixture(Resources& r,unsigned count,bool unconscious)
        : resources(r),party(r.assets.version),output(r.fonts,text),windows(r.windows,text,output),
          prompts(windows),graphics(std::make_shared<d::WindowGraphics>(r.initialization,output)),
          meters(windows,party,r.meters),inventory(party,r.substitutions,r.transformations,timers,random),
          actors(r.sprites,r.actions,r.assets.version),area(r.map.prepare(r.combination,std::vector<std::uint8_t>(8192))),
          palette(r.palette_data.resolve(r.palette_data.area_at(r.camera_x,r.camera_y),std::vector<std::uint8_t>(8192))),
          updater(party,actors,r.party_data,formation_state) {
        require(count==1||count==2,"Formation probe supports one or two real chosen actors");
        text.event_flags.resize(8192);text.unfocused_register_slot=0xffff;
        party.party_count=party.controlled_count=std::uint8_t(count);
        party.money_carried=100;
        for(unsigned i=0;i<count;++i) {
            party.party_order[i]=party.display_order[i]=std::uint8_t(i+1);
            party.controlled_order[i]=std::uint8_t(i);
        }
        for(unsigned id=1;id<=party::State::character_count;++id) {
            auto name=party.name_field(id);
            name[0]=std::uint8_t(0x61+id);name[1]=0x62;name[2]=0x63;name[3]=0;
            auto& value=party.character(id);
            value.maximum_hp=value.current_hp=value.target_hp=100;
            value.maximum_pp=value.current_pp=value.target_pp=20;
        }
        if(unconscious) {
            require(count==2,"Unconscious leader needs a second healthy character");
            party.character(1).afflictions[0]=1;
            party.character(1).current_hp=party.character(1).target_hp=0;
        }
        windows.substitutions().configure(r.substitutions,party::dialogue_values(party));
        windows.set_graphics(graphics);
        const party::PartyNameSnapshot names(party);graphics->prepare(names.inputs(),1);
        auto publication=graphics->begin_publication(r.assets.version==eb::GameVersion::US?
            d::ArtworkPublication::GeneratedThenCommon:d::ArtworkPublication::All);
        while(publication->advance()!=d::Progress::Finished) {
            require(publication->effect().has_value(),"Unexpected initial artwork wait");
            ++artwork_copies;publication->respond(d::ArtworkDisposition::Published);
        }
        windows.publish_palette(1,false,false);
        output.policy().instant=false;output.policy().text_speed=0;output.policy().sound_mode=2;
        windows.draw_tick();windows.publish_scene();
        actors.scene().camera_x=std::uint16_t(r.camera_x);actors.scene().camera_y=std::uint16_t(r.camera_y);
        interactions=std::make_unique<npcs::Interactions>(r.interactions,r.map_text,r.imported.program,
                                                         windows,actors,r.collision,area);
        for(unsigned i=0;i<count;++i) {
            const auto& initial=r.party_data.initial(i+1);
            require(initial.preferred_role==24+i,"Imported chosen actor role changed");
            PreparedActorState prepared;
            prepared.x=100;prepared.y=std::uint16_t(100+i*24);prepared.direction=0;
            prepared.variables[0]=std::uint16_t(i);prepared.variables[1]=std::uint16_t(i);
            prepared.variables[5]=std::uint16_t(0x100+i); // Detect the actual update, not only equal sort order.
            auto spec=make_actor_spec(initial.sprite,initial.script,prepared,*r.sprites,*r.actions);
            // Prepared post-startup visible pose; this fixture does not claim
            // to execute EVENT_002 initialization before the dialogue caller.
            spec.action.animation=0;
            const auto actor=actors.create_authored(spec,{initial.preferred_role,unsigned(initial.preferred_role)+1});
            require(actor.has_value(),"Actual chosen party role was occupied");
            members.push_back(*actor);
            actors.actor(*actor).appearance.select_eight(0,0);
            formation_state.roles[i]=initial.preferred_role;
            formation_state.trail_cursors[i]=std::uint16_t(10+i*20);
            interactions->attach(*actor,initial.preferred_role,
                actor_creation_metadata(*r.sprites,r.creation,initial.sprite),0x8000);
        }
        const unsigned npc=1495;
        const auto& definition=r.npcs.definition(npc);
        PreparedActorState prepared;prepared.x=100;prepared.y=90;prepared.direction=definition.direction;
        auto spec=make_actor_spec(definition.sprite,definition.script,prepared,*r.sprites,*r.actions,std::uint16_t(npc));
        spec.action.animation=0;
        const auto object=actors.create_authored(spec,{0,1});
        require(object.has_value(),"Actual gift object role was occupied");target=*object;
        auto& box=actors.actor(target);box.appearance.select_four(box.behavior.direction,0);
        box.action().velocity={0x12345,0x6789a,0xabcdef};target_position=box.action().position;
        interactions->attach(target,0,actor_creation_metadata(*r.sprites,r.creation,definition.sprite),std::uint16_t(npc));
        interactions->state().leader=members[0];
        interactions->state().leader_x=100;interactions->state().leader_y=100;interactions->state().leader_direction=0;
        interactions->state().walking_style=0; // The actual non-bicycle C02C3E branch.
        formation=std::make_unique<s::PartyFormation>(updater,party,actors,r.party_data,formation_state,
                                                    movement,*interactions,tick);
        scene=std::make_unique<s::Scene>(windows,party,random,meters,tick,input,actors,area,palette,s::SceneView{320,64,1});
        scene->bind_inventory(inventory);
        scene->bind_interactions(*interactions);
        scene->bind_party_formation(*formation);
    }
};
struct Case { const char* name;unsigned members;bool unconscious{}; };
void run(Resources& resources,const Case& c) {
    Fixture f(resources,c.members,c.unconscious);
    const bool jp=resources.assets.version==eb::GameVersion::JP;
    const auto& gift=resources.interactions->npc(1495);
    require(gift.raw_type==2&&gift.gift_value>256,"Imported NPC1495 is not the expected authored money box");
    const auto image_before=eb::sha256(resources.assets.image);
    const auto flags_before=f.text.event_flags;
    const auto fingerprint=f.actors.actor(f.target).appearance.fingerprint();
    const auto random_before=f.random;
    std::vector<std::vector<ActionTaskState>> script_roots;
    for(const auto member:f.members)script_roots.push_back(f.actors.actor(member).tasks());
    std::optional<ActorId> fading_actor;
    unsigned fade_reads{};
    // Prepared scene has no active fade. This explicit provider is not a native
    // fade implementation and does not infer completion from actor visibility.
    s::InteractionCalls caller(resources.imported.program,*f.interactions,f.prompts,*f.scene,
                               [&]{++fade_reads;return fading_actor.has_value();});
    auto operation=caller.begin_check_talk();
    unsigned frames{},visible_frames{},glyph_sounds{},caller_sounds{},open_frames{};
    std::vector<unsigned> command_sounds;
    std::set<std::string> window_hashes;
    std::string visible_scene_hash;
    std::shared_ptr<const eb::DirectSceneFrame> retained_frame;
    std::string retained_hash;
    bool done{};
    for(unsigned work=0;work<100000&&frames<10000;++work) {
        const auto progress=operation->advance(work&1?1:4096);
        if(progress==d::Progress::Finished){done=true;break;}
        if(progress==d::Progress::BudgetExhausted)continue;
        require(operation->service().has_value(),"Imported formation caller omitted its service");
        if(operation->service()==s::InteractionCallService::Sound) {
            require(operation->sound()==1,"Unexpected interaction cursor sound");
            ++caller_sounds;operation->respond_sound();continue;
        }
        require(operation->service()==s::InteractionCallService::Scene,"Unexpected unowned caller service");
        auto& pending=operation->scene_operation();
        if(pending.service()==s::SceneService::Frame) {
            pending.complete_frame({std::uint16_t((frames++&1)?0:0x80),0});
            if(f.actors.actor(f.target).behavior.direction==0)++open_frames;
            if(!f.windows.draw_order().empty()) {
                const auto frame=f.windows.frame();
                if(std::any_of(frame->pixels.begin(),frame->pixels.end(),[](auto pixel){return pixel!=0;})) {
                    ++visible_frames;
                    window_hashes.insert(eb::sha256({reinterpret_cast<const std::uint8_t*>(frame->pixels.data()),
                                                    frame->pixels.size()*sizeof(frame->pixels[0])}));
                    visible_scene_hash=pixel_hash(*f.scene->frame());
                    if(!retained_frame){retained_frame=f.scene->frame();retained_hash=pixel_hash(*retained_frame);}
                }
            }
        } else if(pending.service()==s::SceneService::ScriptSound) {
            const auto sound=pending.script_sound();
            require(sound.kind==d::ScriptSoundKind::QueueEffect&&sound.value!=0,"Unexpected authored sound command");
            command_sounds.push_back(sound.value);pending.respond_script_sound();
        } else if(pending.service()==s::SceneService::Dialogue) {
            const auto& event=*pending.dialogue_event();
            const auto* effect=std::get_if<d::TextEffect>(&event);
            if(!effect||effect->kind!=d::TextEffectKind::TextSound) {
                if(const auto* request=std::get_if<d::Request>(&event))
                    std::cerr<<"Unhandled imported request kind="<<unsigned(request->kind)<<" command="
                             <<unsigned(request->command)<<" selector="<<unsigned(request->selector)<<'\n';
                throw std::runtime_error("Imported money route exposed an unowned dialogue service");
            }
            ++glyph_sounds;pending.respond_dialogue({0,f.windows.prompt_state().pressed,f.input.held[0]});
        } else {
            std::cerr<<"Unexpected scene service="<<unsigned(*pending.service())<<'\n';
            throw std::runtime_error("Imported formation path did not complete its actual native service");
        }
    }
    require(done,"Imported formation route exceeded its explicit work/frame bound");
    require(operation->selected_reference()==gift.talk_reference,"Caller changed the actual NPC's imported script reference");
    require(frames>0&&visible_frames>0&&window_hashes.size()>1&&glyph_sounds>0&&open_frames>0,
            "Imported formation route produced no changing visible native text");
    require(command_sounds==std::vector<unsigned>{16,116}&&caller_sounds==1,"Gift audio intent order changed");
    require(fade_reads==1&&f.windows.draw_order().empty(),"Real caller cleanup/post-tick did not finish");
    require(f.party.money_carried==100u+unsigned(gift.gift_value)-256u,"Imported money amount changed");
    auto expected_flags=flags_before;const unsigned bit=gift.event_flag-1;
    expected_flags.at(bit/8)|=std::uint8_t(1u<<(bit&7));
    require(f.text.event_flags==expected_flags,"Imported route changed unexpected temporary or gift flags");
    require(f.actors.size()==c.members+1&&f.interactions->state().interacting_actor==f.target,
            "Formation fabricated or lost an actual actor");
    const auto& box=f.actors.actor(f.target);
    require(box.behavior.direction==0&&box.action().animation==0&&box.appearance.fingerprint()==fingerprint&&
            box.action().position==f.target_position&&box.action().velocity==std::array<std::uint32_t,3>{0x12345,0x6789a,0xabcdef},
            "Authored gift pose changed unrelated actual actor state");
    require(f.party.party_count==c.members&&f.party.controlled_count==c.members,"Formation changed membership count");
    for(unsigned i=0;i<c.members;++i) {
        require(f.party.party_order[i]==i+1,"Formation sorted the membership owner instead of display order");
        const unsigned record=(jp&&c.unconscious)?1-i:i;
        require(f.party.display_order[i]==record+1&&f.party.controlled_order[i]==record&&
                f.formation_state.roles[i]==24+record&&f.actors.actor_for_role(24+record)==f.members[record],
                "Formation failed to reorder actual role/record/display bindings together");
        const auto& actor=f.actors.actor(f.members[record]);
        require(actor.action().variables[0]==record&&actor.action().variables[1]==record&&
                actor.action().variables[5]==(jp?i*2:0x100+record),
                "Formation skipped or corrupted the real actor script binding publication");
        require(f.formation_state.trail_cursors[record]==10+i*20,"Formation lost source ordinal trail distance");
        const auto tasks=actor.tasks();
        require(tasks.size()==script_roots[record].size(),"Formation changed imported party task ownership");
        for(unsigned task=0;task<tasks.size();++task) {
            const auto& before=script_roots[record][task];const auto& after=tasks[task];
            require(before.id==after.id&&before.cursor==after.cursor&&before.temporary==after.temporary&&
                    before.sleep_frames==after.sleep_frames&&before.stack_depth==after.stack_depth,
                    "Formation replaced or ran an imported party action script while paused");
        }
    }
    const auto expected_leader=(jp&&c.unconscious)?f.members[1]:f.members[0];
    require(f.interactions->state().leader==expected_leader&&f.updater.leader()==expected_leader,
            "Scene interaction leader did not follow native party formation");
    require(f.movement==party::MovementPolicyState{std::uint16_t(jp?0:1),0x1234,0x44},
            "Formation failed its real non-bicycle movement policy or altered retained timer words");
    require(f.windows.palette()==resources.windows->palette(f.tick.flavor,jp&&c.unconscious,false),
            "Formation did not publish the last controlled character's actual palette");
    for(const auto actor:f.actors.actors())require(f.actors.actor(actor).scripts_and_physics_enabled&&
        f.actors.actor(actor).tick_callback_enabled,"Complete caller failed to resume actual actors");
    for(unsigned id=1;id<=party::State::character_count;++id)
        require(f.party.character(id).items==std::array<std::uint8_t,14>{},"Money script changed inventory");
    require(f.timers.loaded_count==0&&f.random!=random_before,"Money route fabricated timers or omitted source tick RNG");
    require(retained_frame&&pixel_hash(*retained_frame)==retained_hash,"Later formation frames mutated an immutable capture");
    require(eb::sha256(resources.assets.image)==image_before,"Probe changed imported authored content");
    const auto frame=f.scene->frame();
    const auto objects=std::count_if(frame->quads.begin(),frame->quads.end(),[](const auto& quad){return quad.object;});
    require(objects>=c.members+1,"Final native scene lacks actual party/gift artwork");
    for(const auto id:f.actors.actors())
        require(std::any_of(frame->quads.begin(),frame->quads.end(),[&](const auto& quad){
            return quad.object&&frame->motions.at(quad.motion).identity==id;
        }),"A live prepared party/gift actor has no published native artwork");
    std::cout<<"{\"region\":\""<<(jp?"JP":"US")<<"\",\"case\":\""<<c.name
             <<"\",\"completed\":true,\"npc\":1495,\"authored_reference\":\""<<bytes_hex(gift.talk_reference)
             <<"\",\"original_image_sha256\":\""<<image_before<<"\",\"gift\":"<<gift.gift_value
             <<",\"members\":"<<c.members<<",\"unconscious_first\":"<<(c.unconscious?"true":"false")
             <<",\"formation_executed\":"<<(jp?"true":"false")<<",\"frames\":"<<frames
             <<",\"actor_ticks\":"<<f.actors.ticks()<<",\"visible_text_frames\":"<<visible_frames
             <<",\"distinct_window_images\":"<<window_hashes.size()<<",\"glyph_sound_intents\":"<<glyph_sounds
             <<",\"caller_sound_intents\":"<<caller_sounds<<",\"command_sound_intents\":[16,116]"
             <<",\"fade_reads\":"<<fade_reads<<",\"open_pose_frames\":"<<open_frames
             <<",\"wallet\":"<<f.party.money_carried<<",\"gift_flag\":"<<gift.event_flag<<",\"final_pose\":"<<box.appearance.displayed()->pose
             <<",\"first_conscious\":"<<party::Queries(f.party).first_conscious()
             <<",\"conscious_count\":"<<party::Queries(f.party).conscious_count()
             <<",\"display_order\":\""<<bytes_hex(f.party.display_order)
             <<"\",\"controlled_order\":\""<<bytes_hex(f.party.controlled_order)<<"\",\"prepared_names\":[";
    for(unsigned i=1;i<=c.members;++i)std::cout<<(i>1?",":"")<<'"'<<bytes_hex(f.party.name_field(i))<<'"';
    std::cout<<"],\"object_quads\":"<<objects<<",\"last_visible_frame_sha256\":\""<<visible_scene_hash
             <<"\",\"final_frame_sha256\":\""<<pixel_hash(*frame)<<"\"}\n"<<std::flush;
}
} // namespace
int main(int argc,char** argv) {
    try {
        if(argc<2)throw std::invalid_argument("native_party_formation_assets pack.ebpak ...");
        unsigned completed{};
        for(int i=1;i<argc;++i) {
            const auto assets=eb::load_game_assets(argv[i],eb::asset_profiles());Resources resources(assets);
            if(assets.version==eb::GameVersion::JP) {
                for(const Case c:{Case{"money_one_healthy",1},Case{"money_two_healthy",2},
                                  Case{"money_first_unconscious",2,true}}){run(resources,c);++completed;}
            } else {run(resources,{"money_us_control",1});++completed;}
        }
        std::cout<<"{\"completed\":"<<completed<<",\"manual_formation_acknowledgments\":0}\n";
    } catch(const std::exception& error) {std::cerr<<error.what()<<'\n';return 1;}
}
