#include "state.hpp"
namespace eb {
NativeSession::State::State(std::span<const std::uint8_t> image,GameVersion version,
          std::span<const std::uint8_t> bytes,unsigned slot)
        : content(image,version),audio(image,version),world(content,audio),
          physical_clock(world.clock,[this] {world.runtime->interrupt_publication();audio.publication();},
                         [this] {++physical_frames;capture();}),
          battle_content(image,version),battle(battle_content,world,image),
          item_action({world.startup_owners(),world.following,battle.roster,battle.action,battle.executor,
              *battle_content.execution,*content.substitutions,battle.prepared,battle.dialogue,battle.scene}),
          entry_fade(*world.runtime,world.fade,world.frame_display,world.clock,version),
          screen_transition(content.teleport_resources,screen_transition_state,{*world.runtime,world.actors,
              world.palette,world.scratch,world.display,world.frame_display,world.fade,world.clock,
              world.visual,world.effects,world.navigation,battle.frame_state.giygas_phase,&world.peripherals,&world.map_state,&world.swirl_setup}),
          script_teleport({world.startup_owners(),script_teleport_state,content.teleport_resources,
              content.startup,content.program,world.menus,*world.map_load,world.map_state,*world.relocation,
              world.npc_commands,screen_transition,entry_fade,world.fade,world.navigation,world.music,
              [this](std::uint16_t sound){audio.play_sound(sound);}}),
          door_entry({world.startup_owners(),script_teleport_state,*content.doors,content.teleport_resources,
              content.startup,content.program,world.menus,*world.map_load,*world.relocation,
              world.npc_commands,screen_transition,entry_fade,world.fade,world.navigation,world.input,
              world.music,world.sprite_fade,[this](std::uint16_t sound){audio.play_sound(sound);}}),
          town_map(content.town_map,town_map_state,{*world.runtime,world.input,world.interactions,*world.map_load,
              world.windows,*world.window_graphics,world.party,world.clock,world.presentation,world.visual,
              world.music,world.music_state,world.palette,world.scratch,world.display,world.frame_display,world.fade}),
          bicycle({world.startup_owners(),world.music,*content.sprites,content.creation}),
          travel({world.startup_owners(),teleport,teleport_movement,world.following,content.walking,
            content.enemy_motion,content.collision,world.area,world.input,content.teleports,
            *world.map_load,world.map_state,*world.relocation,world.npc_commands,world.music,
            world.music_state,audio,world.presentation,battle.video,content.layers,world.layer,
            world.visual,world.frame_display,world.fade,&world.peripherals}),
          battle_return({world.startup_owners(),world.following,*world.map_load,world.map_state,
            world.music,world.music_state,audio,world.presentation,battle.publication,battle.blank,
            battle.video,world.frame_display,world.fade,world.visual,content.layers,world.layer,
            world.encounter,teleport,content.teleports,*world.relocation,world.npc_commands}),
          cinematic_display(version,cinematic_display_state,{*world.runtime,world.interactions,world.actors,
            *world.map_load,world.map_state,world.windows,*world.window_graphics,world.party,world.clock,
            world.presentation,world.visual,world.music,world.music_state,world.palette,world.scratch,
            world.display,world.frame_display,world.fade,battle.background,battle.loader,battle.video,
            battle.blank,battle.frame,battle.frame_state,content.layers,world.layer,audio}),
          cinematics(image,version,cinematic_display,world.input),
          special_events(image,version,{world.party,world.random,world.text.event_flags,
            battle.roster,battle.action,world.refresh_party,world.following,world.interactions,
            world.session,world.actors,battle.scene,world.clock,world.meter_flipout,world.maintenance}),
          persistence(n::saves::SaveArchive(version,bytes),content.continuing) {
        world.windows.bind_source_text_tiles(cinematic_display_state);
        world.windows.initialize_cold_text_tiles();
        world.bind_actor_graphics(image);
        special_events.bind_town_map(town_map);
        cinematics.bind_cast(image,version,world.startup_owners());
        special_events.bind_cinematics(cinematics);
        if(slot<1 || slot>3) throw std::invalid_argument("Native Continue requires slot1..3");
        persistence.repair_integrity();
        auto restored=persistence.continue_slot(slot-1);
        audio.initialize();
        // GAME_INIT enables both NMI and automatic joypad reads after the
        // SPC initializer; audio uploads subsequently preserve bit 0.
        world.clock.interrupt_mask|=0x81;
        audio.set_channels(restored.state.game.sound_setting==0);
        canonical.fill(0xff000000);
        world.runtime->refresh_world_capture();
        startup=world.startup->begin(std::move(restored));
        physical_clock.bind_peripherals(world.peripherals);
        audio.bind_clock(physical_clock);
    }
NativeSession::State::~State() {
        // Destroy borrowing continuations before their actual parents and
        // conversations, including when a failed service still owns a tick.
        sector_music.reset(); teleporting.reset(); dismount.reset(); special_runtime.reset(); special_event.reset();
        runtime.reset(); traveling.reset(); showing_map.reset(); using_item.reset(); menu_teddy.reset(); world_target.reset(); world_menu.reset(); entering_door.reset();
        fading.reset(); returning.reset(); startup.reset(); encounter.reset();
        instant.reset(); scene.reset(); queued_text.reset(); queue.reset();
    }
NativeSession::NativeSession(std::span<const std::uint8_t> image,GameVersion version,
    std::span<const std::uint8_t> save,unsigned slot):state_(std::make_unique<State>(image,version,save,slot)) {}
NativeSession::~NativeSession()=default;
std::uint64_t NativeSession::advance_frame(std::uint16_t buttons,std::uint64_t limit) {
    auto &s=*state_; s.require();
    s.world.peripherals.set_buttons(buttons);
    const auto before=s.physical_frames;
    try {
        while(!limit || s.work<limit) {
            (void)s.pump(buttons);
            if(s.physical_frames!=before)return s.physical_frames-before;
        }
        return 0;
    } catch(...) { s.failed=true; throw; }
}
std::uint64_t NativeSession::frames() const noexcept { return state_->physical_frames; }
std::uint64_t NativeSession::steps() const noexcept { return state_->work; }
PresentationFrame NativeSession::presentation_frame() const {
    const auto &s=*state_; return {s.pixels,s.width,0,s.physical_frames,{},{},s.captured,{},{}};
}
std::span<const std::uint32_t,256*224> NativeSession::native_pixels() const { return state_->canonical; }
void NativeSession::configure_presentation(unsigned width,bool,bool) {
    auto &s=*state_; s.require();
    if(width<256 || width>1024 || (width&1)) throw std::invalid_argument("Native scene width must be even and256..1024");
    if(s.width==width) return;
    s.width=width;
    if(s.captured) {
        const auto source=s.world.runtime->published_frame(); s.captured=crop_native_scene(*source,width);
        s.pixels=rasterize_direct_scene({s.captured,{}});
    } else s.pixels.assign(width*224,0xff000000);
}
void NativeSession::observe_completed_frames(FrameObserver observer) {
    if(state_->observing) throw std::logic_error("Cannot replace a native observer while it is running");
    state_->observer=std::move(observer);
}
std::vector<std::int16_t> NativeSession::take_audio_samples() { return state_->audio.take_samples(); }
std::span<const std::uint8_t> NativeSession::save_memory() const { return state_->persistence.archive().bytes(); }
SessionDiagnostics NativeSession::diagnostics(bool details) const {
    const auto &s=*state_;
    SessionDiagnostics result;
    result.machine_debug_available = false;
    result.frames=s.physical_frames; result.steps=result.native_gameplay_batches=s.work;
    result.native_encounters_started=s.encounters_started;
    result.native_encounters_completed=s.encounters_completed;
    result.native_item_uses_started=s.item_uses_started;
    result.native_item_uses_completed=s.item_uses_completed;
    result.native_world_menus_opened=s.menus_opened;
    result.native_world_menus_completed=s.menus_completed;
    result.native_doors_started=s.doors_started;
    result.native_doors_completed=s.doors_completed;
    result.native_world_menu_active=bool(s.world_menu);
    result.native_door_active=bool(s.entering_door);
    result.native_town_maps_started=s.maps_started;
    result.native_town_maps_completed=s.maps_completed;
    result.native_town_map_active=bool(s.showing_map) || (s.special_event && s.special_event->town_map());
    result.native_cutscenes_started=s.cinematics.started();
    result.native_cutscenes_completed=s.cinematics.completed();
    result.native_cutscene_active=s.cinematics.active_event();
    result.native_cutscene_last=s.cinematics.last_event();
    result.native_travel_started=s.travel_started;
    result.native_travel_completed=s.travel_completed;
    result.native_travel_active=bool(s.traveling);
    result.native_battle_mode=s.world.control.encounter.mode;
    result.native_battle_mode_flag=s.world.windows.prompt_state().battle_mode;
    result.master_clocks=s.audio.master_clocks(); result.audio_cpu_instructions=s.audio.instructions();
    result.audio_frames=s.audio.sample_frames(); result.source_width=s.width;
    if(details) {
        result.cpu_state="Native gameplay: "+std::string(s.startup?"Continue":s.encounter?"battle":s.instant?"instant victory":"world")+
                         (s.failed?" (stopped)":"");
        result.audio_cpu_state="SPC track "+std::to_string(s.audio.current_track());
    }
    return result;
}
} // namespace eb
