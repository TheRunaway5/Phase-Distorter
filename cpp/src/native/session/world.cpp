#include "world.hpp"

namespace eb::native::session {
WorldStartupOwners World::startup_owners() {
    return {windows,party,actors,*runtime,interactions,clock,formation,trail,control,maintenance,
            following_state,spawn,enemies,inventory,hotspots,queue,bootstrap,creation,updater,
            content.party,refresh_party,interactions.state().area_character_style,scene_colors,session,random};
}
World::World(const Content &c, NativeAudio &a, unsigned view_width)
    : content(c), audio(a), party(c.version), output(c.fonts,text),
      windows(c.windows,text,output), window_graphics(std::make_shared<dialogue::WindowGraphics>(c.window_art,output)),
      prompts(windows), menus(c.program,prompts,c.menus), meters(windows,party,c.meters),
      meter_flipout(party,clock.flipout,windows.prompt_state().half_meter_speed,windows.prompt_state().rolling_disabled),
      inventory(party,c.substitutions,c.transformations,item_timers,random),
      actors(c.sprites,c.scripts,c.version,c.appearances), activation(c.npcs,c.sprites,c.scripts,c.version),
      enemies(c.enemies,c.sprites,c.scripts),
      area(c.map.prepare(c.map.sector(0,0).combination,text.event_flags)),
      area_colors(c.palettes.resolve(c.palettes.area_at(0,0),text.event_flags)),
      interactions(c.interactions,c.map_text,c.program,windows,actors,c.collision,area),
      updater(party,actors,c.party,formation),
      creation(party,actors,c.party,formation,updater,spawn.prepared,trail,interactions.state().area_character_style),
      refresh_party(updater,party,actors,c.party,formation,movement_policy,interactions,clock),
      teddy(party,actors,c.party,formation,updater,spawn.prepared,trail,
            interactions.state().area_character_style,refresh_party,c.substitutions,interactions,*c.sprites,c.creation),
      bootstrap(c.bootstrap,c.walking,actors,party,formation,trail,control,maintenance,following_state),
      queue(c.version,queued,actors.appearance_scene().intangibility_ticks,phone),
      hotspots(c.version,hotspot_state,interactions.state(),clock,actors.appearance_scene(),queue),
      controller(actors,formation,trail,interactions.state(),control,windows.prompt_state(),input,clock,c.collision,area),
      doors(c.map_text,c.doors,actors,interactions.state(),control,navigation,maintenance,input,queue),
      walking(c.walking,actors,enemies,interactions.state(),control,formation,party,movement_policy,
              windows.prompt_state(),input,clock,navigation,queue,hotspots,doors,c.collision,c.movement,area),
      playback(interactions.state(),input), scheduler(windows,clock,phone,actors.appearance_scene(),maintenance),
      food_status(party,actors,scheduler),
      transitions(c.transitions,c.generated_input,c.walking,playback,scheduler,interactions.state(),
                  control,navigation,formation,transition_state),
      escalator(c.walking,actors,interactions.state(),control,formation,navigation,transition_state,
                maintenance,input,queue,doors,c.collision,c.movement,area),
      bicycle(c.walking,actors,enemies,interactions.state(),control,formation,windows.prompt_state(),
              input,navigation,queue,c.collision,area,[this](const auto &sound) { audio.script_sound(sound); }),
      automatic(c.walking,actors,enemies,interactions.state(),control,transition_state,formation,
                trail,maintenance,input,queue),
      sprite_fade(c.sprite_effects,actors,random,spawn.prepared,scratch),
      character_visibility(party,formation,actors,sprite_fade),
      npc_commands(*c.npcs,*c.scripts,actors,spawn.prepared,sprite_fade),
      floating_sprites(c.floating_sprites,actors,spawn.prepared,floating_state),
      focus(automatic,character_visibility,npc_commands,floating_sprites),
      party_motion(actors,party,formation,random,c.party_motion),
      following(actors,party,formation,trail,control,interactions.state(),windows.prompt_state(),
                maintenance,interactions.state().area_character_style,following_state,c.party_following),
      paths(actors,c.collision,area,formation,party),
      runtime([this, view_width] {
          interactions.bind_event_flags();
          return std::make_unique<WorldRuntime>(windows,party,random,meters,clock,input,actors,activation,
              enemies,content.collision,area,area_colors,content.map,content.palettes,content.animations,spawn,
              NpcStripAdmission::Admitted,[this] { return std::optional<ActorRetentionArea>{{
                  interactions.state().leader_x,interactions.state().leader_y,session.teleport_speed}}; }, story::SceneView{view_width});
      }()),
      enemy_movement(c.enemy_motion,c.generated_input,actors,paths,c.collision),
      enemy_behavior(c.enemy_motion,c.generated_input,actors,enemies,party,interactions.state()),
      swirl_setup(c.swirl,encounter,swirl,scene_colors,swirl_backup,visual,
                  [this](const auto &music) { audio.change_music(music.track,clock.disabled_transitions); }),
      entry(c.generated_input,actors,enemies,interactions.state(),formation,party,maintenance,
            encounter,swirl_setup,paths),
      contact(actors,enemies,interactions.state(),control,windows.prompt_state(),navigation,
              maintenance,paths,encounter,swirl_setup,automatic,scene_colors,contact_backup,
              c.collision,area,[this](const auto &sound) { audio.script_sound(sound); }),
      frame_display(display), presentation(scene_colors,visual,c.layers,layer),
      effects(c.swirl,c.encounter_effects,swirl,scene_colors,visual,presentation),
      overlays(actors,c.overlays), music(c.music,music_state,interactions.state(),text.event_flags,clock,a) {
    display.bind_peripherals(peripherals,c.version);
    windows.set_graphics(window_graphics);
    windows.animations().configure(c.text_animations);
    actors.bind_party_movement(party_motion);
    actors.bind_overlays(overlays);
    presentation.bind_display_fade(fade);
    presentation.bind_frame_display(frame_display);
    presentation.bind_video_transport(display,scratch);
    presentation.bind_palette_transport(palette);
    swirl_setup.bind_palette_transport(palette);
    contact.bind_palette_transport(palette,scratch);
    presentation.bind_encounter_effects(effects);
    runtime->bind_interactions(interactions);
    runtime->bind_inventory(inventory);
    inventory.bind_equipment(*c.growth);
    runtime->coordinator_scene().bind_party_formation(refresh_party);
    runtime->coordinator_scene().bind_teddy_party(teddy);
    runtime->bind_maintenance(controller,maintenance,item_timers,queue);
    runtime->bind_walking(walking);
    runtime->bind_party_following(following);
    runtime->bind_door_transitions(transitions);
    runtime->bind_escalator(escalator);
    runtime->bind_bicycle(bicycle);
    runtime->bind_automatic(automatic);
    runtime->bind_battle_entry(entry);
    runtime->bind_enemy_movement(enemy_movement);
    runtime->bind_enemy_contact(contact);
    enemy_behavior.bind_peripherals(peripherals);
    runtime->bind_enemy_behavior(enemy_behavior);
    runtime->bind_presentation(presentation);
    runtime->bind_encounter_effects(effects);
    queue.bind_door_scratch_tail(windows.menu_state().skip_adding_command_text,
                                windows.output().policy().character_padding);
    focus.bind_interaction_commands(queue,hotspots,*c.continuing);
    runtime->bind_world_control_commands(focus);
    runtime->bind_sprite_fade(sprite_fade);
    map_load=std::make_unique<WorldMapLoad>(map_state,WorldMapLoadOwners{
        *runtime,actors,enemies,interactions,area,area_colors,c.map,c.palettes,c.animations,
        spawn,random,windows,party,clock,presentation,scene_colors,*window_graphics,overlays});
    relocation=std::make_unique<WorldPartyRelocation>(WorldPartyRelocationOwners{
        startup_owners(),map_state,following,c.map,area,c.collision,c.movement,navigation,doors,
        c.party_following,c.bootstrap,*c.sprites,c.creation});
    startup=std::make_unique<WorldStartup>(*c.continuing,c.program,startup_owners());
    startup->bind_map_load(*map_load,c.startup,*window_graphics);
    command_menu=std::make_unique<world::menu::Commands>(c.world_menus,c.program,c.fonts,menus,
        party,inventory,meters,interactions,runtime->coordinator_scene(),input,sprite_fade);
    command_menu->bind_field_map(c.map);
    command_menu->bind_teleport(formation,session);
    interaction_calls=std::make_unique<story::InteractionCalls>(c.program,interactions,menus,
        runtime->coordinator_scene(),[this]{return sprite_fade.controller().has_value();});
}
void World::bind_actor_graphics(std::span<const std::uint8_t> image) {
    runtime->require_idle();
    if(actor_graphics || actor_graphics_transport || actor_object_maps ||
       actor_object_display || !startup)
        throw std::logic_error("Session actor graphics require its healthy unbound startup owner");
    auto transport=std::make_unique<entities::graphics::Transport>(image,content.version,
        actor_graphics_state,*content.sprites,display,scratch,fade);
    auto lifecycle=std::make_unique<entities::graphics::Lifecycle>(actor_lifecycle_state,
        actors,*content.sprites,*transport);
    auto maps=std::make_unique<entities::graphics::ObjectMaps>(image,content.version,
        actor_object_map_state,*content.sprites);
    lifecycle->bind_object_maps(*maps);
    auto objects=std::make_unique<entities::graphics::ObjectDisplay>(actor_object_display_state,
        actors,*lifecycle,*maps);
    runtime->bind_actor_graphics(*lifecycle);
    startup->bind_actor_graphics(*lifecycle);
    if(map_load->uses_display_transport(scratch,display,fade))
        startup->bind_window_transport(scratch,display,fade);
    frame_display.bind_object_source(*objects);
    actor_graphics_transport=std::move(transport);
    actor_object_maps=std::move(maps);
    actor_graphics=std::move(lifecycle);
    actor_object_display=std::move(objects);
}
World::~World() {
    // Runtime's admitted leases refer to later compositors. Release them while
    // every borrowed owner is still alive, before member destruction begins.
    command_menu.reset();
    interaction_calls.reset();
    startup.reset();
    relocation.reset();
    map_load.reset();
    runtime.reset();
    if(actor_object_display)frame_display.clear_object_source(*actor_object_display);
    actor_object_display.reset();
    actor_graphics.reset();
    actor_object_maps.reset();
    actor_graphics_transport.reset();
}
} // namespace eb::native::session
