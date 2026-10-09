#include "eb/native/story/scene.hpp"
#include "eb/native/story/source_work.hpp"
#include "eb/native/story/source_frame_input.hpp"
#include "eb/native/story/source_screen.hpp"
#include "eb/native/entities/graphics/source_objects.hpp"
#include "eb/native/entities/graphics/source_actor_draw.hpp"
#include "eb/native/entities/graphics/source_global_draw.hpp"
#include "eb/native/story/source_foreground.hpp"
#include "eb/native/story/source_window_publication.hpp"
#include "eb/native/story/source_random.hpp"
#include "eb/native/story/source_meter_roller.hpp"
#include "eb/native/story/source_meter_tiles.hpp"
#include "eb/native/story/source_meter_status.hpp"
#include "eb/native/world_input_playback.hpp"
#include "eb/native/battle/frame_display.hpp"
#include "eb/native/world_display_fade.hpp"
#include "eb/native/battle/animation_commands.hpp"
#include "eb/native/battle/frame.hpp"
#include "eb/native/story/window_layer.hpp"
#include "eb/native/story/party_formation.hpp"
#include "eb/native/story/battle_dialogue.hpp"
#include "eb/native/story/teddy_party.hpp"
#include "eb/native/npcs/interaction.hpp"
#include "eb/native/party/inventory.hpp"
#include <stdexcept>
#include <utility>

