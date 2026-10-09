#include "state.hpp"
namespace eb {
void NativeSession::State::require() const {
        if(failed || observing) throw std::logic_error("Native session is failed or inside its frame observer");
    }
void NativeSession::State::advance_boundary() {
        physical_clock.advance_boundary(audio);
    }
bool NativeSession::State::service(n::WorldRuntime::Operation &operation,std::uint16_t buttons) {
        if(operation.maintenance_request()) {
            const auto &request=*operation.maintenance_request();
            if(request.kind==n::WorldMaintenanceService::SectorMusic) {
                if(!sector_music) {
                    sector_music=n::world::music::SectorTransition::begin(*world.runtime,world.music,
                        world.music_state,world.interactions.state(),world.clock,operation);
                    sector_music_parent=&operation;
                }
                if(sector_music_parent!=&operation)
                    throw std::logic_error("Sector music lost its actual suspended parent");
                const auto progress=sector_music->advance();
                if(progress==n::dialogue::Progress::Finished) {
                    sector_music.reset();sector_music_parent=nullptr;
                    operation.respond_maintenance();return false;
                }
                if(progress==n::dialogue::Progress::Suspended)
                    return service(*sector_music->runtime_operation(),buttons);
                return false;
            }
            throw std::runtime_error("Native session reached an unported world maintenance service");
        }
        if(!operation.service()) return false;
        for(const auto &sound:world.runtime->take_sound_events()) audio.play_sound(sound.sound);
        switch(*operation.service()) {
        case n::story::SceneService::Frame: {
            const auto boundary=operation.frame_requirement();
            if(boundary!=n::story::FrameRequirement::InputOnly) {
                advance_boundary();
                if(boundary==n::story::FrameRequirement::NmiPublication) audio.publication();
                else if(world.clock.effective_interrupt_mask() & 0x80) {
                    world.runtime->interrupt_publication(); audio.publication();
                }
            }
            operation.complete_frame({buttons,0});
            if(boundary==n::story::FrameRequirement::InputOnly) return false;
            physical_clock.finish_frame(audio); return true;
        }
        case n::story::SceneService::Publication:
            advance_boundary(); audio.publication();
            operation.complete_publication(); physical_clock.finish_frame(audio); return true;
        case n::story::SceneService::ScriptSound:
            audio.script_sound(operation.script_sound()); operation.respond_script_sound(); return false;
        case n::story::SceneService::Dialogue: {
            const auto &event=operation.dialogue_event();
            if(event && std::holds_alternative<n::dialogue::TextEffect>(*event)) {
                audio.play_sound(7); operation.respond_dialogue({}); return false;
            }
            if(event) if(const auto *menu=std::get_if<n::dialogue::MenuEffect>(&*event);
                menu && menu->kind==n::dialogue::MenuEffectKind::Sound) {
                audio.play_sound(menu->value); operation.respond_dialogue({}); return false;
            }
            if(event) if(const auto *request=std::get_if<n::dialogue::Request>(&*event);
                request && request->kind==n::dialogue::RequestKind::ScriptMusic) {
                if(!request->script_music) throw std::logic_error("Native music lost its typed request");
                world.music.script_music(*request->script_music); operation.respond_dialogue({}); return false;
            }
            if(event) if(const auto *request=std::get_if<n::dialogue::Request>(&*event);
                request && request->kind==n::dialogue::RequestKind::Teleport) {
                if(teleporting) throw std::logic_error("Native teleport owner is already active");
                teleporting=script_teleport.begin(request->count,operation);
                teleport_parent=&operation; return false;
            }
            if(event) if(const auto *request=std::get_if<n::dialogue::Request>(&*event);
                request && request->kind==n::dialogue::RequestKind::SpecialEvent) {
                if(!request->special_event || special_event)
                    throw std::logic_error("Native special event lost its typed request or owner");
                special_event=special_events.begin(*request->special_event,world.runtime->scene_operation(operation),&operation);
                special_parent=&operation; return false;
            }
            std::ostringstream message;
            message<<"Native session reached an unported authored dialogue service";
            if(event) if(const auto *request=std::get_if<n::dialogue::Request>(&*event))
                message<<" (command "<<unsigned(request->command)<<", selector "<<unsigned(request->selector)<<")";
            throw std::runtime_error(message.str());
        }
        case n::story::SceneService::BicycleDismount:
            dismount=bicycle.begin(&operation);
            finish_dismount=[&operation] { operation.respond_bicycle_dismount(); };
            return false;
        case n::story::SceneService::ActorEngine: {
            const auto &request=operation.actor_request();
            if(request && request->binding.operation==n::NativeAction::PlaySound) {
                audio.script_sound(operation.actor_sound());
                operation.respond_actor_sound(); return false;
            }
            if(request && request->binding.operation==n::NativeAction::CheckContentIntegrity) {
                world.session.content_integrity=content.integrity_difference;
                operation.respond_actor(world.session.content_integrity,request->binding.parameter_bytes);
                return false;
            }
            std::ostringstream message;
            message<<"Native session reached an unported authored actor service";
            if(request) message<<" (kind "<<unsigned(request->action.kind)
                <<", content "<<request->action.identifier<<", source "<<request->diagnostic.authored_identifier<<")";
            throw std::runtime_error(message.str());
        }
        default: throw std::runtime_error("Native session reached an unported scene lifecycle service");
        }
    }
bool NativeSession::State::pump_runtime(std::uint16_t buttons) {
        const auto progress=runtime->advance(4096); ++work;
        if(progress==n::dialogue::Progress::Finished) { runtime.reset(); return false; }
        if(progress==n::dialogue::Progress::Suspended) return service(*runtime,buttons);
        return false;
    }
void NativeSession::State::drive_scene(n::story::Scene::Operation *child) {
        if(!child) throw std::logic_error("Native caller suspended without its actual scene child");
        runtime=world.runtime->service_child(*child);
    }
} // namespace eb
