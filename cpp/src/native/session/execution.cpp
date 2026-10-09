#include "state.hpp"
namespace eb {
void NativeSession::State::main_tail() {
    // OPEN_MENU_BUTTON/SHOW_TOWN_MAP return to MAIN_LOOP's UNKNOWN16.
    // Re-entering its button dispatch would reuse the child menu's PAD_PRESS
    // and open a second menu before the next actual world input boundary.
    if(world.actors.appearance_scene().teleport_destination) {
        traveling=travel.begin();++travel_started;phase=6;return;
    }
    if(n::party::Queries(world.party).conscious_count()==0)
        throw std::runtime_error("Native session requires its game-over/respawn lifecycle");
    runtime=world.runtime->begin_main_frame();phase=1;
}
void NativeSession::State::queued() {
        if(!queue) queue=world.queue.queue().begin();
        const auto progress=queue->advance();
        if(progress==n::npcs::InteractionQueueProgress::Finished) {
            queue.reset(); ++world.session.input_disable_frames; phase=1; return;
        }
        if(progress!=n::npcs::InteractionQueueProgress::Suspended) return;
        const auto &request=*queue->service();
        switch(request.kind) {
        case n::npcs::InteractionQueueServiceKind::ClearPartySpriteBlink:
            n::clear_party_sprite_blink(world.actors); queue->respond(); break;
        case n::npcs::InteractionQueueServiceKind::Text: {
            queued_text=world.interaction_calls->begin_queued_text(request.key); break;
        }
        case n::npcs::InteractionQueueServiceKind::Door:
            entering_door=door_entry.begin(request.key); ++doors_started; break;
        }
    }
bool NativeSession::State::pump(std::uint16_t buttons) {
        if(teleporting) {
            const auto progress=teleporting->advance(); ++work;
            if(progress==n::dialogue::Progress::Finished) {
                teleporting.reset();teleport_parent->respond_dialogue({});teleport_parent=nullptr;
            } else if(progress==n::dialogue::Progress::Suspended) {
                auto *child=teleporting->runtime_operation();
                if(!child) throw std::logic_error("Native teleport lost its actual runtime child");
                return service(*child,buttons);
            }
            return false;
        }
        if(dismount) {
            const auto progress=dismount->advance(); ++work;
            if(progress==n::dialogue::Progress::Finished) {
                dismount.reset(); auto respond=std::move(finish_dismount); respond();
            } else if(progress==n::dialogue::Progress::Suspended) return service(*dismount->runtime_operation(),buttons);
            return false;
        }
        if(special_event) {
            if(special_runtime) {
                const auto progress=special_runtime->advance(); ++work;
                if(progress==n::dialogue::Progress::Finished) special_runtime.reset();
                else if(progress==n::dialogue::Progress::Suspended) return service(*special_runtime,buttons);
                return false;
            }
            const auto progress=special_event->advance(); ++work;
            if(progress==n::dialogue::Progress::Finished) {
                n::dialogue::Response response;
                response.special_event_result=special_event->result();
                special_event.reset();
                special_parent->respond_dialogue(response); special_parent=nullptr;
            } else if(progress==n::dialogue::Progress::Suspended) {
                if(auto *child=special_event->runtime_operation())return service(*child,buttons);
                else if(auto *child=special_event->scene())
                    special_runtime=world.runtime->service_child(*child,*special_parent);
                else if(auto *cinematic=special_event->cinematic()) {
                    if(cinematic->bicycle_dismount_pending()) {
                        dismount=bicycle.begin();
                        finish_dismount=[cinematic]{cinematic->respond_bicycle_dismount();};
                        return false;
                    }
                    auto *child=cinematic->runtime_operation();
                    if(!child)throw std::logic_error("Native cinematic lost its actual runtime child");
                    return service(*child,buttons);
                } else if(auto *map=special_event->town_map()) {
                    auto *child=map->runtime_operation();
                    if(!child)throw std::logic_error("Native cinematic town map lost its actual runtime child");
                    return service(*child,buttons);
                } else if(auto *party=special_event->party_update()) {
                    dismount=bicycle.begin(special_parent);
                    finish_dismount=[party]{party->respond_bicycle_dismount();};
                } else if(special_event->bicycle_dismount_pending()) {
                    dismount=bicycle.begin(special_parent);
                    finish_dismount=[this]{special_event->respond_bicycle_dismount();};
                } else throw std::logic_error("Native special event lacks its actual child");
            }
            return false;
        }
        if(traveling) {
            const auto progress=traveling->advance(); ++work;
            if(progress==n::dialogue::Progress::Finished) {traveling.reset();++travel_completed;phase=6;}
            else if(progress==n::dialogue::Progress::Suspended) {
                auto *child=traveling->runtime_operation();
                if(!child)throw std::logic_error("Native PSI travel lost its actual runtime child");
                return service(*child,buttons);
            }
            return false;
        }
        if(showing_map) {
            const auto progress=showing_map->advance(); ++work;
            if(progress==n::dialogue::Progress::Finished) {
                showing_map.reset(); ++maps_completed; world.interactions.set_actors_paused(false);phase=6;
            } else if(progress==n::dialogue::Progress::Suspended) {
                auto *child=showing_map->runtime_operation();
                if(!child)throw std::logic_error("Native town map lost its actual runtime child");
                return service(*child,buttons);
            }
            return false;
        }
        if(using_item) {
            if(runtime) return pump_runtime(buttons);
            const auto progress=using_item->advance(); ++work;
            if(progress==n::dialogue::Progress::Finished) {
                using_item.reset();
                if(using_ability) {using_ability=false;world_menu->respond_ability_use(1);}
                else {++item_uses_completed;world_menu->respond_item_use(1);}
            } else if(progress==n::dialogue::Progress::Suspended) {
                if(auto *child=using_item->runtime_operation())return service(*child,buttons);
                else if(auto *child=using_item->scene()) drive_scene(child);
                else if(auto *party=using_item->party_update()) {
                    dismount=bicycle.begin(); finish_dismount=[party]{party->respond_bicycle_dismount();};
                } else if(auto *teddy=using_item->teddy_update()) {
                    dismount=bicycle.begin(); finish_dismount=[teddy]{teddy->respond_bicycle_dismount();};
                } else if(auto *membership=using_item->membership_update()) {
                    dismount=bicycle.begin(); finish_dismount=[membership]{membership->respond_bicycle_dismount();};
                } else throw std::logic_error("Native world item action lost its actual child");
            }
            return false;
        }
        if(menu_teddy) {
            const auto progress=menu_teddy->advance(); ++work;
            if(progress==n::dialogue::Progress::Finished) {
                menu_teddy.reset(); world_menu->inventory_operation()->respond();
            } else if(progress==n::dialogue::Progress::Suspended) {
                dismount=bicycle.begin();
                finish_dismount=[this]{menu_teddy->respond_bicycle_dismount();};
            }
            return false;
        }
        if(entering_door) {
            const auto progress=entering_door->advance(); ++work;
            if(progress==n::dialogue::Progress::Finished) {
                entering_door.reset(); ++doors_completed; queue->respond();
            } else if(progress==n::dialogue::Progress::Suspended) {
                auto *child=entering_door->runtime_operation();
                if(!child) throw std::logic_error("Native door lost its actual runtime child");
                return service(*child,buttons);
            }
            return false;
        }
        if(queued_text) {
            if(runtime) return pump_runtime(buttons);
            const auto progress=queued_text->advance(); ++work;
            if(progress==n::dialogue::Progress::Finished) {
                queued_text.reset(); queue->respond();
            } else if(progress==n::dialogue::Progress::Suspended) {
                if(queued_text->service()!=n::story::InteractionCallService::Scene)
                    throw std::logic_error("Queued text lost its actual scene service");
                drive_scene(&queued_text->scene_operation());
            }
            return false;
        }
        if(world_target) {
            if(runtime)return pump_runtime(buttons);
            const auto progress=world_target->advance(); ++work;
            if(progress==n::dialogue::Progress::Finished) {
                const auto result=world_target->result();world_target.reset();
                world_menu->respond_target_select(result);
            } else if(progress==n::dialogue::Progress::Suspended) {
                if(world_target->audio()) {
                    const auto request=*world_target->audio();
                    audio.play_sound(request.kind==n::battle::MenuAudioKind::TextSound?7:request.value);
                    world_target->respond_audio();
                } else drive_scene(world_target->scene());
            }
            return false;
        }
        if(world_menu) {
            if(runtime) return pump_runtime(buttons);
            const auto progress=world_menu->advance(); ++work;
            if(progress==n::dialogue::Progress::Finished) {
                world_menu.reset(); ++menus_completed;phase=6;
            } else if(progress==n::dialogue::Progress::Suspended) {
                if(world_menu->sound()) {
                    audio.play_sound(*world_menu->sound()); world_menu->respond_sound();
                } else if(world_menu->item_use()) {
                    const auto request=*world_menu->item_use();
                    using_item=item_action.begin({request.user,request.slot,request.item,request.target,
                        request.description,request.execute}); ++item_uses_started;
                } else if(world_menu->ability_use()) {
                    const auto request=*world_menu->ability_use();
                    using_item=item_action.begin({request.user,0,0,request.target,request.description,true,
                        request.action,request.ability,request.teleport});using_ability=true;
                } else if(world_menu->target_select()) {
                    const auto request=*world_menu->target_select();
                    world_target=battle.menu.begin_target(request.action,request.user);
                } else if(auto *mutation=world_menu->inventory_operation()) {
                    if(mutation->service()==n::party::InventoryService::TeddyRemove)
                        menu_teddy=world.teddy.begin_remove(mutation->teddy_member());
                    else if(mutation->service()==n::party::InventoryService::TeddyRefresh)
                        menu_teddy=world.teddy.begin();
                    else throw std::logic_error("Native menu inventory lost its actual lifecycle service");
                } else if(world_menu->unported_choice()) {
                    throw std::runtime_error("Native world menu reached an unported submenu (choice "+
                        std::to_string(unsigned(*world_menu->unported_choice()))+")");
                } else drive_scene(world_menu->scene());
            }
            return false;
        }
        if(fading) {
            const auto progress=fading->advance(); ++work;
            if(progress==n::dialogue::Progress::Finished) {
                fading.reset(); encounter=battle.encounter.begin(); ++encounters_started; phase=4;
            } else if(progress==n::dialogue::Progress::Suspended)
                return service(*fading->runtime_operation(),buttons);
            return false;
        }
        if(returning) {
            const auto progress=returning->advance(); ++work;
            if(progress==n::dialogue::Progress::Finished) {
                returning.reset(); ++encounters_completed; ++world.session.input_disable_frames; phase=1;
            } else if(progress==n::dialogue::Progress::Suspended) {
                if(auto *child=returning->runtime_operation()) return service(*child,buttons);
                if(auto *party=returning->party_update()) {
                    dismount=bicycle.begin(); finish_dismount=[party]{party->respond_bicycle_dismount();};
                } else throw std::logic_error("Native world return suspended without its actual child");
            }
            return false;
        }
        if(startup) {
            const auto progress=startup->advance(); ++work;
            if(progress==n::dialogue::Progress::Finished) {
                startup.reset(); world.music.reload(); world.fade.begin_in(1,1);
                runtime=world.runtime->begin_main_frame(); phase=1; return false;
            }
            if(progress==n::dialogue::Progress::Suspended) {
                auto *child=startup->runtime_operation();
                if(child) return service(*child,buttons);
                if(startup->service()==n::WorldStartupService::BicycleDismount) {
                    dismount=bicycle.begin(); finish_dismount=[this] { startup->respond_bicycle_dismount(); };
                } else throw std::runtime_error("Native Continue reached an unported lifecycle service");
            }
            return false;
        }
        if(runtime) {
            return pump_runtime(buttons);
        }
        if(encounter) {
            const auto progress=encounter->advance(); ++work;
            if(progress==n::dialogue::Progress::Finished) {
                const auto result=encounter->result(); encounter.reset();
                returning=battle_return.begin(result); return false;
            }
            if(progress==n::dialogue::Progress::Suspended) {
                if(auto *menu=encounter->menu_audio()) {
                    audio.play_sound(menu->audio()->kind==n::battle::MenuAudioKind::TextSound ? 7 : menu->audio()->value);
                    menu->respond_audio(); return false;
                }
                if(auto *party=encounter->party_update()) {
                    dismount=bicycle.begin(); finish_dismount=[party] { party->respond_bicycle_dismount(); }; return false;
                }
                if(auto *teddy=encounter->teddy_update()) {
                    dismount=bicycle.begin(); finish_dismount=[teddy] { teddy->respond_bicycle_dismount(); }; return false;
                }
                if(auto *membership=encounter->membership_update()) {
                    dismount=bicycle.begin(); finish_dismount=[membership] { membership->respond_bicycle_dismount(); }; return false;
                }
                drive_scene(encounter->scene());
            }
            return false;
        }
        if(instant) {
            const auto progress=instant->advance(); ++work;
            if(progress==n::dialogue::Progress::Finished) {
                instant.reset(); returning=battle_return.begin(0,n::WorldBattleReturnKind::InstantWin); return false;
            }
            if(progress==n::dialogue::Progress::Suspended) drive_scene(instant->scene());
            return false;
        }
        if(scene) {
            const auto progress=scene->advance(); ++work;
            if(progress==n::dialogue::Progress::Finished) scene.reset();
            else if(progress==n::dialogue::Progress::Suspended) drive_scene(scene.get());
            return false;
        }
        if(phase==2) { queued(); ++work; return false; }
        if(phase==6) {main_tail();return false;}
        if(phase==1) {
            const auto &state=world.queue.state();
            const auto &appearance=world.actors.appearance_scene();
            if(state.current!=state.next && !appearance.battle_swirl_ticks &&
               !world.maintenance.enemy_touched && !world.control.encounter.mode) {
                phase=2; queued(); return false;
            }
            if(world.control.automatic_mode!=2 && world.interactions.state().walking_style!=6 &&
               !appearance.battle_swirl_ticks) {
                if(world.control.encounter.mode) {
                    if(n::battle::instant_win_check(battle.instant_check,world.party,world.encounter,
                        *battle_content.enemies,*battle_content.outcomes)) {
                        instant=battle.outcomes.begin_instant_victory(); ++encounters_started;
                    }
                    else { fading=entry_fade.begin(1,1); phase=3; }
                    return false;
                }
                const auto pressed=world.input.pressed[0];
                if((pressed&0x00a0) && world.interactions.state().walking_style==3) {
                    world.interactions.set_actors_paused(true);
                    dismount=bicycle.begin();
                    finish_dismount=[this] {
                        world.interactions.set_actors_paused(false);
                        runtime=world.runtime->begin_main_frame();
                    };
                    return false;
                }
                if(world.session.input_disable_frames) --world.session.input_disable_frames;
                else if(!world.queue.pending()) {
                    std::optional<n::world::menu::Entry> entry;
                    if(pressed&0x0080) entry=n::world::menu::Entry::Commands;
                    else if((pressed&0xa000) && world.interactions.state().walking_style!=3)
                        entry=n::world::menu::Entry::Meters;
                    else if(pressed&0x0040) {
                        if(n::party::Queries(world.party).item_carrier(0xff,202)) {
                            world.interactions.set_actors_paused(true);
                            showing_map=town_map.begin(); ++maps_started; return false;
                        }
                    }
                    else if(pressed&0x0020) entry=n::world::menu::Entry::CheckTalk;
                    if(entry) {
                        world_menu=world.command_menu->begin(*entry); ++menus_opened; return false;
                    }
                }
            }
            main_tail();return false;
        }
        throw std::logic_error("Native session lost its gameplay continuation");
    }
} // namespace eb