namespace eb::native::story {
namespace {
void require(bool ok, const char *message) { if (!ok) throw std::logic_error(message); }
float camera_pixel(std::uint16_t value) {
    return float(value < 0x8000 ? int(value) : int(value) - 65536);
}
}
struct Scene::Execution {
    dialogue::WindowHost &windows;
    std::weak_ptr<const void> windows_lifetime;
    party::State &party;
    std::weak_ptr<const void> party_lifetime;
    RandomState &random;
    std::weak_ptr<const void> random_lifetime;
    npcs::Interactions *interactions{};
    party::Inventory *inventory{};
    PartyFormation *formation{};
    TeddyParty *teddy{};
    WorldControlCommandService *world_control{};
    battle::AnimationCommands *animations{};
    battle::Frame *battle_frame{};
    party::MeterWindows &meters;
    std::weak_ptr<const void> meters_lifetime;
    TickState &clock;
    InputState &input;
    ActorWorld &actors;
    WorldMapArea &area;
    AreaPalettes &palettes;
    SceneView view;
    Ticks ticks;
    std::vector<std::uint64_t> stack;
    std::uint64_t next{}, frames{};
    bool poisoned{}, publishing{};
    ScenePublication *publication{};
    SourceWorkService *source_work{};
    const WorldDisplayFade *source_fade{};
    std::weak_ptr<const void> source_fade_lifetime;
    WorldInputPlayback *source_input{};
    std::shared_ptr<const DirectSceneFrame> objects, world, published;
    std::vector<WorldSoundEvent> sounds;
    Execution(dialogue::WindowHost &w, party::State &p, RandomState &r, party::MeterWindows &m,
              TickState &c, InputState &i, ActorWorld &a, WorldMapArea &map, AreaPalettes &colors, SceneView v)
        : windows(w), windows_lifetime(w.source_lifetime()), party(p), party_lifetime(p.source_lifetime()), random(r), random_lifetime(r.source_lifetime()), meters(m), meters_lifetime(m.source_lifetime()), clock(c), input(i), actors(a), area(map), palettes(colors), view(v), ticks(w,p,r,m,c) {
        require(view.width >= 256, "Native story scene must include the canonical screen");
        objects = actors.draw(view.width,palettes.sprites,view.identity,view.overscan);
        screen();
        publish();
        // Commit the borrowed identity only after every fallible capture has
        // succeeded; a failed constructor must not pin a discarded party.
        windows.bind_party(p);
    }
    void check(std::uint64_t owner) const {
        require(!poisoned && (!source_work || !source_work->failed()),
                "An abandoned scene or source-work operation invalidated its continuation");
        require((stack.empty() ? 0 : stack.back()) == owner, "A child operation owns the native scene");
    }
    void screen() {
        const auto &camera = actors.scene();
        // Actor ticks and scene frames differ during frame-only and nested
        // waits. Retag a copy for this screen without mutating its capture.
        std::shared_ptr<const DirectSceneFrame> scene_objects;
        if (objects) {
            auto copy = std::make_shared<DirectSceneFrame>(*objects);
            copy->frame = frames;
            scene_objects = std::move(copy);
        }
        world = draw_world_scene(area,palettes,
            {camera_pixel(camera.camera_x),camera_pixel(camera.camera_y),view.width,view.overscan,
             frames,view.identity,view.backdrop},std::move(scene_objects));
    }
    std::shared_ptr<const DirectSceneFrame> capture(const DirectSceneFrame &stamp, bool next) {
        // A battle publisher owns its actual planes and window composition.
        // Do not build or capacity-check a discarded overworld+window atlas.
        if (publication && publication->window_host())
            return next ? publication->capture_next(stamp) : publication->capture(stamp);
        auto result = with_window_layer(stamp,*windows.frame(),windows.palette(),view.raised_windows);
        if (!publication) return result;
        return next ? publication->capture_next(*result) : publication->capture(*result);
    }
    void publish() {
        auto stamp = *world;
        stamp.frame = frames;
        published = capture(stamp, false);
    }
    void publish_nmi(FrameBoundaryService *boundary) {
        require(!poisoned && !publishing && (clock.effective_interrupt_mask() & 0x80),
                "Publication requires the actual healthy nonrecursive NMI owner");
        if (boundary) boundary->validate_publication();
        // Failed admission or immutable capture has not consumed this clock.
        while (windows.publish_next()) {}
        auto stamp = *world; stamp.frame = frames + 1;
        auto result = capture(stamp, true);
        ++frames; ++clock.frame_counter; ++clock.new_frame_started; ++clock.publications;
        published = std::move(result);
        publishing = true;
        try {
            if (publication) publication->complete_publication();
            if (boundary) boundary->after_publication();
            if (publication) publication->complete_interrupt();
            if (boundary && boundary->changes_display_registers()) {
                stamp.frame = frames;
                published = capture(stamp, false);
            }
            publishing = false;
        } catch (...) { publishing = false; poisoned = true; throw; }
    }
};
void Scene::reset_object_builder() noexcept { execution_->objects.reset(); }
void Scene::bind_source_work(SourceWorkService &work,const battle::PsiDisplayState &video) {
    auto &s=*execution_;
    require(!s.poisoned && !s.publishing && s.stack.empty() && s.publication &&
            s.publication->frame_display() && s.publication->frame_display()->uses(video) &&
            work.uses(s.actors,video) && (!s.source_work || s.source_work==&work),
            "Source work requires the idle actual Scene actor/display owners");
    s.source_work=&work;
}
void Scene::clear_source_work(const SourceWorkService &work) noexcept {
    if(execution_->source_work==&work) {
        if(work.failed() || !execution_->stack.empty() || execution_->publishing)execution_->poisoned=true;
        execution_->source_work=nullptr;
    }
}
bool Scene::uses_source_work(const SourceWorkService &work) const noexcept {
    return execution_->source_work==&work;
}
void Scene::bind_source_input(WorldInputPlayback &input) {
    auto &s=*execution_;s.check(0);
    require(!s.publishing && input.uses(s.input) && (!s.source_input || s.source_input==&input),
            "Source input requires this Scene's actual idle processed/raw owners");
    s.source_input=&input;
}
struct Scene::Operation::Execution {
    Scene::Execution &scene;
    dialogue::Conversation *conversation{};
    Ticks::Operation *parent_tick{};
    std::unique_ptr<Ticks::Operation> tick;
    std::unique_ptr<party::MeterWindows::Operation> meter;
    std::unique_ptr<party::Inventory::Operation> receipt;
    std::unique_ptr<PartyFormation::Operation> formation;
    std::unique_ptr<TeddyParty::Operation> teddy;
    std::unique_ptr<battle::AnimationCommands::Operation> animation;
    std::unique_ptr<battle::Frame::Operation> battle_frame;
    std::uint64_t owner{};
    std::uint64_t parent_owner{};
    std::uint64_t publications_at_wait{};
    std::uint64_t source_interrupts_at_wait{};
    std::shared_ptr<SourceFrameInput::Receipt> source_frame;
    std::shared_ptr<SourceScreenReceipt> source_screen;
    std::shared_ptr<SourceObjectReceipt> source_objects;
    std::shared_ptr<SourceForegroundReceipt> source_foreground_receipt;
    bool source_foreground{},source_window{},source_random{},source_meter{};
    bool source_tiles{},source_status{};
    const void *source_status_control{},*source_status_counter{},*source_status_palette{};
    std::shared_ptr<SourceMeterStatusReceipt> source_status_receipt;
    std::function<void()> source_status_guard;
    const void *source_tiles_control{},*source_tiles_scratch{};
    std::shared_ptr<SourceMeterTilesReceipt> source_tiles_receipt;
    std::function<void()> source_tiles_guard;
    std::shared_ptr<SourceMeterRollerReceipt> source_meter_receipt;
    std::function<void()> source_meter_guard;
    std::shared_ptr<SourceRandomReceipt> source_random_receipt;
    std::shared_ptr<SourceWindowPublicationReceipt> source_window_receipt;
    bool done{}, tick_for_meter{}, party_sprite_blink{}, battle_after_wait{}, publication_only{};
    bool action_script_wait{};
    ActorFrameService *actor_frame_service{};
    std::optional<SceneService> pending;
    Execution(Scene::Execution &s, dialogue::Conversation *c, Ticks::Operation *parent, std::uint64_t token)
        : scene(s), conversation(c), parent_tick(parent), owner(token) {}
    void start_tick(TickKind kind) {
        tick = parent_tick ? scene.ticks.begin_nested(kind,*parent_tick) : scene.ticks.begin(kind);
    }
    void start_window_effect(dialogue::WindowEffect effect) {
        switch(effect.kind) {
        case dialogue::WindowEffectKind::WindowTick: start_tick(TickKind::Window); return;
        case dialogue::WindowEffectKind::FrameWait: start_tick(TickKind::Frame); return;
        case dialogue::WindowEffectKind::ClearPartyBlink: party_sprite_blink=true; return;
        case dialogue::WindowEffectKind::HideMeters:
            meter=scene.meters.begin_hide(scene.windows.prompt_state().battle_mode!=0); return;
        }
        throw std::invalid_argument("Unknown native window effect");
    }
    void check(SceneService kind) const {
        scene.check(owner);
        require(pending == kind,"Native scene has no matching pending service");
    }
    void answer_conversation(std::uint16_t value = 0) {
        // Prompt callbacks may update the shared press word after polling.
        // Preserve that live word; held-repeat still comes from input processing.
        conversation->respond({value,scene.windows.prompt_state().pressed,scene.input.held[0]});
    }
    void answer_item(dialogue::ItemCommandResult result) {
        dialogue::Response response{0,scene.windows.prompt_state().pressed,scene.input.held[0]};
        response.item_result=std::move(result);
        conversation->respond(response);
    }
    void finish() { scene.stack.pop_back(); done = true; }
    void record_publication_wait() noexcept {
        publications_at_wait=scene.clock.publications;
        source_interrupts_at_wait=scene.source_work?scene.source_work->completed_source_interrupts():0;
    }
    void step() {
        auto &s = scene;
        if (publication_only) { finish(); return; }
        if (battle_frame) {
            if (battle_frame->advance()) {
                battle_frame.reset();
                if (tick) tick->respond();
                else finish();
            } else {
                require(battle_frame->needs_publication(), "Battle frame lost its transfer continuation");
                pending = SceneService::Publication;
                record_publication_wait();
            }
            return;
        }
        if (animation) {
            if (animation->advance()) {
                const auto result = animation->result();
                animation.reset();
                if (conversation) {
                    dialogue::Response response{0, s.windows.prompt_state().pressed, s.input.held[0]};
                    response.battle_animation_result = dialogue::BattleAnimationResult{true, result};
                    conversation->respond(response);
                } else finish();
            } else {
                require(animation->service().has_value(), "Battle animation lost its pending setup service");
                pending = *animation->service() == battle::PsiSetupService::Publication
                    ? SceneService::Publication : SceneService::Frame;
                record_publication_wait();
            }
            return;
        }
        if (party_sprite_blink) {
            // CREATE_WINDOW calls C07C5B, which clears the party actors'
            // spritemap high-bit flags only while intangibility is nonzero.
            // This is not the meter selection helper and adds no frame wait.
            if (s.actors.appearance_scene().intangibility_ticks) pending=SceneService::PartySpriteBlink;
            else {
                party_sprite_blink=false;
                if(conversation) answer_conversation();
                else finish();
            }
            return;
        }
        if (tick) {
            const auto progress = tick->advance(1);
            if (progress == dialogue::Progress::Finished) {
                if (battle_after_wait) {
                    // A real WAIT callback may invalidate admission. Preserve
                    // the completed tick until its child has actually begun,
                    // so repairing that state retries without another WAIT.
                    auto child = s.battle_frame->begin();
                    tick.reset();
                    battle_after_wait = false;
                    battle_frame = std::move(child);
                } else {
                    tick.reset();
                    if (tick_for_meter) { meter->respond(); tick_for_meter = false; }
                    else if (action_script_wait) {
                        // C102D0 tests the live signal after WINDOW_TICK and
                        // each C1004E; only the initial tick rolls text state.
                        auto& signal = s.actors.scene().action_script_state;
                        if (signal) {
                            signal = 0;
                            action_script_wait = false;
                            answer_conversation();
                        } else if (s.windows.prompt_state().debug &&
                                   (s.input.state[0] & 0x3000) == 0x3000) {
                            action_script_wait = false;
                            answer_conversation();
                        } else start_tick(TickKind::WorldFrame);
                    }
                    else if (conversation) answer_conversation();
                    else finish();
                }
                return;
            }
            if (progress == dialogue::Progress::BudgetExhausted) return;
            switch (*tick->service()) {
            case TickService::WindowPublication:pending=SceneService::WindowPublication;return;
            case TickService::SourceMeterStatus:pending=SceneService::SourceMeterStatus;return;
            case TickService::SourceMeterTiles:pending=SceneService::SourceMeterTiles;return;
            case TickService::SourceMeterRoller:pending=SceneService::SourceMeterRoller;return;
            case TickService::SourceRandom:pending=SceneService::SourceRandom;return;
            case TickService::ForegroundPrefix:pending=SceneService::ForegroundPrefix;return;
            case TickService::SuppressedActors:pending=SceneService::SuppressedActors;return;
            case TickService::ForegroundReturn:pending=SceneService::ForegroundReturn;return;
            case TickService::ClearObjects:
                if(s.source_work)s.source_work->clear_objects();
                s.objects.reset();
                if(actor_frame_service) actor_frame_service->apply(ActorFramePhase::ObjectsCleared);
                tick->respond();
                return;
            case TickService::RunActors: {
                const auto result = s.actors.advance_tick();
                if (result == WorldTickResult::NeedsEngine) pending = SceneService::ActorEngine;
                else if (result == WorldTickResult::NeedsCameraRefresh) pending = SceneService::CameraRefresh;
                else {
                    s.objects = s.actors.draw(s.view.width,s.palettes.sprites,s.view.identity,s.view.overscan);
                    auto sounds = s.actors.take_sound_events();
                    s.sounds.insert(s.sounds.end(),sounds.begin(),sounds.end());
                    tick->respond();
                }
                return;
            }
            case TickService::UpdateScreen:
                if(s.source_work) {pending=SceneService::ScreenUpdate;return;}
                if(actor_frame_service) actor_frame_service->apply(ActorFramePhase::BeforeScreen);
                s.screen();
                if(actor_frame_service) actor_frame_service->apply(ActorFramePhase::ScreenUpdated);
                if(s.publication)s.publication->stage_world_objects(s.objects);
                tick->respond(); return;
            case TickService::FrameBoundary:
                if (s.battle_frame && tick->battle_body_pending()) {
                    require(s.publication && s.publication->supports_battle_frame(*s.battle_frame),
                            "Battle frame requires its actual display publisher");
                    s.battle_frame->validate_begin();
                }
                publications_at_wait = s.clock.publications;
                pending = SceneService::Frame;
                return;
            case TickService::BattleHelper:
                if (s.battle_frame) battle_frame = s.battle_frame->begin();
                else pending = SceneService::BattleHelper;
                return;
            }
        }
        if (meter) {
            if (meter->advance() == dialogue::OutputProgress::Complete) {
                meter.reset();
                if(conversation) answer_conversation();
                else finish();
            } else {
                require(meter->effect() && meter->effect()->kind == dialogue::WindowEffectKind::FrameWait,
                        "Unexpected native meter continuation");
                tick_for_meter = true;
                start_tick(TickKind::Frame);
            }
            return;
        }
        if (teddy) {
            const auto progress = teddy->advance(1);
            if (progress == dialogue::Progress::Finished) {
                teddy.reset();
                receipt->respond();
            } else if (progress == dialogue::Progress::Suspended) {
                require(teddy->service() == PartyFormationService::BicycleDismount,
                        "Unknown native Teddy lifecycle service");
                pending = SceneService::BicycleDismount;
            }
            return;
        }
        if (receipt) {
            const auto progress=receipt->advance(1);
            if(progress==dialogue::Progress::Finished) {
                const auto recipient=receipt->recipient();
                const auto &request=std::get<dialogue::Request>(*conversation->event());
                require(request.item_command.has_value(), "Inventory result lost its actual command");
                if(request.item_command->kind==dialogue::ItemCommandKind::Give) {
                    if(!recipient) {pending=SceneService::ItemFailureScan;return;}
                    const auto next=s.inventory->first_empty_index(recipient);
                    answer_item({recipient,next});
                } else answer_item({recipient,{}});
                receipt.reset();
            } else if(progress==dialogue::Progress::Suspended) {
                require(receipt->service()==party::InventoryService::TeddyRefresh ||
                        receipt->service()==party::InventoryService::TeddyRemove,
                        "Unknown native item receipt service");
                if(s.teddy) teddy=receipt->service()==party::InventoryService::TeddyRemove ?
                    s.teddy->begin_remove(receipt->teddy_member()) : s.teddy->begin();
                else pending=SceneService::TeddyRefresh;
            }
            return;
        }
        if (formation) {
            const auto progress = formation->advance(1);
            if (progress == dialogue::Progress::Finished) {
                formation.reset();
                answer_conversation();
            } else if (progress == dialogue::Progress::Suspended) {
                require(formation->service() == PartyFormationService::BicycleDismount,
                        "Unknown native party formation service");
                pending = SceneService::BicycleDismount;
            }
            return;
        }
        require(conversation != nullptr,"Native scene lost its current operation");
        const auto progress = conversation->advance(1);
        if (progress == dialogue::Progress::Finished) { finish(); return; }
        if (progress == dialogue::Progress::BudgetExhausted) return;
        const auto &event = *conversation->event();
        if (const auto *text = std::get_if<dialogue::TextEffect>(&event)) {
            if (text->kind == dialogue::TextEffectKind::WindowTick) start_tick(TickKind::Window);
            else pending = SceneService::Dialogue; // Audio owner must finish TextSound.
        } else if (const auto *window = std::get_if<dialogue::WindowEffect>(&event)) {
            start_window_effect(*window);
        } else if (std::holds_alternative<dialogue::PromptEffect>(event)) start_tick(TickKind::World);
        else if (const auto *request = std::get_if<dialogue::Request>(&event);
                 request && request->kind == dialogue::RequestKind::ScriptSound) {
            require(request->script_sound.has_value(), "Script sound lacks its typed audio service");
            pending = SceneService::ScriptSound;
        } else if (const auto *request = std::get_if<dialogue::Request>(&event);
                   request && request->kind == dialogue::RequestKind::BattleAnimation && s.animations) {
            require(request->battle_animation.has_value(), "Battle animation lacks its typed operands");
            require(s.publication && s.publication->supports_animation(*s.animations),
                    "Battle animation requires its actual display publisher");
            animation = s.animations->begin(request->battle_animation->ally, request->battle_animation->enemy);
        } else if (const auto *request = std::get_if<dialogue::Request>(&event);
                   request && request->kind == dialogue::RequestKind::WorldControl && s.world_control) {
            require(request->world_control.has_value(), "World control lacks its typed command");
            try { s.world_control->apply(*request->world_control); }
            catch (...) { s.poisoned = true; throw; }
            answer_conversation();
        } else if (const auto *request = std::get_if<dialogue::Request>(&event);
                   request && request->kind == dialogue::RequestKind::WaitActionScripts) {
            s.actors.scene().action_script_state = 0;
            s.windows.output().policy().instant = false;
            action_script_wait = true;
            start_tick(TickKind::Window);
        } else if (const auto *request = std::get_if<dialogue::Request>(&event);
                   request && request->kind == dialogue::RequestKind::SoundWorldTick) start_tick(TickKind::World);
        else if (const auto *request = std::get_if<dialogue::Request>(&event);
                 request && request->kind == dialogue::RequestKind::ShowMeters) meter = s.meters.begin_show();
        else if (const auto *request = std::get_if<dialogue::Request>(&event);
                 request && request->kind == dialogue::RequestKind::RefreshParty && s.formation)
            formation = s.formation->begin();
        else if (const auto *request = std::get_if<dialogue::Request>(&event);
                 request && request->kind == dialogue::RequestKind::NpcGift && s.interactions) {
            require(request->npc_gift.has_value(),"Gift request lacks its typed action");
            npcs::GiftAction action;
            switch(*request->npc_gift) {
            case dialogue::NpcGiftAction::Open:action=npcs::GiftAction::Open;break;
            case dialogue::NpcGiftAction::Close:action=npcs::GiftAction::Close;break;
            case dialogue::NpcGiftAction::IsOpen:action=npcs::GiftAction::IsOpen;break;
            default:throw std::logic_error("Unknown native NPC gift action");
            }
            answer_conversation(s.interactions->apply_gift(action));
        } else if (const auto *request = std::get_if<dialogue::Request>(&event);
                   request && request->kind == dialogue::RequestKind::ItemCommand && s.inventory) {
            require(request->item_command.has_value(),"Item request lacks its typed operands");
            const auto& command=*request->item_command;
            switch(command.kind) {
            case dialogue::ItemCommandKind::FindSpace: {
                const auto result=s.inventory->find_space(command.character);
                answer_item({result<0x8000?std::uint32_t(result):0xffff0000u|result,{}});break;
            }
            case dialogue::ItemCommandKind::AddMoney:
                answer_item({s.inventory->add_wallet32(command.amount),{}});break;
            case dialogue::ItemCommandKind::SubtractMoney:
                answer_item({s.inventory->subtract_wallet32(command.amount),{}});break;
            case dialogue::ItemCommandKind::Take:
                receipt=s.inventory->begin_take(command.character,command.item);break;
            case dialogue::ItemCommandKind::Remove:
                receipt=s.inventory->begin_remove(command.character,command.item);break;
            case dialogue::ItemCommandKind::Give:
                receipt=s.inventory->begin_give(command.character,command.item);break;
            default:throw std::logic_error("Unknown native item command");
            }
        }
        else if (const auto *menu = std::get_if<dialogue::MenuEffect>(&event);
                 menu && menu->kind == dialogue::MenuEffectKind::Input) start_tick(TickKind::World);
        else pending = SceneService::Dialogue;
    }
};
Scene::Scene(dialogue::WindowHost &w, party::State &p, RandomState &r, party::MeterWindows &m,
             TickState &c, InputState &i, ActorWorld &a, WorldMapArea &map, AreaPalettes &colors, SceneView v)
    : execution_(std::make_unique<Execution>(w,p,r,m,c,i,a,map,colors,v)) {}
Scene::~Scene() = default;
Scene::Operation::Operation(std::unique_ptr<Execution> e) : execution_(std::move(e)) {}
Scene::Operation::~Operation() {
    if(execution_->source_frame)execution_->source_frame->live=false;
    if(execution_->source_screen)execution_->source_screen->live=false;
    if(execution_->source_objects)execution_->source_objects->live=false;
    if(execution_->source_foreground_receipt)execution_->source_foreground_receipt->live=false;
    if(execution_->source_window_receipt)execution_->source_window_receipt->live=false;
    if(execution_->source_status_receipt)execution_->source_status_receipt->live=false;
    if(execution_->source_tiles_receipt)execution_->source_tiles_receipt->live=false;
    if(execution_->source_meter_receipt)execution_->source_meter_receipt->live=false;
    if(execution_->source_random_receipt)execution_->source_random_receipt->live=false;
    if (!execution_->done) execution_->scene.poisoned = true;
}
void Scene::require_nested(const Operation &parent) const {
    require_nested_impl(parent,false);
}
void Scene::require_nested_impl(const Operation &parent,bool camera_publication) const {
    auto &s = *execution_;
    const auto &p = *parent.execution_;
    require(&p.scene == &s, "Nested scene work requires this scene's actual parent");
    s.check(p.owner);
    require(!p.done && (((p.pending == SceneService::ActorEngine ||
        (camera_publication && p.pending == SceneService::CameraRefresh && s.actors.camera_refresh())) && p.tick) ||
        (!p.tick && (p.pending == SceneService::Dialogue || p.pending == SceneService::BicycleDismount))),
        "Nested scene work requires a suspended actor, dialogue or formation callback");
}
std::unique_ptr<Scene::Operation> Scene::begin(std::optional<TickKind> kind, dialogue::Conversation *conversation,
                                            Operation *parent,std::optional<dialogue::WindowEffect> window,
                                            std::optional<std::array<std::uint16_t, 2>> animation,
                                            bool battle_wait,bool camera_publication) {
    auto &s = *execution_;
    s.check(parent ? parent->execution_->owner : 0);
    Ticks::Operation *parent_tick{};
    if (parent) {
        require_nested_impl(*parent,camera_publication);
        auto &p = *parent->execution_;
        parent_tick = p.tick ? p.tick.get() : p.parent_tick;
    }
    if (conversation) require(&conversation->output() == &s.windows.output(),
                              "Conversation and scene must share the window output owner");
    if (battle_wait) {
        require(s.battle_frame && s.publication && s.publication->supports_battle_frame(*s.battle_frame),
                "Battle frame requires its actual display publisher");
        s.battle_frame->validate_begin();
    }
    const auto owner = ++s.next;
    auto e = std::make_unique<Operation::Execution>(s,conversation,parent_tick,owner);
    e->parent_owner = parent ? parent->execution_->owner : 0;
    if (kind) e->start_tick(*kind);
    e->battle_after_wait = battle_wait;
    if (window) e->start_window_effect(*window);
    if (animation) {
        require(s.animations != nullptr, "Scene has no battle animation owner");
        require(s.publication && s.publication->supports_animation(*s.animations),
                "Battle animation requires its actual display publisher");
        e->animation = s.animations->begin((*animation)[0], (*animation)[1]);
    }
    auto operation = std::unique_ptr<Operation>(new Operation(std::move(e)));
    s.stack.push_back(owner);
    return operation;
}
std::unique_ptr<Scene::Operation> Scene::begin_publication() {
    auto &s = *execution_;
    s.check(0);
    require(s.clock.effective_interrupt_mask() & 0x80,
            "Publication requires the actual native NMI interrupt source");
    auto operation = begin({}, nullptr, nullptr);
    operation->execution_->publication_only = true;
    operation->execution_->pending = SceneService::Publication;
    operation->execution_->record_publication_wait();
    return operation;
}
void Scene::require_content_boundary(Operation *parent) const {
    auto &s=*execution_;
    if (!parent) {s.check(0);return;}
    auto &p=*parent->execution_;
    require(&p.scene==&s,"Content work requires this Scene's actual parent");
    s.check(p.owner);
    if(!p.done && p.tick && p.pending==SceneService::ActorEngine) {
      const auto &actor=s.actors.request();
      require(actor.has_value(),"Cinematic actor publication lost its actual request");
      const auto operation=actor->binding.operation;
      require((actor->origin==WorldActionOrigin::TickCallback && operation==NativeAction::TickCastScroll) ||
          (actor->origin==WorldActionOrigin::Script &&
           (operation==NativeAction::PrintCastName || operation==NativeAction::PrintCastPartyName ||
            operation==NativeAction::PrintCastNameFromVariable ||
            operation==NativeAction::CreateCastActor || operation==NativeAction::CreateActor ||
            operation==NativeAction::InitializePartyActor ||
            operation==NativeAction::SelectFourInitial || operation==NativeAction::SelectFourAnimation ||
            operation==NativeAction::SelectFourFirst || operation==NativeAction::SelectFourSecond ||
            operation==NativeAction::StepFourWalk || operation==NativeAction::StepEightAnimation ||
            operation==NativeAction::SelectEightCurrent ||
            operation==NativeAction::FollowVariableAngle || operation==NativeAction::SetDirectionFrame)),
          "Nested actor publication requires its actual graphics or cast DMA command");
      return;
    }
    require(!p.done && !p.tick && p.pending==SceneService::Dialogue && p.conversation,
            "Content work requires a suspended authored content conversation");
    const auto &event=p.conversation->event();
    const auto *request=event?std::get_if<dialogue::Request>(&*event):nullptr;
    require(request && (request->kind==dialogue::RequestKind::Teleport ||
        (request->kind==dialogue::RequestKind::SpecialEvent &&
         (request->special_event==1 || request->special_event==2 ||
          request->special_event==7 || request->special_event==9 || request->special_event==11 ||
          request->special_event==12 || request->special_event==16 || request->special_event==17))),
        "Nested map content requires an actual authored teleport or cinematic request");
}
std::unique_ptr<Scene::Operation> Scene::begin_nested_publication(Operation &parent) {
    require_content_boundary(&parent);
    require(execution_->clock.effective_interrupt_mask() & 0x80,
            "Publication requires the actual native NMI interrupt source");
    auto operation=begin({},nullptr,&parent);
    operation->execution_->publication_only=true;
    operation->execution_->pending=SceneService::Publication;
    operation->execution_->record_publication_wait();
    return operation;
}
std::unique_ptr<Scene::Operation> Scene::begin_actor_publication(Operation &parent) {
    auto &s=*execution_;auto &p=*parent.execution_;
    require(&p.scene==&s,"Actor publication requires its actual Scene parent");
    s.check(p.owner);
    const auto &request=s.actors.request();
    const bool camera=!p.done&&p.tick&&p.pending==SceneService::CameraRefresh&&s.actors.camera_refresh();
    const bool maintenance=!p.done&&p.tick&&p.pending==SceneService::ActorEngine&&request&&
        request->origin==WorldActionOrigin::TickCallback&&request->binding.operation==NativeAction::RunWorldMaintenance;
    if(!camera&&!maintenance)return begin_nested_publication(parent);
    require(s.clock.effective_interrupt_mask()&0x80,"Actor publication requires its actual NMI source");
    auto operation=begin({},nullptr,&parent,{}, {},false,camera);
    operation->execution_->publication_only=true;
    operation->execution_->pending=SceneService::Publication;
    operation->execution_->record_publication_wait();
    return operation;
}
std::unique_ptr<Scene::Operation> Scene::begin_battle_frame() {
    return begin(TickKind::Frame, nullptr, nullptr, {}, {}, true);
}
std::unique_ptr<Scene::Operation> Scene::begin_nested_battle_frame(Operation &parent) {
    return begin(TickKind::Frame, nullptr, &parent, {}, {}, true);
}
std::unique_ptr<Scene::Operation> Scene::begin_animation(std::uint16_t ally, std::uint16_t enemy) {
    return begin({}, nullptr, nullptr, {}, std::array<std::uint16_t, 2>{ally, enemy});
}
std::unique_ptr<Scene::Operation> Scene::begin_nested_animation(std::uint16_t ally, std::uint16_t enemy, Operation &parent) {
    return begin({}, nullptr, &parent, {}, std::array<std::uint16_t, 2>{ally, enemy});
}
std::unique_ptr<Scene::Operation> Scene::begin(TickKind kind) { return begin(kind,nullptr,nullptr); }
std::unique_ptr<Scene::Operation> Scene::begin_source_meter_status_window_tick_impl(SourceWorkService &work,
    std::function<void(TickState&,const battle::FrameDisplay&,party::State&,party::MeterWindows&,dialogue::WindowHost&)> validator,
    std::function<void()> extra_guard,const void *control,const void *counter,const void *palette) {
    auto &s=*execution_;
    require(s.source_work==&work,"Source meter status requires its actual bound work owner");
    require(!s.party_lifetime.expired()&&!s.meters_lifetime.expired()&&!s.random_lifetime.expired()&&
        !s.windows_lifetime.expired(),"Source meter status lost an actual prefix owner");
    s.check(0);
    require(!s.windows.pending_publications()&&!s.publishing&&s.publication&&s.publication->frame_display(),
        "Source meter status requires its actual idle Scene/display entry");
    require(s.meters.bound_to(s.windows,s.party)&&!s.windows.output().policy().instant&&!s.windows.menu_state().early_tick_exit,
        "Source meter status requires its exact non-exiting meter/party/window prefix");
    extra_guard();validator(s.clock,*s.publication->frame_display(),s.party,s.meters,s.windows);
    auto operation=begin(TickKind::Window,nullptr,nullptr);
    operation->execution_->tick->enable_source_meter_status();operation->execution_->source_status=true;
    operation->execution_->source_status_control=control;operation->execution_->source_status_counter=counter;operation->execution_->source_status_palette=palette;
    operation->execution_->source_status_guard=[&s,&work,extra_guard] {
        require(s.source_work==&work,"Source meter status work owner was detached");
        require(!s.party_lifetime.expired()&&!s.meters_lifetime.expired()&&!s.windows_lifetime.expired()&&
            !s.random_lifetime.expired(),"Source meter status lost an actual prefix/party/meter owner");
        extra_guard();require(s.meters.bound_to(s.windows,s.party),"Source meter status lost its exact meter/party/window binding");
    };
    return operation;
}
std::unique_ptr<Scene::Operation> Scene::begin_source_meter_tiles_window_tick_impl(SourceWorkService &work,
    std::function<void(TickState&,const battle::FrameDisplay&,party::State&,party::MeterWindows&,dialogue::WindowHost&)> validator,
    std::function<void()> extra_guard,const void *control,const void *scratch) {
    auto &s=*execution_;
    require(s.source_work==&work,"Source meter tiles requires its actual bound work owner");
    require(!s.party_lifetime.expired()&&!s.meters_lifetime.expired()&&!s.random_lifetime.expired()&&
        !s.windows_lifetime.expired(),"Source meter tiles lost an actual prefix owner");
    s.check(0);
    require(!s.windows.pending_publications()&&!s.publishing&&s.publication&&s.publication->frame_display(),
        "Source meter tiles requires its actual idle Scene/display entry");
    require(s.meters.bound_to(s.windows,s.party)&&!s.windows.output().policy().instant&&!s.windows.menu_state().early_tick_exit,
        "Source meter tiles requires its exact non-exiting meter/party/window prefix");
    extra_guard();validator(s.clock,*s.publication->frame_display(),s.party,s.meters,s.windows);
    auto operation=begin(TickKind::Window,nullptr,nullptr);
    operation->execution_->tick->enable_source_meter_tiles();operation->execution_->source_tiles=true;
    operation->execution_->source_tiles_control=control;operation->execution_->source_tiles_scratch=scratch;
    operation->execution_->source_tiles_guard=[&s,&work,extra_guard] {
        require(s.source_work==&work,"Source meter tiles work owner was detached");
        require(!s.party_lifetime.expired()&&!s.meters_lifetime.expired()&&!s.windows_lifetime.expired()&&
            !s.random_lifetime.expired(),"Source meter tiles lost an actual prefix/party/meter owner");
        extra_guard();require(s.meters.bound_to(s.windows,s.party),"Source meter tiles lost its exact meter/party/window binding");
    };
    return operation;
}
std::unique_ptr<Scene::Operation> Scene::begin_source_meter_window_tick_impl(SourceWorkService &work,
    std::function<void(TickState&,const battle::FrameDisplay&,party::State&,dialogue::WindowHost&)> validator) {
    auto &s=*execution_;
    require(s.source_work==&work,"Source meter roller requires its actual bound work owner");
    require(!s.party_lifetime.expired()&&!s.meters_lifetime.expired()&&!s.random_lifetime.expired(),"Source meter roller lost its actual shared party owner");
    require(!s.windows_lifetime.expired()&&!s.windows.pending_publications(),
        "Source meter roller has unrepresented pending window publication work");
    s.check(0);
    require(!s.publishing&&s.publication&&s.publication->frame_display(),
        "Source meter roller requires its actual idle Scene/display entry");
    require(s.meters.bound_to(s.windows,s.party)&&!s.windows.output().policy().instant&&!s.windows.menu_state().early_tick_exit,
        "Source meter roller requires its exact non-exiting meter/party/window prefix");
    validator(s.clock,*s.publication->frame_display(),s.party,s.windows);
    auto operation=begin(TickKind::Window,nullptr,nullptr);
    operation->execution_->tick->enable_source_meter_roller();
    operation->execution_->source_meter=true;
    operation->execution_->source_meter_guard=[&s,&work] {
        require(s.source_work==&work,"Source meter roller work owner was detached");
        require(!s.party_lifetime.expired()&&!s.meters_lifetime.expired()&&!s.windows_lifetime.expired()&&
            !s.random_lifetime.expired(),"Source meter roller lost a prefix/party/meter owner");
        require(s.meters.bound_to(s.windows,s.party),"Source meter roller lost its exact meter/party/window binding");
    };
    return operation;
}
std::unique_ptr<Scene::Operation> Scene::begin_source_random_window_tick_impl(SourceWorkService &work,
    std::function<void(TickState&,const battle::FrameDisplay&,RandomState&)> validator) {
    auto &s=*execution_;
    require(s.source_work==&work,"Source RAND requires its actual bound work owner");
    require(!s.random_lifetime.expired(),"Source RAND lost its actual shared RNG owner");
    require(!s.windows_lifetime.expired()&&!s.windows.pending_publications(),
        "Source RAND has unrepresented pending window publication work");
    s.check(0);
    require(!s.publishing&&s.publication&&s.publication->frame_display(),
        "Source RAND requires its actual idle Scene/display entry");
    validator(s.clock,*s.publication->frame_display(),s.random);
    auto operation=begin(TickKind::Window,nullptr,nullptr);
    operation->execution_->tick->enable_source_random();
    operation->execution_->source_random=true;return operation;
}
std::unique_ptr<Scene::Operation> Scene::begin_source_window_tick_impl(SourceWorkService &work,
    std::function<void(TickState&,const battle::FrameDisplay&,dialogue::WindowHost&,const WorldDisplayFade&)> validator) {
    auto &s=*execution_;
    require(s.source_work==&work,"Source window requires its actual bound work owner");
    require(!s.windows_lifetime.expired(),"Source window lost its actual WindowHost owner");
    s.check(0);
    require(s.source_fade&&!s.source_fade_lifetime.expired(),"Source window fade owner expired");
    require(!s.publishing&&s.publication&&s.publication->frame_display()&&s.publication->display_fade()==s.source_fade&&
        !s.windows.output().policy().instant&&!s.windows.menu_state().early_tick_exit,
        "Source window requires its actual non-exiting Window/display entry");
    validator(s.clock,*s.publication->frame_display(),s.windows,*s.publication->display_fade());
    auto operation=begin(TickKind::Window,nullptr,nullptr);
    operation->execution_->tick->enable_source_window_publication();
    operation->execution_->source_window=true;
    return operation;
}
std::unique_ptr<Scene::Operation> Scene::begin_source_world_frame_impl(SourceWorkService &work,
    std::function<void(TickState&,const battle::FrameDisplay&)> validator) {
    auto &s=*execution_;
    require(s.source_work==&work,"Source foreground requires its actual bound work owner");
    s.check(0);
    require(!s.publishing&&s.publication&&s.publication->frame_display()&&
        !s.meters.state().render&&!s.windows.prompt_state().battle_mode&&s.clock.action_scripts_disabled,
        "Source foreground requires its actual no-window overworld suppressed entry");
    require(!s.actors.in_tick()&&s.actors.object_draws().empty(),
        "Source foreground has unrepresented recursive or cached actor emission");
    validator(s.clock,*s.publication->frame_display());
    auto operation=begin(TickKind::WorldFrame,nullptr,nullptr);
    operation->execution_->tick->enable_source_foreground();
    operation->execution_->source_foreground=true;
    return operation;
}
std::unique_ptr<Scene::Operation> Scene::begin(dialogue::WindowEffect effect) {
    return begin({},nullptr,nullptr,effect);
}
std::unique_ptr<Scene::Operation> Scene::begin(dialogue::Conversation &c) { return begin({},&c,nullptr); }
std::unique_ptr<Scene::Operation> Scene::begin_nested(dialogue::Conversation &c, Operation &parent) {
    return begin({},&c,&parent);
}
std::unique_ptr<Scene::Operation> Scene::begin_nested(TickKind kind, Operation &parent) {
    return begin(kind,nullptr,&parent);
}
std::unique_ptr<Scene::Operation> Scene::begin_actor_frame(ActorFrameService &service) {
    require_content_boundary();
    require(service.uses(*this), "Actor-frame phases require their actual Scene owner");
    auto result=begin(TickKind::ActorFrame,nullptr,nullptr);
    result->execution_->actor_frame_service=&service;
    return result;
}
std::unique_ptr<Scene::Operation> Scene::begin_nested_actor_frame(ActorFrameService &service, Operation &parent) {
    require_content_boundary(&parent);
    require(service.uses(*this), "Actor-frame phases require their actual Scene owner");
    auto result=begin(TickKind::ActorFrame,nullptr,&parent);
    result->execution_->actor_frame_service=&service;
    return result;
}
dialogue::Progress Scene::Operation::advance(unsigned budget) {
    auto &e = *execution_;
    if (e.done) return dialogue::Progress::Finished;
    if(e.source_status_guard)e.source_status_guard();
    if(e.source_tiles_guard)e.source_tiles_guard();
    if(e.source_meter_guard)e.source_meter_guard();
    e.scene.check(e.owner);
    // Erasing a suspended actor cancels only its request, never the whole tick.
    if (e.pending == SceneService::ActorEngine && !e.scene.actors.request()) e.pending.reset();
    if (e.pending) return dialogue::Progress::Suspended;
    while (budget--) {
        e.step();
        if (e.done) return dialogue::Progress::Finished;
        if (e.pending) return dialogue::Progress::Suspended;
    }
    return dialogue::Progress::BudgetExhausted;
}
const std::optional<SceneService> &Scene::Operation::service() const { return execution_->pending; }
FrameRequirement Scene::Operation::frame_requirement() const {
    auto &e = *execution_;
    e.check(SceneService::Frame);
    const auto &clock = e.scene.clock;
    if (!(clock.interrupt_mask & 0xb0)) return FrameRequirement::VBlank;
    return clock.new_frame_started ? FrameRequirement::InputOnly : FrameRequirement::NmiPublication;
}
void Scene::Operation::complete_publication() { complete_publication_impl(nullptr); }
void Scene::Operation::respond_source_publication() {
    auto &e=*execution_;auto &s=e.scene;s.check(e.owner);
    require(e.pending==SceneService::Publication && !s.publishing && s.source_work && !s.source_work->failed() &&
            s.clock.publications>e.publications_at_wait &&
            s.source_work->completed_source_interrupts()>e.source_interrupts_at_wait,
            "Publication has no fresh completed actual source-work NMI receipt");
    require(e.publication_only || bool(e.animation) || bool(e.battle_frame),"Publication lost its continuation");
    try {
        if(e.battle_frame)e.battle_frame->respond();
        else if(e.animation)e.animation->respond();
        e.pending.reset();
    } catch(...) {s.poisoned=true;throw;}
}
std::shared_ptr<SourceObjectReceipt> Scene::Operation::pin_source_objects(SourceWorkService &work,
    std::function<void(TickState&,const battle::FrameDisplay&)> validator) {
    auto &e=*execution_;auto &s=e.scene;
    require(s.source_work==&work,"Source objects lost their actual bound work owner");
    e.check(SceneService::ScreenUpdate);
    require(!e.source_objects&&!e.source_screen&&!s.publishing&&e.tick&&e.tick->service()==TickService::UpdateScreen&&
        s.publication&&s.publication->frame_display(),"Source objects lost their unclaimed actual tick/display continuation");
    require((!s.objects||s.objects->quads.empty())&&s.actors.object_draws().empty(),
        "Source objects have unrepresented deferred actor emission");
    validator(s.clock,*s.publication->frame_display());
    auto receipt=std::make_shared<SourceObjectReceipt>();receipt->work=&work;const auto identity=receipt.get();
    receipt->validate=[&e,&s,&work,identity,validator] {
        require(s.source_work==&work,"Source objects work owner was detached");e.check(SceneService::ScreenUpdate);
        require(e.source_objects.get()==identity&&!s.publishing&&e.tick&&e.tick->service()==TickService::UpdateScreen&&
            s.publication&&s.publication->frame_display(),"Source objects lost their exact parent tick/display lease");
        require((!s.objects||s.objects->quads.empty())&&s.actors.object_draws().empty(),
            "Source objects acquired unrepresented deferred actor emission");
        validator(s.clock,*s.publication->frame_display());
    };
    receipt->poison=[&s]{s.poisoned=true;};e.source_objects=receipt;return receipt;
}
void Scene::Operation::respond_source_objects(SourceObjectPreparation &objects) {
    auto &e=*execution_;auto &s=e.scene;auto &receipt=*objects.receipt_;
    require(e.source_objects&&e.source_objects==objects.receipt_&&receipt.live&&receipt.completed&&
        !receipt.acknowledged&&!receipt.consumed&&!receipt.executing&&!receipt.emitting&&s.source_work==receipt.work,
        "Source objects response lacks its exact fresh completed insertion receipt");
    receipt.validate();receipt.acknowledged=true;
}
void Scene::Operation::respond_source_actor_draw(SourceActorDraw &draw) {
    auto &e=*execution_;auto &s=e.scene;auto &receipt=*draw.receipt_;
    require(e.source_objects&&e.source_objects==draw.receipt_&&receipt.live&&receipt.completed&&
        !receipt.acknowledged&&!receipt.consumed&&!receipt.executing&&!receipt.emitting&&s.source_work==receipt.work,
        "Source actor draw response lacks its exact fresh completed near-call receipt");
    receipt.validate();receipt.acknowledged=true;
}
std::shared_ptr<SourceObjectReceipt> Scene::Operation::pin_source_global_draw(SourceWorkService &work,
    std::function<void(TickState&,const battle::FrameDisplay&,const InputState&,const ActorWorld&)> validator) {
    auto &s=execution_->scene;
    return pin_source_objects(work,[&s,validator](TickState &ticks,const battle::FrameDisplay &frames) {
        validator(ticks,frames,s.input,s.actors);
    });
}
void Scene::Operation::respond_source_global_draw(SourceGlobalDraw &draw) {
    auto &e=*execution_;auto &s=e.scene;auto &receipt=*draw.receipt_;
    require(e.source_objects&&e.source_objects==draw.receipt_&&receipt.live&&receipt.completed&&
        !receipt.acknowledged&&!receipt.consumed&&!receipt.executing&&!receipt.emitting&&s.source_work==receipt.work,
        "Source global draw response lacks its exact fresh completed near-call receipt");
    receipt.validate();receipt.acknowledged=true;
}
std::shared_ptr<SourceScreenReceipt> Scene::Operation::pin_source_screen(SourceWorkService &work,
    std::function<void(TickState&,const battle::FrameDisplay&,SourceObjectReceipt*)> validator) {
    auto &e=*execution_;auto &s=e.scene;
    require(s.source_work==&work,"Source screen lost its actual bound work owner");
    e.check(SceneService::ScreenUpdate);
    require(!e.source_screen&&!s.publishing&&e.tick&&e.tick->service()==TickService::UpdateScreen&&
        s.publication&&s.publication->frame_display(),"Source screen lost its unclaimed actual tick/display continuation");
    require((!s.objects||s.objects->quads.empty())&&s.actors.object_draws().empty(),
        "Source screen has unrepresented deferred actor object emission");
    const auto preparation=e.source_objects;
    if(preparation)require(preparation->live&&preparation->completed&&preparation->acknowledged&&
        !preparation->consumed&&!preparation->executing&&!preparation->emitting&&preparation->work==&work,
        "Source screen lacks its exact acknowledged insertion preparation");
    validator(s.clock,*s.publication->frame_display(),preparation.get());
    auto receipt=std::make_shared<SourceScreenReceipt>();receipt->work=&work;receipt->objects=preparation;
    const auto identity=receipt.get();
    receipt->validate=[&e,&s,&work,identity,validator,preparation] {
        require(s.source_work==&work,"Source screen work owner was detached");
        e.check(SceneService::ScreenUpdate);
        require(e.source_screen.get()==identity&&!s.publishing&&e.tick&&
            e.tick->service()==TickService::UpdateScreen&&s.publication&&s.publication->frame_display(),
            "Source screen lost its exact tick/display lease");
        require(e.source_objects==preparation,"Source screen lost its exact preparation parent receipt");
        require((!s.objects||s.objects->quads.empty())&&s.actors.object_draws().empty(),
            "Source screen acquired unrepresented deferred actor object emission");
        validator(s.clock,*s.publication->frame_display(),preparation.get());
    };
    receipt->poison=[&s]{s.poisoned=true;};e.source_screen=receipt;
    try {
        if(e.actor_frame_service)e.actor_frame_service->apply(ActorFramePhase::BeforeScreen);
        s.screen();receipt->world_objects=s.objects;receipt->validate();
    } catch(...) {s.poisoned=true;throw;}
    return receipt;
}
void Scene::Operation::respond_source_screen(SourceScreenUpdate &screen) {
    auto &e=*execution_;auto &s=e.scene;auto &receipt=*screen.receipt_;
    require(e.source_screen&&e.source_screen==screen.receipt_&&receipt.live&&receipt.completed&&
        !receipt.consumed&&!receipt.executing&&s.source_work==receipt.work,
        "Source screen response lacks its exact fresh completed UPDATE_SCREEN receipt");
    receipt.validate();
    try {
        if(e.actor_frame_service)e.actor_frame_service->apply(ActorFramePhase::ScreenUpdated);
        if(receipt.objects) {receipt.objects->finish_emission();receipt.objects->consumed=true;receipt.objects->live=false;}
        e.tick->respond();receipt.consumed=true;receipt.live=false;e.source_objects.reset();e.source_screen.reset();e.pending.reset();
    } catch(...) {s.poisoned=true;throw;}
}
std::shared_ptr<SourceMeterStatusReceipt> Scene::Operation::pin_source_meter_status(SourceWorkService &work,const void *control,const void *counter,const void *palette,
    std::function<void(TickState&,const battle::FrameDisplay&,party::State&,party::MeterWindows&,dialogue::WindowHost&,const void*)> validator) {
    auto &e=*execution_;auto &s=e.scene;
    require(s.source_work==&work,"Source meter status lost its actual bound work owner");
    require(e.source_status_control==control&&e.source_status_counter==counter&&e.source_status_palette==palette,
        "Source meter status requires its exact declared parent control/counter/palette identities");
    require(!s.party_lifetime.expired()&&!s.meters_lifetime.expired()&&!s.windows_lifetime.expired(),
        "Source meter status shared party/meter/window expired");
    require(!s.windows.pending_publications()&&s.meters.bound_to(s.windows,s.party),
        "Source meter status has unrepresented window work or a foreign meter binding");
    e.check(SceneService::SourceMeterStatus);
    require(e.source_status&&!e.source_status_receipt&&!s.publishing&&e.tick&&e.tick->source_meter_status_pending()&&
        s.publication&&s.publication->frame_display(),"Source meter status lost its exact unclaimed pre-Palette suspension");
    validator(s.clock,*s.publication->frame_display(),s.party,s.meters,s.windows,nullptr);
    auto receipt=std::make_shared<SourceMeterStatusReceipt>();
    receipt->work=&work;receipt->party=&s.party;receipt->windows=&s.windows;const auto identity=receipt.get();
    receipt->validate=[&e,&s,&work,identity,validator] {
        require(s.source_work==&work,"Source meter status work owner was detached");
        require(!s.party_lifetime.expired()&&!s.meters_lifetime.expired()&&!s.windows_lifetime.expired(),
            "Source meter status lost an actual party/meter/window owner");
        require(!s.windows.pending_publications()&&s.meters.bound_to(s.windows,s.party),
            "Source meter status has unrepresented window work or a foreign meter binding");
        e.check(SceneService::SourceMeterStatus);
        require(e.source_status&&e.source_status_receipt.get()==identity&&!s.publishing&&e.tick&&
            e.tick->source_meter_status_pending()&&s.publication&&s.publication->frame_display(),
            "Source meter status lost its exact active parent/display/helper lease");
        validator(s.clock,*s.publication->frame_display(),s.party,s.meters,s.windows,identity);
    };
    receipt->poison=[&s]{s.poisoned=true;};e.source_status_receipt=receipt;return receipt;
}
void Scene::Operation::respond_source_meter_status(SourceMeterStatus &work) {
    auto &e=*execution_;auto &s=e.scene;auto &receipt=*work.receipt_;
    require(e.source_status_receipt&&e.source_status_receipt==work.receipt_&&receipt.live&&receipt.completed&&
        !receipt.consumed&&!receipt.executing&&s.source_work==receipt.work,
        "Source meter status response lacks its exact fresh completed helper receipt");
    receipt.validate();
    try {e.tick->respond_source_meter_status(receipt.palette_requested);receipt.consumed=true;receipt.live=false;
        if(receipt.release)receipt.release();
        e.source_status_receipt.reset();e.pending.reset();}
    catch(...) {s.poisoned=true;throw;}
}
std::shared_ptr<SourceMeterTilesReceipt> Scene::Operation::pin_source_meter_tiles(SourceWorkService &work,const void *control,const void *scratch,
    std::function<void(TickState&,const battle::FrameDisplay&,party::State&,party::MeterWindows&,dialogue::WindowHost&,const void*)> validator) {
    auto &e=*execution_;auto &s=e.scene;
    require(s.source_work==&work,"Source meter tiles lost its actual bound work owner");
    require(e.source_tiles_control==control&&e.source_tiles_scratch==scratch,
        "Source meter tiles requires its exact declared parent control/arithmetic identities");
    require(!s.party_lifetime.expired()&&!s.meters_lifetime.expired()&&!s.windows_lifetime.expired(),
        "Source meter tiles shared party/meter/window expired");
    require(!s.windows.pending_publications()&&s.meters.bound_to(s.windows,s.party),
        "Source meter tiles has unrepresented window work or a foreign meter binding");
    e.check(SceneService::SourceMeterTiles);
    require(e.source_tiles&&!e.source_tiles_receipt&&!s.publishing&&e.tick&&e.tick->source_meter_tiles_pending()&&
        s.publication&&s.publication->frame_display(),"Source meter tiles lost its exact unclaimed pre-Update suspension");
    validator(s.clock,*s.publication->frame_display(),s.party,s.meters,s.windows,nullptr);
    auto receipt=std::make_shared<SourceMeterTilesReceipt>();
    receipt->work=&work;receipt->party=&s.party;receipt->meters=&s.meters;receipt->windows=&s.windows;const auto identity=receipt.get();
    receipt->validate=[&e,&s,&work,identity,validator] {
        require(s.source_work==&work,"Source meter tiles work owner was detached");
        require(!s.party_lifetime.expired()&&!s.meters_lifetime.expired()&&!s.windows_lifetime.expired(),
            "Source meter tiles lost an actual party/meter/window owner");
        require(!s.windows.pending_publications()&&s.meters.bound_to(s.windows,s.party),
            "Source meter tiles has unrepresented window work or a foreign meter binding");
        e.check(SceneService::SourceMeterTiles);
        require(e.source_tiles&&e.source_tiles_receipt.get()==identity&&!s.publishing&&e.tick&&
            e.tick->source_meter_tiles_pending()&&s.publication&&s.publication->frame_display(),
            "Source meter tiles lost its exact active parent/display/helper lease");
        validator(s.clock,*s.publication->frame_display(),s.party,s.meters,s.windows,identity);
    };
    receipt->poison=[&s]{s.poisoned=true;};e.source_tiles_receipt=receipt;return receipt;
}
void Scene::Operation::respond_source_meter_tiles(SourceMeterTiles &work) {
    auto &e=*execution_;auto &s=e.scene;auto &receipt=*work.receipt_;
    require(e.source_tiles_receipt&&e.source_tiles_receipt==work.receipt_&&receipt.live&&receipt.completed&&
        !receipt.consumed&&!receipt.executing&&s.source_work==receipt.work,
        "Source meter tiles response lacks its exact fresh completed helper receipt");
    receipt.validate();
    try {e.tick->respond_source_meter_tiles();receipt.consumed=true;receipt.live=false;
        if(receipt.release)receipt.release();
        e.source_tiles_receipt.reset();e.pending.reset();}
    catch(...) {s.poisoned=true;throw;}
}
std::shared_ptr<SourceMeterRollerReceipt> Scene::Operation::pin_source_meter_roller(SourceWorkService &work,
    std::function<void(TickState&,const battle::FrameDisplay&,party::State&,dialogue::WindowHost&,const void*)> validator) {
    auto &e=*execution_;auto &s=e.scene;
    require(s.source_work==&work,"Source meter roller lost its actual bound work owner");
    require(!s.party_lifetime.expired()&&!s.meters_lifetime.expired(),"Source meter roller shared party expired");
    require(!s.windows_lifetime.expired()&&!s.windows.pending_publications(),
        "Source meter roller has unrepresented pending window publication work");
    require(s.meters.bound_to(s.windows,s.party),"Source meter roller lost its actual meter/party/window binding");
    e.check(SceneService::SourceMeterRoller);
    require(e.source_meter&&!e.source_meter_receipt&&!s.publishing&&e.tick&&
        e.tick->source_meter_roller_pending()&&s.publication&&s.publication->frame_display(),
        "Source meter roller lost its exact unclaimed pre-Roll suspension");
    validator(s.clock,*s.publication->frame_display(),s.party,s.windows,nullptr);
    auto receipt=std::make_shared<SourceMeterRollerReceipt>();
    receipt->work=&work;receipt->party=&s.party;receipt->windows=&s.windows;const auto identity=receipt.get();
    receipt->validate=[&e,&s,&work,identity,validator] {
        require(s.source_work==&work,"Source meter roller work owner was detached");
        require(!s.party_lifetime.expired()&&!s.meters_lifetime.expired(),"Source meter roller shared party expired");
        require(!s.windows_lifetime.expired()&&!s.windows.pending_publications(),
            "Source meter roller has unrepresented pending window publication work");
        require(s.meters.bound_to(s.windows,s.party),"Source meter roller lost its actual meter/party/window binding");
        e.check(SceneService::SourceMeterRoller);
        require(e.source_meter&&e.source_meter_receipt.get()==identity&&!s.publishing&&e.tick&&
            e.tick->source_meter_roller_pending()&&s.publication&&s.publication->frame_display(),
            "Source meter roller lost its exact active parent/display/helper lease");
        validator(s.clock,*s.publication->frame_display(),s.party,s.windows,identity);
    };
    receipt->poison=[&s]{s.poisoned=true;};e.source_meter_receipt=receipt;return receipt;
}
void Scene::Operation::respond_source_meter_roller(SourceMeterRoller &work) {
    auto &e=*execution_;auto &s=e.scene;auto &receipt=*work.receipt_;
    require(e.source_meter_receipt&&e.source_meter_receipt==work.receipt_&&receipt.live&&
        receipt.completed&&!receipt.consumed&&!receipt.executing&&s.source_work==receipt.work,
        "Source meter roller response lacks its exact fresh completed helper receipt");
    receipt.validate();
    try {
        e.tick->respond_source_meter_roller();receipt.consumed=true;receipt.live=false;
        if(receipt.release)receipt.release();
        e.source_meter_receipt.reset();e.pending.reset();
    } catch(...) {s.poisoned=true;throw;}
}
std::shared_ptr<SourceRandomReceipt> Scene::Operation::pin_source_random(SourceWorkService &work,
    std::function<void(TickState&,const battle::FrameDisplay&,RandomState&,const void*)> validator) {
    auto &e=*execution_;auto &s=e.scene;
    require(s.source_work==&work,"Source RAND lost its actual bound work owner");
    require(!s.random_lifetime.expired(),"Source RAND shared RNG expired");
    require(!s.windows_lifetime.expired()&&!s.windows.pending_publications(),
        "Source RAND has unrepresented pending window publication work");
    e.check(SceneService::SourceRandom);
    require(e.source_random&&!e.source_random_receipt&&!s.publishing&&e.tick&&
        e.tick->source_random_pending()&&s.publication&&s.publication->frame_display(),
        "Source RAND lost its exact unclaimed pre-Random suspension");
    validator(s.clock,*s.publication->frame_display(),s.random,nullptr);
    auto receipt=std::make_shared<SourceRandomReceipt>();
    receipt->work=&work;receipt->random=&s.random;const auto identity=receipt.get();
    receipt->validate=[&e,&s,&work,identity,validator] {
        require(s.source_work==&work,"Source RAND work owner was detached");
        require(!s.random_lifetime.expired(),"Source RAND shared RNG expired");
        require(!s.windows_lifetime.expired()&&!s.windows.pending_publications(),
            "Source RAND has unrepresented pending window publication work");
        e.check(SceneService::SourceRandom);
        require(e.source_random&&e.source_random_receipt.get()==identity&&!s.publishing&&e.tick&&
            e.tick->source_random_pending()&&s.publication&&s.publication->frame_display(),
            "Source RAND lost its exact active parent/display/helper lease");
        validator(s.clock,*s.publication->frame_display(),s.random,identity);
    };
    receipt->poison=[&s]{s.poisoned=true;};e.source_random_receipt=receipt;return receipt;
}
void Scene::Operation::respond_source_random(SourceRandom &work) {
    auto &e=*execution_;auto &s=e.scene;auto &receipt=*work.receipt_;
    require(e.source_random_receipt&&e.source_random_receipt==work.receipt_&&receipt.live&&
        receipt.completed&&!receipt.consumed&&!receipt.executing&&s.source_work==receipt.work,
        "Source RAND response lacks its exact fresh completed helper receipt");
    receipt.validate();
    try {
        e.tick->respond_source_random();receipt.consumed=true;receipt.live=false;
        if(receipt.release)receipt.release();
        e.source_random_receipt.reset();e.pending.reset();
    } catch(...) {s.poisoned=true;throw;}
}
std::shared_ptr<SourceWindowPublicationReceipt> Scene::Operation::pin_source_window_publication(SourceWorkService &work,
    std::function<void(TickState&,const battle::FrameDisplay&,dialogue::WindowHost&,const WorldDisplayFade&)> validator) {
    auto &e=*execution_;auto &s=e.scene;
    require(s.source_work==&work,"Source window lost its actual bound work owner");
    require(!s.windows_lifetime.expired(),"Source window lost its actual WindowHost owner");
    e.check(SceneService::WindowPublication);
    require(s.source_fade&&!s.source_fade_lifetime.expired(),"Source window fade owner expired");
    require(e.source_window&&!e.source_window_receipt&&!s.publishing&&e.tick&&
        e.tick->source_window_publication_pending()&&s.publication&&s.publication->frame_display()&&
        s.publication->display_fade()&&!s.meters.state().area_dirty,
        "Source window lost its exact unclaimed Publish/prefix STZ boundary");
    auto *fade=s.publication->display_fade();
    validator(s.clock,*s.publication->frame_display(),s.windows,*fade);
    auto receipt=std::make_shared<SourceWindowPublicationReceipt>();
    receipt->work=&work;receipt->windows=&s.windows;receipt->fade=fade;
    const auto identity=receipt.get();
    receipt->validate=[&e,&s,&work,identity,fade,validator] {
        require(s.source_work==&work,"Source window work owner was detached");
        require(!s.windows_lifetime.expired(),"Source window WindowHost owner expired");
        e.check(SceneService::WindowPublication);
        require(s.source_fade==fade&&!s.source_fade_lifetime.expired(),"Source window fade owner expired");
        require(e.source_window&&e.source_window_receipt.get()==identity&&!s.publishing&&e.tick&&
            e.tick->source_window_publication_pending()&&s.publication&&s.publication->frame_display()&&
            s.publication->display_fade()==fade&&!s.meters.state().area_dirty,
            "Source window lost its exact active parent/display/helper lease");
        validator(s.clock,*s.publication->frame_display(),s.windows,*fade);
    };
    receipt->poison=[&s]{s.poisoned=true;};e.source_window_receipt=receipt;return receipt;
}
void Scene::Operation::respond_source_window_publication(SourceWindowPublication &work) {
    auto &e=*execution_;auto &s=e.scene;auto &receipt=*work.receipt_;
    require(e.source_window_receipt&&e.source_window_receipt==work.receipt_&&receipt.live&&
        receipt.completed&&!receipt.consumed&&!receipt.executing&&s.source_work==receipt.work,
        "Source window response lacks its exact fresh completed helper receipt");
    receipt.validate();
    try {
        e.tick->respond_source_window_publication();receipt.consumed=true;receipt.live=false;if(receipt.release)receipt.release();
        e.source_window_receipt.reset();e.pending.reset();
    } catch(...) {s.poisoned=true;throw;}
}
std::shared_ptr<SourceForegroundReceipt> Scene::Operation::pin_source_foreground(SourceWorkService &work,
    std::function<void(TickState&,const battle::FrameDisplay&)> validator) {
    auto &e=*execution_;auto &s=e.scene;
    require(s.source_work==&work,"Source foreground lost its actual bound work owner");
    require(e.source_foreground&&e.pending&&!e.source_foreground_receipt&&!s.publishing&&e.tick&&
        e.tick->source_foreground_pending()&&s.publication&&s.publication->frame_display(),
        "Source foreground lost its unclaimed explicit WorldFrame continuation");
    const auto service=*e.pending;
    SourceForegroundStage stage;
    TickService tick_service;
    switch(service) {
    case SceneService::ForegroundPrefix:stage=SourceForegroundStage::Prefix;tick_service=TickService::ForegroundPrefix;break;
    case SceneService::SuppressedActors:stage=SourceForegroundStage::SuppressedActors;tick_service=TickService::SuppressedActors;break;
    case SceneService::ForegroundReturn:stage=SourceForegroundStage::Return;tick_service=TickService::ForegroundReturn;break;
    default:throw std::logic_error("Source foreground has no pending literal boundary");
    }
    e.check(service);
    require(e.tick->service()==tick_service&&!s.actors.in_tick()&&s.actors.object_draws().empty(),
        "Source foreground lost its exact tick stage or actual idle actor owner");
    validator(s.clock,*s.publication->frame_display());
    auto receipt=std::make_shared<SourceForegroundReceipt>();receipt->work=&work;receipt->ticks=&s.clock;
    receipt->render=&s.meters.state().render;receipt->battle=&s.windows.prompt_state().battle_mode;receipt->stage=stage;
    const auto identity=receipt.get();
    receipt->validate=[&e,&s,&work,identity,service,tick_service,validator] {
        require(s.source_work==&work,"Source foreground work owner was detached");
        e.check(service);
        require(e.source_foreground&&e.source_foreground_receipt.get()==identity&&!s.publishing&&e.tick&&
            e.tick->source_foreground_pending()&&e.tick->service()==tick_service&&s.publication&&
            s.publication->frame_display()&&!s.actors.in_tick()&&s.actors.object_draws().empty(),
            "Source foreground lost its exact active tick/display/actor lease");
        validator(s.clock,*s.publication->frame_display());
    };
    receipt->poison=[&s]{s.poisoned=true;};e.source_foreground_receipt=receipt;
    return receipt;
}
void Scene::Operation::respond_source_foreground(SourceForegroundWork &work) {
    auto &e=*execution_;auto &s=e.scene;auto &receipt=*work.receipt_;
    require(e.source_foreground_receipt&&e.source_foreground_receipt==work.receipt_&&receipt.live&&
        receipt.completed&&!receipt.consumed&&!receipt.executing&&s.source_work==receipt.work,
        "Source foreground response lacks its exact fresh completed boundary receipt");
    receipt.validate();
    try {
        e.tick->respond();receipt.consumed=true;receipt.live=false;e.source_foreground_receipt.reset();e.pending.reset();
    } catch(...) {s.poisoned=true;throw;}
}
std::shared_ptr<SourceFrameInputReceipt> Scene::Operation::pin_source_frame(SourceWorkService &work,
    WorldInputPlayback &raw,std::function<void(TickState &)> validate_clock) {
    auto &e=*execution_;auto &s=e.scene;
    // Compare the still-bound identity before calling or reading a borrowed
    // work/clock. Destroying that owner invalidates the Scene first.
    require(s.source_work==&work,"Source WAIT lost its actual bound work owner");
    e.check(SceneService::Frame);
    require(!e.source_frame && !s.publishing && (e.tick || e.animation),
            "Source WAIT requires its unclaimed suspended frame continuation");
    require(s.source_input==&raw && raw.uses(s.input) && !raw.state().flags,
            "Source WAIT requires its actual inactive demo input owner");
    validate_clock(s.clock);
    require(!(s.clock.interrupt_mask&0xb0) || s.clock.new_frame_started || (s.clock.effective_interrupt_mask()&0x80),
            "Source WAIT has no represented interrupt to release its pending-byte loop");
    auto receipt=std::make_shared<SourceFrameInputReceipt>();receipt->work=&work;
    receipt->ticks=&s.clock;receipt->input=&s.input;receipt->debug=&s.windows.prompt_state().debug;
    const auto identity=receipt.get();
    receipt->validate=[&e,&s,&work,&raw,identity,validate_clock] {
        require(s.source_work==&work,"Source WAIT work owner was detached");
        e.check(SceneService::Frame);
        require(e.source_frame.get()==identity && !s.publishing && s.source_input==&raw,
                "Source WAIT lost its exact suspended frame/clock lease");
        validate_clock(s.clock);
    };
    receipt->poison=[&s]{s.poisoned=true;};
    e.source_frame=receipt;return receipt;
}
void Scene::Operation::respond_source_frame(SourceFrameInput &input) {
    auto &e=*execution_;auto &s=e.scene;auto &receipt=*input.receipt_;
    require(e.source_frame && e.source_frame==input.receipt_ && receipt.live && receipt.completed &&
            !receipt.consumed && !receipt.executing && s.source_work==receipt.work,
            "Source frame response lacks this exact fresh completed WAIT receipt");
    receipt.validate();
    try {
        if(receipt.waited_vblank && s.clock.publications==receipt.publications_at_start) {
            auto stamp=*s.world;stamp.frame=s.frames+1;
            auto image=s.capture(stamp,false);++s.frames;s.published=std::move(image);
        }
        ++s.clock.input_polls;
        s.windows.prompt_state().pressed=s.input.pressed[0];
        if(e.animation)e.animation->respond();
        else {require(bool(e.tick),"Source frame lost its tick continuation");e.tick->respond();}
        receipt.consumed=true;receipt.live=false;e.source_frame.reset();e.pending.reset();
    } catch(...) {s.poisoned=true;throw;}
}
bool Scene::Operation::uses(const Scene &scene) const noexcept {
    return &execution_->scene == scene.execution_.get();
}
bool Scene::Operation::is_child_of(const Operation &parent) const noexcept {
    return &execution_->scene == &parent.execution_->scene &&
        execution_->parent_owner == parent.execution_->owner &&
        !execution_->done && !parent.execution_->done;
}
void Scene::Operation::complete_publication(FrameBoundaryService &boundary) {
    complete_publication_impl(&boundary);
}
void Scene::Operation::complete_publication_impl(FrameBoundaryService *boundary) {
    auto &e = *execution_;
    auto &s = e.scene;
    s.check(e.owner);
    require(!e.source_foreground,"Source foreground requires its actual source WAIT/publication completion");
    require(!e.source_frame,"The actual source WAIT owns this frame's completion");
    require(e.pending == SceneService::Publication ||
                (e.pending == SceneService::Frame && frame_requirement() == FrameRequirement::NmiPublication),
            "Scene has no pending NMI publication");
    // Peripheral waits share this body without acknowledging a logical child.
    s.publish_nmi(boundary);
    try {
        if (e.pending == SceneService::Publication) {
            require(e.publication_only || bool(e.animation) || bool(e.battle_frame), "Publication lost its continuation");
            if (e.publication_only) {}
            else if (e.battle_frame) e.battle_frame->respond();
            else e.animation->respond();
            e.pending.reset();
        }
    } catch (...) {
        s.poisoned = true;
        throw;
    }
}
void Scene::interrupt_publication(FrameBoundaryService *boundary) {
    execution_->publish_nmi(boundary);
}
Scene::SourceInterrupt::SourceInterrupt(Scene &scene,FrameBoundaryService *boundary)
    :scene_(scene),boundary_(boundary) {
    auto &s=*scene_.execution_;
    require(!s.poisoned && !s.publishing && (s.clock.effective_interrupt_mask()&0x80),
            "Source NMI requires healthy nonrecursive actual publication");
    require(!s.windows.pending_publications(),"Source NMI window work is not represented");
    if(boundary_)boundary_->validate_publication();
    s.publishing=true;
}
Scene::SourceInterrupt::~SourceInterrupt() {
    if(!complete_) {scene_.execution_->poisoned=true;scene_.execution_->publishing=false;}
}
void Scene::SourceInterrupt::check() const {
    require(!complete_ && !scene_.execution_->poisoned && scene_.execution_->publishing,
            "Source NMI lost its live actual publication pin");
}
void Scene::SourceInterrupt::increment_pending() {
    check(); require(phase_==0,"Source NMI pending byte is out of order");
    ++scene_.execution_->clock.new_frame_started; ++phase_;
}
void Scene::SourceInterrupt::increment_counter() {
    check(); require(phase_==1,"Source NMI counter byte is out of order");
    ++scene_.execution_->clock.frame_counter; ++phase_;
}
void Scene::SourceInterrupt::publish() {
    check(); require(phase_==2,"Source NMI display publication is out of order");
    auto &s=*scene_.execution_;
    try {
        auto stamp=*s.world;stamp.frame=s.frames+1;
        auto result=s.capture(stamp,true);
        ++s.frames;++s.clock.publications;s.published=std::move(result);++phase_;
    } catch(...) {s.poisoned=true;throw;}
}
void Scene::SourceInterrupt::callback() {
    check(); require(phase_==3,"Source NMI callback is out of order");
    auto &s=*scene_.execution_;
    try {
        if(s.publication)s.publication->complete_publication();
        if(boundary_)boundary_->after_publication();
        if(boundary_ && boundary_->changes_display_registers()) {
            auto stamp=*s.world;stamp.frame=s.frames;s.published=s.capture(stamp,false);
        }
        ++phase_;
    } catch(...) {s.poisoned=true;throw;}
}
void Scene::SourceInterrupt::rotate_heap() {
    check(); require(phase_==4,"Source NMI heap phase is out of order");
    if(scene_.execution_->publication)scene_.execution_->publication->complete_interrupt();
    ++phase_;
}
void Scene::SourceInterrupt::complete() {
    check();require(phase_==5,"Source NMI returned before completing actual phases");
    scene_.execution_->publishing=false;complete_=true;
}
std::unique_ptr<Scene::SourceInterrupt> Scene::begin_source_interrupt(FrameBoundaryService *boundary) {
    return std::unique_ptr<SourceInterrupt>(new SourceInterrupt(*this,boundary));
}
void Scene::Operation::complete_frame(std::array<std::uint16_t,2> raw) {
    complete_frame_impl(raw, nullptr);
}
void Scene::Operation::complete_frame(std::array<std::uint16_t,2> host, FrameBoundaryService &boundary) {
    complete_frame_impl(host, &boundary);
}
void Scene::Operation::complete_frame_impl(std::array<std::uint16_t,2> raw, FrameBoundaryService *boundary) {
    auto &e = *execution_;
    e.check(SceneService::Frame);
    require(!e.source_foreground,"Source foreground requires its actual literal WAIT receipt");
    require(!e.source_frame,"The actual source WAIT owns this frame's completion");
    auto &s = e.scene;
    if (boundary) boundary->validate_input();
    const auto requirement = frame_requirement();
    if (requirement == FrameRequirement::NmiPublication) {
        complete_publication_impl(boundary);
        // NEW_FRAME_STARTED is a byte, not a boolean. Wrapping to zero does
        // not release the source WAIT loop and must not poll input yet.
        if (!s.clock.new_frame_started) return;
    } else if (requirement == FrameRequirement::VBlank) {
        // WAIT reads the software mirror, while the physical NMI uses $4200.
        // A cold palette reset can clear the former while retaining the latter.
        // Consume that real publication once; only an NMI-free VBlank needs a
        // separate capture without graphics transfer or interrupt callbacks.
        const bool published = s.clock.publications != e.publications_at_wait;
        require(published || !(s.clock.effective_interrupt_mask() & 0x80),
                "VBlank wait requires its retained hardware NMI publication");
        if (!published) {
            auto stamp = *s.world;
            stamp.frame = s.frames + 1;
            auto image = s.capture(stamp, false);
            ++s.frames;
            s.published = std::move(image);
        }
    }
    try {
        s.clock.new_frame_started = 0;
        if (boundary) raw = boundary->read_input(raw);
        poll_input(s.input,raw,s.windows.prompt_state().debug);
        ++s.clock.input_polls;
        s.windows.prompt_state().pressed = s.input.pressed[0];
        if (e.animation) e.animation->respond();
        else {
            require(bool(e.tick), "Frame wait lost its tick continuation");
            e.tick->respond();
        }
        e.pending.reset();
    } catch (...) {
        s.poisoned = true;
        throw;
    }
}
const std::optional<WorldActionRequest> &Scene::Operation::actor_request() const {
    execution_->check(SceneService::ActorEngine); return execution_->scene.actors.request();
}
bool Scene::Operation::window_animation_active(const WorldEncounterEffects &effects) const {
    auto &e = *execution_; e.check(SceneService::ActorEngine);
    require(e.scene.battle_frame, "Window animation status requires the bound PSI frame owner");
    return e.scene.battle_frame->window_animation_active(effects);
}
void Scene::Operation::respond_actor(std::uint16_t value, unsigned bytes,
                                     std::optional<std::uint16_t> sleep_frames) {
    auto &e = *execution_; e.check(SceneService::ActorEngine);
    e.scene.actors.respond(value,bytes,sleep_frames); e.pending.reset();
}
const std::optional<WorldCameraRefresh> &Scene::Operation::camera_request() const {
    execution_->check(SceneService::CameraRefresh); return execution_->scene.actors.camera_refresh();
}
void Scene::Operation::respond_camera() {
    auto &e = *execution_; e.check(SceneService::CameraRefresh);
    e.scene.actors.respond_camera_refresh(); e.pending.reset();
}
void Scene::Operation::respond_battle() {
    auto &e = *execution_; e.check(SceneService::BattleHelper); e.tick->respond(); e.pending.reset();
}
void Scene::Operation::respond_party_sprite_blink() {
    auto &e = *execution_; e.check(SceneService::PartySpriteBlink);
    e.party_sprite_blink=false; e.pending.reset();
    if(e.conversation) e.answer_conversation();
    else e.finish();
}
void Scene::Operation::respond_teddy_refresh() {
    auto &e = *execution_; e.check(SceneService::TeddyRefresh);
    e.receipt->respond(); e.pending.reset();
}
void Scene::Operation::respond_item_failure_scan(std::uint16_t first_empty) {
    auto &e = *execution_; e.check(SceneService::ItemFailureScan);
    require(first_empty<=14,"Receipt failure photo scan returned an invalid index");
    e.answer_item({0,first_empty});e.receipt.reset();e.pending.reset();
}
const dialogue::ScriptSoundRequest &Scene::Operation::script_sound() const {
    auto &e = *execution_; e.check(SceneService::ScriptSound);
    const auto &request = std::get<dialogue::Request>(*e.conversation->event());
    require(request.script_sound.has_value(), "Script sound lacks its typed audio service");
    return *request.script_sound;
}
void Scene::Operation::respond_script_sound() {
    auto &e = *execution_; e.check(SceneService::ScriptSound);
    e.answer_conversation(); e.pending.reset();
}
void Scene::Operation::respond_bicycle_dismount() {
    auto &e = *execution_; e.check(SceneService::BicycleDismount);
    if(e.teddy) e.teddy->respond_bicycle_dismount();
    else { require(bool(e.formation),"Scene lost its suspended formation owner");e.formation->respond_bicycle_dismount(); }
    e.pending.reset();
}
const std::optional<dialogue::ConversationEvent> &Scene::Operation::dialogue_event() const {
    execution_->check(SceneService::Dialogue); return execution_->conversation->event();
}
void Scene::Operation::respond_dialogue(dialogue::Response response) {
    auto &e = *execution_; e.check(SceneService::Dialogue);
    const auto *request = std::get_if<dialogue::Request>(&*e.conversation->event());
    require(!request || (request->kind != dialogue::RequestKind::WorldControl &&
                         request->kind != dialogue::RequestKind::BattleAnimation),
            "Native command requires its bound service");
    e.conversation->respond(response); e.pending.reset();
}
bool Scene::Operation::complete() const { return execution_->done; }
void Scene::bind_interactions(npcs::Interactions& interactions) {
    auto &e=*execution_; e.check(0);
    require(shares_world(interactions.windows(),interactions.actors()),
            "Gift interactions and Scene must share actual windows and actors");
    require(!e.interactions || e.interactions==&interactions,"Scene already has another interaction owner");
    interactions.bind_event_flags();
    e.interactions=&interactions;
}
void Scene::bind_inventory(party::Inventory& inventory) {
    auto &e=*execution_; e.check(0);
    require(inventory.bound_to(e.party,e.random),"Inventory and Scene must share the actual party and random owners");
    require(!e.inventory || e.inventory==&inventory,"Scene already has another inventory owner");
    e.inventory=&inventory;
}
void Scene::bind_party_formation(PartyFormation& formation) {
    auto &e = *execution_; e.check(0);
    require(e.interactions && formation.bound_to(e.party,e.actors,*e.interactions,e.clock),
            "Formation and Scene must share actual party, actors, interactions and clock");
    require(!e.formation || e.formation==&formation,"Scene already has another formation owner");
    e.formation=&formation;
}
void Scene::bind_teddy_party(TeddyParty& teddy) {
    auto &e = *execution_; e.check(0);
    require(e.inventory && e.formation && teddy.bound_to(e.party,e.actors,*e.formation,*e.inventory),
            "Teddy lifecycle and Scene must share actual party, actors, formation and inventory resources");
    require(!e.teddy || e.teddy==&teddy,"Scene already has another Teddy lifecycle owner");
    e.teddy=&teddy;
}
void Scene::bind_world_control(WorldControlCommandService& control) {
    auto &e=*execution_; e.check(0);
    require(control.uses(e.actors), "World control and Scene must share actual actors");
    require(!e.world_control || e.world_control==&control,"Scene already has another world control owner");
    e.world_control=&control;
}
void Scene::bind_battle_animations(battle::AnimationCommands &animations) {
    auto &e = *execution_; e.check(0);
    require(e.publication && e.publication->supports_animation(animations),
            "Battle animations require their actual display publisher");
    require(animations.version() == e.windows.version() && animations.uses(e.clock),
            "Battle animations and Scene must share the actual region and clock");
    require(!e.animations || e.animations == &animations, "Scene already has another battle animation owner");
    require(!e.battle_frame || e.battle_frame->shares_animation(animations),
            "Battle frame and animations must share the actual PSI, roster and swirl owners");
    require(!animations.failed(), "Scene cannot bind failed battle animations");
    e.animations = &animations;
}
void Scene::bind_battle_frame(battle::Frame &frame) {
    auto &e = *execution_; e.check(0);
    require(e.publication && e.publication->supports_battle_frame(frame),
            "Battle frame requires its actual display publisher");
    require(frame.version() == e.windows.version() &&
                frame.uses(e.clock, e.windows, e.party, e.meters),
            "Battle frame and Scene must share the actual region, windows, party, meters and clock");
    require(!e.battle_frame || e.battle_frame == &frame, "Scene already has another battle frame owner");
    require(!e.animations || frame.shares_animation(*e.animations),
            "Battle frame and animations must share the actual PSI, roster and swirl owners");
    frame.validate_begin();
    e.battle_frame = &frame;
}
void Scene::bind_publication(ScenePublication &publication) {
    auto &s = *execution_;
    s.check(0);
    require(!s.animations || publication.supports_animation(*s.animations),
            "Scene publication does not own the bound battle animation transport");
    require(!s.battle_frame || publication.supports_battle_frame(*s.battle_frame),
            "Scene publication does not own the bound battle frame transport");
    require(!publication.window_host() || publication.window_host() == &s.windows,
            "Scene publication must share the actual window host");
    require(!s.publication || s.publication == &publication, "Scene already has a publication owner");
    s.publication = &publication;
    s.source_fade=publication.display_fade();
    if(s.source_fade)s.source_fade_lifetime=s.source_fade->source_lifetime();
}
const ScenePublication *Scene::publication() const noexcept { return execution_->publication; }
bool Scene::uses_battle_menu(const battle::Roster& roster,const battle::FrameState& frame,const battle::PaletteBankState& colors,const battle::PsiScratch& scratch,const RandomState& random) const noexcept {
 const auto& e=*execution_;return e.battle_frame && e.battle_frame->uses(roster,frame,colors,scratch) && &e.random==&random;
}
bool Scene::uses(const InputState& input) const noexcept { return &execution_->input==&input; }
bool Scene::uses(const RandomState &random) const noexcept { return &execution_->random == &random; }
bool Scene::uses(const ActorWorld &actors) const noexcept { return &execution_->actors == &actors; }
bool Scene::uses(const TickState &clock) const noexcept { return &execution_->clock == &clock; }
bool Scene::uses(const dialogue::WindowHost& windows, const party::State& party) const noexcept {
    return &execution_->windows == &windows && &execution_->party == &party;
}
bool Scene::uses(const BattleDialogue& dialogue) const noexcept {
    return dialogue.uses(execution_->windows, execution_->input);
}
bool Scene::uses(const PartyFormation& formation) const noexcept {
    const auto& e = *execution_;
    return formation.bound_to(e.party, e.actors, e.windows, e.clock) &&
        (!e.interactions || formation.uses(*e.interactions)) &&
        (!e.formation || e.formation == &formation);
}
void Scene::handoff_publication(ScenePublication &expected, ScenePublication &next,
                                const WorldDisplayFade &fade, BattleServices services) {
    auto &s = *execution_;
    s.check(0);
    require(s.publication == &expected && &expected != &next,
            "Scene handoff requires its distinct expected and next publishers");
    require(fade.state().brightness & 0x80, "Scene handoff requires actual forced blank");
    require((!s.battle_frame || (!s.battle_frame->busy() && !s.battle_frame->failed())) &&
                (!s.animations || (!s.animations->busy() && !s.animations->failed())),
            "Scene handoff cannot detach unfinished battle services");
    const auto before_fade = expected.display_fade(), after_fade = next.display_fade();
    require((before_fade || after_fade) && (!before_fade || before_fade == &fade) &&
                (!after_fade || after_fade == &fade),
            "Scene handoff requires the actual shared display fade owner");
    const auto *visual = expected.publication_visual();
    require(visual && next.uses_visual(*visual),
            "Scene handoff requires the actual shared visual owner");
    require(expected.frame_display() && next.uses_frame_display(*expected.frame_display()),
            "Scene handoff requires the actual shared global display transport");
    require((!expected.window_host() || expected.window_host() == &s.windows) &&
                (!next.window_host() || next.window_host() == &s.windows),
            "Scene handoff must retain the actual window host");
    auto *before = expected.window_palette_publication();
    auto *after = next.window_palette_publication();
    require(before && after && s.windows.palette_publication() == before,
            "Scene handoff lost its actual window palette routing");
    if (services.frame) {
        require(next.supports_battle_frame(*services.frame) &&
                    services.frame->version() == s.windows.version() &&
                    services.frame->uses(s.clock, s.windows, s.party, s.meters),
                "Scene handoff requires the actual battle frame owners");
        services.frame->validate_begin();
    }
    if (services.animations) {
        require(next.supports_animation(*services.animations) &&
                    services.animations->version() == s.windows.version() &&
                    services.animations->uses(s.clock) && !services.animations->failed() &&
                    !services.animations->busy(),
                "Scene handoff requires the actual battle animation owners");
        require(!services.frame || services.frame->shares_animation(*services.animations),
                "Battle frame and animations must share the actual PSI, roster and swirl owners");
    }
    // All fallible admission is complete. The checked sink replacement and
    // pointer commits do not capture, consume transfers or invoke callbacks.
    s.windows.replace_palette_publication(*before, *after);
    s.publication = &next;
    s.source_fade=after_fade;
    if(s.source_fade)s.source_fade_lifetime=s.source_fade->source_lifetime();
    s.battle_frame = services.frame;
    s.animations = services.animations;
}
dialogue::Conversation &Scene::dialogue_owner(Operation &parent) {
    require_content_boundary(&parent);
    require(parent.execution_->conversation,"Teleport parent lacks its actual conversation");
    return *parent.execution_->conversation;
}
void Scene::clear_world_capture(Operation *parent) {
    require_content_boundary(parent);
    auto &s = *execution_;
    s.objects.reset();
    s.world.reset();
    s.published.reset();
}
void Scene::refresh_world_capture(Operation *parent) {
    require_content_boundary(parent);
    auto &s = *execution_;
    s.screen();
    s.publish();
}
bool Scene::shares_world(const dialogue::WindowHost& windows,const ActorWorld& actors) const {
    return &execution_->windows==&windows && &execution_->actors==&actors;
}
bool Scene::failed() const noexcept {
    return execution_->poisoned || (execution_->source_work && execution_->source_work->failed());
}
bool Scene::busy() const noexcept { return !execution_->stack.empty(); }
std::uint64_t Scene::completed_frames() const { return execution_->frames; }
std::shared_ptr<const DirectSceneFrame> Scene::frame() const { return execution_->published; }
std::vector<WorldSoundEvent> Scene::take_sound_events() { return std::exchange(execution_->sounds,{}); }
} // namespace eb::native::story
