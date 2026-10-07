#include "battle.hpp"
#include "eb/native/party/dialogue_values.hpp"

namespace eb::native::session {
namespace {
story::BattlePublication &admit_publication(story::BattlePublication &publication,
                                          battle::FrameDisplay &display,
                                          WorldScenePresentation &world) {
    publication.bind_frame_display(display);
    publication.bind_world_presentation(world);
    return publication;
}
}

BattleContent::BattleContent(std::span<const std::uint8_t> image, GameVersion version)
    : enemies(battle::EnemyResources::import(image,version)),
      encounters(battle::EncounterResources::import(image,version)),
      actions(battle::ActionResources::import(image,version)),
      psi(battle::PsiResources::import(image,version)),
      outcomes(battle::OutcomeResources::import(image,version)),
      menu(battle::MenuContent::import(image,version)),
      execution(battle::actions::Resources::import(image,version)),
      backgrounds(image,version), combatants(image,version), special(image,version) {}
Battle::Battle(const BattleContent &c, World &w, std::span<const std::uint8_t> image)
    : world(w),content(c),scene(w.runtime->coordinator_scene()),
      background(c.backgrounds.prepare(BattleBackgroundPair{0,0,4})),
      effects(w.palette,effect_state),animation(psi_state,w.scratch,w.display,effects,background),
      roster(c.enemies),objects(c.combatants.prepare(1)),
      frame(frame_state,background,roster,objects,animation,effects,w.palette,w.display,w.frame_display,
            w.fade,w.clock,w.windows,w.party,w.meters,w.content.swirl,w.content.encounter_effects,
            w.swirl,w.visual,w.content.layers,w.layer),
      loader(c.backgrounds,background,video,w.palette,w.scratch,w.display,w.frame_display,w.fade,
             w.clock,frame_state,w.swirl,w.visual,w.content.layers,w.layer),
      publication(w.palette,w.scratch,w.display,background,objects,w.windows,w.visual,w.fade,
                  story::BattlePublication::WindowBinding::Deferred),
      blank(w.content.version,w.fade,w.frame_display,w.clock,w.visual,scene),
      sprite_reads(w.peripherals),
      graphics(c.combatants,objects,allocation,*w.window_graphics,w.windows,w.party,w.palette,w.scratch,
               w.display,video,w.fade,frame,&sprite_reads),
      prepared(w.content.version),names(roster,w.party,prepared,*w.content.substitutions,action),
      dialogue(w.content.program,w.prompts,prepared,w.party,w.input),
      state(w.control.encounter),
      admission(c.encounters,roster,w.party,w.formation,w.encounter,w.text,action,state,frame_state,turns,
                w.random,w.clock),
      targets(roster,w.party,w.random,rows,steals,*c.actions,*w.content.substitutions,c.combatants),
      scheduler(turns,roster,w.party,action,w.random,*c.actions,state,targets),
      dead(c.encounters,roster,w.party,action,names,dialogue,w.windows,scene,w.refresh_party),
      rounds(admission,scheduler,dead,scene,w.windows,w.meters,dialogue),
      visible_growth(w.content.growth,image,w.party,w.random,[&w](unsigned character) {
          const auto &v=w.party.character(character);
          return CharacterGrowthContext{v.boosted_speed,v.boosted_guts,v.boosted_vitality,
                                         v.boosted_iq,v.boosted_luck,w.text.flag(74)};
      }),growth(visible_growth,w.content.program,w.prompts,prepared,w.party,w.random),
      outcomes(c.outcomes,roster,w.party,w.encounter,state,turns,background,w.clock,w.windows,w.meters,
               dialogue,growth,dead,scene,frame,blank,w.fade,[&w](const WorldEncounterMusicChange &music) {
                   w.audio.change_music(music.track,w.clock.disabled_transitions);
               }),
      instant{*c.encounters,w.random,w.palette,w.scratch,w.frame_display,w.swirl,w.visual,
              w.interactions,[&w] { w.music.restore_sector(); }},
      shields(action,roster,names,dialogue,c.actions),
      setup(c.psi,psi_state,w.scratch,w.display,effects,background,roster,action,c.combatants,w.fade,w.clock),
      animations(setup,*c.psi,roster,action,background,w.palette,w.content.swirl,w.swirl,w.visual),
      menu(c.menu,w.content.program,w.content.menus,w.content.fonts,w.content.substitutions,*c.actions,
           w.party,turns,menu_state,targets,roster,names,frame_state,w.palette,w.scratch,w.random,w.menus,scene,w.input),
      membership(w.party,w.actors,w.creation,w.refresh_party,w.teddy,w.inventory,w.interactions,
                 *w.content.sprites,w.content.creation),
      special{graphics,loader,blank,w.fade,w.visual,w.content.swirl,w.palette,w.encounter,w.music_state,c.special,
              membership,w.session,w.actors,w.content.map,w.interactions.state(),w.content.teleports},
      executor({.roster=roster,.party=w.party,.guests=w.formation,.action=action,.turns=turns,
          .encounter=state,.random=w.random,.clock=w.clock,.names=names,.targets=targets,.shields=shields,
          .dead=dead,.scene=scene,.windows=w.windows,.meters=w.meters,.dialogue=dialogue,.frame=frame,
          .frame_state=frame_state,.background=background,.palette_effects=effects,.psi=animation,.swirl=w.swirl,
          .audio=w.audio,.inventory=w.inventory,.actions=*c.actions,.items=*w.content.substitutions,
          .resources=*c.execution,.special=special,.teddy=w.teddy,.food_status=w.food_status}),
      startup(admission,graphics,loader,blank,c.combatants,objects,frame,w.palette,w.fade,w.windows,w.meters,
              names,dialogue,scene,admit_publication(publication,w.frame_display,w.presentation),[&w](const WorldEncounterMusicChange &music) {
                  w.audio.change_music(music.track,w.clock.disabled_transitions);
              },&animations),encounter(admission,startup,rounds,menu,executor,outcomes,scene,w.windows) {
    publication.bind_frame_display(w.frame_display);
    w.presentation.bind_battle_background(background);
    w.presentation.bind_scene_frame_state(w.clock,scene,video);
    frame.bind_palette_reset(w.presentation);
    background.initialize_unloaded_record();
    w.windows.bind_prepared_message(prepared);
    w.windows.substitutions().configure(w.content.substitutions,party::dialogue_values(w.party));
    outcomes.bind_instant_victory(instant);
}
} // namespace eb::native::session
