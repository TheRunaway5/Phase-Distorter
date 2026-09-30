// CPU-free opt-in acceptance of unchanged imported Teddy gift dialogue through
// actual receipt, actor creation/removal and formation. Prepared visible poses
// do not claim natural EVENT_002/world startup. Audio records intents only.
#include "eb/asset_store.hpp"
#include "eb/native/story/scene.hpp"
#include "eb/native/story/interaction_calls.hpp"
#include "eb/native/story/teddy_party.hpp"
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
    PreparedActorState prepared;
    PartyTrail trail;
    std::uint16_t area_style{};
    std::unique_ptr<s::TeddyParty> teddy;
    // Bound owners above survive Scene destruction; no callback borrows a
    // later-destroyed Interactions, party, actor or formation object.
    std::unique_ptr<s::Scene> scene;
    std::vector<ActorId> members;
    ActorId target{};
    std::array<std::uint32_t,3> target_position{};
    unsigned artwork_copies{};

    Fixture(Resources& r,unsigned npc)
        : resources(r),party(r.assets.version),output(r.fonts,text),windows(r.windows,text,output),
          prompts(windows),graphics(std::make_shared<d::WindowGraphics>(r.initialization,output)),
          meters(windows,party,r.meters),inventory(party,r.substitutions,r.transformations,timers,random),
          actors(r.sprites,r.actions,r.assets.version),area(r.map.prepare(r.combination,std::vector<std::uint8_t>(8192))),
          palette(r.palette_data.resolve(r.palette_data.area_at(r.camera_x,r.camera_y),std::vector<std::uint8_t>(8192))),
          updater(party,actors,r.party_data,formation_state) {
        constexpr unsigned count=1;
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
        const auto& definition=r.npcs.definition(npc);
        PreparedActorState gift_prepared;gift_prepared.x=100;gift_prepared.y=90;gift_prepared.direction=definition.direction;
        auto spec=make_actor_spec(definition.sprite,definition.script,gift_prepared,*r.sprites,*r.actions,std::uint16_t(npc));
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
        trail.points[9]={100,124,0,0,0,0};
        teddy=std::make_unique<s::TeddyParty>(party,actors,r.party_data,formation_state,updater,
            prepared,trail,area_style,*formation,r.substitutions,*interactions,*r.sprites,r.creation);
        scene=std::make_unique<s::Scene>(windows,party,random,meters,tick,input,actors,area,palette,s::SceneView{320,64,1});
        scene->bind_inventory(inventory);
        scene->bind_interactions(*interactions);
        scene->bind_party_formation(*formation);scene->bind_teddy_party(*teddy);
    }
};
struct Case { const char* name;unsigned gift;unsigned initial_item{}; };
unsigned gift_npc(Resources& r,unsigned item) {
    if(item==2) {
        const auto& npc=r.interactions->npc(1417);
        require(npc.raw_type==2&&npc.gift_value==2,"Imported NPC1417 changed its Teddy item");return 1417;
    }
    for(unsigned id=0;id<npcs::InteractionResources::npc_count;++id) {
        const auto& npc=r.interactions->npc(id);
        if(npc.raw_type==2&&npc.gift_value==item&&npc.event_flag)return id;
    }
    throw std::runtime_error("Imported table has no requested authored Teddy box");
}
void reconcile(Fixture& f) {
    auto operation=f.teddy->begin();
    require(operation->advance()==d::Progress::Finished,"Non-bicycle reconciliation exposed unowned work");
}
void pose(Fixture& f,ActorId id) {
    // Explicit fixture-only post-startup artwork. The retained EVENT_002 task
    // cursor is untouched; this does not execute or prove party startup.
    auto& actor=f.actors.actor(id);actor.action().animation=0;
    actor.appearance.select_eight(0,0);
}
void run(Resources& resources,const Case& c) {
    const auto npc=gift_npc(resources,c.gift);
    Fixture f(resources,npc);
    const bool jp=resources.assets.version==eb::GameVersion::JP;
    const auto& gift=resources.interactions->npc(npc);
    const auto properties=resources.substitutions->item_properties(c.gift);
    require(properties.type==4&&properties.parameters[0]==(c.gift==2?16:17),"Imported Teddy metadata changed");
    std::optional<ActorId> initial_actor;
    if(c.initial_item) {
        f.party.character(1).items[0]=std::uint8_t(c.initial_item);reconcile(f);
        initial_actor=f.actors.actor_for_role(28);require(initial_actor.has_value(),"Prepared prior Teddy was not created");
        pose(f,*initial_actor);f.interactions->set_actors_paused(false);
    }
    const auto image_before=eb::sha256(resources.assets.image);
    const auto flags_before=f.text.event_flags;
    const auto box_fingerprint=f.actors.actor(f.target).appearance.fingerprint();
    const auto old_tasks=f.actors.actor(f.members[0]).tasks();
    const auto random_before=f.random;
    const auto timers=f.timers;
    const auto inventory_before=f.party.character(1).items;
    const unsigned selected=(c.gift==3||c.initial_item==3)?17:16;
    const bool replaces=c.initial_item==2&&c.gift==3;
    const bool creates=!c.initial_item||replaces;
    std::optional<ActorId> teddy_actor=initial_actor;
    std::vector<ActionTaskState> teddy_tasks;
    unsigned prepared_poses=initial_actor?1:0,paused_observations{},metadata_observations{};
    unsigned fade_reads{};
    s::InteractionCalls caller(resources.imported.program,*f.interactions,f.prompts,*f.scene,
                               [&]{++fade_reads;return false;});
    auto operation=caller.begin_check_talk();
    unsigned frames{},visible_frames{},glyph_sounds{},caller_sounds{},open_frames{};
    std::vector<unsigned> command_sounds;
    std::set<std::string> window_hashes;
    std::shared_ptr<const eb::DirectSceneFrame> retained_frame;
    std::string retained_hash,visible_hash;
    bool done{};
    for(unsigned work=0;work<100000&&frames<10000;++work) {
        const auto progress=operation->advance(work&1?1:4096);
        const auto actual=f.actors.actor_for_role(28);
        if(actual&&actual!=teddy_actor) {
            teddy_actor=actual;const auto& actor=f.actors.actor(*actual);
            require(!actor.tick_callback_enabled&&!actor.scripts_and_physics_enabled,
                    "New actor was not paused after real wrapper completion");
            require(f.interactions->body(*actual).npc_id==0xffff,"New actor lacks actual creation collision metadata");
            teddy_tasks=actor.tasks();++metadata_observations;
            pose(f,*actual);++prepared_poses;
        }
        if(actual&&progress!=d::Progress::Finished) {
            const auto& actor=f.actors.actor(*actual);
            // The caller's final raw tick follows its explicit resume. Only
            // count observations that precede that source boundary.
            if(!actor.tick_callback_enabled&&!actor.scripts_and_physics_enabled)++paused_observations;
        }
        if(progress==d::Progress::Finished){done=true;break;}
        if(progress==d::Progress::BudgetExhausted)continue;
        require(operation->service().has_value(),"Imported Teddy caller omitted its service");
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
                    visible_hash=pixel_hash(*f.scene->frame());
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
                throw std::runtime_error("Imported Teddy route exposed an unowned dialogue service");
            }
            ++glyph_sounds;pending.respond_dialogue({0,f.windows.prompt_state().pressed,f.input.held[0]});
        } else {
            std::cerr<<"Unexpected scene service="<<unsigned(*pending.service())<<'\n';
            throw std::runtime_error("Imported Teddy path did not complete its actual native service");
        }
    }
    require(done&&teddy_actor,"Imported Teddy route failed to complete actual membership lifecycle");
    require(operation->selected_reference()==gift.talk_reference,"Caller changed NPC's original imported script reference");
    require(frames>0&&visible_frames>0&&window_hashes.size()>1&&glyph_sounds>0&&open_frames>0&&paused_observations>0,
            "Imported Teddy route produced no changing text or paused actor evidence");
    require(command_sounds==std::vector<unsigned>{16,116}&&caller_sounds==1,"Gift audio intent order changed");
    require(fade_reads==1&&f.windows.draw_order().empty(),"Real caller cleanup/post-tick did not finish");
    require(f.party.money_carried==100,"Teddy gift unexpectedly changed money");
    auto expected_flags=flags_before;const unsigned bit=gift.event_flag-1;
    expected_flags.at(bit/8)|=std::uint8_t(1u<<(bit&7));
    require(f.text.event_flags==expected_flags,"Imported Teddy route changed unexpected flags");
    auto expected_items=inventory_before;expected_items[c.initial_item?1:0]=std::uint8_t(c.gift);
    require(f.party.character(1).items==expected_items,"Receipt omitted or reordered the authored item");
    require(f.party.party_count==2&&f.party.controlled_count==1&&f.party.party_order[0]==1&&
            f.party.party_order[1]==selected&&f.party.display_order[1]==selected&&
            f.party.controlled_order[1]==4&&f.formation_state.roles[1]==28&&f.actors.size()==3,
            "Actual actor, membership, formation and mapped guest record diverged");
    require(f.formation_state.first_guest.member==selected&&
            f.formation_state.first_guest.hp==resources.party_data.guest_hp(selected),"Guest HP source publication changed");
    const auto& actor=f.actors.actor(*teddy_actor);
    require(actor.action().variables[0]==selected-1&&actor.action().variables[1]==4&&
            actor.action().variables[5]==2&&f.interactions->body(*teddy_actor).npc_id==0xffff,
            "Created Teddy lacks native task variables or collision identity");
    const auto metadata=actor_creation_metadata(*resources.sprites,resources.creation,
                                               resources.party_data.initial(selected).sprite);
    require(f.interactions->body(*teddy_actor).hitbox_enabled==metadata.collision_profile,
            "Created Teddy collision selector differs from its actual imported sprite metadata");
    require(f.interactions->state().leader==f.members[0]&&f.updater.leader()==f.members[0]&&
            f.movement==party::MovementPolicyState{0,0x1234,0x44},"Actual formation leader/movement tail missing");
    require(f.windows.palette()==resources.windows->palette(f.tick.flavor,false,false),"Actual palette tail missing");
    if(creates)require(metadata_observations==1,"Actor creation happened more than once or was missed");
    else require(teddy_actor==initial_actor&&metadata_observations==0,"Already-present Teddy was recreated");
    if(replaces) {
        bool removed=false;try{f.interactions->body(*initial_actor);}catch(const std::exception&){removed=true;}
        require(removed&&teddy_actor!=initial_actor,"Superseded Teddy retained actor/interaction ownership");
    }
    for(const auto id:f.actors.actors())require(f.actors.actor(id).scripts_and_physics_enabled&&
        f.actors.actor(id).tick_callback_enabled,"Complete caller failed to resume actual actors");
    const auto tasks=f.actors.actor(f.members[0]).tasks();
    require(tasks.size()==old_tasks.size(),"Dialogue changed chosen actor task ownership");
    for(unsigned i=0;i<tasks.size();++i)require(tasks[i].id==old_tasks[i].id&&tasks[i].cursor==old_tasks[i].cursor&&
        tasks[i].sleep_frames==old_tasks[i].sleep_frames,"Paused dialogue ran the chosen action script");
    if(creates) {
        const auto tasks=actor.tasks();require(tasks.size()==teddy_tasks.size(),"New Teddy task ownership changed");
        for(unsigned i=0;i<tasks.size();++i)require(tasks[i].id==teddy_tasks[i].id&&tasks[i].cursor==teddy_tasks[i].cursor&&
            tasks[i].sleep_frames==teddy_tasks[i].sleep_frames,"Paused dialogue ran new EVENT_002 startup");
    }
    const auto& box=f.actors.actor(f.target);
    require(box.behavior.direction==0&&box.action().animation==0&&box.appearance.fingerprint()==box_fingerprint&&
            box.action().position==f.target_position&&box.action().velocity==std::array<std::uint32_t,3>{0x12345,0x6789a,0xabcdef},
            "Authored gift pose changed unrelated actual actor state");
    require(f.timers==timers&&f.random!=random_before,"Teddy receipt fabricated timers or omitted source tick RNG");
    require(retained_frame&&pixel_hash(*retained_frame)==retained_hash,"Later Teddy frames mutated a retained capture");
    require(eb::sha256(resources.assets.image)==image_before,"Probe changed imported authored content");
    const auto frame=f.scene->frame();
    const auto objects=std::count_if(frame->quads.begin(),frame->quads.end(),[](const auto& quad){return quad.object;});
    for(const auto id:f.actors.actors())require(std::any_of(frame->quads.begin(),frame->quads.end(),[&](const auto& quad){
        return quad.object&&frame->motions.at(quad.motion).identity==id;
    }),"Live prepared party/gift actor has no published native artwork");
    // Exercise the same owner after actual imported receipt. No inventory API
    // for disposal is claimed here: removing the inventory records is explicit
    // fixture input, followed by complete native reconciliation and deletion.
    f.party.character(1).items.fill(0);const auto removal_seed=f.random;const auto removal_ticks=f.actors.ticks();
    reconcile(f);
    require(f.party.party_count==1&&f.party.party_order[1]==0&&!f.actors.actor_for_role(28)&&f.actors.size()==2&&
            f.random==removal_seed&&f.actors.ticks()==removal_ticks&&f.timers==timers,
            "Post-receipt removal retained actual Teddy or invented synchronous work");
    bool detached=false;try{f.interactions->body(*teddy_actor);}catch(const std::exception&){detached=true;}
    require(detached,"Deleted Teddy collision metadata remained attached");
    std::cout<<"{\"region\":\""<<(jp?"JP":"US")<<"\",\"case\":\""<<c.name
             <<"\",\"completed\":true,\"npc\":"<<npc<<",\"authored_reference\":\""<<bytes_hex(gift.talk_reference)
             <<"\",\"original_image_sha256\":\""<<image_before<<"\",\"gift\":"<<gift.gift_value
             <<",\"initial_item\":"<<c.initial_item<<",\"selected_member\":"<<selected<<",\"frames\":"<<frames
             <<",\"actor_ticks\":"<<f.actors.ticks()<<",\"visible_text_frames\":"<<visible_frames
             <<",\"distinct_window_images\":"<<window_hashes.size()<<",\"glyph_sound_intents\":"<<glyph_sounds
             <<",\"caller_sound_intents\":"<<caller_sounds<<",\"command_sound_intents\":[16,116]"
             <<",\"fade_reads\":"<<fade_reads<<",\"open_pose_frames\":"<<open_frames
             <<",\"paused_observations\":"<<paused_observations<<",\"new_actor_metadata_observations\":"<<metadata_observations
             <<",\"prepared_teddy_poses\":"<<prepared_poses<<",\"gift_flag\":"<<gift.event_flag
             <<",\"post_receipt_removal_complete\":true,\"object_quads\":"<<objects
             <<",\"last_visible_frame_sha256\":\""<<visible_hash
             <<"\",\"retained_final_frame_sha256\":\""<<pixel_hash(*frame)<<"\"}\n"<<std::flush;
}
} // namespace
int main(int argc,char** argv) {
    try {
        if(argc<2)throw std::invalid_argument("native_party_teddy_assets pack.ebpak ...");
        unsigned completed{};
        for(int i=1;i<argc;++i) {
            const auto assets=eb::load_game_assets(argv[i],eb::asset_profiles());Resources resources(assets);
            for(const Case c:{Case{"teddy_receipt",2},Case{"super_receipt",3},Case{"upgrade",3,2},
                              Case{"keep_super",2,3},Case{"keep_teddy",2,2}}){run(resources,c);++completed;}
        }
        std::cout<<"{\"completed\":"<<completed<<",\"manual_teddy_acknowledgments\":0}\n";
    } catch(const std::exception& error) {std::cerr<<error.what()<<'\n';return 1;}
}
