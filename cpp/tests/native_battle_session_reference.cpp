// Optional original full-caller reference. Reuse the preserved startup rig's
// actual source CPU, imported content and independent record/text serializers.
#define main retained_startup_reference_main
#include "native_encounter_turns_reference.cpp"
#undef main
#include "eb/native/battle/encounter.hpp"
#include "eb/native/battle/animation_commands.hpp"
#include "eb/native/world_music.hpp"
#include "eb/native/world_food_status.hpp"
#include "eb/native/world_maintenance.hpp"
#include "eb/native/npcs/interaction_queue.hpp"
#include "eb/native_audio.hpp"
#include "eb/native/story/audio_clock.hpp"
#include "eb/native/battle/sprite_reads.hpp"
#include "eb/native/story/special_events.hpp"
#include "native_battle_party_context.hpp"

namespace {
struct SessionRig {
    PeripheralState peripherals;
    SpriteReads actual_sprite_reads{peripherals};
    bool actual_peripherals{};
    std::uint64_t peripheral_frames{};
    std::function<std::uint16_t(std::uint64_t)> peripheral_buttons;
    Native n;
    eb::NativeAudio audio;
    std::unique_ptr<story::AudioFrameClock> audio_clock;
    std::shared_ptr<const CharacterGrowth> growth_data;
    VisibleCharacterGrowth visible_growth;
    story::GrowthDialogue growth;
    std::shared_ptr<const OutcomeResources> outcome_resources;
    Outcomes outcomes;
    std::shared_ptr<const party::ItemTransformationResources> transformations;
    party::ItemTransformationState transformation_state;
    party::Inventory inventory;
    PreparedActorState prepared_actor;
    PartyTrail trail;
    std::uint16_t &area_style;
    ActorCreationData actor_data;
    WorldPartyCreation creation;
    story::TeddyParty teddy;
    story::PartyMembership membership;
    WorldSessionState session;
    WorldTeleportData teleports;
    Shields shields;
    PsiSetup setup;
    AnimationCommands animations;
    std::shared_ptr<const dialogue::MenuResources> menu_resources;
    std::shared_ptr<const MenuContent> menu_content;
    dialogue::MenuHost menus;
    CommandMenuState menu_state;
    CommandMenu menu;
    std::shared_ptr<const actions::Resources> action_resources;
    WorldMusicState music_state;
    actions::SpecialResources special_resources;
    actions::SpecialOwners special;
    npcs::DadPhoneState phone;
    WorldMaintenanceState maintenance;
    WorldScheduler scheduler;
    WorldFoodStatus food_status;
    WorldControlState control;
    WorldPartyFollowingState following_state;
    WorldPartyFollowingData following_data;
    WorldPartyFollowing following;
    party::MeterFlipout meter_flipout;
    story::SpecialEvents special_events;
    actions::Executor executor;
    std::unique_ptr<Encounter> encounter;
    WorldMusicData music_data;
    WorldMusic music;
    InstantVictoryContext instant;
    explicit SessionRig(Resources& r, bool use_peripherals = false)
        : actual_peripherals(use_peripherals), n(r,use_peripherals ? &actual_sprite_reads : nullptr), audio(r.assets.image, r.assets.version),
          growth_data(std::make_shared<CharacterGrowth>(r.assets.image, r.assets.version)),
          visible_growth(growth_data, r.assets.image, n.party, n.random,
              [&](unsigned) { CharacterGrowthContext result; result.ness_nightmare_defeated = n.text.flag(74); return result; }),
          growth(visible_growth, r.program.program, n.prompts, n.prepared, n.party, n.random),
          outcome_resources(OutcomeResources::import(r.assets.image, r.assets.version)),
          outcomes(outcome_resources, n.roster, n.party, n.encounter, n.encounter_state,
              n.turns, n.background, n.clock, n.windows, n.meters, n.dialogue, growth,
              n.dead, n.scene, n.frame, n.blank, n.fade,
              [&](const WorldEncounterMusicChange& value) { audio.change_music(value.track,n.clock.disabled_transitions); }),
          transformations(party::ItemTransformationResources::import(r.assets.image,r.assets.version)),
          inventory(n.party,r.substitutions,transformations,transformation_state,n.random),
          area_style(n.interactions.state().area_character_style),
          actor_data(import_actor_creation_data(r.assets.image,r.assets.version)),
          creation(n.party,n.actors,r.party_data,n.party_state,n.world_party,prepared_actor,trail,area_style),
          teddy(n.party,n.actors,r.party_data,n.party_state,n.world_party,prepared_actor,trail,area_style,n.formation,
              r.substitutions,n.interactions,*r.sprites,actor_data),
          membership(n.party,n.actors,creation,n.formation,teddy,inventory,n.interactions,*r.sprites,actor_data),
          teleports(r.assets.image,r.assets.version),
          shields(n.action,n.roster,n.names,n.dialogue,r.actions),
          setup(r.psi,n.psi_state,n.scratch,n.display,n.effects,n.background,n.roster,n.action,r.combatants,n.fade,n.clock),
          animations(setup,*r.psi,n.roster,n.action,n.background,n.colors,r.swirl,n.swirl,n.visual),
          menu_resources(dialogue::MenuResources::import(r.assets.image,r.assets.version)),
          menu_content(MenuContent::import(r.assets.image,r.assets.version)),
          menus(r.program.program,n.prompts,menu_resources),
          menu(menu_content,r.program.program,menu_resources,r.fonts,r.substitutions,*r.actions,
              n.party,n.turns,menu_state,n.targets,n.roster,n.names,n.frame_state,n.colors,n.scratch,n.random,menus,n.scene,n.input),
          action_resources(actions::Resources::import(r.assets.image,r.assets.version)),
          special_resources(r.assets.image,r.assets.version),
          special{n.graphics,n.loader,n.blank,n.fade,n.visual,r.swirl,n.colors,n.encounter,music_state,special_resources,
              membership,session,n.actors,r.map,n.interactions.state(),teleports},
          scheduler(n.windows,n.clock,phone,n.actors.appearance_scene(),maintenance),
          food_status(n.party,n.actors,scheduler),
          following_data(import_party_following_data(r.assets.image,r.assets.version)),
          following(n.actors,n.party,n.party_state,trail,control,n.interactions.state(),
                    n.windows.prompt_state(),maintenance,area_style,following_state,following_data),
          meter_flipout(n.party,n.clock.flipout,n.windows.prompt_state().half_meter_speed,n.windows.prompt_state().rolling_disabled),
          special_events(r.assets.image,r.assets.version,{n.party,n.random,n.text.event_flags,
              n.roster,n.action,n.formation,following,n.interactions,session,n.actors,n.scene,n.clock,meter_flipout,maintenance}),
          executor({.roster=n.roster,.party=n.party,.guests=n.party_state,.action=n.action,.turns=n.turns,
              .encounter=n.encounter_state,.random=n.random,.clock=n.clock,.names=n.names,.targets=n.targets,
              .shields=shields,.dead=n.dead,.scene=n.scene,.windows=n.windows,.meters=n.meters,.dialogue=n.dialogue,
              .frame=n.frame,.frame_state=n.frame_state,.background=n.background,.palette_effects=n.effects,
              .psi=n.animation,.swirl=n.swirl,.audio=audio,.inventory=inventory,.actions=*r.actions,
              .items=*r.substitutions,.resources=*action_resources,.special=special,.teddy=teddy,.food_status=food_status}),
          music_data(r.assets.image,r.assets.version),
          music(music_data,music_state,n.interactions.state(),n.text.event_flags,n.clock,audio),
          instant{*r.encounter,n.random,n.colors,n.scratch,n.frames,n.swirl,n.visual,n.interactions,[&] { music.restore_sector(); }} {
        if (actual_peripherals) n.display.bind_peripherals(peripherals,r.assets.version);
        audio.initialize();
        n.windows.animations().configure(dialogue::TextAnimationResources::import(r.assets.image,r.assets.version));
        n.world.bind_palette_transport(n.colors);
        inventory.bind_equipment(*growth_data);
        n.scene.bind_inventory(inventory);
        n.scene.bind_teddy_party(teddy);
        outcomes.bind_instant_victory(instant);
        n.startup = std::make_unique<Startup>(n.admission,n.graphics,n.loader,n.blank,r.combatants,n.objects,
            n.frame,n.colors,n.fade,n.windows,n.meters,n.names,n.dialogue,n.scene,n.publication,
            [&](const WorldEncounterMusicChange& value) { audio.change_music(value.track,n.clock.disabled_transitions); },&animations);
        encounter = std::make_unique<Encounter>(n.admission,*n.startup,n.rounds,menu,executor,outcomes,n.scene,n.windows);
    }
    // Direct-helper references can supply their declared incoming physical
    // phase. The same production adapter drives real publication and SPC time.
    void bind_audio_clock(unsigned phase, std::uint64_t frames, bool vblank_latch = false,
                          std::function<std::uint16_t(std::uint64_t)> buttons = {}) {
        require(!audio_clock, "Reference audio clock binding was repeated");
        peripheral_frames = frames; peripheral_buttons = std::move(buttons);
        if (peripheral_buttons) peripherals.set_buttons(peripheral_buttons(peripheral_frames));
        audio_clock = std::make_unique<story::AudioFrameClock>(n.clock, [this] {
            n.scene.interrupt_publication();
            audio.publication();
        }, [this] {
            ++peripheral_frames;
            if (peripheral_buttons) peripherals.set_buttons(peripheral_buttons(peripheral_frames));
        }, phase, frames, vblank_latch);
        if (actual_peripherals) audio_clock->bind_peripherals(peripherals);
        audio.bind_clock(*audio_clock);
    }
    void service(story::Scene::Operation& op) {
        const auto kind=op.service();
        if (kind==story::SceneService::Frame || kind==story::SceneService::Publication) {
            const bool publishes=kind==story::SceneService::Publication || op.frame_requirement()==story::FrameRequirement::NmiPublication;
            if (audio_clock) {
                const bool boundary = kind == story::SceneService::Publication ||
                    op.frame_requirement() != story::FrameRequirement::InputOnly;
                if (boundary) audio_clock->advance_boundary(audio);
                if (publishes) audio.publication();
                n.service(op);
                if (boundary) audio_clock->finish_frame(audio);
            } else {
                n.service(op);
                if (publishes) { audio.publication(); audio.advance_master_clocks(357366); }
            }
        } else if(kind==story::SceneService::ScriptSound) {
            audio.script_sound(op.script_sound()); op.respond_script_sound();
        } else if(kind==story::SceneService::Dialogue) {
            const auto& event=op.dialogue_event();
            const auto* effect=event?std::get_if<dialogue::TextEffect>(&*event):nullptr;
            if(event && std::holds_alternative<dialogue::Request>(*event)) {
                const auto &request=std::get<dialogue::Request>(*event);
                if(request.kind==dialogue::RequestKind::ScriptMusic) {
                    require(request.script_music.has_value(),"Script music operand is absent");
                    music.script_music(*request.script_music);op.respond_dialogue({});return;
                }
                if(request.kind==dialogue::RequestKind::SpecialEvent) {
                    require(request.special_event.has_value(),"Special-event operand is absent");
                    auto operation=special_events.begin(*request.special_event,op);
                    for(unsigned work=0;work<1000000&&!operation->complete();++work) {
                        const auto progress=operation->advance(1);
                        if(progress==dialogue::Progress::Suspended) {
                            if(auto* child=operation->scene())service(*child);
                            else throw std::runtime_error("Special event requires actual bicycle lifecycle");
                        }
                    }
                    require(operation->complete(),"Actual special-event operation did not complete");
                    dialogue::Response response;response.special_event_result=operation->result();
                    op.respond_dialogue(response);return;
                }
                if(request.kind==dialogue::RequestKind::UnsupportedCommand)
                    std::cerr<<"Unsupported authored source="<<request.source.page<<":"<<request.source.offset
                        <<" operand="<<unsigned(n.r.program.program->byte(dialogue::Program::advance(request.source,2)))<<'\n';
            }
            if(!effect || effect->kind!=dialogue::TextEffectKind::TextSound)
                throw std::runtime_error("Full battle reached another authored dialogue service variant=" + std::to_string(event ? event->index() : 99) + " effect=" + std::to_string(effect ? unsigned(effect->kind) : 99) + " request=" + std::to_string(event && std::holds_alternative<dialogue::Request>(*event) ? unsigned(std::get<dialogue::Request>(*event).kind) : 999) + " command=" + std::to_string(event && std::holds_alternative<dialogue::Request>(*event) ? unsigned(std::get<dialogue::Request>(*event).command) : 999) + " selector=" + std::to_string(event && std::holds_alternative<dialogue::Request>(*event) ? unsigned(std::get<dialogue::Request>(*event).selector) : 999));
            audio.play_sound(7); op.respond_dialogue({});
        } else n.service(op);
    }
    void drive(Encounter::Operation& operation) {
        for(unsigned budget=0;budget<1000000;++budget) {
            const auto progress=n.advance(operation);
            if(progress==dialogue::Progress::Finished) return;
            if(progress==dialogue::Progress::Suspended) {
                if(auto* menu=operation.menu_audio()) {
                    audio.play_sound(menu->audio()->kind==MenuAudioKind::TextSound?7:menu->audio()->value);
                    menu->respond_audio();
                } else if(auto* scene=operation.scene()) service(*scene);
                else throw std::runtime_error("Full battle child requires an unbound actual world service");
            }
        }
        throw std::runtime_error("Full native encounter exceeded the work budget");
    }
};
[[maybe_unused]] void complete_session(const eb::GameAssets& assets,unsigned scenario=0) {
    counts={}; Resources resources(assets);
    Source source(assets);source.initialize();SessionRig rig(resources);
    if(scenario==1)battle_party_reference::prepare_party_context(source,rig);
    rig.n.host_input=&source.raw_inputs;
    if(scenario==1 || scenario==2) {
        // Actual file-select speed0 imported from HP_METER_SPEEDS; the base
        // victory fixture deliberately retains its earlier zero-speed input.
        const unsigned table=source.jp?0xc3f664:0xc3fb1f;
        std::uint32_t speed=0;
        for(unsigned byte=0;byte<4;++byte)speed|=std::uint32_t(source.bus->read_byte(table+byte))<<(8*byte);
        source.put(source.jp?0x991f:0x9627,speed);
        source.put((source.jp?0x991f:0x9627)+2,speed>>16);
        rig.n.clock.hp_speed=speed;
        auto &c=rig.n.party.character(1);
        const unsigned base=source.jp?0x9c7f:0x99ce,shift=source.jp?1:0;
        if(scenario==1) {
            c.maximum_hp=c.current_hp=c.target_hp=1;
            c.offense=c.base_offense=c.defense=c.base_defense=1;
            source.put(base+10-shift,1);source.put(base+69-shift,1);source.put(base+71-shift,1);
            for(unsigned offset:{21u,22u,28u,29u})source.bus->work_ram[base+offset-shift]=1;
        }
        c.speed=c.base_speed=scenario==2?255:1;
        source.bus->work_ram[base+23-shift]=c.speed;source.bus->work_ram[base+30-shift]=c.base_speed;
    }
    std::uint64_t quiet_until{};unsigned last_button=0x80,selected_window=0;
    const auto command_window=rig.menu_content->command_window(1);
    std::vector<dialogue::TextFrame> source_frames;
    unsigned original_actions=0;
    source.observer=[&](Source& s) {
        if(scenario==2) {
            const auto pc=s.cpu.program_counter;
            s.fixed_buttons=(s.bus->completed_frames>=quiet_until&&(s.bus->completed_frames&2))
                ? std::uint16_t(last_button):0;
            if(pc==(s.jp?0xc12109u:0xc1196au)) {quiet_until=s.bus->completed_frames+2;last_button=0;selected_window=s.word(s.jp?0x8c96:0x8958);}
            if(pc==(s.jp?0xc1355eu:0xc12e42u)) {
                last_button=0x80;
                const auto active=s.word(s.jp?0x8c96:0x8958);
                const auto focus=active==4?selected_window:active;
                if(focus==command_window) {
                    const auto slot=s.word((s.jp?0x8c26:0x88e4)+focus*2);
                    if(slot<8) {
                        const auto record=(s.jp?0x89c2:0x8650)+slot*(s.jp?76:82);
                        const auto current=s.word(s.cpu.direct_page+(s.jp?2:4));
                        const unsigned pool=s.jp?0x8d12:0x89d4,stride=s.jp?44:45;
                        auto target=s.word(record+43);
                        for(unsigned i=0;i<64&&target<64;++i) {
                            const auto at=pool+target*stride;
                            if(s.word(at+12)==6) {
                                if(current>=pool&&current<pool+64*stride) {
                                    if(s.word(current+10)!=s.word(at+10))last_button=s.word(current+10)<s.word(at+10)?0x400:0x800;
                                    else if(s.word(current+8)!=s.word(at+8))last_button=s.word(current+8)<s.word(at+8)?0x100:0x200;
                                }
                                break;
                            }
                            target=s.word(at+2);
                        }
                    }
                }
            }
        }
        const bool close_focus=s.cpu.program_counter==(s.jp?0xc1db36u:0xc1dd59u)&&s.word(s.jp?0x8c96:0x8958)==14;
        const bool close_all=s.cpu.program_counter==(s.jp?0xc1db3cu:0xc1dd5fu)&&s.word((s.jp?0x8c26:0x88e4)+28)!=0xffff;
        if(close_focus||close_all)source_frames.push_back(source_text_frame(s));
        if(s.cpu.program_counter==(s.jp?0xc23040u:0xc2311bu))++original_actions;
    };
    source.call(source.jp?0xc246ee:0xc24821);
    const auto returned=source.cpu.accumulator;
    std::cout<<(source.jp?"JP":"US")<<" scenario="<<scenario<<" complete original result="<<returned<<" menus="<<original_actions<<" polls="<<source.polls<<std::endl;
    auto operation=rig.encounter->begin();rig.drive(*operation);
    require(operation->complete(),"Native BATTLE_ROUTINE incomplete");
    check_equal(returned,operation->result(),"Complete BATTLE_ROUTINE return");
    compare_roster(source,rig.n,"Complete BATTLE_ROUTINE");compare_party(source,rig.n);
    compare_text(source_frames,rig.n);
    check_equal(source.polls,rig.n.clock.input_polls,"Whole battle input polls");
    require(original_actions>0,"No original command menu executed");
    require(operation->result()==(scenario==1?1:0),"Intended whole outcome route not reached");
    if(scenario==2)require(rig.n.turns.flee_requested&&rig.n.encounter_state.experience_gained==0,
                         "Run-input whole caller did not reach genuine escape");
    std::cout<<(source.jp?"JP":"US")<<" scenario="<<scenario<<" whole native BATTLE_ROUTINE result="<<operation->result()
        <<" checks="<<counts.words<<" text_pixels="<<counts.text_pixels
        <<" source_instructions="<<source.cpu.instruction_count<<" native_audio_samples="<<rig.audio.sample_frames()<<'\n';
}
}
#ifndef NATIVE_BATTLE_SESSION_REFERENCE_NO_MAIN
int main(int argc,char**argv) {
    if(argc<2)return 77;
    try {for(int i=1;i<argc;++i)for(unsigned scenario=0;scenario<3;++scenario)complete_session(eb::load_game_assets(argv[i],eb::asset_profiles()),scenario);}
    catch(const std::exception&e){std::cerr<<e.what()<<'\n';return 1;}
}

#endif
